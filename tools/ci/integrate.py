"""CI: verified submissions into src/, in three steps with separate privileges.

  fetch  (CI_TOKEN)             the service's queue of submissions -> batch.json
  check  (no secrets, Windows)  each submission compiled and verified by fingerprint; matches placed
                                into src/ (place.py: every changed part re-checked whole); revisions
                                (a matched function's part file, edited) merged onto the current file,
                                every function in it re-checked, its readability warnings no more
                                than before
                                -> result.json: per submission its verdict, and the changed files
  apply  (contents: write,      validates the result (paths, functions), writes the files, marks the
          CI_TOKEN, no compiler) functions matched, credits the contributors, commits as them,
                                pushes, tells the service

Untrusted sources are only compiled in `check`, which holds no secrets and can't push. `apply`
trusts nothing in the result it can check itself.

    python tools/ci/integrate.py fetch --out batch.json
    python tools/ci/integrate.py check --in batch.json --out result.json
    python tools/ci/integrate.py apply --in result.json [--push]
"""
from __future__ import annotations

import argparse
import json
import os
import re
import subprocess
import sys
import time
import urllib.request
from pathlib import Path

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[1]
sys.path.insert(0, str(HERE))
sys.path.insert(0, str(ROOT / "tools" / "asylum"))
import place  # noqa: E402
import stats  # noqa: E402

SERVICE = os.environ.get("ASYLUM_URL", "https://api.asylumdecomp.workers.dev").rstrip("/")
SRC_PATH = re.compile(r"^src/(?:[A-Za-z0-9_][A-Za-z0-9_.+-]*/)*[A-Za-z0-9_][A-Za-z0-9_.+-]*\.(?:cpp|c)$")
MAX_SOURCE = 500_000  # a revision is a whole part file
BOT = ("asylumdecomp-bot", "41898282+github-actions[bot]@users.noreply.github.com")
TOUCHED = ["src", "data", "site", "progress.json"]


def log(*a):
    print(time.strftime("%H:%M:%S"), *a, flush=True)


def git(*args, check=True) -> str:
    r = subprocess.run(["git", *args], cwd=ROOT, capture_output=True, text=True, encoding="utf-8")
    if check and r.returncode:
        raise RuntimeError("git %s: %s" % (" ".join(args[:3]), (r.stderr or r.stdout).strip()[-600:]))
    return r.stdout


def service(method: str, path: str, body=None) -> dict:
    tok = os.environ["CI_TOKEN"]
    rq = urllib.request.Request(SERVICE + path, data=json.dumps(body).encode() if body is not None else None, method=method,
                                headers={"Authorization": "Bearer " + tok, "Content-Type": "application/json", "User-Agent": "asylumdecomp-ci"})
    for k in range(4):
        try:
            with urllib.request.urlopen(rq, timeout=60) as r:
                return json.loads(r.read())
        except OSError as e:
            if k == 3:
                raise
            log("service retry:", e)
            time.sleep(5 * (k + 1))
    raise RuntimeError("unreachable")


def write_json(p, obj):
    Path(p).write_text(json.dumps(obj, indent=1) + "\n", encoding="utf-8", newline="\n")


# ------------------------------------------------------------------ fetch

def fetch(out: Path, limit: int) -> None:
    b = service("GET", "/ci/batch?limit=%d" % limit)
    write_json(out, b)
    log("%d submissions" % len(b["submissions"]))


# ------------------------------------------------------------------ check

def blob(text: str) -> str:
    """git's hash of a file's text (what a revision names as its base)."""
    import hashlib
    b = text.encode("utf-8")
    return hashlib.sha1(b"blob %d\0" % len(b) + b).hexdigest()


def blocks(text: str) -> dict[str, str]:
    """Each function's text in a part file, by address (from its // @baa line to the next)."""
    p = re.split(r"^// @baa 0x([0-9a-f]{8})\n", text, flags=re.M)
    return {p[k]: p[k + 1] for k in range(1, len(p), 2)}


def merge(current: str, base: str, new: str) -> str | None:
    """The contributor's edit (base -> new) applied to the file as it is now; None on a conflict."""
    import tempfile
    with tempfile.TemporaryDirectory() as d:
        fs = []
        for name, text in (("current", current), ("base", base), ("new", new)):
            f = Path(d) / name
            f.write_text(text, encoding="utf-8", newline="\n")
            fs.append(str(f))
        r = subprocess.run(["git", "merge-file", "-p", "--quiet", *fs], capture_output=True, text=True, encoding="utf-8")
    return r.stdout if r.returncode == 0 else None


def revise(repo, s: dict) -> dict:
    """A revision: the part file replaced by the contributor's version, if every function in it still
    matches and it has no more readability warnings than before."""
    import check as checker
    va, rel = s["va"], s["revise"]["file"]
    entry = next((u for u in repo.units["units"] if u["source"] == rel and u.get("kind") != "library"), None)
    if entry is None or not any(f["va"] == va for f in entry["functions"]):
        return {"status": "failed", "reason": "%s isn't in src/%s" % (va, rel)}
    path = ROOT / "src" / rel
    current = path.read_text(encoding="utf-8")
    new = s["source"].replace("\r\n", "\n")
    if blob(current) != s["revise"]["base"]:
        base = git("cat-file", "blob", s["revise"]["base"], check=False)
        new = merge(current, base, new) if base else None
        if new is None:
            return {"status": "failed", "reason": "src/%s changed since you got it, and your edit conflicts with that: "
                    "get it again and redo the edit" % rel}
    if new == current:
        return {"status": "failed", "reason": "nothing changed"}
    was, now = len(checker.smells(current)), len(checker.smells(new))
    if now > was:
        return {"status": "failed", "reason": "more readability warnings than before (%d, was %d)" % (now, was)}
    funcs = [(int(f["va"], 16), ([s["function"]] if f["va"] == va and s.get("function") else [])
              + [n for n in (f.get("symbol"), "sub_" + f["va"]) if n]) for f in entry["functions"]]
    res = checker.unit_check(new, entry["profile"], funcs)
    bad = repo.problems(res, [v for v, _ in funcs])
    if bad:
        v, why = next(iter(bad.items()))
        return {"status": "failed", "reason": "%08x no longer matches in the file: %s" % (v, why[:300])}
    path.write_text(new, encoding="utf-8", newline="\n")
    symbols = {}
    for f in entry["functions"]:
        sym = res["functions"][f["va"]].get("symbol")
        if sym and sym != f.get("symbol"):
            symbols[f["va"]] = [f.get("symbol"), sym]
            f["symbol"] = sym
    old, cur = blocks(current), blocks(new)
    changed = sum(old[k] != cur.get(k) for k in old) or 1
    return {"status": "revised", "file": rel, "changed": changed, "symbols": symbols}


def check(inp: Path, out: Path) -> None:
    subs = json.loads(inp.read_text(encoding="utf-8"))["submissions"]
    base = git("rev-parse", "HEAD").strip()
    repo = place.Repo(ROOT, log)
    results, members = [], {}
    # revisions first, so a revised file takes this run's new matches on top
    revised = {}
    for s in subs:
        if s.get("revise"):
            r = {"id": s["id"], "va": s["va"]}
            r.update(revise(repo, s) if len(s["source"]) <= MAX_SOURCE else {"status": "failed", "reason": "too large"})
            revised[s["id"]] = r
            log(s["va"], "revision", r["status"], r.get("reason", ""))
    revision_files = {}
    if any(r["status"] == "revised" for r in revised.values()):
        revision_files = {"src/" + r["file"]: (ROOT / "src" / r["file"]).read_text(encoding="utf-8")
                          for r in revised.values() if r["status"] == "revised"}
        revision_files["src/units.json"] = repo.units_text()
    for s in subs:
        if s["id"] in revised:
            results.append(revised[s["id"]])
            continue
        import check as checker
        va = int(s["va"], 16)
        r = {"id": s["id"], "va": s["va"]}
        f = repo.funcs.get(va)
        if f is None:
            r.update(status="failed", reason="not the start of a function")
        elif f[repo.cols["status"]] == "matched" or va in members:
            r.update(status="duplicate", reason="matched already")
        elif len(s["source"]) > MAX_SOURCE:
            r.update(status="failed", reason="larger than %d bytes" % MAX_SOURCE)
        else:
            v = checker.check(va, s["source"], s.get("function"))
            if v.status != "match":
                r.update(status="failed", reason="%s: %s" % (v.status, "; ".join(v.problems[:3])))
            else:
                fr = repo.func(va)
                members[va] = place.Member(va=va, size=fr["size"], source=s["source"], symbol=fr["symbol"],
                                           profile=fr["profile"] or "ue3", function=v.symbol)
                r.update(status="pending")
        results.append(r)
        log(s["va"], r["status"], r.get("reason", ""))
    by_unit: dict[str, list] = {}
    for m in members.values():
        by_unit.setdefault(repo.unit_of(m.va), []).append(m)
    done = {}
    for unit, ms in sorted(by_unit.items()):
        placed, failed = repo.place_unit(unit, ms)
        log("%s: %d placed%s" % (unit, len(placed), ", %d not" % len(failed) if failed else ""))
        for va, (src, sym) in placed.items():
            repo.mark_matched(va, sym, src)
            done[va] = {"status": "matched", "file": src, "symbol": sym}
        for va, why in failed.items():
            done[va] = {"status": "failed", "reason": why}
    for r in results:
        if r["status"] == "pending":
            r.update(done.get(int(r["va"], 16), {"status": "failed", "reason": "not placed"}))
    files = {}
    if any(r["status"] in ("matched", "revised") for r in results):
        repo.save()
        changed = git("status", "--porcelain", "--untracked-files=all", "--", "src").splitlines()
        for line in changed:
            p = line[3:].strip().strip('"')
            files[p] = (ROOT / p).read_text(encoding="utf-8")
    write_json(out, {"base": base, "results": results, "files": files, "revision_files": revision_files})


# ------------------------------------------------------------------ apply

def validate(res: dict, units_before: dict, subs: dict) -> None:
    files = res["files"]
    for p, body in list(files.items()) + list(res.get("revision_files", {}).items()):
        if (p != "src/units.json" and not SRC_PATH.match(p)) or ".." in p.split("/") or len(body) > 20_000_000:
            raise ValueError("unexpected path %r" % p)
    revised = [r for r in res["results"] if r["status"] == "revised"]
    for r in revised:
        if not subs[r["id"]].get("revise") or r["file"] != subs[r["id"]]["revise"]["file"]:
            raise ValueError("%s: a revision of another file than submitted" % r["va"])
        if "src/" + r["file"] not in res.get("revision_files", {}):
            raise ValueError("%s: its revised file isn't in the result" % r["va"])
    if revised:
        units = json.loads(res["revision_files"].get("src/units.json") or json.dumps(units_before))
        where = {f["va"]: u["source"] for u in units["units"] for f in u["functions"]}
        if where != {f["va"]: u["source"] for u in units_before["units"] for f in u["functions"]}:
            raise ValueError("a revision moves functions between files")
        if any(where.get(r["va"]) != r["file"] for r in revised):
            raise ValueError("a revised function isn't in its file")
    for r in res["results"]:
        if r["status"] == "matched" and subs[r["id"]].get("revise"):
            raise ValueError("%s: a revision counted as a match" % r["va"])
    ids = [r["id"] for r in res["results"]]
    if len(ids) != len(set(ids)) or set(ids) - set(subs):
        raise ValueError("results for submissions that weren't in the batch")
    new = [r for r in res["results"] if r["status"] == "matched"]
    for r in res["results"]:
        if r["va"] != subs[r["id"]]["va"]:
            raise ValueError("result %s is for another function" % r["id"])
    if not new:
        return
    units = json.loads(files.get("src/units.json") or json.dumps(units_before))
    member = {}
    for u in units["units"]:
        if u.get("kind") != "library" and not SRC_PATH.match("src/" + u["source"]):
            raise ValueError("unexpected unit file %r" % u["source"])
        for f in u["functions"]:
            if f["va"] in member:
                raise ValueError("%s is in two files" % f["va"])
            member[f["va"]] = u["source"]
    old = {f["va"] for u in units_before["units"] for f in u["functions"]}
    if old - set(member) or set(member) - old != {r["va"] for r in new}:
        raise ValueError("src/units.json changes other functions than the matched ones")
    for r in new:
        if member.get(r["va"]) != r["file"] or not ((ROOT / "src" / r["file"]).exists() or "src/" + r["file"] in files):
            raise ValueError("%s: its file isn't in the result" % r["va"])


def apply(inp: Path, batch: Path, push: bool) -> None:
    res = json.loads(inp.read_text(encoding="utf-8"))
    subs = {s["id"]: s for s in json.loads(batch.read_text(encoding="utf-8"))["submissions"]}
    head = git("rev-parse", "HEAD").strip()
    if head != res["base"] and git("diff", "--name-only", res["base"], head, "--", "src", check=False).strip():
        log("src/ changed since the check: the next run checks them again")
        return
    validate(res, json.loads((ROOT / "src" / "units.json").read_text(encoding="utf-8")), subs)
    revised = [r for r in res["results"] if r["status"] == "revised"]
    if revised:
        # their own commit, before the matches: "modification", no credit
        for p, body in res["revision_files"].items():
            (ROOT / p).write_text(body, encoding="utf-8", newline="\n")
        ft = place.read_gz(ROOT / "data" / "functions.json.gz")
        col = {c: k for k, c in enumerate(ft["columns"])}
        rows = {r[col["va"]]: r for r in ft["rows"]}
        syms = place.read_gz(ROOT / "data" / "symbols.json.gz")
        for r in revised:
            for v, (old, new_sym) in (r.get("symbols") or {}).items():
                row = rows[int(v, 16)]
                new_sym = place.clean_symbol(new_sym)
                if new_sym:
                    row[col["symbol"]] = new_sym
                    if syms.get(old) == str(int(v, 16)):
                        del syms[old]
                    if not new_sym.startswith("?sub_"):
                        syms[new_sym] = str(int(v, 16))
        place.write_gz(ROOT / "data" / "functions.json.gz", ft)
        place.write_gz(ROOT / "data" / "symbols.json.gz", syms)
        git("add", "-A", "--", *TOUCHED)
        commit("modification", sum(r.get("changed", 1) for r in revised), [subs[r["id"]] for r in revised])
    new = [r for r in res["results"] if r["status"] == "matched"]
    if new:
        for p, body in res["files"].items():
            (ROOT / p).parent.mkdir(parents=True, exist_ok=True)
            (ROOT / p).write_text(body, encoding="utf-8", newline="\n")
        ft = place.read_gz(ROOT / "data" / "functions.json.gz")
        col = {c: k for k, c in enumerate(ft["columns"])}
        rows = {r[col["va"]]: r for r in ft["rows"]}
        syms = place.read_gz(ROOT / "data" / "symbols.json.gz")
        day = time.strftime("%Y-%m-%d", time.gmtime())
        with open(ROOT / "data" / "contributions.jsonl", "a", encoding="utf-8", newline="\n") as fh:
            for r in new:
                s = subs[r["id"]]
                row = rows[int(r["va"], 16)]
                row[col["status"]] = "matched"
                row[col["file"]] = r["file"]
                sym = place.clean_symbol(r.get("symbol"))
                if sym and not row[col["symbol"]]:
                    row[col["symbol"]] = sym
                if sym and sym not in syms and not sym.startswith("?sub_"):
                    syms[sym] = str(int(r["va"], 16))
                fh.write(json.dumps({"va": r["va"], "login": s["login"], "model": s.get("model"), "bytes": row[col["size"]],
                                     "date": day, "id": r["id"]}) + "\n")
        place.write_gz(ROOT / "data" / "functions.json.gz", ft)
        place.write_gz(ROOT / "data" / "symbols.json.gz", syms)
        stats.write(ROOT)
        git("add", "-A", "--", *TOUCHED)
        commit("match", len(new), [subs[r["id"]] for r in new])
    if new or revised:
        if push:
            for k in range(5):
                try:
                    git("push", "-q", "origin", "HEAD:main")
                    break
                except RuntimeError as e:
                    if k == 4:
                        raise
                    log("push retry (%s)" % str(e)[:120])
                    git("-c", "user.name=" + BOT[0], "-c", "user.email=" + BOT[1], "pull", "-q", "--rebase", "origin", "main")
                    time.sleep(5 * (k + 1))
    log("%d matched, %d revised, %d failed, %d duplicates" % (len(new), len(revised), sum(r["status"] == "failed" for r in res["results"]),
                                                              sum(r["status"] == "duplicate" for r in res["results"])))
    if push:
        sha = git("rev-parse", "HEAD").strip() if new else None
        rev_sha = git("rev-parse", "HEAD~1" if new else "HEAD").strip() if revised else None  # after any rebase
        log("service:", service("POST", "/ci/result", {"commit": sha, "revision_commit": rev_sha, "results": [
            {k: r.get(k) for k in ("id", "va", "status", "reason", "file", "symbol")} for r in res["results"]]}))


def commit(kind: str, n: int, ss: list[dict]) -> None:
    """Commits what's staged as "KIND: N functions by @a, @b", authored by the first contributor (by
    login), the others as co-authors; by the bot when everyone's contribution identity is off."""
    by_login: dict[str, dict] = {}
    for s in ss:
        if s.get("login"):  # None: the account's contribution identity is off
            by_login.setdefault(s["login"], s)
    logins = sorted(by_login)
    who = ["@" + l for l in logins] + (["anonymous"] if any(not s.get("login") for s in ss) else [])
    trailers = "".join("\nCo-authored-by: %s <%s>" % (l, noreply(by_login[l])) for l in logins[1:])
    author = "%s <%s>" % (logins[0], noreply(by_login[logins[0]])) if logins else "%s <%s>" % BOT
    git("-c", "user.name=" + BOT[0], "-c", "user.email=" + BOT[1], "commit", "-q", "--author", author,
        "-m", "%s: %d function%s by %s%s" % (kind, n, "" if n == 1 else "s", ", ".join(who), trailers))


def noreply(s: dict) -> str:
    return "%s+%s@users.noreply.github.com" % (s["uid"], s["login"]) if s.get("uid") else "%s@users.noreply.github.com" % s["login"]


def main():
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = p.add_subparsers(dest="cmd", required=True)
    s = sub.add_parser("fetch")
    s.add_argument("--out", type=Path, required=True)
    s.add_argument("--limit", type=int, default=200)
    s = sub.add_parser("check")
    s.add_argument("--in", dest="inp", type=Path, required=True)
    s.add_argument("--out", type=Path, required=True)
    s = sub.add_parser("apply")
    s.add_argument("--in", dest="inp", type=Path, required=True)
    s.add_argument("--batch", type=Path, required=True)
    s.add_argument("--push", action="store_true")
    a = p.parse_args()
    if a.cmd == "fetch":
        fetch(a.out, a.limit)
    elif a.cmd == "check":
        check(a.inp, a.out)
    else:
        apply(a.inp, a.batch, a.push)


if __name__ == "__main__":
    main()

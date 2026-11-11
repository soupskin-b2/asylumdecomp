"""CI: verified submissions into src/, in three steps with separate privileges.

  fetch  (CI_TOKEN)             the service's queue of submissions -> batch.json
  check  (no secrets, Windows)  each submission compiled and verified by fingerprint; matches placed
                                into src/ (place.py: every changed part re-checked whole)
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
MAX_SOURCE = 200_000
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

def check(inp: Path, out: Path) -> None:
    import check as checker
    subs = json.loads(inp.read_text(encoding="utf-8"))["submissions"]
    base = git("rev-parse", "HEAD").strip()
    repo = place.Repo(ROOT, log)
    results, members = [], {}
    for s in subs:
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
            repo.mark_matched(va, sym)
            done[va] = {"status": "matched", "file": src, "symbol": sym}
        for va, why in failed.items():
            done[va] = {"status": "failed", "reason": why}
    for r in results:
        if r["status"] == "pending":
            r.update(done.get(int(r["va"], 16), {"status": "failed", "reason": "not placed"}))
    files = {}
    if any(r["status"] == "matched" for r in results):
        repo.save()
        changed = git("status", "--porcelain", "--untracked-files=all", "--", "src").splitlines()
        for line in changed:
            p = line[3:].strip().strip('"')
            files[p] = (ROOT / p).read_text(encoding="utf-8")
    write_json(out, {"base": base, "results": results, "files": files})


# ------------------------------------------------------------------ apply

def validate(res: dict, units_before: dict, subs: dict) -> None:
    files = res["files"]
    for p, body in files.items():
        if (p != "src/units.json" and not SRC_PATH.match(p)) or ".." in p.split("/") or len(body) > 20_000_000:
            raise ValueError("unexpected path %r" % p)
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
        by_login: dict[str, list] = {}
        with open(ROOT / "data" / "contributions.jsonl", "a", encoding="utf-8", newline="\n") as fh:
            for r in new:
                s = subs[r["id"]]
                row = rows[int(r["va"], 16)]
                row[col["status"]] = "matched"
                sym = place.clean_symbol(r.get("symbol"))
                if sym and not row[col["symbol"]]:
                    row[col["symbol"]] = sym
                if sym and sym not in syms and not sym.startswith("?sub_"):
                    syms[sym] = str(int(r["va"], 16))
                fh.write(json.dumps({"va": r["va"], "login": s["login"], "model": s.get("model"), "bytes": row[col["size"]],
                                     "date": day, "id": r["id"]}) + "\n")
                if s.get("login"):  # None: the account's contribution identity is off
                    by_login.setdefault(s["login"], []).append(s)
        place.write_gz(ROOT / "data" / "functions.json.gz", ft)
        place.write_gz(ROOT / "data" / "symbols.json.gz", syms)
        stats.write(ROOT)
        git("add", "-A", "--", *TOUCHED)
        # author: the first credited contributor (by login), the others as co-authors; the bot when
        # everyone in this run has their contribution identity off
        logins = sorted(by_login)
        anon = sum(not subs[r["id"]].get("login") for r in new)
        who = ["@" + l for l in logins] + (["anonymous"] if anon else [])
        trailers = "".join("\nCo-authored-by: %s <%s>" % (l, noreply(by_login[l][0])) for l in logins[1:])
        author = "%s <%s>" % (logins[0], noreply(by_login[logins[0]][0])) if logins else "%s <%s>" % BOT
        git("-c", "user.name=" + BOT[0], "-c", "user.email=" + BOT[1], "commit", "-q", "--author", author,
            "-m", "match: %d function%s by %s%s" % (len(new), "" if len(new) == 1 else "s", ", ".join(who), trailers))
        if push:
            for k in range(5):
                try:
                    git("push", "-q", "origin", "HEAD:main")
                    break
                except RuntimeError as e:
                    if k == 4:
                        raise
                    log("push retry (%s)" % str(e)[:120])
                    git("pull", "-q", "--rebase", "origin", "main")
                    time.sleep(5 * (k + 1))
    log("%d matched, %d failed, %d duplicates" % (len(new), sum(r["status"] == "failed" for r in res["results"]),
                                                   sum(r["status"] == "duplicate" for r in res["results"])))
    if push:
        sha = git("rev-parse", "HEAD").strip() if new else None
        log("service:", service("POST", "/ci/result", {"commit": sha, "results": [
            {k: r.get(k) for k in ("id", "va", "status", "reason", "file", "symbol")} for r in res["results"]]}))


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

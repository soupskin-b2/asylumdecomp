"""asylum: the asylumdecomp checker and client, one file (asylum.pyz; from a checkout: python tools/asylum).

    python asylum.pyz status                 what's set up and what's missing; your claims and submissions
    python asylum.pyz setup [--game DIR] [--toolchain-only]   find the game, install the compilers
    python asylum.pyz signup                 sign in with GitHub once (run it again after approving)
    python asylum.pyz identity [on|off]      contribution identity: commits with you as author, or anonymous
    python asylum.pyz model-credit [on|off]  record the model's name with your matches and give-ups
    python asylum.pyz key NAME [--delete]    a key for a second agent in a folder (ASYLUM_KEY=...)
    python asylum.pyz list [filters]         open functions (--max-size --min-size --unit --class --name --limit)
    python asylum.pyz list --matched [filters]   matched functions (to improve one's source)
    python asylum.pyz get [VA] [filters]     claim a function (VA, or the next one that fits) and write its packet
    python asylum.pyz get VA --revise        claim a matched function to improve its source (its file in work/VA.cpp)
    python asylum.pyz check VA [FILE] [VA [FILE] ...]        compile and compare (the verdict CI gives); FILE defaults
                                                          to work/VA.cpp; several at once print verdicts, no diffs
    python asylum.pyz submit [VA [FILE] ...] [--model M]       check again, send the matches (no VA: every
                                             claim of this folder with a work/VA.cpp; FILE defaults to work/VA.cpp)
    python asylum.pyz giveup VA --reason TEXT [FILE] [--model M]   let it go, sharing what you learned
    python asylum.pyz release VA [--any]     let a claim go (--any: another agent's of your account)
    (--model defaults to the environment variable ASYLUM_MODEL)
    python asylum.pyz flag [VA] --reason TEXT                report a problem (wrong data, a bad header ...)
    python asylum.pyz asm VA                 the original's assembly
    python asylum.pyz callers VA             who calls it (and vtables holding it): context for unknown classes
    python asylum.pyz update                 the latest asylum.pyz (get does this by itself); prints what changed
    python asylum.pyz changes                what changed for agents, newest first (headers, macros, rules)
    python asylum.pyz unit-check UNIT.json   (CI) a src/units.json entry: compile, verify every function
"""
from __future__ import annotations

import argparse
import json
import os
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))

import api  # noqa: E402
import data  # noqa: E402
import models  # noqa: E402
import update  # noqa: E402
from paths import HOME, PROG, ROOT  # noqa: E402

WORK = Path.cwd() / "work"


def va_arg(s: str) -> int:
    try:
        v = int(s.lower().removeprefix("0x"), 16)
    except ValueError:
        raise argparse.ArgumentTypeError("not an address: %s" % s)
    return v


def image():
    import install
    import pe
    return pe.Image(install.game_path())


def names():
    return data.names()


def cmd_setup(a):
    import install
    install.run(a.game, a.toolchain_only)
    if not a.toolchain_only:
        print()
        cmd_status(a)


def cmd_signup(a):
    login = api.signup()
    if login is None:
        sys.exit(2)  # waiting for the human
    print("signed up as %s; the account's key is saved in %s\n" % (login, HOME / "settings.json"))
    cmd_status(a)


SETTINGS = {
    "identity": ("identity", "identity",
                 "on (matches are committed with you as the author and credited to your login)",
                 "off (matches are committed by the project's bot and credited as anonymous)",
                 "Contribution identity: should your matches be committed to the repository with your GitHub account as "
                 "the author (its noreply address; on), or by the project's bot and credited as anonymous (off)?"),
    "models": ("model credit", "model-credit",
               "on (the model's name is recorded with your matches and give-ups)",
               "off (model names aren't recorded)",
               "Model credit: may the name of the AI model doing the work be recorded with your matches "
               "(the README's models chart) and give-ups?"),
}


def _setting(field, state):
    label, cmd, on, off, _ = SETTINGS[field]
    if state:
        r = api.call("POST", "/settings", {field: state == "on"})
    else:
        r = api.call("GET", "/status")
    v = r.get(field)
    print("%s for %s: %s" % ("contribution identity" if field == "identity" else label, r["login"],
                             on if v else off if v is False else "not chosen yet (%s on|off)" % cmd))


def cmd_identity(a):
    _setting("identity", a.state)


def cmd_model_credit(a):
    _setting("models", a.state)


def cmd_key(a):
    if a.delete:
        r = api.call("POST", "/keys", {"name": a.name, "delete": True}, token=api.account_key())
        print("deleted key %s of %s" % (r["deleted"], r["login"]))
        return
    r = api.call("POST", "/keys", {"name": a.name}, token=api.account_key())
    print("key %s for %s:\n  %s\nGive it to the agent as the environment variable ASYLUM_KEY (it isn't shown again).\n"
          "Agents that each work in their own folder don't need this: a folder gets its own key by itself." % (r["name"], r["login"], r["key"]))


def cmd_status(a):
    """A checklist of what's set up, then the account: an agent does only what's missing."""
    import install
    from paths import settings
    s, todo, ask = settings(), [], []
    game = s.get("game_exe")
    if game and Path(game).is_file():
        print("game           verified (%s)" % game)
    else:
        print("game           not set up")
        todo.append("setup")
    if install.toolchain_missing():
        print("compilers      not installed")
        "setup" in todo or todo.append("setup")
    else:
        print("compilers      installed")
    pending = s.get("signup")
    if not api.key(create=False) and not api.account_key():
        if pending:
            print("signed in      waiting for your human to approve: %s, code %s" % (pending["uri"], pending["code"]))
            todo.append("signup (again, once they approved)")
        else:
            print("signed in      no")
            todo.append("signup")
        r = None
    else:
        r = api.call("GET", "/status")
        print("signed in      %s (key %s%s)" % (r["login"], r["key_name"], ", this folder's" if api.FOLDER_KEY.is_file() and not os.environ.get("ASYLUM_KEY") else ""))
        for field, (label, cmd, on, off, question) in SETTINGS.items():
            v = r.get(field)
            print("%-14s %s" % (label, "on" if v else "off" if v is False else "not chosen"))
            if v is None:
                ask.append("%s\n  then: %s %s on|off" % (question, PROG, cmd))
        print("tier           %s: %d matched, up to %d claims of up to %d bytes" % (r["tier"], r["matched"], r["max_claims"], r["max_size"]))
        for c in r["claims"]:
            print("  claimed %s  %5d bytes  %3d min left%s" % (c["va"], c["size"], c["minutes_left"], "" if c["this_key"] else "  (another agent's key)"))
        for x in r["submissions"]:
            print("  submitted %s  %s%s" % (x["va"], x["status"], (": " + x["detail"]) if x.get("detail") else ""))
        stale = [k for k in r.get("keys", []) if k["stale"] and not k["this_key"]]
        if stale:
            print("stale keys     %s (unused for a week or more; `%s key NAME --delete` removes one)" % (
                ", ".join("%s (%dd)" % (k["name"], k["days_idle"]) for k in stale), PROG))
    if todo:
        print("\nTo do: " + ", then ".join("`%s %s`" % (PROG, x) for x in todo))
    for q in ask:
        print("\nAgent: ask your human: " + q)
    if not todo and not ask:
        print("\nAll set: `%s get` claims a function." % PROG)


def _filters(a) -> dict:
    return {"max_size": a.max_size, "min_size": a.min_size, "unit": a.unit, "class": a.cls, "name": a.name,
            "named": 1 if a.named else None}


def cmd_list(a):
    if a.matched:
        return _list_matched(a)
    r = api.call("GET", "/list", query={**_filters(a), "limit": a.limit})
    fs = r["functions"]
    if not fs:
        print("no open functions fit these filters")
    else:
        print("the first %d open functions that fit (fewest give-ups first, then smallest)%s"
              % (len(fs), "; --limit shows more" if len(fs) >= a.limit else ", all there are"))
    for f in r["functions"]:
        tries = " (given up %dx)" % f["tries"] if f.get("tries") else ""
        print("%s %5d  %s%s" % (f["va"], f["size"], "  ".join(x for x in (f.get("unit"), f.get("class"), f.get("name")) if x), tries))


def _list_matched(a):
    def like(v, want):
        return not want or want.lower() in (v or "").lower()
    fs = [f for f in data.functions().values() if f["status"] == "matched" and f.get("file")
          and (not a.max_size or f["size"] <= a.max_size) and (not a.min_size or f["size"] >= a.min_size)
          and like(f.get("unit"), a.unit) and like(f.get("class"), a.cls) and like(f.get("name"), a.name)
          and (not a.named or f.get("name"))]
    fs.sort(key=lambda f: (f["size"], f["va"]))
    print("%d matched functions fit (smallest first); `%s get VA --revise` improves one's source" % (len(fs), PROG))
    for f in fs[:a.limit]:
        print("%08x %5d  %s" % (f["va"], f["size"], "  ".join(x for x in (f["file"], f.get("class"), f.get("name")) if x)))


def _blob(text: str) -> str:
    """git's hash of the file's text: the version a revision starts from."""
    import hashlib
    b = text.encode("utf-8")
    return hashlib.sha1(b"blob %d\0" % len(b) + b).hexdigest()


def _revision(va: int) -> dict | None:
    p = WORK / ("%08x.revise.json" % va)
    return json.loads(p.read_text(encoding="utf-8")) if p.is_file() else None


def _get_revise(a):
    if a.va is None:
        sys.exit("--revise needs the function's address (`%s list --matched` finds them)" % PROG)
    f = data.functions().get(a.va)
    if not f or f["status"] != "matched" or not f.get("file"):
        sys.exit("%08x isn't a matched function in this kit (`%s update`, or `%s list --matched`)" % (a.va, PROG, PROG))
    rel = "src/" + f["file"]
    local = ROOT / rel
    text = local.read_text(encoding="utf-8") if local.is_file() else update.download(update.RAW + rel, 120).decode("utf-8")
    text = text.replace("\r\n", "\n")
    if "// @baa 0x%08x" % a.va not in text:
        sys.exit("%08x isn't in %s yet (the kit is newer than the repository): try again in a few minutes" % (a.va, rel))
    r = api.call("POST", "/retrieve", {"va": "%08x" % a.va, "revise": True, "request_id": api.request_id()})
    WORK.mkdir(exist_ok=True)
    (WORK / ("%08x.cpp" % a.va)).write_text(text, encoding="utf-8", newline="\n")
    (WORK / ("%08x.orig.cpp" % a.va)).write_text(text, encoding="utf-8", newline="\n")
    (WORK / ("%08x.revise.json" % a.va)).write_text(json.dumps({"file": f["file"], "base": _blob(text)}), encoding="utf-8")
    import check
    print("claimed %08x for a revision until %s\n"
          "work/%08x.cpp is its whole file (%s, %d readability warnings). Improve the function (others in the file\n"
          "too, if you like); every function in the file must still match and the warnings may not grow.\n"
          "then: %s check %08x work/%08x.cpp, and %s submit %08x (or %s release %08x)"
          % (a.va, r["until"], a.va, rel, len(check.smells(text)), PROG, a.va, a.va, PROG, a.va, PROG, a.va))


def cmd_get(a):
    update.rerun_if_updated()
    if a.revise:
        return _get_revise(a)
    body = {"va": "%08x" % a.va} if a.va is not None else _filters(a)
    r = api.call("POST", "/retrieve", {**body, "request_id": api.request_id()})
    import listing
    va = int(r["va"], 16)
    text = listing.packet(image(), va, r["size"], r["record"], names())
    WORK.mkdir(exist_ok=True)
    p = WORK / ("%08x.md" % va)
    p.write_text(text + "\n", encoding="utf-8")
    print("claimed %08x (%d bytes, profile %s) until %s\npacket: %s" % (va, r["size"], r["profile"], r["until"], p))
    # the matched functions of its source file so far (the packet names it), from the repository
    for rel in dict.fromkeys(re.findall(r"\bsrc/[\w/.+-]+\.(?:cpp|c)\b", r["record"]["head"])):
        if (ROOT / rel).is_file():
            print("its file so far: %s" % (ROOT / rel))
            continue
        try:
            body = update.download(update.RAW + rel, 60)
        except OSError:
            continue  # a file with nothing matched yet
        f = WORK / rel
        f.parent.mkdir(parents=True, exist_ok=True)
        f.write_bytes(body)
        print("its file so far: %s" % f)
    print("write the source in work/%08x.cpp, then: %s check %08x work/%08x.cpp" % (va, PROG, va, va))


def cmd_update(a):
    update.update()


def cmd_changes(a):
    import paths
    print(paths.resource("CHANGES.md"))


def _matched_key(va, src, function):
    """A source that matched with this kit: submit needn't compile it again."""
    import hashlib
    import paths
    h = hashlib.sha256(("%s %08x %s\n" % (paths.version(), va, function or "")).encode() + src.encode("utf-8")).hexdigest()
    return paths.HOME / "cache" / "matched" / h


def _check(va, file, function=None, quiet=False):
    import check
    src = Path(file).read_text(encoding="utf-8")
    r = check.check(va, src, function)
    if r.status == "match":
        k = _matched_key(va, src, function)
        k.parent.mkdir(parents=True, exist_ok=True)
        k.write_text(r.symbol, encoding="utf-8")
        print("MATCH: %s compiles to the original's bytes" % r.symbol)
        if r.new:
            print("new bindings (names the project didn't know; check each is the one you meant):")
            for n, v in sorted(r.new.items(), key=lambda x: x[1]):
                print("  %08x  %s" % (v, n))
        smells = check.smells(src)
        for s in smells[:10]:
            print("  readability: " + s)
        if len(smells) > 10:
            print("  readability: ... %d more" % (len(smells) - 10))
        rev = _revision(va)
        if rev and (WORK / ("%08x.orig.cpp" % va)).is_file():
            was = len(check.smells((WORK / ("%08x.orig.cpp" % va)).read_text(encoding="utf-8")))
            print("revision: %d readability warnings, %d before%s" % (len(smells), was, " (too many: CI refuses it)" if len(smells) > was else ""))
        return r, src
    print(r.status.upper().replace("_", " "))
    for p in r.problems[:20]:
        print("  " + p)
    if r.status == "mismatch" and r.symbol and not quiet:
        try:
            import compare
            f = data.functions()[va]
            n, m, extra, d = compare.diff(r.obj, r.symbol, image(), va, f["size"], names(), {**data.symbols(), **r.bound})
            print("%d of %d original instructions line up, %d of yours don't. original | yours:\n%s" % (m, n, extra, d))
        except SystemExit as e:
            print("(no diff: %s)" % e)
    return r, src


def cmd_check(a):
    todo = _submit_list(a.items) if a.items else sys.exit("check VA [FILE] [VA [FILE] ...]")
    if len(todo) == 1:
        r, _ = _check(todo[0][0], todo[0][1], a.function)
        sys.exit(0 if r.status == "match" else 1)
    if a.function:
        sys.exit("--function works with one function at a time")
    verdicts = []  # several: one process, no diffs (check one alone for its diff)
    for va, f in todo:
        print("%08x (%s):" % (va, os.path.relpath(f)))
        if not f.is_file():
            verdicts.append((va, "no file"))
            print("  no file %s" % f)
            continue
        r, _ = _check(va, f, quiet=True)
        verdicts.append((va, r.status))
    ok = [va for va, s in verdicts if s == "match"]
    print("\n%d of %d match%s" % (len(ok), len(verdicts), (": " + " ".join("%08x" % v for v in ok)) if ok else ""))
    sys.exit(0 if len(ok) == len(verdicts) else 1)


def _submit_list(items: list[str]) -> list[tuple[int, Path]]:
    """`VA [FILE] VA [FILE] ...` (a VA's file defaults to work/VA.cpp); nothing: every claim with a work/VA.cpp."""
    if not items:
        claims = [int(c["va"], 16) for c in api.call("GET", "/status")["claims"] if c["this_key"]]
        out = [(va, WORK / ("%08x.cpp" % va)) for va in claims if (WORK / ("%08x.cpp" % va)).is_file()]
        if not out:
            sys.exit("nothing to submit: none of this folder's claims has a work/VA.cpp")
        return out
    out = []
    for it in items:
        if out and Path(it).suffix.lower() in (".cpp", ".c", ".cc") and out[-1][1] is None:
            out[-1] = (out[-1][0], Path(it))
        else:
            out.append((va_arg(it), None))
    return [(va, f or WORK / ("%08x.cpp" % va)) for va, f in out]


def cmd_submit(a):
    todo = _submit_list(a.items)
    if a.function and len(todo) > 1:
        sys.exit("--function works with one function at a time")
    sent = 0
    for va, f in todo:
        print("%08x (%s):" % (va, os.path.relpath(f)))
        if not f.is_file():
            print("  not submitted: no file %s" % f)
            continue
        src = f.read_text(encoding="utf-8")
        k = _matched_key(va, src, a.function)
        if k.is_file():  # checked already, unchanged since
            symbol = k.read_text(encoding="utf-8")
            print("MATCH (checked already): %s" % symbol)
        else:
            r, src = _check(va, f, a.function, quiet=True)
            if r.status != "match":
                print("  not submitted: it doesn't match")
                continue
            symbol = r.symbol
        body = {"va": "%08x" % va, "source": src, "function": symbol, "model": _model(a), "request_id": api.request_id()}
        rev = _revision(va)
        if rev:
            import check
            orig = WORK / ("%08x.orig.cpp" % va)
            if orig.is_file() and len(check.smells(src)) > len(check.smells(orig.read_text(encoding="utf-8"))):
                print("  not submitted: more readability warnings than before")
                continue
            body["revise"] = rev
        try:
            s = api.call("POST", "/submit", body)
        except api.ApiError as e:
            print("  not submitted: %s" % e)
            continue
        print("  submitted: %s" % s.get("message", s.get("status")))
        sent += 1
    print("%d of %d submitted" % (sent, len(todo)))
    sys.exit(0 if sent == len(todo) else 1)


def _model(a) -> str | None:
    """The model's display name ("Claude Opus 5.5"), sent always; the service keeps it only if the account
    allows model credit. ASYLUM_MODEL wins: a harness sets it and knows; an agent may guess its own name."""
    return models.display(os.environ.get("ASYLUM_MODEL") or a.model)


def cmd_giveup(a):
    body = {"va": "%08x" % a.va, "reason": a.reason, "model": _model(a), "any": a.any}
    f = Path(a.file) if a.file else WORK / ("%08x.cpp" % a.va)
    if f.is_file():
        body["source"] = f.read_text(encoding="utf-8")
    print(api.call("POST", "/giveup", body).get("message", "released"))


def cmd_release(a):
    print(api.call("POST", "/release", {"va": "%08x" % a.va, "any": a.any}).get("message", "released"))


def cmd_flag(a):
    print(api.call("POST", "/flag", {"va": "%08x" % a.va if a.va is not None else None, "text": a.reason}).get("message", "thanks"))


def cmd_asm(a):
    import listing
    f = data.functions().get(a.va)
    if f is None:
        sys.exit("%08x is not the start of a function" % a.va)
    print(listing.listing(image(), a.va, f["size"], names()))


def cmd_callers(a):
    """Direct calls and jumps to VA, and places holding its address (vtables, function pointers)."""
    import bisect
    import struct
    img, funcs, nm = image(), data.functions(), names()
    starts = sorted(funcs)

    def where(x):
        i = bisect.bisect_right(starts, x) - 1
        f = funcs[starts[i]] if i >= 0 else None
        if f and x < f["va"] + f["size"]:
            label = nm.get(f["va"]) or f["symbol"] or "sub_%08x" % f["va"]
            return "%08x  in %08x %s  (%s)" % (x, f["va"], label, f["unit"] or "file unknown")
        return "%08x  (data)" % x

    import x86
    starts_of = {}  # function va -> its instruction starts

    def real(x):
        i = bisect.bisect_right(starts, x) - 1
        f = funcs[starts[i]] if i >= 0 else None
        if not f or x >= f["va"] + f["size"]:
            return False
        if f["va"] not in starts_of:
            starts_of[f["va"]] = {f["va"] + n.off for n in x86.disasm(img.read(f["va"], f["size"]))}
        return x in starts_of[f["va"]]

    calls, refs = [], []
    absolute = struct.pack("<I", a.va)
    for s in img.sections:
        body = img.data[s.raw:s.raw + s.rsize]
        if s.flags & 0x20000000:  # executable
            for op in (b"\xe8", b"\xe9"):
                p = body.find(op)
                while p != -1:
                    if p + 5 <= len(body) and s.va + p + 5 + struct.unpack_from("<i", body, p + 1)[0] == a.va and real(s.va + p):
                        calls.append(("call at " if op == b"\xe8" else "jmp at  ") + where(s.va + p))
                    p = body.find(op, p + 1)
        p = body.find(absolute)
        while p != -1:
            refs.append(where(s.va + p))
            p = body.find(absolute, p + 1)
    print("%d direct calls or jumps to %08x:" % (len(calls), a.va))
    for c in sorted(calls)[:a.limit]:
        print("  " + c)
    print("%d places hold its address (vtables, function pointers):" % len(refs))
    for r in refs[:a.limit]:
        print("  " + r)


def cmd_unit_check(a):
    import check
    spec = json.loads(Path(a.spec).read_text(encoding="utf-8"))
    library = spec.get("kind") == "library"
    path = ROOT / ("third_party" if library else "src") / spec["source"]
    src = path.read_text(encoding="utf-8")
    funcs = [(int(f["va"], 16), check.want(int(f["va"], 16), f.get("symbol"))) for f in spec["functions"]]
    print(json.dumps(check.unit_check(src, spec.get("profile", "ue3"), funcs, library), indent=1))


def main(argv=None):
    p = argparse.ArgumentParser(prog="asylum", description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = p.add_subparsers(dest="cmd", required=True)

    def filters(s):
        s.add_argument("--max-size", type=int)
        s.add_argument("--min-size", type=int)
        s.add_argument("--unit")
        s.add_argument("--class", dest="cls")
        s.add_argument("--name")
        s.add_argument("--named", action="store_true", help="only functions whose name is known")

    s = sub.add_parser("setup")
    s.add_argument("--game")
    s.add_argument("--toolchain-only", action="store_true")
    sub.add_parser("signup")
    s = sub.add_parser("identity")
    s.add_argument("state", nargs="?", choices=["on", "off"])
    s = sub.add_parser("model-credit")
    s.add_argument("state", nargs="?", choices=["on", "off"])
    s = sub.add_parser("key")
    s.add_argument("name")
    s.add_argument("--delete", action="store_true")
    sub.add_parser("status")
    s = sub.add_parser("list")
    filters(s)
    s.add_argument("--limit", type=int, default=30)
    s.add_argument("--matched", action="store_true", help="matched functions instead (to improve with get VA --revise)")
    s = sub.add_parser("get")
    s.add_argument("va", type=va_arg, nargs="?")
    filters(s)
    s.add_argument("--revise", action="store_true", help="a matched function: its file, to improve the source")
    s = sub.add_parser("check")
    s.add_argument("items", nargs="+", metavar="VA [FILE]", help="one or more; a VA's file defaults to work/VA.cpp")
    s.add_argument("--function")
    s = sub.add_parser("submit")
    s.add_argument("items", nargs="*", metavar="VA [FILE]", help="what to send (default: every claim with a work/VA.cpp)")
    s.add_argument("--function")
    s.add_argument("--model", help='your model\'s display name, e.g. "Claude Opus 5.5", "GPT-6.1 Sol" (default: ASYLUM_MODEL)')
    s = sub.add_parser("giveup")
    s.add_argument("va", type=va_arg)
    s.add_argument("file", nargs="?", help="your closest source (default: work/VA.cpp)")
    s.add_argument("--reason", required=True)
    s.add_argument("--model", help='your model\'s display name, e.g. "Claude Opus 5.5", "GPT-6.1 Sol" (default: ASYLUM_MODEL)')
    s.add_argument("--any", action="store_true", help="another key's claim (another agent of your account)")
    s = sub.add_parser("release")
    s.add_argument("va", type=va_arg)
    s.add_argument("--any", action="store_true", help="another key's claim (another agent of your account)")
    s = sub.add_parser("flag")
    s.add_argument("va", type=va_arg, nargs="?")
    s.add_argument("--reason", required=True)
    s = sub.add_parser("asm")
    s.add_argument("va", type=va_arg)
    s = sub.add_parser("callers")
    s.add_argument("va", type=va_arg)
    s.add_argument("--limit", type=int, default=40)
    sub.add_parser("update")
    sub.add_parser("changes")
    s = sub.add_parser("unit-check")
    s.add_argument("spec")
    a = p.parse_args(argv)
    try:
        globals()["cmd_" + a.cmd.replace("-", "_")](a)
        sys.stdout.flush()
        import compile as cc  # (lazy: most commands never compile)
        cc.prune()  # once a day: drops compile-cache files unused for days
    except api.ApiError as e:
        sys.exit("error: %s" % e)
    except BrokenPipeError:  # `... | head` closed the pipe: not an error
        os.dup2(os.open(os.devnull, os.O_WRONLY), sys.stdout.fileno())


if __name__ == "__main__":
    main()

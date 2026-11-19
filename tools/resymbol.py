"""After a header change that renames or retypes a declaration (a virtual slot, a method), the matched
functions defined through it get new decorated names: find them and record them.

    python tools/resymbol.py [--only GLOB ...] [--jobs N] [--dry-run]

Each file of src/ (or those matching --only) is compiled and verified as units.py does. A function
whose recorded symbol isn't in the object any more is looked up among the object's functions that
no other function of the file claims, of the same class; the one that verifies against the original
becomes its symbol, in src/units.json, data/functions.json.gz and data/symbols.json.gz. Everything
that still fails is listed (fix those by hand, then run it again).
"""
from __future__ import annotations

import argparse
import concurrent.futures
import fnmatch
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "asylum"))
sys.path.insert(0, str(ROOT / "tools" / "ci"))


def _cls(sym: str) -> str | None:
    m = re.match(r"\?\??[^@]*@(\w+)@@", sym or "")
    return m.group(1) if m else None


def _norm(cls: str | None) -> str | None:
    return re.sub(r"(?:__[0-9a-f]{8}|_+)$", "", cls) if cls else cls


def one(u: dict):
    import check
    import compile as cl
    import data
    import fingerprint
    from coff import Coff
    lib = u.get("kind") == "library"
    path = ("third_party/" if lib else "src/") + u["source"]
    src = (ROOT / path).read_text(encoding="utf-8")
    funcs = [(int(f["va"], 16), [f["symbol"], "sub_" + f["va"]] if f.get("symbol") else check.want(int(f["va"], 16)))
             for f in u["functions"]]
    r = check.unit_check(src, u["profile"], funcs, lib)
    if r["compile_errors"]:
        return path, {}, ["compile: " + "; ".join(r["compile_errors"][:3])]
    bad = {va: f for va, f in r["functions"].items() if f["status"] != "match"}
    if not bad:
        return path, {}, []
    whole = False
    c = cl.compile(src, cl.profile(u["profile"]), check=not lib)
    obj = Coff(c.obj)
    k = check.known(obj)
    claimed = {f["symbol"] for f in r["functions"].values() if f["status"] == "match" and f.get("symbol")}
    found, still = {}, []
    for va, f in bad.items():
        old = next((x["symbol"] for x in u["functions"] if x["va"] == va), None)
        cls = _norm(_cls(old))
        free = [s for s in obj.functions() if s.name not in claimed]
        # same class first (a local helper struct `UFoo_` / `UFoo__00123456` counts as UFoo), then any
        cands = [s for s in free if cls is None or _norm(_cls(s.name)) == cls]
        cands += [s for s in free if s not in cands]
        hit = None
        fp = data.fingerprint(int(va, 16))
        for s in cands:
            st, pr, b = fingerprint.verify(obj, [s.name], int(va, 16), fp, k, data.imports())
            if st == "match":
                hit = s.name
                break
        if hit:
            found[va] = hit
            claimed.add(hit)
        else:
            still.append("%s %s: %s" % (va, f["status"], "; ".join(f["problems"][:2])))
    return path, found, still


def main():
    p = argparse.ArgumentParser()
    p.add_argument("--only", action="append")
    p.add_argument("--jobs", type=int, default=0)
    p.add_argument("--dry-run", action="store_true")
    a = p.parse_args()
    import place
    from units import default_jobs, _low_priority
    upath = ROOT / "src" / "units.json"
    U = json.loads(upath.read_text(encoding="utf-8"))
    units = [u for u in U["units"] if not a.only or any(fnmatch.fnmatch(u["source"], o) for o in a.only)]
    renames, fails = {}, []
    with concurrent.futures.ProcessPoolExecutor(a.jobs or default_jobs(), initializer=_low_priority) as pool:
        for i, (path, found, still) in enumerate(pool.map(one, units, chunksize=4), 1):
            renames.update(found)
            fails += ["%s: %s" % (path, s) for s in still]
            if i % 200 == 0:
                print("%d/%d files" % (i, len(units)), flush=True)
    print("%d new symbols, %d functions still failing" % (len(renames), len(fails)))
    for f in fails:
        print("FAIL " + f)
    if not renames or a.dry_run:
        for va, s in renames.items():
            print("  %s -> %s" % (va, s))
        return 1 if fails else 0
    old_of = {}
    for u in U["units"]:
        for f in u["functions"]:
            if f["va"] in renames:
                old_of[f["va"]] = f.get("symbol")
                f["symbol"] = renames[f["va"]]
    upath.write_text(json.dumps(U, indent=1) + "\n", encoding="utf-8", newline="\n")
    F = place.read_gz(ROOT / "data" / "functions.json.gz")
    col = {c: i for i, c in enumerate(F["columns"])}
    rows = {r[0]: r for r in F["rows"]}
    S = place.read_gz(ROOT / "data" / "symbols.json.gz")
    for va, new in renames.items():
        v = int(va, 16)
        if v in rows:
            rows[v][col["symbol"]] = new
        old = old_of.get(va)
        if old and S.get(old) == str(v):
            S.pop(old)
    from integrate import pin
    for va, new in renames.items():
        pin(S, rows, col, new)
    place.write_gz(ROOT / "data" / "functions.json.gz", F)
    place.write_gz(ROOT / "data" / "symbols.json.gz", S)
    print("recorded")
    return 1 if fails else 0


if __name__ == "__main__":
    sys.exit(main())

"""After a header change that renames or retypes a declaration (a virtual slot, a method), the matched
functions defined through it get new decorated names: find them and record them.

    python tools/resymbol.py [--only GLOB ...] [--jobs N] [--dry-run]

Each file of src/ (or those matching --only) is compiled and verified as units.py does. A function
whose recorded symbol isn't in the object any more is looked up among the object's functions that
no other function of the file claims, of the same class; the one that verifies against the original
becomes its symbol, in src/units.json, data/functions.json.gz and data/symbols.json.gz. Everything
that still fails is listed (fix those by hand, then run it again).

With --new it also records functions a maintainer wrote straight into src/ (a `// @baa 0xVA` the
file's units.json entry doesn't list yet, VA open in the function table and in this file's unit):
the object function that verifies against VA's fingerprint becomes its symbol, the function is
listed in the unit and marked matched (no contribution credit; submissions go through the service).
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


NEW = False
_ROWS = None


def _row(va: int):
    global _ROWS
    if _ROWS is None:
        import place
        F = place.read_gz(ROOT / "data" / "functions.json.gz")
        c = F["columns"]
        _ROWS = {r[0]: dict(zip(c, r)) for r in F["rows"]}
    return _ROWS.get(va)


def _init(new):
    global NEW
    NEW = new
    from units import _low_priority
    _low_priority()


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
    listed = {f["va"] for f in u["functions"]}
    # matched only through the sub_VA fallback name: the recorded symbol is stale, record the real one
    stale = {va: f["symbol"] for va, f in r["functions"].items() if f["status"] == "match" and f.get("symbol")
             and f["symbol"] != next((x.get("symbol") for x in u["functions"] if x["va"] == va), f["symbol"])}
    new = []
    if NEW:
        for m in re.finditer(r"//\s*@baa\s+0x([0-9a-fA-F]{8})\b", src):
            va = m.group(1).lower()
            row = _row(int(va, 16))
            if va not in listed and row and row["status"] == "open" and row["unit"] == u["source"]:
                new.append(va)
                bad[va] = {"status": "new", "problems": ["not verified"]}
    if not bad:
        return path, stale, []
    whole = False
    # an explicit instantiation of a template the headers already instantiate is only in a whole compile
    c = cl.compile(src, cl.profile(u["profile"]), check=not lib, whole=cl.instantiates(src))
    obj = Coff(c.obj)
    k = check.known(obj)
    claimed = {f["symbol"] for f in r["functions"].values() if f["status"] == "match" and f.get("symbol")}
    found, still = dict(stale), []
    for va, f in bad.items():
        old = next((x["symbol"] for x in u["functions"] if x["va"] == va), None)
        cls = _norm(_cls(old)) if va not in new else (_row(int(va, 16)) or {}).get("class")
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
    p.add_argument("--new", action="store_true", help="also record new // @baa functions (see above)")
    a = p.parse_args()
    import place
    from units import default_jobs
    upath = ROOT / "src" / "units.json"
    U = json.loads(upath.read_text(encoding="utf-8"))
    units = [u for u in U["units"] if not a.only or any(fnmatch.fnmatch(u["source"], o) for o in a.only)]
    renames, fails = {}, []
    with concurrent.futures.ProcessPoolExecutor(a.jobs or default_jobs(), initializer=_init, initargs=(a.new,)) as pool:
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
    old_of, added = {}, {}
    for u in U["units"]:
        listed = {f["va"] for f in u["functions"]}
        for f in u["functions"]:
            if f["va"] in renames:
                old_of[f["va"]] = f.get("symbol")
                f["symbol"] = renames[f["va"]]
        for va, s in renames.items():
            row = _row(int(va, 16))
            if va not in listed and row and row["unit"] == u["source"] and row["status"] == "open":
                u["functions"].append({"va": va, "size": row["size"], "symbol": s})
                added[va] = u["source"]
        if any(va in added for va in renames):
            u["functions"].sort(key=lambda f: f["va"])
    upath.write_text(json.dumps(U, indent=1) + "\n", encoding="utf-8", newline="\n")
    F = place.read_gz(ROOT / "data" / "functions.json.gz")
    col = {c: i for i, c in enumerate(F["columns"])}
    rows = {r[0]: r for r in F["rows"]}
    S = place.read_gz(ROOT / "data" / "symbols.json.gz")
    for va, new in renames.items():
        v = int(va, 16)
        if v in rows:
            rows[v][col["symbol"]] = new
            if va in added:
                rows[v][col["status"]] = "matched"
                rows[v][col["file"]] = added[va]
        old = old_of.get(va)
        if old and S.get(old) == str(v):
            S.pop(old)
    from integrate import pin
    for va, new in renames.items():
        pin(S, rows, col, new)
    place.write_gz(ROOT / "data" / "functions.json.gz", F)
    place.write_gz(ROOT / "data" / "symbols.json.gz", S)
    if added:
        import stats
        stats.write(ROOT)
        print("%d new functions recorded as matched" % len(added))
        # the service only learns of matches from CI's verdicts: without this, `list` keeps offering them
        print("after pushing, mark them done in the service (maintainers, from the backend checkout):\n"
              "  npx wrangler d1 execute asylumdecomp --remote --command \"update functions set done=1 where va in (%s)\""
              % ",".join(str(int(va, 16) if isinstance(va, str) else va) for va in sorted(added)))
    print("recorded")
    return 1 if fails else 0


if __name__ == "__main__":
    sys.exit(main())

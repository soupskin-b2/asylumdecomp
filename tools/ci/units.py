"""Every file of src/ (and the libraries' own files) compiled and verified, sharded for CI: a change
to the shared headers or the checker mustn't cost a match.

    python tools/ci/units.py [--shard K/N] [--only PATTERN]
"""
from __future__ import annotations

import argparse
import fnmatch
import json
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "tools" / "asylum"))
import check  # noqa: E402


def main():
    p = argparse.ArgumentParser()
    p.add_argument("--shard", default="1/1")
    p.add_argument("--only")
    a = p.parse_args()
    k, n = map(int, a.shard.split("/"))
    units = json.loads((ROOT / "src" / "units.json").read_text(encoding="utf-8"))["units"]
    units = [u for i, u in enumerate(units) if i % n == k - 1 and (not a.only or fnmatch.fnmatch(u["source"], a.only))]
    bad, t0 = [], time.time()
    for i, u in enumerate(units, 1):
        lib = u.get("kind") == "library"
        src = (ROOT / ("third_party" if lib else "src") / u["source"]).read_text(encoding="utf-8")
        funcs = [(int(f["va"], 16), check.want(int(f["va"], 16), f.get("symbol"))) for f in u["functions"]]
        r = check.unit_check(src, u["profile"], funcs, lib)
        fails = ["%s %s: %s" % (va, f["status"], "; ".join(f["problems"][:2])) for va, f in r["functions"].items() if f["status"] != "match"]
        problems = r["compile_errors"][:5] + fails + r["conflicts"]
        if problems:
            bad.append(u["source"])
            print("::error file=%s::%s" % (("third_party/" if lib else "src/") + u["source"], " | ".join(problems)[:1500]), flush=True)
        if i % 50 == 0:
            print("%d/%d files, %.0fs" % (i, len(units), time.time() - t0), flush=True)
    print("%d files checked, %d with problems%s" % (len(units), len(bad), (": " + ", ".join(bad[:20])) if bad else ""))
    sys.exit(1 if bad else 0)


if __name__ == "__main__":
    main()

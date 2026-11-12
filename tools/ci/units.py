"""Every file of src/ (and the libraries' own files) compiled and verified, sharded for CI: a change
to the shared headers or the checker mustn't cost a match.

    python tools/ci/units.py [--shard K/N] [--only PATTERN ...] [--jobs N]
"""
from __future__ import annotations

import argparse
import concurrent.futures
import fnmatch
import json
import os
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "tools" / "asylum"))
import check  # noqa: E402


def one(u: dict) -> tuple[str, list[str]]:
    lib = u.get("kind") == "library"
    path = ("third_party/" if lib else "src/") + u["source"]
    src = (ROOT / path).read_text(encoding="utf-8")
    # a placed function has its symbol (the full table of names is loaded only for one that hasn't)
    funcs = [(int(f["va"], 16), [f["symbol"], "sub_" + f["va"]] if f.get("symbol") else check.want(int(f["va"], 16)))
             for f in u["functions"]]
    r = check.unit_check(src, u["profile"], funcs, lib)
    fails = ["%s %s: %s" % (va, f["status"], "; ".join(f["problems"][:2])) for va, f in r["functions"].items() if f["status"] != "match"]
    return path, r["compile_errors"][:5] + fails + r["conflicts"]


def default_jobs() -> int:
    """One per CPU, but no more than free memory allows: a worker takes up to ~0.3 GB and its compiler
    as much again. ASYLUM_JOBS overrides."""
    if os.environ.get("ASYLUM_JOBS"):
        return int(os.environ["ASYLUM_JOBS"])
    cpus = os.cpu_count() or 1
    try:
        if os.name == "nt":
            import ctypes

            class MS(ctypes.Structure):
                _fields_ = [("len", ctypes.c_ulong), ("load", ctypes.c_ulong)] + \
                           [(n, ctypes.c_ulonglong) for n in ("total", "avail", "pt", "pa", "vt", "va", "ve")]
            m = MS()
            m.len = ctypes.sizeof(MS)
            ctypes.windll.kernel32.GlobalMemoryStatusEx(ctypes.byref(m))
            free = m.avail
        else:
            free = os.sysconf("SC_AVPHYS_PAGES") * os.sysconf("SC_PAGE_SIZE")
    except (OSError, ValueError, AttributeError):
        return max(1, cpus // 2)
    return max(1, min(cpus, int((free - (2 << 30)) // (600 << 20))))  # keep 2 GB for everything else


def _low_priority():
    """Workers (and the compilers they start, which inherit it) yield to interactive programs."""
    if os.name == "nt":
        import ctypes
        ctypes.windll.kernel32.SetPriorityClass(ctypes.windll.kernel32.GetCurrentProcess(), 0x4000)  # BELOW_NORMAL
    else:
        os.nice(5)


def main():
    p = argparse.ArgumentParser()
    p.add_argument("--shard", default="1/1")
    p.add_argument("--only", action="append", help="a glob of sources; repeat for several")
    p.add_argument("--jobs", type=int, default=0, help="files compiled at once (default: per CPU, as free memory allows)")
    a = p.parse_args()
    k, n = map(int, a.shard.split("/"))
    units = json.loads((ROOT / "src" / "units.json").read_text(encoding="utf-8"))["units"]
    units = [u for i, u in enumerate(units) if i % n == k - 1 and (not a.only or any(fnmatch.fnmatch(u["source"], o) for o in a.only))]
    bad, t0 = [], time.time()
    jobs = a.jobs or default_jobs()
    print("%d jobs" % jobs, flush=True)
    import compile as cc
    cc.prune()  # once an hour: old compile-cache files and PCHs over the budget
    with concurrent.futures.ProcessPoolExecutor(jobs, initializer=_low_priority) as pool:
        for i, (path, problems) in enumerate(pool.map(one, units, chunksize=4), 1):
            if problems:
                bad.append(path)
                print("::error file=%s::%s" % (path, " | ".join(problems)[:1500]), flush=True)
            if i % 50 == 0:
                print("%d/%d files, %.0fs" % (i, len(units), time.time() - t0), flush=True)
    print("%d files checked, %d with problems%s" % (len(units), len(bad), (": " + ", ".join(bad[:20])) if bad else ""))
    sys.exit(1 if bad else 0)


if __name__ == "__main__":
    main()

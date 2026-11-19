"""tools/sizes.py: check every class in Classes.h against the size the exe registers for it.

    python tools/sizes.py            # 0 problems, or each class whose sizeof differs from its "registered size"

Classes.h notes each UObject class's registered size (`/* registered size 0x.. */`, from its StaticClass
registration in the exe). This compiles one translation unit that compares sizeof() with it for all of them
(a wrong member type or a missing member shows up here before it breaks a match somewhere), and also checks the
offset comment of each class's members (`/* 0x.. */` after a data member) with offsetof."""
import pathlib
import re
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools" / "asylum"))
import compile as C  # noqa: E402

HEADER = ROOT / "include" / "ue3" / "Classes.h"


def main():
    lines = HEADER.read_text(encoding="utf-8").split("\n")
    sizes, offs = [], []
    cls, depth = None, 0
    for l in lines:
        m = re.match(r"(?:struct|class) (?:__declspec\(align\(\d+\)\) )?(\w+)(?: : public \w+(?:, public \w+)*)? \{$", l)
        if m:
            cls = m.group(1)
            continue
        if l.startswith("};"):
            cls = None
            continue
        if not cls:
            continue
        m = re.match(r"    /\* registered size (0x[0-9a-f]+) \*/", l)
        if m:
            sizes.append((cls, int(m.group(1), 16)))
            continue
        # a plain data member with its offset: "    TYPE Name; /* 0x.. */" (not bitfields, not arrays of unknown size)
        m = re.match(r"    (?!virtual|static|typedef|enum|friend|BITFIELD|/\*)[^;(){}]*?\b(\w+)(\[[^\]]*\])?; /\* (0x[0-9a-f]+)(?:: [^*]*)? \*/$", l)
        if m and m.group(1) not in ("_native",):
            offs.append((cls, m.group(1), int(m.group(3), 16)))
    src = ['#include "ue3/Classes.h"',
           "template<int Got, int Want, int Line> struct SizeIs; template<int W, int L> struct SizeIs<W, W, L> {};",
           "template<int Got, int Want, int Line> struct OffsetIs; template<int W, int L> struct OffsetIs<W, W, L> {};"]
    idx = {}
    for i, (c, n) in enumerate(sizes):
        src.append("SizeIs<sizeof(%s), 0x%x, %d> s%d;" % (c, n, i, i))
        idx[("s", i)] = (c, None, n)
    for i, (c, f, o) in enumerate(offs):
        src.append("OffsetIs<(int)&((%s*)0)->%s, 0x%x, %d> o%d;" % (c, f, o, i, i))
        idx[("o", i)] = (c, f, o)
    head, checks = src[:3], src[3:]
    bad, errs = [], []
    for k in range(0, len(checks), 2000):   # cl stops after 100 errors: keep each unit small enough to see them
        r = C.compile("\n".join(head + checks[k:k + 2000]) + "\n", C.profile("ue3"), check=False)
        out = " ".join(x for x in vars(r).values() if isinstance(x, str))
        for kind, got, want, i in re.findall(r"undefined struct '(SizeIs|OffsetIs)<Got,Want,Line>'\s*with\s*\[\s*Got=(-?\d+),\s*Want=(\d+),\s*Line=(\d+)", out):
            c, f, n = idx[("s" if kind == "SizeIs" else "o", int(i))]
            bad.append("%s%s: 0x%x, the exe has 0x%x" % (c, "::" + f if f else " size", int(got), n))
        errs += [e for e in re.findall(r"error C\d+: [^\n]*", out) if "SizeIs" not in e and "OffsetIs" not in e]
    for b in sorted(set(bad)):
        print(b)
    for e in errs[:20]:
        print("compile:", e)
    print("%d class sizes and %d member offsets checked, %d problems" % (len(sizes), len(offs), len(set(bad)) + len(errs)))
    return 1 if bad or errs else 0


if __name__ == "__main__":
    sys.exit(main())

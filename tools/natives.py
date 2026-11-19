"""Name the C++-only members of the kit's classes and structs: the `BYTE _nativeN[...]` blobs and the
`Native_XX` placeholders that ue3classes.py left where the script packages say nothing.

    python tools/natives.py show CLASS                  the members the compiler lays out, with offsets and sizes
    python tools/natives.py set CLASS 0xOFF "DECL"      one member, e.g. "class ULevel* PersistentLevel"
    python tools/natives.py apply FILE [--no-src]       many: lines "CLASS 0xOFF DECL" (# comments)

A DECL of bitfields, "BITFIELD bA:1, bB:1, bC:1", places them as one DWORD at the offset (the first
bit is the lowest, as MSVC packs them).

A member goes where the offset says: into a blob (split around it) or over a member that starts there
with the same size (a Native_XX placeholder: renamed, its type kept, since it comes from the game's
constructor or destructor). The headers are compiled before
and after; every placed member must land on its offset and no class may change size, or nothing is
written. Then src/ code that used the old names (Native_XX) is fixed where the compiler points at them;
what can't be fixed that way is listed. Run the units on the files it names before committing.
"""
from __future__ import annotations

import re
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "asylum"))
sys.path.insert(0, str(ROOT / "tools"))
import slots  # noqa: E402

HEADER = slots.HEADER


def _compile(extra: str = "", report: str = "/d1reportAllClassLayout"):
    import compile as cc
    p = cc.profile("ue3")
    work = Path(tempfile.mkdtemp(prefix="natives_", dir=cc._tmp()))
    try:
        tu = "".join('#include "%s"\n' % h for h in p.prelude) + '#include "ue3/Classes.h"\n' + extra
        (work / "tu.cpp").write_text(tu, encoding="utf-8")
        args = cc._cl(p) + ["/nologo", "/c", *p.flags, "/Zm400", report, "/Fo" + str(work / "tu.obj"), "tu.cpp"]
        r = subprocess.run(args, cwd=work, env=cc._env(p, work), capture_output=True, stdin=subprocess.DEVNULL)
        out = (r.stdout + r.stderr).decode("mbcs" if sys.platform == "win32" else "latin-1", errors="replace").replace("\r", "")
    finally:
        shutil.rmtree(work, ignore_errors=True)
    errs = [l for l in out.splitlines() if re.search(r"\berror C\d+|fatal error", l)]
    return out, errs


def layouts(out: str):
    """{class: (size, [(offset, name)])} for each class's own (non-base) members"""
    res = {}
    for m in re.finditer(r"^class (\w+)\tsize\((\d+)\):\n((?:.*\n)*?)\t\+---\n(?=\n|$)", out, re.M):
        mem = []
        for l in m.group(3).splitlines():
            mm = re.match(r"^\s*(\d+)\t\| (?![|+])(?:.* )?(\w+)(?:\[\d+\])?(?: \(bitstart=\d+,nbits=\d+\))?\s*$", l)
            if mm and not l.strip().endswith("{vfptr}") and "<alignment member>" not in l:
                mem.append((int(mm.group(1)), mm.group(2)))
        res[m.group(1)] = (int(m.group(2)), mem)
    return res


def _bits(decl: str):
    """[(name, nbits)] for a "BITFIELD a:1, b:1" declaration, else None"""
    m = re.fullmatch(r"\s*BITFIELD\s+(\w+\s*:\s*\d+(?:\s*,\s*\w+\s*:\s*\d+)*)\s*;?\s*", decl)
    if not m:
        return None
    return [(n, int(b)) for n, b in re.findall(r"(\w+)\s*:\s*(\d+)", m.group(1))]


def _type_and_name(decl: str):
    if _bits(decl):
        return "DWORD", _bits(decl)[0][0], ""
    m = re.match(r"^(.*?)\s*\b(\w+)\s*(\[[^\]]+\])?\s*;?\s*$", decl.strip())
    if not m:
        raise SystemExit("can't read the declaration %r" % decl)
    return m.group(1).strip(), m.group(2), m.group(3) or ""


def sizes(types: list[str]) -> list[int]:
    extra = "".join("struct __natsz%d { %s x; };\n" % (i, t) for i, t in enumerate(types))
    out, errs = _compile(extra, "/d1reportSingleClassLayout__natsz")
    if errs:
        raise SystemExit("these types don't compile in Classes.h:\n  " + "\n  ".join(errs[:10]))
    got = {int(a): int(b) for a, b in re.findall(r"^class __natsz(\d+)\tsize\((\d+)\):", out, re.M)}
    return [got[i] for i in range(len(types))]


def _class_block(lines, cls):
    for i, l in enumerate(lines):
        if re.match(r"^(?:struct|class) %s\b[^;]*\{" % re.escape(cls), l):
            for j in range(i + 1, len(lines)):
                if lines[j].startswith("};"):
                    return i, j
    raise SystemExit("%s isn't defined in Classes.h" % cls)


def place(lines, lay, reqs):
    """reqs: [(cls, off, decl, size)] -> [(cls, oldname, newname)] renames; edits lines in place"""
    renames = []
    cur = {}  # (class, offset) -> the member's name now (a blob's head keeps the offset, maybe not the name)
    # per class, highest offset first, so earlier members' line numbers stay put
    for cls, off, decl, size in sorted(reqs, key=lambda r: (r[0], -r[1])):
        if cls not in lay:
            raise SystemExit("%s: no layout (is it a class the headers define?)" % cls)
        csize, mem = lay[cls]
        # each member's extent: up to the next member's offset (or the class's end)
        ext = []
        for i, (o, n) in enumerate(mem):
            nxt = mem[i + 1][0] if i + 1 < len(mem) else csize
            ext.append((o, nxt, n))
        hit = [e for e in ext if e[0] <= off < e[1]]
        if not hit:
            raise SystemExit("%s 0x%x: no member there" % (cls, off))
        o, end, name = hit[-1]
        name = cur.get((cls, o), name)
        a, b = _class_block(lines, cls)
        t, n, arr = _type_and_name(decl)
        ln = next((i for i in range(a + 1, b) if re.search(r"\b%s\b\s*(\[[^\]]*\])?\s*;" % re.escape(name), lines[i])), None)
        if ln is None:
            raise SystemExit("%s: can't find the line declaring %s" % (cls, name))
        ind = re.match(r"\s*", lines[ln]).group(0)
        blob = re.match(r"\s*BYTE (_native\w*)\[(0x[0-9a-f]+|\d+)\];(.*)$", lines[ln].rstrip("\n"))
        new = "%s%s %s%s; /* 0x%x */\n" % (ind, t, n, arr, off)
        if _bits(decl):
            new = "".join("%sBITFIELD %s:%d;%s\n" % (ind, bn, nb, " /* 0x%x */" % off if k == 0 else "")
                          for k, (bn, nb) in enumerate(_bits(decl)))
        if blob:
            bsize = int(blob.group(2), 0)
            if off + size > o + bsize:
                raise SystemExit("%s 0x%x: %s (0x%x bytes) runs past the blob %s (0x%x..0x%x)" % (cls, off, n, size, name, o, o + bsize))
            out = []
            if off > o:
                head = name if name != "_native" else "_native_%x" % o
                cur[(cls, o)] = head
                out.append("%sBYTE %s[0x%x];\n" % (ind, head, off - o))
            out.append(new)
            if off + size < o + bsize:
                tail = "_native" if name == "_native" and not out[:-1] else "_native_%x" % (off + size)
                if name == "_native":
                    tail = "_native"  # the last blob keeps its name and its comment
                    out.append("%sBYTE %s[0x%x];%s\n" % (ind, tail, o + bsize - off - size, blob.group(3)))
                else:
                    out.append("%sBYTE %s[0x%x];\n" % (ind, tail, o + bsize - off - size))
            lines[ln:ln + 1] = out
        else:
            if o != off or end - o < size:
                raise SystemExit("%s 0x%x: lands inside %s (0x%x..0x%x), not on a blob" % (cls, off, name, o, end))
            old = re.match(r"\s*(.*?)\s*\b%s\b\s*(\[[^\]]*\])?\s*;" % re.escape(name), lines[ln])
            if old and re.match(r"Native_[0-9a-f]+$", name) and old.group(1) != t:
                # a Native_XX placeholder's type comes from the game's code (its destructor or
                # constructor): it stays, and only the name changes
                print("%s 0x%x: keeping %s's type %s (not %s)" % (cls, off, name, old.group(1), t))
                new = "%s%s %s%s; /* 0x%x */\n" % (ind, old.group(1), n, old.group(2) or "", off)
            lines[ln] = new
            if name != n:
                renames.append((cls, name, n))
    return renames


def check(reqs):
    """compile, and compare every placed member's offset and every class's size with before"""
    # (a bitfield has no offsetof: the class size and the members after it keep it honest)
    probe = "".join("typedef char __natoff%d[(offsetof(%s, %s) == 0x%x) ? 1 : -1];\n" % (i, c, _type_and_name(d)[1], off)
                    for i, (c, off, d, _) in enumerate(reqs) if not _bits(d))
    return _compile("#include <stddef.h>\n" + probe)


def cmd_apply(reqs, src_too=True):
    before = HEADER.read_text(encoding="utf-8")
    out, errs = _compile()
    if errs:
        raise SystemExit("the headers don't compile as they are:\n  " + "\n  ".join(errs[:10]))
    lay = layouts(out)
    sz = sizes([_type_and_name(d)[0] + _type_and_name(d)[2].replace("[", " _x[").replace("_x", "") if False else
                _type_and_name(d)[0] for _, _, d in reqs])
    full = []
    for (c, off, d), s in zip(reqs, sz):
        arr = _type_and_name(d)[2]
        if arr:
            s *= int(eval(arr[1:-1].replace("0x", "0x")))
        full.append((c, off, d, s))
    lines = before.splitlines(keepends=True)
    renames = place(lines, lay, full)
    HEADER.write_text("".join(lines), encoding="utf-8", newline="\n")
    out2, errs2 = check(full)
    lay2 = layouts(out2)
    bad = [e for e in errs2 if "__natoff" in e]
    errs2 = [e for e in errs2 if "__natoff" not in e]
    moved = ["%s: size %d, was %d" % (c, lay2.get(c, (0,))[0], v[0]) for c, v in lay.items() if c in lay2 and lay2[c][0] != v[0]]
    if errs2 or bad or moved:
        HEADER.write_text(before, encoding="utf-8", newline="\n")
        print("not written:")
        for e in (errs2 + bad)[:20] + moved[:20]:
            print("  " + e)
        if bad:
            print("  (a member isn't at its offset: %s)" % ", ".join("%s 0x%x %s" % (c, o, d) for c, o, d, _ in full))
        return 1
    print("%d members placed, %d placeholders renamed; sizes unchanged" % (len(full), len(renames)))
    if src_too and renames:
        lines, classes = slots.load()
        ren = {}
        for c, old, new in renames:
            ren.setdefault(old, []).append((c, new))
        files = [f for f in slots.SRC.rglob("*.cpp") if any(re.search(r"\b%s\b" % o, f.read_text(encoding="utf-8")) for o in ren)]
        print("fixing %d source files that use the old names" % len(files))
        left = slots.fix_calls(classes, ren, files)
        for rel, e in left.items():
            print("FIX BY HAND %s: %s" % (rel, " | ".join(e)[:600]))
        print("then the units on: " + " ".join("--only " + f.relative_to(slots.SRC).as_posix() for f in files))
    return 0


def read_reqs(path):
    reqs = []
    for l in Path(path).read_text(encoding="utf-8").splitlines():
        l = l.split("#", 1)[0].strip()
        if not l:
            continue
        c, off, d = l.split(None, 2)
        reqs.append((c, int(off, 16), d.strip().rstrip(";")))
    return reqs


def main(argv):
    if len(argv) >= 2 and argv[0] == "show":
        out, errs = _compile("", "/d1reportSingleClassLayout" + argv[1])
        m = re.search(r"^class %s\tsize\(\d+\):\n\t\+---\n(?:.*\n)*?\t\+---\n" % re.escape(argv[1]), out, re.M)
        print(m.group(0) if m else "\n".join(errs[:10]) or "no layout for " + argv[1])
        return 0
    if len(argv) == 4 and argv[0] == "set":
        return cmd_apply([(argv[1], int(argv[2], 16), argv[3].rstrip(";"))])
    if len(argv) >= 2 and argv[0] == "apply":
        return cmd_apply(read_reqs(argv[1]), "--no-src" not in argv)
    print(__doc__)
    return 2


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))

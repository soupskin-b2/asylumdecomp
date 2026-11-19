"""Virtual slots in include/ue3/Classes.h: verify the vtables against the exe, rename a slot through
its whole class tree, list the placeholders that are left.

    python tools/slots.py verify                 compile the headers' vtables (VC8's class layout report) and
                                                 compare every class's with the exe's: slot count, and which
                                                 class implements each slot
    python tools/slots.py show CLASS [0xOFF]     a class's slots (or one slot: its declaration, its
                                                 implementations by class and address)
    python tools/slots.py set CLASS 0xOFF "DECL" declare the slot CLASS introduces at 0xOFF as DECL (e.g.
                                                 "UBOOL Tick(FLOAT DeltaTime, enum ELevelTick TickType)"), in
                                                 CLASS and in every class that overrides it
    python tools/slots.py apply FILE             `set` for each line "CLASS 0xOFF DECL" of FILE
    python tools/slots.py todo [--class C]       the vf_ placeholders left, by introducing class

A slot's declaration must be the same in the class that introduces it and in every override (a
derived class that names it differently gets a new slot instead, which `verify` reports); `set` keeps
them together. Data: data/vtables.json.gz (each class's vtable address and slot count in the exe).
"""
from __future__ import annotations

import gzip
import json
import re
import struct
import subprocess
import sys
import tempfile
import shutil
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
HEADER = ROOT / "include" / "ue3" / "Classes.h"
sys.path.insert(0, str(ROOT / "tools" / "asylum"))

_CLASS = re.compile(r"^(?:struct|class) (?:__declspec\(\w+\(\d+\)\) )?(\w+)(?: : (.*?))?\s*\{\s*$")
_SLOT = re.compile(r"^(?P<ind>\s*)virtual (?P<body>.*?)\s*/\* 0x(?P<off>[0-9a-f]{3}) \*/(?P<rest>[ \t]*/\*.*\*/)?\s*$")


def split_decl(body: str):
    """'RET NAME(PARAMS) const;' -> (ret, name, params, tail)"""
    body = body.rstrip()
    if body.endswith(";"):
        body = body[:-1].rstrip()
    # the parameter list: the last top-level (...) group
    depth, end, start = 0, None, None
    for i in range(len(body) - 1, -1, -1):
        c = body[i]
        if c == ")":
            if depth == 0 and end is None:
                end = i
            depth += 1
        elif c == "(":
            depth -= 1
            if depth == 0 and end is not None:
                start = i
                break
    if start is None:
        return None
    m = re.search(r"(~?\w+)\s*$", body[:start])
    if not m:
        return None
    return body[:m.start()].strip(), m.group(1), body[start + 1:end], body[end + 1:].strip()


class Decl:
    def __init__(self, cls, lineno, ind, body, off):
        self.cls, self.lineno, self.ind, self.body, self.off = cls, lineno, ind, body, off
        s = split_decl(body)
        self.ret, self.name, self.params, self.tail = s if s else ("?", "?", "?", "")

    def text(self):
        return "%s %s(%s)%s" % (self.ret, self.name, self.params, (" " + self.tail) if self.tail else "")


def parse(lines: list[str]):
    classes, cur = {}, None
    for n, line in enumerate(lines):
        m = _CLASS.match(line)
        if m and not line.startswith(" "):
            bases = [b.strip().split()[-1] for b in (m.group(2) or "").split(",") if b.strip()]
            cur = {"name": m.group(1), "bases": bases, "start": n, "decls": []}
            classes[cur["name"]] = cur
            continue
        if cur is None:
            continue
        if line.startswith("};"):
            cur["end"] = n
            cur = None
            continue
        m = _SLOT.match(line)
        if m:
            d = Decl(cur["name"], n, m.group("ind"), m.group("body"), int(m.group("off"), 16))
            d.rest = m.group("rest") or ""
            cur["decls"].append(d)
    return classes


def chain(classes, c):
    out = []
    while c in classes:
        out.append(c)
        b = classes[c]["bases"]
        c = b[0] if b else None
    return out


def introducer(classes, c, off):
    """the class up c's primary chain that declares the slot first (the topmost with a decl at off)"""
    found = None
    for k in chain(classes, c):
        if any(d.off == off for d in classes[k]["decls"]):
            found = k
    return found


def subtree(classes, root):
    kids = {}
    for k, v in classes.items():
        if v["bases"]:
            kids.setdefault(v["bases"][0], []).append(k)
    out, todo = [], [root]
    while todo:
        k = todo.pop()
        out.append(k)
        todo += kids.get(k, [])
    return out


def cmd_set(lines, classes, cls, off, decl, quiet=False):
    intro = introducer(classes, cls, off)
    if intro is None:
        raise SystemExit("%s has no slot 0x%03x" % (cls, off))
    if intro != cls and not quiet:
        print("note: 0x%03x is introduced by %s; setting it there" % (off, intro))
    old = next(d for d in classes[intro]["decls"] if d.off == off)
    s = split_decl(decl)
    if not s:
        raise SystemExit("can't read the declaration: %s" % decl)
    n = 0
    changes = []
    drop = []
    for k in subtree(classes, intro):
        for d in classes[k]["decls"]:
            if d.off != off or d.name != old.name:
                continue
            ret = d.ret
            new = decl.rstrip(";").strip()
            # a covariant return (a pointer to a derived class) stays as the override had it
            if k != intro and old.name == s[1] and ret != s[0] and ret.endswith("*") and s[0].endswith("*"):
                new = "%s %s(%s)%s" % (ret, s[1], s[2], (" " + s[3]) if s[3] else "")
            rest = d.rest
            # a plain (non-virtual) declaration of the same function in this class, usually with the
            # address of the override: fold it into the slot's line
            want = [_norm_type(p) for p in split_params(s[2])]
            for j in range(classes[k]["start"] + 1, classes[k].get("end", classes[k]["start"])):
                if j == d.lineno or _SLOT.match(lines[j]) or re.match(r"[ \t]*virtual\b", lines[j]):
                    continue
                m = re.match(r"[ \t]*[^/(]*?\b%s\((?P<p>[^()]*)\)[^;]*;\s*(?P<va>/\* 0x[0-9a-f]{8} \*/)?" % re.escape(s[1]), lines[j])
                if m and [_norm_type(p) for p in split_params(m.group("p"))] == want:
                    drop.append(j)
                    if m.group("va") and not rest:
                        rest = " " + m.group("va")
            lines[d.lineno] = "%svirtual %s; /* 0x%03x */%s\n" % (d.ind, new, off, rest)
            changes.append((k, d.name, split_decl(new)))
            n += 1
    for j in drop:
        lines[j] = ""  # keeps line numbers stable for the rest of this run; empty strings vanish on save
    if not quiet:
        print("%s 0x%03x: %d declarations" % (intro, off, n))
    return changes, (old.name, intro, s[1])


def split_params(params: str) -> list[str]:
    out, depth, cur = [], 0, ""
    for ch in params:
        if ch in "(<":
            depth += 1
        elif ch in ")>":
            depth -= 1
        if ch == "," and depth == 0:
            out.append(cur.strip())
            cur = ""
        else:
            cur += ch
    if cur.strip():
        out.append(cur.strip())
    return [] if out == ["void"] else out


def _param_name(p: str) -> str | None:
    p = p.split("=", 1)[0].strip()
    m = re.search(r"[\s\*&](\w+)\s*(\[[^\]]*\])?$", p)
    if not m or m.group(1) in ("INT", "UINT", "FLOAT", "BYTE", "UBOOL", "DWORD", "WORD", "QWORD", "TCHAR", "int",
                                "float", "char", "bool", "void", "const", "unsigned", "long", "short", "double"):
        return None
    return m.group(1)


def _param_type(p: str) -> str:
    p = p.split("=", 1)[0].strip()
    n = _param_name(p)
    return p[:p.rfind(n)].strip() if n else p


def _norm_type(p: str) -> str:
    return re.sub(r"\b(?:class|struct|enum)\s+|\s+", "", _param_type(p))


def definition_params(old_params: str, new_params: str) -> str:
    """the new types with the definition's own parameter names (no defaults)"""
    olds, news = split_params(old_params), split_params(new_params)
    out = []
    for i, np_ in enumerate(news):
        t = _param_type(np_)
        n = _param_name(olds[i]) if len(olds) == len(news) else None
        n = n or _param_name(np_) or ("Arg%d" % i)
        out.append("%s %s" % (t, n))
    return ", ".join(out)


SRC = ROOT / "src"
_ERR = re.compile(r"candidate\.cpp\((\d+)\)\s?: error (C\d+)\s?: '(~?\w+)'\s?: is not a member of '(\w+)'")
_ERR_BARE = re.compile(r"candidate\.cpp\((\d+)\)\s?: error (?:C3861: '(\w+)'\s?: identifier not found|C2065: '(\w+)'\s?: undeclared identifier)")


def rewrite_definitions(changes, files=None):
    """changes: [(class, old name, (ret, name, params, tail))]. Rewrites `RET Class::Old(PARAMS)` in src/."""
    by_old = {}
    for k, old, new in changes:
        by_old.setdefault(old, []).append((k, new))
    touched = set()
    for f in files or SRC.rglob("*.cpp"):
        t = f.read_text(encoding="utf-8")
        if not any(o in t for o in by_old):
            continue
        orig = t
        for old, lst in by_old.items():
            if old not in t:
                continue
            for k, (ret, name, params, tail) in lst:
                rx = re.compile(r"(?m)^(?P<lead>[ \t]*)(?P<ret>(?:[\w:]+[\s\*&]+)*?)%s::%s\s*\((?P<params>[^()]*(?:\([^()]*\)[^()]*)*)\)(?P<tail>[ \t]*const\b)?"
                                % (re.escape(k), re.escape(old)))

                def sub(m):
                    nt = (" " + tail) if tail.startswith("const") else ""
                    r = m.group("ret").strip()
                    newret = (ret.replace("virtual ", "").strip() + " ") if r else ""
                    return "%s%s%s::%s(%s)%s" % (m.group("lead"), newret, k, name, definition_params(m.group("params"), params), nt)
                t = rx.sub(sub, t)
                # qualified calls (Class::Old(...) inside a body) and the rest of the line forms
                t = re.sub(r"\b%s::%s\s*\(" % (re.escape(k), re.escape(old)), "%s::%s(" % (k, name), t)
        if t != orig:
            f.write_text(t, encoding="utf-8", newline="\n")
            touched.add(f)
    return touched


def fix_calls(classes, renames, files, rounds=6):
    """compile each file and rename calls the compiler can't find any more (C2039 'Old' : is not a member
    of 'K'), where K is in the tree of a renamed slot. renames: {old: [(introducer, new)]}"""
    import compile as cc
    units = {u["source"]: u for u in json.loads((SRC / "units.json").read_text(encoding="utf-8"))["units"]}
    sub = {}
    for old, lst in renames.items():
        for intro, new in lst:
            for k in subtree(classes, intro):
                sub[(old, k)] = new
    # a bare call inside a member function (C3861) doesn't name the class: fine when the old name has one rename
    bare = {old: lst[0][1] for old, lst in renames.items() if len({n for _, n in lst}) == 1}

    def one(f):
        rel = f.relative_to(SRC).as_posix()
        u = units.get(rel)
        prof = cc.profile(u["profile"] if u else "ue3")
        for _ in range(rounds):
            src = f.read_text(encoding="utf-8")
            # #line directives would point the diagnostics elsewhere; blank them (same line count)
            c = cc.compile(re.sub(r"(?m)^[ \t]*#line\b.*$", "//", src), prof, check=False)
            if c.obj is not None:
                return rel, None
            lines = src.split("\n")
            changed = False
            fixes = [(int(m.group(1)) - 1, m.group(3), sub.get((m.group(3), m.group(4)))) for m in _ERR.finditer(c.diagnostics)]
            fixes += [(int(m.group(1)) - 1, m.group(2) or m.group(3), bare.get(m.group(2) or m.group(3))) for m in _ERR_BARE.finditer(c.diagnostics)]
            for ln, old, new in fixes:
                if new and 0 <= ln < len(lines) and re.search(r"\b%s\b" % old, lines[ln]):
                    lines[ln] = re.sub(r"\b%s\b" % old, new, lines[ln])
                    changed = True
            if not changed:
                return rel, [e for e in c.errors][:4]
            f.write_text("\n".join(lines), encoding="utf-8", newline="\n")
        return rel, ["still failing after %d rounds" % rounds]

    import concurrent.futures, os
    left = {}
    with concurrent.futures.ThreadPoolExecutor(max(1, (os.cpu_count() or 4) - 1)) as pool:
        for i, (rel, errs) in enumerate(pool.map(one, files), 1):
            if errs:
                left[rel] = errs
            if i % 100 == 0:
                print("  %d/%d compiled" % (i, len(files)), flush=True)
    return left


def unshadow(changes, files):
    """Local helper structs (`struct UFoo_ : public UFoo { R Name(...); };`, the old workaround for a method the
    headers lacked) that declare a function now named in a slot: drop the declaration (and the struct when it is
    left empty, with its one-line comment) and define the function on the real class."""
    names, rets = {}, {}
    for k, _, s in changes:
        names.setdefault(k, set()).add(s[1])
        rets[(k, s[1])] = s[0]
    touched = set()
    for f in files:
        t0 = t = f.read_text(encoding="utf-8")
        for k, ns in names.items():
            for n in ns:
                pat = re.compile(r"(?P<cmt>[ \t]*/\*[^\n]*\*/\n)?struct (?P<sh>%s_+) : public %s\s*\{(?P<body>[^{}]*)\};\n" % (re.escape(k), re.escape(k)))
                for m in list(pat.finditer(t)):
                    body = m.group("body")
                    decl = re.search(r"^[ \t]*(?!virtual\b)[^\n;(]*\b%s\s*\([^\n]*;[^\n]*\n" % re.escape(n), body, re.M)
                    if not decl:
                        continue
                    rest = body.replace(decl.group(0), "")
                    sh = m.group("sh")
                    if rest.strip():
                        new = m.group(0).replace(decl.group(0), "")
                    else:
                        new = ""
                    t = t.replace(m.group(0), new, 1)
                    t = re.sub(r"\b%s::%s\s*\(" % (re.escape(sh), re.escape(n)), "%s::%s(" % (k, n), t)
                    r = rets.get((k, n))
                    if r:  # the definition's return type follows the header (a helper type may have stood in)
                        t = re.sub(r"(?m)^[^\n/(#]*?(?=\b%s::%s\()" % (re.escape(k), re.escape(n)), r + " ", t)
        if t != t0:
            f.write_text(t, encoding="utf-8", newline="\n")
            touched.add(f)
    return touched


def files_using(classes, renames):
    """src files that may call a renamed slot: they mention the old name other than in definitions of
    classes outside the slot's tree (vf_ names repeat across unrelated classes)."""
    trees = {old: set().union(*(subtree(classes, intro) for intro, _ in lst)) for old, lst in renames.items()}
    out = []
    for f in SRC.rglob("*.cpp"):
        t = f.read_text(encoding="utf-8")
        for old, tree in trees.items():
            if old not in t:
                continue
            s = re.sub(r"\b(\w+)::%s\b" % old, lambda m: m.group(0) if m.group(1) in tree or m.group(1) == "Super" else "", t)
            if re.search(r"\b%s\s*\(" % old, s):
                out.append(f)
                break
    return out


def load():
    lines = HEADER.read_text(encoding="utf-8").splitlines(keepends=True)
    return lines, parse(lines)


def save(lines):
    HEADER.write_text("".join(lines), encoding="utf-8", newline="\n")


# ---- verification against the exe -------------------------------------------------------------

def compiled_vtables(header="ue3/Classes.h"):
    import compile as cc
    p = cc.profile("ue3")
    work = Path(tempfile.mkdtemp(prefix="slots_", dir=cc._tmp()))
    try:
        tu = "".join('#include "%s"\n' % h for h in p.prelude) + '#include "%s"\n' % header
        (work / "tu.cpp").write_text(tu, encoding="utf-8")
        args = cc._cl(p) + ["/nologo", "/c", *p.flags, "/Zm400", "/d1reportAllClassLayout", "/Fo" + str(work / "tu.obj"), "tu.cpp"]
        r = subprocess.run(args, cwd=work, env=cc._env(p, work), capture_output=True, stdin=subprocess.DEVNULL)
        out = (r.stdout + r.stderr).decode("mbcs" if sys.platform == "win32" else "latin-1", errors="replace").replace("\r", "")
    finally:
        shutil.rmtree(work, ignore_errors=True)
    errs = [l for l in out.splitlines() if re.search(r"\berror C\d+|fatal error", l)]
    vt = {}
    for m in re.finditer(r"^(\w+)::\$vftable@(?:\w+@)?:\n((?:[ \t]*\d*\t\|.*\n)+)", out, re.M):
        body = m.group(2)
        if re.search(r"^\s*\|\s+-\d+\s*$", body, re.M):
            continue  # a secondary base's vtable
        vt[m.group(1)] = [(int(i), k, f) for i, k, f in re.findall(r"^\s*(\d+)\t\| &(?:\{\w+\})?(\w+)::(~?[\w{}]+|operator\W+)", body, re.M)]
    return vt, errs


def exe_vtables():
    import paths
    import pe
    img = pe.Image(paths.settings()["game_exe"])
    data = json.loads(gzip.open(ROOT / "data" / "vtables.json.gz").read())
    out = {}
    for c, (va, n) in data.items():
        out[c] = [struct.unpack_from("<I", img.data, img.off(int(va, 16) + 4 * i))[0] for i in range(n)]
    return out


def cmd_verify(classes):
    vt, errs = compiled_vtables()
    if errs:
        print("the headers don't compile:")
        for e in errs[:20]:
            print("  " + e)
        return 1
    X = exe_vtables()
    bad = 0
    for c, ex in sorted(X.items()):
        h = vt.get(c)
        if h is None:
            print("%s: no vtable in the headers (the exe's has %d slots)" % (c, len(ex)))
            bad += 1
            continue
        if len(h) != len(ex):
            base = classes.get(c, {}).get("bases", [None])[0] if classes.get(c, {}).get("bases") else None
            nb = len(vt.get(base, [])) if base else 0
            extra = ", ".join("0x%03x %s" % (4 * i, f) for i, k, f in h[nb:] if k == c and 4 * i >= 4 * len(ex) - 0)
            print("%s: %d slots, the exe's vtable has %d%s" % (c, len(h), len(ex), (" (past the end: %s)" % extra) if extra else ""))
            bad += 1
            continue
        base = classes.get(c, {}).get("bases")
        p = base[0] if base else None
        for i, k, f in h:
            if f == "{dtor}":
                continue
            inh_exe = p in X and i < len(X[p]) and X[p][i] == ex[i]
            if inh_exe != (k != c):
                print("%s 0x%03x %s: %s" % (c, 4 * i, f, "the exe inherits it (%08x), the header overrides it" % ex[i] if inh_exe
                                              else "the exe overrides it (%08x), the header inherits %s::%s" % (ex[i], k, f)))
                bad += 1
    print("%d classes checked, %d problems" % (len(X), bad))
    return 1 if bad else 0


def cmd_show(classes, cls, off=None):
    X = None
    try:
        X = exe_vtables()
    except Exception as e:  # no exe configured: declarations only
        print("(no exe: %s)" % e)
    c = classes[cls]
    if off is None:
        for d in c["decls"]:
            print("0x%03x %s%s" % (d.off, d.text(), "" if introducer(classes, cls, d.off) == cls else "   (override)"))
        return
    intro = introducer(classes, cls, off)
    d0 = next(d for d in classes[intro]["decls"] if d.off == off)
    print("introduced by %s: %s" % (intro, d0.text()))
    for k in subtree(classes, intro):
        for d in classes[k]["decls"]:
            if d.off == off:
                a = ("%08x" % X[k][off // 4]) if X and k in X and off // 4 < len(X[k]) else "?"
                print("  %-40s %s  %s" % (k, a, d.text()))


def cmd_todo(classes, only=None):
    tot = 0
    for c, v in classes.items():
        if only and c != only:
            continue
        mine = [d for d in v["decls"] if introducer(classes, c, d.off) == c and d.name.startswith("vf_")]
        if mine:
            tot += len(mine)
            print("%-40s %3d  %s" % (c, len(mine), " ".join("%03x" % d.off for d in mine[:12]) + (" ..." if len(mine) > 12 else "")))
    print("%d placeholder slots" % tot)


def main(argv):
    if not argv:
        print(__doc__)
        return 0
    lines, classes = load()
    cmd = argv[0]
    if cmd == "verify":
        return cmd_verify(classes)
    if cmd == "show":
        return cmd_show(classes, argv[1], int(argv[2], 16) if len(argv) > 2 else None)
    if cmd == "todo":
        return cmd_todo(classes, argv[2] if len(argv) > 2 and argv[1] == "--class" else None)
    if cmd in ("set", "apply"):
        src_too = "--no-src" not in argv
        argv = [a for a in argv if a != "--no-src"]
        if cmd == "set":
            todo = [(argv[1], argv[2], argv[3])]
        else:
            todo = []
            for raw in Path(argv[1]).read_text(encoding="utf-8").splitlines():
                raw = raw.strip()
                if not raw or raw.startswith("#"):
                    continue
                todo.append(tuple(raw.split(None, 2)))
        allchanges, renames = [], {}
        for c, off, decl in todo:
            ch, (old, intro, new) = cmd_set(lines, classes, c, int(off, 16), decl, quiet=cmd == "apply")
            allchanges += ch
            if old != new:
                renames.setdefault(old, []).append((intro, new))
            classes = parse(lines)
        save(lines)
        print("%d declarations written" % len(allchanges))
        if src_too and allchanges:
            # the headers must compile and keep every vtable slot first; src is only touched after that
            if cmd_verify(parse(lines)) != 0:
                print("not rewriting src: fix the headers (or git checkout include) and run it again")
                return 1
            olds = {o for _, o, _ in allchanges}
            touched = rewrite_definitions(allchanges, [f for f in SRC.rglob("*.cpp") if any(o in f.read_text(encoding="utf-8") for o in olds)])
            # files that already use a new name on a class of the slot's tree: a plain declaration that became
            # virtual changes their mangled names (QAE -> UAE), and local shadow structs may now clash
            news = {}
            for k, _, s in allchanges:
                news.setdefault(s[1], set()).update(subtree(classes, k))  # classes that inherit it too
            also = set()
            for f in SRC.rglob("*.cpp"):
                t = f.read_text(encoding="utf-8")
                for n, ks in news.items():
                    if re.search(r"\b%s\s*\(" % n, t) and any(re.search(r"\b%s_*(?:__\w+)?\b" % k, t) for k in ks):
                        also.add(f)
                        break
            touched |= unshadow(allchanges, also)
            files = sorted(set(files_using(classes, renames)) | touched | also)
            print("%d source files with definitions rewritten; compiling %d that use the old or new names" % (len(touched), len(files)))
            left = fix_calls(classes, renames, files)
            for rel, errs in left.items():
                print("FIX BY HAND %s: %s" % (rel, " | ".join(errs)[:600]))
            if files:
                # matched functions whose mangled names changed: re-record them now
                import subprocess
                only = []
                for f in files:
                    only += ["--only", f.relative_to(SRC).as_posix()]
                subprocess.run([sys.executable, str(Path(__file__).with_name("resymbol.py"))] + only)
            print("then: python tools/slots.py verify, and the units")
        return 0
    print(__doc__)
    return 2


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))

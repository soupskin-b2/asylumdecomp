"""Move src's local helper-struct declarations into the headers.

A contributor who needs a method the headers lack declares it on a local struct:

    struct UCanvas_ : public UCanvas { void SetPos(FLOAT X, FLOAT Y); /* 0x00aa7e70 */ };

This finds those structs, and for each one whose methods all have a known address (a `/* 0x... */`
comment, a `sub_XXXXXXXX` name, or a `// @baa` definition in the same file) and only use types the
headers know, declares the methods on the real class in include/ue3/Classes.h (by address, the way
the maintainers do it by hand), then deletes the struct and writes the real class in its place.

    python tools/hoist.py [--only GLOB ...] [--dry-run] [--report FILE]

Skipped (listed with the reason in the report): structs with data members, virtuals or constructors;
methods whose address the headers already give another name or class; names that would hide or
overload one already declared on the class or its bases; helpers in several files that disagree on a
method's name or parameter types. A `sub_XXXXXXXX` header declaration is renamed when a helper gives
the same parameter types a real name. A helper method whose address the headers already name on the class or a
base, with the same types, is a stale alias: its calls take the header's name.

A helper whose method is defined in the same file as a caller can change the code: on the real
class the compiler may inline the definition into the caller (it couldn't through the helper). The
units catch that (a size mismatch): restore the file with `git checkout -- FILE`, run resymbol on
it, and put a `/* hoist: keep (why) */` comment on the line above that helper so the tool leaves it.

Then compile what changed: `python tools/ci/units.py --only ...` (the files it lists) and
`python tools/resymbol.py --only ...` for files that defined a hoisted method (their decorated names
change from the helper's class to the real one).
"""
from __future__ import annotations

import argparse
import collections
import fnmatch
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
import slots  # noqa: E402

HEADER = ROOT / "include" / "ue3" / "Classes.h"
SRC = ROOT / "src"

BUILTIN = set("""void bool char short int long float double unsigned signed const volatile struct class enum union
BYTE SBYTE WORD SWORD INT UINT DWORD QWORD SQWORD FLOAT DOUBLE UBOOL BITFIELD TCHAR ANSICHAR UNICHAR WCHAR wchar_t
size_t PTRINT UPTRINT __int64 TArray TArrayNoInit TIndirectArray TMap TMultiMap TSet TLookupMap TScriptInterface
TRefCountPtr TScopedPointer undefined undefined1 undefined2 undefined4 undefined8 uint byte ushort ulong""".split())

HELPER = re.compile(
    r"(?P<cmt>(?:[ \t]*(?:/\*(?:(?!\*/)[^\n])*\*/|//[^\n]*)[ \t]*\n)*)"
    r"struct (?P<h>(?P<base>[A-Za-z]\w*?)(?:_+[0-9a-f]{8}|_+))\s*:\s*public\s+(?P=base)\s*\{(?P<body>[^{}]*)\};[ \t]*\r?\n")


def known_types() -> set[str]:
    """types from the headers Classes.h comes after (any position), and the builtins"""
    out = set(BUILTIN)
    for h in (ROOT / "include" / "ue3").glob("*.h"):
        if h.name == "Classes.h":
            continue
        t = h.read_text(encoding="utf-8", errors="replace")
        out |= set(re.findall(r"\b(?:struct|class|union|enum)\s+(\w+)", t))
        out |= set(re.findall(r"\btypedef\b[^;{]*?\b(\w+)\s*(?:\[[^\]]*\])?\s*;", t))
        out |= set(re.findall(r"\btypedef\b[^;]*?\(\s*\*\s*(\w+)\s*\)", t))
        out |= set(re.findall(r"^\s*#\s*define\s+(\w+)", t, re.M))
    return out


def classes_h_types() -> dict[str, int]:
    """type -> the first Classes.h line that declares it (a declaration may only use types above it)"""
    out = {}
    for i, l in enumerate(HEADER.read_text(encoding="utf-8").splitlines()):
        for n in re.findall(r"^\s*(?:typedef\s+)?(?:struct|class|union|enum)\s+(\w+)", l):
            out.setdefault(n, i)
        for n in re.findall(r"\btypedef\b[^;{]*?\b(\w+)\s*;", l) + re.findall(r"\btypedef\b[^;]*?\(\s*\*\s*(\w+)\s*\)", l):
            out.setdefault(n, i)
        for n in re.findall(r"\btemplate\s*<[^>]*>\s*(?:class|struct)\s+(\w+)", l):
            out.setdefault(n, i)
    return out


def split_params(p: str) -> list[str]:
    p = p.strip()
    if not p or p == "void":
        return []
    return [x.strip() for x in slots.split_params(p)]


def param_type(p: str) -> str:
    """the parameter's type without its name and default"""
    p = re.sub(r"=.*$", "", p).strip()
    p = re.sub(r"\[[^\]]*\]\s*$", "*", p)
    toks = re.findall(r"\w+|[*&<>,:]+", p)
    words = [t for t in toks if re.match(r"\w", t)]
    # a trailing identifier after the type is the name (unless the type is only one word)
    if len(words) >= 2 and re.match(r"\w", toks[-1]) and toks[-1] not in ("const", "int", "char", "long", "short", "unsigned"):
        p = p[: p.rfind(toks[-1])]
    p = re.sub(r"\b(struct|class|enum)\s+", "", p)
    return re.sub(r"\s+", "", p)


def sig_key(ret: str, params: str, tail: str) -> str:
    return "%s(%s)%s" % (re.sub(r"\b(struct|class|enum)\s+|\s+", "", ret),
                         ",".join(param_type(p) for p in split_params(params)), "const" if "const" in tail else "")


def types_ok(ret: str, params: str, known: set[str], above: dict[str, int] | None = None, at: int = 0) -> str | None:
    """None when every type the declaration names is in the headers, else the first unknown"""
    pieces = [ret] + [re.sub(r"=.*$", "", p) for p in split_params(params)]
    for i, piece in enumerate(pieces):
        piece = piece.strip()
        toks = re.findall(r"\w+|[*&]", piece)
        words = [t for t in toks if re.match(r"\w", t)]
        if i and len(words) >= 2 and re.match(r"\w", toks[-1]):
            words = words[:-1]   # the parameter's name
        elab = set(re.findall(r"\b(?:struct|class|enum)\s+(\w+)\s*[*&]", piece))
        for w in words:
            if w in known or w in elab or w.isdigit() or w in ("struct", "class", "enum"):
                continue
            if above is not None and above.get(w, 1 << 30) < at:
                continue
            return w
    return None


class Helper:
    def __init__(self, file: Path, m: re.Match):
        self.file, self.m = file, m
        self.h, self.cls, self.body = m.group("h"), m.group("base"), m.group("body")
        self.methods = []     # (decl text, ret, name, params, tail, addr)
        self.why = None


SYMS: dict[tuple[str, str], set[int]] = {}


def load_symbols():
    """(class, method) -> addresses, from data/symbols.json.gz's decorated names"""
    sys.path.insert(0, str(ROOT / "tools" / "ci"))
    import place
    for k, v in place.read_gz(ROOT / "data" / "symbols.json.gz").items():
        m = re.match(r"\?(\w+)@(\w+)@@", k)
        if m:
            SYMS.setdefault((m.group(2), m.group(1)), set()).add(int(v))


def scan_file(f: Path, text: str) -> list[Helper]:
    out = []
    for m in HELPER.finditer(text):
        hp = Helper(f, m)
        out.append(hp)
        if "hoist: keep" in m.group("cmt"):
            hp.why = "marked hoist: keep"
            continue
        body = re.sub(r"\b(public|private|protected)\s*:", "", hp.body)
        stmts = [s for s in re.split(r";", body)]
        # each statement plus the comment that follows it on its line
        items = []
        rest = body
        for mm in re.finditer(r"([^;]*?)\s*;[ \t]*((?:/\*(?:(?!\*/).)*\*/|//[^\n]*)?)", body, re.S):
            decl = re.sub(r"(/\*(?:(?!\*/).)*\*/|//[^\n]*)", " ", mm.group(1), flags=re.S).strip()
            if decl:
                items.append((decl, mm.group(2) or ""))
        tail_left = re.sub(r"[^;]*;[ \t]*((?:/\*(?:(?!\*/).)*\*/|//[^\n]*)?)", "", body, flags=re.S)
        if re.sub(r"(/\*(?:(?!\*/).)*\*/|//[^\n]*)", "", tail_left, flags=re.S).strip():
            hp.why = "unparsed text in the struct"
            continue
        if not items:
            hp.why = "empty"
            continue
        for decl, cmt in items:
            static = decl.startswith("static ")
            d = decl[len("static "):] if static else decl
            if re.match(r"(virtual|friend|typedef|enum|template|using|operator)\b", d) or "operator" in d:
                hp.why = "has %s" % d.split()[0]
                break
            s = slots.split_decl(d)
            if not s:
                hp.why = "a data member or an unparsed declaration: %s" % d[:60]
                break
            ret, name, params, tail = s
            if name in (hp.cls, hp.h) or name.startswith("~") or not ret.strip():
                hp.why = "a constructor or destructor"
                break
            addr = None
            a = re.search(r"0x([0-9a-fA-F]{8})\b", cmt) or re.match(r"sub_([0-9a-f]{8})$", name)
            if a:
                addr = int(a.group(1), 16)
            else:
                dm = re.search(r"//\s*@baa\s+0x([0-9a-fA-F]{8})[ \t]*\n(?:[ \t]*(?:/\*(?:(?!\*/|@baa)[\s\S])*\*/|//(?!\s*@baa)[^\n]*)[ \t]*\n)*[^\n;{]*\b%s::%s\s*\("
                               % (re.escape(hp.h), re.escape(name)), text)
                if dm:
                    addr = int(dm.group(1), 16)
            if addr is None:
                # a callee: the project bound the helper's decorated name to its address
                found = SYMS.get((hp.h, name), set()) or SYMS.get((hp.cls, name), set())
                if len(found) == 1:
                    addr = next(iter(found))
            if addr is None:
                hp.why = "no address for %s" % name
                break
            hp.methods.append(((("static " if static else "") + d), ret, name, params, tail, addr))
    return out


def member_names(lines, classes, c) -> set[str]:
    names = set()
    for k in slots.chain(classes, c):
        v = classes[k]
        for l in lines[v["start"] + 1: v.get("end", v["start"])]:
            for n in re.findall(r"\b(~?\w+)\s*\(", l):
                names.add(n)
    return names


def header_addresses() -> dict[int, list[tuple[str, str, int]]]:
    """address -> [(class or '', name, line)] for every /* 0x... */ declaration in Classes.h"""
    out = collections.defaultdict(list)
    cur = ""
    for i, l in enumerate(HEADER.read_text(encoding="utf-8").splitlines()):
        m = re.match(r"(?:struct|class) (\w+)\b[^;]*$", l)
        if m and not l.startswith(" "):
            cur = m.group(1)
        elif l.startswith("};"):
            cur = ""
        for mm in re.finditer(r"(~?\w+)\s*\([^;]*\)[^;]*;\s*/\*\s*0x([0-9a-f]{8})\b", l):
            out[int(mm.group(2), 16)].append((cur, mm.group(1), i))
    for h in (ROOT / "include" / "ue3").glob("*.h"):
        if h.name == "Classes.h":
            continue
        for mm in re.finditer(r"(~?\w+)\s*\([^;\n]*\)[^;\n]*;\s*/\*\s*0x([0-9a-f]{8})\b", h.read_text(encoding="utf-8", errors="replace")):
            out[int(mm.group(2), 16)].append(("?" + h.name, mm.group(1), -1))
    return out


HEADER_TEXT: set[str] = set()
LOOSE = False


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--only", action="append", default=[], help="src files to take helpers from (glob under src/)")
    ap.add_argument("--dry-run", action="store_true")
    ap.add_argument("--loose", action="store_true",
                    help="also drop helpers that alias a header-declared method with other types (the helper's types "
                         "were guesses): compile the files it changes and `git checkout` the ones that fail")
    ap.add_argument("--report", default=None, help="write what was hoisted and skipped here")
    a = ap.parse_args()

    lines, classes = slots.load()
    global HEADER_TEXT, LOOSE
    LOOSE = a.loose
    HEADER_TEXT = set(re.findall(r"\w+", "".join(lines)))
    known = known_types()
    load_symbols()
    above = classes_h_types()
    haddr = header_addresses()

    files = sorted(SRC.rglob("*.cpp"))
    if a.only:
        pats = [p if any(ch in p for ch in "*?[") else "*%s*" % p for p in a.only]
        files = [f for f in files if any(fnmatch.fnmatch(f.relative_to(SRC).as_posix(), p) for p in pats)]
    texts = {f: f.read_text(encoding="utf-8") for f in files}
    helpers = []
    for f in files:
        if "struct " in texts[f]:
            helpers += [h for h in scan_file(f, texts[f]) if h.cls in classes]

    # group the methods by (class, address)
    groups = collections.defaultdict(list)
    for hp in helpers:
        if hp.why:
            continue
        for meth in hp.methods:
            decl, ret, name, params, tail, addr = meth
            bad = types_ok(ret, params, known, above, classes[hp.cls]["start"])
            if bad:
                hp.why = "type %s isn't in the headers" % bad
                break
            groups[(hp.cls, addr)].append((hp, meth))

    plan = {}        # (cls, addr) -> ("add", decl) | ("rename", lineno, newname) | ("have", name)
    verdict = {}     # (cls, addr) -> reason it can't be hoisted
    added_names = collections.defaultdict(set)
    names_cache = {}
    for (c, addr), uses in sorted(groups.items()):
        names = collections.Counter(m[2] for _, m in uses)
        keys = collections.Counter(sig_key(m[1], m[3], m[4]) for _, m in uses)
        have = haddr.get(addr, [])
        if len(have) == 1 and not have[0][1].startswith("sub_") and have[0][0] in slots.chain(classes, c) \
                and (len(names) > 1 or len(keys) > 1):
            # helpers that name it differently: fine when the headers name it and every helper's types agree
            hc, hn, hl = have[0]
            hdecl = slots.split_decl(re.sub(r"\s*/\*.*$", "", lines[hl]).strip().rstrip(";"))
            if hdecl and (LOOSE or {re.sub(r"const$", "", k) for k in keys} == {re.sub(r"const$", "", sig_key(hdecl[0], hdecl[2], hdecl[3]))}) \
                    and all(n == hn or n.startswith("sub_") or n not in HEADER_TEXT for n in names):
                plan[(c, addr)] = ("have", hn)
                continue
        if len(names) > 1 or len(keys) > 1:
            verdict[(c, addr)] = "helpers disagree: %s" % ", ".join(sorted("%s %s" % (m[2], sig_key(m[1], m[3], m[4])) for _, m in uses))
            continue
        hp0, (decl, ret, name, params, tail, _) = uses[0]
        key = next(iter(keys))
        have = haddr.get(addr, [])
        if have:
            hc, hn, hl = have[0]
            if len(have) == 1 and hn != name and not hn.startswith("sub_") and hc in slots.chain(classes, c) \
                    and (name.startswith("sub_") or name not in HEADER_TEXT):
                # the headers already name it (on the class or a base): the helper is a stale alias, so its
                # calls take the header's name, as long as the types agree
                hdecl = slots.split_decl(re.sub(r"\s*/\*.*$", "", lines[hl]).strip().rstrip(";"))
                if hdecl and (LOOSE or sig_key(hdecl[0], hdecl[2], hdecl[3]) == key):
                    plan[(c, addr)] = ("have", hn)
                else:
                    verdict[(c, addr)] = "the headers call 0x%08x %s::%s, with other types" % (addr, hc, hn)
                continue
            if len(have) > 1 or hc != c:
                verdict[(c, addr)] = "the headers declare 0x%08x as %s::%s" % (addr, hc, hn)
                continue
            if hn == name:
                hdecl = slots.split_decl(re.sub(r"\s*/\*.*$", "", lines[hl]).strip().rstrip(";"))
                if hdecl and sig_key(*[hdecl[0], hdecl[2], hdecl[3]]) == key:
                    plan[(c, addr)] = ("have", name)
                else:
                    verdict[(c, addr)] = "the header's %s has other parameter types" % hn
                continue
            if hn == "sub_%08x" % addr and not name.startswith("sub_"):
                hdecl = slots.split_decl(re.sub(r"\s*/\*.*$", "", lines[hl]).strip().rstrip(";"))
                if not hdecl or sig_key(hdecl[0], hdecl[2], hdecl[3]) != key:
                    verdict[(c, addr)] = "the header's sub_%08x has other parameter types" % addr
                    continue
                if c not in names_cache:
                    names_cache[c] = member_names(lines, classes, c)
                if name in names_cache[c] or name in added_names[c]:
                    verdict[(c, addr)] = "%s already names something on %s or a base" % (name, c)
                    continue
                plan[(c, addr)] = ("rename", hl, name)
                added_names[c].add(name)
                continue
            verdict[(c, addr)] = "the headers call 0x%08x %s::%s" % (addr, hc, hn)
            continue
        if c not in names_cache:
            names_cache[c] = member_names(lines, classes, c)
        if name in names_cache[c] or name in added_names[c]:
            verdict[(c, addr)] = "%s already names something on %s or a base" % (name, c)
            continue
        plan[(c, addr)] = ("add", "%s; /* 0x%08x */" % (re.sub(r"\s+", " ", decl).strip(), addr))
        added_names[c].add(name)

    # an address helpers put on several classes: none of them (the method belongs to one)
    owners = collections.defaultdict(set)
    for (c, addr) in plan:
        owners[addr].add(c)
    for addr, cs in owners.items():
        if len(cs) > 1:
            for c in cs:
                del plan[(c, addr)]
                verdict[(c, addr)] = "helpers put 0x%08x on %s" % (addr, ", ".join(sorted(cs)))

    # a struct goes only when every method of it can
    hoisted = [hp for hp in helpers if not hp.why and all((hp.cls, m[5]) in plan for m in hp.methods)]
    for hp in helpers:
        if not hp.why and hp not in hoisted:
            bad = [verdict.get((hp.cls, m[5]), "?") for m in hp.methods if (hp.cls, m[5]) not in plan]
            hp.why = bad[0]
    used = {(hp.cls, m[5]) for hp in hoisted for m in hp.methods}

    # header edits
    adds = collections.defaultdict(list)
    renames = 0
    for k in sorted(used):
        p = plan[k]
        if p[0] == "add":
            adds[k[0]].append(p[1])
        elif p[0] == "rename":
            _, hl, new = p
            lines[hl] = re.sub(r"\bsub_%08x\b" % k[1], new, lines[hl], count=1)
            renames += 1
    inserted = 0
    for c in sorted(adds, key=lambda c: -classes[c]["start"]):
        v = classes[c]
        s, e = v["start"], v["end"]
        at = None
        for i in range(s, e):
            if lines[i].strip() == "/* other member functions */":
                at = i + 1
                while at < e and lines[at].startswith("    ") and not lines[at].strip().startswith("/*"):
                    at += 1
                break
        new = ["    %s\n" % d for d in sorted(adds[c])]
        if at is None:
            at = next((i for i in range(s, e) if lines[i].strip().startswith("/* registered size")), e)
            new = ["    /* other member functions */\n"] + new
        lines[at:at] = new
        inserted += len(adds[c])

    # src edits
    changed, defined = set(), set()
    by_file = collections.defaultdict(list)
    for hp in hoisted:
        by_file[hp.file].append(hp)
    for f, hps in by_file.items():
        t = texts[f]
        for hp in hps:
            cmt = hp.m.group("cmt")
            keep = "" if re.search(r"(?i)\b(kit|header|undeclared|unnamed|declare|gap|lacks?|missing|stand-?in)\b", cmt) else cmt
            at = t.find(hp.m.group(0))
            t = t[:at] + keep + t[at + len(hp.m.group(0)):]
            if not keep and t[at:at + 1] == "\n" and t[at - 2:at] == "\n\n":
                t = t[:at] + t[at + 1:]
            if re.search(r"\b%s::\w+\s*\(" % re.escape(hp.h), t):
                defined.add(f)
            t = re.sub(r"\b%s\b" % re.escape(hp.h), hp.cls, t)
            for m in hp.methods:
                p = plan[(hp.cls, m[5])]
                if p[0] == "have" and p[1] != m[2]:
                    t = re.sub(r"\b%s\b" % re.escape(m[2]), p[1], t)
        if t != texts[f]:
            changed.add(f)
            if not a.dry_run:
                f.write_text(t, encoding="utf-8", newline="\n")
    # a renamed sub_ declaration: its callers elsewhere in src use the old name
    for k in sorted(used):
        p = plan[k]
        if p[0] != "rename":
            continue
        old = "sub_%08x" % k[1]
        for f in SRC.rglob("*.cpp"):
            s0 = f.read_text(encoding="utf-8")
            if old in s0:
                s1 = re.sub(r"\b%s\b" % old, p[2], s0)
                changed.add(f)
                if not a.dry_run:
                    f.write_text(s1, encoding="utf-8", newline="\n")
    if not a.dry_run:
        slots.save(lines)

    reasons = collections.Counter((hp.why or "").split(":")[0] for hp in helpers if hp.why)
    print("%d helper structs; %d hoisted (%d declarations added, %d sub_ declarations renamed) from %d files"
          % (len(helpers), len(hoisted), inserted, renames, len(changed)))
    for r, n in reasons.most_common():
        print("  skipped %5d: %s" % (n, r))
    if a.report:
        with open(a.report, "w", encoding="utf-8", newline="\n") as o:
            for hp in helpers:
                o.write("%s %s %s: %s\n" % ("HOIST" if hp in hoisted else "SKIP ", hp.file.relative_to(SRC).as_posix(), hp.h, hp.why or ", ".join(m[2] for m in hp.methods)))
    if changed and not a.dry_run:
        print("then: python tools/ci/units.py %s" % " ".join("--only " + f.relative_to(SRC).as_posix() for f in sorted(changed))[:3000])
        if defined:
            print("and:  python tools/resymbol.py %s" % " ".join("--only " + f.relative_to(SRC).as_posix() for f in sorted(defined))[:3000])
    return changed, defined


if __name__ == "__main__":
    main()

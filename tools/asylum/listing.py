"""The original assembly of a function, listed from your own copy of the game (packets carry
everything else; the listing is made here so the project never ships the game's code)."""
from __future__ import annotations

import json
import re
import struct

from pe import Image
from x86 import Insn, disasm

_HEX = re.compile(r"0x([0-9a-f]+)")
_NUM = re.compile(r"(?<![\w])(0x[0-9a-f]+|\d+)(?![\w])")


def fname(va: int, names: dict[int, str]) -> str:
    return names.get(va) or "sub_%08x" % va


def _printable(s: str) -> bool:
    return len(s) >= 2 and all(32 <= ord(c) < 127 or c in "\t\n\r" for c in s)


def data_label(img: Image, va: int, names: dict[int, str]) -> str:
    if va in img.imports:
        return "__imp_" + img.imports[va]
    if va in names:
        return names[va]
    if img.is_code_pointer_table(va):
        return "g_%08x" % va
    s = img.cstring(va, 200)
    if s is not None and _printable(s.decode("latin-1")):
        return json.dumps(s.decode("latin-1"))
    w = img.wstring(va, 200)
    if w is not None and _printable(w):
        return "L" + json.dumps(w)
    sec = img.section(va)
    if sec and sec.name == ".rdata" and va % 4 == 0:
        try:
            f, = struct.unpack("<f", img.read(va, 4))
            if f == f and 1e-6 < abs(f) < 1e9:
                return "flt_%08x (=%s)" % (va, "%g" % f)
        except ValueError:
            pass
    return "g_%08x" % va if sec and sec.name != ".text" else "loc_%08x" % va


def _u32(img: Image, a: int) -> int:
    try:
        return img.u32(a)
    except ValueError:
        return 0


def tables(img: Image, va: int, size: int, insns: list[Insn]) -> dict[int, tuple[str, int]]:
    """Jump tables (dd) and index tables (db) the compiler put after the code: offset -> (kind, bytes)."""
    out: dict[int, tuple[str, int]] = {}
    for i in insns:
        if i.mnemonic == "jmp" and "*4 +" in i.ops and "dword ptr" in i.ops:
            m = _HEX.search(i.ops.rsplit("+", 1)[-1])
            t = int(m.group(1), 16) if m else 0
            if va <= t < va + size:
                n = 0
                while t - va + 4 * (n + 1) <= size:
                    a = t + 4 * n
                    if not (va <= _u32(img, a) < va + size and a in img.relocs):
                        break
                    n += 1
                out[t - va] = ("dd", 4 * n)
        elif i.mnemonic == "movzx" and "byte ptr [" in i.ops and "+ 0x" in i.ops:
            m = _HEX.search(i.ops.rsplit("+ ", 1)[-1])
            t = int(m.group(1), 16) if m else 0
            if va <= t < va + size:
                out.setdefault(t - va, ("db", 0))
    starts = sorted(out)
    for k, off in enumerate(starts):
        if out[off][0] == "db":
            out[off] = ("db", (starts[k + 1] if k + 1 < len(starts) else size) - off)
    return dict(sorted(out.items()))


def _subst(text: str, v: int, lab: str) -> str:
    best = None
    for m in _NUM.finditer(text):
        if int(m.group(1), 0) == v:
            best = m
    if best is None:
        return "%s    ; %s" % (text, lab)
    return text[:best.start()] + lab + text[best.end():]


def listing(img: Image, va: int, size: int, names: dict[int, str], slots: dict[int, str] | None = None) -> str:
    slots = slots or {}
    code = img.read(va, size)
    tabs = tables(img, va, size, disasm(code, va))
    insns = disasm(code[:min(tabs, default=size)], va)
    targets = {i.branch for i in insns if i.mnemonic != "call" and i.branch is not None and 0 <= i.branch < size}
    for off, (kind, n) in tabs.items():
        if kind == "dd":
            targets.update(_u32(img, va + off + k) - va for k in range(0, n, 4))
    labels = {t: "L%d" % (k + 1) for k, t in enumerate(sorted(targets))}
    tnames = {o: "T%d" % (k + 1) for k, o in enumerate(tabs)}
    lines = []
    for i in insns:
        if i.off in labels:
            lines.append(labels[i.off] + ":")
        text = i.text
        if i.branch is not None:
            dest = (va + i.branch) & 0xFFFFFFFF
            if i.mnemonic == "call":
                text = "call " + fname(dest, names)
            elif 0 <= i.branch < size:
                text = "%s %s" % (i.mnemonic, labels[i.branch])
            else:
                text = "%s %s" % (i.mnemonic, fname(dest, names))
        elif i.size >= 4:
            for k in range(i.size - 3):
                a = va + i.off + k
                if a not in img.relocs:
                    continue
                v = _u32(img, a)
                if va <= v < va + size:
                    lab = tnames.get(v - va) or labels.get(v - va) or "+%#x" % (v - va)
                elif v in img.imports:
                    lab = "__imp_" + img.imports[v].split("!", 1)[-1]
                elif v in names or img.is_code(v):
                    lab = fname(v, names)
                else:
                    lab = data_label(img, v, names)
                text = _subst(text, v, lab)
        if i.off in slots:
            text = "%-46s ; %s" % (text, slots[i.off])
        lines.append("    %-6x %s" % (i.off, text))
    for off, (kind, n) in tabs.items():
        lines.append("%s:  ; %s table" % (tnames[off], "jump" if kind == "dd" else "index"))
        if kind == "dd":
            for k in range(0, n, 4):
                lines.append("    %-6x dd %s" % (off + k, labels.get(_u32(img, va + off + k) - va, "?")))
        else:
            b = img.read(va + off, n)
            for k in range(0, len(b), 16):
                lines.append("    %-6x db %s" % (off + k, ", ".join(str(x) for x in b[k:k + 16])))
    return "\n".join(lines)


GNATIVES = 0x026888a0
_MEM = re.compile(r"(byte|word|dword) ptr \[(esp|ebp)(?: ([+-]) (0x[0-9a-f]+|\d+))?\]")


def _disp(m: re.Match) -> int:
    d = int(m.group(4), 0) if m.group(4) else 0
    return -d if m.group(3) == "-" else d


def step_defaults(img: Image, va: int, size: int) -> list[tuple[str, int] | None]:
    """For each inlined Stack.Step of a native, in order: what the code stored in the variable it reads
    into (the OPTX default) as ("int", bits) / ("float", bits) / ("name", index), or None if unclear."""
    try:
        insns = disasm(img.read(va, size), va)
    except Exception:  # noqa: BLE001
        return []
    esp, ebp = 0, None       # esp relative to the entry; ebp's value in the same terms
    regs, xmm = {}, {}       # known constants
    stores = {}              # slot -> [(kind, value)] in order
    out, natreg, pending = [], None, None
    for i in insns:
        m, o = i.mnemonic, i.ops
        if m == "push":
            esp -= 4
        elif m == "pop":
            esp += 4
            regs.pop(o, None)
        elif m in ("sub", "add") and o.startswith("esp, "):
            try:
                n = int(o[5:], 0)
                esp += n if m == "add" else -n
            except ValueError:
                pass
        elif m == "and" and o.startswith("esp, "):
            esp = None if ebp is None else esp      # aligned: only ebp-relative slots stay known
        elif m == "mov" and o == "ebp, esp":
            ebp = esp
        elif m == "xor" and re.fullmatch(r"(e\w\w), \1", o):
            regs[o.split(",")[0]] = 0
        elif m in ("xorps", "pxor") and re.fullmatch(r"(xmm\d), \1", o):
            xmm[o.split(",")[0]] = 0
        elif m == "movss" and re.match(r"xmm\d, dword ptr \[0x[0-9a-f]+\]$", o):
            a = int(re.search(r"\[(0x[0-9a-f]+)\]", o).group(1), 16)
            try:
                xmm[o[:4]] = struct.unpack("<I", img.read(a, 4))[0]
            except Exception:  # noqa: BLE001
                xmm.pop(o[:4], None)
        elif m == "mov" and re.fullmatch(r"(e\w\w), (0x[0-9a-f]+|\d+)", o):
            regs[o[:3]] = int(o[5:], 0)
        elif m == "mov" and re.match(r"(e\w\w), dword ptr \[\w+\*4 \+ 0x([0-9a-f]+)\]$", o) and \
                int(re.search(r"0x([0-9a-f]+)\]$", o).group(1), 16) == GNATIVES:
            natreg = o[:3]
        elif m == "call" and natreg and o == natreg:
            # the Step: its pushes were (Stack, &Var); &Var came from the last lea before them
            out.append((stores.get(pending) or [None])[-1] if pending is not None else None)
            esp = None if esp is None else esp + 8
            natreg = None
            continue
        if m == "lea" and re.match(r"e\w\w, \[", o):
            mm = _MEM.search("dword ptr " + o[5:])
            if mm:
                base = esp if mm.group(2) == "esp" else ebp
                pending = None if base is None else base + _disp(mm)
        if m in ("mov", "movss") and o.split(",")[0].endswith("]"):
            mm = _MEM.match(o)
            if mm:
                base = esp if mm.group(2) == "esp" else ebp
                if base is not None:
                    slot = base + _disp(mm)
                    src = o.split(", ")[-1]
                    v = None
                    if m == "movss":
                        v = ("float", xmm[src]) if src in xmm else None
                    elif re.fullmatch(r"0x[0-9a-f]+|\d+", src):
                        v = ("int", int(src, 0))
                    elif src in regs:
                        v = ("int", regs[src])
                    stores.setdefault(slot, []).append(v)
                    if mm.group(1) == "dword":
                        stores.setdefault(slot + 4, [])   # a later NAME's Number half stays apart
        if m.startswith("call"):
            regs.clear()
    return out


def _default_text(d: tuple[str, int] | None, macro: str) -> str | None:
    if d is None:
        return None
    kind, v = d
    if macro.startswith("P_GET_FLOAT"):
        f = struct.unpack("<f", struct.pack("<I", v & 0xFFFFFFFF))[0] if kind == "float" else float(v)
        return ("%r" % f).rstrip("0").rstrip(".") + (".f" if float(f).is_integer() else "f") if f else "0.f"
    if kind != "int":
        return None
    if macro.startswith("P_GET_NAME"):
        return "NAME_None" if v == 0 else None
    if macro.startswith("P_GET_UBOOL"):
        return "TRUE" if v else "FALSE"
    return str(v if v < 1 << 31 else v - (1 << 32))


def fill_defaults(head: str, img: Image, va: int, size: int) -> str:
    """Packets leave OPTX defaults as <default>: read them from the code."""
    if "<default>" not in head:
        return head
    k = head.find("Its script parameters, in the order it reads them:")
    if k < 0:
        return head
    defaults = step_defaults(img, va, size)
    lines = head[k:].split("\n")
    n = 0
    for j, line in enumerate(lines[1:], 1):
        if not line.startswith("- ") or line.startswith("- then P_FINISH"):
            if line.startswith("- then"):
                break
            continue
        mm = re.search(r"-> (P_GET_\w+)\(\w+, <default>\);", line)
        if mm and n < len(defaults):
            txt = _default_text(defaults[n], mm.group(1))
            if txt:
                lines[j] = line.replace("(<default>: the value the assembly stores before its Step call)",
                                        "(default %s, read from the assembly: check it)" % txt).replace("<default>", txt)
        n += 1
    return head[:k] + "\n".join(lines)


def packet(img: Image, va: int, size: int, record: dict, names: dict[int, str]) -> str:
    """A packet's text: the record's head and tail around the listing."""
    slots = {int(k): v for k, v in (record.get("slots") or {}).items()}
    head = fill_defaults(record["head"], img, va, size)
    try:
        from paths import ROOT
        head = refresh_head(head, va, (ROOT / "include/ue3/Classes.h").read_text(encoding="utf-8"))
    except OSError:
        pass
    return "%s## Original assembly\n```\n%s\n```\n%s" % (head, listing(img, va, size, names, slots), record["tail"])


_CLASS_LINE = re.compile(r"^`this` is an? (\w+) ", re.M)
_DECL_LINE = re.compile(r"^Its declaration in Classes\.h: `[^`\n]*`$", re.M)
_MEMBERS_LINE = re.compile(r"^Other members it declares: .*$", re.M)
_SLOT = re.compile(r"occupies slot (\d+) of (\w+)'s vtable")


def _class_body(header: str, cls: str) -> str | None:
    m = re.search(r"^struct %s\b[^;{]*\{.*?^\};" % re.escape(cls), header, re.S | re.M)
    return m.group(0) if m else None


_NATIVE = re.compile(r"`void (\w+)::(exec\w+)\(FFrame& Stack, RESULT_DECL\)`.*?(as a member of a struct deriving from \w+)")
_REF_HINT = ("(If the assembly zeroes GPropAddr before a struct's Step and then uses GPropAddr or the local, that "
             "parameter is P_GET_STRUCT_REF(FStruct, Name), even when the script doesn't mark it out.)")
_PURE_HINT = ("This is a pure virtual stub (GError->Logf(\"Pure virtual not implemented (%s)\", ...)): "
              "`#include \"ue3/Script.h\"` and write `RET Class::Func(PARAMS) PURE_VIRTUAL(Class::Func, return 0;)` "
              "(or `PURE_VIRTUAL(Class::Func,)` for void), with the declaration's exact signature.\n\n")


def refresh_head(head: str, va: int, header: str) -> str:
    """The record's head quotes Classes.h as it was when the packet was built: quote the kit's instead,
    so header fixes reach packets (the declaration of this function, and its class's other members)."""
    if "Pure virtual not implemented" in head and "PURE_VIRTUAL" not in head:
        k = head.find("## Starting point")
        head = head[:k] + _PURE_HINT + head[k:] if k >= 0 else head + _PURE_HINT
    n = _NATIVE.search(head)
    if n and _class_body(header, n.group(1)) and re.search(r"\b%s\s*\(" % n.group(2), _class_body(header, n.group(1))):
        head = head.replace(n.group(3), "as `%s::%s` itself (Classes.h declares it: no helper struct)" % (n.group(1), n.group(2)))
    if "-> P_GET_STRUCT(" in head and _REF_HINT not in head:
        head = head.replace("- then P_FINISH;", "- then P_FINISH;\n" + _REF_HINT, 1)
    m = _CLASS_LINE.search(head)
    body = _class_body(header, m.group(1)) if m else None
    if body is None:
        return head
    decl = None
    for line in body.split("\n"):  # a declaration with this function's address
        if "/* 0x%08x */" % va in line:
            decl = line.split("/*")[0].strip()
            break
    s = _SLOT.search(head)
    if decl is None and s:  # a virtual: the declaration at its slot, here or in a base
        c, slot = m.group(1), int(s.group(1)) * 4
        while c and decl is None:
            b = _class_body(header, c)
            if b is None:
                break
            for line in b.split("\n"):
                if "virtual" in line and "/* 0x%03x */" % slot in line:
                    decl = line.split("/*")[0].strip()
                    break
            p = re.search(r"^struct %s : public (\w+)" % re.escape(c), header, re.M)
            c = p.group(1) if p else None
    if decl:
        head = _DECL_LINE.sub(lambda _: "Its declaration in Classes.h: `%s`" % decl, head)
    names = [n for n in dict.fromkeys(re.findall(r"^\s+(?:virtual\s+)?[^;(/]*?\b(~?\w+)\s*\([^;]*\)[^;]*;", body, re.M))
             if not n.isupper()]  # not macros (DECLARE_CLASS)
    if names:
        head = _MEMBERS_LINE.sub(lambda _: "Other members it declares: " + ", ".join(names[:60]) + (" ..." if len(names) > 60 else ""), head)
    return head


def native_starter(head: str, va: int) -> str | None:
    """A starting work/VA.cpp for a script native: its signature and the packet's parameter reads."""
    n = re.search(r"`void (\w+)::(exec\w+)\(FFrame& Stack, RESULT_DECL\)`", head)
    k = head.find("Its script parameters, in the order it reads them:")
    if not n or k < 0:
        return None
    cls, helper = n.group(1), "as a member of a struct deriving from" in head
    body = []
    for line in head[k:].split("\n")[1:]:
        if line.startswith("- then P_FINISH"):
            break
        if not line.startswith("- "):
            continue
        if " -> " in line:
            body.append("\t" + line.split(" -> ", 1)[1].strip().replace(
                "<default>", "0 /* TODO default: the value the assembly stores before this Step */"))
        else:
            body.append("\t/* %s: no P_GET_ macro for it; read it with Stack.Step */" % line[2:].strip())
    body.append("\tP_FINISH;")
    r = re.search(r"It returns (\w+): `\*\(\w+\*\)Result = \.\.\.;`", head)
    body.append("\t/* *(%s*)Result = ...; */" % r.group(1) if r else "\t/* ... */")
    decl = ""
    if helper:  # the headers don't declare it: a helper struct does (AGENTS.md)
        decl = "struct %s_ : public %s\n{\n\tvoid %s(FFrame& Stack, RESULT_DECL);\n};\n\n" % (cls, cls, n.group(2))
        cls += "_"
    return ('#include "ue3/Classes.h"\n#include "ue3/Script.h"\n\n%s// @baa 0x%08x\nvoid %s::%s(FFrame& Stack, RESULT_DECL)\n{\n%s\n}\n'
            % (decl, va, cls, n.group(2), "\n".join(body)))


_LINE = re.compile(r"^(\s*[0-9a-f]+\s+)(\S.*)$")


def brief(text: str) -> str:
    """A native's listing with each inlined Stack.Step folded into one line (`Step -> &[esp + 8]`): the
    loads of Stack.Code, the opcode fetch, the GNatives call and its pushes go; everything else stays
    (so the stores of optional defaults and the interleaved code remain visible)."""
    lines = text.split("\n")
    drop, repl = set(), {}
    for k, line in enumerate(lines):
        if "+ GNatives]" not in line:
            continue
        reg = re.search(r"mov (e\w\w), dword ptr \[\w+\*4 \+ GNatives\]", line)
        if not reg:
            continue
        reg = reg.group(1)
        # back: the opcode fetch (movzx, add 1, store to [S + 0x18], the load of [S + 0x18])
        mine = {k}
        for j in range(k - 1, max(k - 9, -1), -1):
            s = _LINE.match(lines[j])
            ins = s.group(2) if s else ""
            if re.match(r"movzx %s, byte ptr \[e\w\w\]$" % reg, ins) or re.match(r"add e\w\w, 1$", ins) or \
                    re.match(r"mov dword ptr \[e\w\w \+ 0x18\], e\w\w$", ins) or re.match(r"mov e\w\w, dword ptr \[e\w\w \+ 0x18\]$", ins) or \
                    re.match(r"mov ecx, dword ptr \[e\w\w \+ 0x14\]$", ins):
                mine.add(j)
        # forward: lea target, the two pushes, Stack.Object into ecx, the call
        target = None
        for j in range(k + 1, min(k + 10, len(lines))):
            s = _LINE.match(lines[j])
            ins = s.group(2) if s else ""
            m = re.match(r"lea e\w\w, (\[.*\])$", ins)
            if m and target is None:
                target = m.group(1)
                mine.add(j)
            elif re.match(r"push e\w\w$", ins) or re.match(r"mov ecx, dword ptr \[e\w\w \+ 0x14\]$", ins):
                mine.add(j)
            elif ins == "call %s" % reg:
                repl[j] = _LINE.match(lines[j]).group(1) + "Step -> &%s" % (target or "?")
                drop |= mine
                break
    # P_FINISH: Code++, and a following EX_DebugInfo runs through GNatives[0x41]
    for k, line in enumerate(lines):
        if "call dword ptr [%s]" % _DEBUGINFO not in line and "call dword ptr [g_%08x]" % (GNATIVES + 0x41 * 4) not in line:
            continue
        for j in range(k - 1, max(k - 10, -1), -1):
            s = _LINE.match(lines[j])
            if s and re.match(r"add dword ptr \[e\w\w \+ 0x18\], 1$", s.group(2)):
                if any(re.search(r"cmp byte ptr \[e\w\w\], 0x41$", x) for x in lines[j:k]) and \
                        not any(x.endswith(":") for x in lines[j:k]):
                    drop |= set(range(j, k))
                    repl[k] = s.group(1) + "P_FINISH (Code++; an EX_DebugInfo after it runs through GNatives[0x41])"
                break
    return "\n".join(repl.get(k, l) for k, l in enumerate(lines) if k not in drop)


_DEBUGINFO = "GNatives[0x41]"

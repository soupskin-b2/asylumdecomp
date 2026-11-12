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


def packet(img: Image, va: int, size: int, record: dict, names: dict[int, str]) -> str:
    """A packet's text: the record's head and tail around the listing."""
    slots = {int(k): v for k, v in (record.get("slots") or {}).items()}
    head = record["head"]
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

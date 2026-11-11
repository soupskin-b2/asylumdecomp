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
    return "%s## Original assembly\n```\n%s\n```\n%s" % (record["head"], listing(img, va, size, names, slots), record["tail"])

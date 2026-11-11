"""A side-by-side diff of your compiled function against the original (needs the game): the
feedback for a mismatch. The verdict itself always comes from fingerprint.verify."""
from __future__ import annotations

import difflib
import re
import struct

from coff import Coff
from listing import data_label, fname
from pe import Image
from x86 import Insn, disasm, normalize


def short(name: str) -> str:
    """A readable form of a decorated name."""
    if name.startswith("?"):
        parts = name[1:].split("@@")[0].split("@")
        if parts and parts[0]:
            if parts[0].startswith("?"):
                return "::".join(reversed(parts[1:])) + "::" + parts[0]
            return "::".join(reversed(parts))
    if name.startswith("_") and "@" in name:
        return name[1:].split("@")[0]
    return name[1:] if name.startswith("_") else name


def _labels(insns: list[Insn]) -> dict[int, str]:
    return {t: "L%d" % (k + 1) for k, t in enumerate(sorted({i.branch for i in insns if i.branch is not None and i.mnemonic != "call"}))}


def _shape(text: str) -> str:
    # direct calls align by position (your names are your own); indirect ones compare in full
    if text.startswith("call ") and "ptr" not in text and not re.match(r"call e[a-ds][xip]\b", text):
        return "call"
    return text


def diff(obj: Coff, sym_name: str, img: Image, va: int, size: int, names: dict[int, str], bound: dict[str, int]):
    """(original instructions, how many line up, your extra ones, rendered diff)."""
    sym = next(s for s in obj.functions() if s.name == sym_name)
    sec, start, end = obj.function_body(sym)
    code, target = sec.data[start:end], img.read(va, size)
    ci, ti = disasm(code), disasm(target)
    c_rel = {}
    for rl in sec.relocs:
        if start <= rl.offset < end:
            n = obj.symbols[rl.symbol].name
            d = bound.get(n)
            c_rel[rl.offset - start] = (names.get(d) or _name(img, d, names)) if d is not None else short(n)
    t_rel = {}
    for a in img.relocs_in(va, size):
        d = struct.unpack_from("<I", target, a - va)[0]
        t_rel[a - va] = _name(img, d, names)
    for i in ti:
        if i.mnemonic == "call" and i.branch is not None:
            t_rel[i.off + 1] = fname((va + i.branch) & 0xFFFFFFFF, names)
    cl, tl = _labels(ci), _labels(ti)
    cn = [normalize(i, cl, c_rel) for i in ci]
    tn = [normalize(i, tl, t_rel) for i in ti]
    sm = difflib.SequenceMatcher(None, [_shape(x) for x in tn], [_shape(x) for x in cn], autojunk=False)
    rows = []
    for op, a1, a2, b1, b2 in sm.get_opcodes():
        for k in range(max(a2 - a1, b2 - b1)):
            t = tn[a1 + k] if a1 + k < a2 else ""
            c = cn[b1 + k] if b1 + k < b2 else ""
            lab = tl.get(ti[a1 + k].off) if a1 + k < a2 else None
            rows.append(("=" if op == "equal" else "~" if t and c else "-" if t else "+", lab, t, c))
    matched = sum(b.size for b in sm.get_matching_blocks())
    return len(ti), matched, len(ci) - matched, render(rows)


def _name(img: Image, d: int, names: dict[int, str]) -> str:
    if d in img.imports:
        return "__imp_" + img.imports[d].split("!", 1)[-1]
    if d in names or img.is_code(d):
        return fname(d, names)
    return data_label(img, d, names)


def render(rows, context: int = 3, limit: int = 120) -> str:
    """original | yours, unchanged runs folded to `context` lines around differences."""
    show = [False] * len(rows)
    for k, row in enumerate(rows):
        if row[0] != "=":
            for j in range(max(0, k - context), min(len(rows), k + context + 1)):
                show[j] = True
    out, skipped = [], 0
    for k, (mark, lab, t, c) in enumerate(rows):
        if not show[k]:
            skipped += 1
            continue
        if skipped:
            out.append("      ... %d matching instructions ..." % skipped)
            skipped = 0
        left = ("%s: " % lab if lab else "") + t
        out.append(("%s %-50s %s" % (mark, left[:50], "" if mark == "=" else "| " + c)).rstrip())
    if skipped:
        out.append("      ... %d matching instructions ..." % skipped)
    if len(out) > limit:
        out = out[:limit] + ["      ... (%d more lines)" % (len(out) - limit)]
    return "\n".join(out)

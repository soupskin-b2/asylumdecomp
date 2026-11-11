"""x86 disassembly (capstone) for listings and diffs."""
from __future__ import annotations

import re
from dataclasses import dataclass

try:
    import capstone
except ImportError:  # pragma: no cover
    raise SystemExit("asylum needs capstone for listings and diffs: python -m pip install capstone")

_cs = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
_cs.detail = True
_cs.skipdata = True
_BRANCH = {"call", "jmp", "loop", "loope", "loopne", "jecxz", "jcxz"}


@dataclass
class Insn:
    off: int                   # from the function start
    size: int
    mnemonic: str
    ops: str
    raw: bytes
    branch: int | None = None  # a relative branch's target, from the function start
    disp_at: int | None = None  # where a 4-byte memory displacement starts in raw

    @property
    def text(self) -> str:
        return (self.mnemonic + " " + self.ops).strip()


def disasm(code: bytes, base: int = 0) -> list[Insn]:
    out = []
    for i in _cs.disasm(code, base):
        ins = Insn(i.address - base, i.size, i.mnemonic, i.op_str, bytes(i.bytes))
        if i.mnemonic == ".byte":
            ins.mnemonic = "db"
        else:
            if (i.mnemonic in _BRANCH or i.mnemonic.startswith("j")) and i.operands and i.operands[0].type == capstone.x86.X86_OP_IMM:
                rel = (i.operands[0].imm - base) & 0xFFFFFFFF
                ins.branch = rel - (1 << 32) if rel >= 1 << 31 else rel
            if i.disp_size == 4:
                ins.disp_at = i.disp_offset
        out.append(ins)
    return out


def normalize(i: Insn, labels: dict[int, str], rel: dict[int, str]) -> str:
    """Text for alignment: branch targets as labels, relocated fields as their names."""
    fields = sorted((o, n) for o, n in rel.items() if i.off <= o < i.off + i.size)
    if i.branch is not None and i.mnemonic != "call":
        if fields:
            return "%s %s" % (i.mnemonic, fields[0][1])
        return "%s %s" % (i.mnemonic, labels.get(i.branch, "?%+d" % i.branch))
    text = i.text
    for fo, name in fields:
        if i.branch is not None:
            return "%s %s" % (i.mnemonic, name)
        k = fo - i.off
        if k + 4 > len(i.raw):
            continue
        val = int.from_bytes(i.raw[k:k + 4], "little")
        memory = i.disp_at == k
        if memory and "[" in text and "]" in text:
            start, end = text.find("[") + 1, text.find("]")
        else:
            start, end = (text.rfind(", ") + 2 if ", " in text else 0), len(text)
        operand = text[start:end]
        hits = [m for m in _NUM.finditer(operand) if _val(m.group()) in (val, val - (1 << 32))]
        if hits:
            m = hits[-1]
            text = text[:start] + operand[:m.start()] + name + operand[m.end():] + text[end:]
        elif memory and val == 0:
            text = text[:start] + operand + " + " + name + text[end:]
        else:
            text += "  ; " + name
    return text


_NUM = re.compile(r"(?<![\w])-?(0x[0-9a-f]+|\d+)(?![\w])")


def _val(s: str) -> int:
    neg = s.startswith("-")
    v = int(s.lstrip("-"), 0)
    return -v if neg else v

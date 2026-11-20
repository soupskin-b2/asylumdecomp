"""What in the headers stands in the way of writing a function (`asylum list --ready / --blocked`):
- it reads or writes `this` bytes that Classes.h covers with a C++-only pad (`BYTE _native[..]`, or an opaque
  `FNativeDtor_..` member): those fields have no names yet;
- it calls a virtual of its own class (through `this`'s vtable) whose slot is still a placeholder `vf_XXX`;
- it is itself such a placeholder slot (its signature in Classes.h is a guess): the exe's vtables
  (data/vtables.json.gz) say which slots hold it.
A heuristic over the disassembly: `this` is followed from ecx through register copies until it is overwritten."""
from __future__ import annotations

import re
from functools import lru_cache
from pathlib import Path

HEAD = re.compile(r"^(?:struct|class) (?:__declspec\(\w+(?:\(\d+\))?\) )?(\w+)(?: : public (\w+)(?:, public \w+)*)? \{")
PAD = re.compile(r"^\s+BYTE (_native\w*)\[0x([0-9a-f]+)\];")
OPAQUE = re.compile(r"^\s+(FNativeDtor_[0-9a-f]{8}_[0-9a-f]+) (\w+); /\* 0x([0-9a-f]+)\b")
OPAQUE_TYPE = re.compile(r"^struct (FNativeDtor_\w+) \{[^}]*\bDWORD _data\[(\d+)\];")
MEMBER_OFF = re.compile(r"^\s+(?!virtual\b)[^(]*?;\s*/\* 0x([0-9a-f]+)\b")
SIZE = re.compile(r"/\* registered size 0x([0-9a-f]+) \*/")
SLOT = re.compile(r"^\s+virtual [^;]*?\b(~?\w+)\s*\([^;]*\)[^;]*;\s*/\* 0x([0-9a-f]{3}) \*/")
ADDR = re.compile(r"\b(~?\w+)\s*\([^;]*\)[^;/]*;\s*/\*\s*0x([0-9a-f]{8})\b")


class Layout:
    def __init__(self):
        self.base: dict[str, str | None] = {}
        self.pads: dict[str, list[tuple[int, int, str]]] = {}
        self.slots: dict[str, dict[int, str]] = {}
        self.owner: dict[int, tuple[str, str]] = {}   # address -> (class, name)

    def chain(self, cls):
        seen = set()
        while cls and cls not in seen:
            seen.add(cls)
            yield cls
            cls = self.base.get(cls)

    def pad_at(self, cls, off):
        for c in self.chain(cls):
            for s, e, name in self.pads.get(c, ()):
                if s <= off < e:
                    return c, name, s
        return None

    def slot_name(self, cls, off):
        for c in self.chain(cls):
            n = self.slots.get(c, {}).get(off)
            if n:
                return c, n
        return None


@lru_cache(maxsize=2)
def _layout(path: str, stamp: int) -> Layout:
    L = Layout()
    lines = Path(path).read_text(encoding="utf-8", errors="replace").splitlines()
    opaque = {m.group(1): 4 * int(m.group(2)) for m in map(OPAQUE_TYPE.match, lines) if m}
    cls = None
    pending: list[tuple[str, int]] = []   # pads whose end is the next member's offset
    for line in lines:
        m = HEAD.match(line)
        if m:
            cls = None if line.rstrip().endswith("};") else m.group(1)
            if cls:
                L.base[cls] = m.group(2)
            pending = []
            continue
        if not cls:
            continue
        if line.startswith("};"):
            cls = None
            continue
        p = PAD.match(line)
        if p:
            pending.append((p.group(1), int(p.group(2), 16)))
            continue
        o = OPAQUE.match(line)
        if o and o.group(1) in opaque:   # not the ones deriving from a known container (TArray, FMap_Mirror)
            off = int(o.group(3), 16)
            L.pads.setdefault(cls, []).append((off, off + opaque[o.group(1)], o.group(2)))
        sz = SIZE.search(line)
        mo = MEMBER_OFF.match(line) if not sz else None
        end = int(sz.group(1), 16) if sz else int(mo.group(1), 16) if mo and not line.lstrip().startswith("/*") else None
        if end is not None and pending:
            for name, size in reversed(pending):
                L.pads.setdefault(cls, []).append((end - size, end, name))
                end -= size
            pending = []
        s = SLOT.match(line)
        if s:
            L.slots.setdefault(cls, {})[int(s.group(2), 16)] = s.group(1)
        a = ADDR.search(line)
        if a:
            L.owner.setdefault(int(a.group(2), 16), (cls, a.group(1)))
    return L


def layout(root: Path) -> Layout:
    p = root / "include" / "ue3" / "Classes.h"
    return _layout(str(p), p.stat().st_mtime_ns)


_MOV_THIS = re.compile(r"\bmov (e[a-ds][xip]|e[sd]i|ebp), (e[a-ds][xip]|e[sd]i|ebp)$")
_ACCESS = re.compile(r"\[(e[a-ds][xip]|e[sd]i|ebp) \+ 0x([0-9a-f]+)\]")
_VTBL = re.compile(r"\bmov (e\w\w), dword ptr \[(e\w\w)\]$")
_VCALL = re.compile(r"\bcall dword ptr \[(e\w\w) \+ 0x([0-9a-f]+)\]")
_CALLREG = re.compile(r"^call (e\w\w)$")
_LOADSLOT = re.compile(r"\bmov (e\w\w), dword ptr \[(e\w\w) \+ 0x([0-9a-f]+)\]$")
_WRITE = re.compile(r"^\s*\w+\s+(?:mov|lea|xor|pop|add|sub|and|or|inc|dec|movzx|movsx|imul|shl|shr|sar|neg|not|setn?e|cmov\w+) (e\w\w)\b")


def vtable_slots(vtables: dict, img) -> dict[int, list[tuple[str, int]]]:
    """function address -> the (class, slot offset) pairs of the exe's vtables that hold it
    (`vtables`: data/vtables.json.gz, class -> [vtable address, slot count])"""
    out: dict[int, list[tuple[str, int]]] = {}
    for c, (a, n) in vtables.items():
        base = int(a, 16)
        for i in range(n):
            try:
                out.setdefault(img.u32(base + 4 * i), []).append((c, 4 * i))
            except Exception:
                break
    return out


def blockers(L: Layout, cls: str | None, va: int, text: str, held: list[tuple[str, int]] | None = None) -> list[str]:
    """reasons, from the function's listing text (`listing.listing`); `held`: vtable_slots()[va]"""
    out = []
    own = L.owner.get(va)
    if own and re.match(r"vf_[0-9a-f]+$", own[1]):
        out.append("its own slot is unnamed (%s::%s: the signature is a guess)" % own)
    if held and not own:
        names = [L.slot_name(c, off) for c, off in held]
        names = [n for n in names if n]
        if names and all(n[1].startswith("vf_") for n in names):
            out.append("it is %s::%s, an unnamed slot (the signature is a guess)" % names[0])
        # `this` is the least derived class holding it
        hs = {c for c, _ in held}
        top = sorted(c for c in hs if L.base.get(c) not in hs)
        if not cls and len(top) == 1:
            cls = top[0]
    cls = (own[0] if own else None) or cls
    if not cls or cls not in L.base:
        return out
    this = {"ecx"}
    vt = set()
    pend: dict[str, int] = {}   # register -> the vtable slot it was loaded from
    seen = set()
    for line in text.splitlines():
        ins = line.split(None, 1)[1] if line[:1] == " " and len(line.split(None, 1)) > 1 else line.strip()
        for m in _ACCESS.finditer(ins):
            if m.group(1) in this:
                off = int(m.group(2), 16)
                p = L.pad_at(cls, off)
                if p and ("pad", p[0], p[1]) not in seen:
                    seen.add(("pad", p[0], p[1]))
                    if re.match(r"_?[Nn]ative", p[1]):
                        out.append("uses this+0x%x, in %s's unnamed C++-only bytes (%s)" % (off, p[0], p[1]))
                    else:
                        out.append("uses this+0x%x, inside %s::%s, whose type isn't recovered (only its destructor is known)"
                                   % (off, p[0], p[1]))
        c = _VCALL.search(ins)
        off = int(c.group(2), 16) if c and c.group(1) in vt else None
        r = _CALLREG.search(ins)
        if r and r.group(1) in pend:
            off = pend[r.group(1)]
        if off is not None:
            s = L.slot_name(cls, off)
            if s and s[1].startswith("vf_") and ("slot", off) not in seen:
                seen.add(("slot", off))
                out.append("calls %s::%s (an unnamed slot) through this" % s)
        if ins.startswith("call"):
            this.discard("eax"); this.discard("ecx"); this.discard("edx")
            vt -= {"eax", "ecx", "edx"}
            pend.clear()
            continue
        v = _VTBL.search(ins)
        if v and v.group(2) in this:
            vt.add(v.group(1)); this.discard(v.group(1)); pend.pop(v.group(1), None)
            continue
        ld = _LOADSLOT.search(ins)
        if ld and ld.group(2) in vt:
            pend[ld.group(1)] = int(ld.group(3), 16)
            this.discard(ld.group(1)); vt.discard(ld.group(1))
            continue
        w0 = _WRITE.match(" " + ins)
        if w0:
            pend.pop(w0.group(1), None)
        mv = _MOV_THIS.search(ins)
        if mv:
            if mv.group(2) in this:
                this.add(mv.group(1))
            else:
                this.discard(mv.group(1))
            vt.discard(mv.group(1))
            continue
        w = _WRITE.match(" " + ins)
        if w:
            this.discard(w.group(1)); vt.discard(w.group(1))
    return out

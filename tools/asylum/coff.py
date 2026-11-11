"""i386 COFF objects as cl.exe writes them (one COMDAT section per function with /Gy)."""
from __future__ import annotations

import struct

REL_DIR32 = 0x06
REL_REL32 = 0x14
SCN_CODE = 0x20
SCN_UNINIT = 0x80


class Reloc:
    __slots__ = ("offset", "symbol", "type")

    def __init__(self, offset, symbol, type):
        self.offset, self.symbol, self.type = offset, symbol, type


class CSection:
    def __init__(self, index, name, data, flags, relocs):
        self.index, self.name, self.data, self.flags, self.relocs = index, name, data, flags, relocs
        self.comdat_select = 0

    @property
    def is_code(self) -> bool:
        return bool(self.flags & SCN_CODE)


class Symbol:
    __slots__ = ("index", "name", "value", "section", "type", "storage")

    def __init__(self, index, name, value, section, type, storage):
        self.index, self.name, self.value, self.section, self.type, self.storage = index, name, value, section, type, storage

    @property
    def is_function(self) -> bool:
        return (self.type >> 4) & 0xF == 2 or self.type == 0x20

    @property
    def defined(self) -> bool:
        return self.section > 0


HELPERS = ("??_G", "??_E", "__ehhandler", "__unwindfunclet")


class Coff:
    def __init__(self, d: bytes):
        machine, count, _, symptr, symcount, optsize, _ = struct.unpack_from("<HHIIIHH", d)
        if machine != 0x14C or optsize:
            raise ValueError("not an i386 COFF object")
        self.sections: list[CSection | None] = [None]
        for i in range(count):
            name, _, _, size, raw, relptr, _, nrel, _, flags = struct.unpack_from("<8sIIIIIIHHI", d, 20 + 40 * i)
            if flags & 0x01000000:
                raise ValueError("extended relocation counts are not supported")
            body = bytes(size) if flags & SCN_UNINIT or raw == 0 else d[raw:raw + size]
            relocs = [Reloc(*struct.unpack_from("<IIH", d, relptr + 10 * n)) for n in range(nrel)]
            self.sections.append(CSection(i + 1, name.rstrip(b"\0").decode(errors="replace"), body, flags, relocs))
        strtab = symptr + 18 * symcount
        strings = d[strtab:strtab + struct.unpack_from("<I", d, strtab)[0]] if symcount else b""
        self.symbols: dict[int, Symbol] = {}
        i = 0
        while i < symcount:
            raw, value, sec, typ, storage, aux = struct.unpack_from("<8sIhHBB", d, symptr + 18 * i)
            if raw[:4] == b"\0\0\0\0":
                so, = struct.unpack_from("<I", raw, 4)
                name = strings[so:strings.index(b"\0", so)].decode(errors="replace")
            else:
                name = raw.rstrip(b"\0").decode(errors="replace")
            self.symbols[i] = Symbol(i, name, value, sec, typ, storage)
            # section definition aux record: the COMDAT selection
            if aux and storage == 3 and value == 0 and 0 < sec < len(self.sections) and self.sections[sec].name == name:
                self.sections[sec].comdat_select = d[symptr + 18 * (i + 1) + 14]
            i += 1 + aux

    def functions(self) -> list[Symbol]:
        return [s for s in self.symbols.values()
                if s.defined and s.is_function and s.storage in (2, 3) and self.sections[s.section].is_code]

    def written_functions(self) -> list[Symbol]:
        """The source's own functions: no compiler helpers, no inline functions of the headers."""
        return [s for s in self.functions()
                if not s.name.startswith(HELPERS) and self.sections[s.section].comdat_select != 2]

    def function_body(self, sym: Symbol) -> tuple[CSection, int, int]:
        """The section holding sym, and its [start, end) there (to the next function or the end)."""
        sec = self.sections[sym.section]
        later = [s.value for s in self.symbols.values() if s.section == sym.section and s.is_function and s.value > sym.value]
        return sec, sym.value, min(later) if later else len(sec.data)

    def find_function(self, want: list[str]) -> Symbol | None:
        """The function to compare: by decorated name, else by a unique name part, else the only
        out-of-line function the source defines."""
        funcs = self.functions()
        for w in want:
            for s in funcs:
                if s.name == w:
                    return s
        for w in want:
            if not w:
                continue
            hits = [s for s in funcs if w in s.name]
            if len(hits) == 1:
                return hits[0]
            pre = [s for s in hits if s.name.startswith(w)]
            if len(pre) == 1:
                return pre[0]
        ext = [s for s in funcs if s.storage == 2 and self.sections[s.section].comdat_select != 2]
        if len(ext) == 1:
            return ext[0]
        called = set()
        for f in funcs:
            for rl in self.sections[f.section].relocs:
                t = self.symbols.get(rl.symbol)
                if t is not None and t.name != f.name:
                    called.add(t.name)
        roots = [s for s in ext if s.name not in called and not s.name.startswith(HELPERS)]
        return roots[0] if len(roots) == 1 else None


def split_decorated(n: str) -> tuple[str, str | None] | None:
    """(function name, class) of a decorated name: ?Foo@X@@... is (Foo, X), ??1X@@ is (~X, X)."""
    if not n.startswith("?"):
        return n.lstrip("_"), None
    d = n[1:]
    if d.startswith(("?0", "?1")):
        c = d[2:].split("@")[0]
        return ("~" + c if d.startswith("?1") else c), c
    if d.startswith("?"):
        return None
    parts = d.split("@", 2)
    if parts[0].startswith("$"):
        return None
    return parts[0], (parts[1] or None) if len(parts) > 1 else None

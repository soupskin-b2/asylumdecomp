"""The game's executable (your own copy): sections, base relocations, imports."""
from __future__ import annotations

import bisect
import struct
from pathlib import Path

EXE_SHA256 = "4dac1f5e2ac6710b7378fdce74601f616f4753e3756cb5fda63c7519cc2eb028"
EXE_SIZE = 38_758_728


class Section:
    def __init__(self, name, va, vsize, raw, rsize, flags):
        self.name, self.va, self.vsize, self.raw, self.rsize, self.flags = name, va, vsize, raw, rsize, flags

    def holds(self, va: int) -> bool:
        return self.va <= va < self.va + max(self.vsize, self.rsize)


class Image:
    def __init__(self, path: str | Path):
        d = self.data = Path(path).read_bytes()
        if len(d) != EXE_SIZE:
            raise ValueError("%s is %d bytes; the Steam GOTY ShippingPC-BmGame.exe is %d" % (path, len(d), EXE_SIZE))
        pe, = struct.unpack_from("<I", d, 0x3C)
        if d[pe:pe + 4] != b"PE\0\0":
            raise ValueError("not a PE file")
        nsec, = struct.unpack_from("<H", d, pe + 6)
        optsz, = struct.unpack_from("<H", d, pe + 20)
        opt = pe + 24
        self.base, = struct.unpack_from("<I", d, opt + 28)
        dd = opt + 96
        imp_rva, = struct.unpack_from("<I", d, dd + 8)
        reloc_rva, reloc_sz = struct.unpack_from("<II", d, dd + 40)
        self.sections = []
        for i in range(nsec):
            h = opt + optsz + 40 * i
            vsize, va, rsize, raw = struct.unpack_from("<IIII", d, h + 8)
            flags, = struct.unpack_from("<I", d, h + 36)
            self.sections.append(Section(d[h:h + 8].rstrip(b"\0").decode(), self.base + va, vsize, raw, rsize, flags))
        # base relocations: the VA of every 32-bit absolute address field
        relocs = []
        o = self.off(self.base + reloc_rva)
        end = o + reloc_sz
        while o + 8 <= end:
            page, sz = struct.unpack_from("<II", d, o)
            if sz < 8:
                break
            for e in struct.unpack_from("<%dH" % ((sz - 8) // 2), d, o + 8):
                if e >> 12 == 3:
                    relocs.append(self.base + page + (e & 0xFFF))
            o += sz
        self.relocs_sorted = sorted(relocs)
        self.relocs = set(relocs)
        # imports: IAT slot VA -> "dll!name"
        self.imports: dict[int, str] = {}
        o = self.off(self.base + imp_rva)
        while True:
            ilt, _, _, name, iat = struct.unpack_from("<IIIII", d, o)
            if name == 0:
                break
            dll = self._cstr(self.base + name)
            k = 0
            while True:
                v, = struct.unpack_from("<I", d, self.off(self.base + (ilt or iat)) + 4 * k)
                if v == 0:
                    break
                fn = "#%d" % (v & 0xFFFF) if v & 0x80000000 else self._cstr(self.base + v + 2)
                self.imports[self.base + iat + 4 * k] = "%s!%s" % (dll, fn)
                k += 1
            o += 20

    def section(self, va: int) -> Section | None:
        return next((s for s in self.sections if s.holds(va)), None)

    def off(self, va: int) -> int | None:
        s = self.section(va)
        if s is None or va - s.va >= s.rsize:
            return None
        return s.raw + va - s.va

    def _cstr(self, va: int) -> str:
        o = self.off(va)
        return self.data[o:self.data.index(b"\0", o)].decode("latin-1")

    def read(self, va: int, n: int) -> bytes:
        """The file's bytes at va (ValueError past the section's bytes in the file)."""
        s = self.section(va)
        if s is None or va - s.va + n > s.rsize:
            raise ValueError("can't read %d bytes at %08x" % (n, va))
        o = s.raw + va - s.va
        return self.data[o:o + n]

    def read_loaded(self, va: int, n: int) -> bytes | None:
        """The loaded image's bytes: a section's zero-filled tail reads as zeros."""
        s = self.section(va)
        if s is None or va - s.va + n > max(s.vsize, s.rsize):
            return None
        rel = va - s.va
        have = max(0, min(n, s.rsize - rel))
        return self.data[s.raw + rel:s.raw + rel + have] + bytes(n - have)

    def u32(self, va: int) -> int:
        return struct.unpack("<I", self.read(va, 4))[0]

    def is_code(self, va: int) -> bool:
        s = self.section(va)
        return s is not None and bool(s.flags & 0x20000000)

    def is_code_pointer_table(self, va: int) -> bool:
        """A vtable or function-pointer array: its first dword is a relocated pointer into code."""
        try:
            return va in self.relocs and self.is_code(self.u32(va))
        except ValueError:
            return False

    def cstring(self, va: int, limit: int) -> bytes | None:
        o = self.off(va)
        if o is None:
            return None
        e = self.data.find(b"\0", o, o + limit)
        return None if e < 0 else self.data[o:e]

    def wstring(self, va: int, limit: int) -> str | None:
        o = self.off(va)
        if o is None:
            return None
        out = []
        for k in range(limit):
            if o + 2 * k + 2 > len(self.data):
                return None
            c, = struct.unpack_from("<H", self.data, o + 2 * k)
            if c == 0:
                return "".join(out)
            out.append(chr(c))
        return None

    def relocs_in(self, va: int, size: int) -> list[int]:
        i = bisect.bisect_left(self.relocs_sorted, va)
        out = []
        while i < len(self.relocs_sorted) and self.relocs_sorted[i] + 4 <= va + size:
            out.append(self.relocs_sorted[i])
            i += 1
        return out

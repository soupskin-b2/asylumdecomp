"""Exe-free verification (what CI runs): a compiled function against the original's fingerprint.

A fingerprint (data/fingerprints.json.gz) is the function's size, a hash of its bytes with every
address field zeroed, the fields (offset, "a" absolute or "r" relative, the address there) and
hashes of the data absolute fields point at. It gives the same verdict as the full comparison on
a match, without holding the game's code.
"""
from __future__ import annotations

import hashlib
import struct

from coff import REL_DIR32, REL_REL32, Coff, split_decorated
from data import ADDR_NAME


def h(b: bytes) -> str:
    return hashlib.sha1(b).hexdigest()[:16]


def _s32(b: bytes, o: int) -> int:
    return struct.unpack_from("<i", b, o)[0]


def import_name(sym: str) -> str:
    n = sym[len("__imp_"):]
    n = n[1:] if n.startswith("_") else n
    return n.split("@")[0] if "@" in n and not n.startswith("?") else n


TIME32 = {"time", "gmtime", "localtime", "mktime", "ctime", "difftime", "asctime_s", "utime", "stat", "fstat", "ftime"}


def import_is(api: str, orig: str) -> bool:
    """The import the source calls is the original's: the same name, or VC8's 32-bit time function
    its <time.h> turns the plain name into (gmtime is MSVCR80's _gmtime32)."""
    return orig == api or (api in TIME32 and orig in ("_%s32" % api, "_%s32i64" % api))


def known_symbols(obj: Coff, symbols: dict[str, int], pinned: dict[str, int]) -> dict[str, int]:
    """The data's symbols, plus every Class::Name the object uses that the headers pin to an
    address: a call to the wrong known function is a mismatch, not a new binding."""
    s = dict(symbols)
    for sym in obj.symbols.values():
        if sym.name in s or not sym.name.startswith("?"):
            continue
        sd = split_decorated(sym.name)
        if sd and sd[1]:
            a = pinned.get("%s::%s" % (sd[1], sd[0])) or pinned.get("%s::%s" % (sd[1].rstrip("_"), sd[0]))
            if a is not None:
                s[sym.name] = a
    return s


def verify(obj: Coff, want: list[str], va: int, fp: dict, symbols: dict[str, int], imports: dict[int, str]):
    """("match" | "mismatch" | "extract_error", problems, {external name: address it was bound to})."""
    sym = obj.find_function(want)
    if sym is None:
        probs = ["no function named %s in the object (defined: %s)" % (
            want[0] if want else "?", ", ".join(s.name for s in obj.written_functions()[:8]) or "none")]
        if not obj.written_functions():
            probs.append("a `static` function nobody in the file calls is dropped: let another function call it")
        return "extract_error", probs, {}
    sec, start, end = obj.function_body(sym)
    code = bytearray(sec.data[start:end])
    if len(code) != fp["size"]:
        return "mismatch", ["size %d, the original is %d" % (len(code), fp["size"])], {}
    fields = {o: (k, raw) for o, k, raw in fp["fields"]}
    # a relative field overlapping an absolute one is a jump table's addresses read as a call
    absolute = [o for o, (k, _) in fields.items() if k == "a"]
    fields = {o: v for o, v in fields.items() if v[0] == "a" or not any(a < o + 4 and o < a + 4 for a in absolute)}
    relocs = {}
    for rl in sec.relocs:
        if not (start <= rl.offset and rl.offset + 4 <= end):
            continue
        off = rl.offset - start
        s = obj.symbols[rl.symbol]
        # a relative call into the function itself (recursion): resolved here, compared as code
        if rl.type == REL_REL32 and s.section == sym.section and start <= s.value < end and off not in fields:
            code[off:off + 4] = struct.pack("<i", (s.value - start) - (off + 4) + _s32(code, off))
            continue
        relocs[off] = rl
    if set(relocs) != set(fields):
        probs = []
        extra = sorted(set(relocs) - set(fields))[:6]
        miss = sorted(set(fields) - set(relocs))[:6]
        if extra:
            probs.append("address fields the original doesn't have at %s" % ", ".join("+%#x" % o for o in extra))
        if miss:
            probs.append("the original has address fields at %s" % ", ".join("+%#x" % o for o in miss))
        return "mismatch", probs, {}
    masked = bytearray(code)
    for o in fields:
        masked[o:o + 4] = bytes(4)
    if h(bytes(masked)) != fp["hash"]:
        return "mismatch", ["the code differs (outside address fields)"], {}
    probs, bound, blobs, ends = [], {}, {}, []
    for off, rl in sorted(relocs.items()):
        s = obj.symbols[rl.symbol]
        kind, raw = fields[off]
        addend = _s32(code, off)
        if rl.type not in (REL_DIR32, REL_REL32):
            probs.append("+%#x: unsupported relocation type %#x" % (off, rl.type))
            continue
        if (rl.type == REL_DIR32) != (kind == "a"):
            probs.append("+%#x: %s where the original has %s" % (off, *(("an address", "a relative call") if kind == "r" else ("a relative call", "an address"))))
            continue
        dest = (raw - addend) & 0xFFFFFFFF
        if s.section == sym.section:
            if dest != va + s.value - start:
                probs.append("+%#x: local reference to +%#x, the original's goes elsewhere" % (off, s.value - start))
            continue
        if s.name.startswith("__imp_"):
            slot = imports.get(dest)
            api = import_name(s.name)
            if slot is None or not import_is(api, slot.split("!", 1)[1]):
                probs.append("+%#x: import %s, the original uses %s" % (off, api, slot or "%#x" % dest))
            continue
        if s.defined:
            dsec = obj.sections[s.section]
            if not dsec.is_code and not dsec.relocs:
                # this variable only: up to the next symbol defined in the same section
                nxt = min([o.value for o in obj.symbols.values() if o.section == s.section and o.value > s.value and o.defined],
                          default=len(dsec.data))
                blob = dsec.data[s.value:max(s.value, nxt)]
                hs = fp["data"].get(str(off), [])
                if addend >= len(blob) > 0:
                    # past its end (a loop's end pointer): fine if it is the object another use compares
                    ends.append((off, s.name, dest))
                    continue
                ok = False
                if 0 <= addend < len(blob):
                    blobs.setdefault(s.name, set()).add(dest)
                    # the bytes from where the field points (the hashes are of the original's bytes
                    # there: whole, as a string, or the first 4/8/16), and the few before it
                    tail = blob[addend:]
                    th = h(tail)
                    ok = ("%d:%s" % (len(tail), th) in hs or "s:" + th in hs or "w:" + th in hs
                          or any(len(tail) > n and "%d:%s" % (n, h(tail[:n])) in hs for n in (16, 8, 4))) \
                        and (addend == 0 or addend > 4 or "p%d:%s" % (addend, h(blob[:addend])) in hs)
                if not ok:
                    probs.append("+%#x: %s differs from the original's data" % (off, s.name[:40]))
                continue
        if s.storage == 3 and s.defined:
            continue
        prev = bound.get(s.name)
        if prev is not None and prev != dest:
            probs.append("%s is used for both %#x and %#x" % (s.name, prev, dest))
        bound[s.name] = dest
        m = ADDR_NAME.search(s.name)
        if m and int(m.group(2), 16) != dest:
            probs.append("+%#x: %s, but the original uses %08x" % (off, m.group(0), dest))
        k = symbols.get(s.name)
        if k is not None and k != dest:
            probs.append("+%#x: %s is %#x, the original uses %#x" % (off, s.name, k, dest))
    for off, name, dest in ends:
        if dest not in blobs.get(name, ()):
            probs.append("+%#x: %s points past its end, and no other use shows it is the original's object" % (off, name[:40]))
    return ("match" if not probs else "mismatch"), probs, bound

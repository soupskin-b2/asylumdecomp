"""Checking a source against the original: compile it with the function's profile, then verify the
function by fingerprint (the same verdict CI gives)."""
from __future__ import annotations

import re
from dataclasses import dataclass, field

import compile as cl
import data
import fingerprint
from coff import Coff


@dataclass
class Result:
    status: str                    # match | mismatch | compile_error | rejected | extract_error
    problems: list[str] = field(default_factory=list)
    symbol: str | None = None      # the function compared (decorated name)
    bound: dict = field(default_factory=dict)   # external names -> the addresses the original uses
    obj: Coff | None = None
    new: dict = field(default_factory=dict)     # bound names the project didn't know yet


def want(va: int, function: str | None = None) -> list[str]:
    """The names the source's function may have, best first."""
    f = data.functions().get(va, {})
    w = [x for x in (function, f.get("symbol"), "sub_%08x" % va) if x]
    n = data.names().get(va) or f.get("name")
    if n:
        method = n.rsplit("::", 1)[-1]
        if re.fullmatch(r"~?\w+", method):
            w.append("??1%s@" % method[1:] if method.startswith("~") else "?%s@" % method)
            if "::" not in n:
                w.append("_" + method)
    return w


_pinned: dict | None = None


def known(obj: Coff) -> dict[str, int]:
    global _pinned
    if _pinned is None:
        _pinned = data.header_addresses()
    return fingerprint.known_symbols(obj, data.symbols(), _pinned)


def check(va: int, src: str, function: str | None = None) -> Result:
    f = data.functions().get(va)
    if f is None:
        return Result("extract_error", ["%08x is not the start of a function in data/functions.json.gz" % va])
    fp = data.fingerprint(va)
    if fp is None:
        return Result("extract_error", ["no fingerprint for %08x" % va])
    c = cl.compile(src, cl.profile(f["profile"]))
    if c.obj is None:
        return Result("rejected" if c.rejected else "compile_error", c.errors or [c.diagnostics])
    obj = Coff(c.obj)
    w = want(va, function)
    k = known(obj)
    status, problems, bound = fingerprint.verify(obj, w, va, fp, k, data.imports())
    sym = obj.find_function(w)
    if status == "extract_error":
        problems.append("name the function to compare with --function (its decorated name or a unique part of it)")
    return Result(status, problems, sym.name if sym else None, bound, obj, {n: a for n, a in bound.items() if n not in k})


def unit_check(src: str, profile: str, funcs: list[tuple[int, list[str]]], library: bool = False) -> dict:
    """A whole file of src/ (or a library's own file in third_party/, which skips the source
    rules): every listed function verified. Also reports a name that two functions of the file
    bind to different addresses."""
    c = cl.compile(src, cl.profile(profile), check=not library)
    if c.obj is None:
        return {"compile_errors": c.errors or [c.diagnostics], "functions": {}, "conflicts": []}
    obj = Coff(c.obj)
    k = known(obj)
    out, seen, conflicts = {}, {}, []
    for va, w in funcs:
        fp = data.fingerprint(va)
        if fp is None:
            out["%08x" % va] = {"status": "error", "problems": ["no fingerprint"]}
            continue
        st, pr, bound = fingerprint.verify(obj, w, va, fp, k, data.imports())
        if st == "match":
            for n, a in bound.items():
                if n in seen and seen[n][1] != a:
                    conflicts.append("%s is %#x in %08x and %#x in %08x" % (n, a, va, seen[n][1], seen[n][0]))
                seen.setdefault(n, (va, a))
        s = obj.find_function(w)
        out["%08x" % va] = {"status": st, "problems": pr, "symbol": s.name if s else None, "bound": {n: "%08x" % a for n, a in bound.items()}}
    return {"compile_errors": [], "functions": out, "conflicts": conflicts}


# Readability: mechanical signs of decompiler output that a readable source shouldn't have. They are
# warnings on a match (the guide's rules), not part of the verdict.
SMELLS = [
    (re.compile(r"\*\s*\(\s*\w+\s*\*+\s*\)\s*\(\s*\(\s*char\s*\*\s*\)\s*this\s*\+"), "raw offset into this: declare the member in the class"),
    (re.compile(r"\(\s*\*\s*\(\s*\w+\s*\*\*+\s*\)\s*\w+\s*\)\s*\[|\bvftable\b|\bVfTable\b|\b__vfptr\b"),
     "a vtable read by hand: call the virtual function by name (fix its declaration if it's wrong)"),
    (re.compile(r"\b(?:Pad|pad|Unk|unk)_?[0-9a-fA-F]+\b\s*\["), "a filler array: declare the fields at their offsets by name"),
    (re.compile(r"\bgoto\b"), "goto (fine only when the original's control flow needs it)"),
    (re.compile(r"\b(?:undefined\d?|uint|byte|dword|code)\b\s*[\*\w]"), "Ghidra type names (undefined4, uint ...): use the engine's types"),
    (re.compile(r"\b(?:iVar|uVar|pvVar|local_|param_|in_ECX|extraout_|unaff_)\w*"), "Ghidra variable names: name them for what they hold"),
]


_PROSE = re.compile(r'//[^\n]*|/\*.*?\*/|"(?:\\.|[^"\\\n])*"', re.S)


def smells(src: str) -> list[str]:
    # comments and strings are prose: blank them, keeping the line numbers
    code = _PROSE.sub(lambda m: re.sub(r"[^\n]", " ", m.group(0)), src)
    out = []
    for n, line in enumerate(code.splitlines(), 1):
        for rx, why in SMELLS:
            if rx.search(line):
                out.append("line %d: %s" % (n, why))
    return out

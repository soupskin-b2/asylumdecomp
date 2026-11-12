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
    sym = obj.find_function(w)
    if sym is not None and sym.name not in w and not function:
        other = re.search(r"sub_([0-9a-f]{8})", sym.name)
        if other and int(other.group(1), 16) != va:  # a source written for another function
            return Result("extract_error", ["the source's function is %s, named for %s, not %08x"
                                            % (sym.name, other.group(1), va)])
    status, problems, bound = fingerprint.verify(obj, w, va, fp, k, data.imports())
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
    (re.compile(r"\(\s*(?:const\s+)?(?:char|BYTE|WORD|DWORD|INT|UINT|int|short|long|unsigned(?:\s+\w+)?|void|FLOAT|float)\s*\*+\s*\)\s*this\b"),
     "this cast to a plain pointer (writes through (DWORD*)this ...): use the class's named fields"),
    (re.compile(r"\(\s*\*\s*\(\s*\w+\s*\*\*+\s*\)\s*\w+\s*\)\s*\[|\*\s*\(\s*(?:char|void|BYTE|DWORD|INT|int)\s*\*\*+\s*\)|\bvftable\b|\bVfTable\b|\b__vfptr\b"),
     "a vtable read by hand: call the virtual function by name (fix its declaration if it's wrong)"),
    (re.compile(r"\b(?:Pad|pad|Unk|unk)_?[0-9a-fA-F]+\b\s*\[|\b(?:char|BYTE|unsigned\s+char|DWORD|INT|int)\s+_*(?:pad|Pad|PAD|unk|Unk|unknown|Unknown|gap|filler|dummy)\w*\s*\["),
     "a filler array: declare the fields at their offsets by name"),
    (re.compile(r"\bfield_[0-9a-fA-F]+\b"), "field_XX names: name the members for what they hold (or leave out the ones the function doesn't use)"),
    (re.compile(r"\bvirtual\b[^;{]*\b(?:f|vf|v|slot|dummy|pad|unk|Unk)_?[0-9a-fA-F]+\s*\(\s*(?:void)?\s*\)\s*(?:const\s*)?(?:\{\s*(?:return\s+[^;{}]*;\s*)?\}|=\s*0\s*;|;)"),
     "placeholder virtuals declared to reach a slot: use the class from the headers (add the virtual there if it's missing)"),
    (re.compile(r"^\s*(?!extern\b|return\b|static\b|delete\b|throw\b|case\b|goto\b)(?:const\s+)?[A-Za-z_]\w*(?:\s*\*+\s*|\s+)g_[0-9a-fA-F]{8}\s*(?:\[[^\]]*\]\s*)?;"),
     "a global defined here: declare it extern (the game has it)"),
    (re.compile(r"\btypedef\b[^;]*\b(?:ULONG_PTR|HANDLE|LPCRITICAL_SECTION|CRITICAL_SECTION|LARGE_INTEGER|HWND|LPVOID)\s*;|\bstruct\s+_RTL_CRITICAL_SECTION\s*\{|(?:dllimport|__stdcall|WINAPI)[^;]*\b(?:EnterCriticalSection|LeaveCriticalSection|InitializeCriticalSection|DeleteCriticalSection|Interlocked\w+|Tls(?:Alloc|Free|GetValue|SetValue)|WaitForSingleObject|SetEvent|ResetEvent|CloseHandle|Sleep|GetCurrentThreadId|QueryPerformance\w+|GetTickCount|LocalFree|GetLastError|OutputDebugString[AW]|MessageBox[AW]?|GetActiveWindow)\s*\("),
     "Windows declarations by hand: include \"ue3/Win32.h\" (add what's missing there)"),
    (re.compile(r"^\s*(?:template\s*<[^>]*>\s*)?(?:(?:inline|static|__forceinline)\s+)*(?:const\s+)?\w+[\s\*&]+(?:appTrunc|appRound|appFloor2Int|appRand|appFrand|appSRand|Clamp|Abs|Min|Max|Square|Lerp)\s*\([^;]*\)\s*(?:\{|$)"),
     "a helper that \"ue3/AppMath.h\" has (appTrunc, appFrand, Clamp, Max ...): include it instead"),
    (re.compile(r"\bgoto\b"), "goto (fine only when the original's control flow needs it)"),
    (re.compile(r"\b(?:undefined\d?|uint|byte|dword|code)\b\s*[\*\w]"), "Ghidra type names (undefined4, uint ...): use the engine's types"),
    (re.compile(r"\b(?:iVar|uVar|pvVar|local_|param_|in_ECX|extraout_|unaff_)\w*"), "Ghidra variable names: name them for what they hold"),
]


_PROSE = re.compile(r'//[^\n]*|/\*.*?\*/|"(?:\\.|[^"\\\n])*"', re.S)


def smells(src: str) -> list[str]:
    # comments and strings are prose: blank them, keeping the line numbers
    code = _PROSE.sub(lambda m: re.sub(r"[^\n]", " ", m.group(0)), src)
    hits: dict[str, list[int]] = {}
    for n, line in enumerate(code.splitlines(), 1):
        for rx, why in SMELLS:
            if rx.search(line):
                hits.setdefault(why, []).append(n)
    out = []
    for why, ns in hits.items():  # one warning per kind, however many lines
        where = ("line %d" % ns[0]) if len(ns) == 1 else ("lines %s%s (%d)" % (", ".join(map(str, ns[:4])), " ..." if len(ns) > 4 else "", len(ns)))
        out.append("%s: %s" % (where, why))
    return out

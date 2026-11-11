"""Running the original compilers (cl 14.00.50727.762 and 13.10) on a source, with the project's
flag profiles and shared headers. Compiles run in a fresh folder, never see your files, and are
cached by the hash of everything that can change their output."""
from __future__ import annotations

import hashlib
import json
import os
import re
import shutil
import subprocess
import tempfile
import time
from dataclasses import dataclass, field
from pathlib import Path

from paths import HOME, ROOT, resource

# What a source may not contain. The include and pragma rules keep a source from reading files
# outside the shared headers and the compiler's own C headers (CI compiles untrusted sources and
# shows compiler messages back), so they are checked on the text the preprocessor sees.
STD_HEADERS = ["math", "float", "string", "memory", "stdlib", "stddef", "stdarg", "limits", "ctype", "wchar", "malloc",
               "search", "mmintrin", "xmmintrin", "emmintrin", "intrin", "tchar", "new", "stdio", "setjmp", "assert",
               "errno", "time", "locale", "signal", "wctype"]
LIB_HEADERS = ["cderror", "cdjpeg", "jchuff", "jconfig", "jdct", "jdhuff", "jerror", "jinclude", "jmemsys", "jmorecfg",
               "jpegint", "jpeglib", "jversion", "transupp", "png", "pngconf", "crc32", "deflate", "inffast", "inffixed",
               "inflate", "inftrees", "trees", "zconf", "zlib", "zutil"]
LIB_DIRS = ["jpeg-6b", "zlib-1.2.3", "libpng-1.2.8"]
PRAGMAS = {"pack", "intrinsic", "function", "once", "optimize", "warning", "inline_depth", "inline_recursion",
           "auto_inline", "push_macro", "pop_macro", "float_control", "fenv_access", "fp_contract", "check_stack",
           "runtime_checks", "strict_gs_check", "deprecated", "message", "vtordisp", "pointers_to_members", "conform"}
_OK_INC = re.compile(r'^"ue3/\w+\.h"\s*$|^<(%s)\.h>\s*$|^"(%s)\.h"\s*$' % ("|".join(STD_HEADERS), "|".join(LIB_HEADERS)))
_TRIGRAPH = re.compile(r"\?\?[=/'()!<>-]")
_TOKENS = re.compile(r'//[^\n]*|/\*.*?(?:\*/|$)|"(?:\\.|[^"\\\n])*"?|\'(?:\\.|[^\'\\\n])*\'?', re.S)
_OTHER = [
    (re.compile(r"\b__asm\b|\b_asm\b"), "inline assembly is not allowed"),
    (re.compile(r"__declspec\s*\(\s*(naked|allocate)\b"), "that __declspec is not allowed"),
    (re.compile(r"\b__emit\b|\b_emit\b"), "raw machine code is not allowed"),
]
COMPILE_SECONDS = 90


def preprocessed_view(src: str) -> str | None:
    """The source as the preprocessor's directives see it (splices joined, comments blanked with
    their line breaks kept); None when it has trigraphs."""
    if _TRIGRAPH.search(src):
        return None
    joined = src.replace("\\\r\n", "").replace("\\\n", "")
    return _TOKENS.sub(lambda m: (" " + "\n" * m.group(0).count("\n")) if m.group(0)[:2] in ("//", "/*") else m.group(0), joined)


def check_source(src: str) -> str | None:
    v = preprocessed_view(src)
    if v is None:
        return "trigraphs (??= ??/ ...) are not allowed"
    for n, line in enumerate(v.split("\n"), 1):
        m = re.match(r"\s*#\s*(\w*)\s*(.*)$", line)
        if not m:
            continue
        name, arg = m.group(1), m.group(2).strip()
        if name == "include" and not _OK_INC.match(arg):
            return ("line %d: #include %s is not allowed: only the shared engine headers (\"ue3/Classes.h\" ...), the zlib, "
                    "libpng and libjpeg headers and these standard headers: %s" % (n, arg, " ".join("<%s.h>" % h for h in STD_HEADERS)))
        if name in ("import", "using", "include_next"):
            return "line %d: #%s is not allowed" % (n, name)
        if name == "pragma" and re.match(r"\w*", arg).group(0) not in PRAGMAS:
            return "line %d: #pragma %s is not allowed (allowed: %s)" % (n, re.match(r"\w*", arg).group(0), ", ".join(sorted(PRAGMAS)))
    for m in re.finditer(r"\b__pragma\s*\(\s*(\w*)", v):
        if m.group(1) not in PRAGMAS:
            return "line %d: __pragma(%s) is not allowed" % (v[:m.start()].count("\n") + 1, m.group(1))
    for rx, why in _OTHER:
        m = rx.search(v)
        if m:
            return "line %d: %s (%s)" % (v[:m.start()].count("\n") + 1, why, m.group(0))
    return None


@dataclass
class Profile:
    name: str
    compiler: str
    flags: list[str]
    c: bool = False
    prelude: list[str] = field(default_factory=list)


@dataclass
class Compiled:
    obj: bytes | None
    diagnostics: str = ""
    errors: list[str] = field(default_factory=list)
    rejected: bool = False   # refused before compiling (check_source)


def config() -> dict:
    return json.loads(resource("toolchain.json"))


def profile(name: str) -> Profile:
    p = config()["profiles"].get(name)
    if p is None:
        raise ValueError("unknown profile %s" % name)
    return Profile(name, p["compiler"], list(p["flags"]), p.get("language") == "c", list(p.get("prelude", [])))


def compiler_root(name: str) -> Path:
    r = HOME / "toolchain" / name
    if not (r / "bin" / "cl.exe").exists():
        raise FileNotFoundError("compiler %s is not installed (%s): run `python asylum setup`" % (name, r))
    return r


def include_dirs(p: Profile) -> list[Path]:
    dirs = [ROOT / "include"] + [ROOT / "third_party" / d for d in LIB_DIRS if (ROOT / "third_party" / d).is_dir()]
    return dirs + [compiler_root(p.compiler) / "include", HOME / "toolchain" / "psdk" / "include"]


_hh: tuple[float, str] | None = None


def headers_hash() -> str:
    """The shared headers' identity (names, sizes, times), part of every cache key."""
    global _hh
    if _hh and time.time() - _hh[0] < 5:
        return _hh[1]
    h = hashlib.sha256()
    for d in [ROOT / "include"] + [ROOT / "third_party" / x for x in LIB_DIRS]:
        if d.is_dir():
            for f in sorted(d.rglob("*.h")):
                st = f.stat()
                h.update(("%s %d %d\n" % (f.relative_to(ROOT).as_posix(), st.st_size, int(st.st_mtime))).encode())
    _hh = (time.time(), h.hexdigest())
    return _hh[1]


def _env(p: Profile, work: Path) -> dict:
    sysroot = os.environ.get("SystemRoot", r"C:\Windows")
    root = compiler_root(p.compiler)
    env = {"PATH": str(root / "bin") + os.pathsep + sysroot + r"\System32", "INCLUDE": ";".join(str(d) for d in include_dirs(p)),
           "LIB": str(root / "lib"), "SystemRoot": sysroot, "TEMP": str(work), "TMP": str(work)}
    if os.name != "nt":  # Wine
        env.update({k: v for k, v in os.environ.items() if k.startswith("WINE") or k in ("HOME", "DISPLAY", "USER")})
        env["PATH"] = os.environ.get("PATH", "")
    return env


def _cl(p: Profile) -> list[str]:
    cl = str(compiler_root(p.compiler) / "bin" / "cl.exe")
    return [cl] if os.name == "nt" else ["wine", cl]


def _run(args: list[str], p: Profile, work: Path, timeout: int) -> tuple[int, str] | None:
    try:
        r = subprocess.run(args, cwd=work, env=_env(p, work), capture_output=True, timeout=timeout, stdin=subprocess.DEVNULL)
    except subprocess.TimeoutExpired:
        return None
    return r.returncode, (r.stdout + r.stderr)[:256 * 1024].decode("mbcs" if os.name == "nt" else "latin-1", errors="replace")


def _transient(text: str) -> bool:
    return "C1083" in text and ".pch" in text.lower() and ("Permission denied" in text or "Access is denied" in text)


def _pch(src: str, p: Profile) -> tuple[str, Path] | None:
    """The engine header precompiled once per profile, when the source starts by including it."""
    if p.c:
        return None
    first = next((l.strip() for l in src.split("\n") if l.strip() and not l.strip().startswith("//")), "")
    if not re.fullmatch(r'#\s*include\s*"ue3/Classes\.h"', first):
        return None
    tag = hashlib.sha256(json.dumps(["ue3/Classes.h", p.compiler, p.flags, p.prelude, headers_hash()]).encode()).hexdigest()[:16]
    d = HOME / "cache" / "pch"
    hdr, out = "asylum_pch_%s.h" % tag, d / ("%s.pch" % tag)
    if out.exists():
        return hdr, out
    d.mkdir(parents=True, exist_ok=True)
    text = "".join('#include "%s"\n' % h for h in p.prelude + ["ue3/Classes.h"])
    t = d / ("%s.%d.tmp" % (hdr, os.getpid()))
    if not (d / hdr).exists():
        t.write_text(text, encoding="utf-8")
        try:
            os.replace(t, d / hdr)
        except OSError:  # another process wrote the same file
            t.unlink(missing_ok=True)
    work = Path(tempfile.mkdtemp(prefix="pch_", dir=_tmp()))
    try:
        (work / "pch.cpp").write_text('#include "%s"\n' % hdr, encoding="utf-8")
        r = _run(_cl(p) + ["/nologo", "/c", *p.flags, "/I" + str(d), "/Yc" + hdr, "/Fp" + str(work / "out.pch"),
                           "/Fo" + str(work / "pch.obj"), "pch.cpp"], p, work, 300)
        if r and r[0] == 0 and (work / "out.pch").exists():
            try:
                os.replace(work / "out.pch", out)
            except OSError:
                pass
        return (hdr, out) if out.exists() else None
    finally:
        shutil.rmtree(work, ignore_errors=True)


def _tmp() -> Path:
    t = HOME / "cache" / "tmp"
    t.mkdir(parents=True, exist_ok=True)
    return t


def compile(src: str, p: Profile, check: bool = True) -> Compiled:
    if check:
        why = check_source(src)
        if why:
            return Compiled(None, why, [why], rejected=True)
    ext = "c" if p.c else "cpp"
    flags = list(p.flags)
    pch = _pch(src, p)
    if pch:
        # prelude and engine header from the .pch; the include line blanked so line numbers stay the source's
        lines = src.split("\n")
        i = next(k for k, l in enumerate(lines) if l.strip() and not l.strip().startswith("//"))
        lines[i] = ""
        tu = '#include "%s"\n#line 1 "candidate.%s"\n%s\n' % (pch[0], ext, "\n".join(lines))
        flags += ["/Yu" + pch[0], "/Fp" + str(pch[1]), "/I" + str(pch[1].parent)]
    else:
        tu = "".join('#include "%s"\n' % h for h in p.prelude) + '#line 1 "candidate.%s"\n%s\n' % (ext, src)
    key = hashlib.sha256(json.dumps([tu, p.compiler, flags, p.c, headers_hash()]).encode()).hexdigest()[:32]
    cache = HOME / "cache" / "obj"
    co, ce = cache / (key + ".obj"), cache / (key + ".err")
    if co.exists():
        return Compiled(co.read_bytes())
    if ce.exists():
        d = ce.read_text(encoding="utf-8")
        if not _transient(d):
            return Compiled(None, d, errors(d))
    work = Path(tempfile.mkdtemp(prefix="cl_", dir=_tmp()))
    try:
        name = "tu." + ext
        (work / name).write_text(tu, encoding="utf-8")
        for attempt in range(3):
            r = _run(_cl(p) + ["/nologo", "/c", *flags, "/Fo" + str(work / "tu.obj"), name], p, work, COMPILE_SECONDS)
            if r is None:
                why = "the compiler took longer than %d s on this source" % COMPILE_SECONDS
                return Compiled(None, why, [why])
            if r[0] == 0 or not _transient(r[1]):
                break
            time.sleep(0.1 * (attempt + 1))
        code, raw = r
        text = "\n".join(l for l in raw.splitlines() if l.strip() and l.strip() != name)
        cache.mkdir(parents=True, exist_ok=True)
        if code == 0 and (work / "tu.obj").exists():
            data = (work / "tu.obj").read_bytes()
            co.write_bytes(data)
            return Compiled(data, text)
        if (code != 2 and "error" not in text) or _transient(text):
            raise RuntimeError("the compiler failed (exit %d): %s" % (code, text[-2000:]))
        ce.write_text(text, encoding="utf-8")
        return Compiled(None, text, errors(text))
    finally:
        shutil.rmtree(work, ignore_errors=True)


_ERR = re.compile(r"^(?P<file>[^()]+)\((?P<line>\d+)\) : (?P<kind>fatal error|error|warning) (?P<code>C\d+): (?P<msg>.*)$")


def errors(out: str) -> list[str]:
    errs = []
    for line in out.splitlines():
        m = _ERR.match(line.strip())
        if m and m.group("kind") != "warning":
            errs.append("%s(%s): %s %s: %s" % (Path(m.group("file")).name, m.group("line"), m.group("kind"), m.group("code"), m.group("msg")))
    return errs or [l for l in out.splitlines() if "error" in l][:10]

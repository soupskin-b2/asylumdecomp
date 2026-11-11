"""`asylum setup` (install.py): find the game (Steam GOTY, checked by SHA-256) and rebuild the original compilers
from Microsoft's own downloads (files placed by content hash, see toolchain-files.json)."""
from __future__ import annotations

import hashlib
import json
import os
import re
import shutil
import struct
import subprocess
import sys
import time
import urllib.request
from pathlib import Path

import pe
from paths import HOME, PROG, resource, save_settings, settings

GAME_SUBPATH = "steamapps/common/Batman Arkham Asylum GOTY/Binaries/ShippingPC-BmGame.exe"


def sha256(p: Path) -> str:
    h = hashlib.sha256()
    with open(p, "rb") as f:
        for b in iter(lambda: f.read(1 << 20), b""):
            h.update(b)
    return h.hexdigest()


# ---------------- the game ----------------

def steam_libraries() -> list[Path]:
    roots = []
    if os.name == "nt":
        for key, val in [(r"HKCU\Software\Valve\Steam", "SteamPath"), (r"HKLM\SOFTWARE\WOW6432Node\Valve\Steam", "InstallPath")]:
            try:
                out = subprocess.run(["reg", "query", key, "/v", val], capture_output=True, text=True).stdout
                m = re.search(r"REG_SZ\s+(.+)", out)
                if m:
                    roots.append(Path(m.group(1).strip()))
            except OSError:
                pass
        roots += [Path(r"C:\Program Files (x86)\Steam"), Path(r"C:\Program Files\Steam")]
    else:
        roots += [Path.home() / ".steam/steam", Path.home() / ".local/share/Steam"]
    libs = list(roots)
    for r in roots:
        try:
            libs += [Path(p.replace("\\\\", "\\")) for p in re.findall(r'"path"\s+"([^"]+)"', (r / "steamapps/libraryfolders.vdf").read_text(errors="replace"))]
        except OSError:
            pass
    if os.name == "nt":
        for d in "CDEFGHIJKLMNOPQRSTUVWXYZ":
            if os.path.isdir(d + ":\\"):
                libs += [Path(d + ":\\" + s) for s in ("SteamLibrary", "Steam", r"Games\Steam", r"Games\SteamLibrary")]
    seen, out = set(), []
    for p in libs:
        k = str(p).lower().rstrip("\\/")
        if k not in seen:
            seen.add(k)
            out.append(p)
    return out


def find_game(given: str | None = None) -> Path:
    cands = []
    if given:
        g = Path(given)
        cands += [g, g / "Binaries/ShippingPC-BmGame.exe", g / "ShippingPC-BmGame.exe"]
    elif settings().get("game_exe"):
        cands.append(Path(settings()["game_exe"]))
    cands += [lib / GAME_SUBPATH for lib in steam_libraries()]
    exe = next((p for p in cands if p.is_file()), None)
    if exe is None:
        raise SystemExit('game not found: %s setup --game "<...>/Batman Arkham Asylum GOTY"' % PROG)
    if exe.stat().st_size != pe.EXE_SIZE or sha256(exe) != pe.EXE_SHA256:
        raise SystemExit("%s is not the Steam GOTY ShippingPC-BmGame.exe this project rebuilds (size or SHA-256 differs)" % exe)
    save_settings(game_exe=str(exe))
    return exe


def game_path() -> Path:
    p = settings().get("game_exe")
    if not p or not Path(p).is_file():
        raise SystemExit("the game isn't set up: %s setup" % PROG)
    return Path(p)


# ---------------- downloads ----------------

def _range(url: str, off: int, n: int) -> bytes:
    last = ""
    for k in range(12):
        try:
            req = urllib.request.Request(url, headers={"Range": "bytes=%d-%d" % (off, off + n - 1), "User-Agent": "asylumdecomp"})
            with urllib.request.urlopen(req, timeout=120) as r:
                if r.status == 206:
                    b = r.read(n)
                    if len(b) == n:
                        return b
                    last = "short read"
                else:
                    last = "HTTP %d" % r.status
        except OSError as e:
            last = str(e)
        wait = min(60, 3 * (k + 1))
        print("  range %d+%d failed (%s), retrying in %d s" % (off, n, last, wait), file=sys.stderr)
        time.sleep(wait)
    raise SystemExit("giving up on %s (%s)" % (url, last))


def fetch(url: str, off: int, size: int, sha: str, dest: Path) -> None:
    """[off, off+size) of url into dest, resumable in 1 MB ranges, checked by SHA-256."""
    if dest.exists() and sha256(dest) == sha:
        return
    part = dest.with_suffix(".part")
    chunk = 1 << 20
    have = part.stat().st_size // chunk * chunk if part.exists() else 0
    with open(part, "r+b" if part.exists() else "wb") as f:
        f.truncate(have)
        f.seek(have)
        t0 = time.time()
        while have < size:
            n = min(chunk, size - have)
            f.write(_range(url, off + have, n))
            have += n
            if sys.stdout.isatty():
                print("\r  %s %.1f/%.1f MB (%.0f KB/s)   " % (dest.name, have / 1e6, size / 1e6, have / 1024 / max(0.1, time.time() - t0)), end="", flush=True)
    print("\r  %s %.1f MB" % (dest.name, size / 1e6) + " " * 30 if sys.stdout.isatty() else "  %s %.1f MB" % (dest.name, size / 1e6))
    if sha256(part) != sha:
        part.unlink()
        raise SystemExit("%s: SHA-256 differs from the expected download" % dest.name)
    os.replace(part, dest)


def expand(cab: Path, out: Path) -> None:
    out.mkdir(parents=True, exist_ok=True)
    if os.name == "nt":
        args = [os.path.join(os.environ.get("SystemRoot", r"C:\Windows"), "System32", "expand.exe"), "-F:*", str(cab), str(out)]
    elif shutil.which("cabextract"):
        args = ["cabextract", "-q", "-d", str(out), str(cab)]
    else:
        raise SystemExit("unpacking the compilers needs cabextract (apt install cabextract)")
    if subprocess.run(args, stdout=subprocess.DEVNULL).returncode:
        raise SystemExit("couldn't unpack %s" % cab)


def installshield_file(exe: bytes, want: str) -> bytes:
    """A file an InstallShield setup.exe carries after its image, XOR-encoded with its name."""
    start = exe.rfind(b"InstallShield\0")
    if start < 0:
        raise SystemExit("no InstallShield overlay")
    n, = struct.unpack_from("<H", exe, start + 14)
    p = start + 46
    for _ in range(n):
        name = exe[p:p + 260].split(b"\0")[0]
        flags, = struct.unpack_from("<I", exe, p + 260)
        ln, = struct.unpack_from("<I", exe, p + 268)
        p += 312
        if name == want.encode():
            data = exe[p:p + ln]
            if not flags & 2:
                return data
            seed = b"\x13\x35\x86\x07"
            key = bytes(c ^ seed[j % 4] for j, c in enumerate(name))
            return bytes((~(((b << 4) | (b >> 4)) & 0xFF) & 0xFF) ^ key[i % len(key)] for i, b in enumerate(data))
        p += ln
    raise SystemExit("%s not found in the setup" % want)


def cfb_cabinets(d: bytes) -> list[bytes]:
    """The streams of a compound file (an .msi) that are cabinets."""
    if d[:8] != b"\xD0\xCF\x11\xE0\xA1\xB1\x1A\xE1":
        raise SystemExit("not a compound file")
    u32 = lambda o: struct.unpack_from("<I", d, o)[0]  # noqa: E731
    ss = 1 << struct.unpack_from("<H", d, 30)[0]
    sec = lambda s: max(512, ss) + s * ss  # noqa: E731
    fat_secs = [s for s in (u32(76 + 4 * k) for k in range(109)) if s < 0xFFFFFFFA]
    difat = u32(68)
    while difat < 0xFFFFFFFA:
        b = sec(difat)
        fat_secs += [s for s in (u32(b + 4 * k) for k in range(ss // 4 - 1)) if s < 0xFFFFFFFA]
        difat = u32(b + ss - 4)
    fat = [u32(sec(s) + 4 * k) for s in fat_secs for k in range(ss // 4)]

    def read(s, size):
        out = bytearray()
        while s < 0xFFFFFFFA and len(out) < size:
            out += d[sec(s):sec(s) + ss]
            s = fat[s]
        return bytes(out[:size])

    dir_ = read(u32(48), 1 << 62)
    cutoff = u32(56)
    cabs = []
    for o in range(0, len(dir_) - 127, 128):
        e = dir_[o:o + 128]
        if e[66] == 2:
            start, size = struct.unpack_from("<II", e, 116)
            if size >= cutoff:
                s = read(start, size)
                if s.startswith(b"MSCF"):
                    cabs.append(s)
    return cabs


def toolchain_missing() -> list[str]:
    files = json.loads(resource("toolchain-files.json"))["files"]
    tdir = HOME / "toolchain"
    return [r for r, (_, n) in files.items() if not (tdir / r).is_file() or (tdir / r).stat().st_size != n]


def toolchain() -> None:
    man = json.loads(resource("toolchain-files.json"))
    tdir = HOME / "toolchain"
    files = man["files"]
    for rel in set(toolchain_missing()) & set(man.get("inline", {})):  # small text files kept in the manifest
        (tdir / rel).parent.mkdir(parents=True, exist_ok=True)
        (tdir / rel).write_text(man["inline"][rel], encoding="utf-8", newline="\n")
    missing = toolchain_missing()
    if not missing:
        print("compilers: installed (%d files in %s)" % (len(files), tdir))
        return
    print("compilers: %d files to fetch from Microsoft's downloads (about 90 MB)" % len(missing))
    dl = HOME / "cache" / "dl"
    pool = dl / "x"
    dl.mkdir(parents=True, exist_ok=True)
    for src in man["sources"]:
        if src["kind"] == "iso_ranges":
            for c in src["cabs"]:
                dest = dl / c["name"]
                fetch(src["url"], c["offset"], c["size"], c["sha256"], dest)
                expand(dest, pool / c["name"])
        elif src["kind"] == "installshield_msi":
            dest = dl / "VCToolkitSetup.exe"
            fetch(src["url"], 0, src["size"], src["sha256"], dest)
            for k, cab in enumerate(cfb_cabinets(installshield_file(dest.read_bytes(), src["msi"]))):
                p = dl / ("vctk%d.cab" % k)
                p.write_bytes(cab)
                expand(p, pool / ("vctk%d" % k))
        else:
            raise SystemExit("unknown source kind %r" % src["kind"])
    by_hash = {}
    for p in pool.rglob("*"):
        if p.is_file():
            by_hash.setdefault(sha256(p), p)
    absent = []
    for rel, (sha, _) in files.items():
        to = tdir / rel
        to.parent.mkdir(parents=True, exist_ok=True)
        if sha in by_hash:
            shutil.copyfile(by_hash[sha], to)
        elif rel not in man.get("inline", {}):
            absent.append(rel)
    if absent:
        raise SystemExit("%d compiler files weren't in the downloads: %s" % (len(absent), ", ".join(absent[:5])))
    shutil.rmtree(dl, ignore_errors=True)
    print("compilers: %d files installed in %s" % (len(files), tdir))


def capstone() -> None:
    """The one dependency (the disassembler for listings and diffs; a binary wheel, so not in the pyz)."""
    try:
        import capstone  # noqa: F401
        return
    except ImportError:
        pass
    print("installing capstone (the disassembler) with pip")
    if subprocess.run([sys.executable, "-m", "pip", "install", "--user", "--quiet", "capstone>=5"]).returncode:
        raise SystemExit("couldn't install capstone: python -m pip install capstone")


def run(game: str | None, toolchain_only: bool) -> None:
    if not toolchain_only:
        capstone()
        print("game: %s (verified)" % find_game(game))
    toolchain()

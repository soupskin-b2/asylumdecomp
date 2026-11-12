"""The project's public data (data/): the function table, symbols, imports, names, fingerprints."""
from __future__ import annotations

import functools
import hashlib
import gzip
import json
import re

import os
import shutil
import time

from paths import HOME, ROOT

# placeholder names that carry their address: sub_007e72a0, g_026b62b8, flt_...
ADDR_NAME = re.compile(r"(?<![A-Za-z0-9])(sub|g|flt|dbl|loc|off|vtbl|str)_([0-9a-fA-F]{8})(?![0-9A-Za-z])")


def _load(name: str):
    p = ROOT / "data" / name
    if not p.exists():
        raise SystemExit("asylum: %s is missing (it comes with the kit and the repository)" % p)
    with gzip.open(p, "rt", encoding="utf-8") as f:
        return json.load(f)


@functools.cache
def functions() -> dict[int, dict]:
    t = _load("functions.json.gz")
    cols = t["columns"]
    return {r[0]: dict(zip(cols, r)) for r in t["rows"]}


@functools.cache
def symbols() -> dict[str, int]:
    return {k: int(v) for k, v in _load("symbols.json.gz").items()}


@functools.cache
def imports() -> dict[int, str]:
    return {int(k, 16): v for k, v in _load("imports.json.gz").items()}


@functools.cache
def names() -> dict[int, str]:
    return {int(k, 16): v for k, v in _load("names.json.gz").items()}


@functools.cache
def fingerprints() -> dict[str, dict]:
    return _load("fingerprints.json.gz")


def _content_key(path: Path) -> str:
    """A key that changes only with the file's content (checkouts and pulls rewrite mtimes), cached per
    size and mtime so it's hashed once."""
    st = path.stat()
    memo = HOME / "cache" / "content-keys.json"
    try:
        keys = json.loads(memo.read_text(encoding="utf-8"))
    except (OSError, ValueError):
        keys = {}
    stamp = "%s:%x:%x" % (path.name, st.st_size, st.st_mtime_ns)
    if stamp not in keys:
        keys = {k: v for k, v in keys.items() if not k.startswith(path.name + ":")}
        keys[stamp] = hashlib.sha1(path.read_bytes()).hexdigest()[:12]
        tmp = memo.with_name(memo.name + ".%d.tmp" % os.getpid())
        try:  # best effort: parallel workers race on it, and losing a write only costs a re-hash
            memo.parent.mkdir(parents=True, exist_ok=True)
            tmp.write_text(json.dumps(keys), encoding="utf-8")
            os.replace(tmp, memo)
        except OSError:
            tmp.unlink(missing_ok=True)
    return keys[stamp]


@functools.cache
def _fingerprint_shard(page: int) -> dict[str, dict]:
    """The fingerprints of one 64 KB page of addresses. The full table takes seconds to parse, so it's
    split once into small files in the cache (it never changes for a given kit)."""
    src = ROOT / "data" / "fingerprints.json.gz"
    d = HOME / "cache" / ("fingerprints-" + _content_key(src))
    if not d.exists():
        tmp = d.with_name(d.name + ".%d.tmp" % os.getpid())
        tmp.mkdir(parents=True, exist_ok=True)
        pages: dict[int, dict] = {}
        for va, fp in fingerprints().items():
            pages.setdefault(int(va, 16) >> 16, {})[va] = fp
        for n, fps in pages.items():
            (tmp / ("%04x.json" % n)).write_text(json.dumps(fps), encoding="utf-8")
        try:
            os.replace(tmp, d)
        except OSError:  # another process finished first
            shutil.rmtree(tmp, ignore_errors=True)
        for old in d.parent.glob("fingerprints-*"):  # other versions' (~140 MB each), unused for 2 hours
            try:
                if old != d and time.time() - old.stat().st_mtime > 7200:
                    shutil.rmtree(old, ignore_errors=True)
            except OSError:
                pass
    elif time.time() - d.stat().st_mtime > 3600:  # in use: keep it
        os.utime(d)
    f = d / ("%04x.json" % page)
    return json.loads(f.read_text(encoding="utf-8")) if f.exists() else {}


def fingerprint(va: int) -> dict | None:
    return _fingerprint_shard(va >> 16).get("%08x" % va)


def header_addresses() -> dict[str, int]:
    """`Class::Name` -> address for declarations the headers pin with an address comment
    (`void Foo(INT); /* 0x005d7d10 */`); names given two addresses are left out. Cached per header state."""
    files = sorted((ROOT / "include" / "ue3").glob("*.h"))
    # hashlib, not hash(): hash() differs per process, so the cache would never hit
    tag = hashlib.sha256(repr([(f.name, f.stat().st_size, f.stat().st_mtime_ns) for f in files]).encode()).hexdigest()[:12]
    c = HOME / "cache" / ("header-addresses-%s.json" % tag)
    if c.exists():
        return json.loads(c.read_text(encoding="utf-8"))
    out = _header_addresses(files)
    c.parent.mkdir(parents=True, exist_ok=True)
    tmp = c.with_name(c.name + ".%d.tmp" % os.getpid())
    tmp.write_text(json.dumps(out), encoding="utf-8")
    try:
        os.replace(tmp, c)
    except OSError:  # another process just wrote the same file (Windows refuses the replace)
        tmp.unlink(missing_ok=True)
    for old in c.parent.glob("header-addresses-*.json"):  # earlier headers' copies
        if old != c:
            try:
                old.unlink()
            except OSError:
                pass
    return out


def _header_addresses(files) -> dict[str, int]:
    head = re.compile(r"^(?:struct|class) (\w+)(?: : public \w+)? \{")
    decl = re.compile(r"(~?\w+)\s*\([^;]*\)[^;/]*;\s*/\*\s*0x([0-9a-f]{8})\s*\*/")
    out: dict[str, int | None] = {}
    for f in files:
        cls = None
        for line in f.read_text(encoding="utf-8", errors="replace").splitlines():
            m = head.match(line)
            if m:
                cls = None if line.rstrip().endswith("};") else m.group(1)
                continue
            if line.startswith("};"):
                cls = None
            elif cls:
                d = decl.search(line)
                if d:
                    k, a = "%s::%s" % (cls, d.group(1)), int(d.group(2), 16)
                    out[k] = a if out.get(k, a) == a else None
    return {k: v for k, v in out.items() if v is not None}

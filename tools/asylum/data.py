"""The project's public data (data/): the function table, symbols, imports, names, fingerprints."""
from __future__ import annotations

import functools
import gzip
import json
import re

from paths import ROOT

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


def header_addresses() -> dict[str, int]:
    """`Class::Name` -> address for declarations the headers pin with an address comment
    (`void Foo(INT); /* 0x005d7d10 */`); names given two addresses are left out."""
    head = re.compile(r"^(?:struct|class) (\w+)(?: : public \w+)? \{")
    decl = re.compile(r"(~?\w+)\s*\([^;]*\)[^;/]*;\s*/\*\s*0x([0-9a-f]{8})\s*\*/")
    out: dict[str, int | None] = {}
    for f in sorted((ROOT / "include" / "ue3").glob("*.h")):
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

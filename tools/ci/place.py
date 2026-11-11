"""Places verified functions into src/: each into its original source file's unit (src/units.json),
appended to an existing part (UnActor.cpp, UnActor.2.cpp ...) where it fits, else a new part.

A contributed file is self-contained (its own declarations). Appending it to a part keeps the
part's declarations once, renames a stand-in type the file defines differently (C -> C_00553a00),
and is kept only when the whole part still compiles and every function in it still matches the
original's fingerprint (tools/asylum's unit check). So adding a function never costs a match.
"""
from __future__ import annotations

import gzip
import json
import os
import re
import sys
from dataclasses import dataclass, field
from pathlib import Path

import cppsplit

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "asylum"))
import check as checker  # noqa: E402

DEDUPE = ("type", "typedef", "fwd", "decl", "var", "def", "inst", "define", "include")
UE3_CHAIN = ['#include "ue3/Core.h"', '#include "ue3/Array.h"', '#include "ue3/Classes.h"', '#include "ue3/Implement.h"']
UE3_KEY = "@ue3-headers"
ADDR_NAME = re.compile(r"(?<![A-Za-z0-9])(sub|g|flt|dbl|loc|off|vtbl|str)_([0-9a-fA-F]{8})(?![0-9A-Za-z])")
HEADER = "// asylum-"


def strip_header(src: str) -> str:
    return "\n".join(l for l in src.splitlines() if not l.startswith(HEADER)).strip("\n") + "\n"


def header_field(src: str, key: str) -> str | None:
    p = "%s%s:" % (HEADER, key)
    for l in src.splitlines():
        if l.startswith(p):
            return l[len(p):].strip() or None
    return None


def clean_symbol(symbol):
    """A contributor's symbol as the project records it: a helper struct's `X_` (deriving from X to
    add a declaration) is X; a placeholder type's name (`UFNativeElem_007c5180`, `C_00a1b2c3`) isn't
    recorded at all."""
    if not symbol or re.search(r"_[0-9a-f]{8}@|\bC_[0-9a-f]{8}\b|C_view", symbol):
        return None
    # only a helper of a class the headers declare: a real name may end in `_`
    known = _header_classes()
    return re.sub(r"(?<![A-Za-z0-9_])([A-Za-z][A-Za-z0-9_]*?)_@", lambda m: m.group(1) + "@" if m.group(1) in known else m.group(0), symbol)


_CLASSES: set | None = None


def _header_classes() -> set:
    global _CLASSES
    if _CLASSES is None:
        root = Path(__file__).resolve().parents[2] / "include" / "ue3"
        _CLASSES = {m for p in root.glob("*.h") for m in re.findall(r"^(?:struct|class) (\w+)", p.read_text(encoding="utf-8", errors="replace"), re.M)}
    return _CLASSES


def read_gz(p: Path):
    with gzip.open(p, "rt", encoding="utf-8") as f:
        return json.load(f)


def write_gz(p: Path, obj) -> None:
    tmp = p.with_suffix(p.suffix + ".tmp")
    with open(tmp, "wb") as f, gzip.GzipFile(fileobj=f, mode="wb", mtime=0, compresslevel=9) as g:
        g.write(json.dumps(obj, separators=(",", ":")).encode())
    tmp.replace(p)


# ------------------------------------------------------------------ members and parts

@dataclass
class Member:
    va: int
    size: int
    source: str
    symbol: str | None
    profile: str
    function: str | None = None      # the contributor's name of the function (decorated or part)
    renames: dict = field(default_factory=dict)
    items: list = field(default_factory=list)
    key: tuple = ()
    isolated: bool = False
    drop: set = field(default_factory=set)
    level: int = -1

    def prepare(self):
        src = self.source
        for a, b in self.renames.items():
            src = re.sub(r"(?<![\w$\"])%s(?![\w$\"])" % re.escape(a), b, src)
        self.items = cppsplit.split(src)
        incs = [k for k, it in enumerate(self.items) if it.kind == "include"]
        last = incs[-1] if incs else -1
        pre = [it.code for k, it in enumerate(self.items) if it.kind == "include" or (it.kind == "define" and k < last)]
        self.key = (self.profile, tuple(pre))
        self.level = -1
        if self.profile.startswith("ue3") and all(x in UE3_CHAIN for x in pre):
            self.level = max([UE3_CHAIN.index(x) for x in pre], default=-1)
            self.key = (self.profile, (UE3_KEY,))
        self.isolated = any((it.kind == "pragma" and "pack" not in it.code) or it.kind in ("pp", "block") for it in self.items)

    def target_item(self) -> int:
        defs = [k for k, it in enumerate(self.items) if it.kind in ("def", "inst")]
        sub = "sub_%08x" % self.va
        for k in defs:
            if self.items[k].name and sub in self.items[k].name:
                return k
        for nm in (self.symbol, self.function):
            if not nm:
                continue
            m = re.match(r"\?\?(_?[0-9A-Z])([A-Za-z_]\w*?)@@", nm) or re.match(r"\?([A-Za-z_]\w*)@([A-Za-z_]\w*?)@@", nm)
            want = m.group(1) if m else (nm if re.fullmatch(r"[\w:~]+", nm) else None)
            if want:
                for k in defs:
                    n = self.items[k].name or ""
                    if n == want or n.endswith("::" + want) or (m is None and want in n):
                        return k
        return defs[-1] if defs else len(self.items) - 1

    def names(self) -> list[str]:
        """Names to find the function by in the object, renames applied."""
        out = []
        for s in (self.function, self.symbol):
            if s:
                for a, b in self.renames.items():
                    s = re.sub(r"(\?\?_?[0-9A-Z]|[@?UVW])%s@" % re.escape(a), lambda m: m.group(1) + b + "@", s)
                    s = re.sub(r"(?<![\w$])%s(?![\w$])" % re.escape(a), b, s) if not s.startswith("?") else s
                out.append(s)
        out.append("sub_%08x" % self.va)
        return out


def renamable(name: str, real: set) -> bool:
    if ADDR_NAME.fullmatch(name or ""):
        return False
    return name not in real or bool(cppsplit.STAND_IN.match(name))


def code_uses_def(code: str) -> bool:
    return "=" in code or not code.startswith("extern")


class Part:
    """A part file: its declarations (from its existing text, or empty for a new part)."""

    def __init__(self, key, level=-1):
        self.key = key
        self.level = level
        self.defs: dict = {}
        self.seen: set = set()
        self.pack: tuple = ()
        self.isolated = False

    @classmethod
    def parse(cls, text: str, profile: str) -> "Part":
        items = cppsplit.split(text)
        # the part's own includes come first (members' includes were folded into them), with the
        # macros set before them
        lead = []
        for it in items:
            if it.kind in ("include", "define"):
                lead.append(it)
            else:
                break
        while lead and lead[-1].kind == "define":
            lead.pop()
        pre = [it.code for it in lead]
        level = -1
        key = (profile, tuple(pre))
        if profile.startswith("ue3") and all(x in UE3_CHAIN for x in pre if x.startswith("#include")):
            if all(x in UE3_CHAIN for x in pre):
                level = max([UE3_CHAIN.index(x) for x in pre], default=-1)
                key = (profile, (UE3_KEY,))
        p = cls(key, level)
        p.isolated = any((it.kind == "pragma" and "pack" not in it.code) or it.kind in ("pp", "block") for it in items)
        p.pack = ()
        for it in items:
            if it.kind == "pragma" and "pack" in it.code:
                p.pack = p.pack[:-1] if "pop" in it.code else p.pack + (it.code,)
                continue
            p.seen.add((p.pack, it.code))
            if it.kind in DEDUPE and it.kind != "include":
                for n in it.names or []:
                    if n not in p.defs or p.defs[n][0] == "fwd":
                        p.defs[n] = (it.kind, it.code)
        return p

    def try_add(self, m: Member, real: set) -> bool:
        for _ in range(6):
            clash, hard = set(), False
            for it in m.items:
                if it.kind not in DEDUPE or it.kind == "include":
                    continue
                for n in it.names or []:
                    have = self.defs.get(n)
                    if have is None or have[1] == it.code:
                        continue
                    if it.kind == "decl" and have[0] == "decl" and 'extern "C"' not in it.code + have[1]:
                        continue
                    if (it.kind == "fwd" or have[0] == "fwd") and it.kind in ("type", "fwd") and have[0] in ("type", "fwd"):
                        continue
                    if it.kind in ("type", "typedef", "fwd") and renamable(n, real):
                        clash.add(n)
                    elif it.kind == "var" and have[0] == "var" and ADDR_NAME.fullmatch(n) and not code_uses_def(it.code):
                        m.drop.add(it.code)
                    else:
                        hard = True
            if hard:
                return False
            if not clash:
                break
            for n in clash:
                m.renames[n] = "%s_%08x" % (n, m.va)
            m.prepare()
        else:
            return False
        for it in m.items:
            if it.kind in DEDUPE and it.kind != "include" and it.code not in m.drop:
                for n in it.names or []:
                    if n not in self.defs or self.defs[n][0] == "fwd":
                        self.defs[n] = (it.kind, it.code)
        return True

    def render(self, m: Member, first_line: int) -> str:
        """The member's text as appended to the part (declarations the part has once)."""
        out: list[str] = []
        n = [first_line - 1]

        def put(t: str):
            out.append(t)
            n[0] += t.count("\n") + 1

        t = m.target_item()
        relined = False
        for k, it in enumerate(m.items):
            if it.kind in ("include",) or (it.kind == "define" and it.code in m.key[1]):
                continue
            if it.kind == "pragma" and "pack" in it.code:
                self.pack = self.pack[:-1] if "pop" in it.code else self.pack + (it.code,)
                put(it.text.strip("\n"))
                continue
            key = (self.pack, it.code)
            if it.kind in DEDUPE and k != t and (key in self.seen or it.code in m.drop):
                continue
            if k == t and key in self.seen:
                put("// @baa 0x%08x" % m.va)
                continue
            self.seen.add(key)
            text = it.text.strip("\n")
            if k == t:
                put("// @baa 0x%08x" % m.va)
            put(text)
            if "#line" in text:
                relined = True
            if it.kind in ("type", "def", "block", "typedef", "inst") or k == t:
                put("")
        if relined:
            put('#line %d "candidate.cpp"' % (n[0] + 2))
        return "\n".join(out).rstrip() + "\n"


def lead_text(key, level: int, m: Member) -> list[str]:
    """The includes (and configuring macros) a new part starts with."""
    if key[1] == (UE3_KEY,):
        return [UE3_CHAIN[level]] if level >= 0 else []
    return [it.text.strip() for it in m.items if it.code in key[1]]


# ------------------------------------------------------------------ the repository

class Repo:
    def __init__(self, root: Path, log=print):
        self.root = Path(root)
        self.log = log
        self.units = json.loads((self.root / "src" / "units.json").read_text(encoding="utf-8"))
        f = read_gz(self.root / "data" / "functions.json.gz")
        self.cols = {c: k for k, c in enumerate(f["columns"])}
        self.ftable = f
        self.funcs = {r[self.cols["va"]]: r for r in f["rows"]}
        self._real = None

    def real(self) -> set:
        """Names that come from the shared headers or bind to the original: never renamed."""
        if self._real is None:
            out = set()
            for p in (self.root / "include").rglob("*.h"):
                txt = cppsplit.strip_comments(p.read_text(encoding="utf-8", errors="replace"))
                out.update(re.findall(r"\b(?:struct|class|union|enum)\s+([A-Za-z_]\w*)", txt))
                out.update(re.findall(r"\btypedef\b[^;{]*?\b([A-Za-z_]\w*)\s*;", txt))
            for name in read_gz(self.root / "data" / "symbols.json.gz"):
                if not ADDR_NAME.search(name):
                    out.update(re.findall(r"@([A-Za-z_]\w*)@@", name))
            for name in read_gz(self.root / "data" / "imports.json.gz").values():
                nm = name.split("!")[-1]
                out.update(re.findall(r"@([A-Za-z_]\w*)@@", nm))
                out.update(re.findall(r"V([A-Za-z_]\w*)@@", nm))
            for name in read_gz(self.root / "data" / "names.json.gz").values():
                for part in re.findall(r"[A-Za-z_]\w*", name.split("::vftable")[0]):
                    if len(part) > 2:
                        out.add(part)
            self._real = out
        return self._real

    def func(self, va: int) -> dict:
        r = self.funcs.get(va)
        if r is None:
            raise KeyError("%08x is not the start of a function" % va)
        return {c: r[k] for c, k in self.cols.items()}

    def unit_of(self, va: int) -> str:
        return self.func(va)["unit"] or "Unknown/Unsorted/Unknown_%07x.cpp" % ((va >> 16) << 16)

    def check(self, path: Path, profile: str, funcs: list[tuple[int, list[str]]]) -> dict:
        return checker.unit_check(path.read_text(encoding="utf-8"), profile, funcs)

    @staticmethod
    def problems(res: dict, vas: list[int]) -> dict:
        """{va: why} for the listed functions that don't match in a unit-check result."""
        if res["compile_errors"]:
            return {va: "compile error: " + res["compile_errors"][0][:300] for va in vas}
        out = {}
        for va in vas:
            r = res["functions"].get("%08x" % va, {"status": "missing", "problems": []})
            if r["status"] != "match":
                out[va] = "%s %s" % (r["status"], "; ".join(r["problems"][:2]))
        if res.get("conflicts"):
            for va in vas:
                out.setdefault(va, "names bound differently: " + res["conflicts"][0])
        return out

    def entries(self, unit: str) -> list[dict]:
        es = [u for u in self.units["units"] if u["unit"] == unit and u.get("kind") != "library"]

        def num(u):
            m = re.search(r"\.(\d+)\.c(pp)?$", u["source"])
            return int(m.group(1)) if m else 1
        return sorted(es, key=num)

    def next_path(self, unit: str) -> str:
        stem, ext = os.path.splitext(unit)
        ext = ext if ext in (".c", ".cpp") else ".cpp"
        have = {u["source"] for u in self.units["units"]}
        if unit.replace("\\", "/") not in have and stem + ext not in have:
            return stem + ext
        k = 2
        while "%s.%d%s" % (stem, k, ext) in have:
            k += 1
        return "%s.%d%s" % (stem, k, ext)

    def place_unit(self, unit: str, members: list[Member]) -> tuple[dict, dict]:
        """Places a unit's new members. Returns ({va: (source path, symbol)}, {va: why not})."""
        real = self.real()
        placed, failed = {}, {}
        for m in members:
            m.prepare()
        todo = list(members)
        # existing parts that can take them (same profile and headers), newest first; at most three
        # tried (each try compiles the whole part)
        fits = []
        for entry in reversed(self.entries(unit)):
            path = self.root / "src" / entry["source"]
            if not path.exists():
                continue
            pk = Part.parse(path.read_text(encoding="utf-8"), entry["profile"])
            if not pk.isolated and any(m.key[0] == entry["profile"] and (m.key == pk.key or m.key[1] == pk.key[1] == (UE3_KEY,))
                                       for m in todo):
                fits.append(entry)
        for entry in fits[:3]:
            if not todo:
                break
            todo = self._into_existing(entry, todo, real, placed)
        # the rest: new parts (all together first, then one by one)
        while todo:
            group = [m for m in todo if m.key == todo[0].key and not m.isolated] or [todo[0]]
            ok = self._new_part(unit, group, real, placed, failed)
            if not ok and len(group) > 1:
                # one by one: only those the group's part didn't take
                for m in group:
                    if m.va not in placed and m.va not in failed:
                        self._new_part(unit, [m], real, placed, failed)
            todo = [m for m in todo if m.va not in placed and m.va not in failed]
        return placed, failed

    def _into_existing(self, entry: dict, todo: list[Member], real: set, placed: dict) -> list[Member]:
        path = self.root / "src" / entry["source"]

        def attempt(group: list[Member]) -> bool:
            base = path.read_text(encoding="utf-8")
            old = [(int(f["va"], 16), [n for n in (f.get("symbol"), "sub_" + f["va"]) if n]) for f in entry["functions"]]
            part = Part.parse(base, entry["profile"])
            text = base.rstrip("\n") + "\n"
            level = part.level
            added = []
            for m in group:
                if m.key[0] != entry["profile"] or m.isolated or m.key != part.key and not (
                        m.key[1] == (UE3_KEY,) and part.key[1] == (UE3_KEY,)):
                    continue
                m.renames, m.drop = {}, set()
                m.prepare()
                if not part.try_add(m, real):
                    continue
                text += "\n" + part.render(m, text.count("\n") + 2)
                level = max(level, m.level)
                added.append(m)
            if not added:
                return False
            if part.key[1] == (UE3_KEY,) and level > part.level >= 0:
                text = text.replace(UE3_CHAIN[part.level], UE3_CHAIN[level], 1)
            elif part.key[1] == (UE3_KEY,) and level >= 0 > part.level:
                return False   # a part without the engine headers: keep it so
            text = re.sub(r"^(// .*?: )(\d+)( functions?)", lambda mm: "%s%d function%s" % (
                mm.group(1), len(entry["functions"]) + len(added), "" if len(entry["functions"]) + len(added) == 1 else "s"), text, count=1)
            tmp = path.with_name(path.name + ".try")
            tmp.write_text(text, encoding="utf-8", newline="\n")
            try:
                res = self.check(tmp, entry["profile"], old + [(m.va, m.names()) for m in added])
            finally:
                tmp.unlink()
            bad = self.problems(res, [va for va, _ in old] + [m.va for m in added])
            if bad:
                return False
            path.write_text(text, encoding="utf-8", newline="\n")
            for m in added:
                sym = res["functions"]["%08x" % m.va].get("symbol")
                entry["functions"].append({"va": "%08x" % m.va, "size": m.size, "symbol": sym})
                placed[m.va] = (entry["source"], sym)
            return True

        # all together first (one compile), then one by one
        if len(todo) > 1:
            attempt(todo)
            todo = [m for m in todo if m.va not in placed]
        for m in list(todo):
            attempt([m])
        return [m for m in todo if m.va not in placed]

    def _new_part(self, unit: str, group: list[Member], real: set, placed: dict, failed: dict) -> bool:
        key = group[0].key
        part = Part(key)
        added = []
        for m in group:
            m.renames, m.drop = {}, set()
            m.prepare()
            if (not added or not m.isolated) and part.try_add(m, real):
                added.append(m)
        if not added:
            failed[group[0].va] = "doesn't fit in src/: its declarations contradict each other"
            return False
        level = max(m.level for m in added)
        src_path = self.next_path(unit)
        n = len(added)
        head = ["// %s: %d function%s" % (unit.split("/")[-1], n, "" if n == 1 else "s"),
                "// Placed here by: contributions.",
                "// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check)."]
        text = "\n".join(head + lead_text(key, level, added[0]) + [""]) + "\n"
        for m in added:
            text += part.render(m, text.count("\n") + 1) + "\n"
        text = text.rstrip("\n") + "\n"
        path = self.root / "src" / src_path
        path.parent.mkdir(parents=True, exist_ok=True)
        tmp = path.with_name(path.name + ".try")
        tmp.write_text(text, encoding="utf-8", newline="\n")
        try:
            res = self.check(tmp, key[0], [(m.va, m.names()) for m in added])
        finally:
            tmp.unlink()
        bad = self.problems(res, [m.va for m in added])
        if bad:
            if len(added) == 1:
                failed[added[0].va] = "doesn't fit in src/: " + bad[added[0].va]
            return False
        path.write_text(text, encoding="utf-8", newline="\n")
        fs = []
        for m in added:
            sym = res["functions"]["%08x" % m.va].get("symbol")
            fs.append({"va": "%08x" % m.va, "size": m.size, "symbol": sym})
            placed[m.va] = (src_path, sym)
        self.units["units"].append({"unit": unit, "source": src_path, "profile": key[0], "functions": fs})
        return len(added) == len(group)

    def mark_matched(self, va: int, symbol: str | None, file: str | None = None):
        r = self.funcs[va]
        r[self.cols["status"]] = "matched"
        if file and "file" in self.cols:
            r[self.cols["file"]] = file
        symbol = clean_symbol(symbol)
        if symbol and not r[self.cols["symbol"]]:
            r[self.cols["symbol"]] = symbol

    def units_text(self) -> str:
        self.units["note"] = "Maintained by CI (tools/ci); every file is checked by python tools/asylum unit-check."
        return json.dumps(self.units, indent=1)

    def save(self):
        seen: dict = {}
        for u in self.units["units"]:
            for f in u["functions"]:
                if f["va"] in seen:
                    raise RuntimeError("%s would be in two files (%s, %s)" % (f["va"], seen[f["va"]], u["source"]))
                seen[f["va"]] = u["source"]
        us = sorted(self.units["units"], key=lambda u: u["source"])
        self.units["units"] = us
        self.units["totals"] = {"units": len({u["unit"] for u in us}), "files": len(us),
                                "functions": sum(len(u["functions"]) for u in us), "failed": len(self.units.get("failed", {}))}
        tmp = self.root / "src" / "units.json.tmp"
        tmp.write_text(self.units_text(), encoding="utf-8", newline="\n")
        tmp.replace(self.root / "src" / "units.json")
        write_gz(self.root / "data" / "functions.json.gz", self.ftable)

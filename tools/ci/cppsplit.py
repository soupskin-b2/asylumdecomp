"""Top-level items of a C++ source: preprocessor lines, type definitions, declarations and
function definitions, each with the name it introduces (for merging sources into one unit)."""
from __future__ import annotations

import re
from dataclasses import dataclass, field

STAND_IN = re.compile(r"^(?:[A-Z]{1,2}\d?|[A-Z][a-z]?\d?|Class|Struct|Obj|Self|This|Unk\w*|T|V[A-Za-z]*|[A-Za-z]+_[0-9a-f]{8}|"
                      r"[A-Z]\w*_[0-9A-Fa-f]{6,8})$")


@dataclass
class Item:
    kind: str            # pp | include | define | pragma | type | typedef | fwd | decl | def | block
    name: str | None
    text: str            # as written, with its leading comments
    code: str = ""       # without comments, whitespace collapsed (for comparing)
    names: list = field(default_factory=list)   # every identifier it defines (types: also nested)


def strip_comments(s: str) -> str:
    out, i, n = [], 0, len(s)
    while i < n:
        c = s[i]
        if c == "/" and i + 1 < n and s[i + 1] == "/":
            j = s.find("\n", i)
            i = n if j < 0 else j
            continue
        if c == "/" and i + 1 < n and s[i + 1] == "*":
            j = s.find("*/", i + 2)
            out.append(" ")
            i = n if j < 0 else j + 2
            continue
        if c in "\"'":
            j = i + 1
            while j < n and s[j] != c:
                j += 2 if s[j] == "\\" else 1
            out.append(s[i:j + 1])
            i = j + 1
            continue
        out.append(c)
        i += 1
    return "".join(out)


def norm(s: str) -> str:
    return re.sub(r"\s+", " ", strip_comments(s)).strip()


def _scan(src: str):
    """Yields (start, end, is_pp) spans of top-level items."""
    i, n = 0, len(src)
    start = None
    depth = 0
    paren = 0
    head_brace = None     # for the item being read: text before its first '{'
    while i < n:
        c = src[i]
        if start is None:
            if c.isspace():
                i += 1
                continue
            if c == "/" and src.startswith("//", i):
                j = src.find("\n", i)
                i = n if j < 0 else j + 1
                continue
            if c == "/" and src.startswith("/*", i):
                j = src.find("*/", i + 2)
                i = n if j < 0 else j + 2
                continue
            if c == "#":
                j = i
                while True:
                    k = src.find("\n", j)
                    if k < 0:
                        k = n
                        break
                    if src[k - 1] == "\\" or (k >= 2 and src[k - 2:k] == "\\\r"):
                        j = k + 1
                        continue
                    break
                yield i, k, True
                i = k
                continue
            start, depth, paren, head_brace = i, 0, 0, None
        if c == "/" and src.startswith("//", i):
            j = src.find("\n", i)
            i = n if j < 0 else j
            continue
        if c == "/" and src.startswith("/*", i):
            j = src.find("*/", i + 2)
            i = n if j < 0 else j + 2
            continue
        if c in "\"'":
            j = i + 1
            while j < n and src[j] != c:
                j += 2 if src[j] == "\\" else 1
            i = j + 1
            continue
        if c == "\n" and depth == 0 and paren == 0 and src[i + 1:].lstrip(" \t").startswith("#"):
            # a top-level line without ';' (a macro invocation) ends before a preprocessor line
            yield start, i, False
            start = None
            i += 1
            continue
        if c == "#" and depth > 0:
            # preprocessor line inside a body: part of the item
            j = src.find("\n", i)
            i = n if j < 0 else j
            continue
        if c == "(":
            paren += 1
        elif c == ")":
            paren -= 1
        elif c == "{":
            if depth == 0 and head_brace is None:
                head_brace = strip_comments(src[start:i])
            depth += 1
        elif c == "}":
            depth -= 1
            if depth == 0:
                h = head_brace or ""
                is_func = ("(" in h and not re.match(r"\s*(template\s*<.*?>\s*)?(typedef\s+)?(struct|class|union|enum)\b", h, re.S)
                           and not re.search(r"=\s*$", h))
                is_block = re.match(r'\s*(extern\s*"C(\+\+)?"|namespace\b)', h) is not None
                if is_func or is_block:
                    yield start, i + 1, False
                    start = None
        elif c == ";" and depth == 0 and paren == 0:
            yield start, i + 1, False
            start = None
        i += 1
    if start is not None:
        yield start, n, False


def _ident_before_paren(h: str) -> str | None:
    h = re.sub(r"__declspec\s*\([^)]*\)", " ", h)
    h = re.sub(r"\b(template\s*<[^{]*?>)", " ", h)
    m = re.search(r"((?:[A-Za-z_]\w*(?:<[^()]*?>)?\s*::\s*)*(?:operator\s*(?:\(\)|[^\s(]+|\w+)|~?[A-Za-z_]\w*))\s*\(", h)
    return re.sub(r"\s+", "", m.group(1)) if m else None


def classify(text: str) -> Item:
    code = norm(text)
    if code.startswith("#"):
        m = re.match(r"#\s*include\s*[<\"]([^>\"]+)[>\"]", code)
        if m:
            return Item("include", m.group(1), text, code)
        m = re.match(r"#\s*define\s+(\w+)", code)
        if m:
            return Item("define", m.group(1), text, code)
        if re.match(r"#\s*pragma\b", code):
            return Item("pragma", None, text, code)
        return Item("pp", None, text, code)
    if re.match(r'(extern\s*"C(\+\+)?"\s*\{|namespace\b)', code):
        return Item("block", None, text, code)
    m = re.match(r"(?:template\s*<.*?>\s*)?(struct|class|union|enum)\s+(?:__declspec\s*\([^)]*\)\s*)?([A-Za-z_]\w*)\s*;$", code)
    if m:
        return Item("fwd", m.group(2), text, code)
    if code.startswith("typedef"):
        h = code[:-1] if code.endswith(";") else code
        m = re.search(r"\(\s*(?:__\w+\s+)?(?:\w+\s*::\s*)*\*\s*([A-Za-z_]\w*)\s*\)\s*\(", h)
        name = m.group(1) if m else (re.findall(r"([A-Za-z_]\w*)\s*(?:\[[^\]]*\]\s*)*$", h) or [None])[0]
        names = [name] if name else []
        m2 = re.match(r"typedef\s+(?:struct|class|union|enum)\s+([A-Za-z_]\w*)\s*\{", code)
        if m2:
            names.append(m2.group(1))
        return Item("typedef", name, text, code, names)
    m = re.match(r"(?:template\s*<.*?>\s*)?(struct|class|union|enum)\s+(?:__declspec\s*\([^)]*\)\s*)?([A-Za-z_]\w*)[^;{]*\{", code)
    if m:
        # struct X {...} g_var;  also declares g_var
        tail = code[code.rfind("}") + 1:].strip(" ;")
        names = [m.group(2)]
        return Item("type", m.group(2), text, code, names + ([tail] if re.fullmatch(r"[A-Za-z_]\w*", tail or "") else []))
    if code.endswith("}"):
        h = code[:code.find("{")]
        return Item("def", _ident_before_paren(h), text, code)
    if re.match(r"template\s+(?!<)", code):
        # explicit instantiation: template T& TArray<T>::operator()(INT);
        return Item("inst", _ident_before_paren(code), text, code)
    h = code.rstrip(";")
    if "(" in h and not re.search(r"=", h.split("(")[0]):
        name = _ident_before_paren(h)
        if name and not re.search(r"\(\s*(?:__\w+\s+)?\*", h.split(name, 1)[-1][:40]):
            return Item("decl", name, text, code)
    h2 = re.sub(r"=.*$", "", h, flags=re.S)
    h2 = re.sub(r"(\[[^\]]*\]\s*)+$", "", h2.strip())
    m = re.search(r"\(\s*(?:__\w+\s+)?\*\s*([A-Za-z_]\w*)\s*\)", h2)
    name = m.group(1) if m else (re.findall(r"([A-Za-z_]\w*)\s*$", h2) or [None])[0]
    return Item("var", name, text, code)


def split(src: str) -> list[Item]:
    items = []
    last = 0
    for a, b, _ in _scan(src):
        # leading comments (between the previous item and this one) belong to this one
        lead = src[last:a]
        lead_lines = [l for l in lead.split("\n") if l.strip()]
        text = ("\n".join(l.rstrip() for l in lead_lines) + "\n" if lead_lines else "") + src[a:b].strip("\n")
        items.append(classify(text))
        last = b
    tail = src[last:].strip()
    if tail:
        items.append(Item("comment", None, tail, ""))
    for it in items:
        if not it.names and it.name:
            it.names = [it.name]
    return items

"""tools/gapcomments.py: remove or trim comments in src that report header gaps which are no longer gaps.
python tools/gapcomments.py [--write] [--report FILE] [--helpers FILE]   (run it after a header change)
A sentence that reports a gap (isn't declared / unnamed in the kit / kit gap / the kit's X ...) is dropped when every
Class::Member it names is declared now; "(unnamed in the kit; ...)" / "(kit vf_XXX)" parentheticals go when the
definition that follows has a real name. Code is never touched."""
import sys, os, re, glob, collections, textwrap
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, ROOT + "/tools")
import slots

WRITE = "--write" in sys.argv
lines, classes = slots.load()
H = "".join(lines)
for p in glob.glob(ROOT + "/include/ue3/*.h"):
    if not p.endswith("Classes.h"):
        H += open(p, encoding="utf-8", errors="replace").read()
members = collections.defaultdict(set)
for c, v in classes.items():
    for i in range(v["start"], v["end"]):
        for m in re.finditer(r"\b(~?\w+)\s*\(", lines[i]):
            members[c].add(m.group(1))
        m = re.match(r"\s+[\w:<>,\*& ]+?\b(\w+)\s*(\[[^\]]*\])?\s*;", lines[i])
        if m:
            members[c].add(m.group(1))


def resolved(k, n):
    if n.startswith(("sub_", "vf_", "Native_", "Unk")):
        return False
    if k in classes:
        return any(n in members[x] for x in slots.chain(classes, k))
    # a type from the other headers (FString, TArray, FMatrix ...): its name and the member's
    return re.search(r"\b(class|struct)\s+%s\b" % re.escape(k), H) is not None and re.search(r"\b%s\s*[\(;\[]" % re.escape(n), H) is not None


GAPS = re.compile(r"(?i)(isn.t|aren.t|is not|are not|not yet) declared|unnamed in the kit|not in the kit|kit gaps?\b|the kit.s \w+|"
                  r"kit lacks|kit has no|kit doesn.t|Classes\.h (?:lacks|has no|doesn.t)|missing from the (?:kit|headers)|"
                  r"which the kit(?:.s \w+)? lacks|\bkit vf_")
REF = re.compile(r"\b([AUFT][A-Z]\w*)::(~?\w+)\b")


def split_sentences(s):
    # sentence ends: ". " / "; " not inside parentheses, followed by a capital, digit, or '(' start
    out, d, cur = [], 0, ""
    i = 0
    while i < len(s):
        ch = s[i]
        cur += ch
        if ch == "(":
            d += 1
        elif ch == ")":
            d = max(0, d - 1)
        elif ch == "." and d == 0 and (i + 1 == len(s) or (s[i + 1] == " " and i + 2 < len(s) and (s[i + 2].isupper() or s[i + 2] in "(0123456789`"))):
            # not an abbreviation (e.g. / i.e. / vs.)
            if not re.search(r"(e\.g|i\.e|vs|etc)\.$", cur):
                out.append(cur.strip()); cur = ""
        i += 1
    if cur.strip():
        out.append(cur.strip())
    return out


def list_ok(s):
    """every item of a "A, B and C aren't declared" list is a resolved Class::Member (nothing else is claimed)"""
    m = re.search(r"(?i)^(?:kit gaps?:\s*)?(.*?)\s+(?:isn.t|aren.t|is not|are not)\s+declared", s)
    if not m:
        return not re.search(r"(?i)Cast<|event|glue|global|\bg_|\bsub_|\boperator\b", s)
    body = re.sub(r"\([^()]*\)", "", m.group(1))
    items = [x.strip() for x in re.split(r",|;|\band\b|\bnor\b|\bor\b", body) if x.strip()]
    for x in items:
        x = re.sub(r"^(?:the|its|a|an)\s+", "", x)
        r = REF.search(x)
        if not r or not resolved(*r.groups()):
            # a bare member name after a qualified one ("FUntypedBulkData::Serialize and RemoveBulkData")
            if re.fullmatch(r"~?\w+", x) and re.search(r"\b%s\s*\(" % re.escape(x), H):
                continue
            return False
    return True


def next_def(t, end):
    m = re.match(r"\s*(?://[^\n]*\n\s*|/\*.*?\*/\s*)*(?:template<[^>]*>\s*)?([^\n;{]*?)\b(\w+)::(~?\w+)\s*\(", t[end:end + 800], re.S)
    return (m.group(2), m.group(3)) if m else None


def fix_text(text, nd):
    """-> new text ('' to drop the comment), or None if unchanged"""
    sents = split_sentences(text)
    out, changed = [], False
    for s in sents:
        if not GAPS.search(s):
            out.append(s); continue
        refs = [(k, n) for k, n in REF.findall(s)]
        realrefs = [(k, n) for k, n in refs if not n.startswith(("sub_", "vf_"))]
        named_now = nd and not nd[1].startswith(("vf_", "sub_"))
        s2 = s
        # parentheticals about a slot that now has a name
        if named_now:
            s2 = re.sub(r"\s*\((?:unnamed in the kit|kit vf_\w+(?:\([^()]*\))?|the kit.s vf_\w+(?:\([^()]*\))?)(?:[;,]\s*([^()]*(?:\([^()]*\)[^()]*)*))?\)",
                        lambda m: (" (" + m.group(1).strip() + ")") if m.group(1) else "", s2)
            s2 = re.sub(r"\s*\(kit vf_\w+(?:\([^()]*\))?[,;]\s*", " (", s2)
        mu = re.match(r"(?i)^unnamed in the kit:\s*(.*)$", s2)
        if mu and realrefs and all(resolved(k, n) for k, n in realrefs):
            rest = mu.group(1)
            # "UE3's X::Y(...)" alone says nothing the header doesn't; with a description after it, keep that
            md = re.match(r"^(?:UE3's\s+)?[^:]*?\b\w+::~?\w+(?:\([^()]*(?:\([^()]*\)[^()]*)*\))?(?:\s*const)?\s*(?:[:;,]\s*(.*))?$", rest)
            if md and not md.group(1):
                changed = True
                continue
            out.append(rest); changed = True
            continue
        if realrefs and all(resolved(k, n) for k, n in realrefs) and list_ok(s2):
            # a sentence that only reports the gap goes; a clause that does is cut
            s3 = re.sub(r",?\s*which the kit(?:.s \w+)? lacks", "", s2)
            s3 = re.sub(r"\s*\((?:not in the kit|unnamed in the kit|missing from the kit)\)", "", s3)
            if GAPS.search(s3):
                if re.match(r"(?i)^(kit gaps?:|unnamed in the kit:)|.*\b(isn.t|aren.t|is not|are not) declared\b|.*\bnot in the kit\b|"
                            r".*\bis the kit.s \w+|.*\bkit lacks\b|.*\bClasses\.h (lacks|has no|doesn.t)", s3):
                    changed = True
                    continue
            s2 = s3
        if s2 != s:
            changed = True
        out.append(s2)
    if not changed:
        return None
    new = " ".join(x for x in out if x)
    new = re.sub(r"^Slot (0x[0-9a-f]+)\.?\s*$", "", new)   # a bare "Slot 0x128." says nothing
    m = re.match(r"^(?:\w+ )?[Ss]lot 0x[0-9a-f]+\s*\((?:UE3'?s?\s+)?(?:\w+::)?(~?\w+)\s*(?:\([^()]*\))?\)\.?$", new)
    if m and nd and m.group(1) == nd[1]:
        new = ""
    return new.strip()


def render(orig, new, indent):
    if not new:
        return ""
    if orig.startswith("//"):
        return "// " + new
    one = "/* " + new + " */"
    if "\n" not in orig and len(indent) + len(one) <= 120:
        return one
    w = textwrap.wrap(new, width=114 - len(indent), break_long_words=False, break_on_hyphens=False)
    return "/* " + ("\n" + indent + " * ").join(w) + " */"


def flatten(c):
    if c.startswith("//"):
        return c[2:].strip()
    body = c[2:-2]
    return re.sub(r"\s+", " ", re.sub(r"\n\s*\*(?!/) ?", "\n", body)).strip()


report = []
helpers = []
nfiles = ncom = ndrop = 0
for f in sorted(glob.glob(ROOT + "/src/**/*.cpp", recursive=True)):
    raw = open(f, encoding="utf-8", newline="").read()
    nl = "\r\n" if "\r\n" in raw else "\n"
    t = raw.replace("\r\n", "\n")
    if not GAPS.search(t):
        continue
    out, pos, any_ = [], 0, False
    for m in re.finditer(r"/\*.*?\*/|//[^\n]*", t, re.S):
        c = m.group(0)
        if not GAPS.search(c) or "@baa" in c:
            continue
        nd = next_def(t, m.end())
        after = t[m.end():m.end() + 200].lstrip()
        if re.match(r"(template\s*<|struct\b|class\b|union\b|inline\b|static\b|extern\b|#define\b|typedef\b|FORCEINLINE\b)", after):
            helpers.append("%s:%d  %s" % (os.path.relpath(f, ROOT), t.count("\n", 0, m.start()) + 1, flatten(c)[:200]))
            continue
        new = fix_text(flatten(c), nd)
        if new is None:
            continue
        ls = t.rfind("\n", 0, m.start()) + 1
        indent = re.match(r"[ \t]*", t[ls:m.start()]).group(0)
        own_line = t[ls:m.start()].strip() == ""
        r = render(c, new, indent)
        s, e = m.start(), m.end()
        if not r:
            if own_line:
                # drop the whole line(s), and a blank line it leaves doubled
                s = ls
                e2 = t.find("\n", e)
                e = len(t) if e2 < 0 else e2 + 1
                if t[e:e + 1] == "\n" and (s < 2 or t[s - 2:s] == "\n\n"):
                    e += 1
            else:
                s = m.start()
                while s > 0 and t[s - 1] in " \t":
                    s -= 1
            ndrop += 1
        out.append(t[pos:s] + r)
        pos = e
        any_ = True
        ncom += 1
        report.append("%s:%d\n  - %s\n  + %s" % (os.path.relpath(f, ROOT), t.count("\n", 0, m.start()) + 1, flatten(c)[:300], new[:300]))
    if any_:
        nfiles += 1
        nt = "".join(out) + t[pos:]
        if WRITE:
            open(f, "w", encoding="utf-8", newline="").write(nt.replace("\n", nl))
if "--report" in sys.argv:
    open(sys.argv[sys.argv.index("--report") + 1], "w", encoding="utf-8").write("\n".join(report) + "\n")
elif not WRITE:
    print("\n".join(report))
if "--helpers" in sys.argv:
    open(sys.argv[sys.argv.index("--helpers") + 1], "w", encoding="utf-8").write("\n".join(helpers) + "\n")
print(len(helpers), "gap comments above local helpers (left alone; --helpers FILE lists them)")
print("%d comments in %d files (%d dropped)%s" % (ncom, nfiles, ndrop, "" if WRITE else " [dry run]"))

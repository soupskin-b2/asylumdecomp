"""Git merge driver for data/*.json.gz, so a rebase onto a header change (or a header change onto a
CI match commit) merges these files instead of stopping on a binary conflict:
    git config merge.jsongz.driver "python tools/ci/gzmerge.py %O %A %B"   (.gitattributes names it)

Three-way: the result is %A with every change from %O to %B applied. Table files ({columns, rows})
merge field by field per row (keyed by the first column, the VA); other objects key by key. When
both sides changed the same field, %B's value wins (in a rebase that is the commit being replayed)."""
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent))
import place  # noqa: E402


def merge(o, a, b):
    if isinstance(b, dict) and "rows" in b and isinstance(a, dict) and "rows" in a:
        O = {r[0]: r for r in (o or {}).get("rows", [])}
        A = {r[0]: list(r) for r in a["rows"]}
        for r in b["rows"]:
            base = O.get(r[0])
            if base is None:
                A[r[0]] = list(r)
            elif r != base:
                cur = A.setdefault(r[0], list(base))
                for k, (x, y) in enumerate(zip(base, r)):
                    if x != y:
                        cur[k] = y
        for k in set(O) - {r[0] for r in b["rows"]}:
            A.pop(k, None)
        return dict(a, rows=[A[k] for k in sorted(A)])
    if isinstance(b, dict) and isinstance(a, dict):
        o = o if isinstance(o, dict) else {}
        out = dict(a)
        for k in set(o) | set(b):
            if k not in b:
                out.pop(k, None)
            elif o.get(k) != b[k]:
                out[k] = merge(o.get(k), a.get(k), b[k]) if isinstance(b[k], dict) and isinstance(a.get(k), dict) else b[k]
        return out
    return b if b != o else a


if __name__ == "__main__":
    O, A, B = (Path(p) for p in sys.argv[1:4])
    o = place.read_gz(O) if O.stat().st_size else None
    place.write_gz(A, merge(o, place.read_gz(A), place.read_gz(B)))

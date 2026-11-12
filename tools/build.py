"""Builds asylum.pyz: the checker's code plus the project files it reads (headers, libraries, data),
one file that runs with `python asylum.pyz`. CI publishes it as the release `checker`.
The version is a hash of everything in it.

    python tools/build.py [OUT_DIR]      -> OUT_DIR/asylum.pyz and OUT_DIR/VERSION (default dist/)
"""
from __future__ import annotations

import hashlib
import sys
import zipfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CODE = ROOT / "tools" / "asylum"
DATA = ["functions", "names", "symbols", "imports", "fingerprints"]


def main():
    out = Path(sys.argv[1]) if len(sys.argv) > 1 else ROOT / "dist"
    out.mkdir(parents=True, exist_ok=True)
    files = [(p, p.relative_to(CODE).as_posix()) for p in sorted(CODE.iterdir()) if p.suffix in (".py", ".json") or p.name == "CHANGES.md"]
    for d in ("include", "third_party"):
        files += [(p, "kit/" + p.relative_to(ROOT).as_posix()) for p in sorted((ROOT / d).rglob("*")) if p.is_file()]
    files += [(ROOT / "data" / (n + ".json.gz"), "kit/data/%s.json.gz" % n) for n in DATA]
    # the version is the content's hash: an unchanged build is the same version (nobody downloads it again)
    h = hashlib.sha256()
    for p, name in files:
        h.update(name.encode() + b"\0" + p.read_bytes().replace(b"\r\n", b"\n") + b"\0")
    version = h.hexdigest()[:16]
    pyz = out / "asylum.pyz"
    with zipfile.ZipFile(pyz, "w") as z:
        z.writestr("VERSION", version + "\n")
        for p, name in files:
            z.write(p, name, zipfile.ZIP_STORED if p.suffix == ".gz" else zipfile.ZIP_DEFLATED)
    (out / "VERSION").write_text(version + "\n", encoding="utf-8")
    print("%s: %d files, %.1f MB, version %s" % (pyz, len(files), pyz.stat().st_size / 1e6, version[:12]))


if __name__ == "__main__":
    main()

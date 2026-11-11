"""Keeping asylum.pyz current: CI publishes each build as the release `checker` (asylum.pyz,
asylum-VERSION.pyz and VERSION, a hash of its content). `get` updates before claiming, so packets, headers and
checks always come from the same version CI uses."""
from __future__ import annotations

import os
import subprocess
import sys
import urllib.request
import zipfile

from paths import PYZ, version

REPO = "https://github.com/soupskin-b2/asylumdecomp"
RELEASE = os.environ.get("ASYLUM_RELEASE", REPO + "/releases/download/checker/")
RAW = "https://raw.githubusercontent.com/soupskin-b2/asylumdecomp/main/"


def download(url: str, timeout: int = 60) -> bytes:
    with urllib.request.urlopen(urllib.request.Request(url, headers={"User-Agent": "asylum"}), timeout=timeout) as r:
        return r.read()


def latest() -> str | None:
    try:
        return download(RELEASE + "VERSION", 15).decode().strip()
    except OSError:
        return None


def update(quiet: bool = False) -> bool:
    """Replaces asylum.pyz with the latest build. True if it changed."""
    if not PYZ:
        if not quiet:
            print("running from a checkout: git pull updates it")
        return False
    v = latest()
    old = version()
    if v is None or v == old:
        if not quiet:
            print("asylum.pyz %s is %s" % (old[:12], "current" if v else "unchecked (no connection)"))
        return False
    new = PYZ.with_name(PYZ.name + ".new")
    # each build is also published under its version's name, which no cache can serve stale
    try:
        body = download(RELEASE + "asylum-%s.pyz" % v, 600)
    except OSError:
        body = download(RELEASE + "asylum.pyz", 600)
    new.write_bytes(body)
    with zipfile.ZipFile(new) as z:
        got = z.read("VERSION").decode().strip()
    if got != v:
        new.unlink()
        raise SystemExit("the download isn't the version announced; try again in a few minutes")
    try:
        os.replace(new, PYZ)
    except OSError:
        raise SystemExit("couldn't replace %s (in use?): the new version is %s; rename it over the old one" % (PYZ, new))
    print("asylum.pyz updated: %s -> %s" % (old[:12], v[:12]))
    return True


def rerun_if_updated() -> None:
    """Before work that must match CI: update, and run the command again with the new version."""
    if PYZ and update(quiet=True):
        sys.exit(subprocess.run([sys.executable, str(PYZ), *sys.argv[1:]]).returncode)

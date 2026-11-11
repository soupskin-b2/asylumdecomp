"""Where things are. Two ways to run:

  asylum.pyz       the one file contributors download: the checker plus the project files it reads
                   (headers, libraries, data), unpacked once per version into HOME/kit/<version>
  tools/asylum     from a checkout of the repository (CI, and anyone changing the checker or headers)

HOME (compilers, compile cache, settings, the unpacked kit) outlives updates."""
from __future__ import annotations

import json
import os
import shutil
import time
import zipfile
from pathlib import Path

HERE = Path(__file__).resolve().parent
PYZ = HERE if HERE.is_file() and zipfile.is_zipfile(HERE) else None
PROG = "python asylum.pyz" if PYZ else "python tools/asylum"

if os.environ.get("ASYLUM_HOME"):
    HOME = Path(os.environ["ASYLUM_HOME"])
elif os.name == "nt":
    HOME = Path(os.environ.get("LOCALAPPDATA", Path.home() / "AppData" / "Local")) / "asylumdecomp"
else:
    HOME = Path(os.environ.get("XDG_DATA_HOME", Path.home() / ".local" / "share")) / "asylumdecomp"
SETTINGS = HOME / "settings.json"


def resource(name: str) -> str:
    """A file shipped next to the checker's code (toolchain.json ...)."""
    if PYZ:
        with zipfile.ZipFile(PYZ) as z:
            return z.read(name).decode("utf-8")
    return (HERE / name).read_text(encoding="utf-8")


def version() -> str:
    """The checker's version: a hash of the build's content ("dev" in a checkout)."""
    return resource("VERSION").strip() if PYZ else "dev"


def _root() -> Path:
    if not PYZ:
        for d in HERE.parents:
            if (d / "include" / "ue3").is_dir():
                return d
        raise SystemExit("asylum: can't find include/ue3 above %s" % HERE)
    kits = HOME / "kit"
    root = kits / version()
    if not (root / ".complete").exists():
        tmp = kits / (version() + ".tmp")
        shutil.rmtree(tmp, ignore_errors=True)
        with zipfile.ZipFile(PYZ) as z:
            for n in z.namelist():
                if n.startswith("kit/") and not n.endswith("/"):
                    z.extract(n, tmp)
        shutil.rmtree(root, ignore_errors=True)
        os.replace(tmp / "kit", root)
        shutil.rmtree(tmp, ignore_errors=True)
        for old in kits.iterdir():  # earlier versions no agent has used for a day
            done = old / ".complete"
            if old != root and (not done.exists() or time.time() - done.stat().st_mtime > 86400):
                shutil.rmtree(old, ignore_errors=True)
    (root / ".complete").touch()  # in use (other folders may run other versions)
    return root


ROOT = _root()


def settings() -> dict:
    try:
        return json.loads(SETTINGS.read_text(encoding="utf-8"))
    except (OSError, ValueError):
        return {}


def save_settings(**kv) -> None:
    s = settings()
    s.update(kv)
    s = {k: v for k, v in s.items() if v is not None}
    HOME.mkdir(parents=True, exist_ok=True)
    SETTINGS.write_text(json.dumps(s, indent=1) + "\n", encoding="utf-8")

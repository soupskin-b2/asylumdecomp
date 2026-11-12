"""site/stats.json from the repository's own data: data/functions.json.gz (sizes, status, unit,
library), data/contributions.jsonl (who matched what, with which model) and
data/credits-baseline.json (matches credited without a line in contributions.jsonl). Then
progress.json and the README's images (svgs.py).

    python tools/ci/stats.py [repo]
"""
from __future__ import annotations

import collections
import gzip
import json
import re
import sys
import time
from pathlib import Path

import svgs

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "asylum"))
import models  # noqa: E402

AREA = {"Core": "Core", "Engine": "Engine", "BmGame": "Game", "BmEditor": "Editor", "UnrealEd": "Editor",
        "Editor": "Editor", "GameFramework": "Engine", "IpDrv": "Engine", "WinDrv": "Engine", "D3D9Drv": "Engine",
        "Launch": "Engine", "GFxUI": "Engine", "OnlineSubsystemSteamworks": "Engine", "OnlineSubsystemLive": "Engine",
        "UnrealScriptTest": "Engine", "WinMain": "Engine"}
NOT_SPECIFIED = "not specified"


def norm(m: str | None) -> str:
    """One display name per model (models.display: claude-opus-5-5 -> Claude Opus 5.5)."""
    return models.display(m) or NOT_SPECIFIED


def area(unit: str | None, lib: str | None) -> str:
    top = unit.split("/")[0] if unit else None
    return AREA.get(top) or (lib.split("-")[0].capitalize() if lib else (top if top and top != "Unknown" else "Unsorted"))


def compute(repo: Path) -> dict:
    with gzip.open(repo / "data" / "functions.json.gz", "rt", encoding="utf-8") as f:
        ft = json.load(f)
    col = {c: k for k, c in enumerate(ft["columns"])}
    tot_f = tot_b = m_f = m_b = 0
    areas = collections.defaultdict(lambda: [0, 0, 0, 0])
    for r in ft["rows"]:
        size, matched = r[col["size"]], r[col["status"]] == "matched"
        tot_f += 1
        tot_b += size
        a = areas[area(r[col["unit"]], r[col["lib"]])]
        a[0] += 1
        a[1] += size
        if matched:
            m_f += 1
            m_b += size
            a[2] += 1
            a[3] += size
    rows = []
    p = repo / "data" / "contributions.jsonl"
    if p.exists():
        rows = [json.loads(l) for l in p.read_text(encoding="utf-8").splitlines() if l.strip()]
    base = json.loads((repo / "data" / "credits-baseline.json").read_text(encoding="utf-8"))
    by = collections.defaultdict(lambda: {"functions": 0, "bytes": 0, "models": collections.Counter()})
    b = by[base["login"]]
    b["functions"] += base["functions"]
    b["bytes"] += base["bytes"]
    for m, n in base["models"].items():
        b["models"][norm(m)] += n
    for cr in rows:
        b = by[cr.get("login") or "anonymous"]
        b["functions"] += 1
        b["bytes"] += cr.get("bytes") or 0
        b["models"][norm(cr.get("model"))] += 1
    models = collections.Counter()
    for v in by.values():
        models.update(v["models"])
    people = [{"login": k, "functions": v["functions"], "bytes": v["bytes"], "models": dict(v["models"].most_common())}
              for k, v in by.items()]
    return {
        "updated": time.strftime("%Y-%m-%d"),
        "functions": {"total": tot_f, "matched": m_f},
        "bytes": {"total": tot_b, "matched": m_b},
        "areas": sorted([{"name": k, "functions": v[0], "bytes": v[1], "matched": v[2], "matched_bytes": v[3]}
                         for k, v in areas.items() if v[0] >= 50], key=lambda x: -x["bytes"]),
        "contributors": sorted(people, key=lambda x: (-x["functions"], x["login"])),
        "models": [{"model": k, "functions": v} for k, v in models.most_common() if v > 0],
    }


def write(repo: Path) -> dict:
    s = compute(repo)
    (repo / "site").mkdir(exist_ok=True)
    (repo / "site" / "stats.json").write_text(json.dumps(s, indent=1) + "\n", encoding="utf-8", newline="\n")
    prog = {"updated": s["updated"], "functions": s["functions"]["total"], "matched": s["functions"]["matched"],
            "bytes": s["bytes"]["total"], "matched_bytes": s["bytes"]["matched"]}
    (repo / "progress.json").write_text(json.dumps(prog, indent=1) + "\n", encoding="utf-8", newline="\n")
    svgs.main(s, repo / "site" / "readme")
    return s


if __name__ == "__main__":
    s = write(Path(sys.argv[1] if len(sys.argv) > 1 else ".").resolve())
    print("%d of %d functions, %d areas, %d contributors, %d models"
          % (s["functions"]["matched"], s["functions"]["total"], len(s["areas"]), len(s["contributors"]), len(s["models"])))

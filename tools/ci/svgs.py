"""README progress images for the asylumdecomp repository: summary (one code-matched bar for
the top), totals (code, functions), areas, progress (all three in one),
contributors and models. Each comes in a dark and a light variant;
the README picks one with <picture> (GitHub serves the one matching the viewer's theme).

    python tools/ci/svgs.py site/stats.json site/readme   (stats.py runs it after each integration)
"""
import json
import os
import sys
from html import escape

W = 860
FONT = "ui-monospace, SFMono-Regular, 'Cascadia Mono', Consolas, 'DejaVu Sans Mono', monospace"
THEMES = {
    "dark": {"fg": "#e6edf3", "dim": "#8d96a0", "track": "#262c33", "line": "#3d444d", "fill": "#e6edf3",
             "shades": ["#e6edf3", "#b7bec6", "#8d96a0", "#6b737c", "#4f565e", "#3a4047"]},
    "light": {"fg": "#1f2328", "dim": "#59636e", "track": "#eaeef2", "line": "#d1d9e0", "fill": "#1f2328",
              "shades": ["#1f2328", "#424a53", "#656d76", "#8c959f", "#afb8c1", "#d0d7de"]},
}
CH = 8.4          # width of one character at 14px in a monospace font (for truncating)


def fmt_bytes(n):
    if n >= 1048576:
        return "%.1f MB" % (n / 1048576)
    return "%d KB" % round(n / 1024) if n >= 1024 else "%d B" % n


def cut(s, n):
    return s if len(s) <= n else s[:n - 1] + "\u2026"


class Svg:
    def __init__(self, t, h):
        self.t, self.h, self.out = THEMES[t], h, []

    def text(self, x, y, s, cls="fg", size=14, anchor="start", weight="normal"):
        self.out.append('<text x="%g" y="%g" font-size="%g" fill="%s" text-anchor="%s" font-weight="%s">%s</text>'
                        % (x, y, size, self.t[cls], anchor, weight, escape(str(s))))

    def rect(self, x, y, w, h, color, stroke=None):
        self.out.append('<rect x="%g" y="%g" width="%g" height="%g" fill="%s"%s/>'
                        % (x, y, max(w, 0), h, color, ' stroke="%s"' % stroke if stroke else ""))

    def line(self, x1, y1, x2, y2, cls="line", w=1):
        self.out.append('<line x1="%g" y1="%g" x2="%g" y2="%g" stroke="%s" stroke-width="%g"/>' % (x1, y1, x2, y2, self.t[cls], w))

    def meter(self, y, label, frac, value, big=False, label_w=150, val_w=200):
        h = 16 if big else 10
        x0, x1 = label_w, W - val_w - 12
        self.text(0, y + h - 2, cut(label, int(label_w / CH) - 1), "fg" if big else "dim")
        self.rect(x0, y, x1 - x0, h, self.t["track"], self.t["line"])
        self.rect(x0, y, (x1 - x0) * min(max(frac, 0), 1), h, self.t["fill"])
        self.text(W, y + h - 2, value, anchor="end")

    def heading(self, y, s):
        self.text(0, y, ">", "dim", 18, weight="bold")
        self.text(20, y, s, "fg", 18, weight="bold")

    def render(self):
        return ('<svg xmlns="http://www.w3.org/2000/svg" width="%d" height="%d" viewBox="0 0 %d %d" font-family="%s">\n%s\n</svg>\n'
                % (W, self.h, W, self.h, escape(FONT, quote=True), "\n".join(self.out)))


def progress(s, t):
    areas = s["areas"]
    g = Svg(t, 150 + 30 * len(areas))
    f, b = s["functions"], s["bytes"]
    g.meter(10, "functions", f["matched"] / f["total"],
            "%s / %s  %.1f%%" % (format(f["matched"], ","), format(f["total"], ","), 100 * f["matched"] / f["total"]), big=True, val_w=260)
    g.meter(42, "code", b["matched"] / b["total"],
            "%s / %s  %.1f%%" % (fmt_bytes(b["matched"]), fmt_bytes(b["total"]), 100 * b["matched"] / b["total"]), big=True, val_w=260)
    g.text(0, 104, "by area", "dim", 13)
    y = 120
    for a in areas:
        g.meter(y, a["name"], *_area(a), val_w=260)
        y += 30
    g.text(W, y + 8, "by code", "dim", 12, anchor="end")
    return g.render()


def _area(a):
    return a["matched_bytes"] / a["bytes"], "%s / %s  %.1f%%" % (fmt_bytes(a["matched_bytes"]), fmt_bytes(a["bytes"]), 100 * a["matched_bytes"] / a["bytes"])


def _code(s):
    b = s["bytes"]
    return b["matched"] / b["total"], "%s / %s  %.1f%%" % (fmt_bytes(b["matched"]), fmt_bytes(b["total"]), 100 * b["matched"] / b["total"])


def _funcs(s):
    f = s["functions"]
    return f["matched"] / f["total"], "%s / %s  %.1f%%" % (format(f["matched"], ","), format(f["total"], ","), 100 * f["matched"] / f["total"])


def summary(s, t):
    """One bar for the top of the README: code matched."""
    g = Svg(t, 30)
    g.meter(6, "code matched", *_code(s), big=True, val_w=260)
    return g.render()


def totals(s, t):
    """Code matched, then functions matched."""
    g = Svg(t, 70)
    g.meter(10, "code", *_code(s), big=True, val_w=260)
    g.meter(42, "functions", *_funcs(s), big=True, val_w=260)
    return g.render()


def areas(s, t):
    """Code matched in each area (original source module or library)."""
    rows = s["areas"]
    g = Svg(t, 34 + 30 * len(rows))
    y = 8
    for a in rows:
        g.meter(y, a["name"], *_area(a), val_w=260)
        y += 30
    g.text(W, y + 8, "by code", "dim", 12, anchor="end")
    return g.render()


def contributors(s, t, top=25):   # capped so the image stays small whatever the sign-ups
    people = s["contributors"][:top]
    rows = []
    for p in people:
        ms = list(p["models"].items())
        txt = ", ".join("%s %s" % (k, format(v, ",")) for k, v in ms[:3])
        if len(ms) > 3:
            txt += ", +%d more" % (len(ms) - 3)
        rows.append((p, txt))
    g = Svg(t, 46 + 30 * len(rows))
    cols = [(0, "#", "start"), (30, "account", "start"), (420, "functions", "end"), (510, "code", "end"), (530, "models", "start")]
    for x, h, a in cols:
        g.text(x, 18, h, "dim", 13, a)
    g.line(0, 28, W, 28)
    y = 52
    for k, (p, txt) in enumerate(rows, 1):
        g.text(0, y, k, "fg")
        g.text(30, y, cut(p["login"], 44), "fg", weight="bold")
        g.text(420, y, format(p["functions"], ","), anchor="end")
        g.text(510, y, fmt_bytes(p["bytes"]), anchor="end")
        g.text(530, y, cut(txt, int((W - 530) / 7.2)), "dim", 12)
        g.line(0, y + 10, W, y + 10)
        y += 30
    return g.render()


def models(s, t, top=20):
    """Code matched per model, as bars: the top 19 and 'other' when there are more than 20."""
    ms = s["models"]
    shown = ms[:top - 1] if len(ms) > top else ms
    rest = sum(m["bytes"] for m in ms[len(shown):])
    items = [(m["model"], m["bytes"]) for m in shown] + ([("other", rest)] if rest else [])
    g = Svg(t, 30 + 30 * len(items))
    lw = 280
    mx = max([v for _, v in items] or [1])
    y = 20
    for name, v in items:
        g.text(0, y, cut(name, int(lw / CH) - 1), "dim")
        bx0, bx1 = lw + 12, W - 90
        g.rect(bx0, y - 10, bx1 - bx0, 10, g.t["track"], g.t["line"])
        g.rect(bx0, y - 10, (bx1 - bx0) * v / mx, 10, g.t["fill"])
        g.text(W, y, fmt_bytes(v), anchor="end")
        y += 30
    g.text(W, y - 4, "by code", "dim", 12, anchor="end")
    return g.render()


def main(stats, out_dir):
    s = stats if isinstance(stats, dict) else json.load(open(stats, encoding="utf-8"))
    os.makedirs(out_dir, exist_ok=True)
    for name, fn in (("progress", progress), ("summary", summary), ("totals", totals), ("areas", areas),
                     ("contributors", contributors), ("models", models)):
        for t in THEMES:
            with open(os.path.join(out_dir, "%s-%s.svg" % (name, t)), "w", encoding="utf-8", newline="\n") as fh:
                fh.write(fn(s, t))


if __name__ == "__main__":
    main(sys.argv[1], sys.argv[2])

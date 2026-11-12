"""Model names as the project shows them: the vendor's display name ("Claude Opus 5.5", "GPT-6.1 Sol",
"DeepSeek V4.1 Flash", "Qwen3.8 27B"). Any common spelling of a known family becomes that form
(claude-opus-5-5, anthropic/claude-opus-5.5, deepseek/deepseek-v4.1-flash-1017, qwen3.8-27b); other
lowercase-hyphenated names (the service stores them so) are written out word by word, with vendors'
spellings (minimax-m3.1-flash -> MiniMax M3.1 Flash)."""
import re

TOOLING = "Tooling"  # matched by the maintainer's scripts, no model

_FAMILIES = [
    (r"claude-(opus|sonnet|haiku)-(\d+)[.-](\d+)", lambda m: "Claude %s %s.%s" % (m[1].capitalize(), m[2], m[3])),
    (r"gpt-(\d+(?:\.\d+)?)(?:-(\w+))?", lambda m: "GPT-%s%s" % (m[1], " " + m[2].capitalize() if m[2] else "")),
    (r"deepseek-v4\.1", lambda m: "DeepSeek V4.1 Flash"),  # early runs left out the variant
    (r"deepseek-v(\d+(?:\.\d+)?)(?:-(flash|pro|chat|coder))?", lambda m: "DeepSeek V%s%s" % (m[1], " " + m[2].capitalize() if m[2] else "")),
    (r"qwen(\d+(?:\.\d+)?)-(\d+)b", lambda m: "Qwen%s %sB" % (m[1], m[2])),
    (r"muse-spark(?:-(\d+(?:\.\d+)?))?", lambda m: "Muse Spark %s" % (m[1] or "1.3")),  # early runs left out the version
    (r"tooling", lambda m: TOOLING),
]
# how vendors write their names; any other word is capitalized ("m3.1" -> "M3.1", "27b" -> "27B")
_BRANDS = {"minimax": "MiniMax", "deepseek": "DeepSeek", "gpt": "GPT", "glm": "GLM", "openai": "OpenAI",
           "xai": "xAI", "llama": "Llama", "kimi": "Kimi", "mistral": "Mistral", "gemini": "Gemini"}


def _words(key):
    """A name nobody listed, from its lowercase-hyphenated form: minimax-m3.1-flash -> MiniMax M3.1 Flash."""
    out = []
    for w in key.split("-"):
        if w in _BRANDS:
            out.append(_BRANDS[w])
        elif re.fullmatch(r"\d+(\.\d+)?[bk]", w):
            out.append(w.upper())
        else:
            out.append(w[:1].upper() + w[1:])
    return " ".join(out)


def display(name):
    """The display form of a model name, or None when there is none."""
    s = (name or "").strip()
    if not s:
        return None
    key = s.split("/")[-1].lower().replace(" ", "-").replace("_", "-")
    key = re.sub(r"-\d{4}$", "", key)  # date/build suffix: -1017
    for pat, fmt in _FAMILIES:
        m = re.fullmatch(pat, key)
        if m:
            return fmt(m)
    if re.fullmatch(r"[a-z0-9.]+(-[a-z0-9.]+)*", key):
        return _words(key)
    return s

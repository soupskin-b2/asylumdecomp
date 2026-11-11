"""The project's service (a Cloudflare Worker): sign-up, listing, packets, submissions."""
from __future__ import annotations

import hashlib
import json
import os
import platform
import re
import sys
import time
import urllib.error
import urllib.parse
import urllib.request
import uuid

from pathlib import Path

from paths import PROG, save_settings, settings

URL = os.environ.get("ASYLUM_URL", "https://api.asylumdecomp.workers.dev").rstrip("/")


class ApiError(Exception):
    pass


FOLDER_KEY = Path(".asylum") / "key"


def account_key() -> str | None:
    """The key signup saved for this machine's account: it makes the per-folder keys."""
    return settings().get("key")


def key(create: bool = True) -> str | None:
    """This agent's key: ASYLUM_KEY, else this folder's (.asylum/key). A folder without one gets its own,
    made with the account's key, so agents in separate folders keep their claims apart by themselves."""
    if os.environ.get("ASYLUM_KEY"):
        return os.environ["ASYLUM_KEY"].strip()
    if FOLDER_KEY.is_file():
        return FOLDER_KEY.read_text(encoding="utf-8").strip()
    if not create or not account_key():
        return None
    here = Path.cwd().resolve()
    name = (re.sub(r"[^\w.-]", "", here.name)[:24] or "folder") + "-" + hashlib.sha1(str(here).lower().encode()).hexdigest()[:6]
    r = call("POST", "/keys", {"name": name}, token=account_key())
    FOLDER_KEY.parent.mkdir(exist_ok=True)
    FOLDER_KEY.write_text(r["key"] + "\n", encoding="utf-8")
    print("this folder's key: %s (saved in %s; another folder gets its own)" % (r["name"], FOLDER_KEY), file=sys.stderr)
    return r["key"]


def call(method: str, path: str, body: dict | None = None, auth: bool = True, query: dict | None = None,
         token: str | None = None) -> dict:
    url = URL + path
    if query:
        q = {k: v for k, v in query.items() if v is not None}
        if q:
            url += "?" + urllib.parse.urlencode(q)
    headers = {"User-Agent": "asylum-checker/1", "Content-Type": "application/json"}
    if auth:
        k = token or key()
        if not k:
            raise ApiError("no key: run `%s signup` (or set ASYLUM_KEY)" % PROG)
        headers["Authorization"] = "Bearer " + k
    data = json.dumps(body).encode() if body is not None else None
    # retries are safe: retrieve hands back the same claim, submit carries a request id
    for attempt in range(4):
        try:
            with urllib.request.urlopen(urllib.request.Request(url, data, headers, method=method), timeout=60) as r:
                return json.loads(r.read() or b"{}")
        except urllib.error.HTTPError as e:
            try:
                msg = json.loads(e.read()).get("error") or e.reason
            except ValueError:
                msg = e.reason
            if e.code == 429 or e.code >= 500:
                wait = int(e.headers.get("Retry-After") or 5 * (attempt + 1))
                if attempt < 3 and wait <= 60:
                    time.sleep(wait)
                    continue
            raise ApiError("%s (HTTP %d)" % (msg, e.code))
        except OSError as e:
            if attempt == 3:
                raise ApiError("can't reach %s: %s" % (URL, e))
            time.sleep(3 * (attempt + 1))
    raise ApiError("unreachable")


def signup() -> str | None:
    """GitHub's device flow, in two runs so an agent can't sit waiting while its human sees nothing:
    the first opens the page, prints the code and returns; the next (once they approved) gets the key.
    Returns the login when signed up, None while waiting for the human."""
    s = settings()
    p = s.get("signup")
    if p and p.get("expires", 0) > time.time():
        # finish: poll for up to a minute (the human may still be clicking)
        end = time.time() + 60
        while True:
            r = call("POST", "/signup/poll", {"poll": p["poll"], "machine": re.sub(r"[^\w.-]", "", platform.node())[:20]}, auth=False)
            if r.get("key"):
                save_settings(key=r["key"], signup=None)
                return r["login"]
            if r.get("status") not in ("authorization_pending", "slow_down", "pending"):
                save_settings(signup=None)
                raise ApiError("sign-up failed (%s): run `%s signup` to start again" % (r.get("status"), PROG))
            if time.time() > end:
                break
            time.sleep(max(5, p.get("interval", 5)) + (5 if r.get("status") == "slow_down" else 0))
        print("Not approved yet. %s, then run `%s signup` again." % (_steps(p), PROG))
        return None
    r = call("POST", "/signup", {}, auth=False)
    p = {"poll": r["poll"], "code": r["user_code"], "uri": r["verification_uri"], "interval": r.get("interval", 5),
         "expires": time.time() + 870}
    save_settings(signup=p)
    try:
        import webbrowser
        opened = webbrowser.open(p["uri"])
    except Exception:
        opened = False
    print("""
ACTION NEEDED: sign in with GitHub (once per machine)

  1. Open %s%s
  2. Enter the code   %s
  3. Click "Authorize" (asylumdecomp only learns your GitHub login)

The code is valid for 15 minutes.

Agent: stop here and tell your human the link and code above, in your reply to them. When they say
they've approved, run `%s signup` again to finish.
""" % (p["uri"], " (a browser tab should have opened)" if opened else "", p["code"], PROG))
    return None


def _steps(p: dict) -> str:
    return "Open %s, enter the code %s and click Authorize" % (p["uri"], p["code"])


def request_id() -> str:
    return uuid.uuid4().hex

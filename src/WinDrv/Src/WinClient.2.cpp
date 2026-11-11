// WinClient.cpp (part 2 of 4): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct RECT { int l,t,r,b; };

extern "C" {
__declspec(dllimport) void* __stdcall GetForegroundWindow();
__declspec(dllimport) int __stdcall GetCursorInfo(void*);
__declspec(dllimport) int __stdcall GetClipCursor(RECT*);
__declspec(dllimport) int __stdcall GetClientRect(void*, RECT*);
__declspec(dllimport) int __stdcall MapWindowPoints(void*, void*, RECT*, unsigned);
__declspec(dllimport) int __stdcall ClipCursor(const RECT*);
}

extern RECT g_026cca78;
struct L { RECT rc; int pad; RECT clip; };

struct C {
    int pad0;
    struct O { virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8();
      virtual int f9(); virtual void a10(); virtual void a11(); virtual void a12(); virtual void a13(); virtual void a14(); virtual void a15(); virtual void a16(); virtual void a17(); virtual void a18(); virtual int f19(); } o;
    char pad1[0x60-8];
    void* hwnd;
    char pad2[0x488-0x64];
    int f488;
    char pad3[0x494-0x48c];
    RECT r;
    void sub_00eb42c0();
};

// @baa 0x00eb42c0
void C::sub_00eb42c0()
{
    L l;
    if (GetForegroundWindow() != hwnd) {
        l.rc.l = 0x14;
        GetCursorInfo(&l);
    }
    int b = GetClipCursor(&l.clip) != 0;
    if (o.f9() && (o.f19() || f488)) {
        GetClientRect(hwnd, &l.rc);
        MapWindowPoints(hwnd, 0, &l.rc, 2);
        ClipCursor(&l.rc);
        if (GetClipCursor(&l.clip)) {
            g_026cca78 = l.rc;
            r = l.rc;
            return;
        }
        g_026cca78.b = 0; g_026cca78.l = 0; g_026cca78.t = 0;
        r.r = 0; r.b = 0; r.l = 0; r.t = 0;
        ClipCursor(0);
        return;
    }
    if (!b || (g_026cca78.t == r.t && g_026cca78.l == r.l && g_026cca78.b == r.b && g_026cca78.r == r.r)) {
        g_026cca78.b = 0; g_026cca78.l = 0; g_026cca78.t = 0;
        r.r = 0; r.b = 0; r.l = 0; r.t = 0;
        ClipCursor(0);
    }
}

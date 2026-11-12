// UnThreadingWindows.cpp: 7 functions
// Placed here by: neighbours 5, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

typedef void* HANDLE;

extern "C" __declspec(dllimport) int __stdcall WaitForSingleObject(HANDLE, unsigned int);
struct C {
    int pad;
    HANDLE h;
    void sub_005ec0e0();
};

// @baa 0x005ec0e0
void C::sub_005ec0e0(void)
{
    WaitForSingleObject(h, 0xffffffff);
}

struct C_005ec0f0 {
    virtual ~C_005ec0f0() {}
    void* f;
    void sub_005ec0f0();
};

extern "C" __declspec(dllimport) void __stdcall PulseEvent(void*);
// @baa 0x005ec0f0
void C_005ec0f0::sub_005ec0f0()
{
    PulseEvent(f);
}

extern char g_01e9f654[];
struct C_005ec1f0 { C_005ec1f0* sub_005ec1f0(void); };

// @baa 0x005ec1f0
C_005ec1f0* C_005ec1f0::sub_005ec1f0(void) { *(int*)((char*)this + 0) = (int)g_01e9f654; return this; }

extern char g_01e9f660[];
struct C_005ec220 { C_005ec220* sub_005ec220(void); };

// @baa 0x005ec220
C_005ec220* C_005ec220::sub_005ec220(void) { *(int*)((char*)this + 0) = (int)g_01e9f660; return this; }

extern char g_01e9f670[];
struct C_005ec230 { C_005ec230* sub_005ec230(void); };

// @baa 0x005ec230
C_005ec230* C_005ec230::sub_005ec230(void) { *(int*)((char*)this + 0) = (int)g_01e9f670; return this; }

int sub_0053df40(...);
int sub_006311e0(...);
extern int g_01e9c708;
extern char g_01e9f82c[];
struct T {
    void *vt; int a, b, c, d, e, f;
    T() : vt(g_01e9f82c), a(0), b(0), c(0), d(0), f(0) { }
    void *operator new(unsigned int s) { return (void *)sub_0053df40(s, 8); }
    int sub_005f0070(int, int, int, int, int, int);
};

struct C_005f0230 {
    T *sub_005f0230(T *, int, int, int, int, int);
    virtual void v0();
    virtual void v1(T *);
};

// @baa 0x005f0230
T *C_005f0230::sub_005f0230(T *r, int a2, int a3, int a4, int a5, int a6)
{
    if (r == 0) {
        sub_006311e0("InRunnable",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnThreadingWindows.cpp",
                 0x305, &g_01e9c708);
    }
    T *t = new T();
    if (t != 0 && !t->sub_005f0070((int)r, a2, a3, a4, a5, a6)) {
        this->v1(t);
        t = 0;
    }
    return t;
}

// UnThreadingWindows.cpp
struct C_005ec200 {
    virtual void v0(int);
    void *p;
};

// @baa 0x005ec200
// @baa 0x005ec200
void __stdcall sub_005ec200(C_005ec200 *Object)
{
    if (Object != 0) {
        Object->v0(1);
    }
}

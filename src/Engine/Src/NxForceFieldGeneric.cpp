// NxForceFieldGeneric.cpp: 3 functions
// Placed here by: file 2, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

extern undefined4 g_026b62b8;
extern char g_01fb38d8[];
extern undefined4 g_01fbc320;
int sub_006311e0(const char* expr, const char* file, int line, ...);
void sub_009d78d0(void*);
void* sub_0053df40(int, int);
struct V3 { float x, y, z; void zero() { x = y = z = 0.0f; } };

struct M33 { float m[9]; void zero() { for (int i = 0; i < 9; ++i) m[i] = 0.0f; } };

struct FDesc {
    V3 a;
    M33 b;
    V3 c;
    M33 d;
    V3 e;
    float f;
    V3 g, h, i;
    int j;
    int pad;
};

struct FRef {
    void* vtbl;
    void* ptr;
};

struct C {
    void sub_00a3c180();
    void* sub_009eef90();
    void sub_00d8b440();
};

struct SScene {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v0a(); virtual void v0b();
    virtual void v0c(); virtual void v0d(); virtual void v0e(); virtual void v0f();
    virtual void v10(); virtual void v11(); virtual void* v12(void*);
};

// @baa 0x00a3c180
void C::sub_00a3c180()
{
    void* scene = ((C*)*(void**)((char*)g_026b62b8 + 0x15c))->sub_009eef90();

    FDesc d;
    d.a.zero();
    d.b.zero();
    d.c.zero();
    d.d.zero();
    d.e.zero();
    d.g.zero();
    d.h.zero();
    d.i.zero();
    d.f = 1.0f;
    d.j = 0;

    if (*(void**)((char*)this + 0x294) != 0)
        sub_006311e0("LinearKernel == NULL",
            "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\NxForceFieldGeneric.cpp",
            0x21, &g_01fbc320);

    sub_009d78d0(scene);

    void* kernel = ((SScene*)scene)->v12(&d);

    FRef* r = (FRef*)sub_0053df40(8, 8);
    if (r) r->vtbl = g_01fb38d8;
    else r = 0;
    r->ptr = kernel;
    *(void**)((char*)kernel + 4) = r;
    *(void**)((char*)this + 0x294) = r;

    this->sub_00d8b440();
}

// @baa 0x00a50460
IMPLEMENT_CLASS_AT(ANxForceFieldGeneric, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\NxForceFieldGeneric.cpp", 14);

// @baa 0x00a505e0

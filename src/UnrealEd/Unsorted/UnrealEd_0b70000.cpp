// UnrealEd_0b70000.cpp: 42 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct Target {
    virtual int v0();
    virtual int v1(int a);
    virtual int v2(int a);
};

struct S {
    int f0;
    Target *f1;
    int sub_00b71b60(int a);
};

// @baa 0x00b71b60
int S::sub_00b71b60(int a)
{
    return f1->v2(a);
}

struct Target_00b71b70 {
    virtual ~Target_00b71b70() = 0;
    virtual void v1() = 0;
    virtual void v2() = 0;
    virtual void v3(int x, int y, int z) = 0;
};

struct C {
    char pad[4];
    Target_00b71b70* p; // offset 4

    void sub_00b71b70(int a, int b, int c) {
        p->v3(a, b, c);
    }

    void caller() {
        sub_00b71b70(1, 2, 3);
    }
};

extern C* g_ptr;
// @baa 0x00b71b70
void ref_user() { g_ptr->caller(); }

struct T {
    virtual void f0();
};

struct C_00b71b80 {
    DWORD pad0;
    T *p;
    void sub_00b71b80();
};

// @baa 0x00b71b80
void C_00b71b80::sub_00b71b80() {
    p->f0();
}

extern char g_01ecdfdc[];
struct C_00b71b90 { void sub_00b71b90(void); };

// @baa 0x00b71b90
void C_00b71b90::sub_00b71b90(void) { *(int*)((char*)this + 0) = (int)g_01ecdfdc; }

struct C_00b71ba0 { int sub_00b71ba0(void); };

// @baa 0x00b71ba0
int C_00b71ba0::sub_00b71ba0(void) { return *(int*)((char*)this + 16); }

struct C_00b71bb0 { char* sub_00b71bb0(void); };

// @baa 0x00b71bb0
char* C_00b71bb0::sub_00b71bb0(void) { return (char*)this + 32; }

struct C_00b71be0 { float sub_00b71be0(void); };

// @baa 0x00b71be0
float C_00b71be0::sub_00b71be0(void) { return *(float*)((char*)this + 96); }

struct C_00b71bf0 { int sub_00b71bf0(void); };

// @baa 0x00b71bf0
int C_00b71bf0::sub_00b71bf0(void) { return *(int*)((char*)this + 152); }

struct C_00b71c00 {
    uint sub_00b71c00();
};

// @baa 0x00b71c00
uint C_00b71c00::sub_00b71c00(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0xa0) & 1;
}

struct C_00b71c10 { char* sub_00b71c10(void); };

// @baa 0x00b71c10
char* C_00b71c10::sub_00b71c10(void) { return (char*)this + 200; }

int sub_007b5800(...);
int sub_007c0de0(void);
extern undefined4 g_026b52f4;
// @baa 0x00b71c20
int sub_00b71c20(void)
{
  if (g_026b52f4 == 0) {
    g_026b52f4 = sub_007b5800(L"Engine");
    sub_007c0de0();
  }
  return g_026b52f4;
}

struct C_00b71ce0 {
    int sub_00b71ce0();
};

// @baa 0x00b71ce0
int C_00b71ce0::sub_00b71ce0()
{
    return *(unsigned char *)((char *)this + 0xc5);
}

// @baa 0x00b71cf0
int sub_00b71cf0(int a0, int a1) { return a1; }

// @baa 0x00b71d00
int sub_00b71d00(int a0, int a1) { return a1; }

// @baa 0x00b71d10
int sub_00b71d10(int a0, int a1) { return a1; }

// @baa 0x00b71d40
IMPLEMENT_CLASS_AT(UDistributionVectorParticleParameter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 31);

// @baa 0x00b71db0
// @baa 0x00b71de0
int sub_00b71de0(int a0, int a1) { return a1; }

// @baa 0x00b71df0
int sub_00b71df0(int a0, int a1) { return a1; }

// @baa 0x00b71e00
int sub_00b71e00(int a0, int a1) { return a1; }

// @baa 0x00b71e10
int sub_00b71e10(int a0, int a1) { return a1; }

// @baa 0x00b71e20
int sub_00b71e20(int a0, int a1) { return a1; }

// @baa 0x00b71e30
int sub_00b71e30(int a0, int a1) { return a1; }

// @baa 0x00b71e40
int sub_00b71e40(int a0, int a1) { return a1; }

// @baa 0x00b71e50
int sub_00b71e50(int a0, int a1) { return a1; }

// @baa 0x00b71e60
int sub_00b71e60(int a0, int a1) { return a1; }

// @baa 0x00b71e70
int sub_00b71e70(int a0, int a1) { return a1; }

// @baa 0x00b71e80
int sub_00b71e80(int a0, int a1) { return a1; }

// @baa 0x00b71e90
int sub_00b71e90(int a0, int a1) { return a1; }

// @baa 0x00b71ea0
int sub_00b71ea0(int a0, int a1) { return a1; }

// @baa 0x00b71eb0
int sub_00b71eb0(int a0, int a1) { return a1; }

// @baa 0x00b71ec0
int sub_00b71ec0(int a0, int a1) { return a1; }

// @baa 0x00b71ed0
int sub_00b71ed0(int a0, int a1) { return a1; }

// @baa 0x00b71ee0
int sub_00b71ee0(int a0, int a1) { return a1; }

// @baa 0x00b71ef0
int sub_00b71ef0(int a0, int a1) { return a1; }

// @baa 0x00b71f00
int sub_00b71f00(int a0, int a1) { return a1; }

// @baa 0x00b71f10
int sub_00b71f10(int a0, int a1) { return a1; }

// @baa 0x00b71f20
int sub_00b71f20(int a0, int a1) { return a1; }

// @baa 0x00b71f30
int sub_00b71f30(int a0, int a1) { return a1; }

// @baa 0x00b71f40
int sub_00b71f40(int a0, int a1) { return a1; }

// @baa 0x00b71f50
int sub_00b71f50(int a0, int a1) { return a1; }

// @baa 0x00b71f60
int sub_00b71f60(int a0, int a1) { return a1; }

// FCollada_0ec0000.cpp: 162 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

struct C {
    void sub_00ec1990();
};

// @baa 0x00ec1990
void C::sub_00ec1990(void)
{
    int param_1 = (int)this;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  return;
}

struct C_00ec19a0 { int sub_00ec19a0(void); };

// @baa 0x00ec19a0
int C_00ec19a0::sub_00ec19a0(void) { return *(int*)((char*)this + 32); }

void sub_01811b20();
// @baa 0x00ec19b0
void sub_00ec19b0(void) { sub_01811b20(); }

// @baa 0x00ec19c0
void sub_00ec19c0(void) { sub_01811b20(); }

struct C_00ec19d0 { char* sub_00ec19d0(void); };

// @baa 0x00ec19d0
char* C_00ec19d0::sub_00ec19d0(void) { return (char*)this + 88; }

extern char g_02421c20[];
struct C_00ec19e0 { C_00ec19e0* sub_00ec19e0(void); };

// @baa 0x00ec19e0
C_00ec19e0* C_00ec19e0::sub_00ec19e0(void) { *(int*)((char*)this + 0) = (int)g_02421c20; return this; }

struct C_00ec19f0 { void sub_00ec19f0(void); };

// @baa 0x00ec19f0
void C_00ec19f0::sub_00ec19f0(void) { *(int*)((char*)this + 0) = (int)g_02421c20; }

struct C_00ec1a00 {
    void sub_00ec1a00();
};

// @baa 0x00ec1a00
void C_00ec1a00::sub_00ec1a00(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x20;
  return;
}

extern char g_027b7d34[];
// @baa 0x00ec1a40
int sub_00ec1a40(void) { return (int)g_027b7d34; }

struct C_00ec1a50 { void sub_01818ec0(int); C_00ec1a50 *sub_00ec1a50(int); };

// @baa 0x00ec1a50
C_00ec1a50 *C_00ec1a50::sub_00ec1a50(int a) { sub_01818ec0(a); return this; }

struct C_00ec1a70 { void sub_01818ec0(int); C_00ec1a70 *sub_00ec1a70(int); };

// @baa 0x00ec1a70
C_00ec1a70 *C_00ec1a70::sub_00ec1a70(int a) { sub_01818ec0(a); return this; }

struct C_00ec1a90 { char* sub_00ec1a90(void); };

// @baa 0x00ec1a90
char* C_00ec1a90::sub_00ec1a90(void) { return (char*)this + 136; }

struct C_00ec1aa0 { char* sub_00ec1aa0(void); };

// @baa 0x00ec1aa0
char* C_00ec1aa0::sub_00ec1aa0(void) { return (char*)this + 156; }

void __stdcall sub_018204d0(char *);
extern char g_01e66a54[];
// @baa 0x00ec1af0
void sub_00ec1af0(void)
{
  sub_018204d0(g_01e66a54);
}

void sub_01824b20();
// @baa 0x00ec1b00
void sub_00ec1b00(void) { sub_01824b20(); }

struct C_00ec1b10 { char* sub_00ec1b10(void); };

// @baa 0x00ec1b10
char* C_00ec1b10::sub_00ec1b10(void) { return (char*)this + 68; }

extern char g_027b7d64[];
// @baa 0x00ec1b20
int sub_00ec1b20(void) { return (int)g_027b7d64; }

struct C_00ec1b30 { void sub_01818f50(int); C_00ec1b30 *sub_00ec1b30(int); };

// @baa 0x00ec1b30
C_00ec1b30 *C_00ec1b30::sub_00ec1b30(int a) { sub_01818f50(a); return this; }

struct C_00ec1b50 { void sub_01818ec0(int); C_00ec1b50 *sub_00ec1b50(int); };

// @baa 0x00ec1b50
C_00ec1b50 *C_00ec1b50::sub_00ec1b50(int a) { sub_01818ec0(a); return this; }

struct C_00ec1b70 { void sub_01818ec0(int); C_00ec1b70 *sub_00ec1b70(int); };

// @baa 0x00ec1b70
C_00ec1b70 *C_00ec1b70::sub_00ec1b70(int a) { sub_01818ec0(a); return this; }

struct C_00ec1b90 { void sub_01818ec0(int); C_00ec1b90 *sub_00ec1b90(int); };

// @baa 0x00ec1b90
C_00ec1b90 *C_00ec1b90::sub_00ec1b90(int a) { sub_01818ec0(a); return this; }

struct C_00ec1bb0 { void sub_01818ec0(int); C_00ec1bb0 *sub_00ec1bb0(int); };

// @baa 0x00ec1bb0
C_00ec1bb0 *C_00ec1bb0::sub_00ec1bb0(int a) { sub_01818ec0(a); return this; }

struct C_00ec1bd0 { void sub_01818ec0(int); C_00ec1bd0 *sub_00ec1bd0(int); };

// @baa 0x00ec1bd0
C_00ec1bd0 *C_00ec1bd0::sub_00ec1bd0(int a) { sub_01818ec0(a); return this; }

struct C_00ec1bf0 {
    void sub_00ec1bf0(undefined4);
    int sub_01818f50(int);
};

// @baa 0x00ec1bf0
void C_00ec1bf0::sub_00ec1bf0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_00ec1bf0 *)(((char *)this + 0x6c)))->sub_01818f50(param_2);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  return;
}

struct C_00ec1c10 { char* sub_00ec1c10(void); };

// @baa 0x00ec1c10
char* C_00ec1c10::sub_00ec1c10(void) { return (char*)this + 140; }

struct C_00ec1c40 { char* sub_00ec1c40(void); };

// @baa 0x00ec1c40
char* C_00ec1c40::sub_00ec1c40(void) { return (char*)this + 188; }

struct C_00ec1cb0 { char* sub_00ec1cb0(void); };

// @baa 0x00ec1cb0
char* C_00ec1cb0::sub_00ec1cb0(void) { return (char*)this + 308; }

struct S {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    void sub_00ec1ce0();
};

void S::f0() {}

void S::f1() {}

void S::f2() {}

void S::f3() {}

void S::f4() {}

void S::f5() {}

void S::f6() {}

void S::f7() {}

void S::f8() {}

// @baa 0x00ec1ce0
void S::sub_00ec1ce0() { f8(); }

struct C_00ec1cf0 { void sub_01818f20(int); C_00ec1cf0 *sub_00ec1cf0(int); };

// @baa 0x00ec1cf0
C_00ec1cf0 *C_00ec1cf0::sub_00ec1cf0(int a) { sub_01818f20(a); return this; }

struct C_00ec1d10 { char* sub_00ec1d10(void); };

// @baa 0x00ec1d10
char* C_00ec1d10::sub_00ec1d10(void) { return (char*)this + 56; }

struct C_00ec1d40 { void sub_01818f20(int); C_00ec1d40 *sub_00ec1d40(int); };

// @baa 0x00ec1d40
C_00ec1d40 *C_00ec1d40::sub_00ec1d40(int a) { sub_01818f20(a); return this; }

struct C_00ec1d80 { void sub_0181a730(int); C_00ec1d80 *sub_00ec1d80(int); };

// @baa 0x00ec1d80
C_00ec1d80 *C_00ec1d80::sub_00ec1d80(int a) { sub_0181a730(a); return this; }

struct Base {
    virtual void v0() = 0;
    virtual void v1() = 0;
    virtual void v2() = 0;
    virtual void v3() = 0;
    virtual void v4() = 0;
    virtual void v5() = 0;
    virtual void v6() = 0;
    virtual void v7() = 0;
};

struct C_00ec1de0 : Base {
    virtual void f8() = 0;
    void sub_00ec1de0();
};

// @baa 0x00ec1de0
void C_00ec1de0::sub_00ec1de0()
{
    return f8();
}

struct C_00ec1df0 { void sub_01818ec0(int); C_00ec1df0 *sub_00ec1df0(int); };

// @baa 0x00ec1df0
C_00ec1df0 *C_00ec1df0::sub_00ec1df0(int a) { sub_01818ec0(a); return this; }

struct C_00ec1f50 { void sub_00ec1f50(void); };

// @baa 0x00ec1f50
void C_00ec1f50::sub_00ec1f50(void) { *(int*)((char*)this + 0) = (int)g_02421c20; }

struct C_00ec1f60 {
    float10 sub_00ec1f60(float);
};

// @baa 0x00ec1f60
float10 C_00ec1f60::sub_00ec1f60(float param_2)
{
    int param_1 = (int)this;

  return ((float10)*(float *)(param_1 + 8) + (float10)param_2) * (float10)*(float *)(param_1 + 4);
}

struct C_00ec1fb0 { void sub_00ec1fb0(void); };

// @baa 0x00ec1fb0
void C_00ec1fb0::sub_00ec1fb0(void) { *(int*)((char*)this + 0) = (int)g_02421c20; }

// @baa 0x00ec2000
void __stdcall sub_00ec2000(int a0, int a1) {  }

struct C_00ec2010 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00ec2010(INT Index);
};

// @baa 0x00ec2010
UBOOL C_00ec2010::sub_00ec2010(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00ec2030 {
    int sub_00ec2030();
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x00ec2030
int C_00ec2030::sub_00ec2030(void)
{
    int * param_1 = (int *)this;

  if (*param_1 == 0) {
    sub_006311e0("Reference != 0",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\ScopedPointer.h"
                 ,0x3f,&g_01e3f3dc);
  }
  return *param_1;
}

struct C_00ec2060 { int sub_00ec2060(void); };

// @baa 0x00ec2060
int C_00ec2060::sub_00ec2060(void) { return *(int*)((char*)this + 4); }

struct C_00ec2070 { int sub_00ec2070(void); };

// @baa 0x00ec2070
int C_00ec2070::sub_00ec2070(void) { return *(int*)((char*)this + 4); }

struct C_00ec2080 { int sub_00ec2080(void); };

// @baa 0x00ec2080
int C_00ec2080::sub_00ec2080(void) { return *(int*)((char*)this + 4); }

struct C_00ec2090 { C_00ec2090* sub_00ec2090(void); };

// @baa 0x00ec2090
C_00ec2090* C_00ec2090::sub_00ec2090(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00ec20a0 {
    void sub_00ec20a0();
};

// @baa 0x00ec20a0
void C_00ec20a0::sub_00ec20a0(void)
{
    int * param_1 = (int *)this;

  *param_1 = *param_1 + 1;
  return;
}

struct C_00ec20b0 { int sub_00ec20b0(void); };

// @baa 0x00ec20b0
int C_00ec20b0::sub_00ec20b0(void) { return *(int*)((char*)this + 4); }

struct C_00ec20c0 { unsigned sub_00ec20c0(void); };

// @baa 0x00ec20c0
unsigned C_00ec20c0::sub_00ec20c0(void) { return *(unsigned*)((char*)this + 176) >> 31; }

struct C_00ec2100 {
    bool sub_00ec2100();
};

// @baa 0x00ec2100
bool C_00ec2100::sub_00ec2100(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

struct C_00ec2110 { int sub_00ec2110(void); };

// @baa 0x00ec2110
int C_00ec2110::sub_00ec2110(void) { return *(int*)((char*)this + 0); }

struct C_00ec2120 { char* sub_00ec2120(void); };

// @baa 0x00ec2120
char* C_00ec2120::sub_00ec2120(void) { return (char*)this + 16; }

struct C_00ec2130 {
    char _pad[4];
    int ref;
    C_00ec2130* sub_00ec2130();
};

// @baa 0x00ec2130
C_00ec2130* C_00ec2130::sub_00ec2130()
{
    ++ref;
    return this;
}

struct C_00ec2170 { int sub_00ec2170(void); };

// @baa 0x00ec2170
int C_00ec2170::sub_00ec2170(void) { return *(int*)((char*)this + 4); }

struct C_00ec2180 { int sub_00ec2180(void); };

// @baa 0x00ec2180
int C_00ec2180::sub_00ec2180(void) { return *(int*)((char*)this + 36); }

struct C_00ec2190 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_00ec2190* sub_00ec2190(INT value);
};

// @baa 0x00ec2190
C_00ec2190* C_00ec2190::sub_00ec2190(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_00ec21b0 {
    char pad[4];
    int f4;
    C_00ec21b0* sub_00ec21b0();
};

// @baa 0x00ec21b0
C_00ec21b0* C_00ec21b0::sub_00ec21b0(void)
{
    ++f4;
    return this;
}

struct C_00ec21c0 { int sub_00ec21c0(void); };

// @baa 0x00ec21c0
int C_00ec21c0::sub_00ec21c0(void) { return *(int*)((char*)this + 4); }

struct C_00ec21d0 {
    void sub_00ec21d0();
};

void sub_01826080(void *);
// @baa 0x00ec21d0
void C_00ec21d0::sub_00ec21d0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_00ec21e0 {
    void sub_00ec21e0();
};

// @baa 0x00ec21e0
void C_00ec21e0::sub_00ec21e0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_00ec21f0 { int sub_00ec21f0(void); };

// @baa 0x00ec21f0
int C_00ec21f0::sub_00ec21f0(void) { return *(int*)((char*)this + 4); }

struct C_00ec2200 { int sub_00ec2200(void); };

// @baa 0x00ec2200
int C_00ec2200::sub_00ec2200(void) { return *(int*)((char*)this + 4); }

struct C_00ec2210 { int sub_00ec2210(void); };

// @baa 0x00ec2210
int C_00ec2210::sub_00ec2210(void) { return *(int*)((char*)this + 4); }

struct C_00ec2220 { int sub_00ec2220(void); };

// @baa 0x00ec2220
int C_00ec2220::sub_00ec2220(void) { return *(int*)((char*)this + 4); }

struct C_00ec2230 { int sub_00ec2230(void); };

// @baa 0x00ec2230
int C_00ec2230::sub_00ec2230(void) { return *(int*)((char*)this + 4); }

struct C_00ec2240 { int sub_00ec2240(void); };

// @baa 0x00ec2240
int C_00ec2240::sub_00ec2240(void) { return *(int*)((char*)this + 4); }

struct C_00ec2250 { int sub_00ec2250(void); };

// @baa 0x00ec2250
int C_00ec2250::sub_00ec2250(void) { return *(int*)((char*)this + 4); }

struct C_00ec2260 { int sub_00ec2260(void); };

// @baa 0x00ec2260
int C_00ec2260::sub_00ec2260(void) { return *(int*)((char*)this + 4); }

struct C_00ec2270 { char* sub_00ec2270(void); };

// @baa 0x00ec2270
char* C_00ec2270::sub_00ec2270(void) { return (char*)this + 4; }

struct C_00ec2280 { int a, b, c; C_00ec2280(); };

// @baa 0x00ec2280
C_00ec2280::C_00ec2280() : a(0), b(0), c(0) {}

struct C_00ec2290 {
    void sub_00ec2290();
};

// @baa 0x00ec2290
void C_00ec2290::sub_00ec2290(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_00ec22a0 {
    bool sub_00ec22a0();
};

// @baa 0x00ec22a0
bool C_00ec22a0::sub_00ec22a0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == 0;
}

extern "C" void __cdecl sub_018260a0(const char* File, int Line);
// fcollada FMArray<int>: element count at 0x04, data pointer at 0x08
struct FMArrayInt {
    int Unk00; // 0x00
    unsigned int Num; // 0x04
    int* Data; // 0x08
    int* sub_00ec22b0();
};

// @baa 0x00ec22b0
int* FMArrayInt::sub_00ec22b0()
{
    if (Num <= 0)
        sub_018260a0("e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 500);
    return Data + Num - 1;
}

struct C_00ec22e0 { char* sub_00ec22e0(void); };

// @baa 0x00ec22e0
char* C_00ec22e0::sub_00ec22e0(void) { return (char*)this + 4; }

struct C_00ec2300 { char* sub_00ec2300(void); };

// @baa 0x00ec2300
char* C_00ec2300::sub_00ec2300(void) { return (char*)this + 16; }

struct C_00ec2310 { int sub_00ec2310(void); };

// @baa 0x00ec2310
int C_00ec2310::sub_00ec2310(void) { return *(int*)((char*)this + 4); }

struct C_00ec2320 { int sub_00ec2320(void); };

// @baa 0x00ec2320
int C_00ec2320::sub_00ec2320(void) { return *(int*)((char*)this + 4); }

struct C_00ec2330 { int sub_00ec2330(void); };

// @baa 0x00ec2330
int C_00ec2330::sub_00ec2330(void) { return *(int*)((char*)this + 4); }

struct C_00ec2340 { int sub_00ec2340(void); };

// @baa 0x00ec2340
int C_00ec2340::sub_00ec2340(void) { return *(int*)((char*)this + 4); }

struct C_00ec2350 { int sub_00ec2350(void); };

// @baa 0x00ec2350
int C_00ec2350::sub_00ec2350(void) { return *(int*)((char*)this + 8); }

struct C_00ec2360 { int a, b, c; C_00ec2360(); };

// @baa 0x00ec2360
C_00ec2360::C_00ec2360() : a(0), b(0), c(0) {}

struct C_00ec2370 {
    void sub_00ec2370();
};

// @baa 0x00ec2370
void C_00ec2370::sub_00ec2370(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_00ec2380 { int sub_00ec2380(void); };

// @baa 0x00ec2380
int C_00ec2380::sub_00ec2380(void) { return *(int*)((char*)this + 8); }

struct C_00ec2390 { int sub_00ec2390(void); };

// @baa 0x00ec2390
int C_00ec2390::sub_00ec2390(void) { return *(int*)((char*)this + 4); }

struct C_00ec23a0 { int sub_00ec23a0(void); };

// @baa 0x00ec23a0
int C_00ec23a0::sub_00ec23a0(void) { return *(int*)((char*)this + 4); }

struct C_00ec23b0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00ec23b0(INT Index);
};

// @baa 0x00ec23b0
UBOOL C_00ec23b0::sub_00ec23b0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00ec23d0 {
    bool sub_00ec23d0();
};

// @baa 0x00ec23d0
bool C_00ec23d0::sub_00ec23d0(void)
{
    int * param_1 = (int *)this;

  return 0 < *param_1;
}

struct C_00ec2400 {
    undefined4 sub_00ec2400(uint);
};

// @baa 0x00ec2400
undefined4 C_00ec2400::sub_00ec2400(uint param_2)
{
    int param_1 = (int)this;

  return *(undefined4 *)(param_1 + 0x90 + (param_2 & 7) * 4);
}

struct C_00ec2420 { int sub_00ec2420(void); };

// @baa 0x00ec2420
int C_00ec2420::sub_00ec2420(void) { return *(int*)((char*)this + 4); }

struct E { BYTE Bytes[108]; };

struct S_00ecae50 {
    TArray<E> Items; // 0x00
    E* sub_00ecae50(INT Index);
};

// @baa 0x00ecae50
E* S_00ecae50::sub_00ecae50(INT Index)
{
    return &Items(Index);
}

typedef uint size_t;

struct C_00ecaea0 {
    int sub_00ecaea0(int);
    int sub_00807050(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00ecaea0
int C_00ecaea0::sub_00ecaea0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00ecaea0 *)(this))->sub_00807050(param_2);
  sub_01a37612((void *)(iVar1 * 0x50 + *param_1),0,param_2 * 0x50);
  return iVar1;
}

struct S_00ecaee0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00ecaee0(INT Index);
};

// @baa 0x00ecaee0
DWORD* S_00ecaee0::sub_00ecaee0(INT Index)
{
    return &Items(Index);
}

struct C_00ecaf30 {
    int sub_00ecaf30(int);
    int sub_00ec7910(int);
};

// @baa 0x00ecaf30
int C_00ecaf30::sub_00ecaf30(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00ecaf30 *)(this))->sub_00ec7910(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 4),0,param_2 * 4);
  return iVar1;
}

struct C_00ecaf70 {
    int sub_00ecaf70();
};

// @baa 0x00ecaf70
int C_00ecaf70::sub_00ecaf70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00ecaf80 {
    int sub_00ecaf80();
};

// @baa 0x00ecaf80
int C_00ecaf80::sub_00ecaf80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00ecafe0 {
    void sub_00ecafe0(undefined4);
    int sub_00ec7aa0(int, int);
};

// @baa 0x00ecafe0
void C_00ecafe0::sub_00ecafe0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_00ecafe0 *)(this))->sub_00ec7aa0(*(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 4, param_2);
  return;
}

struct S_00ecb000 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00ecb000(INT Index);
};

// @baa 0x00ecb000
DWORD* S_00ecb000::sub_00ecb000(INT Index)
{
    return &Items(Index);
}

struct C_00ecb050{
int sub_00ecb050(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00ecb050
int C_00ecb050::sub_00ecb050(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct S_00ecb0b0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00ecb0b0(INT Index);
};

// @baa 0x00ecb0b0
DWORD* S_00ecb0b0::sub_00ecb0b0(INT Index)
{
    return &Items(Index);
}

struct C_00ecb100{
int sub_00ecb100(undefined4*);
};

// @baa 0x00ecb100
int C_00ecb100::sub_00ecb100(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct C_00ecb1c0 {
    int sub_00ecb1c0(int);
};

// @baa 0x00ecb1c0
int C_00ecb1c0::sub_00ecb1c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00ecb1d0 { int sub_00ecb1d0(void); };

// @baa 0x00ecb1d0
int C_00ecb1d0::sub_00ecb1d0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00ecb1e0 {
    int sub_00ecb1e0(int);
};

// @baa 0x00ecb1e0
int C_00ecb1e0::sub_00ecb1e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct E_00ecb3a0 { BYTE Bytes[36]; };

struct S_00ecb3a0 {
    TArray<E_00ecb3a0> Items; // 0x00
    E_00ecb3a0* sub_00ecb3a0(INT Index);
};

// @baa 0x00ecb3a0
E_00ecb3a0* S_00ecb3a0::sub_00ecb3a0(INT Index)
{
    return &Items(Index);
}

struct E_00ecb3f0 { BYTE Bytes[36]; };

struct S_00ecb3f0 {
    TArray<E_00ecb3f0> Items; // 0x00
    const E_00ecb3f0* sub_00ecb3f0(INT Index) const;
};

// @baa 0x00ecb3f0
const E_00ecb3f0* S_00ecb3f0::sub_00ecb3f0(INT Index) const
{
    return &Items(Index);
}

struct C_00ecb440 {
    int sub_00ecb440(int);
};

// @baa 0x00ecb440
int C_00ecb440::sub_00ecb440(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

// @baa 0x00ecb450
void __stdcall sub_00ecb450(int a0, int a1) {  }

struct E_00ecb460 { BYTE Bytes[16]; };

struct S_00ecb460 {
    TArray<E_00ecb460> Items; // 0x00
    E_00ecb460* sub_00ecb460(INT Index);
};

// @baa 0x00ecb460
E_00ecb460* S_00ecb460::sub_00ecb460(INT Index)
{
    return &Items(Index);
}

struct C_00ecb4b0 {
    int sub_00ecb4b0(int);
};

// @baa 0x00ecb4b0
int C_00ecb4b0::sub_00ecb4b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00ecb4c0
void __stdcall sub_00ecb4c0(int a0, int a1) {  }

struct E_00ecb4d0 { BYTE Bytes[64]; };

struct S_00ecb4d0 {
    TArray<E_00ecb4d0> Items; // 0x00
    E_00ecb4d0* sub_00ecb4d0(INT Index);
};

// @baa 0x00ecb4d0
E_00ecb4d0* S_00ecb4d0::sub_00ecb4d0(INT Index)
{
    return &Items(Index);
}

struct C_00ecb520 {
    int sub_00ecb520(int);
};

// @baa 0x00ecb520
int C_00ecb520::sub_00ecb520(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x40 + *param_1;
}

// @baa 0x00ecb530
void __stdcall sub_00ecb530(int a0, int a1) {  }

struct C_00ecb540 {
    int sub_00ecb540(int);
};

// @baa 0x00ecb540
int C_00ecb540::sub_00ecb540(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00ecb550
void __stdcall sub_00ecb550(int a0, int a1) {  }

struct C_00ecb560 {
    void sub_00ecb560();
};

int sub_0053dfa0(...);
// @baa 0x00ecb560
void C_00ecb560::sub_00ecb560(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x18c0) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x18c0));
    *(undefined4 *)(param_1 + 0x18c0) = 0;
  }
  return;
}

struct C_00ecb590 {
    int sub_00ecb590(int);
};

// @baa 0x00ecb590
int C_00ecb590::sub_00ecb590(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x6c + *param_1;
}

struct C_00ecb5a0 {
    int sub_00ecb5a0(int);
};

// @baa 0x00ecb5a0
int C_00ecb5a0::sub_00ecb5a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00ecb5b0
void __stdcall sub_00ecb5b0(int a0, int a1) {  }

struct C_00ecb5c0 { C_00ecb5c0* sub_00ecb5c0(void); };

// @baa 0x00ecb5c0
C_00ecb5c0* C_00ecb5c0::sub_00ecb5c0(void) { *(int*)((char*)this + 32) = 0; return this; }

struct C_00ecb5d0 {
    void sub_00ecb5d0();
};

// @baa 0x00ecb5d0
void C_00ecb5d0::sub_00ecb5d0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x20) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

struct C_00ecb5f0 {
    undefined4 * sub_00ecb5f0(int);
    int sub_00ec7fb0(int, int, int);
};

// @baa 0x00ecb5f0
undefined4 * C_00ecb5f0::sub_00ecb5f0(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((C_00ecb5f0 *)(this))->sub_00ec7fb0(0, *(undefined4 *)(param_2 + 8), *(undefined4 *)(param_2 + 4));
  return param_1;
}

struct C_00ecb620 {
    void sub_00ecb620(undefined4);
    int sub_00ec79a0(int);
};

// @baa 0x00ecb620
void C_00ecb620::sub_00ecb620(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00ecb620 *)(this))->sub_00ec79a0(param_2);
  param_1[1] = *param_1;
  return;
}

struct C_00ecb640 {
    void sub_00ecb640(undefined4);
    int sub_00ec7f20(int, int);
};

// @baa 0x00ecb640
void C_00ecb640::sub_00ecb640(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_00ecb640 *)(this))->sub_00ec7f20(*(int *)(param_1 + 8) + *(int *)(param_1 + 4), param_2);
  return;
}

struct C_00ecb660 {
    void sub_00ecb660(undefined4);
    int sub_00ec7a20(int);
};

// @baa 0x00ecb660
void C_00ecb660::sub_00ecb660(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00ecb660 *)(this))->sub_00ec7a20(param_2);
  param_1[1] = *param_1;
  return;
}

struct C_00ecb6c0 {
    void sub_00ecb6c0(undefined4);
    int sub_00ec8050(int, int);
};

// @baa 0x00ecb6c0
void C_00ecb6c0::sub_00ecb6c0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_00ecb6c0 *)(this))->sub_00ec8050(*(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 2, param_2);
  return;
}

struct C_00ecb770 {
    int sub_00ecb770(int);
};

// @baa 0x00ecb770
int C_00ecb770::sub_00ecb770(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00ecb780
void __stdcall sub_00ecb780(int a0, int a1) {  }

struct C_00ecb790 {
    int sub_00ecb790(int);
};

// @baa 0x00ecb790
int C_00ecb790::sub_00ecb790(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00ecb7a0
void __stdcall sub_00ecb7a0(int a0, int a1) {  }

struct C_00ecb7b0 {
    int sub_00ecb7b0(int);
};

// @baa 0x00ecb7b0
int C_00ecb7b0::sub_00ecb7b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00ecb7c0 {
    void sub_00ecb7c0();
};

// @baa 0x00ecb7c0
void C_00ecb7c0::sub_00ecb7c0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x80) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x80));
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  return;
}

struct C_00ecbd40 {
    int sub_00ecbd40(int);
};

// @baa 0x00ecbd40
int C_00ecbd40::sub_00ecbd40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00ecbd50 { C_00ecbd50* sub_00ecbd50(void); };

// @baa 0x00ecbd50
C_00ecbd50* C_00ecbd50::sub_00ecbd50(void) { *(int*)((char*)this + 6336) = 0; return this; }

struct C_00ecbd60 {
    uint sub_00ecbd60();
};

// @baa 0x00ecbd60
uint C_00ecbd60::sub_00ecbd60(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x18c0) | -(uint)(*(uint *)(param_1 + 0x18c0) == 0) & param_1;
}

struct C_00ecbe40 {
    int sub_00ecbe40(int);
};

// @baa 0x00ecbe40
int C_00ecbe40::sub_00ecbe40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00ecbe50 {
    uint sub_00ecbe50();
};

// @baa 0x00ecbe50
uint C_00ecbe50::sub_00ecbe50(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x20) | -(uint)(*(uint *)(param_1 + 0x20) == 0) & param_1;
}

struct C_00ecbf10 {
    int sub_00ecbf10(int);
};

// @baa 0x00ecbf10
int C_00ecbf10::sub_00ecbf10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00ecbf20 {
    undefined4 * sub_00ecbf20(int);
    int sub_00ec87c0(int, int, int);
};

// @baa 0x00ecbf20
undefined4 * C_00ecbf20::sub_00ecbf20(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((C_00ecbf20 *)(this))->sub_00ec87c0(0, *(undefined4 *)(param_2 + 8), *(undefined4 *)(param_2 + 4));
  return param_1;
}

struct C_00ecbf50 {
    uint sub_00ecbf50();
};

// @baa 0x00ecbf50
uint C_00ecbf50::sub_00ecbf50(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x80) | -(uint)(*(uint *)(param_1 + 0x80) == 0) & param_1;
}

int sub_005413d0(...);
// @baa 0x00ecbfa0
void sub_00ecbfa0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00ecbfe0 {
    int sub_00ecbfe0(int);
};

// @baa 0x00ecbfe0
int C_00ecbfe0::sub_00ecbfe0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00ecc090 {
    int sub_00ecc090(int);
};

// @baa 0x00ecc090
int C_00ecc090::sub_00ecc090(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00ecc0a0 {
    int sub_00ecc0a0(int);
};

// @baa 0x00ecc0a0
int C_00ecc0a0::sub_00ecc0a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00ecc0e0 {
    int sub_00ecc0e0(int);
};

// @baa 0x00ecc0e0
int C_00ecc0e0::sub_00ecc0e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00ecc170 {
    int sub_00ecc170();
};

// @baa 0x00ecc170
int C_00ecc170::sub_00ecc170(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ecc190 {
    int sub_00ecc190();
};

// @baa 0x00ecc190
int C_00ecc190::sub_00ecc190(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00ecc1a0 {
    int sub_00ecc1a0();
};

// @baa 0x00ecc1a0
int C_00ecc1a0::sub_00ecc1a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ecc1c0 {
    int sub_00ecc1c0();
};

// @baa 0x00ecc1c0
int C_00ecc1c0::sub_00ecc1c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00ecc1d0 {
    int sub_00ecc1d0();
};

// @baa 0x00ecc1d0
int C_00ecc1d0::sub_00ecc1d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ecc1f0 {
    int sub_00ecc1f0();
};

// @baa 0x00ecc1f0
int C_00ecc1f0::sub_00ecc1f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00ecc200 {
    int sub_00ecc200();
};

// @baa 0x00ecc200
int C_00ecc200::sub_00ecc200(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ecc220 {
    int sub_00ecc220();
};

// @baa 0x00ecc220
int C_00ecc220::sub_00ecc220(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

struct C_00ecc230 {
    uint sub_00ecc230();
};

// @baa 0x00ecc230
uint C_00ecc230::sub_00ecc230(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x80) | -(uint)(*(uint *)(param_1 + 0x80) == 0) & param_1;
}

struct C_00ecc250 {
    int sub_00ecc250();
};

// @baa 0x00ecc250
int C_00ecc250::sub_00ecc250(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00ecc260 {
    int sub_00ecc260();
};

// @baa 0x00ecc260
int C_00ecc260::sub_00ecc260(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ecc280 {
    int sub_00ecc280();
};

// @baa 0x00ecc280
int C_00ecc280::sub_00ecc280(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00ecc290 {
    int sub_00ecc290();
};

// @baa 0x00ecc290
int C_00ecc290::sub_00ecc290(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ecc2b0 {
    int sub_00ecc2b0();
};

// @baa 0x00ecc2b0
int C_00ecc2b0::sub_00ecc2b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

struct C_00ecc2c0 {
    int sub_00ecc2c0();
};

// @baa 0x00ecc2c0
int C_00ecc2c0::sub_00ecc2c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ecc2e0 {
    int sub_00ecc2e0();
};

// @baa 0x00ecc2e0
int C_00ecc2e0::sub_00ecc2e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00ecff80 { int sub_00ecff80(void); };

// @baa 0x00ecff80
int C_00ecff80::sub_00ecff80(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00ecff90 { void* Data; int Num; int Max; void sub_00ecff90(); };

// @baa 0x00ecff90
void C_00ecff90::sub_00ecff90() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00ecfff0 { void* Data; int Num; int Max; void sub_00ecfff0(); };

// @baa 0x00ecfff0
void C_00ecfff0::sub_00ecfff0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// FMod_0530000.cpp (part 1 of 2): 87 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

// @baa 0x0053ed80
int sub_0053ed80(int a0) { return *(int*)a0; }

struct C {
    void sub_0053ed90(int *);
};

// @baa 0x0053ed90
void C::sub_0053ed90(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x0053eda0
int sub_0053eda0(int a0) { return a0; }

// @baa 0x0053edb0
int sub_0053edb0(int a0) { return a0; }

extern "C" double fabs(double);
// @baa 0x0053edc0
double sub_0053edc0(float param_1)
{
  return fabs(param_1);
}

// @baa 0x0053edd0
int sub_0053edd0(int param_1, int param_2)
{
  return (param_2 - param_1 >> 0x1f & param_2 - param_1) + param_1;
}

struct C_0053edf0 { int sub_0053edf0(void); };

// @baa 0x0053edf0
int C_0053edf0::sub_0053edf0(void) { return *(int*)((char*)this + 0); }

struct C_0053ee00 { int sub_0053ee00(void); };

// @baa 0x0053ee00
int C_0053ee00::sub_0053ee00(void) { return *(int*)((char*)this + 0); }

// @baa 0x0053ee10
int sub_0053ee10(int a0) { return *(int*)a0; }

struct C_0053ee20 { int a, b; C_0053ee20(const C_0053ee20 &); };

// @baa 0x0053ee20
C_0053ee20::C_0053ee20(const C_0053ee20 &o) : a(o.a), b(o.b) {}

struct C_0053ee40 { int a, b; C_0053ee40(int, int); };

// @baa 0x0053ee40
C_0053ee40::C_0053ee40(int x, int y) : a(x), b(y) {}

struct C_0053ee60 {
    bool sub_0053ee60();
};

// @baa 0x0053ee60
bool C_0053ee60::sub_0053ee60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return (param_1[1] & *(uint *)*param_1) != 0;
}

struct C_0053ee70 {
    void sub_0053ee70(int);
};

// @baa 0x0053ee70
void C_0053ee70::sub_0053ee70(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  uint *puVar1;
  
  puVar1 = (uint *)*param_1;
  if (param_2 != 0) {
    *puVar1 = *puVar1 | param_1[1];
    return;
  }
  *puVar1 = *puVar1 & ~param_1[1];
  return;
}

struct C_0053ee90 {
    void sub_0053ee90(int);
};

// @baa 0x0053ee90
void C_0053ee90::sub_0053ee90(int param_2)
{
    int * param_1 = (int *)this;

  *param_1 = param_2 >> 5;
  param_1[1] = 1 << ((byte)param_2 & 0x1f);
  return;
}

// @baa 0x0053eeb0
undefined4 sub_0053eeb0(undefined4 param_1, int param_2)
{
  return *(undefined4 *)(param_2 + 4);
}

// @baa 0x0053eec0
int sub_0053eec0(int a0) { return *(int*)a0; }

// @baa 0x0053eed0
bool sub_0053eed0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0053eee0 { int a, b; C_0053eee0(const C_0053eee0 &); };

// @baa 0x0053eee0
C_0053eee0::C_0053eee0(const C_0053eee0 &o) : a(o.a), b(o.b) {}

// @baa 0x0053ef20
void sub_0053ef20(void) {  }

struct C_0053ef30 { C_0053ef30* sub_0053ef30(void); };

// @baa 0x0053ef30
C_0053ef30* C_0053ef30::sub_0053ef30(void) { return this; }

// @baa 0x0053ef40
int sub_0053ef40(int a0) { return *(int*)a0; }

// @baa 0x0053ef50
bool sub_0053ef50(int param_1, int param_2)
{
  return param_1 == param_2;
}

// @baa 0x0053ef60
int sub_0053ef60(int a0) { return a0; }

struct C_0053ef70 { int a, b; C_0053ef70(const C_0053ef70 &); };

// @baa 0x0053ef70
C_0053ef70::C_0053ef70(const C_0053ef70 &o) : a(o.a), b(o.b) {}

struct C_0053efb0 { int sub_0053efb0(void); };

// @baa 0x0053efb0
int C_0053efb0::sub_0053efb0(void) { return *(int*)((char*)this + 0); }

struct C_0053efc0 { int sub_0053efc0(void); };

// @baa 0x0053efc0
int C_0053efc0::sub_0053efc0(void) { return *(int*)((char*)this + 0); }

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0053efd0(INT Index);
};

// @baa 0x0053efd0
DWORD* S::sub_0053efd0(INT Index)
{
    return &Items(Index);
}

struct C_0053f020 { int sub_0053f020(void); };

// @baa 0x0053f020
int C_0053f020::sub_0053f020(void) { return *(int*)((char*)this + 0); }

// @baa 0x0053f030
int sub_0053f030(int a0) { return *(int*)a0; }

struct C_0053f040 {
    void sub_0053f040(int *);
};

// @baa 0x0053f040
void C_0053f040::sub_0053f040(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x0053f050
int sub_0053f050(int a0) { return *(int*)a0; }

// @baa 0x0053f060
bool sub_0053f060(int param_1, int param_2)
{
  return param_1 == param_2;
}

// @baa 0x0053f070
int sub_0053f070(int a0) { return a0; }

struct C_0053f0b0 {
    void sub_0053f0b0(undefined4 *);
};

// @baa 0x0053f0b0
void C_0053f0b0::sub_0053f0b0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_0053f0d0 { int sub_0053f0d0(void); };

// @baa 0x0053f0d0
int C_0053f0d0::sub_0053f0d0(void) { return *(int*)((char*)this + 0); }

// @baa 0x0053f0e0
int sub_0053f0e0(int a0) { return *(int*)a0; }

// @baa 0x0053f0f0
bool sub_0053f0f0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0053f100 {
    void sub_0053f100(undefined4 *);
};

// @baa 0x0053f100
void C_0053f100::sub_0053f100(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_0053f120 { C_0053f120* sub_0053f120(void); };

// @baa 0x0053f120
C_0053f120* C_0053f120::sub_0053f120(void) { *(int*)((char*)this + 0) = -1; return this; }

struct C_0053f130 {
    bool sub_0053f130();
};

// @baa 0x0053f130
bool C_0053f130::sub_0053f130(void)
{
    int * param_1 = (int *)this;

  return *param_1 != -1;
}

// @baa 0x0053f140
bool sub_0053f140(int * param_1, int * param_2)
{
  return *param_1 == *param_2;
}

struct C_0053f160 { int a; C_0053f160(int); };

// @baa 0x0053f160
C_0053f160::C_0053f160(int x) : a(x) {}

struct C_0053f170 { int sub_0053f170(void); };

// @baa 0x0053f170
int C_0053f170::sub_0053f170(void) { return *(int*)((char*)this + 0); }

// @baa 0x0053f180
int sub_0053f180(int a0) { return *(int*)a0; }

extern char g_01e72ac0[];
struct C_0053f190 { void sub_0053f190(void); };

// @baa 0x0053f190
void C_0053f190::sub_0053f190(void) { *(int*)((char*)this + 0) = (int)g_01e72ac0; }

struct C_0053f1e0 {
    void sub_0053f1e0(int *);
};

// @baa 0x0053f1e0
void C_0053f1e0::sub_0053f1e0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 0xc);
  return;
}

struct C_0053f1f0 { int sub_0053f1f0(void); };

// @baa 0x0053f1f0
int C_0053f1f0::sub_0053f1f0(void) { return *(int*)((char*)this + 0); }

struct T_0053f200 { BYTE b[4]; };

// @baa 0x0053f200
template INT TArray<T_0053f200>::Add(INT);

struct C_0053f2d0 { int sub_0053f2d0(void); };

// @baa 0x0053f2d0
int C_0053f2d0::sub_0053f2d0(void) { return *(int*)((char*)this + 0); }

typedef void * LPCRITICAL_SECTION;

extern "C" __declspec(dllimport) int __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
struct C_0053f380 {
    void sub_0053f380();
};

// @baa 0x0053f380
void C_0053f380::sub_0053f380()
{
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 4));
}

// @baa 0x0053f3e0
int sub_0053f3e0(int a0) { return *(int*)a0; }

// @baa 0x0053f3f0
bool sub_0053f3f0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0053f400 {
    void sub_0053f400(undefined4 *);
};

// @baa 0x0053f400
void C_0053f400::sub_0053f400(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_0053f4b0 { int sub_0053f4b0(void); };

// @baa 0x0053f4b0
int C_0053f4b0::sub_0053f4b0(void) { return *(int*)((char*)this + 0); }

struct C_0053f4c0 {
    undefined4 sub_0053f4c0(int *);
};

// @baa 0x0053f4c0
undefined4 C_0053f4c0::sub_0053f4c0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 0;
  }
  return 1;
}

struct C_0053f4e0 { C_0053f4e0* sub_0053f4e0(void); };

// @baa 0x0053f4e0
C_0053f4e0* C_0053f4e0::sub_0053f4e0(void) { return this; }

struct C_0053f4f0 { int sub_0053f4f0(void); };

// @baa 0x0053f4f0
int C_0053f4f0::sub_0053f4f0(void) { return *(int*)((char*)this + 4); }

struct C_0053f640 { int sub_0053f640(void); };

// @baa 0x0053f640
int C_0053f640::sub_0053f640(void) { return *(int*)((char*)this + 0); }

struct C_0053f650 { int sub_0053f650(void); };

// @baa 0x0053f650
int C_0053f650::sub_0053f650(void) { return *(int*)((char*)this + 0); }

// @baa 0x0053f660
bool sub_0053f660(int param_1, int param_2)
{
  return param_1 == param_2;
}

int sub_005c80f0(void);
int sub_005cb6d0(...);
extern undefined4 g_026a1c70;
// @baa 0x0053f690
int sub_0053f690(void)
{
  if (g_026a1c70 == 0) {
    g_026a1c70 = sub_005cb6d0(L"Core");
    sub_005c80f0();
  }
  return g_026a1c70;
}

extern char g_01e3f3e0[];
// @baa 0x0053f6c0
int sub_0053f6c0(void) { return (int)g_01e3f3e0; }

struct C_0053f6d0 { int sub_0053f6d0(void); };

// @baa 0x0053f6d0
int C_0053f6d0::sub_0053f6d0(void) { return *(int*)((char*)this + 0); }

struct C_0053f6e0 { int sub_0053f6e0(void); };

// @baa 0x0053f6e0
int C_0053f6e0::sub_0053f6e0(void) { return *(int*)((char*)this + 40); }

struct C_0053f6f0 { void sub_0053f6f0(int a0); };

// @baa 0x0053f6f0
void C_0053f6f0::sub_0053f6f0(int a0) { *(int*)((char*)this + 40) = a0; }

struct C_0053f700 {
    void sub_0053f700(uint, uint);
};

// @baa 0x0053f700
void C_0053f700::sub_0053f700(uint param_2, uint param_3)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | param_2;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | param_3;
  return;
}

struct C_0053f720 {
    void sub_0053f720(uint, uint);
};

// @baa 0x0053f720
void C_0053f720::sub_0053f720(uint param_2, uint param_3)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~param_2;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & ~param_3;
  return;
}

struct C_0053f790 { int sub_0053f790(void); };

// @baa 0x0053f790
int C_0053f790::sub_0053f790(void) { return *(int*)((char*)this + 4); }

struct C_0053f7a0 { int sub_0053f7a0(void); };

// @baa 0x0053f7a0
int C_0053f7a0::sub_0053f7a0(void) { return *(int*)((char*)this + 44); }

// @baa 0x0053f7b0
int sub_0053f7b0(int a0) { return a0; }

struct C_0053f7c0 { int sub_0053f7c0(void); };

// @baa 0x0053f7c0
int C_0053f7c0::sub_0053f7c0(void) { return *(int*)((char*)this + 0); }

struct C_0053f7d0 { int sub_0053f7d0(void); };

// @baa 0x0053f7d0
int C_0053f7d0::sub_0053f7d0(void) { return *(int*)((char*)this + 0); }

struct C_0053f7e0 { int a, b, c; C_0053f7e0(); };

// @baa 0x0053f7e0
C_0053f7e0::C_0053f7e0() : a(0), b(0), c(0) {}

struct C_0053f7f0 { int sub_0053f7f0(void); };

// @baa 0x0053f7f0
int C_0053f7f0::sub_0053f7f0(void) { return *(int*)((char*)this + 0); }

struct C_0053f800 { int a, b, c; C_0053f800(); };

// @baa 0x0053f800
C_0053f800::C_0053f800() : a(0), b(0), c(0) {}

struct C_0053f810 { int sub_0053f810(void); };

// @baa 0x0053f810
int C_0053f810::sub_0053f810(void) { return *(int*)((char*)this + 0); }

// @baa 0x0053f820
int sub_0053f820(int a0) { return *(int*)a0; }

// @baa 0x0053f830
int sub_0053f830(int a0) { return a0; }

struct C_0053f840 { int a, b; C_0053f840(int, int); };

// @baa 0x0053f840
C_0053f840::C_0053f840(int x, int y) : a(x), b(y) {}

// @baa 0x0053f860
uint sub_0053f860(int param_1, int param_2)
{
  return param_1 + -1 + param_2 & ~(param_2 - 1U);
}

struct C_0053f880 {
    void sub_0053f880(undefined4, undefined4, undefined4, undefined4, undefined4);
};

int sub_00630f20(...);
// @baa 0x0053f880
void C_0053f880::sub_0053f880(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

struct C_0053f8d0 {
    void sub_0053f8d0(undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x0053f8d0
void C_0053f8d0::sub_0053f8d0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    undefined4 param_1 = (undefined4)this;
  sub_00630f20(param_1,param_2,param_3,param_4,param_5);
  return;
}

struct C_0053f8f0 {
    void sub_0053f8f0(undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x0053f8f0
void C_0053f8f0::sub_0053f8f0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;
  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

struct C_0053f920 {
    void sub_0053f920(undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x0053f920
void C_0053f920::sub_0053f920(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

struct C_0053f960 {
    void sub_0053f960(undefined4, undefined4, undefined4);
};

// @baa 0x0053f960
void C_0053f960::sub_0053f960(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 param_1 = (undefined4)this;
  sub_00630f20(param_1,param_2,param_3,param_4);
  return;
}

// @baa 0x0053f980
uint sub_0053f980(int param_1, int param_2)
{
  return param_1 + -1 + param_2 & ~(param_2 - 1U);
}

struct C_0053f9b0 {
    void sub_0053f9b0(undefined4, undefined4, undefined4);
};

int sub_00630ea0(...);
// @baa 0x0053f9b0
void C_0053f9b0::sub_0053f9b0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630ea0(param_1,param_2,param_3,param_4);
  return;
}

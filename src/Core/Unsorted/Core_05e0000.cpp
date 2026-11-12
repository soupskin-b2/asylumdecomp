// Core_05e0000.cpp (part 1 of 5): 55 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x005ebb80
void sub_005ebb80(void) {  }

extern undefined4 g_026a1c40;
extern undefined4 g_026a1c48;
// @baa 0x005ebc70
undefined4 sub_005ebc70(void)
{
  if ((g_026a1c40 == 0) && (g_026a1c48 == 0)) {
    return 0;
  }
  return 1;
}

struct C {
    bool sub_005ebff0();
};

// @baa 0x005ebff0
bool C::sub_005ebff0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x10) != 0;
}

struct C_005ec390 { int sub_005ec390(void); };

// @baa 0x005ec390
int C_005ec390::sub_005ec390(void) { return *(int*)((char*)this + 24); }

struct C_005ec650 { int sub_005ec650(void); };

// @baa 0x005ec650
int C_005ec650::sub_005ec650(void) { return *(int*)((char*)this + 0); }

struct C_005ec660 { int sub_005ec660(void); };

// @baa 0x005ec660
int C_005ec660::sub_005ec660(void) { return *(int*)((char*)this + 4); }

struct C_005ec670 {
    void sub_005ec670();
};

int sub_0053df70(...);
// @baa 0x005ec670
void C_005ec670::sub_005ec670(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_005ec6a0 { int sub_005ec6a0(void); };

// @baa 0x005ec6a0
int C_005ec6a0::sub_005ec6a0(void) { return *(int*)((char*)this + 0); }

struct C_005ec6b0 { int sub_005ec6b0(void); };

// @baa 0x005ec6b0
int C_005ec6b0::sub_005ec6b0(void) { return *(int*)((char*)this + 0); }

struct C_005ec6c0 { int sub_005ec6c0(void); };

// @baa 0x005ec6c0
int C_005ec6c0::sub_005ec6c0(void) { return *(int*)((char*)this + 0); }

struct C_005ec6d0 { int sub_005ec6d0(void); };

// @baa 0x005ec6d0
int C_005ec6d0::sub_005ec6d0(void) { return *(int*)((char*)this + 0); }

struct C_005ed900 { int sub_005ed900(void); };

// @baa 0x005ed900
int C_005ed900::sub_005ed900(void) { return *(int*)((char*)this + 4); }

struct C_005ed910 { int sub_005ed910(void); };

// @baa 0x005ed910
int C_005ed910::sub_005ed910(void) { return *(int*)((char*)this + 4); }

struct C_005ed980 { int a, b, c; C_005ed980(); };

// @baa 0x005ed980
C_005ed980::C_005ed980() : a(0), b(0), c(0) {}

struct C_005ed990 { int sub_005ed990(void); };

// @baa 0x005ed990
int C_005ed990::sub_005ed990(void) { return *(int*)((char*)this + 4); }

struct C_005ed9a0 { int a, b, c; C_005ed9a0(); };

// @baa 0x005ed9a0
C_005ed9a0::C_005ed9a0() : a(0), b(0), c(0) {}

struct C_005ed9b0 { int sub_005ed9b0(void); };

// @baa 0x005ed9b0
int C_005ed9b0::sub_005ed9b0(void) { return *(int*)((char*)this + 4); }

struct C_005ed9c0 { int a, b, c; C_005ed9c0(); };

// @baa 0x005ed9c0
C_005ed9c0::C_005ed9c0() : a(0), b(0), c(0) {}

struct C_005eda40 { int sub_005eda40(void); };

// @baa 0x005eda40
int C_005eda40::sub_005eda40(void) { return *(int*)((char*)this + 4); }

struct C_005edba0 { int sub_005edba0(void); };

// @baa 0x005edba0
int C_005edba0::sub_005edba0(void) { return *(int*)((char*)this + 0); }

struct C_005edbb0 {
    int sub_005edbb0();
};

// @baa 0x005edbb0
int C_005edbb0::sub_005edbb0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_005edbc0 { int a, b; C_005edbc0(int, int); };

// @baa 0x005edbc0
C_005edbc0::C_005edbc0(int x, int y) : a(x), b(y) {}

// @baa 0x005edfc0
int sub_005edfc0(int a0) { return a0; }

// @baa 0x005edfd0
int sub_005edfd0(int a0) { return a0; }

// @baa 0x005ee050
void __stdcall sub_005ee050(int a0) {  }

// @baa 0x005ee060
void __stdcall sub_005ee060(int a0) {  }

struct C_005ee070 {
    undefined4 * sub_005ee070(byte);
};

int sub_0053dfa0(...);
extern undefined * g_01e729c0;
// @baa 0x005ee070
undefined4 * C_005ee070::sub_005ee070(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e729c0);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_005ee210 {
    undefined4 * sub_005ee210(byte);
};

// @baa 0x005ee210
undefined4 * C_005ee210::sub_005ee210(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e729c0);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01e9f7d8[];
struct C_005eeab0 { C_005eeab0* sub_005eeab0(void); };

// @baa 0x005eeab0
C_005eeab0* C_005eeab0::sub_005eeab0(void) { *(int*)((char*)this + 0) = (int)g_01e9f7d8; return this; }

extern char g_01e72ac0[];
struct C_005eeac0 { void sub_005eeac0(void); };

// @baa 0x005eeac0
void C_005eeac0::sub_005eeac0(void) { *(int*)((char*)this + 0) = (int)g_01e72ac0; }

struct C_005eead0 {
    undefined4 * sub_005eead0(byte);
};

// @baa 0x005eead0
undefined4 * C_005eead0::sub_005eead0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72ac0);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01e9f810[];
struct C_005eeb10 { C_005eeb10* sub_005eeb10(void); };

// @baa 0x005eeb10
C_005eeb10* C_005eeb10::sub_005eeb10(void) { *(int*)((char*)this + 0) = (int)g_01e9f810; return this; }

void sub_0053dfa0(int);
struct S {
    void sub_005eeda0(int A);
};

// @baa 0x005eeda0
void S::sub_005eeda0(int A)
{
    sub_0053dfa0(A);
}

struct C_005eedf0 {
    void sub_005eedf0();
};

// @baa 0x005eedf0
void C_005eedf0::sub_005eedf0(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct S_005eee50 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_005eee50(INT Index) const;
};

// @baa 0x005eee50
const DWORD* S_005eee50::sub_005eee50(INT Index) const
{
    return &Items(Index);
}

struct C_005eeea0 {
    int sub_005eeea0(int);
};

// @baa 0x005eeea0
int C_005eeea0::sub_005eeea0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_005eeeb0 {
    int sub_005eeeb0(int);
};

// @baa 0x005eeeb0
int C_005eeeb0::sub_005eeeb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct S_005eeec0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_005eeec0(INT Index);
};

// @baa 0x005eeec0
DWORD* S_005eeec0::sub_005eeec0(INT Index)
{
    return &Items(Index);
}

struct S_005eef10 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_005eef10(INT Index);
};

// @baa 0x005eef10
DWORD* S_005eef10::sub_005eef10(INT Index)
{
    return &Items(Index);
}

int sub_00630f20(...);
extern undefined4 g_026667a8;
// @baa 0x005eef60
void sub_005eef60(wchar_t * param_1)
{
  if (param_1 == (wchar_t *)0x0) {
    param_1 = L"Unknown file";
  }
  sub_00630f20(g_026667a8,L"I/O failure operating on \'%s\'",param_1);
  return;
}

struct E { BYTE Bytes[16]; };

struct S_005ef250 {
    TArray<E> Items; // 0x00
    E* sub_005ef250(INT Index);
};

// @baa 0x005ef250
E* S_005ef250::sub_005ef250(INT Index)
{
    return &Items(Index);
}

struct C_005ef370 {
    int sub_005ef370(int);
};

// @baa 0x005ef370
int C_005ef370::sub_005ef370(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x005ef380
void __stdcall sub_005ef380(int a0, int a1) {  }

struct S_005ef390 { int sub_00544d40(int); };

// @baa 0x005ef390
int sub_005ef390(S_005ef390 *s, int a) { return s->sub_00544d40(a); }

struct C_005ef3a0 { int sub_005ef3a0(void); };

// @baa 0x005ef3a0
int C_005ef3a0::sub_005ef3a0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_005ef430 {
    int sub_005ef430(int);
};

// @baa 0x005ef430
int C_005ef430::sub_005ef430(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_005ef440 {
    int sub_005ef440(int);
};

// @baa 0x005ef440
int C_005ef440::sub_005ef440(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_005ef450 {
    int sub_005ef450();
};

// @baa 0x005ef450
int C_005ef450::sub_005ef450(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005ef470 {
    int sub_005ef470();
};

// @baa 0x005ef470
int C_005ef470::sub_005ef470(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005ef490 {
    int sub_005ef490();
};

// @baa 0x005ef490
int C_005ef490::sub_005ef490(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_005ef540 {
    void sub_005ef540(undefined4, undefined4);
};

// @baa 0x005ef540
void C_005ef540::sub_005ef540(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3);
  return;
}

struct C_005efbc0 {
    undefined4 * sub_005efbc0(byte);
};

// @baa 0x005efbc0
undefined4 * C_005efbc0::sub_005efbc0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e729c0);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_005efc10 {
    undefined4 * sub_005efc10(byte);
};

// @baa 0x005efc10
undefined4 * C_005efc10::sub_005efc10(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e729c0);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_005efc30 {
    undefined4 * sub_005efc30(byte);
};

// @baa 0x005efc30
undefined4 * C_005efc30::sub_005efc30(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e729c0);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_005efcd0 {
    undefined4 sub_005efcd0(byte);
};

int sub_005ee880(void);
// @baa 0x005efcd0
undefined4 C_005efcd0::sub_005efcd0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005ee880();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

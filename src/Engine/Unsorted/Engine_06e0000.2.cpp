// Engine_06e0000.cpp (part 2 of 14): 338 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C { int sub_006e0070(void); };

// @baa 0x006e0070
int C::sub_006e0070(void) { return *(int*)((char*)this + 0); }

struct C_006e0080 { int sub_006e0080(void); };

// @baa 0x006e0080
int C_006e0080::sub_006e0080(void) { return *(int*)((char*)this + 0); }

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_006e0090(INT Index);
};

// @baa 0x006e0090
DWORD* S::sub_006e0090(INT Index)
{
    return &Items(Index);
}

struct C_006e00e0 { int sub_006e00e0(void); };

// @baa 0x006e00e0
int C_006e00e0::sub_006e00e0(void) { return *(int*)((char*)this + 0); }

struct C_006e00f0 { int sub_006e00f0(void); };

// @baa 0x006e00f0
int C_006e00f0::sub_006e00f0(void) { return *(int*)((char*)this + 0); }

struct C_006e0100 { int sub_006e0100(void); };

// @baa 0x006e0100
int C_006e0100::sub_006e0100(void) { return *(int*)((char*)this + 0); }

struct C_006e0110 { int sub_006e0110(void); };

// @baa 0x006e0110
int C_006e0110::sub_006e0110(void) { return *(int*)((char*)this + 0); }

struct C_006e0120 { int sub_006e0120(void); };

// @baa 0x006e0120
int C_006e0120::sub_006e0120(void) { return *(int*)((char*)this + 0); }

struct C_006e0130 { int sub_006e0130(void); };

// @baa 0x006e0130
int C_006e0130::sub_006e0130(void) { return *(int*)((char*)this + 0); }

struct C_006e0140 { int sub_006e0140(void); };

// @baa 0x006e0140
int C_006e0140::sub_006e0140(void) { return *(int*)((char*)this + 0); }

struct C_006e0150 { int sub_006e0150(void); };

// @baa 0x006e0150
int C_006e0150::sub_006e0150(void) { return *(int*)((char*)this + 0); }

// @baa 0x006e0160
int sub_006e0160(int a0) { return *(int*)a0; }

// @baa 0x006e0170
undefined4 sub_006e0170(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_006e01d0 {
    void sub_006e01d0(int *);
};

// @baa 0x006e01d0
void C_006e01d0::sub_006e01d0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 8;
  return;
}

// @baa 0x006e0220
int sub_006e0220(int a0) { return *(int*)a0; }

// @baa 0x006e0230
undefined4 sub_006e0230(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_006e0280 { int sub_006e0280(void); };

// @baa 0x006e0280
int C_006e0280::sub_006e0280(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x006e02c0
int sub_006e02c0(int a0) { return *(int*)a0; }

// @baa 0x006e02d0
undefined4 sub_006e02d0(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_006e0310 {
    void sub_006e0310(int *);
};

// @baa 0x006e0310
void C_006e0310::sub_006e0310(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 8);
  return;
}

struct C_006e0320 { int sub_006e0320(void); };

// @baa 0x006e0320
int C_006e0320::sub_006e0320(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x006e0360
int sub_006e0360(int a0) { return *(int*)a0; }

// @baa 0x006e0370
undefined4 sub_006e0370(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_006e0390 {
    void sub_006e0390(int *);
};

// @baa 0x006e0390
void C_006e0390::sub_006e0390(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 8;
  return;
}

// @baa 0x006e03a0
int sub_006e03a0(int a0) { return *(int*)a0; }

// @baa 0x006e03b0
undefined4 sub_006e03b0(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_006e03d0 {
    void sub_006e03d0(int *);
};

// @baa 0x006e03d0
void C_006e03d0::sub_006e03d0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 8;
  return;
}

// @baa 0x006e03e0
int sub_006e03e0(int a0) { return *(int*)a0; }

// @baa 0x006e03f0
undefined4 sub_006e03f0(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_006e0430 {
    void sub_006e0430(int *);
};

// @baa 0x006e0430
void C_006e0430::sub_006e0430(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 8);
  return;
}

struct C_006e0440 { int sub_006e0440(void); };

// @baa 0x006e0440
int C_006e0440::sub_006e0440(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_006e04a0 { int sub_006e04a0(void); };

// @baa 0x006e04a0
int C_006e04a0::sub_006e04a0(void) { return *(int*)((char*)this + 0); }

struct C_006e04b0 { int sub_006e04b0(void); };

// @baa 0x006e04b0
int C_006e04b0::sub_006e04b0(void) { return *(int*)((char*)this + 0); }

struct C_006e04c0 { int sub_006e04c0(void); };

// @baa 0x006e04c0
int C_006e04c0::sub_006e04c0(void) { return *(int*)((char*)this + 0); }

struct C_006e04d0 { int sub_006e04d0(void); };

// @baa 0x006e04d0
int C_006e04d0::sub_006e04d0(void) { return *(int*)((char*)this + 0); }

struct C_006e0560 { int sub_006e0560(void); };

// @baa 0x006e0560
int C_006e0560::sub_006e0560(void) { return *(int*)((char*)this + 4); }

struct C_006e0630 { C_006e0630* sub_006e0630(void); };

// @baa 0x006e0630
C_006e0630* C_006e0630::sub_006e0630(void) { return this; }

struct C_006e0670 {
    int sub_006e0670(int);
};

// @baa 0x006e0670
int C_006e0670::sub_006e0670(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_006e0680 { int sub_006e0680(void); };

// @baa 0x006e0680
int C_006e0680::sub_006e0680(void) { return *(int*)((char*)this + 0); }

struct C_006e0690 { int sub_006e0690(void); };

// @baa 0x006e0690
int C_006e0690::sub_006e0690(void) { return *(int*)((char*)this + 0); }

struct C_006e06a0 { int sub_006e06a0(void); };

// @baa 0x006e06a0
int C_006e06a0::sub_006e06a0(void) { return *(int*)((char*)this + 0); }

struct C_006e06b0 { int sub_006e06b0(void); };

// @baa 0x006e06b0
int C_006e06b0::sub_006e06b0(void) { return *(int*)((char*)this + 20); }

struct C_006e06c0 { int sub_006e06c0(void); };

// @baa 0x006e06c0
int C_006e06c0::sub_006e06c0(void) { return *(int*)((char*)this + 20); }

struct C_006e06d0 { int sub_006e06d0(void); };

// @baa 0x006e06d0
int C_006e06d0::sub_006e06d0(void) { return *(int*)((char*)this + 20); }

struct C_006e06e0 { int sub_006e06e0(void); };

// @baa 0x006e06e0
int C_006e06e0::sub_006e06e0(void) { return *(int*)((char*)this + 20); }

struct C_006e06f0 { int sub_006e06f0(void); };

// @baa 0x006e06f0
int C_006e06f0::sub_006e06f0(void) { return *(int*)((char*)this + 20); }

struct C_006e0700 { int sub_006e0700(void); };

// @baa 0x006e0700
int C_006e0700::sub_006e0700(void) { return *(int*)((char*)this + 20); }

struct C_006e0710 { int sub_006e0710(void); };

// @baa 0x006e0710
int C_006e0710::sub_006e0710(void) { return *(int*)((char*)this + 20); }

struct C_006e0720 { int sub_006e0720(void); };

// @baa 0x006e0720
int C_006e0720::sub_006e0720(void) { return *(int*)((char*)this + 20); }

struct C_006e0730 { int sub_006e0730(void); };

// @baa 0x006e0730
int C_006e0730::sub_006e0730(void) { return *(int*)((char*)this + 20); }

struct C_006e0740 { int sub_006e0740(void); };

// @baa 0x006e0740
int C_006e0740::sub_006e0740(void) { return *(int*)((char*)this + 20); }

struct C_006e0750 { int sub_006e0750(void); };

// @baa 0x006e0750
int C_006e0750::sub_006e0750(void) { return *(int*)((char*)this + 20); }

struct C_006e0760 { int sub_006e0760(void); };

// @baa 0x006e0760
int C_006e0760::sub_006e0760(void) { return *(int*)((char*)this + 20); }

struct C_006e0770 { int sub_006e0770(void); };

// @baa 0x006e0770
int C_006e0770::sub_006e0770(void) { return *(int*)((char*)this + 20); }

struct C_006e0780 {
    int sub_006e0780(int);
};

// @baa 0x006e0780
int C_006e0780::sub_006e0780(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_006e0790 { int a, b, c; C_006e0790(); };

// @baa 0x006e0790
C_006e0790::C_006e0790() : a(0), b(0), c(0) {}

struct C_006e07a0 { int sub_006e07a0(void); };

// @baa 0x006e07a0
int C_006e07a0::sub_006e07a0(void) { return *(int*)((char*)this + 0); }

struct C_006e07b0 { int sub_006e07b0(void); };

// @baa 0x006e07b0
int C_006e07b0::sub_006e07b0(void) { return *(int*)((char*)this + 20); }

struct C_006e07c0 { int sub_006e07c0(void); };

// @baa 0x006e07c0
int C_006e07c0::sub_006e07c0(void) { return *(int*)((char*)this + 20); }

struct C_006e07d0 { int sub_006e07d0(void); };

// @baa 0x006e07d0
int C_006e07d0::sub_006e07d0(void) { return *(int*)((char*)this + 20); }

struct C_006e07e0 { int sub_006e07e0(void); };

// @baa 0x006e07e0
int C_006e07e0::sub_006e07e0(void) { return *(int*)((char*)this + 0); }

struct C_006e07f0 { int sub_006e07f0(void); };

// @baa 0x006e07f0
int C_006e07f0::sub_006e07f0(void) { return *(int*)((char*)this + 0); }

struct C_006e0800 { int sub_006e0800(void); };

// @baa 0x006e0800
int C_006e0800::sub_006e0800(void) { return *(int*)((char*)this + 0); }

struct C_006e0810 { int sub_006e0810(void); };

// @baa 0x006e0810
int C_006e0810::sub_006e0810(void) { return *(int*)((char*)this + 0); }

struct C_006e0820 { int sub_006e0820(void); };

// @baa 0x006e0820
int C_006e0820::sub_006e0820(void) { return *(int*)((char*)this + 0); }

struct C_006e0830 { int sub_006e0830(void); };

// @baa 0x006e0830
int C_006e0830::sub_006e0830(void) { return *(int*)((char*)this + 0); }

struct C_006e0840 { int sub_006e0840(void); };

// @baa 0x006e0840
int C_006e0840::sub_006e0840(void) { return *(int*)((char*)this + 0); }

struct C_006e0850 { int sub_006e0850(void); };

// @baa 0x006e0850
int C_006e0850::sub_006e0850(void) { return *(int*)((char*)this + 0); }

struct C_006e0860 { int sub_006e0860(void); };

// @baa 0x006e0860
int C_006e0860::sub_006e0860(void) { return *(int*)((char*)this + 0); }

struct C_006e0870 { int sub_006e0870(void); };

// @baa 0x006e0870
int C_006e0870::sub_006e0870(void) { return *(int*)((char*)this + 0); }

struct C_006e0880 { int sub_006e0880(void); };

// @baa 0x006e0880
int C_006e0880::sub_006e0880(void) { return *(int*)((char*)this + 0); }

struct C_006e0890 { int sub_006e0890(void); };

// @baa 0x006e0890
int C_006e0890::sub_006e0890(void) { return *(int*)((char*)this + 0); }

struct C_006e08c0 { int sub_006e08c0(void); };

// @baa 0x006e08c0
int C_006e08c0::sub_006e08c0(void) { return *(int*)((char*)this + 0); }

struct C_006e08f0 { int sub_006e08f0(void); };

// @baa 0x006e08f0
int C_006e08f0::sub_006e08f0(void) { return *(int*)((char*)this + 0); }

struct C_006e0920 { int sub_006e0920(void); };

// @baa 0x006e0920
int C_006e0920::sub_006e0920(void) { return *(int*)((char*)this + 0); }

int sub_005eae70(...);
int sub_0072a530(void);
int sub_00733250(...);
extern undefined4 g_026b2250;
// @baa 0x006e09f0
void sub_006e09f0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  sub_005eae70(g_026b2250,param_1,param_2,param_3,param_4,param_5,1);
  return;
}

struct S_006e0d00 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_006e0d00(INT Index) const;
};

// @baa 0x006e0d00
const DWORD* S_006e0d00::sub_006e0d00(INT Index) const
{
    return &Items(Index);
}

struct E { BYTE Bytes[20]; };

struct S_006e0d50 {
    TArray<E> Items; // 0x00
    const E* sub_006e0d50(INT Index) const;
};

// @baa 0x006e0d50
const E* S_006e0d50::sub_006e0d50(INT Index) const
{
    return &Items(Index);
}

struct E_006e0e10 { BYTE Bytes[16]; };

struct S_006e0e10 {
    TArray<E_006e0e10> Items; // 0x00
    const E_006e0e10* sub_006e0e10(INT Index) const;
};

// @baa 0x006e0e10
const E_006e0e10* S_006e0e10::sub_006e0e10(INT Index) const
{
    return &Items(Index);
}

struct E_006e0ed0 { BYTE Bytes[16]; };

struct S_006e0ed0 {
    TArray<E_006e0ed0> Items; // 0x00
    const E_006e0ed0* sub_006e0ed0(INT Index) const;
};

// @baa 0x006e0ed0
const E_006e0ed0* S_006e0ed0::sub_006e0ed0(INT Index) const
{
    return &Items(Index);
}

struct E_006e1060 { BYTE Bytes[44]; };

struct S_006e1060 {
    TArray<E_006e1060> Items; // 0x00
    const E_006e1060* sub_006e1060(INT Index) const;
};

// @baa 0x006e1060
const E_006e1060* S_006e1060::sub_006e1060(INT Index) const
{
    return &Items(Index);
}

struct E_006e11f0 { BYTE Bytes[40]; };

struct S_006e11f0 {
    TArray<E_006e11f0> Items; // 0x00
    const E_006e11f0* sub_006e11f0(INT Index) const;
};

// @baa 0x006e11f0
const E_006e11f0* S_006e11f0::sub_006e11f0(INT Index) const
{
    return &Items(Index);
}

struct E_006e12c0 { BYTE Bytes[68]; };

struct S_006e12c0 {
    TArray<E_006e12c0> Items; // 0x00
    const E_006e12c0* sub_006e12c0(INT Index) const;
};

// @baa 0x006e12c0
const E_006e12c0* S_006e12c0::sub_006e12c0(INT Index) const
{
    return &Items(Index);
}

// @baa 0x006e1420
int sub_006e1420(int a0) { return a0; }

struct C_006e1430 { int sub_006e1430(void); };

// @baa 0x006e1430
int C_006e1430::sub_006e1430(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x006e1460
undefined4 sub_006e1460(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_006e14a0 {
    int sub_006e14a0(int);
};

// @baa 0x006e14a0
int C_006e14a0::sub_006e14a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_006e14b0 {
    int sub_006e14b0(int);
};

// @baa 0x006e14b0
int C_006e14b0::sub_006e14b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_006e14c0 { int sub_006e14c0(void); };

// @baa 0x006e14c0
int C_006e14c0::sub_006e14c0(void) { return *(int*)((char*)this + 20); }

struct C_006e14d0 { int sub_006e14d0(void); };

// @baa 0x006e14d0
int C_006e14d0::sub_006e14d0(void) { return *(int*)((char*)this + 20); }

// @baa 0x006e14e0
void sub_006e14e0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct A_006e1500 { virtual void sub_006e1df0(); };

struct B_006e1500 { virtual void sub_006e1df0(); };

struct C_006e1500 : A_006e1500, B_006e1500 { virtual void sub_006e1df0(); C_006e1500(); };

C_006e1500::C_006e1500() {}

// @baa 0x006e1500
void C_006e1500::sub_006e1df0() {}

int sub_0053dfa0(...);
int sub_00c38ac0(void);
// @baa 0x006e1dd0
undefined4 UObject::sub_006e1dd0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006e1fc0 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_006e1fc0* sub_006e1fc0();
};

extern INT g_01ed9470;
// @baa 0x006e1fc0
C_006e1fc0* C_006e1fc0::sub_006e1fc0()
{
    Value04 = 0;
    Unk00 = &g_01ed9470;
    return this;
}

extern char g_025d7a00[];
// @baa 0x006e1fd0
int sub_006e1fd0(void) { return (int)g_025d7a00; }

struct C_006e2040 {
    void sub_006e2040(undefined4, undefined4 *);
};

// @baa 0x006e2040
void C_006e2040::sub_006e2040(undefined4 param_2, undefined4 * param_3)
{
    int param_1 = (int)this;

  *param_3 = *(undefined4 *)(param_1 + 8);
  param_3[1] = *(undefined4 *)(param_1 + 0xc);
  param_3[2] = *(undefined4 *)(param_1 + 0x10);
  param_3[3] = *(undefined4 *)(param_1 + 0x14);
  return;
}

// @baa 0x006e2060
int sub_006e2060(void) { return 1; }

struct C_006e2070 {
    undefined4 sub_006e2070(int);
};

// @baa 0x006e2070
undefined4 C_006e2070::sub_006e2070(int param_2)
{
    int param_1 = (int)this;
  if ((((*(char *)(param_2 + 0x18) == *(char *)(param_1 + 0x18)) &&
       (*(float *)(param_2 + 8) == *(float *)(param_1 + 8))) &&
      (*(float *)(param_2 + 0xc) == *(float *)(param_1 + 0xc))) &&
     ((*(float *)(param_2 + 0x10) == *(float *)(param_1 + 0x10) &&
      (*(float *)(param_2 + 0x14) == *(float *)(param_1 + 0x14))))) {
    return 1;
  }
  return 0;
}

struct C_006e20d0 {
    void sub_006e20d0();
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
extern undefined4 g_01ec1274;
// @baa 0x006e20d0
void C_006e20d0::sub_006e20d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_006e2100 {
    undefined4 * sub_006e2100(byte);
};

// @baa 0x006e2100
undefined4 * C_006e2100::sub_006e2100(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0053df40(...);
extern undefined * g_01ed9220;
// @baa 0x006e2140
undefined4 * sub_006e2140(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0xc,8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = (undefined4)(&g_01ed9220);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_006e21e0 {
    undefined4 * sub_006e21e0(byte);
};

// @baa 0x006e21e0
undefined4 * C_006e21e0::sub_006e21e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01ed9240;
// @baa 0x006e2220
undefined4 * sub_006e2220(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(8,8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = (undefined4)(&g_01ed9240);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_006e2250 {
    undefined4 * sub_006e2250(byte);
};

// @baa 0x006e2250
undefined4 * C_006e2250::sub_006e2250(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01ed9260;
// @baa 0x006e2290
undefined4 * sub_006e2290(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(8,8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = (undefined4)(&g_01ed9260);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_006e22c0 {
    undefined4 * sub_006e22c0(byte);
};

// @baa 0x006e22c0
undefined4 * C_006e22c0::sub_006e22c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01ed9280;
// @baa 0x006e2300
undefined4 * sub_006e2300(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x20,8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = (undefined4)(&g_01ed9280);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_006e2330 {
    undefined4 * sub_006e2330(byte);
};

// @baa 0x006e2330
undefined4 * C_006e2330::sub_006e2330(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01ed92a0;
// @baa 0x006e2370
undefined4 * sub_006e2370(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x14,8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = (undefined4)(&g_01ed92a0);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_006e23a0 {
    undefined4 * sub_006e23a0(byte);
};

// @baa 0x006e23a0
undefined4 * C_006e23a0::sub_006e23a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01ed92c0;
// @baa 0x006e23e0
undefined4 * sub_006e23e0(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x14,8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = (undefined4)(&g_01ed92c0);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_006e2410 {
    undefined4 * sub_006e2410(byte);
};

// @baa 0x006e2410
undefined4 * C_006e2410::sub_006e2410(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01ed92e0;
// @baa 0x006e2450
undefined4 * sub_006e2450(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0xc,8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = (undefined4)(&g_01ed92e0);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_006e2480 {
    undefined4 * sub_006e2480(byte);
};

// @baa 0x006e2480
undefined4 * C_006e2480::sub_006e2480(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_025d7a40[];
// @baa 0x006e24e0
int sub_006e24e0(void) { return (int)g_025d7a40; }

struct Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void e();
};

struct C_006e2570 {
    char f0[8];
    Obj* f8;
    void sub_006e2570();
};

void Obj::e() {}

// @baa 0x006e2570
void C_006e2570::sub_006e2570()
{
    f8->e();
}

struct C_006e2580 {
    undefined4 sub_006e2580(int);
};

// @baa 0x006e2580
undefined4 C_006e2580::sub_006e2580(int param_2)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) &&
     (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))) {
    return 1;
  }
  return 0;
}

extern char g_025d7a48[];
// @baa 0x006e2660
int sub_006e2660(void) { return (int)g_025d7a48; }

struct IFace {
    virtual void v0() = 0;
    virtual void v1() = 0;
    virtual void v2() = 0;
    virtual void v3() = 0;
    virtual void v4() = 0;
    virtual void v5() = 0;
    virtual void v6() = 0;
};

struct C_006e26c0 {
    char pad[8];
    IFace* p;
    void sub_006e26c0();
};

// @baa 0x006e26c0
void C_006e26c0::sub_006e26c0()
{
    p->v6();
}

extern char g_025d7a50[];
// @baa 0x006e27e0
int sub_006e27e0(void) { return (int)g_025d7a50; }

struct C_006e2a90 {
    undefined4 sub_006e2a90(int);
};

// @baa 0x006e2a90
undefined4 C_006e2a90::sub_006e2a90(int param_2)
{
    int param_1 = (int)this;

  if (((*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) &&
      (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))) &&
     (*(char *)(param_1 + 0x10) == *(char *)(param_2 + 0x10))) {
    return 1;
  }
  return 0;
}

extern char g_025d7a58[];
// @baa 0x006e2b90
int sub_006e2b90(void) { return (int)g_025d7a58; }

struct C_006e2ca0 {
    char pad[8];
    IFace* p;
    void sub_006e2ca0();
};

// @baa 0x006e2ca0
void C_006e2ca0::sub_006e2ca0()
{
    p->v6();
}

extern char g_025d7a60[];
// @baa 0x006e2d80
int sub_006e2d80(void) { return (int)g_025d7a60; }

struct C_006e2ed0 {
    undefined4 sub_006e2ed0(int);
};

// @baa 0x006e2ed0
undefined4 C_006e2ed0::sub_006e2ed0(int param_2)
{
    int param_1 = (int)this;

  if (((*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) &&
      (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))) &&
     (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10))) {
    return 1;
  }
  return 0;
}

extern char g_025d7a68[];
// @baa 0x006e2fd0
int sub_006e2fd0(void) { return (int)g_025d7a68; }

struct C_006e30f0 {
    undefined4 sub_006e30f0(int);
};

// @baa 0x006e30f0
undefined4 C_006e30f0::sub_006e30f0(int param_2)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) &&
     (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))) {
    return 1;
  }
  return 0;
}

extern char g_025d7a70[];
// @baa 0x006e31f0
int sub_006e31f0(void) { return (int)g_025d7a70; }

struct C_006e3310 {
    undefined4 sub_006e3310(int);
};

// @baa 0x006e3310
undefined4 C_006e3310::sub_006e3310(int param_2)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) &&
     (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))) {
    return 1;
  }
  return 0;
}

extern char g_025d7a78[];
// @baa 0x006e3410
int sub_006e3410(void) { return (int)g_025d7a78; }

struct C_006e3590 {
    undefined4 sub_006e3590(int);
};

// @baa 0x006e3590
undefined4 C_006e3590::sub_006e3590(int param_2)
{
    int param_1 = (int)this;

  if (((*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) &&
      (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))) &&
     (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10))) {
    return 1;
  }
  return 0;
}

extern char g_025d7a80[];
// @baa 0x006e36b0
int sub_006e36b0(void) { return (int)g_025d7a80; }

struct C_006e37a0 {
    char pad[8];
    IFace* p;
    void sub_006e37a0();
};

// @baa 0x006e37a0
void C_006e37a0::sub_006e37a0()
{
    p->v6();
}

extern char g_025d7a88[];
// @baa 0x006e3880
int sub_006e3880(void) { return (int)g_025d7a88; }

struct C_006e3940 {
    char pad[8];
    IFace* p;
    void sub_006e3940();
};

// @baa 0x006e3940
void C_006e3940::sub_006e3940()
{
    p->v6();
}

extern char g_025d7a90[];
// @baa 0x006e3a20
int sub_006e3a20(void) { return (int)g_025d7a90; }

struct C_006e3b30 {
    char pad[8];
    IFace* p;
    void sub_006e3b30();
};

// @baa 0x006e3b30
void C_006e3b30::sub_006e3b30()
{
    p->v6();
}

extern char g_025d7a98[];
// @baa 0x006e3c10
int sub_006e3c10(void) { return (int)g_025d7a98; }

struct C_006e3c60 {
    char pad[8];
    IFace* p;
    void sub_006e3c60();
};

// @baa 0x006e3c60
void C_006e3c60::sub_006e3c60()
{
    p->v6();
}

struct C_006e6150 {
    int sub_006e6150();
};

// @baa 0x006e6150
int C_006e6150::sub_006e6150(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4;
}

struct C_006e6160 {
    void sub_006e6160(int);
};

int sub_0053df70(...);
// @baa 0x006e6160
void C_006e6160::sub_006e6160(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct S_006e6210 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_006e6210(INT Index) const;
};

// @baa 0x006e6210
const DWORD* S_006e6210::sub_006e6210(INT Index) const
{
    return &Items(Index);
}

struct S_006e63a0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_006e63a0(INT Index) const;
};

// @baa 0x006e63a0
const DWORD* S_006e63a0::sub_006e63a0(INT Index) const
{
    return &Items(Index);
}

typedef uint size_t;

struct C_006e63f0 {
    int sub_006e63f0(int);
    int sub_006dfb00(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x006e63f0
int C_006e63f0::sub_006e63f0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_006e63f0 *)(this))->sub_006dfb00(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 4),0,param_2 * 4);
  return iVar1;
}

struct S_006e6490 {
    TArray<E> Items; // 0x00
    const E* sub_006e6490(INT Index) const;
};

// @baa 0x006e6490
const E* S_006e6490::sub_006e6490(INT Index) const
{
    return &Items(Index);
}

struct E_006e64e0 { BYTE Bytes[44]; };

struct S_006e64e0 {
    TArray<E_006e64e0> Items; // 0x00
    const E_006e64e0* sub_006e64e0(INT Index) const;
};

// @baa 0x006e64e0
const E_006e64e0* S_006e64e0::sub_006e64e0(INT Index) const
{
    return &Items(Index);
}

struct S_006e6530 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_006e6530(INT Index);
};

// @baa 0x006e6530
DWORD* S_006e6530::sub_006e6530(INT Index)
{
    return &Items(Index);
}

struct FFaceFXElement
{
	INT X;    // 0x00
	INT Y;    // 0x04
	INT Z;    // 0x08
	INT W;    // 0x0c
	INT Unk10;// 0x10
};

struct UFxRenderWidget
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_006e6580(INT Index);
};

// @baa 0x006e6580
FFaceFXElement* UFxRenderWidget::sub_006e6580(INT Index)
{
	return &BoneArray(Index);
}

struct E_006e65d0 { BYTE Bytes[16]; };

struct S_006e65d0 {
    TArray<E_006e65d0> Items; // 0x00
    E_006e65d0* sub_006e65d0(INT Index);
};

// @baa 0x006e65d0
E_006e65d0* S_006e65d0::sub_006e65d0(INT Index)
{
    return &Items(Index);
}

struct E_006e6620 { BYTE Bytes[16]; };

struct S_006e6620 {
    TArray<E_006e6620> Items; // 0x00
    E_006e6620* sub_006e6620(INT Index);
};

// @baa 0x006e6620
E_006e6620* S_006e6620::sub_006e6620(INT Index)
{
    return &Items(Index);
}

struct E_006e66c0 { BYTE Bytes[44]; };

struct S_006e66c0 {
    TArray<E_006e66c0> Items; // 0x00
    E_006e66c0* sub_006e66c0(INT Index);
};

// @baa 0x006e66c0
E_006e66c0* S_006e66c0::sub_006e66c0(INT Index)
{
    return &Items(Index);
}

struct E_006e6760 { BYTE Bytes[40]; };

struct S_006e6760 {
    TArray<E_006e6760> Items; // 0x00
    E_006e6760* sub_006e6760(INT Index);
};

// @baa 0x006e6760
E_006e6760* S_006e6760::sub_006e6760(INT Index)
{
    return &Items(Index);
}

struct E_006e67b0 { BYTE Bytes[68]; };

struct S_006e67b0 {
    TArray<E_006e67b0> Items; // 0x00
    E_006e67b0* sub_006e67b0(INT Index);
};

// @baa 0x006e67b0
E_006e67b0* S_006e67b0::sub_006e67b0(INT Index)
{
    return &Items(Index);
}

// @baa 0x006e6800
bool sub_006e6800(int param_1)
{
  return param_1 != 2;
}

// @baa 0x006e6810
int sub_006e6810(void) { return 1; }

// @baa 0x006e6820
undefined4 sub_006e6820(int param_1)
{
  if ((param_1 != 0) && (param_1 != 1)) {
    return 0;
  }
  return 1;
}

// @baa 0x006e6840
bool sub_006e6840(int param_1)
{
  return param_1 == 0;
}

// @baa 0x006e6850
bool sub_006e6850(int param_1)
{
  return param_1 != 3;
}

struct E_006e6860 { BYTE Bytes[36]; };

struct S_006e6860 {
    TArray<E_006e6860> Items; // 0x00
    E_006e6860* sub_006e6860(INT Index);
};

// @baa 0x006e6860
E_006e6860* S_006e6860::sub_006e6860(INT Index)
{
    return &Items(Index);
}

// @baa 0x006e6910
void __stdcall sub_006e6910(int a0, int a1) {  }

struct C_006e6980 {
    int sub_006e6980(int);
};

// @baa 0x006e6980
int C_006e6980::sub_006e6980(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_006e6990 {
    int sub_006e6990(int);
};

// @baa 0x006e6990
int C_006e6990::sub_006e6990(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x006e69a0
void __stdcall sub_006e69a0(int a0, int a1) {  }

struct C_006e69b0 {
    int sub_006e69b0(int);
};

// @baa 0x006e69b0
int C_006e69b0::sub_006e69b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x006e69c0
void __stdcall sub_006e69c0(int a0, int a1) {  }

struct C_006e69d0 {
    int sub_006e69d0(int);
};

// @baa 0x006e69d0
int C_006e69d0::sub_006e69d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x006e69e0
void __stdcall sub_006e69e0(int a0, int a1) {  }

struct C_006e69f0 {
    int sub_006e69f0(int);
};

// @baa 0x006e69f0
int C_006e69f0::sub_006e69f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x006e6a00
void __stdcall sub_006e6a00(int a0, int a1) {  }

struct C_006e6a10 {
    int sub_006e6a10(int);
};

// @baa 0x006e6a10
int C_006e6a10::sub_006e6a10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x006e6a30
void __stdcall sub_006e6a30(int a0, int a1) {  }

struct C_006e6a40 {
    int sub_006e6a40(int);
};

// @baa 0x006e6a40
int C_006e6a40::sub_006e6a40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

// @baa 0x006e6a50
void __stdcall sub_006e6a50(int a0, int a1) {  }

struct C_006e6a60 {
    int sub_006e6a60(int);
};

// @baa 0x006e6a60
int C_006e6a60::sub_006e6a60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x38;
}

struct C_006e6a80 {
    int sub_006e6a80(int);
};

// @baa 0x006e6a80
int C_006e6a80::sub_006e6a80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

// @baa 0x006e6a90
void __stdcall sub_006e6a90(int a0, int a1) {  }

struct C_006e6aa0 {
    int sub_006e6aa0(int);
};

// @baa 0x006e6aa0
int C_006e6aa0::sub_006e6aa0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x44;
}

struct C_006e6b70 {
    void sub_006e6b70(undefined4);
};

int sub_00716170(...);
// @baa 0x006e6b70
void C_006e6b70::sub_006e6b70(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00716170(param_2,param_1);
  return;
}

struct C_006e6b90 {
    uint sub_006e6b90(undefined4);
    int sub_0073f030(int);
};

int sub_009e0e10(...);
// @baa 0x006e6b90
uint C_006e6b90::sub_006e6b90(undefined4 param_2)
{
    int param_1 = (int)this;
  uint uVar1;
  uint uVar2;
  uVar1 = ((C_006e6b90 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  uVar2 = sub_009e0e10(param_2,param_1 + 0x54);
  return uVar2 | uVar1;
}

struct A_006e6c20 { virtual void sub_006e7070(); char pad[16]; };

struct B_006e6c20 { virtual void sub_006e7070(); };

struct C_006e6c20 : A_006e6c20, B_006e6c20 { virtual void sub_006e7070(); C_006e6c20(); };

C_006e6c20::C_006e6c20() {}

// @baa 0x006e6c20
void C_006e6c20::sub_006e7070() {}

struct C_006e6d00 {
    uint sub_006e6d00(undefined4);
    int sub_0073f030(int);
};

// @baa 0x006e6d00
uint C_006e6d00::sub_006e6d00(undefined4 param_2)
{
    int param_1 = (int)this;
  uint uVar1;
  uint uVar2;
  uVar1 = ((C_006e6d00 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x52);
  uVar2 = sub_009e0e10(param_2,param_1 + 0x58);
  return uVar2 | uVar1;
}

struct A_006e6da0 { virtual void sub_006e7090(); char pad[16]; };

struct B_006e6da0 { virtual void sub_006e7090(); };

struct C_006e6da0 : A_006e6da0, B_006e6da0 { virtual void sub_006e7090(); C_006e6da0(); };

C_006e6da0::C_006e6da0() {}

// @baa 0x006e6da0
void C_006e6da0::sub_006e7090() {}

struct C_006e6e60 {
    uint sub_006e6e60(undefined4);
    int sub_0073f030(int);
};

// @baa 0x006e6e60
uint C_006e6e60::sub_006e6e60(undefined4 param_2)
{
    int param_1 = (int)this;
  uint uVar1;
  uint uVar2;
  uVar1 = ((C_006e6e60 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  uVar2 = sub_009e0e10(param_2,param_1 + 0x54);
  return uVar2 | uVar1;
}

struct A_006e6ef0 { virtual void sub_006e70b0(); char pad[16]; };

struct B_006e6ef0 { virtual void sub_006e70b0(); };

struct C_006e6ef0 : A_006e6ef0, B_006e6ef0 { virtual void sub_006e70b0(); C_006e6ef0(); };

C_006e6ef0::C_006e6ef0() {}

// @baa 0x006e6ef0
void C_006e6ef0::sub_006e70b0() {}

struct C_006e6fa0 {
    void sub_006e6fa0(undefined4);
};

// @baa 0x006e6fa0
void C_006e6fa0::sub_006e6fa0(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_00716170(param_2,param_1);
  sub_00716170(param_2,param_1 + 6);
  return;
}

void sub_007249d0();
// @baa 0x006e7000
void sub_006e7000() { sub_007249d0(); }

struct A_006e7010 { virtual void sub_006e70d0(); char pad[16]; };

struct B_006e7010 { virtual void sub_006e70d0(); };

struct C_006e7010 : A_006e7010, B_006e7010 { virtual void sub_006e70d0(); C_006e7010(); };

C_006e7010::C_006e7010() {}

// @baa 0x006e7010
void C_006e7010::sub_006e70d0() {}

struct C_006e7050 {
    int sub_006e7050(int);
};

// @baa 0x006e7050
int C_006e7050::sub_006e7050(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

// @baa 0x006e7060
void __stdcall sub_006e7060(int a0, int a1) {  }

struct C_006e7070 {
    undefined4 sub_006e7070(byte);
};

int sub_006e6bc0(void);
// @baa 0x006e7070
undefined4 C_006e7070::sub_006e7070(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006e6bc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006e7090 {
    undefined4 sub_006e7090(byte);
};

int sub_006e6d40(void);
// @baa 0x006e7090
undefined4 C_006e7090::sub_006e7090(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006e6d40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006e70b0 {
    undefined4 sub_006e70b0(byte);
};

int sub_006e6e90(void);
// @baa 0x006e70b0
undefined4 C_006e70b0::sub_006e70b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006e6e90();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006e7120 { int sub_006e7120(void); };

// @baa 0x006e7120
int C_006e7120::sub_006e7120(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct E_006e7130 { BYTE Bytes[16]; };

struct S_006e7130 {
    TArray<E_006e7130> Items; // 0x00
    E_006e7130* sub_006e7130(INT Index);
};

// @baa 0x006e7130
E_006e7130* S_006e7130::sub_006e7130(INT Index)
{
    return &Items(Index);
}

struct S_006e7180 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_006e7180(INT Index);
};

// @baa 0x006e7180
DWORD* S_006e7180::sub_006e7180(INT Index)
{
    return &Items(Index);
}

struct E_006e71d0 { BYTE Bytes[44]; };

struct S_006e71d0 {
    TArray<E_006e71d0> Items; // 0x00
    E_006e71d0* sub_006e71d0(INT Index);
};

// @baa 0x006e71d0
E_006e71d0* S_006e71d0::sub_006e71d0(INT Index)
{
    return &Items(Index);
}

struct C_006e7220 { int sub_006e7220(void); };

// @baa 0x006e7220
int C_006e7220::sub_006e7220(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_006e7230 { int sub_006e7230(void); };

// @baa 0x006e7230
int C_006e7230::sub_006e7230(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_006e7240 { int sub_006e7240(void); };

// @baa 0x006e7240
int C_006e7240::sub_006e7240(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

int sub_005413d0(...);
// @baa 0x006e7250
void sub_006e7250(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_006e72c0 {
    int sub_006e72c0(int);
};

// @baa 0x006e72c0
int C_006e72c0::sub_006e72c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_006e72d0 { C_006e72d0* sub_006e72d0(void); };

// @baa 0x006e72d0
C_006e72d0* C_006e72d0::sub_006e72d0(void) { *(int*)((char*)this + 8) = -1; return this; }

struct C_006e7340 {
    int sub_006e7340(int);
};

// @baa 0x006e7340
int C_006e7340::sub_006e7340(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_006e7350 {
    int sub_006e7350(int);
};

// @baa 0x006e7350
int C_006e7350::sub_006e7350(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_006e7390 {
    int sub_006e7390(int);
};

// @baa 0x006e7390
int C_006e7390::sub_006e7390(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_006e73a0 {
    int sub_006e73a0(int);
};

// @baa 0x006e73a0
int C_006e73a0::sub_006e73a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_006e73e0 {
    int sub_006e73e0(int);
};

// @baa 0x006e73e0
int C_006e73e0::sub_006e73e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_006e73f0 {
    int sub_006e73f0(int);
};

// @baa 0x006e73f0
int C_006e73f0::sub_006e73f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_006e7430 {
    int sub_006e7430(int);
};

// @baa 0x006e7430
int C_006e7430::sub_006e7430(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x3c;
}

struct C_006e7450 {
    int sub_006e7450(int);
};

// @baa 0x006e7450
int C_006e7450::sub_006e7450(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x3c;
}

struct C_006e7470 {
    int sub_006e7470(int);
};

// @baa 0x006e7470
int C_006e7470::sub_006e7470(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x3c;
}

struct C_006e74c0 {
    int sub_006e74c0(int);
};

// @baa 0x006e74c0
int C_006e74c0::sub_006e74c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_006e74d0 {
    int sub_006e74d0(int);
};

// @baa 0x006e74d0
int C_006e74d0::sub_006e74d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_006e7510 {
    int sub_006e7510(int);
};

// @baa 0x006e7510
int C_006e7510::sub_006e7510(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_006e7520 {
    int sub_006e7520(int);
};

// @baa 0x006e7520
int C_006e7520::sub_006e7520(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_006e7530 { int sub_006e7530(void); };

// @baa 0x006e7530
int C_006e7530::sub_006e7530(void) { return *(int*)((char*)this + 20); }

struct C_006e7540 {
    int sub_006e7540();
};

// @baa 0x006e7540
int C_006e7540::sub_006e7540(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006e7560 {
    int sub_006e7560();
};

// @baa 0x006e7560
int C_006e7560::sub_006e7560(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006e7580 {
    int sub_006e7580();
};

// @baa 0x006e7580
int C_006e7580::sub_006e7580(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006e75a0 {
    int sub_006e75a0();
};

// @baa 0x006e75a0
int C_006e75a0::sub_006e75a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006e75c0 {
    int sub_006e75c0();
};

// @baa 0x006e75c0
int C_006e75c0::sub_006e75c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006e75e0 {
    int sub_006e75e0();
};

// @baa 0x006e75e0
int C_006e75e0::sub_006e75e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006e7600 {
    int sub_006e7600();
};

// @baa 0x006e7600
int C_006e7600::sub_006e7600(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006e7620 {
    int sub_006e7620(int);
};

// @baa 0x006e7620
int C_006e7620::sub_006e7620(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct E_006e7630 { BYTE Bytes[60]; };

struct S_006e7630 {
    TArray<E_006e7630> Items; // 0x00
    E_006e7630* sub_006e7630(INT Index);
};

// @baa 0x006e7630
E_006e7630* S_006e7630::sub_006e7630(INT Index)
{
    return &Items(Index);
}

struct C_006e7680 {
    int sub_006e7680();
};

// @baa 0x006e7680
int C_006e7680::sub_006e7680(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_006e7690 {
    int sub_006e7690();
};

// @baa 0x006e7690
int C_006e7690::sub_006e7690(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006e76b0 {
    int sub_006e76b0();
};

// @baa 0x006e76b0
int C_006e76b0::sub_006e76b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006e76d0 {
    int sub_006e76d0();
};

// @baa 0x006e76d0
int C_006e76d0::sub_006e76d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006e76f0 {
    int sub_006e76f0();
};

// @baa 0x006e76f0
int C_006e76f0::sub_006e76f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006e7710 {
    int sub_006e7710();
};

// @baa 0x006e7710
int C_006e7710::sub_006e7710(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006e7730 {
    int sub_006e7730();
};

// @baa 0x006e7730
int C_006e7730::sub_006e7730(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006e7750 {
    int sub_006e7750();
};

// @baa 0x006e7750
int C_006e7750::sub_006e7750(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006e7770 {
    int sub_006e7770();
};

// @baa 0x006e7770
int C_006e7770::sub_006e7770(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006e7790 {
    int sub_006e7790();
};

// @baa 0x006e7790
int C_006e7790::sub_006e7790(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006e77b0 {
    int sub_006e77b0(int);
};

// @baa 0x006e77b0
int C_006e77b0::sub_006e77b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_006e77c0 {
    int sub_006e77c0(int);
};

// @baa 0x006e77c0
int C_006e77c0::sub_006e77c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_006e77d0 {
    int sub_006e77d0(int);
};

// @baa 0x006e77d0
int C_006e77d0::sub_006e77d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_006e77e0 {
    int sub_006e77e0(int);
};

// @baa 0x006e77e0
int C_006e77e0::sub_006e77e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_006e77f0 {
    int sub_006e77f0(int);
};

// @baa 0x006e77f0
int C_006e77f0::sub_006e77f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_006e7800 {
    int sub_006e7800(int);
};

// @baa 0x006e7800
int C_006e7800::sub_006e7800(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct S_006e7810 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_006e7810(INT Index);
};

// @baa 0x006e7810
QWORD* S_006e7810::sub_006e7810(INT Index)
{
    return &Items(Index);
}

struct E_006e7860 { BYTE Bytes[12]; };

struct S_006e7860 {
    TArray<E_006e7860> Items; // 0x00
    E_006e7860* sub_006e7860(INT Index);
};

// @baa 0x006e7860
E_006e7860* S_006e7860::sub_006e7860(INT Index)
{
    return &Items(Index);
}

struct C_006e78b0 {
    int sub_006e78b0(int);
};

// @baa 0x006e78b0
int C_006e78b0::sub_006e78b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct S_006e78c0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_006e78c0(INT Index);
};

// @baa 0x006e78c0
QWORD* S_006e78c0::sub_006e78c0(INT Index)
{
    return &Items(Index);
}

struct E_006e7910 { BYTE Bytes[24]; };

struct S_006e7910 {
    TArray<E_006e7910> Items; // 0x00
    E_006e7910* sub_006e7910(INT Index);
};

// @baa 0x006e7910
E_006e7910* S_006e7910::sub_006e7910(INT Index)
{
    return &Items(Index);
}

struct C_006e7960 {
    int sub_006e7960(int);
};

// @baa 0x006e7960
int C_006e7960::sub_006e7960(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct S_006e7970 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_006e7970(INT Index);
};

// @baa 0x006e7970
QWORD* S_006e7970::sub_006e7970(INT Index)
{
    return &Items(Index);
}

struct E_006e79c0 { BYTE Bytes[12]; };

struct S_006e79c0 {
    TArray<E_006e79c0> Items; // 0x00
    E_006e79c0* sub_006e79c0(INT Index);
};

// @baa 0x006e79c0
E_006e79c0* S_006e79c0::sub_006e79c0(INT Index)
{
    return &Items(Index);
}

struct C_006e7a10 {
    int sub_006e7a10(int);
};

// @baa 0x006e7a10
int C_006e7a10::sub_006e7a10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_006e8110 {
    void sub_006e8110(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

int sub_00630f20(...);
// @baa 0x006e8110
void C_006e8110::sub_006e8110(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}

// @baa 0x006e8270
void sub_006e8270(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x006e8290
void sub_006e8290(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

struct C_006e8300 {
    int sub_006e8300(int);
};

// @baa 0x006e8300
int C_006e8300::sub_006e8300(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_006e8340 {
    int sub_006e8340(int);
};

// @baa 0x006e8340
int C_006e8340::sub_006e8340(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_006e8350 {
    int sub_006e8350();
};

// @baa 0x006e8350
int C_006e8350::sub_006e8350(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006e8370 {
    int sub_006e8370();
};

// @baa 0x006e8370
int C_006e8370::sub_006e8370(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_006e8380 {
    int sub_006e8380();
};

// @baa 0x006e8380
int C_006e8380::sub_006e8380(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006e83a0 {
    int sub_006e83a0();
};

// @baa 0x006e83a0
int C_006e83a0::sub_006e83a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

int sub_006e8bb0(...);
// @baa 0x006e8ee0
UINT UMaterialInstanceConstant::GetFontParameterValue(UINT param_2, UINT param_3, INT* param_4, UINT* param_5)
{
    int param_1 = (int)this;

  int iVar1;
  
  if ((*(byte *)(param_1 + 0x48) & 4) == 0) {
    iVar1 = sub_006e8bb0(param_1,param_2,param_3);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
      *param_4 = *(int *)(iVar1 + 8);
      *param_5 = *(undefined4 *)(iVar1 + 0xc);
      return 1;
    }
  }
  return 0;
}

int sub_006e9270(...);
// @baa 0x006e94e0
UINT UMaterialInstanceTimeVarying::GetFontParameterValue(UINT param_2, UINT param_3, INT* param_4, UINT* param_5)
{
    int param_1 = (int)this;

  int iVar1;
  
  if ((*(byte *)(param_1 + 0x48) & 4) != 0) {
    return 0;
  }
  iVar1 = sub_006e9270(param_1,param_2,param_3);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x24) != 0)) {
    *param_4 = *(int *)(iVar1 + 0x24);
    *param_5 = *(undefined4 *)(iVar1 + 0x28);
  }
  return 1;
}

struct C_006ea840 {
    int sub_006ea840();
};

// @baa 0x006ea840
int C_006ea840::sub_006ea840(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4 + 0xd0;
}

struct C_006ea8d0 {
    int sub_006ea8d0();
};

// @baa 0x006ea8d0
int C_006ea8d0::sub_006ea8d0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4 + 0xb0;
}

struct C_006ea960 {
    int sub_006ea960();
};

// @baa 0x006ea960
int C_006ea960::sub_006ea960(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4 + 0xc0;
}

struct C_006ea9f0 {
    int sub_006ea9f0();
};

// @baa 0x006ea9f0
int C_006ea9f0::sub_006ea9f0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4 + 0xb0;
}

struct C_006eaa80 {
    int sub_006eaa80();
};

// @baa 0x006eaa80
int C_006eaa80::sub_006eaa80(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4 + 0xb0;
}

struct C_006eaae0 {
    int sub_006eaae0();
};

// @baa 0x006eaae0
int C_006eaae0::sub_006eaae0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4 + 0xa0;
}

void sub_00545f40();
// @baa 0x006eaaf0
void sub_006eaaf0(void) { sub_00545f40(); }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_006eae60 { void* Data; int Num; int Max; void sub_006eae60(); };

// @baa 0x006eae60
void C_006eae60::sub_006eae60() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct T_006eafb0;
// @baa 0x006eafb0
template INT TArray<T_006eafb0*>::RemoveItem(T_006eafb0* const&);

struct C_006ebd30 { void* Data; int Num; int Max; void sub_006ebd30(); };

// @baa 0x006ebd30
void C_006ebd30::sub_006ebd30() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006ebdd0 { void* Data; int Num; int Max; void sub_006ebdd0(); };

// @baa 0x006ebdd0
void C_006ebdd0::sub_006ebdd0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006ebe70 { void* Data; int Num; int Max; void sub_006ebe70(); };

// @baa 0x006ebe70
void C_006ebe70::sub_006ebe70() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006ebf10 { void* Data; int Num; int Max; void sub_006ebf10(); };

// @baa 0x006ebf10
void C_006ebf10::sub_006ebf10() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006ebfb0 { void* Data; int Num; int Max; void sub_006ebfb0(); };

// @baa 0x006ebfb0
void C_006ebfb0::sub_006ebfb0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006ec050 { void* Data; int Num; int Max; void sub_006ec050(); };

// @baa 0x006ec050
void C_006ec050::sub_006ec050() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

int sub_00662920(...);
// @baa 0x006ec160
void sub_006ec160(int param_1, int param_2)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (param_1 == 2) {
    puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 3;
    }
  }
  return;
}

// @baa 0x006ec2f0
undefined4 sub_006ec2f0(int param_1)
{
  if (((param_1 != 4) && (param_1 != 0)) && (param_1 != 1)) {
    return 0;
  }
  return 1;
}

// @baa 0x006ec310
undefined4 sub_006ec310(int param_1)
{
  if (((param_1 != 4) && (param_1 != 0)) && (param_1 != 1)) {
    return 0;
  }
  return 1;
}

// @baa 0x006ec330
undefined4 sub_006ec330(int param_1)
{
  if (((param_1 != 4) && (param_1 != 0)) && (param_1 != 1)) {
    return 0;
  }
  return 1;
}

// @baa 0x006ec350
undefined4 sub_006ec350(int param_1)
{
  if ((param_1 != 4) && (param_1 != 0)) {
    return 0;
  }
  return 1;
}

// @baa 0x006ec370
undefined4 sub_006ec370(int param_1)
{
  if ((param_1 != 4) && (param_1 != 0)) {
    return 0;
  }
  return 1;
}

// @baa 0x006ec390
undefined4 sub_006ec390(int param_1)
{
  if ((param_1 != 4) && (param_1 != 0)) {
    return 0;
  }
  return 1;
}

// @baa 0x006ec3b0
bool sub_006ec3b0(int param_1)
{
  return param_1 != 3;
}

// @baa 0x006ec3c0
bool sub_006ec3c0(int param_1)
{
  return param_1 != 3;
}

// @baa 0x006ec3d0
bool sub_006ec3d0(int param_1)
{
  return param_1 != 3;
}

struct C_006ec3e0 { void* Data; int Num; int Max; void sub_006ec3e0(); };

// @baa 0x006ec3e0
void C_006ec3e0::sub_006ec3e0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x006ec440
void __stdcall sub_006ec440(int a, int b)
{
}

// @baa 0x006ec450
void __stdcall sub_006ec450(int a0, int a1) {  }

// @baa 0x006ec460
void __stdcall sub_006ec460(int a0, int a1) {  }

// @baa 0x006ec580
int sub_006ec580(void) { return 0; }

struct A_006ec5a0 { virtual void sub_006ec620(); char pad[16]; };

struct B_006ec5a0 { virtual void sub_006ec620(); };

struct C_006ec5a0 : A_006ec5a0, B_006ec5a0 { virtual void sub_006ec620(); C_006ec5a0(); };

C_006ec5a0::C_006ec5a0() {}

// @baa 0x006ec5a0
void C_006ec5a0::sub_006ec620() {}

// @baa 0x006ec750
int sub_006ec750(void) { return 0; }

struct A_006ec770 { virtual void sub_006ec7f0(); char pad[16]; };

struct B_006ec770 { virtual void sub_006ec7f0(); };

struct C_006ec770 : A_006ec770, B_006ec770 { virtual void sub_006ec7f0(); C_006ec770(); };

C_006ec770::C_006ec770() {}

// @baa 0x006ec770
void C_006ec770::sub_006ec7f0() {}

// @baa 0x006ec920
int sub_006ec920(void) { return 0; }

struct A_006ec940 { virtual void sub_006ec9c0(); char pad[16]; };

struct B_006ec940 { virtual void sub_006ec9c0(); };

struct C_006ec940 : A_006ec940, B_006ec940 { virtual void sub_006ec9c0(); C_006ec940(); };

C_006ec940::C_006ec940() {}

// @baa 0x006ec940
void C_006ec940::sub_006ec9c0() {}

// @baa 0x006ecaf0
int sub_006ecaf0(void) { return 0; }

struct A_006ecb10 { virtual void sub_006ecb90(); char pad[16]; };

struct B_006ecb10 { virtual void sub_006ecb90(); };

struct C_006ecb10 : A_006ecb10, B_006ecb10 { virtual void sub_006ecb90(); C_006ecb10(); };

C_006ecb10::C_006ecb10() {}

// @baa 0x006ecb10
void C_006ecb10::sub_006ecb90() {}

// @baa 0x006eccc0
int sub_006eccc0(void) { return 0; }

struct A_006ecce0 { virtual void sub_006ecd60(); char pad[16]; };

struct B_006ecce0 { virtual void sub_006ecd60(); };

struct C_006ecce0 : A_006ecce0, B_006ecce0 { virtual void sub_006ecd60(); C_006ecce0(); };

C_006ecce0::C_006ecce0() {}

// @baa 0x006ecce0
void C_006ecce0::sub_006ecd60() {}

struct C_006eced0 {
    int sub_006eced0(int);
};

// @baa 0x006eced0
int C_006eced0::sub_006eced0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_006ecee0 {
    int sub_006ecee0(int);
};

// @baa 0x006ecee0
int C_006ecee0::sub_006ecee0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_006ecf60 {
    int sub_006ecf60(int);
};

// @baa 0x006ecf60
int C_006ecf60::sub_006ecf60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_006ecf70 {
    int sub_006ecf70(int);
};

// @baa 0x006ecf70
int C_006ecf70::sub_006ecf70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_006ecff0 {
    int sub_006ecff0(int);
};

// @baa 0x006ecff0
int C_006ecff0::sub_006ecff0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_006ed000 {
    int sub_006ed000(int);
};

// @baa 0x006ed000
int C_006ed000::sub_006ed000(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_006ed080 {
    int sub_006ed080(int);
};

// @baa 0x006ed080
int C_006ed080::sub_006ed080(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x3c;
}

struct C_006ed0a0 {
    int sub_006ed0a0(int);
};

// @baa 0x006ed0a0
int C_006ed0a0::sub_006ed0a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x3c;
}

struct C_006ed130 {
    int sub_006ed130(int);
};

// @baa 0x006ed130
int C_006ed130::sub_006ed130(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_006ed140 {
    int sub_006ed140(int);
};

// @baa 0x006ed140
int C_006ed140::sub_006ed140(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_006ed1c0 {
    int sub_006ed1c0(int);
};

// @baa 0x006ed1c0
int C_006ed1c0::sub_006ed1c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_006ed1d0 {
    int sub_006ed1d0(int);
};

// @baa 0x006ed1d0
int C_006ed1d0::sub_006ed1d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_006ed1e0 {
    int sub_006ed1e0();
};

// @baa 0x006ed1e0
int C_006ed1e0::sub_006ed1e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006ed200 {
    int sub_006ed200();
};

// @baa 0x006ed200
int C_006ed200::sub_006ed200(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x006ed210
void __stdcall sub_006ed210(int a0, int a1) {  }

struct C_006ed220 {
    int sub_006ed220();
};

// @baa 0x006ed220
int C_006ed220::sub_006ed220(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_006ed230 {
    int sub_006ed230();
};

// @baa 0x006ed230
int C_006ed230::sub_006ed230(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_006ed240 {
    int sub_006ed240();
};

// @baa 0x006ed240
int C_006ed240::sub_006ed240(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_006ed250 {
    int sub_006ed250();
};

// @baa 0x006ed250
int C_006ed250::sub_006ed250(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_006ed260 {
    int sub_006ed260();
};

// @baa 0x006ed260
int C_006ed260::sub_006ed260(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x3c;
}

struct C_006ed280 {
    int sub_006ed280();
};

// @baa 0x006ed280
int C_006ed280::sub_006ed280(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

struct C_006ed290 {
    int sub_006ed290();
};

// @baa 0x006ed290
int C_006ed290::sub_006ed290(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_006ed2a0 {
    int sub_006ed2a0();
};

// @baa 0x006ed2a0
int C_006ed2a0::sub_006ed2a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_006ed2b0 {
    int sub_006ed2b0();
};

// @baa 0x006ed2b0
int C_006ed2b0::sub_006ed2b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_006ed2c0 {
    int sub_006ed2c0();
};

// @baa 0x006ed2c0
int C_006ed2c0::sub_006ed2c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_006ed2d0 {
    int sub_006ed2d0();
};

// @baa 0x006ed2d0
int C_006ed2d0::sub_006ed2d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x3c;
}

struct C_006ed2f0 {
    int sub_006ed2f0();
};

// @baa 0x006ed2f0
int C_006ed2f0::sub_006ed2f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

struct C_006ed300 {
    int sub_006ed300();
};

// @baa 0x006ed300
int C_006ed300::sub_006ed300(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

// @baa 0x006ed310
void __stdcall sub_006ed310(int a0, int a1) {  }

struct C_006ed320 {
    int sub_006ed320(int);
};

// @baa 0x006ed320
int C_006ed320::sub_006ed320(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x006ed330
void __stdcall sub_006ed330(int a0, int a1) {  }

struct C_006ed340 {
    int sub_006ed340(int);
};

// @baa 0x006ed340
int C_006ed340::sub_006ed340(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x006ed350
void __stdcall sub_006ed350(int a0, int a1) {  }

struct C_006ed360 {
    int sub_006ed360(int);
};

// @baa 0x006ed360
int C_006ed360::sub_006ed360(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_006ed370 {
    undefined4 sub_006ed370(byte);
};

int sub_006e7a20(void);
// @baa 0x006ed370
undefined4 C_006ed370::sub_006ed370(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006e7a20();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006ed390 {
    undefined4 sub_006ed390(byte);
};

int sub_006e7a90(void);
// @baa 0x006ed390
undefined4 C_006ed390::sub_006ed390(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006e7a90();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006ed3b0 {
    undefined4 sub_006ed3b0(byte);
};

int sub_006e7b00(void);
// @baa 0x006ed3b0
undefined4 C_006ed3b0::sub_006ed3b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006e7b00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006efb30
void __stdcall sub_006efb30(int a0, int a1, int a2, int a3) {  }

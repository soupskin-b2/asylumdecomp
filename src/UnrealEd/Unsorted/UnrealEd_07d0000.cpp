// UnrealEd_07d0000.cpp (part 1 of 2): 102 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

struct C {
    int sub_007d8490(int);
};

// @baa 0x007d8490
int C::sub_007d8490(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_007d84a0 { int sub_007d84a0(void); };

// @baa 0x007d84a0
int C_007d84a0::sub_007d84a0(void) { return *(int*)((char*)this + 0); }

struct C_007d84b0 { int sub_007d84b0(void); };

// @baa 0x007d84b0
int C_007d84b0::sub_007d84b0(void) { return *(int*)((char*)this + 0); }

struct C_007d84c0 { int sub_007d84c0(void); };

// @baa 0x007d84c0
int C_007d84c0::sub_007d84c0(void) { return *(int*)((char*)this + 0); }

struct C_007d84d0 { int sub_007d84d0(void); };

// @baa 0x007d84d0
int C_007d84d0::sub_007d84d0(void) { return *(int*)((char*)this + 0); }

struct C_007d84e0 { int sub_007d84e0(void); };

// @baa 0x007d84e0
int C_007d84e0::sub_007d84e0(void) { return *(int*)((char*)this + 0); }

struct C_007d84f0 {
    int sub_007d84f0();
};

// @baa 0x007d84f0
int C_007d84f0::sub_007d84f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_007d8500 {
    int sub_007d8500();
};

// @baa 0x007d8500
int C_007d8500::sub_007d8500(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_007d8510 {
    int sub_007d8510();
};

// @baa 0x007d8510
int C_007d8510::sub_007d8510(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_007d8520 { int a, b; C_007d8520(int, int); };

// @baa 0x007d8520
C_007d8520::C_007d8520(int x, int y) : a(x), b(y) {}

struct C_007d8540 {
    int sub_007d8540();
};

// @baa 0x007d8540
int C_007d8540::sub_007d8540(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_007d8550 {
    int sub_007d8550();
};

// @baa 0x007d8550
int C_007d8550::sub_007d8550(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_007d8560 {
    int sub_007d8560();
};

// @baa 0x007d8560
int C_007d8560::sub_007d8560(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_007d8570 { int a, b; C_007d8570(int, int); };

// @baa 0x007d8570
C_007d8570::C_007d8570(int x, int y) : a(x), b(y) {}

struct C_007d8590 {
    int sub_007d8590();
};

// @baa 0x007d8590
int C_007d8590::sub_007d8590(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_007d85a0 { int a, b; C_007d85a0(int, int); };

// @baa 0x007d85a0
C_007d85a0::C_007d85a0(int x, int y) : a(x), b(y) {}

struct C_007d8600 { int sub_007d8600(void); };

// @baa 0x007d8600
int C_007d8600::sub_007d8600(void) { return *(int*)((char*)this + 0); }

struct S {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_007d8610(INT Index) const;
};

// @baa 0x007d8610
const DWORD* S::sub_007d8610(INT Index) const
{
    return &Items(Index);
}

struct C_007d8700 { int sub_007d8700(void); };

// @baa 0x007d8700
int C_007d8700::sub_007d8700(void) { return *(int*)((char*)this + 0); }

struct S_007d8710 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_007d8710(INT Index);
};

// @baa 0x007d8710
QWORD* S_007d8710::sub_007d8710(INT Index)
{
    return &Items(Index);
}

struct C_007d8760 { int sub_007d8760(void); };

// @baa 0x007d8760
int C_007d8760::sub_007d8760(void) { return *(int*)((char*)this + 0); }

struct C_007d8770 { int sub_007d8770(void); };

// @baa 0x007d8770
int C_007d8770::sub_007d8770(void) { return *(int*)((char*)this + 0); }

struct C_007d8780 { int sub_007d8780(void); };

// @baa 0x007d8780
int C_007d8780::sub_007d8780(void) { return *(int*)((char*)this + 0); }

struct C_007d8790 { int sub_007d8790(void); };

// @baa 0x007d8790
int C_007d8790::sub_007d8790(void) { return *(int*)((char*)this + 0); }

struct C_007d87a0 { int sub_007d87a0(void); };

// @baa 0x007d87a0
int C_007d87a0::sub_007d87a0(void) { return *(int*)((char*)this + 0); }

struct C_007d87b0 { int sub_007d87b0(void); };

// @baa 0x007d87b0
int C_007d87b0::sub_007d87b0(void) { return *(int*)((char*)this + 0); }

struct C_007d87c0 { int sub_007d87c0(void); };

// @baa 0x007d87c0
int C_007d87c0::sub_007d87c0(void) { return *(int*)((char*)this + 0); }

struct C_007d87d0 { int sub_007d87d0(void); };

// @baa 0x007d87d0
int C_007d87d0::sub_007d87d0(void) { return *(int*)((char*)this + 0); }

struct C_007d87e0 { int sub_007d87e0(void); };

// @baa 0x007d87e0
int C_007d87e0::sub_007d87e0(void) { return *(int*)((char*)this + 0); }

struct C_007d87f0 { int sub_007d87f0(void); };

// @baa 0x007d87f0
int C_007d87f0::sub_007d87f0(void) { return *(int*)((char*)this + 0); }

struct C_007d8800 { int sub_007d8800(void); };

// @baa 0x007d8800
int C_007d8800::sub_007d8800(void) { return *(int*)((char*)this + 0); }

struct C_007d8810 { int a, b; C_007d8810(const C_007d8810 &); };

// @baa 0x007d8810
C_007d8810::C_007d8810(const C_007d8810 &o) : a(o.a), b(o.b) {}

struct C_007d8850 { int sub_007d8850(void); };

// @baa 0x007d8850
int C_007d8850::sub_007d8850(void) { return *(int*)((char*)this + 0); }

struct C_007d8860 { int sub_007d8860(void); };

// @baa 0x007d8860
int C_007d8860::sub_007d8860(void) { return *(int*)((char*)this + 0); }

struct C_007d8870 { int sub_007d8870(void); };

// @baa 0x007d8870
int C_007d8870::sub_007d8870(void) { return *(int*)((char*)this + 0); }

struct C_007d8880 { int sub_007d8880(void); };

// @baa 0x007d8880
int C_007d8880::sub_007d8880(void) { return *(int*)((char*)this + 0); }

struct C_007d8890 { int a, b, c; C_007d8890(); };

// @baa 0x007d8890
C_007d8890::C_007d8890() : a(0), b(0), c(0) {}

// @baa 0x007d88a0
int sub_007d88a0(int a0) { return *(int*)a0; }

// @baa 0x007d88b0
bool sub_007d88b0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_007d88c0 { int a, b; C_007d88c0(const C_007d88c0 &); };

// @baa 0x007d88c0
C_007d88c0::C_007d88c0(const C_007d88c0 &o) : a(o.a), b(o.b) {}

// @baa 0x007d8920
int sub_007d8920(int a0) { return *(int*)a0; }

// @baa 0x007d8930
bool sub_007d8930(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_007d8940 { int sub_007d8940(void); };

// @baa 0x007d8940
int C_007d8940::sub_007d8940(void) { return *(int*)((char*)this + 0); }

// @baa 0x007d89c0
int sub_007d89c0(int a0) { return *(int*)a0; }

// @baa 0x007d89d0
bool sub_007d89d0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_007d89e0 {
    void sub_007d89e0(undefined4 *);
};

// @baa 0x007d89e0
void C_007d89e0::sub_007d89e0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct S_007d8a00 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_007d8a00(INT Index);
};

// @baa 0x007d8a00
DWORD* S_007d8a00::sub_007d8a00(INT Index)
{
    return &Items(Index);
}

struct C_007d8a50 { int sub_007d8a50(void); };

// @baa 0x007d8a50
int C_007d8a50::sub_007d8a50(void) { return *(int*)((char*)this + 0); }

// @baa 0x007d8a60
int sub_007d8a60(int a0) { return *(int*)a0; }

// @baa 0x007d8a70
undefined4 sub_007d8a70(int * param_1, int * param_2)
{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (((param_1[3] == param_2[3] && (param_1[4] == param_2[4])) && (param_1[5] == param_2[5])))) {
    return 1;
  }
  return 0;
}

struct C_007d8ab0 {
    void sub_007d8ab0(int *);
};

// @baa 0x007d8ab0
void C_007d8ab0::sub_007d8ab0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0x18;
  return;
}

struct C_007d8ac0 { int sub_007d8ac0(void); };

// @baa 0x007d8ac0
int C_007d8ac0::sub_007d8ac0(void) { return *(int*)((char*)this + 0); }

struct C_007d8ad0 { int a, b; C_007d8ad0(int, int); };

// @baa 0x007d8ad0
C_007d8ad0::C_007d8ad0(int x, int y) : a(x), b(y) {}

struct C_007d8b10 { int sub_007d8b10(void); };

// @baa 0x007d8b10
int C_007d8b10::sub_007d8b10(void) { return *(int*)((char*)this + 0); }

struct C_007d8b20 { int sub_007d8b20(void); };

// @baa 0x007d8b20
int C_007d8b20::sub_007d8b20(void) { return *(int*)((char*)this + 0); }

struct C_007d8b30 { int sub_007d8b30(void); };

// @baa 0x007d8b30
int C_007d8b30::sub_007d8b30(void) { return *(int*)((char*)this + 0); }

struct C_007d8b40 { int sub_007d8b40(void); };

// @baa 0x007d8b40
int C_007d8b40::sub_007d8b40(void) { return *(int*)((char*)this + 0); }

struct C_007d8b50 { int sub_007d8b50(void); };

// @baa 0x007d8b50
int C_007d8b50::sub_007d8b50(void) { return *(int*)((char*)this + 4); }

struct C_007d8be0 { int a, b; C_007d8be0(const C_007d8be0 &); };

// @baa 0x007d8be0
C_007d8be0::C_007d8be0(const C_007d8be0 &o) : a(o.a), b(o.b) {}

struct C_007d8c00 { int sub_007d8c00(void); };

// @baa 0x007d8c00
int C_007d8c00::sub_007d8c00(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

int sub_00627f70(...);
// @baa 0x007d8c30
void sub_007d8c30(undefined4 param_1)
{
  sub_00627f70(param_1,0x18,0);
  return;
}

struct C_007d8c80 { int sub_007d8c80(void); };

// @baa 0x007d8c80
int C_007d8c80::sub_007d8c80(void) { return *(int*)((char*)this + 0); }

struct C_007d8c90 {
    int sub_007d8c90(int);
};

// @baa 0x007d8c90
int C_007d8c90::sub_007d8c90(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_007d8ca0 { C_007d8ca0* sub_007d8ca0(void); };

// @baa 0x007d8ca0
C_007d8ca0* C_007d8ca0::sub_007d8ca0(void) { return this; }

struct C_007d8d30 {
    int sub_007d8d30(int);
};

// @baa 0x007d8d30
int C_007d8d30::sub_007d8d30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_007d8da0 {
    int sub_007d8da0(int);
};

// @baa 0x007d8da0
int C_007d8da0::sub_007d8da0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_007d8dc0 { int sub_007d8dc0(void); };

// @baa 0x007d8dc0
int C_007d8dc0::sub_007d8dc0(void) { return *(int*)((char*)this + 0); }

struct C_007d8dd0 { int sub_007d8dd0(void); };

// @baa 0x007d8dd0
int C_007d8dd0::sub_007d8dd0(void) { return *(int*)((char*)this + 0); }

struct C_007d8de0 {
    int sub_007d8de0(int);
};

// @baa 0x007d8de0
int C_007d8de0::sub_007d8de0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_007d8df0 {
    int sub_007d8df0(int);
};

// @baa 0x007d8df0
int C_007d8df0::sub_007d8df0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_007d8e00 {
    int sub_007d8e00(int);
};

// @baa 0x007d8e00
int C_007d8e00::sub_007d8e00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_007d8e10 { int sub_007d8e10(void); };

// @baa 0x007d8e10
int C_007d8e10::sub_007d8e10(void) { return *(int*)((char*)this + 20); }

struct C_007d8e20 { int sub_007d8e20(void); };

// @baa 0x007d8e20
int C_007d8e20::sub_007d8e20(void) { return *(int*)((char*)this + 20); }

struct C_007d8e30 { int sub_007d8e30(void); };

// @baa 0x007d8e30
int C_007d8e30::sub_007d8e30(void) { return *(int*)((char*)this + 20); }

struct C_007d8e40 { int sub_007d8e40(void); };

// @baa 0x007d8e40
int C_007d8e40::sub_007d8e40(void) { return *(int*)((char*)this + 20); }

struct C_007d8e50 { int sub_007d8e50(void); };

// @baa 0x007d8e50
int C_007d8e50::sub_007d8e50(void) { return *(int*)((char*)this + 20); }

struct C_007d8e60 { int sub_007d8e60(void); };

// @baa 0x007d8e60
int C_007d8e60::sub_007d8e60(void) { return *(int*)((char*)this + 20); }

struct C_007d8e70 { int sub_007d8e70(void); };

// @baa 0x007d8e70
int C_007d8e70::sub_007d8e70(void) { return *(int*)((char*)this + 20); }

struct C_007d8e80 { int sub_007d8e80(void); };

// @baa 0x007d8e80
int C_007d8e80::sub_007d8e80(void) { return *(int*)((char*)this + 20); }

struct C_007d8e90 { int sub_007d8e90(void); };

// @baa 0x007d8e90
int C_007d8e90::sub_007d8e90(void) { return *(int*)((char*)this + 20); }

struct C_007d8ea0 { int sub_007d8ea0(void); };

// @baa 0x007d8ea0
int C_007d8ea0::sub_007d8ea0(void) { return *(int*)((char*)this + 20); }

struct C_007d8eb0 { int sub_007d8eb0(void); };

// @baa 0x007d8eb0
int C_007d8eb0::sub_007d8eb0(void) { return *(int*)((char*)this + 20); }

struct C_007d8ec0 { int sub_007d8ec0(void); };

// @baa 0x007d8ec0
int C_007d8ec0::sub_007d8ec0(void) { return *(int*)((char*)this + 20); }

struct C_007d8ed0 { C_007d8ed0* sub_007d8ed0(void); };

// @baa 0x007d8ed0
C_007d8ed0* C_007d8ed0::sub_007d8ed0(void) { return this; }

struct C_007d8ee0 { C_007d8ee0* sub_007d8ee0(void); };

// @baa 0x007d8ee0
C_007d8ee0* C_007d8ee0::sub_007d8ee0(void) { return this; }

struct C_007d8ef0 { int a, b, c; C_007d8ef0(); };

// @baa 0x007d8ef0
C_007d8ef0::C_007d8ef0() : a(0), b(0), c(0) {}

// @baa 0x007d8f00
int sub_007d8f00(int a0) { return *(int*)a0; }

// @baa 0x007d8f10
int sub_007d8f10(int a0) { return *(int*)a0; }

// @baa 0x007d8f20
int sub_007d8f20(int a0) { return *(int*)a0; }

struct C_007d8f30 { int sub_007d8f30(void); };

// @baa 0x007d8f30
int C_007d8f30::sub_007d8f30(void) { return *(int*)((char*)this + 0); }

struct C_007d8f40 { int sub_007d8f40(void); };

// @baa 0x007d8f40
int C_007d8f40::sub_007d8f40(void) { return *(int*)((char*)this + 0); }

struct C_007d8f50 { C_007d8f50* sub_007d8f50(void); };

// @baa 0x007d8f50
C_007d8f50* C_007d8f50::sub_007d8f50(void) { return this; }

struct C_007d8f60 { int sub_007d8f60(void); };

// @baa 0x007d8f60
int C_007d8f60::sub_007d8f60(void) { return *(int*)((char*)this + 0); }

struct C_007d8f70 { int sub_007d8f70(void); };

// @baa 0x007d8f70
int C_007d8f70::sub_007d8f70(void) { return *(int*)((char*)this + 20); }

struct C_007d8f80 {
    int sub_007d8f80(int);
};

// @baa 0x007d8f80
int C_007d8f80::sub_007d8f80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_007d8f90 {
    int sub_007d8f90(int);
};

// @baa 0x007d8f90
int C_007d8f90::sub_007d8f90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_007d8fb0 {
    int sub_007d8fb0(int);
};

// @baa 0x007d8fb0
int C_007d8fb0::sub_007d8fb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_007d8fd0 { int a, b; C_007d8fd0(int, int); };

// @baa 0x007d8fd0
C_007d8fd0::C_007d8fd0(int x, int y) : a(x), b(y) {}

struct C_007d8ff0 { int a, b; C_007d8ff0(int, int); };

// @baa 0x007d8ff0
C_007d8ff0::C_007d8ff0(int x, int y) : a(x), b(y) {}

struct C_007d9010 { int a, b; C_007d9010(int, int); };

// @baa 0x007d9010
C_007d9010::C_007d9010(int x, int y) : a(x), b(y) {}

int sub_00588dd0(...);
int sub_00589470(void);
int sub_005d8a20(...);
extern undefined4 g_02688448;
// @baa 0x007d9030
void sub_007d9030(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_02688448 == 0) {
    g_02688448 = sub_00588dd0(L"Core");
    sub_00589470();
  }
  sub_005d8a20(g_02688448,param_1,param_2,param_3);
  return;
}

void sub_00572b30();
// @baa 0x007d9070
void sub_007d9070(void) { sub_00572b30(); }

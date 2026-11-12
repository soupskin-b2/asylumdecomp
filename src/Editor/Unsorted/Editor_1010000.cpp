// Editor_1010000.cpp (part 1 of 5): 511 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_01012660(byte);
};

int sub_0053dfa0(...);
int sub_00f44e90(void);
// @baa 0x01012660
undefined4 C::sub_01012660(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f44e90();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00629c10(...);
int sub_0062d5a0(...);
extern undefined4 g_025d6818;
// @baa 0x01013a50
int sub_01013a50(void)
{
  int iVar1;
  undefined4 uVar2;
  int iStack_4;
  
  iVar1 = g_025d6818;
  iStack_4 = 0;
  uVar2 = sub_00629c10(L"-gABC=",&iStack_4);
  sub_0062d5a0(uVar2);
  if (iStack_4 == 0) {
    iStack_4 = iVar1;
  }
  return iStack_4;
}

extern undefined4 g_026c0b60;
// @baa 0x01013a90
int sub_01013a90(int param_1)
{
  return ((uint)(g_026c0b60 != 0) * 8 + 4) * param_1;
}

// @baa 0x01016060
int sub_01016060(void) { return 1; }

int sub_0059c760(void);
int sub_005b5790(...);
extern undefined4 g_0268d080;
// @baa 0x01016070
bool UCommandlet::sub_01016070(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0x30);
  if (g_0268d080 == 0) {
    g_0268d080 = sub_005b5790(L"Core");
    sub_0059c760();
  }
  return iVar1 != g_0268d080;
}

struct C_010160b0 {
    undefined4 sub_010160b0();
};

// @baa 0x010160b0
undefined4 C_010160b0::sub_010160b0(void)
{
    int * param_1 = (int *)this;

  if ((*param_1 != 0) && (*(int *)(*param_1 + 0x30) != 0)) {
    return 1;
  }
  return 0;
}

struct C_010160d0 {
    undefined4 sub_010160d0();
};

// @baa 0x010160d0
undefined4 C_010160d0::sub_010160d0(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(*(int *)(param_1 + 4) + 0x30) != 0)) {
    return 1;
  }
  return 0;
}

struct E { BYTE Bytes[76]; };

struct S {
    TArray<E> Items; // 0x00
    const E* sub_01016250(INT Index) const;
};

// @baa 0x01016250
const E* S::sub_01016250(INT Index) const
{
    return &Items(Index);
}

struct C_010162a0 {
    void sub_010162a0();
};

int sub_0053df70(...);
// @baa 0x010162a0
void C_010162a0::sub_010162a0(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 0x4c,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_010162d0 { int a, b, c; C_010162d0(); };

// @baa 0x010162d0
C_010162d0::C_010162d0() : a(0), b(0), c(0) {}

struct C_010162e0 { int a, b, c; C_010162e0(); };

// @baa 0x010162e0
C_010162e0::C_010162e0() : a(0), b(0), c(0) {}

struct C_010162f0 { int a, b, c; C_010162f0(); };

// @baa 0x010162f0
C_010162f0::C_010162f0() : a(0), b(0), c(0) {}

struct C_01016300 { int a, b, c; C_01016300(); };

// @baa 0x01016300
C_01016300::C_01016300() : a(0), b(0), c(0) {}

struct C_01016310 { int a, b, c; C_01016310(); };

// @baa 0x01016310
C_01016310::C_01016310() : a(0), b(0), c(0) {}

struct C_01016390 { int sub_01016390(void); };

// @baa 0x01016390
int C_01016390::sub_01016390(void) { return *(int*)((char*)this + 0); }

struct C_010163a0 {
    int sub_010163a0(int);
};

// @baa 0x010163a0
int C_010163a0::sub_010163a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_010163b0 { int sub_010163b0(void); };

// @baa 0x010163b0
int C_010163b0::sub_010163b0(void) { return *(int*)((char*)this + 0); }

struct C_01016430 { int sub_01016430(void); };

// @baa 0x01016430
int C_01016430::sub_01016430(void) { return *(int*)((char*)this + 0); }

struct C_01016440 { int sub_01016440(void); };

// @baa 0x01016440
int C_01016440::sub_01016440(void) { return *(int*)((char*)this + 0); }

struct C_010164c0 { int sub_010164c0(void); };

// @baa 0x010164c0
int C_010164c0::sub_010164c0(void) { return *(int*)((char*)this + 0); }

struct C_01016550 {
    int sub_01016550();
};

// @baa 0x01016550
int C_01016550::sub_01016550(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01016560 {
    int sub_01016560();
};

// @baa 0x01016560
int C_01016560::sub_01016560(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01016570 {
    int sub_01016570();
};

// @baa 0x01016570
int C_01016570::sub_01016570(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01016580 {
    int sub_01016580();
};

// @baa 0x01016580
int C_01016580::sub_01016580(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01016590 {
    int sub_01016590();
};

// @baa 0x01016590
int C_01016590::sub_01016590(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_010165a0 {
    int sub_010165a0();
};

// @baa 0x010165a0
int C_010165a0::sub_010165a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_010165b0 {
    int sub_010165b0();
};

// @baa 0x010165b0
int C_010165b0::sub_010165b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_010165c0 {
    int sub_010165c0();
};

// @baa 0x010165c0
int C_010165c0::sub_010165c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_010165d0 {
    int sub_010165d0();
};

// @baa 0x010165d0
int C_010165d0::sub_010165d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_010165e0 {
    int sub_010165e0();
};

// @baa 0x010165e0
int C_010165e0::sub_010165e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_010165f0 {
    int sub_010165f0();
};

// @baa 0x010165f0
int C_010165f0::sub_010165f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01016600 {
    int sub_01016600();
};

// @baa 0x01016600
int C_01016600::sub_01016600(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01016610 {
    int sub_01016610();
};

// @baa 0x01016610
int C_01016610::sub_01016610(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01016620 {
    int sub_01016620();
};

// @baa 0x01016620
int C_01016620::sub_01016620(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01016630 {
    int sub_01016630();
};

// @baa 0x01016630
int C_01016630::sub_01016630(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01016640 {
    int sub_01016640();
};

// @baa 0x01016640
int C_01016640::sub_01016640(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01016650 { int sub_01016650(void); };

// @baa 0x01016650
int C_01016650::sub_01016650(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01016660 { int sub_01016660(void); };

// @baa 0x01016660
int C_01016660::sub_01016660(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01016670 { int sub_01016670(void); };

// @baa 0x01016670
int C_01016670::sub_01016670(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01016680 { int sub_01016680(void); };

// @baa 0x01016680
int C_01016680::sub_01016680(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01016690 { int sub_01016690(void); };

// @baa 0x01016690
int C_01016690::sub_01016690(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_010166a0 { int sub_010166a0(void); };

// @baa 0x010166a0
int C_010166a0::sub_010166a0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_010166b0 { int sub_010166b0(void); };

// @baa 0x010166b0
int C_010166b0::sub_010166b0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_010166c0 { int sub_010166c0(void); };

// @baa 0x010166c0
int C_010166c0::sub_010166c0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_010166d0 { int sub_010166d0(void); };

// @baa 0x010166d0
int C_010166d0::sub_010166d0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_010166e0 { int sub_010166e0(void); };

// @baa 0x010166e0
int C_010166e0::sub_010166e0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_010166f0 { int sub_010166f0(void); };

// @baa 0x010166f0
int C_010166f0::sub_010166f0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01016700 { int sub_01016700(void); };

// @baa 0x01016700
int C_01016700::sub_01016700(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01016750 { int sub_01016750(void); };

// @baa 0x01016750
int C_01016750::sub_01016750(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x010167a0
undefined4 sub_010167a0(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_010167c0 { int sub_010167c0(void); };

// @baa 0x010167c0
int C_010167c0::sub_010167c0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_010167d0 { int sub_010167d0(void); };

// @baa 0x010167d0
int C_010167d0::sub_010167d0(void) { return *(int*)((char*)this + 0); }

struct C_010167e0 { int sub_010167e0(void); };

// @baa 0x010167e0
int C_010167e0::sub_010167e0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01016820 { int sub_01016820(void); };

// @baa 0x01016820
int C_01016820::sub_01016820(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01016830 { int sub_01016830(void); };

// @baa 0x01016830
int C_01016830::sub_01016830(void) { return *(int*)((char*)this + 0); }

struct C_010168b0 { int sub_010168b0(void); };

// @baa 0x010168b0
int C_010168b0::sub_010168b0(void) { return *(int*)((char*)this + 0); }

struct C_010168c0 { int sub_010168c0(void); };

// @baa 0x010168c0
int C_010168c0::sub_010168c0(void) { return *(int*)((char*)this + 0); }

struct C_010168d0 { int sub_010168d0(void); };

// @baa 0x010168d0
int C_010168d0::sub_010168d0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x01016de0
undefined4 sub_01016de0(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_01016e40 {
    int sub_01016e40(int);
};

// @baa 0x01016e40
int C_01016e40::sub_01016e40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_01016e50 { int sub_01016e50(void); };

// @baa 0x01016e50
int C_01016e50::sub_01016e50(void) { return *(int*)((char*)this + 20); }

struct C_01016e60 { int sub_01016e60(void); };

// @baa 0x01016e60
int C_01016e60::sub_01016e60(void) { return *(int*)((char*)this + 20); }

// @baa 0x01016e70
int sub_01016e70(int a0) { return a0; }

struct C_01016e80 {
    int sub_01016e80(int);
};

// @baa 0x01016e80
int C_01016e80::sub_01016e80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x01016e90
int sub_01016e90(int a0) { return a0; }

struct C_01016ea0 {
    int sub_01016ea0(int);
};

// @baa 0x01016ea0
int C_01016ea0::sub_01016ea0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

struct C_01016eb0 { int sub_01016eb0(void); };

// @baa 0x01016eb0
int C_01016eb0::sub_01016eb0(void) { return *(int*)((char*)this + 20); }

struct C_01016ec0 {
    int sub_01016ec0(int);
};

// @baa 0x01016ec0
int C_01016ec0::sub_01016ec0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01016ed0 { int sub_01016ed0(void); };

// @baa 0x01016ed0
int C_01016ed0::sub_01016ed0(void) { return *(int*)((char*)this + 20); }

struct C_01016ee0 {
    int sub_01016ee0(int);
};

// @baa 0x01016ee0
int C_01016ee0::sub_01016ee0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_01016ef0 {
    int sub_01016ef0(int);
};

// @baa 0x01016ef0
int C_01016ef0::sub_01016ef0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_01016f00 {
    int sub_01016f00(int);
};

// @baa 0x01016f00
int C_01016f00::sub_01016f00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01016f10 { int sub_01016f10(void); };

// @baa 0x01016f10
int C_01016f10::sub_01016f10(void) { return *(int*)((char*)this + 20); }

struct C_01016f20 { int sub_01016f20(void); };

// @baa 0x01016f20
int C_01016f20::sub_01016f20(void) { return *(int*)((char*)this + 20); }

struct C_01016f30 { int sub_01016f30(void); };

// @baa 0x01016f30
int C_01016f30::sub_01016f30(void) { return *(int*)((char*)this + 20); }

struct C_01016f40 { int sub_01016f40(void); };

// @baa 0x01016f40
int C_01016f40::sub_01016f40(void) { return *(int*)((char*)this + 20); }

struct C_01016f50 { int sub_01016f50(void); };

// @baa 0x01016f50
int C_01016f50::sub_01016f50(void) { return *(int*)((char*)this + 20); }

struct C_01016f60 { int sub_01016f60(void); };

// @baa 0x01016f60
int C_01016f60::sub_01016f60(void) { return *(int*)((char*)this + 20); }

struct C_01016f70 { int sub_01016f70(void); };

// @baa 0x01016f70
int C_01016f70::sub_01016f70(void) { return *(int*)((char*)this + 20); }

struct C_01016f80 { int sub_01016f80(void); };

// @baa 0x01016f80
int C_01016f80::sub_01016f80(void) { return *(int*)((char*)this + 20); }

struct C_01016f90 { int sub_01016f90(void); };

// @baa 0x01016f90
int C_01016f90::sub_01016f90(void) { return *(int*)((char*)this + 20); }

struct C_01016fa0 { int sub_01016fa0(void); };

// @baa 0x01016fa0
int C_01016fa0::sub_01016fa0(void) { return *(int*)((char*)this + 20); }

struct C_01016fb0 { int sub_01016fb0(void); };

// @baa 0x01016fb0
int C_01016fb0::sub_01016fb0(void) { return *(int*)((char*)this + 20); }

struct C_01016fc0 { int sub_01016fc0(void); };

// @baa 0x01016fc0
int C_01016fc0::sub_01016fc0(void) { return *(int*)((char*)this + 20); }

struct C_01016fd0 { int sub_01016fd0(void); };

// @baa 0x01016fd0
int C_01016fd0::sub_01016fd0(void) { return *(int*)((char*)this + 20); }

struct C_01016fe0 { int sub_01016fe0(void); };

// @baa 0x01016fe0
int C_01016fe0::sub_01016fe0(void) { return *(int*)((char*)this + 20); }

struct C_01016ff0 { int sub_01016ff0(void); };

// @baa 0x01016ff0
int C_01016ff0::sub_01016ff0(void) { return *(int*)((char*)this + 20); }

struct C_01017000 { int sub_01017000(void); };

// @baa 0x01017000
int C_01017000::sub_01017000(void) { return *(int*)((char*)this + 20); }

struct C_01017010 { int sub_01017010(void); };

// @baa 0x01017010
int C_01017010::sub_01017010(void) { return *(int*)((char*)this + 20); }

struct C_01017020 { int sub_01017020(void); };

// @baa 0x01017020
int C_01017020::sub_01017020(void) { return *(int*)((char*)this + 0); }

struct C_01017030 { int sub_01017030(void); };

// @baa 0x01017030
int C_01017030::sub_01017030(void) { return *(int*)((char*)this + 0); }

struct C_01017040 { int sub_01017040(void); };

// @baa 0x01017040
int C_01017040::sub_01017040(void) { return *(int*)((char*)this + 0); }

struct C_01017050 { int sub_01017050(void); };

// @baa 0x01017050
int C_01017050::sub_01017050(void) { return *(int*)((char*)this + 0); }

struct C_01017060 { int sub_01017060(void); };

// @baa 0x01017060
int C_01017060::sub_01017060(void) { return *(int*)((char*)this + 0); }

struct C_01017070 { int sub_01017070(void); };

// @baa 0x01017070
int C_01017070::sub_01017070(void) { return *(int*)((char*)this + 0); }

struct C_01017080 { int sub_01017080(void); };

// @baa 0x01017080
int C_01017080::sub_01017080(void) { return *(int*)((char*)this + 0); }

struct C_01017090 { int sub_01017090(void); };

// @baa 0x01017090
int C_01017090::sub_01017090(void) { return *(int*)((char*)this + 0); }

struct C_010170a0 { int sub_010170a0(void); };

// @baa 0x010170a0
int C_010170a0::sub_010170a0(void) { return *(int*)((char*)this + 0); }

struct C_010170b0 { int sub_010170b0(void); };

// @baa 0x010170b0
int C_010170b0::sub_010170b0(void) { return *(int*)((char*)this + 0); }

struct C_010170c0 { int sub_010170c0(void); };

// @baa 0x010170c0
int C_010170c0::sub_010170c0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x010171f0
void sub_010171f0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

struct E_01017320 { BYTE Bytes[32]; };

struct S_01017320 {
    TArray<E_01017320> Items; // 0x00
    const E_01017320* sub_01017320(INT Index) const;
};

// @baa 0x01017320
const E_01017320* S_01017320::sub_01017320(INT Index) const
{
    return &Items(Index);
}

struct S_01017370 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_01017370(INT Index) const;
};

// @baa 0x01017370
const DWORD* S_01017370::sub_01017370(INT Index) const
{
    return &Items(Index);
}

struct C_010173c0 { int a, b, c; C_010173c0(); };

// @baa 0x010173c0
C_010173c0::C_010173c0() : a(0), b(0), c(0) {}

struct C_01017400 { int a, b, c; C_01017400(); };

// @baa 0x01017400
C_01017400::C_01017400() : a(0), b(0), c(0) {}

struct C_01017440 { int a, b, c; C_01017440(); };

// @baa 0x01017440
C_01017440::C_01017440() : a(0), b(0), c(0) {}

struct C_01017480 { int a, b, c; C_01017480(); };

// @baa 0x01017480
C_01017480::C_01017480() : a(0), b(0), c(0) {}

struct C_010174c0 { int a, b, c; C_010174c0(); };

// @baa 0x010174c0
C_010174c0::C_010174c0() : a(0), b(0), c(0) {}

struct C_01017500 { int sub_01017500(void); };

// @baa 0x01017500
int C_01017500::sub_01017500(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01017510 { int sub_01017510(void); };

// @baa 0x01017510
int C_01017510::sub_01017510(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01017520 { int sub_01017520(void); };

// @baa 0x01017520
int C_01017520::sub_01017520(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01017530 { int sub_01017530(void); };

// @baa 0x01017530
int C_01017530::sub_01017530(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01017540 { int sub_01017540(void); };

// @baa 0x01017540
int C_01017540::sub_01017540(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01017550 { int sub_01017550(void); };

// @baa 0x01017550
int C_01017550::sub_01017550(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01017560 { int sub_01017560(void); };

// @baa 0x01017560
int C_01017560::sub_01017560(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01017570 { int sub_01017570(void); };

// @baa 0x01017570
int C_01017570::sub_01017570(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01017580 { int sub_01017580(void); };

// @baa 0x01017580
int C_01017580::sub_01017580(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01017590 { int sub_01017590(void); };

// @baa 0x01017590
int C_01017590::sub_01017590(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_010175a0 { int sub_010175a0(void); };

// @baa 0x010175a0
int C_010175a0::sub_010175a0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_010175b0 { int sub_010175b0(void); };

// @baa 0x010175b0
int C_010175b0::sub_010175b0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_010175c0 { int sub_010175c0(void); };

// @baa 0x010175c0
int C_010175c0::sub_010175c0(void) { return *(int*)((char*)this + 0); }

struct C_01017650 { int sub_01017650(void); };

// @baa 0x01017650
int C_01017650::sub_01017650(void) { return *(int*)((char*)this + 0); }

struct C_010176d0 { int sub_010176d0(void); };

// @baa 0x010176d0
int C_010176d0::sub_010176d0(void) { return *(int*)((char*)this + 0); }

struct C_01017760 { int sub_01017760(void); };

// @baa 0x01017760
int C_01017760::sub_01017760(void) { return *(int*)((char*)this + 0); }

struct C_010177f0 { int sub_010177f0(void); };

// @baa 0x010177f0
int C_010177f0::sub_010177f0(void) { return *(int*)((char*)this + 0); }

struct C_01017880 {
    int sub_01017880();
};

// @baa 0x01017880
int C_01017880::sub_01017880(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01017890 {
    int sub_01017890();
};

// @baa 0x01017890
int C_01017890::sub_01017890(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_010178a0 {
    int sub_010178a0();
};

// @baa 0x010178a0
int C_010178a0::sub_010178a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_010178b0 {
    int sub_010178b0();
};

// @baa 0x010178b0
int C_010178b0::sub_010178b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_010178c0 {
    int sub_010178c0();
};

// @baa 0x010178c0
int C_010178c0::sub_010178c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_010178d0 { int sub_010178d0(void); };

// @baa 0x010178d0
int C_010178d0::sub_010178d0(void) { return *(int*)((char*)this + 0); }

struct E_010178e0 { BYTE Bytes[152]; };

struct S_010178e0 {
    TArray<E_010178e0> Items; // 0x00
    E_010178e0* sub_010178e0(INT Index);
};

// @baa 0x010178e0
E_010178e0* S_010178e0::sub_010178e0(INT Index)
{
    return &Items(Index);
}

struct C_01017930 { int sub_01017930(void); };

// @baa 0x01017930
int C_01017930::sub_01017930(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01017940 { int sub_01017940(void); };

// @baa 0x01017940
int C_01017940::sub_01017940(void) { return *(int*)((char*)this + 0); }

struct E_01017950 { BYTE Bytes[128]; };

struct S_01017950 {
    TArray<E_01017950> Items; // 0x00
    E_01017950* sub_01017950(INT Index);
};

// @baa 0x01017950
E_01017950* S_01017950::sub_01017950(INT Index)
{
    return &Items(Index);
}

struct C_010179a0 { int sub_010179a0(void); };

// @baa 0x010179a0
int C_010179a0::sub_010179a0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_010179b0 { int sub_010179b0(void); };

// @baa 0x010179b0
int C_010179b0::sub_010179b0(void) { return *(int*)((char*)this + 0); }

struct E_010179c0 { BYTE Bytes[176]; };

struct S_010179c0 {
    TArray<E_010179c0> Items; // 0x00
    E_010179c0* sub_010179c0(INT Index);
};

// @baa 0x010179c0
E_010179c0* S_010179c0::sub_010179c0(INT Index)
{
    return &Items(Index);
}

struct C_01017a10 { int sub_01017a10(void); };

// @baa 0x01017a10
int C_01017a10::sub_01017a10(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01017a20 { int sub_01017a20(void); };

// @baa 0x01017a20
int C_01017a20::sub_01017a20(void) { return *(int*)((char*)this + 0); }

struct E_01017a30 { BYTE Bytes[156]; };

struct S_01017a30 {
    TArray<E_01017a30> Items; // 0x00
    E_01017a30* sub_01017a30(INT Index);
};

// @baa 0x01017a30
E_01017a30* S_01017a30::sub_01017a30(INT Index)
{
    return &Items(Index);
}

struct C_01017a80 { int sub_01017a80(void); };

// @baa 0x01017a80
int C_01017a80::sub_01017a80(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01017a90 { int sub_01017a90(void); };

// @baa 0x01017a90
int C_01017a90::sub_01017a90(void) { return *(int*)((char*)this + 0); }

struct E_01017aa0 { BYTE Bytes[120]; };

struct S_01017aa0 {
    TArray<E_01017aa0> Items; // 0x00
    E_01017aa0* sub_01017aa0(INT Index);
};

// @baa 0x01017aa0
E_01017aa0* S_01017aa0::sub_01017aa0(INT Index)
{
    return &Items(Index);
}

struct C_01017af0 { int sub_01017af0(void); };

// @baa 0x01017af0
int C_01017af0::sub_01017af0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01017b00 {
    int sub_01017b00(int);
};

// @baa 0x01017b00
int C_01017b00::sub_01017b00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_01017b10 { int sub_01017b10(void); };

// @baa 0x01017b10
int C_01017b10::sub_01017b10(void) { return *(int*)((char*)this + 20); }

struct C_01017b20 {
    int sub_01017b20(int);
};

// @baa 0x01017b20
int C_01017b20::sub_01017b20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_01017b30 { int sub_01017b30(void); };

// @baa 0x01017b30
int C_01017b30::sub_01017b30(void) { return *(int*)((char*)this + 20); }

struct C_01017b40 {
    int sub_01017b40(int);
};

// @baa 0x01017b40
int C_01017b40::sub_01017b40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_01017b50 { int sub_01017b50(void); };

// @baa 0x01017b50
int C_01017b50::sub_01017b50(void) { return *(int*)((char*)this + 20); }

struct C_01017b60 {
    int sub_01017b60(int);
};

// @baa 0x01017b60
int C_01017b60::sub_01017b60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_01017b70 { int sub_01017b70(void); };

// @baa 0x01017b70
int C_01017b70::sub_01017b70(void) { return *(int*)((char*)this + 20); }

struct C_01017b80 {
    int sub_01017b80(int);
};

// @baa 0x01017b80
int C_01017b80::sub_01017b80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_01017b90 { int sub_01017b90(void); };

// @baa 0x01017b90
int C_01017b90::sub_01017b90(void) { return *(int*)((char*)this + 20); }

struct C_01017ba0 {
    int sub_01017ba0(int);
};

// @baa 0x01017ba0
int C_01017ba0::sub_01017ba0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_01017bb0 {
    int sub_01017bb0(int);
};

// @baa 0x01017bb0
int C_01017bb0::sub_01017bb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_01017bc0 {
    int sub_01017bc0(int);
};

// @baa 0x01017bc0
int C_01017bc0::sub_01017bc0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_01017bd0 {
    int sub_01017bd0(int);
};

// @baa 0x01017bd0
int C_01017bd0::sub_01017bd0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_01017be0 {
    int sub_01017be0(int);
};

// @baa 0x01017be0
int C_01017be0::sub_01017be0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_01017bf0 { int sub_01017bf0(void); };

// @baa 0x01017bf0
int C_01017bf0::sub_01017bf0(void) { return *(int*)((char*)this + 20); }

struct C_01017c00 { int sub_01017c00(void); };

// @baa 0x01017c00
int C_01017c00::sub_01017c00(void) { return *(int*)((char*)this + 20); }

struct C_01017c10 { int sub_01017c10(void); };

// @baa 0x01017c10
int C_01017c10::sub_01017c10(void) { return *(int*)((char*)this + 20); }

struct C_01017c20 { int sub_01017c20(void); };

// @baa 0x01017c20
int C_01017c20::sub_01017c20(void) { return *(int*)((char*)this + 20); }

struct C_01017c30 { int sub_01017c30(void); };

// @baa 0x01017c30
int C_01017c30::sub_01017c30(void) { return *(int*)((char*)this + 20); }

struct C_view {
    int sub_0053ea70(int, int);
};

// @baa 0x01017d50
undefined4 UTexture2D::sub_01017d50(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(this))->sub_0053ea70(param_2, 4);
  return param_1;
}

extern undefined * g_01e72a60;
// @baa 0x01017d70
undefined4 * UTexture2D::sub_01017d70(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72a60);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01017e50 {
    undefined4 sub_01017e50(undefined4);
    int sub_0053ea70(int, int);
};

// @baa 0x01017e50
undefined4 C_01017e50::sub_01017e50(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01017e50 *)(this))->sub_0053ea70(param_2, 4);
  return param_1;
}

struct C_01017e70 {
    undefined4 * sub_01017e70(byte);
};

// @baa 0x01017e70
undefined4 * C_01017e70::sub_01017e70(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72a60);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01017e90 { int sub_01017e90(void); };

// @baa 0x01017e90
int C_01017e90::sub_01017e90(void) { return *(int*)((char*)this + 80); }

struct C_01017ea0 { int sub_01017ea0(void); };

// @baa 0x01017ea0
int C_01017ea0::sub_01017ea0(void) { return *(int*)((char*)this + 112); }

int sub_00c38ac0(void);
// @baa 0x01017eb0
undefined4 UObject::sub_01017eb0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct E_01017ed0 { BYTE Bytes[16]; };

struct S_01017ed0 {
    TArray<E_01017ed0> Items; // 0x00
    const E_01017ed0* sub_01017ed0(INT Index) const;
};

// @baa 0x01017ed0
const E_01017ed0* S_01017ed0::sub_01017ed0(INT Index) const
{
    return &Items(Index);
}

struct C_01017f20 {
    int sub_01017f20(int);
};

// @baa 0x01017f20
int C_01017f20::sub_01017f20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x4c + *param_1;
}

struct C_01017f30 {
    int sub_01017f30(int);
};

// @baa 0x01017f30
int C_01017f30::sub_01017f30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct S_01017f40 {
    TArray<E> Items; // 0x00
    E* sub_01017f40(INT Index);
};

// @baa 0x01017f40
E* S_01017f40::sub_01017f40(INT Index)
{
    return &Items(Index);
}

struct S_01017f90 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_01017f90(INT Index);
};

// @baa 0x01017f90
QWORD* S_01017f90::sub_01017f90(INT Index)
{
    return &Items(Index);
}

struct C_01017fe0 { int sub_01017fe0(void); };

// @baa 0x01017fe0
int C_01017fe0::sub_01017fe0(void) { return *(int*)((char*)this + 4); }

struct C_01017ff0 {
    int sub_01017ff0(int);
};

// @baa 0x01017ff0
int C_01017ff0::sub_01017ff0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xac + *param_1;
}

struct C_01018000 {
    int sub_01018000(int);
};

// @baa 0x01018000
int C_01018000::sub_01018000(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xb0 + *param_1;
}

struct C_01018010 {
    int sub_01018010(int);
};

// @baa 0x01018010
int C_01018010::sub_01018010(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xcc + *param_1;
}

struct C_01018020 {
    int sub_01018020(int);
};

// @baa 0x01018020
int C_01018020::sub_01018020(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 300 + *param_1;
}

struct C_01018030 {
    int sub_01018030(int);
};

// @baa 0x01018030
int C_01018030::sub_01018030(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 200 + *param_1;
}

struct C_01018040 {
    int sub_01018040(int);
};

// @baa 0x01018040
int C_01018040::sub_01018040(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x8c + *param_1;
}

struct C_01018050 {
    int sub_01018050(int);
};

// @baa 0x01018050
int C_01018050::sub_01018050(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xc4 + *param_1;
}

struct C_01018060 {
    int sub_01018060(int);
};

// @baa 0x01018060
int C_01018060::sub_01018060(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xa0 + *param_1;
}

struct C_01018070 {
    int sub_01018070(int);
};

// @baa 0x01018070
int C_01018070::sub_01018070(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x94 + *param_1;
}

struct C_01018080 {
    int sub_01018080(int);
};

// @baa 0x01018080
int C_01018080::sub_01018080(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x88 + *param_1;
}

struct C_01018090 {
    int sub_01018090();
};

// @baa 0x01018090
int C_01018090::sub_01018090(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_010180b0 {
    int sub_010180b0();
};

// @baa 0x010180b0
int C_010180b0::sub_010180b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_010180d0 {
    int sub_010180d0();
};

// @baa 0x010180d0
int C_010180d0::sub_010180d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_010180f0 {
    int sub_010180f0();
};

// @baa 0x010180f0
int C_010180f0::sub_010180f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01018110 {
    int sub_01018110();
};

// @baa 0x01018110
int C_01018110::sub_01018110(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01018130 {
    int sub_01018130();
};

// @baa 0x01018130
int C_01018130::sub_01018130(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01018150 {
    int sub_01018150();
};

// @baa 0x01018150
int C_01018150::sub_01018150(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01018170 {
    int sub_01018170();
};

// @baa 0x01018170
int C_01018170::sub_01018170(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01018190 {
    int sub_01018190();
};

// @baa 0x01018190
int C_01018190::sub_01018190(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_010181b0 {
    int sub_010181b0();
};

// @baa 0x010181b0
int C_010181b0::sub_010181b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_010181d0 {
    int sub_010181d0();
};

// @baa 0x010181d0
int C_010181d0::sub_010181d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_010181f0 {
    int sub_010181f0();
};

// @baa 0x010181f0
int C_010181f0::sub_010181f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01018210 {
    int sub_01018210();
};

// @baa 0x01018210
int C_01018210::sub_01018210(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01018230 {
    int sub_01018230();
};

// @baa 0x01018230
int C_01018230::sub_01018230(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01018250 {
    int sub_01018250();
};

// @baa 0x01018250
int C_01018250::sub_01018250(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct E_010182b0 { BYTE Bytes[172]; };

struct S_010182b0 {
    TArray<E_010182b0> Items; // 0x00
    E_010182b0* sub_010182b0(INT Index);
};

// @baa 0x010182b0
E_010182b0* S_010182b0::sub_010182b0(INT Index)
{
    return &Items(Index);
}

struct C_01018300 {
    int sub_01018300(int);
};

// @baa 0x01018300
int C_01018300::sub_01018300(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x3c;
}

struct E_01018320 { BYTE Bytes[176]; };

struct S_01018320 {
    TArray<E_01018320> Items; // 0x00
    E_01018320* sub_01018320(INT Index);
};

// @baa 0x01018320
E_01018320* S_01018320::sub_01018320(INT Index)
{
    return &Items(Index);
}

struct E_01018370 { BYTE Bytes[204]; };

struct S_01018370 {
    TArray<E_01018370> Items; // 0x00
    E_01018370* sub_01018370(INT Index);
};

// @baa 0x01018370
E_01018370* S_01018370::sub_01018370(INT Index)
{
    return &Items(Index);
}

struct E_010183c0 { BYTE Bytes[300]; };

struct S_010183c0 {
    TArray<E_010183c0> Items; // 0x00
    E_010183c0* sub_010183c0(INT Index);
};

// @baa 0x010183c0
E_010183c0* S_010183c0::sub_010183c0(INT Index)
{
    return &Items(Index);
}

struct E_01018410 { BYTE Bytes[200]; };

struct S_01018410 {
    TArray<E_01018410> Items; // 0x00
    E_01018410* sub_01018410(INT Index);
};

// @baa 0x01018410
E_01018410* S_01018410::sub_01018410(INT Index)
{
    return &Items(Index);
}

struct E_01018460 { BYTE Bytes[140]; };

struct S_01018460 {
    TArray<E_01018460> Items; // 0x00
    E_01018460* sub_01018460(INT Index);
};

// @baa 0x01018460
E_01018460* S_01018460::sub_01018460(INT Index)
{
    return &Items(Index);
}

struct E_010184b0 { BYTE Bytes[196]; };

struct S_010184b0 {
    TArray<E_010184b0> Items; // 0x00
    E_010184b0* sub_010184b0(INT Index);
};

// @baa 0x010184b0
E_010184b0* S_010184b0::sub_010184b0(INT Index)
{
    return &Items(Index);
}

struct E_01018500 { BYTE Bytes[160]; };

struct S_01018500 {
    TArray<E_01018500> Items; // 0x00
    E_01018500* sub_01018500(INT Index);
};

// @baa 0x01018500
E_01018500* S_01018500::sub_01018500(INT Index)
{
    return &Items(Index);
}

struct E_01018550 { BYTE Bytes[148]; };

struct S_01018550 {
    TArray<E_01018550> Items; // 0x00
    E_01018550* sub_01018550(INT Index);
};

// @baa 0x01018550
E_01018550* S_01018550::sub_01018550(INT Index)
{
    return &Items(Index);
}

struct E_010185a0 { BYTE Bytes[136]; };

struct S_010185a0 {
    TArray<E_010185a0> Items; // 0x00
    E_010185a0* sub_010185a0(INT Index);
};

// @baa 0x010185a0
E_010185a0* S_010185a0::sub_010185a0(INT Index)
{
    return &Items(Index);
}

struct C_010185f0 {
    int sub_010185f0(int);
};

// @baa 0x010185f0
int C_010185f0::sub_010185f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct E_01018600 { BYTE Bytes[60]; };

struct S_01018600 {
    TArray<E_01018600> Items; // 0x00
    E_01018600* sub_01018600(INT Index);
};

// @baa 0x01018600
E_01018600* S_01018600::sub_01018600(INT Index)
{
    return &Items(Index);
}

struct C_01018650 {
    int sub_01018650(int);
};

// @baa 0x01018650
int C_01018650::sub_01018650(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_01018660 {
    int sub_01018660(int);
};

// @baa 0x01018660
int C_01018660::sub_01018660(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xac + *param_1;
}

struct C_01018670 {
    int sub_01018670(int);
};

// @baa 0x01018670
int C_01018670::sub_01018670(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xb0 + *param_1;
}

struct C_01018680 {
    int sub_01018680(int);
};

// @baa 0x01018680
int C_01018680::sub_01018680(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xcc + *param_1;
}

struct C_01018690 {
    int sub_01018690(int);
};

// @baa 0x01018690
int C_01018690::sub_01018690(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 300 + *param_1;
}

struct C_010186a0 {
    int sub_010186a0(int);
};

// @baa 0x010186a0
int C_010186a0::sub_010186a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 200 + *param_1;
}

struct C_010186b0 {
    int sub_010186b0(int);
};

// @baa 0x010186b0
int C_010186b0::sub_010186b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x8c + *param_1;
}

struct C_010186c0 {
    int sub_010186c0(int);
};

// @baa 0x010186c0
int C_010186c0::sub_010186c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xc4 + *param_1;
}

struct C_010186d0 {
    int sub_010186d0(int);
};

// @baa 0x010186d0
int C_010186d0::sub_010186d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x8c + *param_1;
}

struct C_010186e0 {
    int sub_010186e0(int);
};

// @baa 0x010186e0
int C_010186e0::sub_010186e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xa0 + *param_1;
}

struct C_010186f0 {
    int sub_010186f0(int);
};

// @baa 0x010186f0
int C_010186f0::sub_010186f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x94 + *param_1;
}

struct C_01018700 {
    int sub_01018700(int);
};

// @baa 0x01018700
int C_01018700::sub_01018700(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x88 + *param_1;
}

struct C_01018710 {
    int sub_01018710(int);
};

// @baa 0x01018710
int C_01018710::sub_01018710(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xa0 + *param_1;
}

struct C_01018720 {
    int sub_01018720(int);
};

// @baa 0x01018720
int C_01018720::sub_01018720(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_01018730 {
    int sub_01018730();
};

// @baa 0x01018730
int C_01018730::sub_01018730(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01018750 {
    int sub_01018750(int);
};

// @baa 0x01018750
int C_01018750::sub_01018750(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_01018760 {
    int sub_01018760();
};

// @baa 0x01018760
int C_01018760::sub_01018760(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01018780 {
    int sub_01018780(int);
};

// @baa 0x01018780
int C_01018780::sub_01018780(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_01019550 { int sub_01019550(void); };

// @baa 0x01019550
int C_01019550::sub_01019550(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01019560 {
    int sub_01019560(int);
};

// @baa 0x01019560
int C_01019560::sub_01019560(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_01019570 { int sub_01019570(void); };

// @baa 0x01019570
int C_01019570::sub_01019570(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_010195e0 {
    int sub_010195e0(int);
};

// @baa 0x010195e0
int C_010195e0::sub_010195e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x010195f0
void __stdcall sub_010195f0(int a0, int a1) {  }

struct C_01019600 {
    int sub_01019600();
};

// @baa 0x01019600
int C_01019600::sub_01019600(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01019620 {
    int sub_01019620(int);
};

// @baa 0x01019620
int C_01019620::sub_01019620(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_01019630 {
    int sub_01019630(int);
};

// @baa 0x01019630
int C_01019630::sub_01019630(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct S_01019640 { int sub_00544d40(int); };

// @baa 0x01019640
int sub_01019640(S_01019640 *s, int a) { return s->sub_00544d40(a); }

struct S_01019650 { int sub_00544d40(int); };

// @baa 0x01019650
int sub_01019650(S_01019650 *s, int a) { return s->sub_00544d40(a); }

struct S_01019660 { int sub_00544d40(int); };

// @baa 0x01019660
int sub_01019660(S_01019660 *s, int a) { return s->sub_00544d40(a); }

struct S_01019670 { int sub_00544d40(int); };

// @baa 0x01019670
int sub_01019670(S_01019670 *s, int a) { return s->sub_00544d40(a); }

struct S_01019680 { int sub_00544d40(int); };

// @baa 0x01019680
int sub_01019680(S_01019680 *s, int a) { return s->sub_00544d40(a); }

struct S_01019690 { int sub_00544d40(int); };

// @baa 0x01019690
int sub_01019690(S_01019690 *s, int a) { return s->sub_00544d40(a); }

struct S_010196a0 { int sub_00544d40(int); };

// @baa 0x010196a0
int sub_010196a0(S_010196a0 *s, int a) { return s->sub_00544d40(a); }

struct S_010196b0 { int sub_00544d40(int); };

// @baa 0x010196b0
int sub_010196b0(S_010196b0 *s, int a) { return s->sub_00544d40(a); }

struct S_010196c0 { int sub_00544d40(int); };

// @baa 0x010196c0
int sub_010196c0(S_010196c0 *s, int a) { return s->sub_00544d40(a); }

struct S_010196d0 { int sub_00544d40(int); };

// @baa 0x010196d0
int sub_010196d0(S_010196d0 *s, int a) { return s->sub_00544d40(a); }

struct S_010196e0 { int sub_00544d40(int); };

// @baa 0x010196e0
int sub_010196e0(S_010196e0 *s, int a) { return s->sub_00544d40(a); }

struct S_010196f0 { int sub_00544d40(int); };

// @baa 0x010196f0
int sub_010196f0(S_010196f0 *s, int a) { return s->sub_00544d40(a); }

struct C_01019700 {
    int sub_01019700();
};

// @baa 0x01019700
int C_01019700::sub_01019700(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_01019720 {
    int sub_01019720(int);
};

// @baa 0x01019720
int C_01019720::sub_01019720(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_01019730 {
    int sub_01019730();
};

// @baa 0x01019730
int C_01019730::sub_01019730(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01019750 {
    int sub_01019750();
};

// @baa 0x01019750
int C_01019750::sub_01019750(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01019770 {
    int sub_01019770();
};

// @baa 0x01019770
int C_01019770::sub_01019770(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

struct C_01019780 {
    int sub_01019780(int);
};

// @baa 0x01019780
int C_01019780::sub_01019780(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_01019790 {
    int sub_01019790(int);
};

// @baa 0x01019790
int C_01019790::sub_01019790(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

struct C_010197a0 {
    int sub_010197a0();
};

// @baa 0x010197a0
int C_010197a0::sub_010197a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_010197c0 {
    int sub_010197c0();
};

// @baa 0x010197c0
int C_010197c0::sub_010197c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x34 + *(int *)*param_1;
}

struct C_010197d0 {
    int sub_010197d0(int);
};

// @baa 0x010197d0
int C_010197d0::sub_010197d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_010197e0 {
    int sub_010197e0();
};

// @baa 0x010197e0
int C_010197e0::sub_010197e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01019800 {
    int sub_01019800();
};

// @baa 0x01019800
int C_01019800::sub_01019800(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_01019e40 {
    int sub_01019e40(int);
};

// @baa 0x01019e40
int C_01019e40::sub_01019e40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_01019e80 {
    int sub_01019e80();
};

// @baa 0x01019e80
int C_01019e80::sub_01019e80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

struct C_01019ec0 {
    int sub_01019ec0(int);
};

// @baa 0x01019ec0
int C_01019ec0::sub_01019ec0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_01019f00 {
    int sub_01019f00();
};

// @baa 0x01019f00
int C_01019f00::sub_01019f00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x34 + *(int *)*param_1;
}

int sub_005413d0(...);
// @baa 0x01019f40
void sub_01019f40(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_01019f50 {
    int sub_01019f50(int);
};

// @baa 0x01019f50
int C_01019f50::sub_01019f50(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct C_01019f60 {
    int sub_01019f60();
};

// @baa 0x01019f60
int C_01019f60::sub_01019f60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_01019f70 {
    int sub_01019f70();
};

// @baa 0x01019f70
int C_01019f70::sub_01019f70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01019f90 {
    int sub_01019f90();
};

// @baa 0x01019f90
int C_01019f90::sub_01019f90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_01019fa0 {
    int sub_01019fa0(int);
};

// @baa 0x01019fa0
int C_01019fa0::sub_01019fa0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xac + *param_1;
}

struct C_01019fb0 {
    int sub_01019fb0(int);
};

// @baa 0x01019fb0
int C_01019fb0::sub_01019fb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xb0 + *param_1;
}

struct C_01019fc0 {
    int sub_01019fc0(int);
};

// @baa 0x01019fc0
int C_01019fc0::sub_01019fc0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xcc + *param_1;
}

struct C_01019fd0 {
    int sub_01019fd0(int);
};

// @baa 0x01019fd0
int C_01019fd0::sub_01019fd0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 300 + *param_1;
}

struct C_01019fe0 {
    int sub_01019fe0(int);
};

// @baa 0x01019fe0
int C_01019fe0::sub_01019fe0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 200 + *param_1;
}

struct C_01019ff0 {
    int sub_01019ff0(int);
};

// @baa 0x01019ff0
int C_01019ff0::sub_01019ff0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x8c + *param_1;
}

struct C_0101a000 {
    int sub_0101a000(int);
};

// @baa 0x0101a000
int C_0101a000::sub_0101a000(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xc4 + *param_1;
}

struct C_0101a010 {
    int sub_0101a010(int);
};

// @baa 0x0101a010
int C_0101a010::sub_0101a010(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x8c + *param_1;
}

struct C_0101a020 {
    int sub_0101a020(int);
};

// @baa 0x0101a020
int C_0101a020::sub_0101a020(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xa0 + *param_1;
}

struct C_0101a030 {
    int sub_0101a030(int);
};

// @baa 0x0101a030
int C_0101a030::sub_0101a030(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x94 + *param_1;
}

struct C_0101a040 {
    int sub_0101a040(int);
};

// @baa 0x0101a040
int C_0101a040::sub_0101a040(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x88 + *param_1;
}

struct C_0101a050 {
    int sub_0101a050(int);
};

// @baa 0x0101a050
int C_0101a050::sub_0101a050(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xa0 + *param_1;
}

struct C_0101a060 {
    int sub_0101a060(int);
};

// @baa 0x0101a060
int C_0101a060::sub_0101a060(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_0101a070 {
    int sub_0101a070();
};

// @baa 0x0101a070
int C_0101a070::sub_0101a070(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0101a080 {
    int sub_0101a080(int);
};

// @baa 0x0101a080
int C_0101a080::sub_0101a080(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

struct C_0101a090 {
    int sub_0101a090();
};

// @baa 0x0101a090
int C_0101a090::sub_0101a090(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a0b0 {
    int sub_0101a0b0();
};

// @baa 0x0101a0b0
int C_0101a0b0::sub_0101a0b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a0d0 {
    int sub_0101a0d0();
};

// @baa 0x0101a0d0
int C_0101a0d0::sub_0101a0d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a0f0 {
    int sub_0101a0f0();
};

// @baa 0x0101a0f0
int C_0101a0f0::sub_0101a0f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a110 {
    int sub_0101a110();
};

// @baa 0x0101a110
int C_0101a110::sub_0101a110(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a130 {
    int sub_0101a130();
};

// @baa 0x0101a130
int C_0101a130::sub_0101a130(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a150 {
    int sub_0101a150();
};

// @baa 0x0101a150
int C_0101a150::sub_0101a150(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a170 {
    int sub_0101a170();
};

// @baa 0x0101a170
int C_0101a170::sub_0101a170(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a190 {
    int sub_0101a190();
};

// @baa 0x0101a190
int C_0101a190::sub_0101a190(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a1b0 {
    int sub_0101a1b0();
};

// @baa 0x0101a1b0
int C_0101a1b0::sub_0101a1b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a1d0 {
    int sub_0101a1d0();
};

// @baa 0x0101a1d0
int C_0101a1d0::sub_0101a1d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a1f0 {
    int sub_0101a1f0();
};

// @baa 0x0101a1f0
int C_0101a1f0::sub_0101a1f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a210 {
    int sub_0101a210();
};

// @baa 0x0101a210
int C_0101a210::sub_0101a210(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a230 {
    int sub_0101a230();
};

// @baa 0x0101a230
int C_0101a230::sub_0101a230(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a250 {
    int sub_0101a250();
};

// @baa 0x0101a250
int C_0101a250::sub_0101a250(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_0101a260 {
    int sub_0101a260();
};

// @baa 0x0101a260
int C_0101a260::sub_0101a260(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a280 {
    int sub_0101a280();
};

// @baa 0x0101a280
int C_0101a280::sub_0101a280(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a2a0 {
    int sub_0101a2a0();
};

// @baa 0x0101a2a0
int C_0101a2a0::sub_0101a2a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_0101a2b0 {
    int sub_0101a2b0();
};

// @baa 0x0101a2b0
int C_0101a2b0::sub_0101a2b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a2d0 {
    int sub_0101a2d0();
};

// @baa 0x0101a2d0
int C_0101a2d0::sub_0101a2d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a2f0 {
    int sub_0101a2f0();
};

// @baa 0x0101a2f0
int C_0101a2f0::sub_0101a2f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_0101a300 {
    int sub_0101a300();
};

// @baa 0x0101a300
int C_0101a300::sub_0101a300(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_0101bc20 {
    void sub_0101bc20(undefined4);
    int sub_0101b0f0(int);
};

int sub_005467d0(...);
// @baa 0x0101bc20
void C_0101bc20::sub_0101bc20(undefined4 param_2)
{
    int param_1 = (int)this;
  int iVar1;
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(*(int *)(param_1 + 4) + 0x30) == 0)) {
    iVar1 = sub_005467d0(0xc,param_2);
    if (iVar1 != 0) {
      ((C_0101bc20 *)((*(char **)((char *)this + 0))))->sub_0101b0f0(iVar1);
    }
  }
  return;
}

struct C_0101bc50 {
    void sub_0101bc50(undefined4);
    int sub_0101b0f0(int);
};

// @baa 0x0101bc50
void C_0101bc50::sub_0101bc50(undefined4 param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  if ((*param_1 == 0) || (*(int *)(*param_1 + 0x30) == 0)) {
    iVar1 = sub_005467d0(0xc,param_2);
    if (iVar1 != 0) {
      ((C_0101bc50 *)((*(char **)((char *)this + 4))))->sub_0101b0f0(iVar1);
    }
  }
  return;
}

struct C_0101be90 { int sub_0101be90(void); };

// @baa 0x0101be90
int C_0101be90::sub_0101be90(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0101bf50 { int sub_0101bf50(void); };

// @baa 0x0101bf50
int C_0101bf50::sub_0101bf50(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_0101bf60 { void* Data; int Num; int Max; void sub_0101bf60(); };

// @baa 0x0101bf60
void C_0101bf60::sub_0101bf60() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0101c070 {
    int sub_0101c070();
};

// @baa 0x0101c070
int C_0101c070::sub_0101c070(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101c220 {
    int sub_0101c220(int);
};

// @baa 0x0101c220
int C_0101c220::sub_0101c220(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xac + *param_1;
}

struct C_0101c230 {
    int sub_0101c230(int);
};

// @baa 0x0101c230
int C_0101c230::sub_0101c230(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xb0 + *param_1;
}

struct C_0101c240 {
    int sub_0101c240(int);
};

// @baa 0x0101c240
int C_0101c240::sub_0101c240(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xcc + *param_1;
}

struct C_0101c250 {
    int sub_0101c250(int);
};

// @baa 0x0101c250
int C_0101c250::sub_0101c250(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 300 + *param_1;
}

struct C_0101c260 {
    int sub_0101c260(int);
};

// @baa 0x0101c260
int C_0101c260::sub_0101c260(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 200 + *param_1;
}

struct C_0101c270 {
    int sub_0101c270(int);
};

// @baa 0x0101c270
int C_0101c270::sub_0101c270(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x8c + *param_1;
}

struct C_0101c280 {
    int sub_0101c280(int);
};

// @baa 0x0101c280
int C_0101c280::sub_0101c280(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xc4 + *param_1;
}

struct C_0101c290 {
    int sub_0101c290(int);
};

// @baa 0x0101c290
int C_0101c290::sub_0101c290(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x8c + *param_1;
}

struct C_0101c2a0 {
    int sub_0101c2a0(int);
};

// @baa 0x0101c2a0
int C_0101c2a0::sub_0101c2a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xa0 + *param_1;
}

struct C_0101c2b0 {
    int sub_0101c2b0(int);
};

// @baa 0x0101c2b0
int C_0101c2b0::sub_0101c2b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x94 + *param_1;
}

struct C_0101c2c0 {
    int sub_0101c2c0(int);
};

// @baa 0x0101c2c0
int C_0101c2c0::sub_0101c2c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x88 + *param_1;
}

struct C_0101c2d0 {
    int sub_0101c2d0(int);
};

// @baa 0x0101c2d0
int C_0101c2d0::sub_0101c2d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xa0 + *param_1;
}

struct C_0101c2e0 {
    int sub_0101c2e0(int);
};

// @baa 0x0101c2e0
int C_0101c2e0::sub_0101c2e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0101c2f0 {
    int sub_0101c2f0(int);
};

// @baa 0x0101c2f0
int C_0101c2f0::sub_0101c2f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_0101c300 {
    int sub_0101c300();
};

// @baa 0x0101c300
int C_0101c300::sub_0101c300(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101c320 {
    int sub_0101c320();
};

// @baa 0x0101c320
int C_0101c320::sub_0101c320(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101c340 {
    int sub_0101c340();
};

// @baa 0x0101c340
int C_0101c340::sub_0101c340(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

struct C_0101c350 {
    int sub_0101c350(int);
};

// @baa 0x0101c350
int C_0101c350::sub_0101c350(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0101c360 {
    int sub_0101c360(int);
};

// @baa 0x0101c360
int C_0101c360::sub_0101c360(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

struct C_0101c370 {
    int sub_0101c370();
};

// @baa 0x0101c370
int C_0101c370::sub_0101c370(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101c390 {
    int sub_0101c390();
};

// @baa 0x0101c390
int C_0101c390::sub_0101c390(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x34 + *(int *)*param_1;
}

struct C_0101c3a0 {
    int sub_0101c3a0();
};

// @baa 0x0101c3a0
int C_0101c3a0::sub_0101c3a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_0101c3c0 {
    int sub_0101c3c0(int);
};

// @baa 0x0101c3c0
int C_0101c3c0::sub_0101c3c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0101c3d0 {
    int sub_0101c3d0();
};

// @baa 0x0101c3d0
int C_0101c3d0::sub_0101c3d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101c3f0 {
    int sub_0101c3f0();
};

// @baa 0x0101c3f0
int C_0101c3f0::sub_0101c3f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct M_0101c400 { void sub_0040fcc0(); };

struct C_0101c400 { char pad[8]; M_0101c400 m; void sub_0101c400(); };

// @baa 0x0101c400
void C_0101c400::sub_0101c400() { m.sub_0040fcc0(); }

int sub_0040fcc0(void);
// @baa 0x0101c410
undefined4 UObject::sub_0101c410(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0101c430 {
    undefined4 sub_0101c430(byte);
};

int sub_0101b940(void);
// @baa 0x0101c430
undefined4 C_0101c430::sub_0101c430(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0101b940();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_0101c450 { void sub_005a9220(); };

struct C_0101c450 { char pad[4]; M_0101c450 m; void sub_0101c450(); };

// @baa 0x0101c450
void C_0101c450::sub_0101c450() { m.sub_005a9220(); }

struct M_0101c460 { void sub_0040fcc0(); };

struct C_0101c460 { char pad[4]; M_0101c460 m; void sub_0101c460(); };

// @baa 0x0101c460
void C_0101c460::sub_0101c460() { m.sub_0040fcc0(); }

struct C_0101c470 {
    int sub_0101c470(int);
};

// @baa 0x0101c470
int C_0101c470::sub_0101c470(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xac + *param_1;
}

struct C_0101c520 {
    int sub_0101c520(int);
};

// @baa 0x0101c520
int C_0101c520::sub_0101c520(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xb0 + *param_1;
}

struct C_0101c5d0 {
    int sub_0101c5d0(int);
};

// @baa 0x0101c5d0
int C_0101c5d0::sub_0101c5d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xcc + *param_1;
}

struct C_0101c680 {
    int sub_0101c680(int);
};

// @baa 0x0101c680
int C_0101c680::sub_0101c680(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 300 + *param_1;
}

struct C_0101c730 {
    int sub_0101c730(int);
};

// @baa 0x0101c730
int C_0101c730::sub_0101c730(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 200 + *param_1;
}

struct C_0101c7e0 {
    int sub_0101c7e0(int);
};

// @baa 0x0101c7e0
int C_0101c7e0::sub_0101c7e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x8c + *param_1;
}

struct C_0101c890 {
    int sub_0101c890(int);
};

// @baa 0x0101c890
int C_0101c890::sub_0101c890(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xc4 + *param_1;
}

struct C_0101c940 {
    int sub_0101c940(int);
};

// @baa 0x0101c940
int C_0101c940::sub_0101c940(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x8c + *param_1;
}

struct C_0101c9f0 {
    int sub_0101c9f0(int);
};

// @baa 0x0101c9f0
int C_0101c9f0::sub_0101c9f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xa0 + *param_1;
}

struct C_0101caa0 {
    int sub_0101caa0(int);
};

// @baa 0x0101caa0
int C_0101caa0::sub_0101caa0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x94 + *param_1;
}

struct C_0101cb50 {
    int sub_0101cb50(int);
};

// @baa 0x0101cb50
int C_0101cb50::sub_0101cb50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x88 + *param_1;
}

struct C_0101cc00 {
    int sub_0101cc00(int);
};

// @baa 0x0101cc00
int C_0101cc00::sub_0101cc00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xa0 + *param_1;
}

struct C_0101cda0 {
    int sub_0101cda0(int);
};

// @baa 0x0101cda0
int C_0101cda0::sub_0101cda0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_0101ce20 {
    undefined4 * sub_0101ce20(int *);
    int sub_0101b040(int);
};

// @baa 0x0101ce20
undefined4 * C_0101ce20::sub_0101ce20(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  ((C_0101ce20 *)(((char *)this + 8)))->sub_0101b040(param_2[1]);
  return param_1;
}

struct C_0101ce50 {
    undefined4 * sub_0101ce50(int *);
    int sub_0101b040(int);
};

// @baa 0x0101ce50
undefined4 * C_0101ce50::sub_0101ce50(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  ((C_0101ce50 *)(((char *)this + 8)))->sub_0101b040(param_2[1]);
  param_1[7] = 0xffffffff;
  return param_1;
}

struct C_0101ce80 {
    int sub_0101ce80();
};

// @baa 0x0101ce80
int C_0101ce80::sub_0101ce80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0101ce90 {
    int sub_0101ce90(int);
};

// @baa 0x0101ce90
int C_0101ce90::sub_0101ce90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0101cf00 {
    int sub_0101cf00(int);
};

// @baa 0x0101cf00
int C_0101cf00::sub_0101cf00(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x14;
}

struct C_0101cf70 {
    int sub_0101cf70(int);
};

// @baa 0x0101cf70
int C_0101cf70::sub_0101cf70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

struct C_0101d050 {
    int sub_0101d050(int);
};

// @baa 0x0101d050
int C_0101d050::sub_0101d050(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct M_0101d0d0 { void sub_0040fcc0(); };

struct C_0101d0d0 { char pad[8]; M_0101d0d0 m; void sub_0101d0d0(); };

// @baa 0x0101d0d0
void C_0101d0d0::sub_0101d0d0() { m.sub_0040fcc0(); }

struct M_0101d0e0 { void sub_005a9220(); };

struct C_0101d0e0 { char pad[4]; M_0101d0e0 m; void sub_0101d0e0(); };

// @baa 0x0101d0e0
void C_0101d0e0::sub_0101d0e0() { m.sub_005a9220(); }

struct C_0101d0f0 {
    int sub_0101d0f0(int);
};

// @baa 0x0101d0f0
int C_0101d0f0::sub_0101d0f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xac + *param_1;
}

struct C_0101d100 {
    int sub_0101d100(int);
};

// @baa 0x0101d100
int C_0101d100::sub_0101d100(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xb0 + *param_1;
}

struct C_0101d110 {
    int sub_0101d110(int);
};

// @baa 0x0101d110
int C_0101d110::sub_0101d110(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xcc + *param_1;
}

struct C_0101d120 {
    int sub_0101d120(int);
};

// @baa 0x0101d120
int C_0101d120::sub_0101d120(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 300 + *param_1;
}

struct C_0101d130 {
    int sub_0101d130(int);
};

// @baa 0x0101d130
int C_0101d130::sub_0101d130(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 200 + *param_1;
}

struct C_0101d140 {
    int sub_0101d140(int);
};

// @baa 0x0101d140
int C_0101d140::sub_0101d140(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x8c + *param_1;
}

struct C_0101d150 {
    int sub_0101d150(int);
};

// @baa 0x0101d150
int C_0101d150::sub_0101d150(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xc4 + *param_1;
}

struct C_0101d160 {
    int sub_0101d160(int);
};

// @baa 0x0101d160
int C_0101d160::sub_0101d160(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x8c + *param_1;
}

struct C_0101d170 {
    int sub_0101d170(int);
};

// @baa 0x0101d170
int C_0101d170::sub_0101d170(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xa0 + *param_1;
}

struct C_0101d180 {
    int sub_0101d180(int);
};

// @baa 0x0101d180
int C_0101d180::sub_0101d180(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x94 + *param_1;
}

struct C_0101d190 {
    int sub_0101d190(int);
};

// @baa 0x0101d190
int C_0101d190::sub_0101d190(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x88 + *param_1;
}

struct C_0101d1a0 {
    int sub_0101d1a0(int);
};

// @baa 0x0101d1a0
int C_0101d1a0::sub_0101d1a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xa0 + *param_1;
}

struct C_0101d1b0 {
    int sub_0101d1b0(int);
};

// @baa 0x0101d1b0
int C_0101d1b0::sub_0101d1b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_0101d1c0 {
    int sub_0101d1c0(int);
};

// @baa 0x0101d1c0
int C_0101d1c0::sub_0101d1c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

struct C_0101d1d0 {
    int sub_0101d1d0();
};

// @baa 0x0101d1d0
int C_0101d1d0::sub_0101d1d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xac + *(int *)*param_1;
}

struct C_0101d1e0 {
    int sub_0101d1e0();
};

// @baa 0x0101d1e0
int C_0101d1e0::sub_0101d1e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xb0 + *(int *)*param_1;
}

struct C_0101d1f0 {
    int sub_0101d1f0();
};

// @baa 0x0101d1f0
int C_0101d1f0::sub_0101d1f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xcc + *(int *)*param_1;
}

struct C_0101d200 {
    int sub_0101d200();
};

// @baa 0x0101d200
int C_0101d200::sub_0101d200(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 300 + *(int *)*param_1;
}

struct C_0101d210 {
    int sub_0101d210();
};

// @baa 0x0101d210
int C_0101d210::sub_0101d210(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 200 + *(int *)*param_1;
}

struct C_0101d220 {
    int sub_0101d220();
};

// @baa 0x0101d220
int C_0101d220::sub_0101d220(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x8c + *(int *)*param_1;
}

struct C_0101d230 {
    int sub_0101d230();
};

// @baa 0x0101d230
int C_0101d230::sub_0101d230(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xc4 + *(int *)*param_1;
}

struct C_0101d240 {
    int sub_0101d240();
};

// @baa 0x0101d240
int C_0101d240::sub_0101d240(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x8c + *(int *)*param_1;
}

struct C_0101d250 {
    int sub_0101d250();
};

// @baa 0x0101d250
int C_0101d250::sub_0101d250(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xa0 + *(int *)*param_1;
}

struct C_0101d260 {
    int sub_0101d260();
};

// @baa 0x0101d260
int C_0101d260::sub_0101d260(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x94 + *(int *)*param_1;
}

struct C_0101d270 {
    int sub_0101d270();
};

// @baa 0x0101d270
int C_0101d270::sub_0101d270(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x88 + *(int *)*param_1;
}

struct C_0101d280 {
    int sub_0101d280();
};

// @baa 0x0101d280
int C_0101d280::sub_0101d280(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xa0 + *(int *)*param_1;
}

struct C_0101d290 {
    int sub_0101d290();
};

// @baa 0x0101d290
int C_0101d290::sub_0101d290(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

struct C_0101d2a0 {
    int sub_0101d2a0();
};

// @baa 0x0101d2a0
int C_0101d2a0::sub_0101d2a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x34 + *(int *)*param_1;
}

struct C_0101d2b0 {
    int sub_0101d2b0();
};

// @baa 0x0101d2b0
int C_0101d2b0::sub_0101d2b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_0101d2c0 {
    int sub_0101d2c0();
};

// @baa 0x0101d2c0
int C_0101d2c0::sub_0101d2c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_0101db20 {
    undefined4 sub_0101db20(byte);
    int sub_0040fcc0();
};

// @baa 0x0101db20
undefined4 C_0101db20::sub_0101db20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0101db20 *)(((char *)this + 8)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0101db50 {
    undefined4 sub_0101db50(byte);
    int sub_005a9220();
};

// @baa 0x0101db50
undefined4 C_0101db50::sub_0101db50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0101db50 *)(((char *)this + 4)))->sub_005a9220();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0101db80 {
    undefined4 * sub_0101db80(undefined4 *);
    int sub_0101b040(int);
};

// @baa 0x0101db80
undefined4 * C_0101db80::sub_0101db80(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  ((C_0101db80 *)(((char *)this + 8)))->sub_0101b040((int)(param_2 + 2));
  return param_1;
}

struct C_0101dbb0 {
    int sub_0101dbb0();
};

// @baa 0x0101dbb0
int C_0101dbb0::sub_0101dbb0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101dbd0 {
    int sub_0101dbd0();
};

// @baa 0x0101dbd0
int C_0101dbd0::sub_0101dbd0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101dbf0 {
    int sub_0101dbf0();
};

// @baa 0x0101dbf0
int C_0101dbf0::sub_0101dbf0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101dc10 {
    int sub_0101dc10();
};

// @baa 0x0101dc10
int C_0101dc10::sub_0101dc10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101dc30 {
    int sub_0101dc30();
};

// @baa 0x0101dc30
int C_0101dc30::sub_0101dc30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101dc50 {
    int sub_0101dc50();
};

// @baa 0x0101dc50
int C_0101dc50::sub_0101dc50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101dc70 {
    int sub_0101dc70();
};

// @baa 0x0101dc70
int C_0101dc70::sub_0101dc70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101dc90 {
    int sub_0101dc90();
};

// @baa 0x0101dc90
int C_0101dc90::sub_0101dc90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101dcb0 {
    int sub_0101dcb0();
};

// @baa 0x0101dcb0
int C_0101dcb0::sub_0101dcb0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101dcd0 {
    int sub_0101dcd0();
};

// @baa 0x0101dcd0
int C_0101dcd0::sub_0101dcd0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101dcf0 {
    int sub_0101dcf0();
};

// @baa 0x0101dcf0
int C_0101dcf0::sub_0101dcf0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101dd10 {
    int sub_0101dd10();
};

// @baa 0x0101dd10
int C_0101dd10::sub_0101dd10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101dd30 {
    int sub_0101dd30();
};

// @baa 0x0101dd30
int C_0101dd30::sub_0101dd30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_0101dec0 {
    int sub_0101dec0(int);
};

// @baa 0x0101dec0
int C_0101dec0::sub_0101dec0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0101ded0 {
    int sub_0101ded0();
};

// @baa 0x0101ded0
int C_0101ded0::sub_0101ded0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101def0 {
    int sub_0101def0(int);
};

// @baa 0x0101def0
int C_0101def0::sub_0101def0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0101df00 {
    int sub_0101df00();
};

// @baa 0x0101df00
int C_0101df00::sub_0101df00(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101df20 {
    int sub_0101df20(int);
};

// @baa 0x0101df20
int C_0101df20::sub_0101df20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0101df30 {
    int sub_0101df30();
};

// @baa 0x0101df30
int C_0101df30::sub_0101df30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101df50 {
    int sub_0101df50(int);
};

// @baa 0x0101df50
int C_0101df50::sub_0101df50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0101df60 {
    int sub_0101df60();
};

// @baa 0x0101df60
int C_0101df60::sub_0101df60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101df80 {
    int sub_0101df80(int);
};

// @baa 0x0101df80
int C_0101df80::sub_0101df80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0101df90 {
    int sub_0101df90();
};

// @baa 0x0101df90
int C_0101df90::sub_0101df90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101dfb0 {
    int sub_0101dfb0();
};

// @baa 0x0101dfb0
int C_0101dfb0::sub_0101dfb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xac + *(int *)*param_1;
}

struct C_0101dfc0 {
    int sub_0101dfc0();
};

// @baa 0x0101dfc0
int C_0101dfc0::sub_0101dfc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xb0 + *(int *)*param_1;
}

struct C_0101dfd0 {
    int sub_0101dfd0();
};

// @baa 0x0101dfd0
int C_0101dfd0::sub_0101dfd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xcc + *(int *)*param_1;
}

struct C_0101dfe0 {
    int sub_0101dfe0();
};

// @baa 0x0101dfe0
int C_0101dfe0::sub_0101dfe0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 300 + *(int *)*param_1;
}

struct C_0101dff0 {
    int sub_0101dff0();
};

// @baa 0x0101dff0
int C_0101dff0::sub_0101dff0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 200 + *(int *)*param_1;
}

struct C_0101e000 {
    int sub_0101e000();
};

// @baa 0x0101e000
int C_0101e000::sub_0101e000(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x8c + *(int *)*param_1;
}

struct C_0101e010 {
    int sub_0101e010();
};

// @baa 0x0101e010
int C_0101e010::sub_0101e010(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xc4 + *(int *)*param_1;
}

struct C_0101e020 {
    int sub_0101e020();
};

// @baa 0x0101e020
int C_0101e020::sub_0101e020(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x8c + *(int *)*param_1;
}

struct C_0101e030 {
    int sub_0101e030();
};

// @baa 0x0101e030
int C_0101e030::sub_0101e030(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xa0 + *(int *)*param_1;
}

struct C_0101e040 {
    int sub_0101e040();
};

// @baa 0x0101e040
int C_0101e040::sub_0101e040(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x94 + *(int *)*param_1;
}

struct C_0101e050 {
    int sub_0101e050();
};

// @baa 0x0101e050
int C_0101e050::sub_0101e050(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x88 + *(int *)*param_1;
}

struct C_0101e060 {
    int sub_0101e060();
};

// @baa 0x0101e060
int C_0101e060::sub_0101e060(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xa0 + *(int *)*param_1;
}

struct C_0101e0f0 {
    int sub_0101e0f0(int);
};

// @baa 0x0101e0f0
int C_0101e0f0::sub_0101e0f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0101e1a0 {
    int sub_0101e1a0();
};

// @baa 0x0101e1a0
int C_0101e1a0::sub_0101e1a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0101e230 {
    int sub_0101e230(int);
};

// @baa 0x0101e230
int C_0101e230::sub_0101e230(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0101e2e0 {
    int sub_0101e2e0();
};

// @baa 0x0101e2e0
int C_0101e2e0::sub_0101e2e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0101e370 {
    int sub_0101e370(int);
};

// @baa 0x0101e370
int C_0101e370::sub_0101e370(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0101e420 {
    int sub_0101e420();
};

// @baa 0x0101e420
int C_0101e420::sub_0101e420(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0101e4b0 {
    int sub_0101e4b0(int);
};

// @baa 0x0101e4b0
int C_0101e4b0::sub_0101e4b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0101e560 {
    int sub_0101e560();
};

// @baa 0x0101e560
int C_0101e560::sub_0101e560(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0101e5f0 {
    int sub_0101e5f0(int);
};

// @baa 0x0101e5f0
int C_0101e5f0::sub_0101e5f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0101e6a0 {
    int sub_0101e6a0();
};

// @baa 0x0101e6a0
int C_0101e6a0::sub_0101e6a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_view_0101e6f0 {
    int sub_00547da0(int);
};

// @baa 0x0101e6f0
int URFMODSound::sub_0101e6f0(int param_2)
{
    int param_1 = (int)this;
  ((C_view_0101e6f0 *)(this))->sub_00547da0(param_2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  return param_1;
}

struct C_0101e740 { void* Data; int Num; int Max; void sub_0101e740(); };

// @baa 0x0101e740
void C_0101e740::sub_0101e740() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0101e7a0 { void* Data; int Num; int Max; void sub_0101e7a0(); };

// @baa 0x0101e7a0
void C_0101e7a0::sub_0101e7a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0101e800 { void* Data; int Num; int Max; void sub_0101e800(); };

// @baa 0x0101e800
void C_0101e800::sub_0101e800() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0101e860 { void* Data; int Num; int Max; void sub_0101e860(); };

// @baa 0x0101e860
void C_0101e860::sub_0101e860() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0101e8c0 { void* Data; int Num; int Max; void sub_0101e8c0(); };

// @baa 0x0101e8c0
void C_0101e8c0::sub_0101e8c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0101e920 { void* Data; int Num; int Max; void sub_0101e920(); };

// @baa 0x0101e920
void C_0101e920::sub_0101e920() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0101e980 { void* Data; int Num; int Max; void sub_0101e980(); };

// @baa 0x0101e980
void C_0101e980::sub_0101e980() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0101e9e0 { void* Data; int Num; int Max; void sub_0101e9e0(); };

// @baa 0x0101e9e0
void C_0101e9e0::sub_0101e9e0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0101ea40 { void* Data; int Num; int Max; void sub_0101ea40(); };

// @baa 0x0101ea40
void C_0101ea40::sub_0101ea40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0101eaa0 { void* Data; int Num; int Max; void sub_0101eaa0(); };

// @baa 0x0101eaa0
void C_0101eaa0::sub_0101eaa0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct TBitArray {
    int* AllocatorData;
    int NumBits;
    int MaxBits;
    int InlineData[4];
};

struct FBitIterator {
    int WordIndex;
    int Mask;
    const int* WordData;
    int UnvisitedMask;
    int CurrentIndex;
    int BaseIndex;

    FBitIterator(const TBitArray& Array, int StartIndex)
        : WordIndex(StartIndex >> 5)
        , Mask(1 << (StartIndex & 31))
        , WordData(Array.InlineData)
        , UnvisitedMask(~0 << (StartIndex & 31))
        , CurrentIndex(StartIndex)
        , BaseIndex(StartIndex & ~31)
    {
    }
    void FindFirstSetBit();
    void Advance()
    {
        UnvisitedMask &= ~Mask;
        FindFirstSetBit();
    }
};

struct TConstSetBitIterator_0101edf0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101edf0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101edf0& operator++();
};

TConstSetBitIterator_0101edf0::TConstSetBitIterator_0101edf0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101edf0
TConstSetBitIterator_0101edf0& TConstSetBitIterator_0101edf0::operator++()
{
    It.Advance();
    return *this;
}

struct C_0101ee10 {
    int sub_0101ee10();
};

// @baa 0x0101ee10
int C_0101ee10::sub_0101ee10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

struct TConstSetBitIterator_0101ee20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101ee20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101ee20& operator++();
};

TConstSetBitIterator_0101ee20::TConstSetBitIterator_0101ee20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101ee20
TConstSetBitIterator_0101ee20& TConstSetBitIterator_0101ee20::operator++()
{
    It.Advance();
    return *this;
}

struct C_0101ee40 {
    int sub_0101ee40();
};

// @baa 0x0101ee40
int C_0101ee40::sub_0101ee40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct TConstSetBitIterator_0101ee50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101ee50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101ee50& operator++();
};

TConstSetBitIterator_0101ee50::TConstSetBitIterator_0101ee50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101ee50
TConstSetBitIterator_0101ee50& TConstSetBitIterator_0101ee50::operator++()
{
    It.Advance();
    return *this;
}

struct C_0101ee70 {
    int sub_0101ee70();
};

// @baa 0x0101ee70
int C_0101ee70::sub_0101ee70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xac + *(int *)*param_1;
}

struct TConstSetBitIterator_0101ee80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101ee80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101ee80& operator++();
};

TConstSetBitIterator_0101ee80::TConstSetBitIterator_0101ee80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101ee80
TConstSetBitIterator_0101ee80& TConstSetBitIterator_0101ee80::operator++()
{
    It.Advance();
    return *this;
}

struct C_0101eea0 {
    int sub_0101eea0();
};

// @baa 0x0101eea0
int C_0101eea0::sub_0101eea0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xb0 + *(int *)*param_1;
}

struct TConstSetBitIterator_0101eeb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101eeb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101eeb0& operator++();
};

TConstSetBitIterator_0101eeb0::TConstSetBitIterator_0101eeb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101eeb0
TConstSetBitIterator_0101eeb0& TConstSetBitIterator_0101eeb0::operator++()
{
    It.Advance();
    return *this;
}

struct C_0101eed0 {
    int sub_0101eed0();
};

// @baa 0x0101eed0
int C_0101eed0::sub_0101eed0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xcc + *(int *)*param_1;
}

struct TConstSetBitIterator_0101eee0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101eee0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101eee0& operator++();
};

TConstSetBitIterator_0101eee0::TConstSetBitIterator_0101eee0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101eee0
TConstSetBitIterator_0101eee0& TConstSetBitIterator_0101eee0::operator++()
{
    It.Advance();
    return *this;
}

struct C_0101ef00 {
    int sub_0101ef00();
};

// @baa 0x0101ef00
int C_0101ef00::sub_0101ef00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 300 + *(int *)*param_1;
}

struct TConstSetBitIterator_0101ef10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101ef10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101ef10& operator++();
};

TConstSetBitIterator_0101ef10::TConstSetBitIterator_0101ef10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101ef10
TConstSetBitIterator_0101ef10& TConstSetBitIterator_0101ef10::operator++()
{
    It.Advance();
    return *this;
}

struct C_0101ef30 {
    int sub_0101ef30();
};

// @baa 0x0101ef30
int C_0101ef30::sub_0101ef30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 200 + *(int *)*param_1;
}

struct TConstSetBitIterator_0101ef40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101ef40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101ef40& operator++();
};

TConstSetBitIterator_0101ef40::TConstSetBitIterator_0101ef40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101ef40
TConstSetBitIterator_0101ef40& TConstSetBitIterator_0101ef40::operator++()
{
    It.Advance();
    return *this;
}

struct C_0101ef60 {
    int sub_0101ef60();
};

// @baa 0x0101ef60
int C_0101ef60::sub_0101ef60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x8c + *(int *)*param_1;
}

struct TConstSetBitIterator_0101ef70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101ef70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101ef70& operator++();
};

TConstSetBitIterator_0101ef70::TConstSetBitIterator_0101ef70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101ef70
TConstSetBitIterator_0101ef70& TConstSetBitIterator_0101ef70::operator++()
{
    It.Advance();
    return *this;
}

struct C_0101ef90 {
    int sub_0101ef90();
};

// @baa 0x0101ef90
int C_0101ef90::sub_0101ef90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xc4 + *(int *)*param_1;
}

struct TConstSetBitIterator_0101efa0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101efa0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101efa0& operator++();
};

TConstSetBitIterator_0101efa0::TConstSetBitIterator_0101efa0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101efa0
TConstSetBitIterator_0101efa0& TConstSetBitIterator_0101efa0::operator++()
{
    It.Advance();
    return *this;
}

struct C_0101efc0 {
    int sub_0101efc0();
};

// @baa 0x0101efc0
int C_0101efc0::sub_0101efc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x8c + *(int *)*param_1;
}

struct TConstSetBitIterator_0101efd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101efd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101efd0& operator++();
};

TConstSetBitIterator_0101efd0::TConstSetBitIterator_0101efd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101efd0
TConstSetBitIterator_0101efd0& TConstSetBitIterator_0101efd0::operator++()
{
    It.Advance();
    return *this;
}

struct C_0101eff0 {
    int sub_0101eff0();
};

// @baa 0x0101eff0
int C_0101eff0::sub_0101eff0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xa0 + *(int *)*param_1;
}

struct TConstSetBitIterator_0101f000 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101f000(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101f000& operator++();
};

TConstSetBitIterator_0101f000::TConstSetBitIterator_0101f000(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101f000
TConstSetBitIterator_0101f000& TConstSetBitIterator_0101f000::operator++()
{
    It.Advance();
    return *this;
}

struct C_0101f020 {
    int sub_0101f020();
};

// @baa 0x0101f020
int C_0101f020::sub_0101f020(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x94 + *(int *)*param_1;
}

struct TConstSetBitIterator_0101f030 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101f030(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101f030& operator++();
};

TConstSetBitIterator_0101f030::TConstSetBitIterator_0101f030(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101f030
TConstSetBitIterator_0101f030& TConstSetBitIterator_0101f030::operator++()
{
    It.Advance();
    return *this;
}

struct C_0101f050 {
    int sub_0101f050();
};

// @baa 0x0101f050
int C_0101f050::sub_0101f050(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x88 + *(int *)*param_1;
}

struct TConstSetBitIterator_0101f060 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101f060(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101f060& operator++();
};

TConstSetBitIterator_0101f060::TConstSetBitIterator_0101f060(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101f060
TConstSetBitIterator_0101f060& TConstSetBitIterator_0101f060::operator++()
{
    It.Advance();
    return *this;
}

struct C_0101f080 {
    int sub_0101f080();
};

// @baa 0x0101f080
int C_0101f080::sub_0101f080(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xa0 + *(int *)*param_1;
}

struct TConstSetBitIterator_0101f090 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101f090(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101f090& operator++();
};

TConstSetBitIterator_0101f090::TConstSetBitIterator_0101f090(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101f090
TConstSetBitIterator_0101f090& TConstSetBitIterator_0101f090::operator++()
{
    It.Advance();
    return *this;
}

struct C_0101f0b0 {
    int sub_0101f0b0();
};

// @baa 0x0101f0b0
int C_0101f0b0::sub_0101f0b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct TConstSetBitIterator_0101f0c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101f0c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101f0c0& operator++();
};

TConstSetBitIterator_0101f0c0::TConstSetBitIterator_0101f0c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101f0c0
TConstSetBitIterator_0101f0c0& TConstSetBitIterator_0101f0c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0101f110 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101f110(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101f110& operator++();
};

TConstSetBitIterator_0101f110::TConstSetBitIterator_0101f110(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101f110
TConstSetBitIterator_0101f110& TConstSetBitIterator_0101f110::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0101f160 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101f160(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101f160& operator++();
};

TConstSetBitIterator_0101f160::TConstSetBitIterator_0101f160(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101f160
TConstSetBitIterator_0101f160& TConstSetBitIterator_0101f160::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0101f1b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101f1b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101f1b0& operator++();
};

TConstSetBitIterator_0101f1b0::TConstSetBitIterator_0101f1b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101f1b0
TConstSetBitIterator_0101f1b0& TConstSetBitIterator_0101f1b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0101f200 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101f200(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101f200& operator++();
};

TConstSetBitIterator_0101f200::TConstSetBitIterator_0101f200(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101f200
TConstSetBitIterator_0101f200& TConstSetBitIterator_0101f200::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0101f250 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101f250(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101f250& operator++();
};

TConstSetBitIterator_0101f250::TConstSetBitIterator_0101f250(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101f250
TConstSetBitIterator_0101f250& TConstSetBitIterator_0101f250::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0101f2a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101f2a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101f2a0& operator++();
};

TConstSetBitIterator_0101f2a0::TConstSetBitIterator_0101f2a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101f2a0
TConstSetBitIterator_0101f2a0& TConstSetBitIterator_0101f2a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0101f2f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101f2f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101f2f0& operator++();
};

TConstSetBitIterator_0101f2f0::TConstSetBitIterator_0101f2f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101f2f0
TConstSetBitIterator_0101f2f0& TConstSetBitIterator_0101f2f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0101f340 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101f340(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101f340& operator++();
};

TConstSetBitIterator_0101f340::TConstSetBitIterator_0101f340(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101f340
TConstSetBitIterator_0101f340& TConstSetBitIterator_0101f340::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0101f390 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101f390(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101f390& operator++();
};

TConstSetBitIterator_0101f390::TConstSetBitIterator_0101f390(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101f390
TConstSetBitIterator_0101f390& TConstSetBitIterator_0101f390::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0101f3e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101f3e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101f3e0& operator++();
};

TConstSetBitIterator_0101f3e0::TConstSetBitIterator_0101f3e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101f3e0
TConstSetBitIterator_0101f3e0& TConstSetBitIterator_0101f3e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0101f430 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101f430(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101f430& operator++();
};

TConstSetBitIterator_0101f430::TConstSetBitIterator_0101f430(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101f430
TConstSetBitIterator_0101f430& TConstSetBitIterator_0101f430::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0101f480 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101f480(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101f480& operator++();
};

TConstSetBitIterator_0101f480::TConstSetBitIterator_0101f480(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101f480
TConstSetBitIterator_0101f480& TConstSetBitIterator_0101f480::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0101f4d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101f4d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101f4d0& operator++();
};

TConstSetBitIterator_0101f4d0::TConstSetBitIterator_0101f4d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101f4d0
TConstSetBitIterator_0101f4d0& TConstSetBitIterator_0101f4d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0101f520 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101f520(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101f520& operator++();
};

TConstSetBitIterator_0101f520::TConstSetBitIterator_0101f520(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101f520
TConstSetBitIterator_0101f520& TConstSetBitIterator_0101f520::operator++()
{
    It.Advance();
    return *this;
}

struct C_0101f570 {
    undefined4 sub_0101f570(byte);
};

int sub_0101b3b0(void);
// @baa 0x0101f570
undefined4 C_0101f570::sub_0101f570(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0101b3b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_0101f590 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101f590(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101f590& operator++();
};

TConstSetBitIterator_0101f590::TConstSetBitIterator_0101f590(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101f590
TConstSetBitIterator_0101f590& TConstSetBitIterator_0101f590::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0101f5b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101f5b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101f5b0& operator++();
};

TConstSetBitIterator_0101f5b0::TConstSetBitIterator_0101f5b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101f5b0
TConstSetBitIterator_0101f5b0& TConstSetBitIterator_0101f5b0::operator++()
{
    It.Advance();
    return *this;
}

void sub_0101b440();
// @baa 0x0101f600
void sub_0101f600(void) { sub_0101b440(); }

struct TConstSetBitIterator_0101f610 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101f610(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101f610& operator++();
};

TConstSetBitIterator_0101f610::TConstSetBitIterator_0101f610(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101f610
TConstSetBitIterator_0101f610& TConstSetBitIterator_0101f610::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0101f630 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0101f630(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0101f630& operator++();
};

TConstSetBitIterator_0101f630::TConstSetBitIterator_0101f630(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0101f630
TConstSetBitIterator_0101f630& TConstSetBitIterator_0101f630::operator++()
{
    It.Advance();
    return *this;
}

struct M_0101f680 { void sub_0054eec0(); };

struct C_0101f680 { char pad[28]; M_0101f680 m; void sub_0101f680(); };

// @baa 0x0101f680
void C_0101f680::sub_0101f680() { m.sub_0054eec0(); }

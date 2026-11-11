// WinDrv_0eb0000.cpp: 12 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

struct C {
    undefined1 sub_00eb3590();
};

// @baa 0x00eb3590
undefined1 C::sub_00eb3590(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0xc34);
}

struct C_00eb35a0 {
    undefined1 sub_00eb35a0();
};

// @baa 0x00eb35a0
undefined1 C_00eb35a0::sub_00eb35a0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0xc35);
}

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x00eb35b0
void sub_00eb35b0(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_00eb35d0 { int a, b; C_00eb35d0(int, int); };

// @baa 0x00eb35d0
C_00eb35d0::C_00eb35d0(int x, int y) : a(x), b(y) {}

struct S_00eb6110 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00eb6110(INT Index);
};

// @baa 0x00eb6110
DWORD* S_00eb6110::sub_00eb6110(INT Index)
{
    return &Items(Index);
}

// @baa 0x00eb6700
void sub_00eb6700(undefined1 * param_1, undefined1 * param_2)
{
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  }
  return;
}

// @baa 0x00eb6720
void sub_00eb6720(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  }
  return;
}

struct C_00eb9680 {
    int sub_00eb9680(int);
};

// @baa 0x00eb9680
int C_00eb9680::sub_00eb9680(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00eb9690 {
    int sub_00eb9690(int);
};

// @baa 0x00eb9690
int C_00eb9690::sub_00eb9690(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00eb96a0 {
    int sub_00eb96a0(int);
    int sub_00eb7aa0(int, int);
};

// @baa 0x00eb96a0
int C_00eb96a0::sub_00eb96a0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00eb96a0 *)(this))->sub_00eb7aa0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct C_00eb9c70 {
    int sub_00eb9c70(int);
    int sub_00eb96d0(int, int);
};

// @baa 0x00eb9c70
int C_00eb9c70::sub_00eb9c70(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00eb9c70 *)(this))->sub_00eb96d0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct C_00eb9ca0 {
    int sub_00eb9ca0(int);
    int sub_00eb96d0(int, int);
};

// @baa 0x00eb9ca0
int C_00eb9ca0::sub_00eb9ca0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00eb9ca0 *)(this))->sub_00eb96d0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

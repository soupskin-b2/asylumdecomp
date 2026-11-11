// Engine_1480000.cpp: 11 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct M_01481840 { void sub_0147e2e0(); };

struct C { char pad[8]; M_01481840 m; void sub_01481840(); };

// @baa 0x01481840
void C::sub_01481840() { m.sub_0147e2e0(); }

struct M0 {
    void* p;
    M0() { p = 0; }
    ~M0();
    void sub_0147f040(const M0& Other);
};

struct C_014821f0 {
    M0 m0;
    int a;
    int b;
    C_014821f0(const M0& Other);
};

// @baa 0x014821f0
C_014821f0::C_014821f0(const M0& Other) : a(0), b(0)
{
    m0.sub_0147f040(Other);
}

// @baa 0x01482250
int UObject::sub_01482250(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x01482270
int UObject::sub_01482270(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[5] * 0x28;
}

// @baa 0x01482280
int UObject::sub_01482280(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x014822a0
int UObject::sub_014822a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[5] * 0x28;
}

// @baa 0x014822b0
int UObject::sub_014822b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x4c + *param_1;
}

int sub_0053dfa0(...);
int sub_0147e650(void);
// @baa 0x01482530
undefined4 UObject::sub_01482530(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0147e650();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x01482550
int UObject::sub_01482550(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x4c + *param_1;
}

struct C_view {
    int sub_0147ea40(int);
};

// @baa 0x01482560
undefined4 * UObject::sub_01482560(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view *)(((char *)this + 4)))->sub_0147ea40(param_2[1]);
  return param_1;
}

struct C_01482580 {
    undefined4 * sub_01482580(undefined4 *);
    int sub_0147ea40(int);
};

// @baa 0x01482580
undefined4 * C_01482580::sub_01482580(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_01482580 *)(((char *)this + 4)))->sub_0147ea40(param_2[1]);
  param_1[0x11] = 0xffffffff;
  return param_1;
}

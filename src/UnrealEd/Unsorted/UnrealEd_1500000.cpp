// UnrealEd_1500000.cpp (part 1 of 2): 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_0117d2e0(void);
// @baa 0x015081b0
undefined4 UOptionsDupObject::sub_015081b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0117d2e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C {
    undefined4 * sub_015081d0();
};

int sub_0117f110(void);
extern undefined * g_022d3a40;
// @baa 0x015081d0
undefined4 * C::sub_015081d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0117f110();
  *param_1 = (undefined4)(&g_022d3a40);
  return param_1;
}

void sub_0117f220();
// @baa 0x015082b0
void sub_015082b0(void) { sub_0117f220(); }

int sub_01506ce0(void);
// @baa 0x01508430
int UTexture2D::sub_01508430(void)
{
    int param_1 = (int)this;

  sub_01506ce0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x015084c0
int UTexture2D::sub_015084c0(void)
{
    int param_1 = (int)this;

  sub_01506ce0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_01508450();
// @baa 0x015084e0
void sub_015084e0(void) { sub_01508450(); }

// @baa 0x015084f0
int UTexture2D::sub_015084f0(void)
{
    int param_1 = (int)this;

  sub_01506ce0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

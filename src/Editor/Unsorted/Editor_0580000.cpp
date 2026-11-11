// Editor_0580000.cpp: 11 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

void sub_005815b0();
// @baa 0x005841a0
void sub_005841a0(void) { sub_005815b0(); }

void sub_00582840();
// @baa 0x005866d0
void sub_005866d0(void) { sub_00582840(); }

void sub_005828d0();
// @baa 0x005866e0
void sub_005866e0(void) { sub_005828d0(); }

void sub_00582940();
// @baa 0x005866f0
void sub_005866f0(void) { sub_00582940(); }

void sub_005829b0();
// @baa 0x00586700
void sub_00586700(void) { sub_005829b0(); }

void sub_00582a20();
// @baa 0x00586710
void sub_00586710(void) { sub_00582a20(); }

struct C_view {
    int sub_00584a60(int, int, int, int, int, int);
};

extern undefined * g_01e7dbe0;
// @baa 0x00586720
undefined4 * UTexture2D::sub_00586720(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00584a60(param_2, param_3, param_4, param_5, param_6, param_7);
  *param_1 = (undefined4)(&g_01e7dbe0);
  return param_1;
}

int sub_0053dfa0(...);
int sub_005848b0(void);
// @baa 0x00586760
undefined4 UState::sub_00586760(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005848b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00578ff0(void);
// @baa 0x00586780
int UState::sub_00586780(void)
{
    int param_1 = (int)this;

  sub_00578ff0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C {
    int sub_005867c0();
};

int sub_00579100(void);
// @baa 0x005867c0
int C::sub_005867c0(void)
{
    int param_1 = (int)this;

  sub_00579100();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_005867e0 {
    int sub_005867e0();
};

int sub_005791b0(void);
// @baa 0x005867e0
int C_005867e0::sub_005867e0(void)
{
    int param_1 = (int)this;

  sub_005791b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

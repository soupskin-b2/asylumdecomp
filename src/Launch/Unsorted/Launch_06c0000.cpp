// Launch_06c0000.cpp: 14 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_006b9150(void);
// @baa 0x006c18e0
undefined4 UFogVolumeConeDensityComponent::sub_006c18e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006b9150();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view {
    int sub_006bcd60(int);
};

// @baa 0x006c1900
undefined4 UFogVolumeConeDensityComponent::sub_006c1900(void)
{
    int param_1 = (int)this;
  ((C_view *)((*(char **)((char *)this + 0x40))))->sub_006bcd60(param_1 + 4);
  return 0x44;
}

// @baa 0x006c1d00
int sub_006c1d00(void) { return 0; }

// @baa 0x006c1d30
void __stdcall sub_006c1d30(int a0) {  }

// @baa 0x006c1d40
int sub_006c1d40(void) { return 1; }

// @baa 0x006c1d50
int sub_006c1d50(void) { return 0; }

// @baa 0x006c1d60
void __stdcall sub_006c1d60(int a0) {  }

// @baa 0x006c1d70
void __stdcall sub_006c1d70(int a0) {  }

// @baa 0x006c1d80
int sub_006c1d80(void) { return 0; }

// @baa 0x006c1d90
int sub_006c1d90(void) { return 0; }

// @baa 0x006c1da0
void __stdcall sub_006c1da0(int a0, int a1) {  }

// @baa 0x006c1db0
void __stdcall sub_006c1db0(int a0) {  }

// @baa 0x006c1dc0
int sub_006c1dc0(void) { return 0; }

struct C {
    void sub_006c1dd0();
};

int sub_006be4d0(void);
extern undefined * g_01eceb88;
extern undefined * g_01ecebe8;
// @baa 0x006c1dd0
void C::sub_006c1dd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ecebe8);
  param_1[1] = (undefined4)(&g_01eceb88);
  sub_006be4d0();
  return;
}

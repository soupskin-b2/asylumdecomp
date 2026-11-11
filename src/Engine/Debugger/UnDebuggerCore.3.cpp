// UnDebuggerCore.cpp (part 3 of 3): 4 functions
// Placed here by: class 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053df70(...);
// @baa 0x00e1bee0
void UNetPendingLevel::sub_00e1bee0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0xc,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x00e1bf20
void UNetPendingLevel::sub_00e1bf20(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_view {
    int sub_00e1e0a0(int);
};

// @baa 0x00e1eba0
void UNetPendingLevel::sub_00e1eba0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 uVar1;
  param_1[6] = 0;
  if (param_1[7] != 0) {
    param_1[7] = 0;
    if (param_1[5] != 0) {
      uVar1 = sub_0053df70(param_1[5],0,8);
      param_1[5] = uVar1;
    }
  }
  ((C_view *)(((char *)this + 8)))->sub_00e1e0a0(0);
  *param_1 = 0;
  return;
}

int sub_0053dfa0(...);
int sub_00e1ddc0(void);
// @baa 0x00e20240
undefined4 UNetPendingLevel::sub_00e20240(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e1ddc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

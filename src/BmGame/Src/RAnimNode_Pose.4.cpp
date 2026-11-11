// RAnimNode_Pose.cpp (part 4 of 4): 6 functions
// Placed here by: neighbours 3, class 2, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    void sub_015a23b0(int);
};

int sub_0053df70(...);
// @baa 0x015a23b0
void C::sub_015a23b0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_015a23f0 {
    void sub_015a23f0(int);
};

// @baa 0x015a23f0
void C_015a23f0::sub_015a23f0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 5,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_015a2430 {
    void sub_015a2430(int);
};

// @baa 0x015a2430
void C_015a2430::sub_015a2430(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 6,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x015a7730
void URAnimNode_Pose::sub_015a7730(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x24,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x015a7770
void URAnimNode_Pose::sub_015a7770(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x24,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_015d43d0 {
    void sub_015d43d0();
};

// @baa 0x015d43d0
void C_015d43d0::sub_015d43d0(void)
{
    uint * param_1 = (uint *)this;

  uint uVar1;
  
  *param_1 = *param_1 | 1;
  param_1[4] = param_1[4] & 0xfffffffe;
  param_1[6] = 0;
  if (param_1[7] != 0) {
    param_1[7] = 0;
    if (param_1[5] != 0) {
      uVar1 = sub_0053df70(param_1[5],0,8);
      param_1[5] = uVar1;
    }
  }
  return;
}

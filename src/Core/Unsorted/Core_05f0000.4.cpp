// Core_05f0000.cpp (part 4 of 6): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    void sub_005fd180();
};

int sub_0053df70(...);
// @baa 0x005fd180
void C::sub_005fd180(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 << 5,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_005fd230 {
    void sub_005fd230();
};

// @baa 0x005fd230
void C_005fd230::sub_005fd230(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 0x54,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_005fd2e0 {
    void sub_005fd2e0();
};

// @baa 0x005fd2e0
void C_005fd2e0::sub_005fd2e0(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 0x5c,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x005fed30
void UPackageMap::sub_005fed30(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x19c,8);
      *param_1 = iVar1;
    }
  }
  return;
}

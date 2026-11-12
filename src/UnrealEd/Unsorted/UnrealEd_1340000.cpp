// UnrealEd_1340000.cpp: 10 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_01344c60();
    int sub_0133acb0(int, int, int, int, int);
};

// @baa 0x01344c60
void C::sub_01344c60(void)
{
    int param_1 = (int)this;
  if (0 < *(int *)(param_1 + 0x168)) {
    ((C *)((*(char **)((char *)this + 0x1a8))))->sub_0133acb0(param_1 + 0x164, 1, 0, 1, 0);
  }
  return;
}

struct C_013472a0 {
    void sub_013472a0(int);
};

int sub_0053df70(...);
// @baa 0x013472a0
void C_013472a0::sub_013472a0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_01348bf0 {
    undefined4 * sub_01348bf0(undefined4 *);
    int sub_00547da0(int);
};

// @baa 0x01348bf0
undefined4 * C_01348bf0::sub_01348bf0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_01348bf0 *)(((char *)this + 4)))->sub_00547da0((int)(param_2 + 1));
  return param_1;
}

struct C_01348e00 { void sub_013427f0(); void sub_01348e00(int); };

// @baa 0x01348e00
void C_01348e00::sub_01348e00(int) { sub_013427f0(); }

struct C_0134cf60 {
    void sub_0134cf60();
};

// @baa 0x0134cf60
void C_0134cf60::sub_0134cf60(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(int *)(param_1 + 0x16c) != 0) {
    *(undefined4 *)(param_1 + 0x16c) = 0;
    if (*(int *)(param_1 + 0x164) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x164),0,8);
      *(undefined4 *)(param_1 + 0x164) = uVar1;
    }
  }
  return;
}

extern TArray<int> g_026a1ca4;
struct C_0134e680 {
    int sub_0134e680();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x0134e680
int C_0134e680::sub_0134e680()
{
    return g_026a1ca4(Index);
}

struct C_0134e6e0 {
    int sub_0134e6e0();
};

// @baa 0x0134e6e0
int C_0134e6e0::sub_0134e6e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0134e700 {
    int sub_0134e700();
};

// @baa 0x0134e700
int C_0134e700::sub_0134e700(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0134e720 {
    int sub_0134e720(int);
    int sub_006f2660(int, int);
};

// @baa 0x0134e720
int C_0134e720::sub_0134e720(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0134e720 *)(this))->sub_006f2660((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct M_0134f730 { void sub_00efc2d0(); };

struct C_0134f730 { char pad[4]; M_0134f730 m; void sub_0134f730(); };

// @baa 0x0134f730
void C_0134f730::sub_0134f730() { m.sub_00efc2d0(); }

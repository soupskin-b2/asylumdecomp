// UnBulkData.cpp: 9 functions
// Placed here by: neighbours 5, callers 2, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053ec70(void);
extern undefined * g_01e72a60;
extern undefined4 g_01e73460;
// @baa 0x00545d80
undefined4 * UTexture2D::sub_00545d80(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72a60);
  sub_0053ec70();
  param_1[0x20] = param_2;
  param_1[0x1f] = 0;
  *param_1 = (undefined4)(&g_01e73460);
  param_1[5] = 1;
  param_1[9] = param_3;
  return param_1;
}

int sub_0053dfa0(...);
int sub_006311e0(...);
extern undefined4 g_01e78da8;
// @baa 0x00567a20
void UTexture2D::sub_00567a20(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x28) == 0) {
    sub_006311e0("LockStatus != LOCKSTATUS_Unlocked",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnBulkData.cpp"
                 ,0x1d3,&g_01e78da8);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((*(int *)(param_1 + 0x2c) != 0) || ((*(byte *)(param_1 + 4) & 8) != 0)) {
    if (*(int *)(param_1 + 0x30) != 0) {
      sub_0053dfa0(*(undefined4 *)(param_1 + 0x24));
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

// @baa 0x00567a80
void UTexture2D::sub_00567a80(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | param_2;
  return;
}

// @baa 0x00567a90
int UTexture2D::sub_00567a90(void) { return *(int*)((char*)this + 4); }

// @baa 0x00567aa0
void UTexture2D::sub_00567aa0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & ~param_2;
  return;
}

// @baa 0x00567ab0
int UTexture2D::sub_00567ab0(void) { return *(int*)((char*)this + 48); }

// @baa 0x00567ac0
int __stdcall sub_00567ac0(int a0) { return 0; }

extern undefined * g_01e7d168;
// @baa 0x0056a670
undefined4 * UTexture2D::sub_0056a670(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72a60);
  sub_0053ec70();
  param_1[0x20] = param_2;
  param_1[0x1f] = 0;
  *param_1 = (undefined4)(&g_01e7d168);
  param_1[4] = 1;
  param_1[9] = param_3;
  return param_1;
}

struct C_view {
    int sub_00576d50();
};

extern undefined4 g_01e79508;
extern undefined4 g_01e79564;
extern undefined4 g_01e795d8;
// @baa 0x005799f0
void UTexture2D::sub_005799f0(int param_2, int param_3)
{
    int param_1 = (int)this;
  if (param_2 == 0) {
    sub_006311e0(&g_01e79564,
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnBulkData.cpp"
                 ,0x2f3,&g_01e79508);
  }
  if (param_2 != *(int *)(param_1 + 0x2c)) {
    sub_006311e0("Ar == AttachedAr",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnBulkData.cpp"
                 ,0x2f4,&g_01e795d8);
  }
  if (param_3 != 0) {
    ((C_view *)(this))->sub_00576d50();
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

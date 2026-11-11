// FMallocProxySimpleTag.cpp: 2 functions
// Placed here by: callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C_view {
    int sub_0054e020(int, int);
};

// @baa 0x00555530
int UPackageMap::sub_00555530(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view *)(this))->sub_0054e020((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x1c, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_view_0055b6e0 {
    int sub_00555530(int);
    int sub_005580b0(int);
};

int sub_006311e0(...);
extern undefined4 g_01e7008c;
extern undefined4 g_0267608c;
// @baa 0x0055b6e0
undefined4 UTexture2D::sub_0055b6e0(int param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  int iVar2;
  uVar1 = 0;
  if (((g_0267608c == 0) && (*(int *)(param_1 + 0x4c) == 0)) && (param_2 != 0)) {
    *(undefined4 *)(param_1 + 0x4c) = 1;
    iVar2 = ((C_view_0055b6e0 *)(((char *)this + 8)))->sub_00555530(param_2);
    if (iVar2 == 0) {
      sub_006311e0("AllocPtr",
                   "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\FMallocProxySimpleTag.cpp"
                   ,0x36,&g_01e7008c);
    }
    uVar1 = *(undefined4 *)(iVar2 + 4);
    ((C_view_0055b6e0 *)(((char *)this + 8)))->sub_005580b0(param_2);
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return uVar1;
}

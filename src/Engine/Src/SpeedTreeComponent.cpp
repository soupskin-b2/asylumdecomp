// SpeedTreeComponent.cpp: 4 functions
// Placed here by: neighbours 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    int sub_00bce4e0();
};

// @baa 0x00bce4e0
int C::sub_00bce4e0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4 + 0x1c0;
}

// @baa 0x00bd1b90
IMPLEMENT_CLASS_AT(USpeedTreeComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\SpeedTreeComponent.cpp", 15);

// @baa 0x00bab9f0

int __stdcall sub_0058c430(int);
int sub_00bd4910(...);
// @baa 0x00bd50a0
int USpeedTreeComponent::vf_10c(undefined4 param_2)
{
    int param_1 = (int)this;
  int iVar1;
  int iVar2;
  iVar1 = sub_0058c430(param_2);
  iVar2 = sub_00bd4910(param_2);
  if ((iVar1 != 0) &&
     ((((((*(int *)(param_1 + 0x1d0) != 0 || (*(int *)(param_1 + 0x1d8) != 0)) ||
         (*(int *)(param_1 + 0x1e0) != 0)) ||
        ((*(int *)(param_1 + 0x1dc) != 0 || (*(int *)(param_1 + 0x1e4) != 0)))) ||
       ((*(int *)(iVar2 + 0x1d0) != 0 ||
        ((*(int *)(iVar2 + 0x1d8) != 0 || (*(int *)(iVar2 + 0x1e0) != 0)))))) ||
      ((*(int *)(iVar2 + 0x1dc) != 0 || (*(int *)(iVar2 + 0x1e4) != 0)))))) {
    return 0;
  }
  return iVar1;
}

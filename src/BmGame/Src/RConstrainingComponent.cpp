// RConstrainingComponent.cpp (part 1 of 2): 11 functions
// Placed here by: class 8, file 2, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x016d0c30
IMPLEMENT_CLASS_AT(URConstrainingComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RConstrainingComponent.cpp", 9);

// @baa 0x016d0d40
int URConstrainingComponent::vf_000(void) { return 1; }

// @baa 0x016d0d50
bool URConstrainingComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016d3580
IMPLEMENT_CLASS_AT(URB_ActualDistanceConstraintSetup, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RConstrainingComponent.cpp", 10);

// @baa 0x016d4780
// @baa 0x016d4840
undefined4 URConstrainingComponent::sub_016d4840(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  uVar1 = 1;
  if (((*(byte *)(param_1 + 0x68) & 1) != 0) ||
     (*(int *)(param_1 + 0x54) != *(int *)(param_1 + 0x60))) {
    uVar1 = 0;
  }
  return uVar1;
}

int sub_0053df70(...);
// @baa 0x016d9e80
void URConstrainingComponent::sub_016d9e80(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (*(int *)(param_1 + 0x58) != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(int *)(param_1 + 0x50) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x50),0,8);
      *(undefined4 *)(param_1 + 0x50) = uVar1;
    }
  }
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 1;
  return;
}

// @baa 0x016db500
// @baa 0x016db580
// @baa 0x016dc1c0
// @baa 0x016dc4f0

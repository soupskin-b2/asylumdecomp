// LightComponent.cpp (part 4 of 5): 6 functions
// Placed here by: class 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x006ace00
int ULightComponent::vf_000(void) { return 1; }

// @baa 0x006ace10
bool ULightComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006ad0a0
undefined4 ULightComponent::sub_006ad0a0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if ((((iVar1 == 0) || ((*(uint *)(iVar1 + 0x30) & 8) != 0)) ||
      (((*(uint *)(iVar1 + 0x30) & 0x20) != 0 && ((*(uint *)(iVar1 + 0x34) & 0x200000) == 0)))) &&
     ((*(byte *)(param_1 + 0xec) & 0x80) == 0)) {
    return 1;
  }
  return 0;
}

// @baa 0x006ad0d0
undefined4 ULightComponent::sub_006ad0d0(void)
{
    int param_1 = (int)this;

  if ((((*(int *)(param_1 + 0x40) == 0) || ((*(byte *)(*(int *)(param_1 + 0x40) + 0x30) & 8) != 0))
      && (*(int *)(param_1 + 0xe0) == 0)) &&
     (((*(byte *)(param_1 + 0xec) & 0x80) == 0 && (*(int *)(param_1 + 0xf0) == 0)))) {
    return 1;
  }
  return 0;
}

int sub_00765d00(void);
// @baa 0x006ad1f0
void ULightComponent::sub_006ad1f0(uint param_2)
{
    int param_1 = (int)this;

  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xec);
  if ((uVar1 & 1) != param_2) {
    *(uint *)(param_1 + 0xec) = (uVar1 ^ param_2) & 1 ^ uVar1;
    sub_00765d00();
  }
  return;
}

struct C_view {
    int sub_005dfd20(int);
};

int sub_006d3cd0(...);
// @baa 0x006d5570
void ULightComponent::Serialize(FArchive& Ar)
{
    undefined4 param_2 = (undefined4)&Ar;
    int param_1 = (int)this;
  ((C_view *)(this))->sub_005dfd20(param_2);
  sub_006d3cd0(param_2,param_1 + 0x11c);
  sub_006d3cd0(param_2,param_1 + 0x128);
  return;
}

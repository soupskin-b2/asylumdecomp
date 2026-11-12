// LightComponent.cpp (part 4 of 5): 9 functions
// Placed here by: class 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

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

// @baa 0x006ad1d0
void ULightComponent::vf_09c() {
    vf_16c();
    bHasLightEverBeenBuiltIntoLightMap = 0;
}

// @baa 0x006ad1b0
void ULightComponent::vf_05c()
{
	vf_16c();
	bHasLightEverBeenBuiltIntoLightMap = 0;
}

/* UObject::GetOutermost (005d7350); Classes.h doesn't declare it on UObject. */
struct UObject_ : public UObject
{
    UObject* sub_005d7350();
};

/* ConvertVolumesToConvexVolumes (LightComponent.cpp); the kit types the convex arrays with a stand-in element. */
void sub_0079ae50(const TArray<ABrush*>& Volumes, TArray<FNativeElem_00693980>& ConvexVolumes);
struct ULightComponent_ : public ULightComponent
{
    void sub_006bab80();
};

// @baa 0x006bab80
/* UpdateVolumes: drop volume references from other levels, then rebuild the convex volumes. */
void ULightComponent_::sub_006bab80()
{
    for (INT VolumeIndex = 0; VolumeIndex < ExclusionVolumes.Num(); VolumeIndex++)
    {
        ABrush*& Volume = ExclusionVolumes(VolumeIndex);
        if (Volume && ((UObject_*)Volume)->sub_005d7350() != ((UObject_*)this)->sub_005d7350())
        {
            Volume = NULL;
        }
    }
    for (INT VolumeIndex = 0; VolumeIndex < InclusionVolumes.Num(); VolumeIndex++)
    {
        ABrush*& Volume = InclusionVolumes(VolumeIndex);
        if (Volume && ((UObject_*)Volume)->sub_005d7350() != ((UObject_*)this)->sub_005d7350())
        {
            Volume = NULL;
        }
    }

    sub_0079ae50(ExclusionVolumes, ExclusionConvexVolumes);
    sub_0079ae50(InclusionVolumes, InclusionConvexVolumes);
}

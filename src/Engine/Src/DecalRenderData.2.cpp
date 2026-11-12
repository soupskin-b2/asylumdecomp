// DecalRenderData.cpp (part 2 of 2): 6 functions
// Placed here by: neighbours 1, callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0053dfa0(...);
int sub_00656490(void);
// @baa 0x006583d0
undefined4 ULensFlare::sub_006583d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656490();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006a4380
IMPLEMENT_CLASS_AT(UDecalMaterial, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\DecalRenderData.cpp", 11);

// @baa 0x006a43a0

// @baa 0x0064ea50

// @baa 0x0064eb60
int UDecalMaterial::vf_000(void) { return 1; }

// @baa 0x0064eb70
bool UDecalMaterial::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

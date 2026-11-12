// Engine_0710000.cpp (part 5 of 7): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0053dfa0(...);
int sub_00581450(void);
// @baa 0x0071d940
undefined4 UTexture2D::sub_0071d940(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00581450();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// 0x00718dd0 : sets this (X, Y, Z) from another 2-value struct, Z fixed to -1
struct FVector2_ {
    INT X;
    INT Y;
};

struct F00718DD0 {
    INT X;
    INT Y;
    INT Z;

    F00718DD0* sub_00718dd0(FVector2_ const* Src); // 0x00718dd0
};

// @baa 0x00718dd0
F00718DD0* F00718DD0::sub_00718dd0(FVector2_ const* Src)
{
    X = Src->X;
    Y = Src->Y;
    Z = -1;
    return this;
}

// @baa 0x00717c40
/* Slot 0x130 (unnamed in the kit): marks the texture sRGB and resets the unpack range to 0..1. */
void UTexture2D::vf_130()
{
	SRGB = TRUE;
	UnpackMin[3] = 0.f;
	UnpackMin[2] = 0.f;
	UnpackMin[1] = 0.f;
	UnpackMin[0] = 0.f;
	UnpackMax[3] = 1.f;
	UnpackMax[2] = 1.f;
	UnpackMax[1] = 1.f;
	UnpackMax[0] = 1.f;
}

// @baa 0x00716610
/* SH lights have no position; this is the dummy the renderer expects. */
FVector4 USphericalHarmonicLightComponent::GetPosition() const
{
	return FVector4(0, 0, 1, 0);
}

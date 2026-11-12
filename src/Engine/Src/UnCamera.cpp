// UnCamera.cpp: 25 functions
// Placed here by: file 7, callers 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00789b40
IMPLEMENT_CLASS_AT(UCameraAnim, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCamera.cpp", 15);

// @baa 0x00789b60
IMPLEMENT_CLASS_AT(UCameraAnimInst, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCamera.cpp", 16);

// @baa 0x00789b80
IMPLEMENT_CLASS_AT(UCameraModifier, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCamera.cpp", 18);

// @baa 0x0078a1c0
// @baa 0x0078a280
// @baa 0x0078a340
// @baa 0x00799030
IMPLEMENT_CLASS_AT(ACamera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCamera.cpp", 11);

// @baa 0x007990f0
IMPLEMENT_CLASS_AT(ACameraActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCamera.cpp", 12);

// @baa 0x007991b0
IMPLEMENT_CLASS_AT(ADynamicCameraActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCamera.cpp", 13);

// @baa 0x00799270
IMPLEMENT_CLASS_AT(AAnimatedCamera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCamera.cpp", 14);

// @baa 0x007876e0

// @baa 0x007877f0
int ACamera::vf_000(void) { return 1; }

// @baa 0x00787800
bool ACamera::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00787840

// @baa 0x007879c0

// @baa 0x00787ad0
int UCameraAnim::vf_000(void) { return 1; }

// @baa 0x00787ae0
bool UCameraAnim::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00787b20

// @baa 0x00787c30
int UCameraAnimInst::vf_000(void) { return 1; }

// @baa 0x00787c40
bool UCameraAnimInst::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00787ed0
bool ACamera::vf_1b8(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x1a8) != 0;
}

// @baa 0x0079b0e0

// @baa 0x0079b1f0
bool ADynamicCameraActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0079b230

// @baa 0x00788120
void UCameraAnimInst::ApplyTransientScaling(FLOAT Scalar)
{
    TransientScaleModifier *= Scalar;
}

// UnrealEd_07a0000.cpp: 8 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x007a21d0
int UDistributionFloatConstant::vf_000(void) { return 1; }

// @baa 0x007a21e0
bool UDistributionFloatConstant::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007a2220
IMPLEMENT_CLASS_AT(UDistributionFloatConstantCurve, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDistributions.cpp", 9);

// @baa 0x007a2330
int UDistributionFloatConstantCurve::vf_000(void) { return 1; }

// @baa 0x007a2340
bool UDistributionFloatConstantCurve::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007a2380
IMPLEMENT_CLASS_AT(UDistributionFloatUniform, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDistributions.cpp", 10);

// @baa 0x007a2490
int UDistributionFloatUniform::vf_000(void) { return 1; }

// @baa 0x007a24a0
bool UDistributionFloatUniform::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

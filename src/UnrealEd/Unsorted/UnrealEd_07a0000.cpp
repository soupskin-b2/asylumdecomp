// UnrealEd_07a0000.cpp: 8 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x007a21d0
UBOOL UDistributionFloatConstant::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x007a21e0
UBOOL UDistributionFloatConstant::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007a2220
IMPLEMENT_CLASS_AT(UDistributionFloatConstantCurve, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDistributions.cpp", 9);

// @baa 0x007a2330
UBOOL UDistributionFloatConstantCurve::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x007a2340
UBOOL UDistributionFloatConstantCurve::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007a2380
IMPLEMENT_CLASS_AT(UDistributionFloatUniform, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDistributions.cpp", 10);

// @baa 0x007a2490
UBOOL UDistributionFloatUniform::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x007a24a0
UBOOL UDistributionFloatUniform::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

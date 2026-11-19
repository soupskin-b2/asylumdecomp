// CommonGameEffectClasses.cpp (part 1 of 2): 17 functions
// Placed here by: callers 4, file 4, neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0153e880
IMPLEMENT_CLASS_AT(URDistributionVectorParticleArrayParameter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameEffectClasses.cpp", 4);

// @baa 0x0153e8b0
// @baa 0x01546190
IMPLEMENT_CLASS_AT(AREffectVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameEffectClasses.cpp", 5);

// @baa 0x015461f0
IMPLEMENT_CLASS_AT(ARRainVolumeBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameEffectClasses.cpp", 6);

// @baa 0x01546260
// @baa 0x01546290
IMPLEMENT_CLASS_AT(ARRotateActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameEffectClasses.cpp", 7);

// @baa 0x015462c0
// @baa 0x01546380
// @baa 0x01546930
// @baa 0x01546960

// @baa 0x0153adf0

// @baa 0x0153af00
UBOOL AREffectVolume::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0153af10
UBOOL AREffectVolume::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0153af50
UBOOL ARRainVolumeBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0153af60

// @baa 0x01546a20

// @baa 0x01546b30
UBOOL ARRainVolumeBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// RCapeComponent.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"


// @baa 0x016ae9f0
UPhysicalMaterial* URCapeComponent::sub_016ae9f0()
{
    UPhysicalMaterial* Material = GEngine->DefaultPhysMaterial;
    if (PhysMaterialOverride != NULL)
        Material = PhysMaterialOverride;
    return Material;
}

// @baa 0x016b8c70
/* The new factory's class hides the Object category in the editor. */
void URCapeConfigFactoryNew::StaticConstructor()
{
	new((FNameArray&)GetClass()->HideCategories) FNameText(TEXT("Object"));
}

// @baa 0x016b8ca0
/* The new factory's class hides the Object category in the editor. */
void URCapeStateConfigFactoryNew::StaticConstructor()
{
	new((FNameArray&)GetClass()->HideCategories) FNameText(TEXT("Object"));
}

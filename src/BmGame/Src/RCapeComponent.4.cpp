// RCapeComponent.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

struct URCapeComponent_ : public URCapeComponent {
    UPhysicalMaterial* sub_016ae9f0();
};

// @baa 0x016ae9f0
UPhysicalMaterial* URCapeComponent_::sub_016ae9f0()
{
    UPhysicalMaterial* Material = GEngine->DefaultPhysMaterial;
    if (PhysMaterialOverride != NULL)
        Material = PhysMaterialOverride;
    return Material;
}

// @baa 0x016b8c70
/* The new factory's class hides the Object category in the editor. UClass::HideCategories is the
 * kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void URCapeConfigFactoryNew::StaticConstructor()
{
	new((FNameArray&)GetClass()->Native_f0) FNameText(TEXT("Object"));
}

// @baa 0x016b8ca0
/* The new factory's class hides the Object category in the editor. UClass::HideCategories is the
 * kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void URCapeStateConfigFactoryNew::StaticConstructor()
{
	new((FNameArray&)GetClass()->Native_f0) FNameText(TEXT("Object"));
}

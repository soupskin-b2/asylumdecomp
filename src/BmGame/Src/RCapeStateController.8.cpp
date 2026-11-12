// RCapeStateController.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

// @baa 0x016d5e60
/* The new factory's class hides the Object category in the editor. UClass::HideCategories is the
 * kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void URCapeCollisionConfigFactoryNew::StaticConstructor()
{
	new((FNameArray&)GetClass()->Native_f0) FNameText(TEXT("Object"));
}

// @baa 0x016d5e90
/* The new factory's class hides the Object category in the editor. UClass::HideCategories is the
 * kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void URCapeStateBoneConfigFactoryNew::StaticConstructor()
{
	new((FNameArray&)GetClass()->Native_f0) FNameText(TEXT("Object"));
}

// @baa 0x016d5ec0
/* The new factory's class hides the Object category in the editor. UClass::HideCategories is the
 * kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void URCapeCollisionShapeConfigFactoryNew::StaticConstructor()
{
	new((FNameArray&)GetClass()->Native_f0) FNameText(TEXT("Object"));
}

// RCapeStateController.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

// @baa 0x016d5e60
/* The new factory's class hides the Object category in the editor. */
void URCapeCollisionConfigFactoryNew::StaticConstructor()
{
	new((FNameArray&)GetClass()->HideCategories) FNameText(TEXT("Object"));
}

// @baa 0x016d5e90
/* The new factory's class hides the Object category in the editor. */
void URCapeStateBoneConfigFactoryNew::StaticConstructor()
{
	new((FNameArray&)GetClass()->HideCategories) FNameText(TEXT("Object"));
}

// @baa 0x016d5ec0
/* The new factory's class hides the Object category in the editor. */
void URCapeCollisionShapeConfigFactoryNew::StaticConstructor()
{
	new((FNameArray&)GetClass()->HideCategories) FNameText(TEXT("Object"));
}

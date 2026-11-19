// RIdleConfig.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

// @baa 0x0161d6f0
/* The factory's class hides the Object category in the editor. */
void URSimpleIdleConfigFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FNameText(TEXT("Object"));
}

// @baa 0x0161d750
/* The factory's class hides the Object category in the editor. */
void URIdleWithDeathConfigFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FNameText(TEXT("Object"));
}

// @baa 0x0161d780
/* The factory's class hides the Object category in the editor. */
void URPairedIdleConfigFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FNameText(TEXT("Object"));
}

// RSmashableProp.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

// @baa 0x01675020
/* The new factory's class hides the Object category in the editor. */
void URSmashablePropConfigFactoryNew::StaticConstructor()
{
	new((FNameArray&)GetClass()->HideCategories) FNameText(TEXT("Object"));
}

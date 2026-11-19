// RForceField.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

// @baa 0x017221e0
/* The factory's class hides the Object category in the editor. */
void URForceFieldConfigFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FNameText(TEXT("Object"));
}

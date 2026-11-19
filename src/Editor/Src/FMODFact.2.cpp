// FMODFact.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

// @baa 0x01104cd0
/* The factory's class hides the Object category in the editor. */
void URFMODSoundFactory::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FNameText(TEXT("Object"));
}

// @baa 0x01104d90
/* The factory's class hides the Object category in the editor. */
void URReimportFMODSoundFactory::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FNameText(TEXT("Object"));
}

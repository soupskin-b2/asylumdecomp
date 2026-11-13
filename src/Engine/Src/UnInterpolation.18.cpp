// UnInterpolation.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x00cf9fc0
/* Count the characters and remember the tallest one (one entry per page; a plain font has a single page). */
void UFont::CacheCharacterCountAndMaxCharHeight()
{
    NumCharacters = Characters.Num();
    MaxCharHeight.Reset();

    INT MaxCharHeightForThisPage = 1;
    for (INT CharIndex = 0; CharIndex < NumCharacters; CharIndex++)
    {
        MaxCharHeightForThisPage = Max(MaxCharHeightForThisPage, Characters(CharIndex).VSize);
    }
    MaxCharHeight.AddItem(MaxCharHeightForThisPage);
}

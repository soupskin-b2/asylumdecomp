// Texture2D.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"
#include "ue3/Native.h"

// @baa 0x0071d2d0
UBOOL UTexture2D::IsFullyStreamedIn()
{
    UBOOL bIsFullyStreamedIn = TRUE;
    if (bIsStreamable)
    {
        INT MaxResidentMips = Max(1, Min(Mips.ArrayNum - CachedCombinedLODBias, GMaxTextureMipCount));
        bIsFullyStreamedIn = ResidentMips >= MaxResidentMips;
    }
    return bIsFullyStreamedIn;
}

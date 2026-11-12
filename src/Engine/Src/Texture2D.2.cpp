// Texture2D.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

/* Kit gap: UnTex.h's GMaxTextureMipCount (the RHI's mip count limit). */
extern INT GMaxTextureMipCount;
/* Unnamed in the kit: UE3's UTexture2D::IsFullyStreamedIn() (Mips.Num() is the mirror's ArrayNum, GetCachedLODBias() is
 * CachedCombinedLODBias). */
struct UTexture2D_ : public UTexture2D
{
    UBOOL sub_0071d2d0();
};

// @baa 0x0071d2d0
UBOOL UTexture2D_::sub_0071d2d0()
{
    UBOOL bIsFullyStreamedIn = TRUE;
    if (bIsStreamable)
    {
        INT MaxResidentMips = Max(1, Min(Mips.ArrayNum - CachedCombinedLODBias, GMaxTextureMipCount));
        bIsFullyStreamedIn = ResidentMips >= MaxResidentMips;
    }
    return bIsFullyStreamedIn;
}

// Texture2DComposite.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/AppMath.h"

/* Kit gap: UnTex.h's GMaxTextureMipCount (the RHI's mip count limit). */
extern INT GMaxTextureMipCount;
/* UE3's UTexture2D::IsFullyStreamedIn() (0x0071d2d0), inlined here. */
struct UTexture2D_ : public UTexture2D
{
    FORCEINLINE UBOOL IsFullyStreamedIn()
    {
        UBOOL bIsFullyStreamedIn = TRUE;
        if (bIsStreamable)
        {
            INT MaxResidentMips = Max(1, Min(Mips.ArrayNum - CachedCombinedLODBias, GMaxTextureMipCount));
            bIsFullyStreamedIn = ResidentMips >= MaxResidentMips;
        }
        return bIsFullyStreamedIn;
    }
};

// @baa 0x00722360
/* UE3's UTexture2DComposite::SourceTexturesFullyStreamedIn(): every source texture, once its streaming status is
 * updated (UTexture2D slot 0x124, UE3 UpdateStreamingStatus()), has all its mips resident. */
UBOOL UTexture2DComposite::SourceTexturesFullyStreamedIn()
{
    for (INT SrcIdx = 0; SrcIdx < SourceRegions.Num(); SrcIdx++)
    {
        if (SourceRegions(SrcIdx).Texture2D)
        {
            SourceRegions(SrcIdx).Texture2D->vf_124();
            if (!((UTexture2D_*)SourceRegions(SrcIdx).Texture2D)->IsFullyStreamedIn())
            {
                return FALSE;
            }
        }
    }
    return TRUE;
}

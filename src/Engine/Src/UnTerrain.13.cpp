// UnTerrain.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

struct ATerrain_ : public ATerrain
{
    void ClampVertex(INT& X, INT& Y) const; /* 0x00986e90 */
};

// @baa 0x00986e90
/* UE3's ATerrain::ClampVertex: clamp vertex coordinates to the terrain. */
void ATerrain_::ClampVertex(INT& X, INT& Y) const
{
    X = Clamp(X, 0, NumVerticesX - 1);
    Y = Clamp(Y, 0, NumVerticesY - 1);
}

/* Kit gaps: FPixelFormatInfo / GPixelFormats (0x025da760, UnRHI) aren't declared (as in work/009221b0.cpp). */
struct FPixelFormatInfo
{
    const TCHAR* Name;
    INT BlockSizeX;
    INT BlockSizeY;
    INT BlockSizeZ;
    INT BlockBytes;
    INT NumComponents;
    DWORD PlatformFormat;
    DWORD Flags;
    UBOOL Supported;
};

extern FPixelFormatInfo g_025da760[];
#define GPixelFormats g_025da760
#define PF_DXT1 5
#define TERRAIN_PATCH_EXPAND_SCALAR 2
/* The project's existing binding for the component's terrain lookup (0x009a54b0, a varargs placeholder; it
 * takes the component's outer and returns the ATerrain). */
INT sub_009a54b0(...);
// @baa 0x009a6780
/* UTerrainComponent slot 0x158 (kit vf_158(UINT*, UINT*); UE3's GetLightMapResolution(INT& Width, INT& Height)):
 * the light map size, the section plus a DXT-block-sized border per side at the terrain's lighting resolution,
 * aligned to DXT1 blocks. */
void UTerrainComponent::vf_158(UINT* Width, UINT* Height)
{
    ATerrain* Terrain = (ATerrain*)sub_009a54b0(Outer);
    if (Terrain)
    {
        const INT Resolution = Terrain->StaticLightingResolution;
        const INT BlockSize = GPixelFormats[PF_DXT1].BlockSizeX;
        INT PatchExpandCountX = BlockSize / Resolution;
        INT PatchExpandCountY = GPixelFormats[PF_DXT1].BlockSizeY / Resolution;
        if (PatchExpandCountX <= 1) PatchExpandCountX = 1;
        if (PatchExpandCountY <= 1) PatchExpandCountY = 1;
        *Width = (TrueSectionSizeX + TERRAIN_PATCH_EXPAND_SCALAR * PatchExpandCountX) * Resolution + 1;
        *Height = (TrueSectionSizeY + TERRAIN_PATCH_EXPAND_SCALAR * PatchExpandCountY) * Resolution + 1;
        const INT AlignMask = BlockSize - 1;
        *Width = (*Width + AlignMask) & ~AlignMask;
        *Height = (*Height + AlignMask) & ~AlignMask;
    }
    else
    {
        *Width = 0;
        *Height = 0;
    }
}

struct ATerrain__00986dc0 : public ATerrain
{
	void sub_00986dc0();
};

// @baa 0x00986dc0
/* Clamps the terrain's patch counts to 1..2048, rounds them up to whole tessellation blocks, and derives the
 * vertex and section counts from them. */
void ATerrain__00986dc0::sub_00986dc0()
{
	NumPatchesX = Clamp(NumPatchesX, 1, 2048);
	NumPatchesY = Clamp(NumPatchesY, 1, 2048);
	if (NumPatchesX % MaxTesselationLevel > 0)
	{
		NumPatchesX += MaxTesselationLevel - (NumPatchesX % MaxTesselationLevel);
	}
	if (NumPatchesY % MaxTesselationLevel > 0)
	{
		NumPatchesY += MaxTesselationLevel - (NumPatchesY % MaxTesselationLevel);
	}
	NumVerticesX = NumPatchesX + 1;
	NumVerticesY = NumPatchesY + 1;
	NumSectionsX = ((NumPatchesX / MaxTesselationLevel) + MaxComponentSize - 1) / MaxComponentSize;
	NumSectionsY = ((NumPatchesY / MaxTesselationLevel) + MaxComponentSize - 1) / MaxComponentSize;
}

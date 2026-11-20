// UnTerrain.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Implement.h"

/* The exe calls this TArray<FTerrainWeightedMaterial>::Empty out of line (0x0098dbd0). */
template<> void TArray<FTerrainWeightedMaterial>::Empty(INT Slack);

// @baa 0x00990b90
/* ATerrain slot 0x2c (UE3's FinishDestroy): drop the weight maps and weighted materials, free the resource release
 * fence, then finish destroying the actor. */
void ATerrain::FinishDestroy()
{
    ClearCachedTerrainMaterials();
    WeightedTextureMaps.Empty();
    WeightedMaterials.Empty();
    if (ReleaseResourcesFence)
    {
        delete ReleaseResourcesFence;
        ReleaseResourcesFence = NULL;
    }
    Super::FinishDestroy();
}

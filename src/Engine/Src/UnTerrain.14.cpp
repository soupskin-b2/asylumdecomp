// UnTerrain.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Implement.h"

/* Unnamed in the kit: ATerrain's 0x00990ad0 (takes one flag, called with FALSE here) and the out-of-line
 * TArray<FTerrainWeightedMaterial>::Empty (0x0098dbd0); bound as C:: placeholders. */
struct C
{
    void sub_00990ad0(INT Flag);
    void sub_0098dbd0(INT Slack);
};

// @baa 0x00990b90
/* ATerrain slot 0x2c (kit vf_02c; UE3's FinishDestroy): drop the weight maps and weighted materials, free the
 * resource release fence, then finish destroying the actor. */
void ATerrain::vf_02c()
{
    ((C*)this)->sub_00990ad0(0);
    WeightedTextureMaps.Empty();
    ((C*)&WeightedMaterials)->sub_0098dbd0(0);
    if (ReleaseResourcesFence.Dummy)
    {
        delete (FRenderCommandFence_Mirror*)ReleaseResourcesFence.Dummy;
        ReleaseResourcesFence.Dummy = 0;
    }
    Super::vf_02c();
}

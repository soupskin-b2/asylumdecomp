// UnSkeletalRenderCPUSkin.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/SkeletalRender.h"

// @baa 0x0096f080
/* a decal was detached: drop its vertex factories from every LOD */
void FSkeletalMeshObjectCPUSkin::RemoveDecalInteraction_RenderingThread(UDecalComponent* DecalComponent)
{
    for (INT LODIndex = 0; LODIndex < LODs.Num(); LODIndex++)
    {
        LODs(LODIndex).RemoveDecalVertexFactory(DecalComponent);
    }
}

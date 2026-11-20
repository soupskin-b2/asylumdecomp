// UnSkeletalRenderCPUSkin.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/SkeletalRender.h"

// @baa 0x009531d0
/* the index of the decal's entry in DecalVertexFactories, INDEX_NONE if it has none */
INT FSkeletalMeshObjectCPUSkin::FSkeletalMeshObjectLOD::FindDecalVertexFactoryIndex(const UDecalComponent* Decal)
{
    for (INT DecalIndex = 0; DecalIndex < DecalVertexFactories.Num(); DecalIndex++)
    {
        if (DecalVertexFactories(DecalIndex).Decal == Decal)
        {
            return DecalIndex;
        }
    }
    return INDEX_NONE;
}

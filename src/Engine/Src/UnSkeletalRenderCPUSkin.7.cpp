// UnSkeletalRenderCPUSkin.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/SkeletalRender.h"

// @baa 0x0095fb20
/* the decal's vertex factory, NULL if the decal has none on this LOD */
FLocalDecalVertexFactory* FSkeletalMeshObjectCPUSkin::FSkeletalMeshObjectLOD::GetDecalVertexFactory(const UDecalComponent* Decal)
{
    const INT DecalIndex = FindDecalVertexFactoryIndex(Decal);
    if (DecalVertexFactories.IsValidIndex(DecalIndex))
    {
        return &DecalVertexFactories(DecalIndex).DecalVertexFactory;
    }
    return NULL;
}

#line 120 "candidate.cpp"

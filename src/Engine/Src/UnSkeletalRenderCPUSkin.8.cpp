// UnSkeletalRenderCPUSkin.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/SkeletalRender.h"

// @baa 0x00968430
/* release and forget the vertex factory of a decal that is being detached */
void FSkeletalMeshObjectCPUSkin::FSkeletalMeshObjectLOD::RemoveDecalVertexFactory(const UDecalComponent* Decal)
{
    const INT DecalIndex = FindDecalVertexFactoryIndex(Decal);
    if (DecalVertexFactories.IsValidIndex(DecalIndex))
    {
        if (bResourcesInitialized)
        {
            FDecalVertexFactoryInfo& DecalInfo = DecalVertexFactories(DecalIndex);
            DecalInfo.DecalVertexFactory.ReleaseResource();
        }
        DecalVertexFactories.Remove(DecalIndex);
    }
}

#line 145 "candidate.cpp"

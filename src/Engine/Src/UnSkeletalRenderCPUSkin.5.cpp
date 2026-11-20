// UnSkeletalRenderCPUSkin.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/SkeletalRender.h"

// @baa 0x009683a0
/* the vertex factory a decal on this LOD is drawn with, NULL if it has none */
FDecalVertexFactoryBase* FSkeletalMeshObjectCPUSkin::GetDecalVertexFactory(INT LODIndex, INT ChunkIdx, const FDecalInteraction* Decal)
{
#line 800 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalRenderCPUSkin.cpp"
    check(bDecalFactoriesEnabled);
    return LODs(LODIndex).GetDecalVertexFactory(Decal->Decal);
}

#line 99 "candidate.cpp"

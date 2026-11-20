// UnSkeletalRenderCPUSkin.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/SkeletalRender.h"

// @baa 0x00952e90
/* debug check that the LOD exists */
const FVertexFactory* FSkeletalMeshObjectCPUSkin::GetVertexFactory(INT LODIndex, INT ChunkIdx) const
{
#line 791 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalRenderCPUSkin.cpp"
    check(LODs.IsValidIndex(LODIndex));
    return &LODs(LODIndex).VertexFactory;
}

#line 92 "candidate.cpp"

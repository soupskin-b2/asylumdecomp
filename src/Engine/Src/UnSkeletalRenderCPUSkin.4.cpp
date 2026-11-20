// UnSkeletalRenderCPUSkin.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/SkeletalRender.h"

// @baa 0x00952f00
/* the LOD's vertex factory for shadow volumes */
const FLocalShadowVertexFactory& FSkeletalMeshObjectCPUSkin::GetShadowVertexFactory(INT LODIndex) const
{
#line 812 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalRenderCPUSkin.cpp"
    check(LODs.IsValidIndex(LODIndex));
    return LODs(LODIndex).ShadowVertexFactory;
}

#line 92 "candidate.cpp"

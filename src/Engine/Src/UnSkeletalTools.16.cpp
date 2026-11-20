// UnSkeletalTools.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/SkeletalMesh.h"

// @baa 0x0095bc50
/* the LOD's index buffer, and its vertex buffer when it's skinned on the GPU */
inline void FStaticLODModel::InitResources(USkeletalMesh* Parent)
{
    BeginInitResource(&IndexBuffer);
    if (!Parent->IsCPUSkinned())
    {
        BeginInitResource(&VertexBufferGPUSkin);
    }
}

/* start initialising the render resources of every LOD */
void USkeletalMesh::InitResources()
{
    for (INT LODIndex = 0; LODIndex < ((TIndirectArray<FStaticLODModel>&)LODModels).Num(); LODIndex++)
    {
        ((TIndirectArray<FStaticLODModel>&)LODModels)(LODIndex).InitResources(this);
    }
}

#line 139 "candidate.cpp"

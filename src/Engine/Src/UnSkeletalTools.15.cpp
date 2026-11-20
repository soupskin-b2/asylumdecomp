// UnSkeletalTools.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/SkeletalMesh.h"

// @baa 0x00d49f80
/* whether every vertex of the base LOD is a cloth vertex */
UBOOL USkeletalMesh::IsOnlyClothMesh() const
{
    const FStaticLODModel* LODModel = &((const TIndirectArray<FStaticLODModel>&)LODModels)(0);
    if (!LODModel)
    {
        return FALSE;
    }

    INT NumVertices = 0;
    for (INT ChunkIndex = 0; ChunkIndex < LODModel->Chunks.Num(); ChunkIndex++)
    {
        NumVertices += LODModel->Chunks(ChunkIndex).GetNumVertices();
    }
    return NumVertices == NumFreeClothVerts;
}

#line 108 "candidate.cpp"

/* the most bones a chunk can have for GPU skinning (UnSkeletalRender.h) */
#define MAX_GPUSKIN_BONES 75

// @baa 0x00951af0
/* whether the mesh must be skinned on the CPU: forced, or a chunk has too many bones for the GPU path */
UBOOL USkeletalMesh::IsCPUSkinned() const
{
    UBOOL bCPUSkinned = bForceCPUSkinning;
    if (!bCPUSkinned && ((const TIndirectArray<FStaticLODModel>&)LODModels).Num() != 0)
    {
        for (INT ChunkIndex = 0; ChunkIndex < ((const TIndirectArray<FStaticLODModel>&)LODModels)(0).Chunks.Num(); ChunkIndex++)
        {
            if (((const TIndirectArray<FStaticLODModel>&)LODModels)(0).Chunks(ChunkIndex).BoneMap.Num() > MAX_GPUSKIN_BONES)
            {
                bCPUSkinned = TRUE;
                break;
            }
        }
    }
    return bCPUSkinned;
}

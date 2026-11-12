// UnSkeletalTools.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

/* FPackedNormal (UnMath.h): a unit vector packed into 4 bytes. */
struct FPackedNormal
{
    union
    {
        struct { BYTE X, Y, Z, W; } Vector;
        DWORD Packed;
    };
};

/* FRigidSkinVertex (UnSkeletalMesh.h): a vertex bound to a single bone (0x24 bytes). Not in the kit. */
struct FRigidSkinVertex
{
    FVector Position;
    FPackedNormal TangentX, TangentY, TangentZ;
    FLOAT U, V;
    BYTE Bone;
};

/* FSoftSkinVertex (UnSkeletalMesh.h): a vertex skinned to up to 4 bones (0x28 bytes). Not in the kit. */
struct FSoftSkinVertex
{
    FVector Position;
    FPackedNormal TangentX, TangentY, TangentZ;
    FLOAT U, V;
    BYTE InfluenceBones[4];
    BYTE InfluenceWeights[4];
};

/* FSkelMeshSection (UnSkeletalMesh.h). Not in the kit. */
struct FSkelMeshSection
{
    WORD MaterialIndex;
    WORD ChunkIndex;
    DWORD BaseIndex;
    WORD NumTriangles;
};

/* FSkelMeshChunk (UnSkeletalMesh.h): vertices of one LOD skinned with one bone map. Not in the kit. */
struct FSkelMeshChunk
{
    DWORD BaseVertexIndex;
    TArray<FRigidSkinVertex> RigidVertices;
    TArray<FSoftSkinVertex> SoftVertices;
    TArray<WORD> BoneMap;
    INT NumRigidVertices;
    INT NumSoftVertices;
    INT MaxBoneInfluences;

    INT GetNumVertices() const { return NumRigidVertices + NumSoftVertices; }
};

/* FStaticLODModel (UnSkeletalMesh.h); only its leading arrays are used here. */
struct FStaticLODModel
{
    TArray<FSkelMeshSection> Sections;
    TArrayAt_<FSkelMeshChunk> Chunks;
};

/* USkeletalMesh::IsOnlyClothMesh isn't declared in Classes.h */
struct USkeletalMesh_ : public USkeletalMesh
{
    UBOOL IsOnlyClothMesh() const;
};

// @baa 0x00d49f80
/* whether every vertex of the base LOD is a cloth vertex */
UBOOL USkeletalMesh_::IsOnlyClothMesh() const
{
    const FStaticLODModel* LODModel = &((const TIndirectArray<FStaticLODModel>&)LODModels)(0);
    if (!LODModel)
    {
        return FALSE;
    }

    INT NumVertices = 0;
    for (INT ChunkIndex = 0; ChunkIndex < LODModel->Chunks.Num(); ChunkIndex++)
    {
        NumVertices += LODModel->Chunks.At(ChunkIndex).GetNumVertices();
    }
    return NumVertices == NumFreeClothVerts;
}

#line 108 "candidate.cpp"

/* the most bones a chunk can have for GPU skinning (UnSkeletalRender.h) */
#define MAX_GPUSKIN_BONES 75
/* USkeletalMesh::IsCPUSkinned isn't declared in Classes.h */
struct USkeletalMesh__00951af0 : public USkeletalMesh
{
    UBOOL IsCPUSkinned() const;
};

// @baa 0x00951af0
/* whether the mesh must be skinned on the CPU: forced, or a chunk has too many bones for the GPU path */
UBOOL USkeletalMesh__00951af0::IsCPUSkinned() const
{
    UBOOL bCPUSkinned = bForceCPUSkinning;
    if (!bCPUSkinned && ((const TIndirectArray<FStaticLODModel>&)LODModels).Num() != 0)
    {
        for (INT ChunkIndex = 0; ChunkIndex < ((const TIndirectArray<FStaticLODModel>&)LODModels)(0).Chunks.Num(); ChunkIndex++)
        {
            if (((const TIndirectArray<FStaticLODModel>&)LODModels)(0).Chunks.At(ChunkIndex).BoneMap.Num() > MAX_GPUSKIN_BONES)
            {
                bCPUSkinned = TRUE;
                break;
            }
        }
    }
    return bCPUSkinned;
}

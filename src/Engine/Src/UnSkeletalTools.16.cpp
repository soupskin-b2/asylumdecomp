// UnSkeletalTools.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

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

/* FRenderResource (RenderResource.h); the kit has no render resources. Only its address is used here. */
class FRenderResource
{
public:
    virtual ~FRenderResource();
};

/* starts initialising a resource on the rendering thread (RenderResource.cpp, 0x0073be30) */
void BeginInitResource(FRenderResource* Resource);
/* FRawStaticIndexBuffer (RawIndexBuffer.h): 0x60 bytes; its contents aren't used here. */
class FRawStaticIndexBuffer : public FRenderResource
{
    BYTE Opaque[0x5c];
};

/* FSkeletalMeshVertexBuffer (UnSkeletalMesh.h): only its address is used here. */
class FSkeletalMeshVertexBuffer : public FRenderResource
{
};

/* FStaticLODModel (UnSkeletalMesh.h), up to the GPU-skin vertex buffer. */
struct FStaticLODModel
{
    TArray<FSkelMeshSection> Sections;
    TArray<FSkelMeshChunk> Chunks;
    TArray<WORD> ActiveBoneIndices;
    DWORD Size;
    DWORD NumVertices;
    DWORD NumTexCoords;
    FRawStaticIndexBuffer IndexBuffer;               /* 0x30 */
    FSkeletalMeshVertexBuffer VertexBufferGPUSkin;   /* 0x90 */

    void InitResources(class USkeletalMesh* Parent);
};

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

// UnSkeletalTools.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* FPackedNormal (UnMath.h): a unit vector packed into 4 bytes. */
struct FPackedNormal
{
    union
    {
        struct { BYTE X, Y, Z, W; } Vector;
        DWORD Packed;
    };
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

/* TArray::AddItem (Array.h); not in the kit's TArray. */
template<typename T> struct TArrayAddItem_ : public TArray<T>
{
    INT AddItem(const T& Item)
    {
        const INT Index = this->Add(1);
        new((EInternal*)(this->GetTypedData() + Index)) T(Item);
        return Index;
    }
};

// @baa 0x00d48160
/* the out-of-line TArray<FSoftSkinVertex>::AddItem instantiation (FSkelMeshChunk::SoftVertices) */
template INT TArrayAddItem_<FSoftSkinVertex>::AddItem(const FSoftSkinVertex& Item);

/* TArray<WORD>(INT InNum) (Array.h): InNum uninitialised elements; out of line here (vertex index
 * remap in UnSkeletalTools.cpp). The kit's TArray has no such constructor. */
struct FWordArray : public TArray<WORD>
{
    explicit FWordArray(INT InNum);
};

// @baa 0x00d46100
FWordArray::FWordArray(INT InNum)
{
    ArrayNum = InNum;
    ArrayMax = InNum;
    AllocatorInstance.ResizeAllocation(0, ArrayMax, sizeof(WORD));
}

/* TArray<FLOAT>(INT InNum) (Array.h): InNum uninitialised elements; out of line here (per-bone values
 * in UnSkeletalTools.cpp). The kit's TArray has no such constructor. */
struct FFloatArray : public TArray<FLOAT>
{
    explicit FFloatArray(INT InNum);
};

// @baa 0x0088d8d0
FFloatArray::FFloatArray(INT InNum)
{
    ArrayNum = InNum;
    ArrayMax = InNum;
    AllocatorInstance.ResizeAllocation(0, ArrayMax, sizeof(FLOAT));
}

/* FRigidSkinVertex (UnSkeletalMesh.h): a vertex bound to a single bone (0x24 bytes). Not in the kit. */
struct FRigidSkinVertex
{
    FVector Position;
    FPackedNormal TangentX, TangentY, TangentZ;
    FLOAT U, V;
    BYTE Bone;
};

// @baa 0x00d480f0
/* the out-of-line TArray<FRigidSkinVertex>::AddItem instantiation (FSkelMeshChunk::RigidVertices) */
template INT TArrayAddItem_<FRigidSkinVertex>::AddItem(const FRigidSkinVertex& Item);

/* TArray<FBoneMirrorInfo> with its out-of-line Add (0x00d46560) and the inline AddZeroed (Array.h) */
struct FBoneMirrorInfoArray : public TArray<FBoneMirrorInfo>
{
    INT Add(INT Count);

    INT AddZeroed(INT Count)
    {
        const INT Index = Add(Count);
        appMemzero((BYTE*)GetData() + Index * sizeof(FBoneMirrorInfo), Count * sizeof(FBoneMirrorInfo));
        return Index;
    }
};

/* USkeletalMesh::InitBoneMirrorInfo isn't declared in Classes.h */
struct USkeletalMesh_ : public USkeletalMesh
{
    void InitBoneMirrorInfo();
};

// @baa 0x00d4d750
/* reset the mirror table: one entry per bone, each mirroring itself */
void USkeletalMesh_::InitBoneMirrorInfo()
{
    FBoneMirrorInfoArray& MirrorTable = (FBoneMirrorInfoArray&)SkelMirrorTable;
    MirrorTable.Empty(RefSkeleton.Num());
    MirrorTable.AddZeroed(RefSkeleton.Num());

    for (INT i = 0; i < SkelMirrorTable.Num(); i++)
    {
        SkelMirrorTable(i).SourceIndex = i;
    }
}

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

};

/* FMeshEdge (UnMeshBuild.h): a triangle edge for shadow volume extrusion. Not in the kit. */
struct FMeshEdge
{
    INT Vertices[2];
    INT Faces[2];
};

/* FRawStaticIndexBuffer (RawIndexBuffer.h): its contents aren't used here; the kit has no render
 * resources, so it is opaque. Its size (0x34) is taken from the LOD model's layout. */
class FRawStaticIndexBuffer
{
    BYTE Opaque[0x34];
};

/* FStaticLODModel (UnSkeletalMesh.h), up to the shadow volume data. Not in the kit. */
struct FStaticLODModel
{
    TArray<FSkelMeshSection> Sections;
    TArray<FSkelMeshChunk> Chunks;
    TArray<WORD> ActiveBoneIndices;
    DWORD Size;
    DWORD NumVertices;
    DWORD NumTexCoords;
    FRawStaticIndexBuffer IndexBuffer;     /* 0x30 */
    TArray<WORD> ShadowIndices;            /* 0x64 */
    TArray<FMeshEdge> Edges;               /* 0x70 */
    TArray<BYTE> ShadowTriangleDoubleSided; /* 0x7c */
};

/* USkeletalMesh::ClearShadowVolumeData isn't declared in Classes.h */
struct USkeletalMesh__0095cba0 : public USkeletalMesh
{
    void ClearShadowVolumeData();
};

// @baa 0x0095cba0
/* free the shadow volume data of every LOD (called when shadow volumes aren't used) */
void USkeletalMesh__0095cba0::ClearShadowVolumeData()
{
    for (INT LODIndex = 0; LODIndex < ((TIndirectArray<FStaticLODModel>&)LODModels).Num(); LODIndex++)
    {
        FStaticLODModel& LODModel = ((TIndirectArray<FStaticLODModel>&)LODModels)(LODIndex);
        LODModel.ShadowIndices.Empty();
        LODModel.Edges.Empty();
        LODModel.ShadowTriangleDoubleSided.Empty();
    }
}

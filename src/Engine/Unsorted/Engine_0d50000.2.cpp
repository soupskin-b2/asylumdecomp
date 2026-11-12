// Engine_0d50000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* TArray<INT> with its out-of-line destructor (~TArray<INT>, 0x00549160) */
struct FBoneIndexArray : public TArray<INT>
{
    ~FBoneIndexArray();
};

/* FSkeletalMeshMerge::FMergeMeshInfo (UnSkeletalMeshMerge.h): per source mesh, its bones' indices in the merged skeleton */
struct FMergeMeshInfo
{
    FBoneIndexArray SrcToDestRefSkeletonMap;
};

/* TArray<FMergeMeshInfo>::~TArray (FSkeletalMeshMerge::SrcMeshInfo), instantiated out of line */
template<> __declspec(noinline) TArray<FMergeMeshInfo>::~TArray()
{
    // DestructItems(0, ArrayNum), as this build inlines it
    const INT Count = ArrayNum;
    for (INT i = 0; i < Count; i++)
    {
        (&(*this)(i))->~FMergeMeshInfo();
    }
    ArrayNum = ArrayMax = 0;
}

// @baa 0x00d53730
/* FSkeletalMeshMerge's (implicit) destructor destroys SrcMeshInfo; this stands in for it so the
 * compiler emits the specialisation above. */
void DestroySrcMeshInfo(TArray<FMergeMeshInfo>& SrcMeshInfo)
{
    SrcMeshInfo.~TArray();
}

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

};

/* TArray<WORD> with its out-of-line destructor (~TArray<WORD>, 0x00602210) */
struct FMergedBoneMapArray : public TArray<WORD>
{
    ~FMergedBoneMapArray();
};

/* FSkeletalMeshMerge::FMergeSectionInfo (UnSkeletalMeshMerge.h): one source section going into a merged section */
struct FMergeSectionInfo
{
    const USkeletalMesh* SkelMesh;
    const FSkelMeshSection* Section;
    const FSkelMeshChunk* Chunk;
    FMergedBoneMapArray BoneMap;
};

/* TArray<FMergeSectionInfo>::~TArray (Array.h) instantiated out of line, DestructItems inlined */
template<> __declspec(noinline) TArray<FMergeSectionInfo>::~TArray()
{
    const INT Count = ArrayNum;
    for (INT i = 0; i < Count; i++)
    {
        (&(*this)(i))->~FMergeSectionInfo();
    }
    ArrayNum = ArrayMax = 0;
}

// @baa 0x00d54590
/* FSkeletalMeshMerge's section lists are destroyed through it; this stands in for that so the
 * compiler emits the specialisation above. */
void DestroyMergeSections(TArray<FMergeSectionInfo>& MergeSections)
{
    MergeSections.~TArray();
}

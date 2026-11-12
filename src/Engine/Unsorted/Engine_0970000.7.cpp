// Engine_0970000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* the array types inside FSkeletalMeshLODInfo, with their out-of-line destructors */
struct FLODMaterialMapArray : public TArray<INT>
{
    ~FLODMaterialMapArray(); /* ~TArray<INT>, 0x00549160 */
};

struct FShadowCastingArray : public TArray<FNativeElem_007b9350>
{
    ~FShadowCastingArray(); /* ~TArray<UBOOL>, 0x007b9350 */
};

/* FSkeletalMeshLODInfo as the native code sees it (the kit's script mirror uses TArrayNoInit) */
struct FSkeletalMeshLODInfo_
{
    FLOAT DisplayFactor;
    FLOAT LODHysteresis;
    FLODMaterialMapArray LODMaterialMap;
    FShadowCastingArray bEnableShadowCasting;
};

/* TArray<FSkeletalMeshLODInfo>::Empty (Array.h), out of line here (USkeletalMesh::LODInfo) */
struct FSkeletalMeshLODInfoArray : public TArray<FSkeletalMeshLODInfo_>
{
    void Empty(INT Slack);
};

// @baa 0x009755a0
void FSkeletalMeshLODInfoArray::Empty(INT Slack)
{
    // DestructItems(0, ArrayNum)
    const INT Count = ArrayNum;
    for (INT i = 0; i < Count; i++)
    {
        (&(*this)(i))->~FSkeletalMeshLODInfo_();
    }
    ArrayNum = 0;
    if (ArrayMax != Slack)
    {
        ArrayMax = Slack;
        AllocatorInstance.ResizeAllocation(0, ArrayMax, sizeof(FSkeletalMeshLODInfo_));
    }
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

    ~FSkelMeshChunk(); /* out of line, 0x009590c0 */
};

/* TArray<FSkelMeshChunk>::Empty (Array.h), out of line here (FStaticLODModel::Chunks) */
struct FSkelMeshChunkArray : public TArray<FSkelMeshChunk>
{
    void Empty(INT Slack);
};

// @baa 0x00975c20
void FSkelMeshChunkArray::Empty(INT Slack)
{
    // DestructItems(0, ArrayNum)
    const INT Count = ArrayNum;
    for (INT i = 0; i < Count; i++)
    {
        (&(*this)(i))->~FSkelMeshChunk();
    }
    ArrayNum = 0;
    if (ArrayMax != Slack)
    {
        ArrayMax = Slack;
        AllocatorInstance.ResizeAllocation(0, ArrayMax, sizeof(FSkelMeshChunk));
    }
}

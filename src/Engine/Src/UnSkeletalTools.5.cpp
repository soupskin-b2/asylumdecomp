// UnSkeletalTools.cpp: 4 functions
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

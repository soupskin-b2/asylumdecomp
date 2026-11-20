// UnSkeletalMeshMerge.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/SkeletalMesh.h"

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

/* TArray<FMergeMeshInfo> (FSkeletalMeshMerge::SrcMeshInfo) */
struct FMergeMeshInfoArray : public TArray<FMergeMeshInfo>
{
    void Empty(INT Slack);
};

// @baa 0x00d53800
void FMergeMeshInfoArray::Empty(INT Slack)
{
    // DestructItems(0, ArrayNum)
    const INT Count = ArrayNum;
    for (INT i = 0; i < Count; i++)
    {
        (&(*this)(i))->~FMergeMeshInfo();
    }
    ArrayNum = 0;
    if (ArrayMax != Slack)
    {
        ArrayMax = Slack;
        AllocatorInstance.ResizeAllocation(0, ArrayMax, sizeof(FMergeMeshInfo));
    }
}

/* TArray<USkeletalMeshSocket*>::AddUniqueItem (Array.h), out of line here (USkeletalMesh::Sockets) */
struct FSocketArray : public TArray<USkeletalMeshSocket*>
{
    INT AddUniqueItem(USkeletalMeshSocket* const& Item);
};

// @baa 0x00d48310
INT FSocketArray::AddUniqueItem(USkeletalMeshSocket* const& Item)
{
    for (INT Index = 0; Index < ArrayNum; Index++)
    {
        if ((*this)(Index) == Item)
        {
            return Index;
        }
    }

    // AddItem(Item)
    const INT Index = Add(1);
    new((EInternal*)(GetTypedData() + Index)) USkeletalMeshSocket*(Item);
    return Index;
}

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

/* TArray<FMergeSectionInfo> with its out-of-line destructor (0x00d54590) */
struct FMergeSectionInfoArray : public TArray<FMergeSectionInfo>
{
    ~FMergeSectionInfoArray();
};

/* FSkeletalMeshMerge::FNewSectionInfo (UnSkeletalMeshMerge.h): a section of the merged mesh */
struct FNewSectionInfo
{
    FMergeSectionInfoArray MergeSections;
    FMergedBoneMapArray MergedBoneMap;
    UMaterialInterface* Material;
    INT MaterialId;
};

/* TArray<FNewSectionInfo>::~TArray (Array.h) instantiated out of line, DestructItems inlined */
template<> __declspec(noinline) TArray<FNewSectionInfo>::~TArray()
{
    const INT Count = ArrayNum;
    for (INT i = 0; i < Count; i++)
    {
        (&(*this)(i))->~FNewSectionInfo();
    }
    ArrayNum = ArrayMax = 0;
}

// @baa 0x00d586e0
/* FSkeletalMeshMerge::GenerateLODModel's NewSectionArray is destroyed through it; this stands in for
 * that so the compiler emits the specialisation above. */
void DestroyNewSections(TArray<FNewSectionInfo>& NewSectionArray)
{
    NewSectionArray.~TArray();
}

/* TArray<FNewSectionInfo>::Empty (Array.h), out of line here */
struct FNewSectionInfoArray : public TArray<FNewSectionInfo>
{
    void Empty(INT Slack);
};

// @baa 0x00d58810
void FNewSectionInfoArray::Empty(INT Slack)
{
    // DestructItems(0, ArrayNum)
    const INT Count = ArrayNum;
    for (INT i = 0; i < Count; i++)
    {
        (&(*this)(i))->~FNewSectionInfo();
    }
    ArrayNum = 0;
    if (ArrayMax != Slack)
    {
        ArrayMax = Slack;
        AllocatorInstance.ResizeAllocation(0, ArrayMax, sizeof(FNewSectionInfo));
    }
}

// Engine_0d50000.cpp: 2 functions
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

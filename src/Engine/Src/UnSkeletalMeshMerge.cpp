// UnSkeletalMeshMerge.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* IMPLEMENT_COMPARE_CONSTREF(BYTE, UnSkeletalMeshMerge, { return A - B; }): orders the merged required bones */
class CompareUnSkeletalMeshMergeBYTEConstRef
{
public:
    static inline INT Compare(const BYTE& A, const BYTE& B) { return A - B; }
};

// @baa 0x00d4cff0
template void Sort<BYTE, CompareUnSkeletalMeshMergeBYTEConstRef>(BYTE* First, INT Num);

/* FSkelMeshMergeSectionMapping (UnSkeletalMeshMerge.h): forced section IDs for one source mesh */
struct FSkelMeshMergeSectionMapping
{
    TArray<INT> SectionIDs;
};

/* FSkeletalMeshMerge (UnSkeletalMeshMerge.h): merges several skeletal meshes into MergeMesh. Not in the kit. */
class FSkeletalMeshMerge
{
public:
    FSkeletalMeshMerge(USkeletalMesh* InMergeMesh, const TArray<USkeletalMesh*>& InSrcMeshList, INT InStripTopLODs, const TArray<FSkelMeshMergeSectionMapping>& InForceSectionMapping);

private:
    /* per source mesh: its bones' indices in the merged skeleton */
    struct FMergeMeshInfo
    {
        TArray<INT> SrcToDestRefSkeletonMap;
    };

    USkeletalMesh* MergeMesh;
    const TArray<USkeletalMesh*>& SrcMeshList;
    const TArray<FSkelMeshMergeSectionMapping>& ForceSectionMapping;
    TArray<FMergeMeshInfo> SrcMeshInfo;
    TArray<FMeshBone> NewRefSkeleton;
    INT StripTopLODs;
    TArray<INT> MergeIndices; /* an INT array the merge fills later; its role isn't recovered here */
};

// @baa 0x00d54270
FSkeletalMeshMerge::FSkeletalMeshMerge(USkeletalMesh* InMergeMesh, const TArray<USkeletalMesh*>& InSrcMeshList, INT InStripTopLODs, const TArray<FSkelMeshMergeSectionMapping>& InForceSectionMapping)
:   MergeMesh(InMergeMesh)
,   SrcMeshList(InSrcMeshList)
,   ForceSectionMapping(InForceSectionMapping)
,   StripTopLODs(InStripTopLODs)
{
#line 28 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalMeshMerge.cpp"
    check(MergeMesh);
}

#line 172 "candidate.cpp"

// @baa 0x00d49b40
/* UnSkeletalMeshMerge.cpp: the index of the bone with the given name in a reference skeleton, INDEX_NONE if absent */
INT FindBoneIndex(const TArray<FMeshBone>& RefSkeleton, FName BoneName)
{
    for (INT i = 0; i < RefSkeleton.Num(); i++)
    {
        if (RefSkeleton(i).Name == BoneName)
        {
            return i;
        }
    }
    return INDEX_NONE;
}

/* TArray<WORD> with its out-of-line Add (0x005fc440) and AddUniqueItem (0x007da4b0) */
struct FBoneMapArray : public TArray<WORD>
{
    INT Add(INT Count);
    INT AddUniqueItem(const WORD& Item);
};

/* FSkeletalMeshMerge_00d49bc0 (UnSkeletalMeshMerge.h); only MergeBoneMap is defined here. Not in the kit. */
class FSkeletalMeshMerge_00d49bc0
{
public:
    void MergeBoneMap(TArray<WORD>& MergedBoneMap, TArray<WORD>& BoneMapToMergedBoneMap, const TArray<WORD>& BoneMap);
};

// @baa 0x00d49bc0
/* add a section's bone map to the merged section's, recording where each of its bones went */
void FSkeletalMeshMerge_00d49bc0::MergeBoneMap(TArray<WORD>& MergedBoneMap, TArray<WORD>& BoneMapToMergedBoneMap, const TArray<WORD>& BoneMap)
{
    BoneMapToMergedBoneMap.Add(BoneMap.Num());
    for (INT IdxB = 0; IdxB < BoneMap.Num(); IdxB++)
    {
        BoneMapToMergedBoneMap(IdxB) = MergedBoneMap.AddUniqueItem(BoneMap(IdxB));
    }
}

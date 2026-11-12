// UnSkeletalMeshMerge.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Exchange and Sort (UnTemplate.h); not in the kit. */
template<class T> inline void Exchange(T& A, T& B)
{
    const T Temp = A;
    A = B;
    B = Temp;
}

template<class T, class CompareClass> void Sort(T* First, INT Num)
{
    struct FStack
    {
        T* Min;
        T* Max;
    };
    if (Num < 2)
    {
        return;
    }
    FStack RecursionStack[32] = {First, First + Num - 1}, Current, Inner;
    for (FStack* StackTop = RecursionStack; StackTop >= RecursionStack; --StackTop)
    {
        Current = *StackTop;
    Loop:
        INT Count = Current.Max - Current.Min + 1;
        if (Count <= 8)
        {
            // simple bubble sort
            while (Current.Max > Current.Min)
            {
                T *Max, *Item;
                for (Max = Current.Min, Item = Current.Min + 1; Item <= Current.Max; Item++)
                {
                    if (CompareClass::Compare(*Item, *Max) > 0)
                    {
                        Max = Item;
                    }
                }
                Exchange(*Max, *Current.Max--);
            }
        }
        else
        {
            // grab the middle element so presorted lists don't hit the worst case
            Exchange(Current.Min[Count / 2], Current.Min[0]);

            // split into items <= Current.Min and items > it
            Inner.Min = Current.Min;
            Inner.Max = Current.Max + 1;
            for (;;)
            {
                while (++Inner.Min <= Current.Max && CompareClass::Compare(*Inner.Min, *Current.Min) <= 0);
                while (--Inner.Max > Current.Min && CompareClass::Compare(*Inner.Max, *Current.Min) >= 0);
                if (Inner.Min > Inner.Max)
                {
                    break;
                }
                Exchange(*Inner.Min, *Inner.Max);
            }
            Exchange(*Current.Min, *Inner.Max);

            // save the big half and recurse with the small one
            if (Inner.Max - 1 - Current.Min >= Current.Max - Inner.Min)
            {
                if (Current.Min + 1 < Inner.Max)
                {
                    StackTop->Min = Current.Min;
                    StackTop->Max = Inner.Max - 1;
                    StackTop++;
                }
                if (Current.Max > Inner.Min)
                {
                    Current.Min = Inner.Min;
                    goto Loop;
                }
            }
            else
            {
                if (Current.Max > Inner.Min)
                {
                    StackTop->Min = Inner.Min;
                    StackTop++->Max = Current.Max;
                }
                if (Current.Min + 1 < Inner.Max)
                {
                    Current.Max = Inner.Max - 1;
                    goto Loop;
                }
            }
        }
    }
}

/* IMPLEMENT_COMPARE_CONSTREF(BYTE, UnSkeletalMeshMerge, { return A - B; }): orders the merged required bones */
class CompareUnSkeletalMeshMergeBYTEConstRef
{
public:
    static inline INT Compare(const BYTE& A, const BYTE& B) { return A - B; }
};

// @baa 0x00d4cff0
template void Sort<BYTE, CompareUnSkeletalMeshMergeBYTEConstRef>(BYTE* First, INT Num);

/* VJointPos (UnSkeletalMesh.h): a bone's reference pose. */
struct VJointPos
{
    FQuat Orientation;
    FVector Position;
    FLOAT Length;
    FLOAT XSize;
    FLOAT YSize;
    FLOAT ZSize;
};

/* FMeshBone as this build has it (0x48 bytes); the kit's FMeshBone has ParentIndex at the wrong offset. */
struct FMeshBone_
{
    FName Name;
    DWORD Flags;
    VJointPos BonePos;
    INT ParentIndex;      /* 0x38 */
    INT NumChildren;
    INT Depth;
    FColor BoneColor;
};

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
    TArray<FMeshBone_> NewRefSkeleton;
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
INT FindBoneIndex(const TArray<FMeshBone_>& RefSkeleton, FName BoneName)
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
    ((FBoneMapArray&)BoneMapToMergedBoneMap).Add(BoneMap.Num());
    for (INT IdxB = 0; IdxB < BoneMap.Num(); IdxB++)
    {
        BoneMapToMergedBoneMap(IdxB) = ((FBoneMapArray&)MergedBoneMap).AddUniqueItem(BoneMap(IdxB));
    }
}

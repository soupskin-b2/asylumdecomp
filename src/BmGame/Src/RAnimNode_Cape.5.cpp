// RAnimNode_Cape.cpp: 8 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    using TArray<T>::ArrayNum;
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

/* Kit gap: FName has no operator== here (UnName.h compares Index and Number). */
struct FName_ : public FName
{
    FORCEINLINE UBOOL operator==(const FName& Other) const { return Index == Other.Index && Number == Other.Number; }
};

/* Unnamed in the kit: whether one of the children is an anim node with this name. */
struct URAnimNode_Cape_ : public URAnimNode_Cape
{
    UBOOL sub_01569e10(FName AnimName);
};

// @baa 0x01569e10
UBOOL URAnimNode_Cape_::sub_01569e10(FName AnimName)
{
    const INT NumChildren = Children.Num();
    for (INT ChildIndex = 0; ChildIndex < NumChildren; ChildIndex++)
    {
        UAnimNode* Child = ((const TArrayAt_<FAnimBlendChild>&)Children).At(ChildIndex).Anim;
        if (Child)
        {
            const FName ChildName = Child->NodeName;
            if ((const FName_&)ChildName == AnimName)
            {
                return TRUE;
            }
        }
    }
    return FALSE;
}

#line 57 "candidate.cpp"

/* Unnamed in the kit: the cape chain and link for a lookup index; FALSE when both are zero. */
struct URAnimNode_Cape__01569310 : public URAnimNode_Cape
{
    UBOOL sub_01569310(INT LookupIndex, INT& ChainIndex, INT& LinkIndex);
};

// @baa 0x01569310
UBOOL URAnimNode_Cape__01569310::sub_01569310(INT LookupIndex, INT& ChainIndex, INT& LinkIndex)
{
#line 502 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
    check(CapePosLookupTable.Num() > 0);
    const FLookupCapePos& Lookup = ((const TArrayAt_<FLookupCapePos>&)CapePosLookupTable).At(LookupIndex);
    ChainIndex = Lookup.ChainIndex;
    LinkIndex = Lookup.LinkIndex;
    return ChainIndex != 0 || LinkIndex != 0;
}

#line 76 "candidate.cpp"

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt__01569700 : public TArray<T>
{
    using TArray<T>::ArrayNum;
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

/* Unnamed in the kit: the number of children of a reference-skeleton bone. FMeshBone in the kit is a guess
 * (Unknown38 is UE3's NumChildren: Name, Flags, VJointPos BonePos (0x2c bytes), NumChildren, ParentIndex). */
struct URAnimNode_Cape__01569700 : public URAnimNode_Cape
{
    INT sub_01569700(INT BoneIndex);
};

// @baa 0x01569700
INT URAnimNode_Cape__01569700::sub_01569700(INT BoneIndex)
{
#line 567 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
    check(SkelComponent != NULL);
#line 568 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
    check(SkelComponent->SkeletalMesh != NULL);
    return ((TArrayAt__01569700<FMeshBone>&)SkelComponent->SkeletalMesh->RefSkeleton).At(BoneIndex).Unknown38;
}

#line 108 "candidate.cpp"

/* Unnamed in the kit: the parent anim component's space-base matrix for the bone the cape is attached to
 * (pre-physics bases when that component uses them). */
struct URAnimNode_Cape__01569b90 : public URAnimNode_Cape
{
    FMatrix sub_01569b90();
};

// @baa 0x01569b90
FMatrix URAnimNode_Cape__01569b90::sub_01569b90()
{
    USkeletalMeshComponent* ParentComp = SkelComponent->ParentAnimComponent;
    FMatrix ParentBoneMatrix;
    if (ParentComp->bUsePrePhysicsSpaceBases)
    {
        ParentBoneMatrix = ((const TArrayAt_<FMatrix>&)ParentComp->PrePhysicsSpaceBases).At(ParentAttachBoneIndex);
    }
    else
    {
        ParentBoneMatrix = ((const TArrayAt_<FMatrix>&)ParentComp->SpaceBases).At(ParentAttachBoneIndex);
    }
    return ParentBoneMatrix;
}

/* Unnamed in the kit: the parent of a cape bone. RefSkeleton(i)+0x38 is the parent index in this build; the kit's
 * FMeshBone calls it Unknown38. */
struct URAnimNode_Cape__01569c40 : public URAnimNode_Cape
{
    FORCEINLINE INT GetNumBonesInCape() { return SkelComponent->SkeletalMesh->RefSkeleton.Num(); }
    INT sub_01569c40(INT boneIndex);
};

// @baa 0x01569c40
INT URAnimNode_Cape__01569c40::sub_01569c40(INT boneIndex)
{
#line 888 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
    check(boneIndex < (UINT)GetNumBonesInCape());
    USkeletalMeshComponent* pCapeSkeletalMeshComponent = SkelComponent;
#line 891 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
    check(pCapeSkeletalMeshComponent != NULL);
    USkeletalMesh* pCapeSkeletalMesh = pCapeSkeletalMeshComponent->SkeletalMesh;
#line 893 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
    check(pCapeSkeletalMesh != NULL);
    return ((TArrayAt_<FMeshBone>&)pCapeSkeletalMesh->RefSkeleton).At(boneIndex).Unknown38;
}

#line 155 "candidate.cpp"

/* Unnamed in the kit: whether ParentBoneIndex is BoneIndex or one of its ancestors. RefSkeleton(i)+0x38 is the
 * parent index in this build (the kit's FMeshBone calls it Unknown38); the root is its own parent. */
struct URAnimNode_Cape__015697a0 : public URAnimNode_Cape
{
    UBOOL sub_015697a0(INT BoneIndex, INT ParentBoneIndex);
};

// @baa 0x015697a0
UBOOL URAnimNode_Cape__015697a0::sub_015697a0(INT BoneIndex, INT ParentBoneIndex)
{
#line 577 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
    check(SkelComponent != NULL);
#line 578 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
    check(SkelComponent->SkeletalMesh != NULL);
    TArrayAt_<FMeshBone>& RefSkeleton = (TArrayAt_<FMeshBone>&)SkelComponent->SkeletalMesh->RefSkeleton;
    INT CurrentBone = BoneIndex;
    while (CurrentBone != ParentBoneIndex)
    {
        const INT ChildBone = CurrentBone;
        CurrentBone = RefSkeleton.At(CurrentBone).Unknown38;
        if (CurrentBone == ChildBone)
        {
            return FALSE;
        }
    }
    return TRUE;
}

#line 185 "candidate.cpp"

/* Unnamed in the kit: a parent bone's reference-pose space base, from the cache when it has been built
 * (otherwise computed by sub_0156a030). */
struct URAnimNode_Cape__0156e6a0 : public URAnimNode_Cape
{
    void sub_0156a030(INT boneIndex, FMatrix& OutSpaceBase);
    void sub_0156e6a0(INT boneIndex, FMatrix& OutSpaceBase);
};

// @baa 0x0156e6a0
void URAnimNode_Cape__0156e6a0::sub_0156e6a0(INT boneIndex, FMatrix& OutSpaceBase)
{
    if (ParentBoneRefSpaceBaseCache.Num())
    {
#line 1219 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
        check(boneIndex < ParentBoneRefSpaceBaseCache.Num());
        OutSpaceBase = ((TArrayAt_<FMatrix>&)ParentBoneRefSpaceBaseCache).At(boneIndex);
    }
    else
    {
        sub_0156a030(boneIndex, OutSpaceBase);
    }
}

#line 210 "candidate.cpp"

/* Unnamed in the kit: the cape node's per-tick update steps. */
struct URAnimNode_Cape__01591bd0 : public URAnimNode_Cape
{
    void sub_01590f70();
    void sub_01579d30();
    void sub_01590020();
};

// @baa 0x01591bd0
/* URAnimNode_Cape slot 0x134 (kit vf_134, UE3 TickAnim(FLOAT DeltaSeconds, FLOAT TotalWeight)): the cape's own
 * updates, then the blend node's tick. */
void URAnimNode_Cape::vf_134(FLOAT DeltaSeconds, FLOAT TotalWeight)
{
    ((URAnimNode_Cape__01591bd0*)this)->sub_01590f70();
    ((URAnimNode_Cape__01591bd0*)this)->sub_01579d30();
    ((URAnimNode_Cape__01591bd0*)this)->sub_01590020();
    Super::vf_134(DeltaSeconds, TotalWeight);
}

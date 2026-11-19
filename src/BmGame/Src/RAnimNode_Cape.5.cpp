// RAnimNode_Cape.cpp: 8 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"


// @baa 0x01569e10
UBOOL URAnimNode_Cape::sub_01569e10(FName AnimName)
{
    const INT NumChildren = Children.Num();
    for (INT ChildIndex = 0; ChildIndex < NumChildren; ChildIndex++)
    {
        UAnimNode* Child = ((const TArray<FAnimBlendChild>&)Children)(ChildIndex).Anim;
        if (Child)
        {
            const FName ChildName = Child->NodeName;
            if (ChildName == AnimName)
            {
                return TRUE;
            }
        }
    }
    return FALSE;
}

#line 57 "candidate.cpp"


// @baa 0x01569310
UBOOL URAnimNode_Cape::sub_01569310(INT LookupIndex, INT& ChainIndex, INT& LinkIndex)
{
#line 502 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
    check(CapePosLookupTable.Num() > 0);
    const FLookupCapePos& Lookup = ((const TArray<FLookupCapePos>&)CapePosLookupTable)(LookupIndex);
    ChainIndex = Lookup.ChainIndex;
    LinkIndex = Lookup.LinkIndex;
    return ChainIndex != 0 || LinkIndex != 0;
}

#line 76 "candidate.cpp"


// @baa 0x01569700
INT URAnimNode_Cape::sub_01569700(INT BoneIndex)
{
#line 567 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
    check(SkelComponent != NULL);
#line 568 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
    check(SkelComponent->SkeletalMesh != NULL);
    return ((TArray<FMeshBone>&)SkelComponent->SkeletalMesh->RefSkeleton)(BoneIndex).ParentIndex;
}

#line 108 "candidate.cpp"

/* Unnamed in the kit: the parent anim component's space-base matrix for the bone the cape is attached to
 * (pre-physics bases when that component uses them). */

// @baa 0x01569b90
FMatrix URAnimNode_Cape::sub_01569b90()
{
    USkeletalMeshComponent* ParentComp = SkelComponent->ParentAnimComponent;
    FMatrix ParentBoneMatrix;
    if (ParentComp->bUsePrePhysicsSpaceBases)
    {
        ParentBoneMatrix = ((const TArray<FMatrix>&)ParentComp->PrePhysicsSpaceBases)(ParentAttachBoneIndex);
    }
    else
    {
        ParentBoneMatrix = ((const TArray<FMatrix>&)ParentComp->SpaceBases)(ParentAttachBoneIndex);
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
    return pCapeSkeletalMesh->RefSkeleton(boneIndex).ParentIndex;
}

#line 155 "candidate.cpp"

/* Unnamed in the kit: whether ParentBoneIndex is BoneIndex or one of its ancestors. RefSkeleton(i)+0x38 is the
 * parent index in this build (the kit's FMeshBone calls it Unknown38); the root is its own parent. */

// @baa 0x015697a0
UBOOL URAnimNode_Cape::sub_015697a0(INT BoneIndex, INT ParentBoneIndex)
{
#line 577 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
    check(SkelComponent != NULL);
#line 578 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
    check(SkelComponent->SkeletalMesh != NULL);
    TArray<FMeshBone>& RefSkeleton = (TArray<FMeshBone>&)SkelComponent->SkeletalMesh->RefSkeleton;
    INT CurrentBone = BoneIndex;
    while (CurrentBone != ParentBoneIndex)
    {
        const INT ChildBone = CurrentBone;
        CurrentBone = RefSkeleton(CurrentBone).ParentIndex;
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

// @baa 0x0156e6a0
void URAnimNode_Cape::sub_0156e6a0(INT boneIndex, FMatrix& OutSpaceBase)
{
    if (ParentBoneRefSpaceBaseCache.Num())
    {
#line 1219 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
        check(boneIndex < ParentBoneRefSpaceBaseCache.Num());
        OutSpaceBase = ParentBoneRefSpaceBaseCache(boneIndex);
    }
    else
    {
        sub_0156a030(boneIndex, OutSpaceBase);
    }
}

#line 210 "candidate.cpp"

/* Unnamed in the kit: the cape node's per-tick update steps. */

// @baa 0x01591bd0
/* URAnimNode_Cape slot 0x134 (UE3 TickAnim(FLOAT DeltaSeconds, FLOAT TotalWeight)): the cape's own updates, then the
 * blend node's tick. */
void URAnimNode_Cape::TickAnim(FLOAT DeltaSeconds, FLOAT TotalWeight)
{
    this->sub_01590f70();
    this->sub_01579d30();
    this->sub_01590020();
    Super::TickAnim(DeltaSeconds, TotalWeight);
}

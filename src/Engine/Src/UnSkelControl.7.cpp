// UnSkelControl.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

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

/* TArray<INT> with its out-of-line Add (0x00540c80) */
struct FIntArray : public TArray<INT>
{
    INT Add(INT Count);
};

/* slot 0x124 (vf_124) is USkelControlBase::GetAffectedBones */

// @baa 0x009255c0
/* the controlled bone and its SplineLength-1 parents, root-most first */
void USkelControlSpline::GetAffectedBones(INT BoneIndex, USkeletalMeshComponent* SkelComp, TArray<INT>& OutBoneIndices)
{
#line 953 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkelControl.cpp"
    check(OutBoneIndices.Num() == 0);

    if (SplineLength < 2)
    {
        return;
    }

    INT WalkBoneIndex = BoneIndex;
    ((FIntArray&)OutBoneIndices).Add(SplineLength);
    OutBoneIndices(SplineLength - 1) = WalkBoneIndex;

    for (INT i = 1; i < SplineLength; i++)
    {
        const INT OutTransformIndex = SplineLength - (i + 1);

        // ran out of parents: not enough bones for the chain
        if (WalkBoneIndex == 0)
        {
            OutBoneIndices.Empty();
            return;
        }

        WalkBoneIndex = ((TArray<FMeshBone_>&)SkelComp->SkeletalMesh->RefSkeleton)(WalkBoneIndex).ParentIndex;
        OutBoneIndices(OutTransformIndex) = WalkBoneIndex;
    }
}

#line 76 "candidate.cpp"

/* slot 0x124 (vf_124) is USkelControlBase::GetAffectedBones */

// @baa 0x00928820
/* the controlled bone and its ChainLength-1 parents, root-most first */
void USkelControlTrail::GetAffectedBones(INT BoneIndex, USkeletalMeshComponent* SkelComp, TArray<INT>& OutBoneIndices)
{
#line 1632 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkelControl.cpp"
    check(OutBoneIndices.Num() == 0);

    if (ChainLength < 2)
    {
        return;
    }

    INT WalkBoneIndex = BoneIndex;
    ((FIntArray&)OutBoneIndices).Add(ChainLength);
    OutBoneIndices(ChainLength - 1) = WalkBoneIndex;

    for (INT i = 1; i < ChainLength; i++)
    {
        const INT OutTransformIndex = ChainLength - (i + 1);

        // ran out of parents: not enough bones for the chain
        if (WalkBoneIndex == 0)
        {
            OutBoneIndices.Empty();
            return;
        }

        WalkBoneIndex = ((TArray<FMeshBone_>&)SkelComp->SkeletalMesh->RefSkeleton)(WalkBoneIndex).ParentIndex;
        OutBoneIndices(OutTransformIndex) = WalkBoneIndex;
    }
}

#line 116 "candidate.cpp"

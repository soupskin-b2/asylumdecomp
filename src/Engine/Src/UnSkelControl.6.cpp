// UnSkelControl.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00937cf0
IMPLEMENT_CLASS_AT(USkelControl_CCD_IK, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkelControl.cpp", 17);

// @baa 0x00937e00
bool USkelControl_CCD_IK::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00938dd0
IMPLEMENT_CLASS_AT(USkelControlFootPlacement, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkelControl.cpp", 14);

// @baa 0x00938ee0
bool USkelControlFootPlacement::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00938f20
IMPLEMENT_CLASS_AT(USkelControlWheel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkelControl.cpp", 15);

// @baa 0x00939030
bool USkelControlWheel::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

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

/* TArray<INT> with its out-of-line Add (0x00540c80); Reset() is a bare ArrayNum = 0 in this build. */
struct FIntArray : public TArray<INT>
{
    INT Add(INT Count);
    void Reset() { ArrayNum = 0; }
};

/* slot 0x124 (vf_124) is USkelControlBase::GetAffectedBones */

// @baa 0x0092a250
/* the controlled bone and its NumBones-1 parents, root-most first */
void USkelControl_CCD_IK::GetAffectedBones(INT BoneIndex, USkeletalMeshComponent* SkelComp, TArray<INT>& OutBoneIndices)
{
#line 1826 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkelControl.cpp"
    check(OutBoneIndices.Num() == 0);

    if (NumBones < 2)
    {
        return;
    }

    OutBoneIndices.Add(NumBones);

    INT WalkBoneIndex = BoneIndex;
    for (INT i = NumBones - 1; i >= 0; i--)
    {
        // ran out of parents: not enough bones in the chain
        if (WalkBoneIndex == 0)
        {
            OutBoneIndices.Reset();
            return;
        }

        OutBoneIndices(i) = WalkBoneIndex;
        WalkBoneIndex = ((TArray<FMeshBone_>&)SkelComp->SkeletalMesh->RefSkeleton)(WalkBoneIndex).ParentIndex;
    }
}

#line 99 "candidate.cpp"

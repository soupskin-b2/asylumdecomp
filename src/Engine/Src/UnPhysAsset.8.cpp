// UnPhysAsset.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00a0bbf0
URB_ConstraintInstance* UPhysicsAssetInstance::FindConstraintInstance(FName ConName, UPhysicsAsset* InAsset)
{
    if (InAsset && InAsset->ConstraintSetup.Num() == Constraints.Num())
    {
        INT ConIndex = InAsset->FindConstraintIndex(ConName);
        if (ConIndex != INDEX_NONE)
        {
            return Constraints(ConIndex);
        }
    }

    return NULL;
}

#line 48 "candidate.cpp"

// @baa 0x00a23610
URB_BodyInstance* UPhysicsAssetInstance::FindBodyInstance(FName BodyName, UPhysicsAsset* InAsset)
{
    if (InAsset && InAsset->BodySetup.Num() == Bodies.Num())
    {
        INT BodyIndex = ((UPhysicsAsset*)InAsset)->FindBodyIndex(BodyName);
        if (BodyIndex != INDEX_NONE)
        {
            return Bodies(BodyIndex);
        }
    }

    return NULL;
}

// @baa 0x00a099c0
FName UPhysicsAsset::FindConstraintBoneName(INT ConstraintIndex)
{
#line 415 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysAsset.cpp"
    check(ConstraintSetup.Num() == DefaultInstance->Constraints.Num());

    if (ConstraintIndex < 0 || ConstraintIndex >= ConstraintSetup.Num())
    {
        return NAME_None;
    }

    return ConstraintSetup(ConstraintIndex)->JointName;
}

#line 91 "candidate.cpp"

/* TArray<FName>::FindItemIndex, which the exe keeps out of line (00546020). */
struct FNameFindArray : public TArray<FName> {
    INT sub_00546020(const FName& Item) const;
    INT FindItemIndex(const FName& Item) const { return sub_00546020(Item); }
};

// @baa 0x00a0b610
void UPhysicsAssetInstance::SetNamedMotorsAngularPositionDrive(UBOOL bEnableSwingDrive, UBOOL bEnableTwistDrive, const TArray<FName>& BoneNames, USkeletalMeshComponent* SkelMeshComp, UBOOL bSetOtherBodiesToComplement)
{
    if (!SkelMeshComp || !SkelMeshComp->PhysicsAsset || SkelMeshComp->PhysicsAssetInstance != this)
    {
        return;
    }

    for (INT i = 0; i < Constraints.Num(); i++)
    {
        URB_ConstraintSetup* CS = SkelMeshComp->PhysicsAsset->ConstraintSetup(Constraints(i)->ConstraintIndex);
        if (CS)
        {
            if (BoneNames.FindItemIndex(CS->JointName) != INDEX_NONE)
            {
                Constraints(i)->SetAngularPositionDrive(bEnableSwingDrive, bEnableTwistDrive);
            }
            else if (bSetOtherBodiesToComplement)
            {
                Constraints(i)->SetAngularPositionDrive(!bEnableSwingDrive, !bEnableTwistDrive);
            }
        }
    }
}

// @baa 0x00a0b780
void UPhysicsAssetInstance::SetNamedMotorsAngularVelocityDrive(UBOOL bEnableSwingDrive, UBOOL bEnableTwistDrive, const TArray<FName>& BoneNames, USkeletalMeshComponent* SkelMeshComp, UBOOL bSetOtherBodiesToComplement)
{
    if (!SkelMeshComp || !SkelMeshComp->PhysicsAsset || SkelMeshComp->PhysicsAssetInstance != this)
    {
        return;
    }

    for (INT i = 0; i < Constraints.Num(); i++)
    {
        URB_ConstraintSetup* CS = SkelMeshComp->PhysicsAsset->ConstraintSetup(Constraints(i)->ConstraintIndex);
        if (CS)
        {
            if (BoneNames.FindItemIndex(CS->JointName) != INDEX_NONE)
            {
                Constraints(i)->SetAngularVelocityDrive(bEnableSwingDrive, bEnableTwistDrive); // SetAngularVelocityDrive
            }
            else if (bSetOtherBodiesToComplement)
            {
                Constraints(i)->SetAngularVelocityDrive(!bEnableSwingDrive, !bEnableTwistDrive);
            }
        }
    }
}

// @baa 0x00a23350
void UPhysicsAssetInstance::SetAllMotorsAngularVelocityDrive(UBOOL bEnableSwingDrive, UBOOL bEnableTwistDrive, USkeletalMeshComponent* SkelMeshComp, UBOOL bSkipFullAnimWeightBodies)
{
    if (!SkelMeshComp || !SkelMeshComp->PhysicsAsset || SkelMeshComp->PhysicsAssetInstance != this)
    {
        return;
    }

    for (INT i = 0; i < Constraints.Num(); i++)
    {
        if (bSkipFullAnimWeightBodies)
        {
            const INT BodyIndex = SkelMeshComp->PhysicsAsset->FindBodyIndex(SkelMeshComp->PhysicsAsset->ConstraintSetup(i)->JointName); // FindBodyIndex
            if (SkelMeshComp->PhysicsAsset->BodySetup(BodyIndex)->bAlwaysFullAnimWeight)
            {
                continue;
            }
        }

        Constraints(i)->SetAngularVelocityDrive(bEnableSwingDrive, bEnableTwistDrive); // SetAngularVelocityDrive
    }
}

// UnPhysAsset.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

// @baa 0x00a0bbf0
URB_ConstraintInstance* UPhysicsAssetInstance::FindConstraintInstance(FName ConName, UPhysicsAsset* InAsset)
{
    if (InAsset && InAsset->ConstraintSetup.Num() == Constraints.Num())
    {
        INT ConIndex = InAsset->FindConstraintIndex(ConName);
        if (ConIndex != INDEX_NONE)
        {
            return ((TArrayAt_<URB_ConstraintInstance*>&)Constraints).At(ConIndex);
        }
    }

    return NULL;
}

#line 48 "candidate.cpp"

struct UPhysicsAsset__00a23610 : public UPhysicsAsset {
    INT FindBodyIndex(FName BodyName); // 00a231b0
};

// @baa 0x00a23610
URB_BodyInstance* UPhysicsAssetInstance::FindBodyInstance(FName BodyName, UPhysicsAsset* InAsset)
{
    if (InAsset && InAsset->BodySetup.Num() == Bodies.Num())
    {
        INT BodyIndex = ((UPhysicsAsset__00a23610*)InAsset)->FindBodyIndex(BodyName);
        if (BodyIndex != INDEX_NONE)
        {
            return ((TArrayAt_<URB_BodyInstance*>&)Bodies).At(BodyIndex);
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

    return ((TArrayAt_<URB_ConstraintSetup*>&)ConstraintSetup).At(ConstraintIndex)->JointName;
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
        URB_ConstraintSetup* CS = ((TArrayAt_<URB_ConstraintSetup*>&)SkelMeshComp->PhysicsAsset->ConstraintSetup).At(((TArrayAt_<URB_ConstraintInstance*>&)Constraints).At(i)->ConstraintIndex);
        if (CS)
        {
            if (((const FNameFindArray&)BoneNames).FindItemIndex(CS->JointName) != INDEX_NONE)
            {
                ((TArrayAt_<URB_ConstraintInstance*>&)Constraints).At(i)->SetAngularPositionDrive(bEnableSwingDrive, bEnableTwistDrive);
            }
            else if (bSetOtherBodiesToComplement)
            {
                ((TArrayAt_<URB_ConstraintInstance*>&)Constraints).At(i)->SetAngularPositionDrive(!bEnableSwingDrive, !bEnableTwistDrive);
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
        URB_ConstraintSetup* CS = ((TArrayAt_<URB_ConstraintSetup*>&)SkelMeshComp->PhysicsAsset->ConstraintSetup).At(((TArrayAt_<URB_ConstraintInstance*>&)Constraints).At(i)->ConstraintIndex);
        if (CS)
        {
            if (((const FNameFindArray&)BoneNames).FindItemIndex(CS->JointName) != INDEX_NONE)
            {
                ((TArrayAt_<URB_ConstraintInstance*>&)Constraints).At(i)->sub_00a39310(bEnableSwingDrive, bEnableTwistDrive); // SetAngularVelocityDrive
            }
            else if (bSetOtherBodiesToComplement)
            {
                ((TArrayAt_<URB_ConstraintInstance*>&)Constraints).At(i)->sub_00a39310(!bEnableSwingDrive, !bEnableTwistDrive);
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
            const INT BodyIndex = SkelMeshComp->PhysicsAsset->sub_00a231b0(((TArrayAt_<URB_ConstraintSetup*>&)SkelMeshComp->PhysicsAsset->ConstraintSetup).At(i)->JointName); // FindBodyIndex
            if (((TArrayAt_<URB_BodySetup*>&)SkelMeshComp->PhysicsAsset->BodySetup).At(BodyIndex)->bAlwaysFullAnimWeight)
            {
                continue;
            }
        }

        ((TArrayAt_<URB_ConstraintInstance*>&)Constraints).At(i)->sub_00a39310(bEnableSwingDrive, bEnableTwistDrive); // SetAngularVelocityDrive
    }
}

// UnSkeletalComponent.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"

FORCEINLINE FVector USkeletalMeshComponent::GetBoneLocation(FName BoneName, INT Space)
{
    const INT BoneIndex = MatchRefBone(BoneName);
    if (BoneIndex == INDEX_NONE)
    {
        return FVector(0.f, 0.f, 0.f);
    }

    if (Space == 1)
    {
        if (BoneIndex < SpaceBases.Num())
        {
            return ((const FMatrix&)SpaceBases(BoneIndex)).GetOrigin();
        }
    }
    else if (Space == 2)
    {
        if (BoneIndex < PrePhysicsSpaceBases.Num())
        {
            return ((const FMatrix&)PrePhysicsSpaceBases(BoneIndex)).GetOrigin();
        }
    }
    else
    {
        return ((const FMatrix&)GetBoneMatrix(BoneIndex)).GetOrigin();
    }

    return FVector(0.f, 0.f, 0.f);
}

FORCEINLINE FLOAT SizeSquared(const FVector& V) { return V.X*V.X + V.Y*V.Y + V.Z*V.Z; }

// @baa 0x0091ef60
void USkeletalMeshComponent::execGetClosestCollidingBoneLocation(FFrame& Stack, RESULT_DECL)
{
    P_GET_VECTOR(TestLocation);
    P_GET_UBOOL(bCheckZeroExtent);
    P_GET_UBOOL(bCheckNonZeroExtent);
    P_FINISH;

    // GetClosestCollidingBoneLocation, inlined: the bone nearest TestLocation whose body blocks the given traces
    FLOAT CurrentClosestDist = BIG_NUMBER;
    FVector CurrentClosestLocation(0.f, 0.f, 0.f);
    if (PhysicsAsset)
    {
        for (INT i = 0; i < PhysicsAsset->BodySetup.Num(); i++)
        {
            if ((bCheckZeroExtent && PhysicsAsset->BodySetup(i)->bBlockZeroExtent) ||
                (bCheckNonZeroExtent && PhysicsAsset->BodySetup(i)->bBlockNonZeroExtent))
            {
                const FVector BoneLoc = this->GetBoneLocation(PhysicsAsset->BodySetup(i)->BoneName);
                const FLOAT Dist = SizeSquared(BoneLoc - TestLocation);
                if (Dist < CurrentClosestDist)
                {
                    CurrentClosestLocation = BoneLoc;
                    CurrentClosestDist = Dist;
                }
            }
        }
    }
    *(FVector*)Result = CurrentClosestLocation;
}

#line 121 "candidate.cpp"

// @baa 0x0091dd40
void USkeletalMeshComponent::execFindComponentAttachedToBone(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(InBoneName);
    P_FINISH;

    // FindComponentAttachedToBone, inlined
    UActorComponent* FoundComponent = NULL;
    if (!(InBoneName == NAME_None))
    {
        for (INT i = 0; i < Attachments.Num(); i++)
        {
            if (Attachments(i).BoneName == InBoneName)
            {
                FoundComponent = Attachments(i).Component;
                break;
            }
        }
    }
    *(UActorComponent**)Result = FoundComponent;
}

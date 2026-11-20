// UnSkeletalComponent.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

inline UBOOL operator==(const FName& A, EName B) { return A.Index == B && A.Number == 0; }

// @baa 0x0091d930
/* search the morph target sets newest first */
UMorphTarget* USkeletalMeshComponent::FindMorphTarget(FName MorphTargetName)
{
    if (MorphTargetName == NAME_None)
    {
        return NULL;
    }
    for (INT i = MorphSets.Num() - 1; i >= 0; i--)
    {
        if (MorphSets(i))
        {
            UMorphTarget* Target = MorphSets(i)->FindMorphTarget(MorphTargetName);
            if (Target)
            {
                return Target;
            }
        }
    }
    return NULL;
}

// @baa 0x0090f3d0
/* name guessed: whether the ragdoll calming code is switched off, for real or for debugging */
UBOOL USkeletalMeshComponent::AreRagdollCalmingMeasuresDisabled() const
{
    return bDisableRagdollCalmingMeasures || bDebugDisableRagdollCalmingMeasures;
}

// @baa 0x0090f440
/* name guessed from the field it sets */
void USkeletalMeshComponent::SetDisableRagdollCalmingMeasures(UBOOL bDisable)
{
    bDisableRagdollCalmingMeasures = bDisable;
}

// @baa 0x0090f550
/* name guessed: park the physics asset instance in CachedPhysicsAssetInstance, or bring it back */
void USkeletalMeshComponent::SetPhysicsAssetInstanceCached(UBOOL bCache)
{
#line 7164 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalComponent.cpp"
    check( ( PhysicsAssetInstance == NULL ) || ( CachedPhysicsAssetInstance == NULL ) );

    if (bCache)
    {
        if (CachedPhysicsAssetInstance == NULL)
        {
            CachedPhysicsAssetInstance = PhysicsAssetInstance;
            PhysicsAssetInstance = NULL;
        }
    }
    else
    {
        if (PhysicsAssetInstance == NULL)
        {
            PhysicsAssetInstance = CachedPhysicsAssetInstance;
            CachedPhysicsAssetInstance = NULL;
        }
    }
}

#line 90 "candidate.cpp"

inline UBOOL operator!=(const FName& A, EName B) { return A.Index != B || A.Number != 0; }

// @baa 0x0091da00
UBOOL USkeletalMeshComponent::GetSocketWorldLocationAndRotation(FName InSocketName, FVector& OutLocation, FRotator* OutRotation)
{
    if (SkeletalMesh)
    {
        USkeletalMeshSocket* Socket = SkeletalMesh->FindSocket(InSocketName);
        if (Socket)
        {
            const INT BoneIndex = MatchRefBone(Socket->BoneName);
            if (BoneIndex != INDEX_NONE)
            {
                FMatrix BoneMatrix = GetBoneMatrix(BoneIndex);
                FRotationTranslationMatrix SocketMatrix(Socket->RelativeRotation, Socket->RelativeLocation);
                FMatrix SocketWorldMatrix = SocketMatrix * BoneMatrix;

                OutLocation = SocketWorldMatrix.GetOrigin();
                if (OutRotation)
                {
                    *OutRotation = SocketWorldMatrix.Rotator();
                }
                return TRUE;
            }
        }
    }

    FVector Zero;
    Zero.X = Zero.Y = Zero.Z = 0.f;
    OutLocation = Zero;
    if (OutRotation)
    {
        *OutRotation = FRotator(0, 0, 0);
    }
    return FALSE;
}

// @baa 0x0091d2a0
/* world-space matrix of a bone; with a parent anim component in mode 0 the bone is looked up there */
FMatrix USkeletalMeshComponent::GetBoneMatrix(INT BoneIndex)
{
    if (ParentAnimComponent && ParentAnimComponentMode == 0)
    {
        if ((UINT)BoneIndex < (UINT)ParentBoneMap.Num())
        {
            const INT ParentBoneIndex = ((const TArray<INT>&)ParentBoneMap)(BoneIndex);
            if (ParentBoneIndex != INDEX_NONE && ParentBoneIndex < ParentAnimComponent->SpaceBases.Num())
            {
                return (const FMatrix&)ParentAnimComponent->SpaceBases(ParentBoneIndex) * LocalToWorld;
            }
        }
        return FMatrix::Identity;
    }
    else
    {
        if (SpaceBases.Num() != 0 && (UINT)BoneIndex < (UINT)SpaceBases.Num())
        {
            return (const FMatrix&)((const TArray<FMatrix>&)SpaceBases)(BoneIndex) * LocalToWorld;
        }
        return FMatrix::Identity;
    }
}

#line 229 "candidate.cpp"

// @baa 0x0091e3a0
/* Space 0 = world, 1 = component (SpaceBases), 2 = component before physics (PrePhysicsSpaceBases) */
FVector USkeletalMeshComponent::GetBoneLocation(FName BoneName, INT Space)
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

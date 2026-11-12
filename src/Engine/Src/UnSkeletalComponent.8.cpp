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

struct USkeletalMeshComponent__0090f3d0 : public USkeletalMeshComponent
{
    UBOOL AreRagdollCalmingMeasuresDisabled() const;
};

// @baa 0x0090f3d0
/* name guessed: whether the ragdoll calming code is switched off, for real or for debugging */
UBOOL USkeletalMeshComponent__0090f3d0::AreRagdollCalmingMeasuresDisabled() const
{
    return bDisableRagdollCalmingMeasures || bDebugDisableRagdollCalmingMeasures;
}

struct USkeletalMeshComponent__0090f440 : public USkeletalMeshComponent
{
    void SetDisableRagdollCalmingMeasures(UBOOL bDisable);
};

// @baa 0x0090f440
/* name guessed from the field it sets */
void USkeletalMeshComponent__0090f440::SetDisableRagdollCalmingMeasures(UBOOL bDisable)
{
    bDisableRagdollCalmingMeasures = bDisable;
}

struct USkeletalMeshComponent__0090f550 : public USkeletalMeshComponent
{
    void SetPhysicsAssetInstanceCached(UBOOL bCache);
};

// @baa 0x0090f550
/* name guessed: park the physics asset instance in CachedPhysicsAssetInstance, or bring it back */
void USkeletalMeshComponent__0090f550::SetPhysicsAssetInstanceCached(UBOOL bCache)
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

/* FMatrix methods (UnMath.h); the kit's FMatrix has none. operator* (0x0058e560) and Rotator (0x005c3fc0)
 * are out of line. */
struct FMatrix_ : public FMatrix
{
    FMatrix operator*(const FMatrix& Other) const;
    FRotator Rotator() const;
    FVector GetOrigin() const
    {
        FVector Result;
        Result.X = WPlane.X;
        Result.Y = WPlane.Y;
        Result.Z = WPlane.Z;
        return Result;
    }
};

/* FRotationTranslationMatrix (UnMath.h); constructor out of line at 0x0058f1b0. */
class FRotationTranslationMatrix : public FMatrix_
{
public:
    FRotationTranslationMatrix(const FRotator& Rot, const FVector& Origin);
};

/* USkeletalMesh::FindSocket (0x00951be0) and MatchRefBone (0x00976be0) aren't declared in Classes.h. */

/* FRotator(INT,INT,INT) (UnMath.h) */
struct FRotator_ : public FRotator
{
    FRotator_(INT InPitch, INT InYaw, INT InRoll) { Pitch = InPitch; Yaw = InYaw; Roll = InRoll; }
};

inline UBOOL operator!=(const FName& A, EName B) { return A.Index != B || A.Number != 0; }

struct USkeletalMeshComponent__0091da00 : public USkeletalMeshComponent
{
    UBOOL GetSocketWorldLocationAndRotation(FName InSocketName, FVector& OutLocation, FRotator* OutRotation);
};

// @baa 0x0091da00
UBOOL USkeletalMeshComponent__0091da00::GetSocketWorldLocationAndRotation(FName InSocketName, FVector& OutLocation, FRotator* OutRotation)
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

                OutLocation = ((const FMatrix_&)SocketWorldMatrix).GetOrigin();
                if (OutRotation)
                {
                    *OutRotation = ((const FMatrix_&)SocketWorldMatrix).Rotator();
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
        *OutRotation = FRotator_(0, 0, 0);
    }
    return FALSE;
}

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

/* FMatrix::operator* (UnMath.h, out of line at 0x0058e560); the kit's FMatrix has no methods. */
struct FMatrix__0091d2a0 : public FMatrix
{
    FMatrix operator*(const FMatrix& Other) const;
};

// @baa 0x0091d2a0
/* world-space matrix of a bone; with a parent anim component in mode 0 the bone is looked up there */
FMatrix USkeletalMeshComponent::GetBoneMatrix(INT BoneIndex)
{
    if (ParentAnimComponent && ParentAnimComponentMode == 0)
    {
        if ((UINT)BoneIndex < (UINT)ParentBoneMap.Num())
        {
            const INT ParentBoneIndex = ((const TArrayAt_<INT>&)ParentBoneMap).At(BoneIndex);
            if (ParentBoneIndex != INDEX_NONE && ParentBoneIndex < ParentAnimComponent->SpaceBases.Num())
            {
                return (const FMatrix__0091d2a0&)((TArrayAt_<FMatrix>&)ParentAnimComponent->SpaceBases).At(ParentBoneIndex) * LocalToWorld;
            }
        }
        return FMatrix::Identity;
    }
    else
    {
        if (SpaceBases.Num() != 0 && (UINT)BoneIndex < (UINT)SpaceBases.Num())
        {
            return (const FMatrix__0091d2a0&)((const TArrayAt_<FMatrix>&)SpaceBases).At(BoneIndex) * LocalToWorld;
        }
        return FMatrix::Identity;
    }
}

#line 229 "candidate.cpp"

/* USkeletalMesh::MatchRefBone (0x00976be0) isn't declared in Classes.h. */

/* FMatrix::GetOrigin (UnMath.h) */
struct FMatrix__0091e3a0 : public FMatrix
{
    FVector GetOrigin() const { return FVector(WPlane.X, WPlane.Y, WPlane.Z); }
};

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
            return ((const FMatrix__0091e3a0&)((TArrayAt_<FMatrix>&)SpaceBases).At(BoneIndex)).GetOrigin();
        }
    }
    else if (Space == 2)
    {
        if (BoneIndex < PrePhysicsSpaceBases.Num())
        {
            return ((const FMatrix__0091e3a0&)((TArrayAt_<FMatrix>&)PrePhysicsSpaceBases).At(BoneIndex)).GetOrigin();
        }
    }
    else
    {
        return ((const FMatrix__0091e3a0&)GetBoneMatrix(BoneIndex)).GetOrigin();
    }

    return FVector(0.f, 0.f, 0.f);
}

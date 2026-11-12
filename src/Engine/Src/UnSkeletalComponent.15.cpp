// UnSkeletalComponent.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"

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

/* USkeletalMesh::MatchRefBone (0x00976be0) isn't declared in Classes.h. */
struct USkeletalMesh_ : public USkeletalMesh
{
    INT MatchRefBone(FName BoneName) const;
};

/* FMatrix::GetOrigin (UnMath.h) */
struct FMatrix_ : public FMatrix
{
    FVector GetOrigin() const { return FVector(WPlane.X, WPlane.Y, WPlane.Z); }
};

inline UBOOL operator!=(const FName& A, EName B) { return A.Index != B || A.Number != 0; }

struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
    INT MatchRefBone(FName BoneName) const
    {
        INT BoneIndex = INDEX_NONE;
        if (BoneName != NAME_None && SkeletalMesh)
        {
            BoneIndex = ((USkeletalMesh_*)SkeletalMesh)->MatchRefBone(BoneName);
        }
        return BoneIndex;
    }
    FVector GetBoneLocation(FName BoneName, INT Space = 0); /* 0x0091e3a0, inlined here */
};

FORCEINLINE FVector USkeletalMeshComponent_::GetBoneLocation(FName BoneName, INT Space)
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
            return ((const FMatrix_&)((TArrayAt_<FMatrix>&)SpaceBases).At(BoneIndex)).GetOrigin();
        }
    }
    else if (Space == 2)
    {
        if (BoneIndex < PrePhysicsSpaceBases.Num())
        {
            return ((const FMatrix_&)((TArrayAt_<FMatrix>&)PrePhysicsSpaceBases).At(BoneIndex)).GetOrigin();
        }
    }
    else
    {
        return ((const FMatrix_&)GetBoneMatrix(BoneIndex)).GetOrigin();
    }

    return FVector(0.f, 0.f, 0.f);
}

#define BIG_NUMBER (3.4e+38f)
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
            if ((bCheckZeroExtent && ((TArrayAt_<URB_BodySetup*>&)PhysicsAsset->BodySetup).At(i)->bBlockZeroExtent) ||
                (bCheckNonZeroExtent && ((TArrayAt_<URB_BodySetup*>&)PhysicsAsset->BodySetup).At(i)->bBlockNonZeroExtent))
            {
                const FVector BoneLoc = ((USkeletalMeshComponent_*)this)->GetBoneLocation(((TArrayAt_<URB_BodySetup*>&)PhysicsAsset->BodySetup).At(i)->BoneName);
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

inline UBOOL operator==(const FName& A, EName B) { return A.Index == B && A.Number == 0; }

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
            if (((TArrayAt_<FAttachment>&)Attachments).At(i).BoneName == InBoneName)
            {
                FoundComponent = ((TArrayAt_<FAttachment>&)Attachments).At(i).Component;
                break;
            }
        }
    }
    *(UActorComponent**)Result = FoundComponent;
}

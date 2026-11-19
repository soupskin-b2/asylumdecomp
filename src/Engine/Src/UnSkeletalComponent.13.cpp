// UnSkeletalComponent.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct FMatrix_ : public FMatrix
{
    FORCEINLINE FVector GetAxis(INT i) const
    {
        const FPlane& P = (&XPlane)[i];
        return FVector(P.X, P.Y, P.Z);
    }
    FORCEINLINE void SetAxis(INT i, const FVector& Axis)
    {
        FPlane& P = (&XPlane)[i];
        P.X = Axis.X;
        P.Y = Axis.Y;
        P.Z = Axis.Z;
    }
    FORCEINLINE FVector GetOrigin() const { return FVector(WPlane.X, WPlane.Y, WPlane.Z); }
    FORCEINLINE void SetOrigin(const FVector& NewOrigin) { WPlane.X = NewOrigin.X; WPlane.Y = NewOrigin.Y; WPlane.Z = NewOrigin.Z; }
};


// @baa 0x0091a110
/* name guessed: rebuild the twist bone from its base bone, keeping the twist angle measured at init */
void FTwistBoneFixer::Apply(TArray<FMatrix>& SpaceBases)
{
    FMatrix_& TwistTM = (FMatrix_&)SpaceBases(TwistBoneIndex);
    const FMatrix_& BaseTM = (const FMatrix_&)SpaceBases(BaseBoneIndex);

    TwistTM.SetAxis(0, BaseTM.GetAxis(0));
    TwistTM.SetAxis(1, BaseTM.GetAxis(1) * BaseYDotTwistY - BaseTM.GetAxis(2) * BaseYDotTwistZ);
    TwistTM.SetAxis(2, BaseTM.GetAxis(1) * BaseYDotTwistZ + BaseTM.GetAxis(2) * BaseYDotTwistY);
    TwistTM.SetOrigin(BaseTM.GetOrigin());
}

#line 68 "candidate.cpp"

class FSceneInterface;
/* FComponentReattachContext (UnActorComponent.h): detaches a component and reattaches it when it goes out
 * of scope. Not in the kit; constructor 0x00663370 and destructor 0x0064b6e0 are out of line. */
class FComponentReattachContext
{
public:
    FComponentReattachContext(UActorComponent* InComponent);
    ~FComponentReattachContext();
private:
    UActorComponent* Component;
    FSceneInterface* Scene;
    AActor* Owner;
};


// @baa 0x0091d830
void USkeletalMeshComponent::SetForceWireframe(UBOOL InForceWireframe)
{
    if (bForceWireframe != InForceWireframe)
    {
        bForceWireframe = InForceWireframe;
        FComponentReattachContext ReattachContext(this);
    }
}

/* slot 0x25c (vf_25c) is UMeshComponent::GetMaterial(INT ElementIndex) */
struct USkeletalMeshComponent__0091cdd0 : public USkeletalMeshComponent
{
    UMaterialInterface* GetMaterial(INT MaterialIndex) const;
};

// @baa 0x0091cdd0
/* the component's override if set, else the mesh's material, else NULL */
UMaterialInterface* USkeletalMeshComponent__0091cdd0::GetMaterial(INT MaterialIndex) const
{
    if (MaterialIndex < Materials.Num() && Materials(MaterialIndex))
    {
        return Materials(MaterialIndex);
    }
    else if (SkeletalMesh && MaterialIndex < SkeletalMesh->Materials.Num() && SkeletalMesh->Materials(MaterialIndex))
    {
        return SkeletalMesh->Materials(MaterialIndex);
    }
    else
    {
        return NULL;
    }
}

inline UBOOL operator==(const FName& A, EName B) { return A.Index == B && A.Number == 0; }

// @baa 0x0091d860
/* search the AnimSets from last to first, so later sets override earlier ones */
UAnimSequence* USkeletalMeshComponent::FindAnimSequence(FName AnimSeqName)
{
    if (AnimSeqName == NAME_None)
    {
        return NULL;
    }

    for (INT i = AnimSets.Num() - 1; i >= 0; i--)
    {
        if (AnimSets(i))
        {
            UAnimSequence* Seq = AnimSets(i)->FindAnimSequence(AnimSeqName);
            if (Seq)
            {
                return Seq;
            }
        }
    }

    return NULL;
}

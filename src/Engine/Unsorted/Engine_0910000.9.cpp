// Engine_0910000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap: the natives behind execSetDepthBias (0091f940) and execSetDisableColourWrites (0091fa30) aren't declared. */

// @baa 0x009145b0
/* Pushes the depth bias and colour-write settings to the scene proxy, once they've left their defaults. */
void USkeletalMeshComponent::UpdateSceneProxy()
{
	bNeedsProxyUpdate = bNeedsProxyUpdate || DepthBias != 0.f || bDisableColourWrites;
	if (bNeedsProxyUpdate)
	{
		this->SetDepthBias(DepthBias, DepthBiasData);
		this->SetDisableColourWrites(bDisableColourWrites);
	}
}

// @baa 0x0091aa40
/* The detailed info of the SkeletalMesh, or "No_SkeletalMesh". */
FString USkeletalMeshComponent::GetDetailedInfoInternal()
{
    FString Result;
    if (SkeletalMesh != NULL)
    {
        Result = SkeletalMesh->GetDetailedInfoInternal();
    }
    else
    {
        Result = TEXT("No_SkeletalMesh");
    }
    return Result;
}

struct FInt2_ {
    int X;
    int Y;
};

struct FInt3_ {
    int X;
    int Y;
    int Z;

    FInt3_ *sub_00910410(const FInt2_ *Source);
};

// @baa 0x00910410
FInt3_ *FInt3_::sub_00910410(const FInt2_ *Source)
{
    X = Source->X;
    Y = Source->Y;
    Z = -1;
    return this;
}

static void sub_00000000()
{
    FInt3_ P;
    FInt2_ Q;
    P.sub_00910410(&Q);
}

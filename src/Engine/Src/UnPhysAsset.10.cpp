// UnPhysAsset.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x009f9a40
void URB_BodyInstance::sub_009f9a40(const URB_BodyInstance* FromInst)
{
    bEnableBoneSpringLinear = FromInst->bEnableBoneSpringLinear;
    bEnableBoneSpringAngular = FromInst->bEnableBoneSpringAngular;
    bDisableOnOverextension = FromInst->bDisableOnOverextension;
    BoneLinearSpring = FromInst->BoneLinearSpring;
    BoneLinearDamping = FromInst->BoneLinearDamping;
    BoneAngularSpring = FromInst->BoneAngularSpring;
    BoneAngularDamping = FromInst->BoneAngularDamping;
    OverextensionThreshold = FromInst->OverextensionThreshold;
    bEnableCollisionResponse = FromInst->bEnableCollisionResponse;
    bPushBody = FromInst->bPushBody;
    bTeleportOnOverextension = FromInst->bTeleportOnOverextension;
    bUseKinActorForBoneSpring = FromInst->bUseKinActorForBoneSpring;
    bMakeSpringToBaseCollisionComponent = FromInst->bMakeSpringToBaseCollisionComponent;
    bOnlyCollideWithPawns = FromInst->bOnlyCollideWithPawns;
    PhysMaterialOverride = FromInst->PhysMaterialOverride;
    ContactReportForceThreshold = FromInst->ContactReportForceThreshold;
    InstanceMassScale = FromInst->InstanceMassScale;
    InstanceDampingScale = FromInst->InstanceDampingScale;
    bPawnCollisionOnly = FromInst->bPawnCollisionOnly;
    bNoPawnCollision = FromInst->bNoPawnCollision;
}

/* Kit gaps: UPhysicsAsset::UpdateBoundsBodiesArray / UpdateBodySetupIndexMap (UnPhysAsset.cpp) aren't declared, and
 * BodySetupIndexMap is only an FMap_Mirror, so its Num() (element count minus free slots) is spelled out. */
struct UPhysicsAsset_ : public UPhysicsAsset
{

	FORCEINLINE INT BodySetupIndexMapNum() const
	{
		return BodySetupIndexMap.Pairs.Elements.Elements.Num() - BodySetupIndexMap.Pairs.Elements.NumFreeIndices;
	}
};

// @baa 0x00a2ca30
void UPhysicsAsset::PostLoad()
{
	Super::PostLoad();

	UPhysicsAsset_* This = (UPhysicsAsset_*)this;

	// Ensure array of bounds bodies is up to date.
	if (BoundsBodies.Num() == 0)
	{
		This->UpdateBoundsBodiesArray();
	}

	if (BodySetup.Num() > 0 && This->BodySetupIndexMapNum() == 0)
	{
		This->UpdateBodySetupIndexMap();
	}
}

// @baa 0x00a0b380
/* UE3's UPhysicsAssetInstance::SetAllBodiesFixed: fix or unfix every body of the instance. */
void UPhysicsAssetInstance::SetAllBodiesFixed(UBOOL bNewFixed)
{
    for (INT i = 0; i < Bodies.Num(); i++)
    {
        Bodies(i)->SetFixed(bNewFixed);
    }
}

// @baa 0x00a2d190
/* UE3's URB_BodySetup::CopyBodyPropertiesFrom: take over another body's geometry and physical settings. */
void URB_BodySetup::CopyBodyPropertiesFrom(URB_BodySetup* FromSetup)
{
    this->CopyMeshPropsFrom(FromSetup);
    PhysMaterial = FromSetup->PhysMaterial;
    COMNudge = FromSetup->COMNudge;
    GroupName = FromSetup->GroupName;
    bFixed = FromSetup->bFixed;
    bNoCollision = FromSetup->bNoCollision;
    bPawnCollisionOnly = FromSetup->bPawnCollisionOnly;
    bNoPawnCollision = FromSetup->bNoPawnCollision;
    bBlockNonZeroExtent = FromSetup->bBlockNonZeroExtent;
    bBlockZeroExtent = FromSetup->bBlockZeroExtent;
    bEnableContinuousCollisionDetection = FromSetup->bEnableContinuousCollisionDetection;
    bUseSingleVertCCDSkeleton = FromSetup->bUseSingleVertCCDSkeleton;
    MinCCDSpeedThreshold = FromSetup->MinCCDSpeedThreshold;
    bAlwaysFullAnimWeight = FromSetup->bAlwaysFullAnimWeight;
    MassScale = FromSetup->MassScale;
    SleepFamily = FromSetup->SleepFamily;
}

// @baa 0x00a2d130
/* UE3's UPhysicsAsset::ClearShapeCaches: drop every body's cached physics shapes. */
void UPhysicsAsset::ClearShapeCaches()
{
    for (INT i = 0; i < BodySetup.Num(); i++)
    {
        ((URB_BodySetup*)BodySetup(i))->ClearShapeCache();
    }
}

// @baa 0x00a17b50
FString UPhysicsAsset::GetDesc()
{
	return FString::Printf(TEXT("%d Bodies, %d Constraints"), BodySetup.Num(), ConstraintSetup.Num());
}

/* Kit gap: FString::Printf (0x005488a0) isn't declared. */
struct FString__00a17b80 : public FString
{
	static FString Printf(const TCHAR* Fmt, ...);
};

// @baa 0x00a17b80
/* The lines under the asset's thumbnail in the browser. */
FString UPhysicsAsset::GetDetailedDescription(INT InIndex)
{
	FString Description = TEXT("");
	switch (InIndex)
	{
	case 0:
		Description = FString__00a17b80::Printf(TEXT("%d Bodies"), BodySetup.Num());
		break;
	case 1:
		Description = FString__00a17b80::Printf(TEXT("%d Constraints"), ConstraintSetup.Num());
		break;
	}
	return Description;
}

// UnPhysAsset.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Unnamed in the kit: UE3's URB_BodyInstance::CopyBodyInstancePropertiesFrom(const URB_BodyInstance* FromInst). */
struct URB_BodyInstance_ : public URB_BodyInstance
{
    void sub_009f9a40(const URB_BodyInstance* FromInst);
};

// @baa 0x009f9a40
void URB_BodyInstance_::sub_009f9a40(const URB_BodyInstance* FromInst)
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
	void UpdateBoundsBodiesArray(); // 00a17a10
	void UpdateBodySetupIndexMap(); // 00a2c950

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

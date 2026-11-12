// UnPhysAsset.cpp: 1 function
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

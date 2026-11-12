// UnPhysComponent.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00a11060
/* UE3's UPrimitiveComponent::SetComponentRBFixed(UBOOL bFixed): forwarded to the body instance
 * (URB_BodyInstance::sub_00a09ca0, UE3's SetFixed). */
void UPrimitiveComponent::SetComponentRBFixed(UBOOL bFixed)
{
    if (BodyInstance)
    {
        BodyInstance->sub_00a09ca0(bFixed);
    }
}

/* Unnamed in the kit: UE3's UPrimitiveComponent::SetRBChannel(ERBCollisionChannel Channel) (execSetRBChannel's
 * native); slot 0x20c is UE3's UpdatePhysicsToRBChannels(). */
struct UPrimitiveComponent_ : public UPrimitiveComponent
{
    void sub_009ff950(BYTE Channel);
};

// @baa 0x009ff950
void UPrimitiveComponent_::sub_009ff950(BYTE Channel)
{
    RBChannel = Channel;
    vf_20c();
}

/* Unnamed in the kit: UE3's FRBCollisionChannelContainer::SetChannel(ERBCollisionChannel Channel, UBOOL bNewState)
 * (UnPhysPublic.h). */
struct FRBCollisionChannelContainer_ : public FRBCollisionChannelContainer
{
    void sub_00a33b40(INT Channel, UBOOL bNewState);
};

// @baa 0x009ff970
/* UE3's UPrimitiveComponent::SetRBCollidesWithChannel(ERBCollisionChannel Channel, UBOOL bNewCollides); slot 0x20c
 * is UE3's UpdatePhysicsToRBChannels(). */
void UPrimitiveComponent::sub_009ff970(INT Channel, INT bNewCollides)
{
    ((FRBCollisionChannelContainer_&)RBCollideWithChannels).sub_00a33b40(Channel, bNewCollides);
    vf_20c();
}

// @baa 0x009feb00
/* UE3's UPrimitiveComponent::SetDisableAllRigidBody(UBOOL bInDisableAllRigidBody) (execSetDisableAllRigidBody's
 * native): tear the physics down (slot 0x13c, UE3 TermComponentRBPhys(FRBPhysScene* InScene)) or, when attached,
 * bring it back (slot 0x134, UE3 InitComponentRBPhys(UBOOL bFixed)). */
void UPrimitiveComponent::sub_009feb00(UBOOL bInDisableAllRigidBody)
{
    if (bInDisableAllRigidBody != bDisableAllRigidBody)
    {
        if (bInDisableAllRigidBody)
        {
            vf_13c(0);
        }
        else if (bAttached && Owner)
        {
            vf_134(Owner->Physics != PHYS_RigidBody);
        }
        bDisableAllRigidBody = bInDisableAllRigidBody;
    }
}

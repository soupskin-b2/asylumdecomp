// UnPhysComponent.cpp: 7 functions
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

// @baa 0x009ff970
/* UE3's UPrimitiveComponent::SetRBCollidesWithChannel(ERBCollisionChannel Channel, UBOOL bNewCollides); slot 0x20c
 * is UE3's UpdatePhysicsToRBChannels(). */
void UPrimitiveComponent::sub_009ff970(INT Channel, INT bNewCollides)
{
    RBCollideWithChannels.sub_00a33b40(Channel, bNewCollides);
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

// @baa 0x00a01dd0
/* URB_RadialImpulseComponent slot 0x114 (kit vf_114, UE3's UpdateTransform()): keep the editor preview sphere's
 * radius in step with the impulse radius. */
void URB_RadialImpulseComponent::vf_114()
{
    Super::vf_114();
    if (PreviewSphere != NULL)
    {
        PreviewSphere->SphereRadius = ImpulseRadius;
    }
}

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
	using TArray<T>::ArrayNum;
	__forceinline T& At(INT i)
	{
#line 560 BAA_ARRAY_FILE
		check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
		return this->GetTypedData()[i];
	}
};

// @baa 0x00a110c0
/* Slot 0x1f4 (unnamed in the kit; UE3's GetNxActor): the physics actor of body BodyIndex (the root body for
 * INDEX_NONE), or of the component's single body when there's no physics asset instance. */
INT USkeletalMeshComponent::vf_1f4(INT BodyIndex)
{
	if (PhysicsAssetInstance)
	{
		if (PhysicsAssetInstance->Bodies.Num() == 0)
		{
			return 0;
		}
#line 1258 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysComponent.cpp"
		check(PhysicsAsset);

		URB_BodyInstance* BodyInst;
		if (BodyIndex == INDEX_NONE)
		{
			BodyInst = ((TArrayAt_<URB_BodyInstance*>&)PhysicsAssetInstance->Bodies).At(PhysicsAssetInstance->RootBodyIndex);
		}
		else
		{
			BodyInst = ((TArrayAt_<URB_BodyInstance*>&)PhysicsAssetInstance->Bodies).At(BodyIndex);
		}
#line 1272 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysComponent.cpp"
		check(BodyInst);
		return BodyInst->BodyData.Dummy;
	}
	else if (BodyInstance)
	{
		return BodyInstance->BodyData.Dummy;
	}
	return 0;
}

#line 127 "candidate.cpp"

// @baa 0x009ff710
/* Slot 0x1f4 (unnamed in the kit; UE3's GetNxActor): the physics actor of the component's body, if any. */
INT UPrimitiveComponent::vf_1f4(INT BodyIndex)
{
	if (BodyInstance)
	{
		return BodyInstance->BodyData.Dummy;
	}
	return 0;
}

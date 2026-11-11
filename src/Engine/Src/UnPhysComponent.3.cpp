// UnPhysComponent.cpp: 14 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
	void ResetClothVertsToRefPose();
	void execResetClothVertsToRefPose(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00a1c7f0
void USkeletalMeshComponent_::execResetClothVertsToRefPose( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ResetClothVertsToRefPose();
}

struct USkeletalMeshComponent__00a21f20 : public USkeletalMeshComponent
{
	void UpdateMeshForBrokenConstraints();
	void execUpdateMeshForBrokenConstraints(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00a21f20
void USkeletalMeshComponent__00a21f20::execUpdateMeshForBrokenConstraints( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdateMeshForBrokenConstraints();
}

// @baa 0x009fe2a0
void UPrimitiveComponent::execGetRootBodyInstance(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(URB_BodyInstance**)Result = (URB_BodyInstance*)vf_1d8();
}

// @baa 0x009fe230
void UPrimitiveComponent::execSetRBDominanceGroup(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(InDomGroup);
	P_FINISH;
	vf_1d0(*(INT*)&InDomGroup);
}

// @baa 0x009fe160
void UPrimitiveComponent::execInitRBPhys(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	if (bAttached && Owner != NULL)
	{
		if (Owner->Physics != 10 || Owner->CollisionComponent == this)
			vf_134(Owner->Physics != 10);
	}
}

// @baa 0x009fe1c0
void UPrimitiveComponent::execSetPhysMaterialOverride(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UPhysicalMaterial, NewPhysMaterial);
    P_FINISH;
    vf_1d4(NewPhysMaterial);
}

struct USkeletalMeshComponent__00a01bd0 : public USkeletalMeshComponent
{
	void sub_00a01b60(UBOOL);
};

// @baa 0x00a01bd0
void USkeletalMeshComponent::execSetClothFrozen(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewFrozen);
	P_FINISH;
	((USkeletalMeshComponent__00a01bd0*)this)->sub_00a01b60(bNewFrozen);
}

struct USkeletalMeshComponent__00a14800 : public USkeletalMeshComponent
{
	void sub_00a13fc0(UBOOL);
};

// @baa 0x00a14800
void USkeletalMeshComponent::execSetAttachClothVertsToBaseBody(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bAttachVerts);
	P_FINISH;
	((USkeletalMeshComponent__00a14800*)this)->sub_00a13fc0(bAttachVerts);
}

struct UPrimitiveComponent_ : public UPrimitiveComponent
{
	void sub_009feb00(UBOOL);
};

// @baa 0x009feb70
void UPrimitiveComponent::execSetDisableAllRigidBody(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewDisableAllRigidBody);
	P_FINISH;
	((UPrimitiveComponent_*)this)->sub_009feb00(bNewDisableAllRigidBody);
}

// @baa 0x009fdf40
void UPrimitiveComponent::execSetBlockRigidBody(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewBlockRigidBody);
	P_FINISH;
	vf_1c4(bNewBlockRigidBody);
}

// @baa 0x009fe010
void UPrimitiveComponent::execSetContactModification(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(isEnableContactModificationCallback);
	P_FINISH;
	vf_1cc(isEnableContactModificationCallback);
}

// @baa 0x009fe0e0
void UPrimitiveComponent::execSetNotifyRigidBodyCollision(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewNotifyRigidBodyCollision);
	P_FINISH;
	vf_1c8(bNewNotifyRigidBodyCollision);
}

struct USkeletalMeshComponent__00a132a0 : public USkeletalMeshComponent
{
	void SetClothValidBounds(const FVector& ClothValidBoundsMin, const FVector& ClothValidBoundsMax);
	void execSetClothValidBounds(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00a132a0
void USkeletalMeshComponent__00a132a0::execSetClothValidBounds(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, ClothValidBoundsMin);
	P_GET_STRUCT(FVector, ClothValidBoundsMax);
	P_FINISH;
	SetClothValidBounds(ClothValidBoundsMin, ClothValidBoundsMax);
}

struct UStaticMeshComponent_ : public UStaticMeshComponent
{
	void DisableRBCollisionWithSMC(UStaticMeshComponent* OtherSMC, UBOOL bDisabled);
	void execDisableRBCollisionWithSMC(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00a01d30
void UStaticMeshComponent_::execDisableRBCollisionWithSMC(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UStaticMeshComponent, OtherSMC);
	P_GET_UBOOL(bDisabled);
	P_FINISH;
	DisableRBCollisionWithSMC(OtherSMC, bDisabled);
}

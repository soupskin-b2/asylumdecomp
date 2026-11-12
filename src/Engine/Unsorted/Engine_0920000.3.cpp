// Engine_0920000.cpp: 11 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00920870
void USkeletalMeshComponent::execGetHasFallenOutOfWorld( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = GetHasFallenOutOfWorld();
}

// @baa 0x0092e0e0
void USkeletalMeshComponent::execUpdateParentBoneMap( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdateParentBoneMap();
}

// @baa 0x0092e110
void USkeletalMeshComponent::execInitSkelControls( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	InitSkelControls();
}

// @baa 0x0092e8c0
void USkeletalMeshComponent::execRemoveInstanceVertexWeightBoneParented(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(BoneName);
	P_FINISH;
	sub_0092e850(BoneName);
}

// @baa 0x0092e3c0
void USkeletalMeshComponent::execFindBodyInstanceNamed(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(BoneName);
	P_FINISH;
	*(void**)Result = sub_0091f3f0(BoneName);
}

// @baa 0x009206c0
void USkeletalMeshComponent::execSetForceJointProjection(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewForceJointProjection);
	P_FINISH;
	sub_009200e0(bNewForceJointProjection);
}

// @baa 0x0092e9a0
void USkeletalMeshComponent::execToggleInstanceVertexWeights(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bEnable);
	P_FINISH;
	sub_0092e930(bEnable);
}


// @baa 0x0092df60
void USkeletalMeshComponent::execGetBoneLocation(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(BoneName);
    P_GET_INT_OPTX(Space, 0);
    P_FINISH;
    *(FVector*)Result = ((USkeletalMeshComponent*)this)->GetBoneLocation(BoneName, Space);
}


// @baa 0x0092e020
void USkeletalMeshComponent::execGetBoneAxis(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(BoneName);
    P_GET_BYTE(Axis);
    P_FINISH;
    *(FVector*)Result = ((USkeletalMeshComponent*)this)->GetBoneAxis(BoneName, Axis);
}

/* USkeletalMeshComponent::GetBoneQuaternion (0x91e2a0) isn't declared in the kit. */

// @baa 0x0092de90
void USkeletalMeshComponent::execGetBoneQuaternion(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(BoneName);
    P_GET_INT_OPTX(Space, 0);
    P_FINISH;
    *(FQuat*)Result = ((USkeletalMeshComponent*)this)->GetBoneQuaternion(BoneName, Space);
}

/* Kit gap: USkeletalMeshComponent::AddInstanceVertexWeightBoneParented (UnSkeletalComponent.cpp) isn't declared. */

// @baa 0x0092e7a0
void USkeletalMeshComponent::execAddInstanceVertexWeightBoneParented(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(BoneName);
	P_GET_UBOOL_OPTX(bPairWithParent, TRUE);
	P_FINISH;
	((USkeletalMeshComponent*)this)->AddInstanceVertexWeightBoneParented(BoneName, bPairWithParent);
}

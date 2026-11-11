// UnPhysComponent.cpp: 2 functions
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

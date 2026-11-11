// UnSkeletalComponent.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x0090f330
void USkeletalMeshComponent::execGetUseSimpleBoxCollision( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = vf_250();
}

struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
	void UpdateSceneProxy();
	void execUpdateSceneProxy(FFrame& Stack, RESULT_DECL);
};

// @baa 0x0091faa0
void USkeletalMeshComponent_::execUpdateSceneProxy( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdateSceneProxy();
}

struct USkeletalMeshComponent__00935ce0 : public USkeletalMeshComponent
{
	void UpdateAnimations();
	void execUpdateAnimations(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00935ce0
void USkeletalMeshComponent__00935ce0::execUpdateAnimations( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdateAnimations();
}

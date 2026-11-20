// Engine_0930000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x0093c8d0
void USkeletalMeshComponent::execForceSkelUpdate( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ForceSkelUpdate();
}

// @baa 0x0093c900
void USkeletalMeshComponent::execStopFaceFXAnim( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	StopFaceFXAnim();
}

// @baa 0x0093c7c0
void USkeletalMeshComponent::execSetPhysicsAsset(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UPhysicsAsset, NewPhysicsAsset);
    P_GET_UBOOL_OPTX(bForceReInit, FALSE);
    P_FINISH;
    this->SetPhysicsAsset(NewPhysicsAsset, bForceReInit);
}

extern FName g_026c552c;
	/* AnimationTriggerCallback */
// @baa 0x00938ac0
void AActor::eventAnimationTriggerCallback(FName TagName, const TArray<FString>& TagParams, UAnimSet* TagAnimSet, FLOAT AtTime)
{
	struct Actor_eventAnimationTriggerCallback_Parms
	{
		FName TagName;
		TArray<FString> TagParams;
		UAnimSet* TagAnimSet;
		FLOAT AtTime;
	} Parms;
	Parms.TagName = TagName;
	Parms.TagParams = TagParams;
	Parms.TagAnimSet = TagAnimSet;
	Parms.AtTime = AtTime;
	ProcessEvent(FindFunctionChecked(g_026c552c), &Parms);
}

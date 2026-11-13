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

/* USkeletalMeshComponent::SetPhysicsAsset (0x93c640) isn't declared in the kit. */

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
/* Kit gap: the generated glue for the AnimationTriggerCallback script event isn't declared; this build keeps it out
 * of line (USkeletalMeshComponent calls it on its Owner when an FAnimTriggerFaceFXTag fires, passing the tag's
 * fields; the parameter names follow that struct). */
struct AActor_ : public AActor
{
	void eventAnimationTriggerCallback(FName TagName, const TArray<FString>& TagParams, UAnimSet* TagAnimSet, FLOAT AtTime);
};

// @baa 0x00938ac0
void AActor_::eventAnimationTriggerCallback(FName TagName, const TArray<FString>& TagParams, UAnimSet* TagAnimSet, FLOAT AtTime)
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

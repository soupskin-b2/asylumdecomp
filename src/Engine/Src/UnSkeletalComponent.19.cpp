// UnSkeletalComponent.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4f5c;
	/* ENGINE_AnimTreeUpdated */

// @baa 0x0090acc0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor::eventAnimTreeUpdated(class USkeletalMeshComponent* SkelMesh)
{
	struct Actor_eventAnimTreeUpdated_Parms
	{
		class USkeletalMeshComponent* SkelMesh;
	} Parms;
	Parms.SkelMesh = SkelMesh;
	ProcessEvent(FindFunctionChecked(g_026c4f5c), &Parms);
}

extern FName g_026c51c0;
	/* ENGINE_PostInitAnimTree */

// @baa 0x0090ad40
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor::eventPostInitAnimTree(class USkeletalMeshComponent* SkelComp)
{
	struct Actor_eventPostInitAnimTree_Parms
	{
		class USkeletalMeshComponent* SkelComp;
	} Parms;
	Parms.SkelComp = SkelComp;
	ProcessEvent(FindFunctionChecked(g_026c51c0), &Parms);
}

extern FName g_026c4d60;
	/* ENGINE_RootMotionModeChanged */

// @baa 0x0090ae40
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor::eventRootMotionModeChanged(class USkeletalMeshComponent* SkelComp)
{
	struct Actor_eventRootMotionModeChanged_Parms
	{
		class USkeletalMeshComponent* SkelComp;
	} Parms;
	Parms.SkelComp = SkelComp;
	ProcessEvent(FindFunctionChecked(g_026c4d60), &Parms);
}

extern FName g_026c4ac0;
	/* ENGINE_FaceFXAudioStartedCallback */

// @baa 0x0090af00
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor::eventFaceFXAudioStartedCallback(class UAudioComponent* AC)
{
	struct Actor_eventFaceFXAudioStartedCallback_Parms
	{
		class UAudioComponent* AC;
	} Parms;
	Parms.AC = AC;
	ProcessEvent(FindFunctionChecked(g_026c4ac0), &Parms);
}

extern FName g_026c3ea8;
	/* ENGINE_PlayParticleEffect */

// @baa 0x0090ad00
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor::eventPlayParticleEffect(class UAnimNotify_PlayParticleEffect* AnimNotifyData)
{
	struct Actor_eventPlayParticleEffect_Parms
	{
		class UAnimNotify_PlayParticleEffect* AnimNotifyData;
	} Parms;
	Parms.AnimNotifyData = AnimNotifyData;
	ProcessEvent(FindFunctionChecked(g_026c3ea8), &Parms);
}

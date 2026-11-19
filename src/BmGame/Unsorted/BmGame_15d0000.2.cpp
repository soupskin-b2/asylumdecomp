// BmGame_15d0000.cpp: 30 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e32fc;
	/* GetAnimationFearLevel */

// @baa 0x015d89f0
/* RBMAIController.GetAnimationFearLevel script event: the generated glue, out of line here. */
BYTE ARBMAIController::eventGetAnimationFearLevel()
{
	struct RBMAIController_eventGetAnimationFearLevel_Parms
	{
		BYTE ReturnValue;
	} Parms;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026e32fc), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e38d4;
	/* TickBehaviour */

// @baa 0x015d8af0
/* RBMAIController.TickBehaviour script event: the generated glue, out of line here. */
void ARBMAIController::eventTickBehaviour(FLOAT DeltaTime)
{
	struct RBMAIController_eventTickBehaviour_Parms
	{
		FLOAT DeltaTime;
	} Parms;
	Parms.DeltaTime = DeltaTime;
	ProcessEvent(FindFunctionChecked(g_026e38d4), &Parms);
}

extern FName g_026e3980;
	/* ProcessWeaponChange */

// @baa 0x015d8b30
/* RBMAIController.ProcessWeaponChange script event: the generated glue, out of line here. */
void ARBMAIController::eventProcessWeaponChange()
{
	ProcessEvent(FindFunctionChecked(g_026e3980), NULL);
}

extern FName g_026e3a58;
	/* GetBehaviourCustomEyeLocation */

// @baa 0x015d8b60
/* RBMAIController.GetBehaviourCustomEyeLocation script event: the generated glue, out of line here. */
FVector ARBMAIController::eventGetBehaviourCustomEyeLocation()
{
	struct RBMAIController_eventGetBehaviourCustomEyeLocation_Parms
	{
		FVector ReturnValue;
	} Parms;
	appMemzero(&Parms.ReturnValue, sizeof(Parms.ReturnValue));
	ProcessEvent(FindFunctionChecked(g_026e3a58), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2c70;
	/* GetRandomType */

// @baa 0x015d94e0
/* RCharacterRandom.GetRandomType script event: the generated glue, out of line here. */
class UClass* URCharacterRandom::eventGetRandomType(INT randomVal)
{
	struct RCharacterRandom_eventGetRandomType_Parms
	{
		INT randomVal;
		class UClass* ReturnValue;
	} Parms;
	Parms.ReturnValue = NULL;
	Parms.randomVal = randomVal;
	ProcessEvent(FindFunctionChecked(g_026e2c70), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2918;
	/* CanExitConditionExit */

// @baa 0x015d95f0
/* RBMBehaviour.CanExitConditionExit script event: the generated glue, out of line here. */
UBOOL URBMBehaviour::eventCanExitConditionExit()
{
	struct RBMBehaviour_eventCanExitConditionExit_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e2918), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3a90;
	/* IsExitConditionTriggered */

// @baa 0x015d9630
/* RBMBehaviour.IsExitConditionTriggered script event: the generated glue, out of line here. */
UBOOL URBMBehaviour::eventIsExitConditionTriggered()
{
	struct RBMBehaviour_eventIsExitConditionTriggered_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e3a90), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2b38;
	/* UpdateTimers */

// @baa 0x015d9720
/* RBMBehaviour.UpdateTimers script event: the generated glue, out of line here. */
void URBMBehaviour::eventUpdateTimers(FLOAT DeltaTime)
{
	struct RBMBehaviour_eventUpdateTimers_Parms
	{
		FLOAT DeltaTime;
	} Parms;
	Parms.DeltaTime = DeltaTime;
	ProcessEvent(FindFunctionChecked(g_026e2b38), &Parms);
}

extern FName g_026e3a78;
	/* PlayTurnStep */

// @baa 0x015d98d0
/* RBMBehaviour_CombatAI.PlayTurnStep script event: the generated glue, out of line here. */
void URBMBehaviour_CombatAI::eventPlayTurnStep(FVector TargetHeading, UBOOL bForce)
{
	struct RBMBehaviour_CombatAI_eventPlayTurnStep_Parms
	{
		FVector TargetHeading;
		UBOOL bForce;
	} Parms;
	Parms.TargetHeading = TargetHeading;
	Parms.bForce = bForce ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026e3a78), &Parms);
}

extern FName g_026e2b94;
	/* JokerIsTalking */

// @baa 0x015d9c70
/* RBMBehaviour_MoveToJokerInChair.JokerIsTalking script event: the generated glue, out of line here. */
UBOOL URBMBehaviour_MoveToJokerInChair::eventJokerIsTalking()
{
	struct RBMBehaviour_MoveToJokerInChair_eventJokerIsTalking_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e2b94), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3098;
	/* IsJokerPlayingOverlay */

// @baa 0x015d9cb0
/* RBMBehaviour_MoveToJokerInChair.IsJokerPlayingOverlay script event: the generated glue, out of line here. */
UBOOL URBMBehaviour_MoveToJokerInChair::eventIsJokerPlayingOverlay()
{
	struct RBMBehaviour_MoveToJokerInChair_eventIsJokerPlayingOverlay_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e3098), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2c3c;
	/* IsBatarangPrimed */

// @baa 0x015d9ee0
/* RPlayerControllerCombat.IsBatarangPrimed script event: the generated glue, out of line here. */
UBOOL ARPlayerControllerCombat::eventIsBatarangPrimed()
{
	struct RPlayerControllerCombat_eventIsBatarangPrimed_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e2c3c), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3000;
	/* PostLoadXrayCheck */

// @baa 0x015d8620
/* RBMPawnAI.PostLoadXrayCheck script event: the generated glue, out of line here. */
void ARBMPawnAI::eventPostLoadXrayCheck()
{
	ProcessEvent(FindFunctionChecked(g_026e3000), NULL);
}

extern FName g_026e2d34;
	/* DestroyPawn */

// @baa 0x015d8650
/* RBMPawnAI.DestroyPawn script event: the generated glue, out of line here. */
void ARBMPawnAI::eventDestroyPawn()
{
	ProcessEvent(FindFunctionChecked(g_026e2d34), NULL);
}

extern FName g_026e37e0;
	/* StartMonitoringRagdollVelocity */

// @baa 0x015d8760
/* RPawnVillain.StartMonitoringRagdollVelocity script event: the generated glue, out of line here. */
void ARPawnVillain::eventStartMonitoringRagdollVelocity()
{
	ProcessEvent(FindFunctionChecked(g_026e37e0), NULL);
}

extern FName g_026e39cc;
	/* TriggerExitCondition */

// @baa 0x015d95c0
/* RBMBehaviour.TriggerExitCondition script event: the generated glue, out of line here. */
void URBMBehaviour::eventTriggerExitCondition()
{
	ProcessEvent(FindFunctionChecked(g_026e39cc), NULL);
}

extern FName g_026e2f68;
	/* EndInterrupt */

// @baa 0x015d9670
/* RBMBehaviour.EndInterrupt script event: the generated glue, out of line here. */
void URBMBehaviour::eventEndInterrupt()
{
	ProcessEvent(FindFunctionChecked(g_026e2f68), NULL);
}

extern FName g_026e2d80;
	/* TriggerExitConditionCombiner */

// @baa 0x015d9d90
/* RBMExitConditionCombiner.TriggerExitConditionCombiner script event: the generated glue, out of line here. */
void URBMExitConditionCombiner::eventTriggerExitConditionCombiner()
{
	ProcessEvent(FindFunctionChecked(g_026e2d80), NULL);
}

extern FName g_026e2ce8;
	/* RegisterDeadGuyWithRoomInfo */

// @baa 0x015d9dd0
/* RBmPawnSpawner.RegisterDeadGuyWithRoomInfo script event: the generated glue, out of line here. */
void URBmPawnSpawner::eventRegisterDeadGuyWithRoomInfo()
{
	ProcessEvent(FindFunctionChecked(g_026e2ce8), NULL);
}

extern FName g_026e2aa8;
	/* DestroyKOPawn */

// @baa 0x015d9e00
/* RBmPawnSpawner.DestroyKOPawn script event: the generated glue, out of line here. */
void URBmPawnSpawner::eventDestroyKOPawn()
{
	ProcessEvent(FindFunctionChecked(g_026e2aa8), NULL);
}

extern FName g_026e2cf0;
	/* BMGAME_ShouldCombatantForceCombatCamera */

// @baa 0x015d8720
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL ARPawnVillain::eventShouldCombatantForceCombatCamera()
{
	struct RPawnVillain_eventShouldCombatantForceCombatCamera_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e2cf0), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2a1c;
	/* BMGAME_ForceAttack */

// @baa 0x015d87d0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL ARPawnPlayerCombat::eventForceAttack()
{
	struct RPawnPlayerCombat_eventForceAttack_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e2a1c), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2d70;
	/* BMGAME_ForceTick */

// @baa 0x015d8ab0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL ARBMAIController::eventForceTick()
{
	struct RBMAIController_eventForceTick_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e2d70), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e27a8;
	/* BMGAME_CanLookAtPlayer */

// @baa 0x015d96a0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL URBMBehaviour::eventCanLookAtPlayer()
{
	struct RBMBehaviour_eventCanLookAtPlayer_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e27a8), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2c54;
	/* BMGAME_InterruptedTick */

// @baa 0x015d96e0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URBMBehaviour::eventInterruptedTick(FLOAT DeltaTime)
{
	struct RBMBehaviour_eventInterruptedTick_Parms
	{
		FLOAT DeltaTime;
	} Parms;
	Parms.DeltaTime = DeltaTime;
	ProcessEvent(FindFunctionChecked(g_026e2c54), &Parms);
}

extern FName g_026e3810;
	/* BMGAME_GetAttackPriority */

// @baa 0x015d97b0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
INT URBMBehaviour_Combat::eventGetAttackPriority()
{
	struct RBMBehaviour_Combat_eventGetAttackPriority_Parms
	{
		INT ReturnValue;
	} Parms;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026e3810), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2b5c;
	/* BMGAME_AttackBatman */

// @baa 0x015d97f0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL URBMBehaviour_Combat::eventAttackBatman(UBOOL bForceAttack)
{
	struct RBMBehaviour_Combat_eventAttackBatman_Parms
	{
		UBOOL bForceAttack;
		UBOOL ReturnValue;
	} Parms;
	Parms.bForceAttack = bForceAttack ? TRUE : FALSE;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e2b5c), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3468;
	/* BMGAME_CanPlayIdleOverlay */

// @baa 0x015d9890
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL URBMBehaviour_CombatAI::eventCanPlayIdleOverlay()
{
	struct RBMBehaviour_CombatAI_eventCanPlayIdleOverlay_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e3468), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3598;
	/* BMGAME_PlayStepInDirection */

// @baa 0x015d9930
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URBMBehaviour_CombatAI::eventPlayStepInDirection(FVector MoveDir, FVector FrontDir, FLOAT MoveSize)
{
	struct RBMBehaviour_CombatAI_eventPlayStepInDirection_Parms
	{
		FVector MoveDir;
		FVector FrontDir;
		FLOAT MoveSize;
	} Parms;
	Parms.MoveDir = MoveDir;
	Parms.FrontDir = FrontDir;
	Parms.MoveSize = MoveSize;
	ProcessEvent(FindFunctionChecked(g_026e3598), &Parms);
}

extern FName g_026e3400;
	/* BMGAME_GetOverlayAnim */

// @baa 0x015d86c0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
FName ARPawnVillain::eventGetOverlayAnim()
{
	struct RPawnVillain_eventGetOverlayAnim_Parms
	{
		FName ReturnValue;
	} Parms;
	Parms.ReturnValue = FName(NAME_None);
	ProcessEvent(FindFunctionChecked(g_026e3400), &Parms);
	return Parms.ReturnValue;
}

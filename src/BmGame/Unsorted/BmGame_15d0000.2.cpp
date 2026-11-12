// BmGame_15d0000.cpp: 30 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e32fc;
	/* GetAnimationFearLevel */
struct ARBMAIController_ : public ARBMAIController
{
	BYTE eventGetAnimationFearLevel();
};

// @baa 0x015d89f0
/* RBMAIController.GetAnimationFearLevel script event: the generated glue, out of line here. */
BYTE ARBMAIController_::eventGetAnimationFearLevel()
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
struct ARBMAIController__015d8af0 : public ARBMAIController
{
	void eventTickBehaviour(FLOAT DeltaTime);
};

// @baa 0x015d8af0
/* RBMAIController.TickBehaviour script event: the generated glue, out of line here. */
void ARBMAIController__015d8af0::eventTickBehaviour(FLOAT DeltaTime)
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
struct ARBMAIController__015d8b30 : public ARBMAIController
{
	void eventProcessWeaponChange();
};

// @baa 0x015d8b30
/* RBMAIController.ProcessWeaponChange script event: the generated glue, out of line here. */
void ARBMAIController__015d8b30::eventProcessWeaponChange()
{
	ProcessEvent(FindFunctionChecked(g_026e3980), NULL);
}

extern FName g_026e3a58;
	/* GetBehaviourCustomEyeLocation */
struct ARBMAIController__015d8b60 : public ARBMAIController
{
	FVector eventGetBehaviourCustomEyeLocation();
};

// @baa 0x015d8b60
/* RBMAIController.GetBehaviourCustomEyeLocation script event: the generated glue, out of line here. */
FVector ARBMAIController__015d8b60::eventGetBehaviourCustomEyeLocation()
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
struct URBMBehaviour_ : public URBMBehaviour
{
	UBOOL eventCanExitConditionExit();
};

// @baa 0x015d95f0
/* RBMBehaviour.CanExitConditionExit script event: the generated glue, out of line here. */
UBOOL URBMBehaviour_::eventCanExitConditionExit()
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
struct URBMBehaviour__015d9630 : public URBMBehaviour
{
	UBOOL eventIsExitConditionTriggered();
};

// @baa 0x015d9630
/* RBMBehaviour.IsExitConditionTriggered script event: the generated glue, out of line here. */
UBOOL URBMBehaviour__015d9630::eventIsExitConditionTriggered()
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
struct URBMBehaviour__015d9720 : public URBMBehaviour
{
	void eventUpdateTimers(FLOAT DeltaTime);
};

// @baa 0x015d9720
/* RBMBehaviour.UpdateTimers script event: the generated glue, out of line here. */
void URBMBehaviour__015d9720::eventUpdateTimers(FLOAT DeltaTime)
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
struct URBMBehaviour_CombatAI_ : public URBMBehaviour_CombatAI
{
	void eventPlayTurnStep(FVector TargetHeading, UBOOL bForce);
};

// @baa 0x015d98d0
/* RBMBehaviour_CombatAI.PlayTurnStep script event: the generated glue, out of line here. */
void URBMBehaviour_CombatAI_::eventPlayTurnStep(FVector TargetHeading, UBOOL bForce)
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
struct URBMBehaviour_MoveToJokerInChair_ : public URBMBehaviour_MoveToJokerInChair
{
	UBOOL eventJokerIsTalking();
};

// @baa 0x015d9c70
/* RBMBehaviour_MoveToJokerInChair.JokerIsTalking script event: the generated glue, out of line here. */
UBOOL URBMBehaviour_MoveToJokerInChair_::eventJokerIsTalking()
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
struct URBMBehaviour_MoveToJokerInChair__015d9cb0 : public URBMBehaviour_MoveToJokerInChair
{
	UBOOL eventIsJokerPlayingOverlay();
};

// @baa 0x015d9cb0
/* RBMBehaviour_MoveToJokerInChair.IsJokerPlayingOverlay script event: the generated glue, out of line here. */
UBOOL URBMBehaviour_MoveToJokerInChair__015d9cb0::eventIsJokerPlayingOverlay()
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
struct ARPlayerControllerCombat_ : public ARPlayerControllerCombat
{
	UBOOL eventIsBatarangPrimed();
};

// @baa 0x015d9ee0
/* RPlayerControllerCombat.IsBatarangPrimed script event: the generated glue, out of line here. */
UBOOL ARPlayerControllerCombat_::eventIsBatarangPrimed()
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
struct ARBMPawnAI_ : public ARBMPawnAI
{
	void eventPostLoadXrayCheck();
};

// @baa 0x015d8620
/* RBMPawnAI.PostLoadXrayCheck script event: the generated glue, out of line here. */
void ARBMPawnAI_::eventPostLoadXrayCheck()
{
	ProcessEvent(FindFunctionChecked(g_026e3000), NULL);
}

extern FName g_026e2d34;
	/* DestroyPawn */
struct ARBMPawnAI__015d8650 : public ARBMPawnAI
{
	void eventDestroyPawn();
};

// @baa 0x015d8650
/* RBMPawnAI.DestroyPawn script event: the generated glue, out of line here. */
void ARBMPawnAI__015d8650::eventDestroyPawn()
{
	ProcessEvent(FindFunctionChecked(g_026e2d34), NULL);
}

extern FName g_026e37e0;
	/* StartMonitoringRagdollVelocity */
struct ARPawnVillain_ : public ARPawnVillain
{
	void eventStartMonitoringRagdollVelocity();
};

// @baa 0x015d8760
/* RPawnVillain.StartMonitoringRagdollVelocity script event: the generated glue, out of line here. */
void ARPawnVillain_::eventStartMonitoringRagdollVelocity()
{
	ProcessEvent(FindFunctionChecked(g_026e37e0), NULL);
}

extern FName g_026e39cc;
	/* TriggerExitCondition */
struct URBMBehaviour__015d95c0 : public URBMBehaviour
{
	void eventTriggerExitCondition();
};

// @baa 0x015d95c0
/* RBMBehaviour.TriggerExitCondition script event: the generated glue, out of line here. */
void URBMBehaviour__015d95c0::eventTriggerExitCondition()
{
	ProcessEvent(FindFunctionChecked(g_026e39cc), NULL);
}

extern FName g_026e2f68;
	/* EndInterrupt */
struct URBMBehaviour__015d9670 : public URBMBehaviour
{
	void eventEndInterrupt();
};

// @baa 0x015d9670
/* RBMBehaviour.EndInterrupt script event: the generated glue, out of line here. */
void URBMBehaviour__015d9670::eventEndInterrupt()
{
	ProcessEvent(FindFunctionChecked(g_026e2f68), NULL);
}

extern FName g_026e2d80;
	/* TriggerExitConditionCombiner */
struct URBMExitConditionCombiner_ : public URBMExitConditionCombiner
{
	void eventTriggerExitConditionCombiner();
};

// @baa 0x015d9d90
/* RBMExitConditionCombiner.TriggerExitConditionCombiner script event: the generated glue, out of line here. */
void URBMExitConditionCombiner_::eventTriggerExitConditionCombiner()
{
	ProcessEvent(FindFunctionChecked(g_026e2d80), NULL);
}

extern FName g_026e2ce8;
	/* RegisterDeadGuyWithRoomInfo */
struct URBmPawnSpawner_ : public URBmPawnSpawner
{
	void eventRegisterDeadGuyWithRoomInfo();
};

// @baa 0x015d9dd0
/* RBmPawnSpawner.RegisterDeadGuyWithRoomInfo script event: the generated glue, out of line here. */
void URBmPawnSpawner_::eventRegisterDeadGuyWithRoomInfo()
{
	ProcessEvent(FindFunctionChecked(g_026e2ce8), NULL);
}

extern FName g_026e2aa8;
	/* DestroyKOPawn */
struct URBmPawnSpawner__015d9e00 : public URBmPawnSpawner
{
	void eventDestroyKOPawn();
};

// @baa 0x015d9e00
/* RBmPawnSpawner.DestroyKOPawn script event: the generated glue, out of line here. */
void URBmPawnSpawner__015d9e00::eventDestroyKOPawn()
{
	ProcessEvent(FindFunctionChecked(g_026e2aa8), NULL);
}

extern FName g_026e2cf0;
	/* BMGAME_ShouldCombatantForceCombatCamera */
struct ARPawnVillain__015d8720 : public ARPawnVillain
{
	UBOOL eventShouldCombatantForceCombatCamera();
};

// @baa 0x015d8720
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL ARPawnVillain__015d8720::eventShouldCombatantForceCombatCamera()
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
struct ARPawnPlayerCombat_ : public ARPawnPlayerCombat
{
	UBOOL eventForceAttack();
};

// @baa 0x015d87d0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL ARPawnPlayerCombat_::eventForceAttack()
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
struct ARBMAIController__015d8ab0 : public ARBMAIController
{
	UBOOL eventForceTick();
};

// @baa 0x015d8ab0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL ARBMAIController__015d8ab0::eventForceTick()
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
struct URBMBehaviour__015d96a0 : public URBMBehaviour
{
	UBOOL eventCanLookAtPlayer();
};

// @baa 0x015d96a0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL URBMBehaviour__015d96a0::eventCanLookAtPlayer()
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
struct URBMBehaviour__015d96e0 : public URBMBehaviour
{
	void eventInterruptedTick(FLOAT DeltaTime);
};

// @baa 0x015d96e0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URBMBehaviour__015d96e0::eventInterruptedTick(FLOAT DeltaTime)
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
struct URBMBehaviour_Combat_ : public URBMBehaviour_Combat
{
	INT eventGetAttackPriority();
};

// @baa 0x015d97b0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
INT URBMBehaviour_Combat_::eventGetAttackPriority()
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
struct URBMBehaviour_Combat__015d97f0 : public URBMBehaviour_Combat
{
	UBOOL eventAttackBatman(UBOOL bForceAttack);
};

// @baa 0x015d97f0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL URBMBehaviour_Combat__015d97f0::eventAttackBatman(UBOOL bForceAttack)
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
struct URBMBehaviour_CombatAI__015d9890 : public URBMBehaviour_CombatAI
{
	UBOOL eventCanPlayIdleOverlay();
};

// @baa 0x015d9890
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL URBMBehaviour_CombatAI__015d9890::eventCanPlayIdleOverlay()
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
struct URBMBehaviour_CombatAI__015d9930 : public URBMBehaviour_CombatAI
{
	void eventPlayStepInDirection(FVector MoveDir, FVector FrontDir, FLOAT MoveSize);
};

// @baa 0x015d9930
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URBMBehaviour_CombatAI__015d9930::eventPlayStepInDirection(FVector MoveDir, FVector FrontDir, FLOAT MoveSize)
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
struct ARPawnVillain__015d86c0 : public ARPawnVillain
{
	FName eventGetOverlayAnim();
};

// @baa 0x015d86c0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
FName ARPawnVillain__015d86c0::eventGetOverlayAnim()
{
	struct RPawnVillain_eventGetOverlayAnim_Parms
	{
		FName ReturnValue;
	} Parms;
	Parms.ReturnValue = FName(NAME_None);
	ProcessEvent(FindFunctionChecked(g_026e3400), &Parms);
	return Parms.ReturnValue;
}

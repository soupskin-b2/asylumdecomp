// BmGame_15d0000.cpp: 12 functions
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
struct URCharacterRandom_ : public URCharacterRandom
{
	class UClass* eventGetRandomType(INT randomVal);
};

// @baa 0x015d94e0
/* RCharacterRandom.GetRandomType script event: the generated glue, out of line here. */
class UClass* URCharacterRandom_::eventGetRandomType(INT randomVal)
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

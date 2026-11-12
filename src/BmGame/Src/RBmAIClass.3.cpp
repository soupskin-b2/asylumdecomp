// RBmAIClass.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

extern FName g_026e32fc;
	/* BMGAME_GetAnimationFearLevel */
/* Kit gaps: ARBMAIController's script event glue (BmGameClasses.h) isn't declared (inline here as the generated
 * header has it; out of line at 015d89f0), and BmGame's hardcoded names (0x516..0x51a, the silent-predator idle
 * stances) have no EName identifiers. */
struct ARBMAIController_ : public ARBMAIController
{
	FORCEINLINE BYTE eventGetAnimationFearLevel()
	{
		struct RBMAIController_eventGetAnimationFearLevel_Parms
		{
			BYTE ReturnValue;
		} Parms;
		Parms.ReturnValue = 0;
		ProcessEvent(FindFunctionChecked(g_026e32fc), &Parms);
		return Parms.ReturnValue;
	}
};

// @baa 0x01604770
/* The idle stance a silent-predator AI should use for how scared it is (hostile pawns only). */
FName ARBMAIController::GetSilentPredatorStanceName()
{
	ARBMPawnAI* AIPawn = Cast<ARBMPawnAI>(Pawn);
	if (AIPawn)
	{
		BYTE FearLevel = ((ARBMAIController_*)this)->eventGetAnimationFearLevel();
		if (!AIPawn->bFriendly && FearLevel == 2)
		{
			return FName((EName)0x516);
		}
		if (!AIPawn->bFriendly && FearLevel == 1)
		{
			AIPawn->ChangeIdleStance(NervousIdleVariantName);
			return FName((EName)0x517);
		}
	}
	return FName((EName)0x51a);
}

// @baa 0x01604840
/* The stance a silent-predator AI glances in for how scared it is; otherwise its usual stance. */
FName ARBMAIController::GetSilentPredatorGlanceStanceName()
{
	ARBMPawnAI* AIPawn = Cast<ARBMPawnAI>(Pawn);
	if (AIPawn)
	{
		BYTE FearLevel = ((ARBMAIController_*)this)->eventGetAnimationFearLevel();
		if (!AIPawn->bFriendly && FearLevel == 0 && AIPawn->bSilentPredatorAI)
		{
			return FName((EName)0x518);
		}
		if (!AIPawn->bFriendly && FearLevel == 1)
		{
			return FName((EName)0x519);
		}
	}
	return GetSilentPredatorStanceName();
}

// RBmAIClass.cpp: 5 functions
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
			return FName(NAME_Standing_Terrified);
		}
		if (!AIPawn->bFriendly && FearLevel == 1)
		{
			AIPawn->ChangeIdleStance(NervousIdleVariantName);
			return FName(NAME_Standing_Panicked);
		}
	}
	return FName(NAME_Standing);
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
			return FName(NAME_Standing_Glance);
		}
		if (!AIPawn->bFriendly && FearLevel == 1)
		{
			return FName(NAME_Standing_Panicked_Glance);
		}
	}
	return GetSilentPredatorStanceName();
}

// @baa 0x01600040
/* ARBMPawnAI slot 0x494 (kit vf_494): tell the AI controller first (its slot 0x46c), then the base pawn. */
void ARBMPawnAI::vf_494(INT A)
{
    ARBMAIController* AIController = Cast<ARBMAIController>(Controller);
    if (AIController)
    {
        AIController->vf_46c(A);
    }
    Super::vf_494(A);
}

/* Script event glue, matched out of line (015d8a70, 015d8cd0). */

// @baa 0x01604a40
/* ARBMAIController slot 0x458 (kit vf_458): whether a silent-predator AI can respond to alerts right now
 * (not stunned, pawn slot 0x48c clear, and the behaviour allows it). */
UBOOL ARBMAIController::ShouldUpdatePathNodeSeenTimes()
{
    if (bStunned)
    {
        return FALSE;
    }
    ARBMPawnAI* AIPawn = Cast<ARBMPawnAI>(Pawn);
    if (AIPawn && AIPawn->bSilentPredatorAI && !this->eventIsStunned() && !AIPawn->IsIncapacitated())
    {
        return this->eventBehaviourCanRespondToAlerts() ? TRUE : FALSE;
    }
    return FALSE;
}

// @baa 0x015e6220
/* While charging, Venom ploughs through other combat pawns. */
UBOOL ARPawnBossVenomBase::IgnoreBlockingBy(const AActor* Other) const
{
	if (bCharging && ConstCast<ARPawnCombat>(Other))
	{
		return TRUE;
	}
	return Super::IgnoreBlockingBy(Other);
}

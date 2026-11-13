// RBmCombatSequence.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern FName g_026e38dc;
	/* BMGAME_GetHealth */
/* ARPawnCombat's GetHealth script event (generated glue, BmGameClasses.h) */
struct ARPawnCombat_ : public ARPawnCombat
{
	INT eventGetHealth()
	{
		struct RPawnCombat_eventGetHealth_Parms
		{
			INT ReturnValue;
		} Parms;
		Parms.ReturnValue = 0;
		ProcessEvent(FindFunctionChecked(g_026e38dc), &Parms);
		return Parms.ReturnValue;
	}
};

// @baa 0x016498b0
/* Tracks the combined health of the current combatants as a percentage of the most seen, firing
 * output N+1 as it drops past OutputPercentages(N). Input 1 stops it. */
UBOOL URSeqAct_CombatProgress::UpdateOp(FLOAT DeltaTime)
{
	if (InputLinks(1).bHasImpulse)
	{
		return TRUE;
	}

	FLOAT Health = 0.f;
	if (CombatManager->GetNumCombatants() > 0)
	{
		for (INT Idx = 0; Idx < CombatManager->PawnList.Num(); Idx++)
		{
			if (CombatManager->PawnList(Idx)->bIsCurrentCombatant)
			{
				Health += ((ARPawnCombat_*)CombatManager->PawnList(Idx))->eventGetHealth();
			}
		}
	}

	if (Health > MaxHealth)
	{
		MaxHealth = Health;
		CurrHealth = Health;
	}
	if (MaxHealth > 0.f)
	{
		bCombatActive = TRUE;
	}

	Health = Health / MaxHealth * 100.f;
	if (Health != CurrHealth)
	{
		const FLOAT OldLost = 100.f - CurrHealth;
		const FLOAT NewLost = 100.f - Health;
		for (INT Idx = 0; Idx < OutputPercentages.Num(); Idx++)
		{
			if (OutputPercentages(Idx) > OldLost && NewLost >= OutputPercentages(Idx))
			{
				FSeqOpOutputLink& Link = OutputLinks(Idx + 1);
				if (!Link.bDisabled)
				{
					Link.bHasImpulse = TRUE;
				}
			}
		}
		CurrHealth = Health;
		if (bCombatActive && bExitOnCombatFinished && Health <= 0.f)
		{
			return TRUE;
		}
	}
	return FALSE;
}

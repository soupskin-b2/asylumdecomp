// RBMBehaviour_Combat.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

extern FName g_026e2cf0;
	/* BMGAME_ShouldCombatantForceCombatCamera */
/* The villain's script event (generated glue, BmGameClasses.h) */
struct ARPawnVillain_ : public ARPawnVillain
{
	UBOOL eventShouldCombatantForceCombatCamera()
	{
		struct RPawnVillain_eventShouldCombatantForceCombatCamera_Parms
		{
			UBOOL ReturnValue;
		} Parms;
		Parms.ReturnValue = FALSE;
		ProcessEvent(FindFunctionChecked(g_026e2cf0), &Parms);
		return Parms.ReturnValue;
	}
};

// @baa 0x016081a0
/* Whether any current combatant wants the combat camera forced on. */
INT ARBMCombatManager::vf_370()
{
	if (!NumCombatants)
	{
		return FALSE;
	}
	for (INT Idx = 0; Idx < PawnList.Num(); Idx++)
	{
		ARPawnVillain* Villain = Cast<ARPawnVillain>(PawnList(Idx));
		if (Villain && Villain->bIsCurrentCombatant && ((ARPawnVillain_*)Villain)->eventShouldCombatantForceCombatCamera())
		{
			return TRUE;
		}
	}
	return FALSE;
}

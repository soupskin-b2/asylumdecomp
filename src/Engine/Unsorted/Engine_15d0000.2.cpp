// Engine_15d0000.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e3898;
	/* PredatorActivated */

// @baa 0x015d8340
/* RGameInfo.PredatorActivated script event: the generated glue, out of line here. */
void ARGameInfo::eventPredatorActivated()
{
	ProcessEvent(FindFunctionChecked(g_026e3898), NULL);
}

extern FName g_026e3960;
	/* BMGAME_ShouldCombatantLockDoors */

// @baa 0x015d8510
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL ARPawnCombat::eventShouldCombatantLockDoors()
{
	struct RPawnCombat_eventShouldCombatantLockDoors_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e3960), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e33dc;
	/* BMGAME_SetIsCurrentCombatant */

// @baa 0x015d8550
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void ARPawnCombat::eventSetIsCurrentCombatant()
{
	ProcessEvent(FindFunctionChecked(g_026e33dc), NULL);
}

extern FName g_026e2658;
	/* BMGAME_CanReceiveAttackFromPawn */

// @baa 0x015d85c0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL ARPawnCombat::eventCanReceiveAttackFromPawn(class ARPawnCombat* NewAttacker)
{
	struct RPawnCombat_eventCanReceiveAttackFromPawn_Parms
	{
		class ARPawnCombat* NewAttacker;
		UBOOL ReturnValue;
	} Parms;
	Parms.NewAttacker = NewAttacker;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e2658), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2bd4;
	/* BMGAME_CanNewAttackBeStarted */

// @baa 0x015d8580
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL ARPawnCombat::eventCanNewAttackBeStarted()
{
	struct RPawnCombat_eventCanNewAttackBeStarted_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e2bd4), &Parms);
	return Parms.ReturnValue;
}

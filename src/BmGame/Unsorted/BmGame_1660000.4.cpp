// BmGame_1660000.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e32c8;
	/* CounterHit */

// @baa 0x0166d280
/* RCombatMove.CounterHit script event: the generated glue, out of line here. */
void ARCombatMove::eventCounterHit(BYTE CounterDamageBone, BYTE CounterImpactBone, BYTE HitStrength, FName CapeStateName)
{
	struct RCombatMove_eventCounterHit_Parms
	{
		BYTE CounterDamageBone;
		BYTE CounterImpactBone;
		BYTE HitStrength;
		FName CapeStateName;
	} Parms;
	Parms.CounterDamageBone = CounterDamageBone;
	Parms.CounterImpactBone = CounterImpactBone;
	Parms.HitStrength = HitStrength;
	Parms.CapeStateName = CapeStateName;
	ProcessEvent(FindFunctionChecked(g_026e32c8), &Parms);
}

extern FName g_026e3900;
	/* SetupDecalMaterialInstances */

// @baa 0x01668a50
/* RSmashableProp.SetupDecalMaterialInstances script event: the generated glue, out of line here. */
void ARSmashableProp::eventSetupDecalMaterialInstances()
{
	ProcessEvent(FindFunctionChecked(g_026e3900), NULL);
}

extern FName g_026e2940;
	/* DoRBSmashAlert */

// @baa 0x01668a80
/* RSmashableProp.DoRBSmashAlert script event: the generated glue, out of line here. */
void ARSmashableProp::eventDoRBSmashAlert()
{
	ProcessEvent(FindFunctionChecked(g_026e2940), NULL);
}

extern FName g_026e394c;
	/* TakedownNotify */

// @baa 0x0166d250
/* RCombatMove.TakedownNotify script event: the generated glue, out of line here. */
void ARCombatMove::eventTakedownNotify()
{
	ProcessEvent(FindFunctionChecked(g_026e394c), NULL);
}

extern FName g_026c41a8;
	/* ENGINE_SetPhysicalCollisionProperties */

// @baa 0x01668770
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AKActor::eventSetPhysicalCollisionProperties()
{
	ProcessEvent(FindFunctionChecked(g_026c41a8), NULL);
}

extern FName g_026e2b54;
	/* BMGAME_StrikeContact */

// @baa 0x0166d2f0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void ARCombatMove::eventStrikeContact()
{
	ProcessEvent(FindFunctionChecked(g_026e2b54), NULL);
}

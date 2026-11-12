// BmGame_1660000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e32c8;
	/* CounterHit */
struct ARCombatMove_ : public ARCombatMove
{
	void eventCounterHit(BYTE CounterDamageBone, BYTE CounterImpactBone, BYTE HitStrength, FName CapeStateName);
};

// @baa 0x0166d280
/* RCombatMove.CounterHit script event: the generated glue, out of line here. */
void ARCombatMove_::eventCounterHit(BYTE CounterDamageBone, BYTE CounterImpactBone, BYTE HitStrength, FName CapeStateName)
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
struct ARSmashableProp_ : public ARSmashableProp
{
	void eventSetupDecalMaterialInstances();
};

// @baa 0x01668a50
/* RSmashableProp.SetupDecalMaterialInstances script event: the generated glue, out of line here. */
void ARSmashableProp_::eventSetupDecalMaterialInstances()
{
	ProcessEvent(FindFunctionChecked(g_026e3900), NULL);
}

extern FName g_026e2940;
	/* DoRBSmashAlert */
struct ARSmashableProp__01668a80 : public ARSmashableProp
{
	void eventDoRBSmashAlert();
};

// @baa 0x01668a80
/* RSmashableProp.DoRBSmashAlert script event: the generated glue, out of line here. */
void ARSmashableProp__01668a80::eventDoRBSmashAlert()
{
	ProcessEvent(FindFunctionChecked(g_026e2940), NULL);
}

extern FName g_026e394c;
	/* TakedownNotify */
struct ARCombatMove__0166d250 : public ARCombatMove
{
	void eventTakedownNotify();
};

// @baa 0x0166d250
/* RCombatMove.TakedownNotify script event: the generated glue, out of line here. */
void ARCombatMove__0166d250::eventTakedownNotify()
{
	ProcessEvent(FindFunctionChecked(g_026e394c), NULL);
}

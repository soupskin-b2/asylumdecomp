// BmGame_1660000.cpp: 1 function
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

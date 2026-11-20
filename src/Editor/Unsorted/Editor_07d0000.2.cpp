// Editor_07d0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4f04;
	/* ENGINE_NotifyBump */
// @baa 0x007d60f0
UBOOL AController::eventNotifyBump(AActor* Other, FVector HitNormal)
{
	struct Controller_eventNotifyBump_Parms
	{
		AActor* Other;
		FVector HitNormal;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_NotifyBump - NAME_PROBEMIN))))
	{
		Parms.Other = Other;
		Parms.HitNormal = HitNormal;
		ProcessEvent(FindFunctionChecked(g_026c4f04), &Parms);
	}
	return Parms.ReturnValue;
}

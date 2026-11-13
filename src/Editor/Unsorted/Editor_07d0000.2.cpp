// Editor_07d0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* Kit gap: Core.h's EName list lacks NAME_NotifyBump (0x15c, UnNames.h; a probe event). */
#define NAME_NotifyBump ((EName)0x15c)
extern FName g_026c4f04;
	/* ENGINE_NotifyBump */
/* Kit gap: the generated glue for Controller's script event NotifyBump (EngineClasses.h) isn't declared; this build
 * keeps it out of line (APawn::NotifyBump calls it). */
struct AController_ : public AController
{
	UBOOL eventNotifyBump(AActor* Other, FVector HitNormal);
};

// @baa 0x007d60f0
UBOOL AController_::eventNotifyBump(AActor* Other, FVector HitNormal)
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

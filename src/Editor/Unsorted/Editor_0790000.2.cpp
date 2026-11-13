// Editor_0790000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c54f8;
	/* ENGINE_SpecialHandling */
/* Kit gap: the generated glue for Actor's script event SpecialHandling (EngineClasses.h) isn't declared; this build
 * keeps it out of line (AController::HandleSpecial calls it). */
struct AActor_ : public AActor
{
	AActor* eventSpecialHandling(APawn* Other);
};

// @baa 0x0079f220
AActor* AActor_::eventSpecialHandling(APawn* Other)
{
	struct Actor_eventSpecialHandling_Parms
	{
		APawn* Other;
		AActor* ReturnValue;
	} Parms;
	Parms.ReturnValue = NULL;
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_SpecialHandling - NAME_PROBEMIN))))
	{
		Parms.Other = Other;
		ProcessEvent(FindFunctionChecked(g_026c54f8), &Parms);
	}
	return Parms.ReturnValue;
}

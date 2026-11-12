// UnController.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4e54;
	/* ENGINE_SeePlayer */
/* EName entries Core.h doesn't list yet (UnNames.h) */
struct AController_ : public AController
{
	void eventSeePlayer(APawn* Seen);
};

// @baa 0x0079f4c0
/* The script event's generated glue (EngineClasses.h), out of line here. SeePlayer is a probe
 * function: the glue only calls into script when the current state probes for it. */
void AController_::eventSeePlayer(APawn* Seen)
{
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_SeePlayer - NAME_PROBEMIN))))
	{
		struct Controller_eventSeePlayer_Parms
		{
			APawn* Seen;
		} Parms;
		Parms.Seen = Seen;
		ProcessEvent(FindFunctionChecked(g_026c4e54), &Parms);
	}
}

extern FName g_026c4b14;
struct AController__0079f460 : public AController
{
	void eventSeeMonster(APawn* Seen);
};

// @baa 0x0079f460
/* The script event's generated glue (EngineClasses.h), out of line here. SeeMonster is a probe
 * function: the glue only calls into script when the current state probes for it. */
void AController__0079f460::eventSeeMonster(APawn* Seen)
{
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_SeeMonster - NAME_PROBEMIN))))
	{
		struct Controller_eventSeeMonster_Parms
		{
			APawn* Seen;
		} Parms;
		Parms.Seen = Seen;
		ProcessEvent(FindFunctionChecked(g_026c4b14), &Parms);
	}
}

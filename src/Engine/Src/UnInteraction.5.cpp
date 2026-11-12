// UnInteraction.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4ce4;
	/* ENGINE_Tick */
/* EName entries Core.h doesn't list yet (UnNames.h) */
#define NAME_PROBEMIN 0x12c
#define NAME_Tick 0x150
struct UInteraction_ : public UInteraction
{
	void eventTick(FLOAT DeltaTime);
};

// @baa 0x00888f20
/* The script event's generated glue (EngineClasses.h), out of line here. Tick is a probe
 * function: the glue only calls into script when the current state probes for it. */
void UInteraction_::eventTick(FLOAT DeltaTime)
{
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_Tick - NAME_PROBEMIN))))
	{
		struct Interaction_eventTick_Parms
		{
			FLOAT DeltaTime;
		} Parms;
		Parms.DeltaTime = DeltaTime;
		ProcessEvent(FindFunctionChecked(g_026c4ce4), &Parms);
	}
}

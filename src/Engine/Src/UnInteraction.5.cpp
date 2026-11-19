// UnInteraction.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4ce4;
	/* ENGINE_Tick */
/* EName entries Core.h doesn't list yet (UnNames.h) */

// @baa 0x00888f20
/* The script event's generated glue (EngineClasses.h), out of line here. Tick is a probe
 * function: the glue only calls into script when the current state probes for it. */
void UInteraction::eventTick(FLOAT DeltaTime)
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

#include "ue3/ConstructObject.h"

// @baa 0x00d8e5a0
template UUIInputConfiguration* ConstructObject<UUIInputConfiguration>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 70 "candidate.cpp"

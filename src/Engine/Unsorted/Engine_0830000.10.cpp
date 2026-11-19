// Engine_0830000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4ba8;
	/* SetDisabled */

// @baa 0x00833c90
/* CoverLink.SetDisabled script event: the generated glue, out of line here. */
void ACoverLink::eventSetDisabled(UBOOL bNewDisabled)
{
	struct CoverLink_eventSetDisabled_Parms
	{
		UBOOL bNewDisabled;
	} Parms;
	Parms.bNewDisabled = bNewDisabled ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4ba8), &Parms);
}

#include "ue3/ConstructObject.h"

// @baa 0x0083d400
template UReachSpec* ConstructObject<UReachSpec>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 63 "candidate.cpp"

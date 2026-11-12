// Engine_0830000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4ba8;
	/* SetDisabled */
struct ACoverLink_ : public ACoverLink
{
	void eventSetDisabled(UBOOL bNewDisabled);
};

// @baa 0x00833c90
/* CoverLink.SetDisabled script event: the generated glue, out of line here. */
void ACoverLink_::eventSetDisabled(UBOOL bNewDisabled)
{
	struct CoverLink_eventSetDisabled_Parms
	{
		UBOOL bNewDisabled;
	} Parms;
	Parms.bNewDisabled = bNewDisabled ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4ba8), &Parms);
}

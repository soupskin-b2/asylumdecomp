// BmGameForensicClasses.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e30cc;
	/* BMGAME_InitialiseDna */

// @baa 0x016833a0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void ARForensicDnaSplatStatic::eventInitialiseDna()
{
	ProcessEvent(FindFunctionChecked(g_026e30cc), NULL);
}

extern FName g_026e2ddc;

// @baa 0x01673010
void ARForensicsDevice::eventAddItemToEvidenceArray(const FScriptInterface& Item)
{
	struct RForensicsDevice_eventAddItemToEvidenceArray_Parms
	{
		FScriptInterface Item;
	} Parms;
	Parms.Item = Item;
	ProcessEvent(FindFunctionChecked(g_026e2ddc), &Parms);
}

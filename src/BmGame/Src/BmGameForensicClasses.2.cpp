// BmGameForensicClasses.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e30cc;
	/* BMGAME_InitialiseDna */
struct ARForensicDnaSplatStatic_ : public ARForensicDnaSplatStatic
{
	void eventInitialiseDna();
};

// @baa 0x016833a0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void ARForensicDnaSplatStatic_::eventInitialiseDna()
{
	ProcessEvent(FindFunctionChecked(g_026e30cc), NULL);
}

extern FName g_026e2ddc;
	/* BMGAME_AddItemToEvidenceArray */
/* Kit gap: the generated glue for RForensicsDevice's script event AddItemToEvidenceArray (BmGameClasses.h) isn't declared; this build keeps it out of line. */
struct ARForensicsDevice_ : public ARForensicsDevice
{
	void eventAddItemToEvidenceArray(const FScriptInterface& Item);
};

// @baa 0x01673010
void ARForensicsDevice_::eventAddItemToEvidenceArray(const FScriptInterface& Item)
{
	struct RForensicsDevice_eventAddItemToEvidenceArray_Parms
	{
		FScriptInterface Item;
	} Parms;
	Parms.Item = Item;
	ProcessEvent(FindFunctionChecked(g_026e2ddc), &Parms);
}

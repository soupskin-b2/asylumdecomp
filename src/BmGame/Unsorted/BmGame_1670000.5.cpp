// BmGame_1670000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e3110;
	/* BMGAME_AddItemToEvidenceDimArray */
/* Kit gap: the generated glue for RForensicsDevice's script event AddItemToEvidenceDimArray (BmGameClasses.h) isn't declared; this build keeps it out of line. */
struct ARForensicsDevice_ : public ARForensicsDevice
{
	void eventAddItemToEvidenceDimArray(const FScriptInterface& Item);
};

// @baa 0x01673060
void ARForensicsDevice_::eventAddItemToEvidenceDimArray(const FScriptInterface& Item)
{
	struct RForensicsDevice_eventAddItemToEvidenceDimArray_Parms
	{
		FScriptInterface Item;
	} Parms;
	Parms.Item = Item;
	ProcessEvent(FindFunctionChecked(g_026e3110), &Parms);
}

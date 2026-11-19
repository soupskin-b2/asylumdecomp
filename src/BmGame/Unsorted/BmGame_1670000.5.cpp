// BmGame_1670000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e3110;

// @baa 0x01673060
void ARForensicsDevice::eventAddItemToEvidenceDimArray(const FScriptInterface& Item)
{
	struct RForensicsDevice_eventAddItemToEvidenceDimArray_Parms
	{
		FScriptInterface Item;
	} Parms;
	Parms.Item = Item;
	ProcessEvent(FindFunctionChecked(g_026e3110), &Parms);
}

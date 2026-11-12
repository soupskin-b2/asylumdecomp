// Engine_15d0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e3898;
	/* PredatorActivated */
struct ARGameInfo_ : public ARGameInfo
{
	void eventPredatorActivated();
};

// @baa 0x015d8340
/* RGameInfo.PredatorActivated script event: the generated glue, out of line here. */
void ARGameInfo_::eventPredatorActivated()
{
	ProcessEvent(FindFunctionChecked(g_026e3898), NULL);
}

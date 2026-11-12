// BmGameForensicClasses.cpp: 1 function
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

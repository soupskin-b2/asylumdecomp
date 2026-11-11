// CommonGame_1510000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern char g_026e0bf4;
extern char g_026e0bd8;

// @baa 0x015127e0
void ARDebugMenu::execBreatherBufferToggle(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	((ARDebugMenu*)&g_026e0bf4)->sub_015109e0();
	((ARDebugMenu*)&g_026e0bd8)->sub_015109e0();
}

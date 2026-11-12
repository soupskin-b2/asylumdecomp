// BmGame_1580000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e29dc;
	/* CopyInState */
struct URSeqAct_RandomSwitchForGameOver_ : public URSeqAct_RandomSwitchForGameOver
{
	void eventCopyInState();
};

// @baa 0x01582f20
/* RSeqAct_RandomSwitchForGameOver.CopyInState script event: the generated glue, out of line here. */
void URSeqAct_RandomSwitchForGameOver_::eventCopyInState()
{
	ProcessEvent(FindFunctionChecked(g_026e29dc), NULL);
}

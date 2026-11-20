// BmGameClasses.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/Native.h"

extern FName g_026e2ac8;
	/* BMGAME_DeactivatePP */
/* Inlined here: the script-event glue for eventDeactivatePP (0x0154bc40); Classes.h declares the out-of-line copy. */
struct URSeqAct_ModifyPostProcess_ : public URSeqAct_ModifyPostProcess
{
	void eventDeactivatePP(class ULocalPlayer* Player)
	{
		struct RSeqAct_ModifyPostProcess_eventDeactivatePP_Parms
		{
			class ULocalPlayer* Player;
		} Parms;
		Parms.Player = Player;
		ProcessEvent(FindFunctionChecked(g_026e2ac8), &Parms);
	}
};

// @baa 0x01564df0
/* Slot 0x178 is USequenceOp::DeActivated: script restores the first local player's post process, then the base
 * deactivation runs. */
void URSeqAct_ModifyPostProcess::DeActivated()
{
	((URSeqAct_ModifyPostProcess_*)this)->eventDeactivatePP(GEngine->GamePlayers(0));
	Super::DeActivated();
}

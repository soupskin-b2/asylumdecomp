// BmGameClasses.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/Native.h"

extern FName g_026e2ac8;
	/* BMGAME_DeactivatePP */
/* Kit gap: the script event's generated glue (BmGameClasses.h). */
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
/* Slot 0x178 is USequenceOp::DeActivated (unnamed in the kit): script restores the first local player's post
 * process, then the base deactivation runs. */
void URSeqAct_ModifyPostProcess::vf_178()
{
	((URSeqAct_ModifyPostProcess_*)this)->eventDeactivatePP(GEngine->GamePlayers(0));
	Super::vf_178();
}

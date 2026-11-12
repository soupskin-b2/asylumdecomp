// RAnimNotify_Script.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e2a00;
	/* TriggerGadgetAnim */
struct URAnimNotify_PlayGadgetAnim_ : public URAnimNotify_PlayGadgetAnim
{
	void eventTriggerGadgetAnim(class ARPawnPlayer* Player);
};

// @baa 0x01592110
/* RAnimNotify_PlayGadgetAnim.TriggerGadgetAnim script event: the generated glue, out of line here. */
void URAnimNotify_PlayGadgetAnim_::eventTriggerGadgetAnim(class ARPawnPlayer* Player)
{
	struct RAnimNotify_PlayGadgetAnim_eventTriggerGadgetAnim_Parms
	{
		class ARPawnPlayer* Player;
	} Parms;
	Parms.Player = Player;
	ProcessEvent(FindFunctionChecked(g_026e2a00), &Parms);
}

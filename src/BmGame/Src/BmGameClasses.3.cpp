// BmGameClasses.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

extern FName g_026e2644;
 /* InitHUD */
struct URSeqAct_HUDTimer_ : public URSeqAct_HUDTimer
{
    void eventInitHUD();
};

/* RSeqAct_HUDTimer.InitHUD script event: the generated glue (no parameters). */
inline void URSeqAct_HUDTimer_::eventInitHUD()
{
    ProcessEvent(FindFunctionChecked(g_026e2644), NULL);
}

// @baa 0x01556a30
/* Starts the timer from its full duration and lets script set up the HUD. */
void URSeqAct_HUDTimer::Activated()
{
    RemainingTime = (FLOAT)TimeInSeconds;
    LastUpdateTime = GWorld->GetWorldInfo()->TimeSeconds;
    ((URSeqAct_HUDTimer_*)this)->eventInitHUD();
}

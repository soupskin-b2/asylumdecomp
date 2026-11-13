// BmGame_15f0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// The event's FName (BMGAME_DoCustomVisCheck).
extern FName g_026e347c;
// @baa 0x015f43a0
UBOOL ARPawnVillain::eventDoCustomVisCheck()
{
    struct RPawnVillain_eventParms
    {
        UBOOL ReturnValue;
    };
    RPawnVillain_eventParms Parms;
    Parms.ReturnValue = FALSE;
    ProcessEvent(FindFunctionChecked(g_026e347c), &Parms);
    return Parms.ReturnValue;
}

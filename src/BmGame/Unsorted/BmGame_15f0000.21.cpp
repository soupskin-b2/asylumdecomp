// BmGame_15f0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// The event's FName (its script name is not known yet).
extern FName g_026e347c;
// IRSpotableInterface's virtuals aren't known in the shared headers; this
// declares the one ARPawnVillain implements here so the override gets the
// interface's `this` (ARPawnVillain + 0x7f0), as the original does.
struct IRSpotableInterface_ {
    virtual UBOOL sub_015f43a0();
};

struct ARPawnVillain_ : public ARBMPawnAI, public IRSpotableInterface_ {
    virtual UBOOL sub_015f43a0();
};

// @baa 0x015f43a0
UBOOL ARPawnVillain_::sub_015f43a0()
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

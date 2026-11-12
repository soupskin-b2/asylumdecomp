// UnSequence.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// The editor isn't compiled into this build (UE3's Core.h defines it away).
#ifndef GIsEditor
#define GIsEditor FALSE
#endif

// @baa 0x008e2de0
void USeqAct_Gate::Activated()
{
    // open, close or toggle the gate
    if (InputLinks(1).bHasImpulse)
    {
        bOpen = TRUE;
    }
    else if (InputLinks(2).bHasImpulse)
    {
        bOpen = FALSE;
    }
    else if (InputLinks(3).bHasImpulse)
    {
        bOpen = !bOpen;
    }

    // if the gate is open and the input impulse came in
    if (bOpen && InputLinks(0).bHasImpulse)
    {
        // pass the impulse on
        if (!OutputLinks(0).bDisabled && !(OutputLinks(0).bDisabledPIE && GIsEditor))
        {
            OutputLinks(0).bHasImpulse = TRUE;
        }

        // close the gate once it has been activated enough times
        if (AutoCloseCount > 0 && ActivateCount >= AutoCloseCount)
        {
            bOpen = FALSE;
        }
    }
}

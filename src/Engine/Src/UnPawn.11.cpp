// UnPawn.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"


// @baa 0x008650a0
UBOOL APawn::IsLocallyControlled()
{
    if (!Controller)
    {
        return FALSE;
    }
    if (GWorld->GetNetMode() == NM_Standalone)
    {
        return TRUE;
    }
    if (!Controller->GetAPlayerController())
    {
        return TRUE;
    }
    return Controller->IsLocalController(); /* UE3 AController::IsLocalPlayerController */
}

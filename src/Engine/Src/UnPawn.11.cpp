// UnPawn.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

#undef GWorld
#define GWorld ((UWorld*)g_026b62b8)
/* Unnamed in the kit: UE3's APawn::IsLocallyControlled(). */
struct APawn_ : public APawn
{
    UBOOL sub_008650a0();
};

// @baa 0x008650a0
UBOOL APawn_::sub_008650a0()
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
    return Controller->vf_3a4(); /* UE3 AController::IsLocalPlayerController */
}

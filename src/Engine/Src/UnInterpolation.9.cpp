// UnInterpolation.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"
#include "ue3/Cast.h"
#include "ue3/Classes.h"
#include "ue3/Native.h"

/* Unnamed in the kit: the USeqAct_Interp check whether a player controller should be driven by this matinee (UE3
 * leaves debug camera controllers alone and honours PreferredSplitScreenNum, 1-based into GEngine->GamePlayers). */

// @baa 0x00cf33e0
UBOOL USeqAct_Interp::sub_00cf33e0(APlayerController* PC)
{
    if (PC != NULL && ObjectIsA(PC, ADebugCameraController::StaticClass()))
    {
        return FALSE;
    }

    UBOOL bResult = TRUE;
    if (PreferredSplitScreenNum != 0)
    {
        bResult = FALSE;
        ULocalPlayer* LP = Cast<ULocalPlayer>(PC->Player);
        if (LP != NULL && GEngine->GamePlayers.FindItemIndex(LP) + 1 == PreferredSplitScreenNum)
        {
            bResult = TRUE;
        }
    }
    return bResult;
}

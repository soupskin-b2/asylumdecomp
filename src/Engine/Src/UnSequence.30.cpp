// UnSequence.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Cast.h"
#include "ue3/Classes.h"
#include "ue3/Native.h"

// @baa 0x008b1870
/* UE3's USeqAct_PrepareMapChange::UpdateOp(FLOAT DeltaTime): done once the game engine reports the map change is ready
 * (UGameEngine 0x007d9c20). */
UBOOL USeqAct_PrepareMapChange::UpdateOp(FLOAT DeltaTime)
{
    UBOOL bResult = FALSE;
    UGameEngine* GameEngine = Cast<UGameEngine>(GEngine);
    if (GameEngine != NULL)
    {
        bResult = GameEngine->sub_007d9c20();
    }
    return bResult;
}

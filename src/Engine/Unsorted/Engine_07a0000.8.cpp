// Engine_07a0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"
#include "ue3/Native.h"

class FSceneViewFamily;
/* Unnamed in the kit: UE3's UWorld::FlushLevelStreaming(FSceneViewFamily* ViewFamily = NULL). */

// @baa 0x007ac510
/* UE3's APlayerController::ClientFlushLevelStreaming(): unless a map change is pending, finish all level
 * streaming now and collect garbage (AWorldInfo::sub_00803c90 is UE3's ForceGarbageCollection(UBOOL bFullPurge)). */
void APlayerController::ClientFlushLevelStreaming()
{
    UGameEngine* GameEngine = Cast<UGameEngine>(GEngine);
    if (GameEngine == NULL || !GameEngine->bShouldCommitPendingMapChange)
    {
        ((UWorld*)GWorld)->sub_009d0be0(NULL);
        WorldInfo->bRequestedBlockOnAsyncLoading = TRUE;
        WorldInfo->sub_00803c90(FALSE);
    }
}

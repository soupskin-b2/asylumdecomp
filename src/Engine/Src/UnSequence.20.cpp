// UnSequence.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Native.h"
#include "ue3/Cast.h"

extern template APlayerController* Cast<APlayerController>(UObject* Src);
/* APlayerController::eventLevelStreamingStatusChanged (script event thunk, 0x007d6380) isn't declared in Classes.h. */

struct USeqAct_LevelStreamingBase_ : public USeqAct_LevelStreamingBase
{
    void ActivateLevel(ULevelStreaming* LevelStreamingObject);
};

// @baa 0x008c0480
void USeqAct_LevelStreamingBase_::ActivateLevel(ULevelStreaming* LevelStreamingObject)
{
    if (LevelStreamingObject != NULL)
    {
        if (InputLinks(0).bHasImpulse)
        {
            // load the level (and make it visible if requested)
            LevelStreamingObject->bShouldBeLoaded = TRUE;
            LevelStreamingObject->bShouldBeVisible |= bMakeVisibleAfterLoad;
            LevelStreamingObject->bShouldBlockOnLoad = bShouldBlockOnLoad;
        }
        else if (InputLinks(1).bHasImpulse)
        {
            // unload it
            LevelStreamingObject->bShouldBeLoaded = FALSE;
            LevelStreamingObject->bShouldBeVisible = FALSE;
        }

        // tell the players about the change
        for (AController* Controller = GWorld->GetWorldInfo()->ControllerList; Controller != NULL; Controller = Controller->NextController)
        {
            APlayerController* PC = Cast<APlayerController>(Controller);
            if (PC != NULL)
            {
                PC->eventLevelStreamingStatusChanged(LevelStreamingObject,
                    LevelStreamingObject->bShouldBeLoaded, LevelStreamingObject->bShouldBeVisible, LevelStreamingObject->bShouldBlockOnLoad);
            }
        }
    }
}

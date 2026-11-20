// UnSequence.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

// @baa 0x008ac870
/* UE3's USeqAct_ForceGarbageCollection::Activated(): ask every player controller to collect garbage. */
void USeqAct_ForceGarbageCollection::Activated()
{
    AWorldInfo* WorldInfo = GWorld ? GWorld->GetWorldInfo() : NULL;
    for (AController* Controller = WorldInfo->ControllerList; Controller != NULL; Controller = Controller->NextController)
    {
        APlayerController* PC = Controller->GetAPlayerController();
        if (PC != NULL)
        {
            ((APlayerController*)PC)->eventClientForceGarbageCollection();
        }
    }
}

/* Unnamed in the kit (0x008ac050): whether this event may fire now (enabled, right side of the network for
 * bClientSideOnly, trigger count left); unless only testing, it activates with no originator. */

// @baa 0x008ac050
UBOOL USequenceEvent::sub_008ac050(UBOOL bTest)
{
    if (bEnabled &&
        (bClientSideOnly ? GWorld->GetWorldInfo()->NetMode != NM_DedicatedServer : GWorld->GetWorldInfo()->NetMode != NM_Client) &&
        (MaxTriggerCount == 0 || TriggerCount < MaxTriggerCount))
    {
        if (!bTest)
        {
            ActivateEvent(NULL, NULL, NULL, FALSE, FALSE);
        }
        return TRUE;
    }
    return FALSE;
}

extern FName g_026c3f34;
 /* ENGINE_ClientCommitMapChange */
/* EngineClasses.h's inline script-event glue (not in the kit). */
struct APlayerController__008ac490 : public APlayerController
{
    void eventClientCommitMapChange()
    {
        ProcessEvent(FindFunctionChecked(g_026c3f34), NULL);
    }
};

static inline AWorldInfo* GetCurrentWorldInfo()
{
    return GWorld ? GWorld->GetWorldInfo() : NULL;
}

// @baa 0x008ac490
/* UE3's USeqAct_CommitMapChange::Activated(): on the server, have every player controller commit the pending map
 * change; commit it here directly unless one of them (slot 0x3a4) takes care of it. */
void USeqAct_CommitMapChange::Activated()
{
    if (GetCurrentWorldInfo()->NetMode != NM_Client)
    {
        UBOOL bHandled = FALSE;
        for (AController* C = GetCurrentWorldInfo()->ControllerList; C != NULL; C = C->NextController)
        {
            APlayerController* PC = C->GetAPlayerController();
            if (PC != NULL)
            {
                if (bHandled || PC->IsLocalController())
                {
                    bHandled = TRUE;
                }
                ((APlayerController__008ac490*)PC)->eventClientCommitMapChange();
            }
        }
        if (!bHandled)
        {
            GetCurrentWorldInfo()->CommitMapChange();
        }
    }
}

// UnSequence.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Native.h"

/* USeqAct_Latent::DeActivated (0x008bea90) */

// @baa 0x008c0660
void USeqAct_PrepareMapChange::DeActivated()
{
    USeqAct_Latent::DeActivated(); // Super::DeActivated()
    if (bIsHighPriority)
    {
        // the high priority load is done
        AWorldInfo* WorldInfo = GWorld ? GWorld->GetWorldInfo() : NULL;
        WorldInfo->bHighPriorityLoading = FALSE;
        WorldInfo->bNetDirty = TRUE;
        WorldInfo->bForceNetUpdate = TRUE;
    }
}

// @baa 0x008abfe0
void USeqAct_Delay::Activated()
{
    RemainingTime = Duration;
    LastUpdateTime = GWorld->GetWorldInfo()->TimeSeconds;
}

// @baa 0x008aba50
AWorldInfo* USequenceObject::GetWorldInfo()
{
    return GWorld ? GWorld->GetWorldInfo() : NULL;
}

// @baa 0x008c0110
void USeqCond_GetServerType::Activated()
{
    switch (GWorld->GetNetMode())
    {
    case NM_Standalone:
        OutputLinks(0).bHasImpulse = TRUE;
        break;
    case NM_DedicatedServer:
        OutputLinks(1).bHasImpulse = TRUE;
        break;
    case NM_ListenServer:
        OutputLinks(2).bHasImpulse = TRUE;
        break;
    }
}

// @baa 0x008ac0e0
/* TRUE once the streaming level has finished its pending load/unload (and become visible if requested) */
UBOOL USeqAct_LevelStreaming::IsLevelStreamingComplete(ULevelStreaming* LevelStreamingObject)
{
    if (LevelStreamingObject == NULL)
    {
        return TRUE;
    }
    // level is neither loaded nor should it be, so we finished unloading (pending GC)
    if ((LevelStreamingObject->LoadedLevel == NULL || LevelStreamingObject->bHasUnloadRequestPending) && !LevelStreamingObject->bShouldBeLoaded)
    {
        return TRUE;
    }
    // level shouldn't be loaded but is, as background streaming is disabled
    else if (LevelStreamingObject->LoadedLevel && !LevelStreamingObject->bShouldBeLoaded && !GEngine->bUseBackgroundLevelStreaming)
    {
        return TRUE;
    }
    // level is both loaded and wanted (and visible if it has to be)
    else if (LevelStreamingObject->LoadedLevel && LevelStreamingObject->bShouldBeLoaded
        && (!bMakeVisibleAfterLoad || LevelStreamingObject->bIsVisible))
    {
        return TRUE;
    }
    return FALSE;
}

struct USeqAct_MultiLevelStreaming_ : public USeqAct_MultiLevelStreaming
{
    /* same test as USeqAct_LevelStreaming's (0x008ac0e0), inlined here */
    UBOOL IsLevelStreamingComplete(ULevelStreaming* LevelStreamingObject)
    {
        if (LevelStreamingObject == NULL)
        {
            return TRUE;
        }
        if ((LevelStreamingObject->LoadedLevel == NULL || LevelStreamingObject->bHasUnloadRequestPending) && !LevelStreamingObject->bShouldBeLoaded)
        {
            return TRUE;
        }
        else if (LevelStreamingObject->LoadedLevel && !LevelStreamingObject->bShouldBeLoaded && !GEngine->bUseBackgroundLevelStreaming)
        {
            return TRUE;
        }
        else if (LevelStreamingObject->LoadedLevel && LevelStreamingObject->bShouldBeLoaded
            && (!bMakeVisibleAfterLoad || LevelStreamingObject->bIsVisible))
        {
            return TRUE;
        }
        return FALSE;
    }
};

// @baa 0x008c0590
UBOOL USeqAct_MultiLevelStreaming::UpdateOp(FLOAT DeltaTime)
{
    // done once every level is
    UBOOL bAllComplete = TRUE;
    for (INT LevelIdx = 0; LevelIdx < Levels.Num(); LevelIdx++)
    {
        if (!((USeqAct_MultiLevelStreaming_*)this)->IsLevelStreamingComplete(Levels(LevelIdx).Level))
        {
            bAllComplete = FALSE;
            break;
        }
    }
    return bAllComplete;
}

// @baa 0x008e6d80
void USeqAct_Timer::Activated()
{
    // start timing from now
    Time = 0.f;
    ActivationTime = GWorld ? GWorld->GetTimeSeconds() : 0.f;
}

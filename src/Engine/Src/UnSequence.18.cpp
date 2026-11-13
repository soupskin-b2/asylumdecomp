// UnSequence.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Native.h"

/* USeqAct_Latent::DeActivated (0x008bea90) */
struct USeqAct_Latent_ : public USeqAct_Latent
{
    void DeActivated();
};

/* slot 0x178 (vf_178) is USequenceOp::DeActivated */
struct USeqAct_PrepareMapChange_ : public USeqAct_PrepareMapChange
{
    void DeActivated();
};

// @baa 0x008c0660
void USeqAct_PrepareMapChange_::DeActivated()
{
    ((USeqAct_Latent_*)this)->USeqAct_Latent_::DeActivated(); // Super::DeActivated()
    if (bIsHighPriority)
    {
        // the high priority load is done
        AWorldInfo* WorldInfo = GWorld ? GWorld->GetWorldInfo() : NULL;
        WorldInfo->bHighPriorityLoading = FALSE;
        WorldInfo->bNetDirty = TRUE;
        WorldInfo->bForceNetUpdate = TRUE;
    }
}

/* slot 0x174 (vf_174) is USequenceOp::Activated */
struct USeqAct_Delay_ : public USeqAct_Delay
{
    void Activated();
};

// @baa 0x008abfe0
void USeqAct_Delay_::Activated()
{
    RemainingTime = Duration;
    LastUpdateTime = GWorld->GetWorldInfo()->TimeSeconds;
}

struct USequenceObject_ : public USequenceObject
{
    AWorldInfo* GetWorldInfo();
};

// @baa 0x008aba50
AWorldInfo* USequenceObject_::GetWorldInfo()
{
    return GWorld ? GWorld->GetWorldInfo() : NULL;
}

/* UWorld::GetNetMode (0x009c84b0) isn't declared in Classes.h. */
struct UWorld_ : public UWorld
{
    ENetMode GetNetMode();
};

/* slot 0x174 (vf_174) is USequenceOp::Activated */
struct USeqCond_GetServerType_ : public USeqCond_GetServerType
{
    void Activated();
};

// @baa 0x008c0110
void USeqCond_GetServerType_::Activated()
{
    switch (((UWorld_*)GWorld)->GetNetMode())
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

struct USeqAct_LevelStreaming_ : public USeqAct_LevelStreaming
{
    UBOOL IsLevelStreamingComplete(ULevelStreaming* LevelStreamingObject);
};

// @baa 0x008ac0e0
/* TRUE once the streaming level has finished its pending load/unload (and become visible if requested) */
UBOOL USeqAct_LevelStreaming_::IsLevelStreamingComplete(ULevelStreaming* LevelStreamingObject)
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
    UBOOL UpdateOp(FLOAT DeltaTime);
};

// @baa 0x008c0590
UBOOL USeqAct_MultiLevelStreaming_::UpdateOp(FLOAT DeltaTime)
{
    // done once every level is
    UBOOL bAllComplete = TRUE;
    for (INT LevelIdx = 0; LevelIdx < Levels.Num(); LevelIdx++)
    {
        if (!IsLevelStreamingComplete(Levels(LevelIdx).Level))
        {
            bAllComplete = FALSE;
            break;
        }
    }
    return bAllComplete;
}

/* UWorld::GetTimeSeconds (0x009c8f80) isn't declared in Classes.h. */
struct UWorld__008e6d80 : public UWorld
{
    FLOAT GetTimeSeconds();
};

struct USeqAct_Timer_ : public USeqAct_Timer
{
    void Activated();
};

// @baa 0x008e6d80
void USeqAct_Timer_::Activated()
{
    // start timing from now
    Time = 0.f;
    ActivationTime = GWorld ? GWorld->GetTimeSeconds() : 0.f;
}

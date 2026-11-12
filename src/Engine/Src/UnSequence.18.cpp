// UnSequence.cpp: 3 functions
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

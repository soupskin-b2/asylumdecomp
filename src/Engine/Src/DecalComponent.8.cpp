// DecalComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Implement.h"
#include "ue3/Classes.h"

/* Native type behind FDecalReceiver::RenderData (DecalRenderData.h). */
class FDecalRenderData
{
public:
    ~FDecalRenderData();                /* 00695410 */
};

/* Named accessors for the FPointer fields (ISSUES.md 19). */
static __forceinline FDecalRenderData*& GetRenderData(FDecalReceiver& Receiver)
{
    return (FDecalRenderData*&)Receiver.RenderData.Dummy;
}

static __forceinline FRenderCommandFence*& GetReleaseResourcesFence(UDecalComponent* Decal)
{
    return (FRenderCommandFence*&)Decal->ReleaseResourcesFence.Dummy;
}

// @baa 0x006986e0
/* FinishDestroy */
void UDecalComponent::vf_02c()
{
    // Free any decal receivers.
    for (INT ReceiverIndex = 0; ReceiverIndex < DecalReceivers.Num(); ReceiverIndex++)
    {
        FDecalRenderData* RenderData = GetRenderData(DecalReceivers(ReceiverIndex));
        if (RenderData)
        {
            delete RenderData;
        }
    }
    DecalReceivers.Empty();

    // Delete any existing resource fence.
    delete GetReleaseResourcesFence(this);
    GetReleaseResourcesFence(this) = NULL;

    Super::vf_02c();
}

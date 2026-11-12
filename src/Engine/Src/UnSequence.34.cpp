// UnSequence.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"
#include "ue3/Cast.h"
#include "ue3/Classes.h"

extern FName g_026c4cb0;
 /* ENGINE_ClientSetCameraFade */
/* TArray::AddItem (Array.h), which the kit's TArray lacks; inline here. */
template<typename T> struct TArrayAddItem_ : public TArray<T>
{
    INT AddItem(const T& Item)
    {
        const INT Index = this->Add(1);
        new((EInternal*)(this->GetTypedData() + Index)) T(Item);
        return Index;
    }
};

/* EngineClasses.h's inline script-event glue (not in the kit). */
struct APlayerController_ : public APlayerController
{
    void eventClientSetCameraFade(UBOOL bEnableFading, FColor FadeColor, FVector2D FadeAlpha, FLOAT FadeTime)
    {
        struct PlayerController_eventClientSetCameraFade_Parms
        {
            UBOOL bEnableFading;
            FColor FadeColor;
            FVector2D FadeAlpha;
            FLOAT FadeTime;
        } Parms;
        Parms.bEnableFading = bEnableFading;
        Parms.FadeColor = FadeColor;
        Parms.FadeAlpha = FadeAlpha;
        Parms.FadeTime = FadeTime;
        ProcessEvent(FindFunctionChecked(g_026c4cb0), &Parms);
    }
};

// @baa 0x008ccdf0
/* UE3's USeqAct_CameraFade::Activated(): start the fade on every targeted player controller, remember them for
 * UpdateOp, and fire the default output. */
void USeqAct_CameraFade::Activated()
{
    FadeTimeRemaining = FadeTime;
    CachedPCs.Empty();
    for (INT Idx = 0; Idx < Targets.Num(); Idx++)
    {
        APlayerController* PC = Cast<APlayerController>(Targets(Idx));
        if (PC != NULL)
        {
            ((APlayerController_*)PC)->eventClientSetCameraFade(TRUE, FadeColor, FadeAlpha, FadeTime);
            ((TArrayAddItem_<APlayerController*>&)CachedPCs).AddItem(PC);
        }
    }
    FSeqOpOutputLink& Link = OutputLinks(0);
    if (!Link.bDisabled)
    {
        Link.bHasImpulse = TRUE;
    }
}

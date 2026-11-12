// UnSequence.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/AppMath.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"
#include "ue3/Classes.h"
#include "ue3/Native.h"

/* UnMath.h */
#define SMALL_NUMBER (1.e-8f)
/* Unnamed in the kit (0x008c09f0): force (or stop forcing) the materials' mips resident for Duration, here and on
 * every remote player. */

extern FName g_026c4580;
 /* ENGINE_ClientSetForceMipLevelsToBeResident */
/* EngineClasses.h's inline script-event glue (not in the kit). */
struct APlayerController_ : public APlayerController
{
    void eventClientSetForceMipLevelsToBeResident(UMaterialInterface* Material, FLOAT ForceDuration)
    {
        struct PlayerController_eventClientSetForceMipLevelsToBeResident_Parms
        {
            UMaterialInterface* Material;
            FLOAT ForceDuration;
        } Parms;
        Parms.Material = Material;
        Parms.ForceDuration = ForceDuration;
        ProcessEvent(FindFunctionChecked(g_026c4580), &Parms);
    }
};

// @baa 0x008c09f0
void USeqAct_ForceMaterialMipsResident::sub_008c09f0(UBOOL bEnable, FLOAT Duration)
{
    if (!bEnable)
    {
        Duration = 0.f;
    }
    else if (appAbs(Duration) < SMALL_NUMBER)
    {
        Duration = 3600.f;
    }
    for (INT Idx = 0; Idx < ForceMaterials.Num(); Idx++)
    {
        UMaterialInterface* Material = ForceMaterials(Idx);
        if (Material != NULL)
        {
            Material->vf_12c(Duration);
            for (AController* C = GWorld->sub_009c8570(); C != NULL; C = C->NextController)
            {
                APlayerController* PC = Cast<APlayerController>(C);
                if (PC != NULL && !PC->vf_3a4())
                {
                    ((APlayerController_*)PC)->eventClientSetForceMipLevelsToBeResident(Material, Duration);
                }
            }
        }
    }
}

// @baa 0x008cd1a0
/* UE3's USeqAct_ForceMaterialMipsResident::Activated(): start forcing; a (near) zero duration means an hour. */
void USeqAct_ForceMaterialMipsResident::Activated()
{
    ((USeqAct_ForceMaterialMipsResident*)this)->sub_008c09f0(TRUE, ForceDuration);
    FLOAT Duration = ForceDuration;
    if (appAbs(Duration) < SMALL_NUMBER)
    {
        Duration = 3600.f;
    }
    RemainingTime = Duration;
}

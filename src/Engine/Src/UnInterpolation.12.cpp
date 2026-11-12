// UnInterpolation.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern FName g_026c45cc;
 /* ENGINE_Update */
/* EngineClasses.h's inline script-event glue (not in the kit). */
struct AMatineeActor_ : public AMatineeActor
{
    void eventUpdate()
    {
        ProcessEvent(FindFunctionChecked(g_026c45cc), NULL);
    }
};

// @baa 0x00ceb450
/* USeqAct_Interp slot 0x16c (kit vf_16c, UE3's PopulateLinkedVariableValues()): pull the linked variables in and, when
 * the play rate changed, have the replication actor resend its state. */
void USeqAct_Interp::vf_16c()
{
    FLOAT OldPlayRate = PlayRate;
    Super::vf_16c();
    if (PlayRate != OldPlayRate && ReplicatedActor != NULL)
    {
        ((AMatineeActor_*)ReplicatedActor)->eventUpdate();
    }
}

extern FName g_026c4c28;
 /* ENGINE_Update */
/* EngineClasses.h's inline script-event glue (not in the kit). */
struct AActor_ : public AActor
{
    void eventInterpolationChanged(USeqAct_Interp* InterpAction)
    {
        struct Actor_eventInterpolationChanged_Parms
        {
            USeqAct_Interp* InterpAction;
        } Parms;
        Parms.InterpAction = InterpAction;
        ProcessEvent(FindFunctionChecked(g_026c4c28), &Parms);
    }
};

struct USeqAct_Interp_ : public USeqAct_Interp
{
    void NotifyActorsOfChange(); /* 0x00cf3240 */
};

// @baa 0x00cf3240
/* UE3's USeqAct_Interp::NotifyActorsOfChange(): tell every actor this matinee drives that something changed, and have
 * the replication actor resend its state. */
void USeqAct_Interp_::NotifyActorsOfChange()
{
    for (INT i = 0; i < LatentActors.Num(); i++)
    {
        AActor* Actor = LatentActors(i);
        if (Actor != NULL && !Actor->IsPendingKill())
        {
            ((AActor_*)Actor)->eventInterpolationChanged(this);
        }
    }
    if (ReplicatedActor != NULL)
    {
        ((AMatineeActor_*)ReplicatedActor)->eventUpdate();
    }
}

// UnInterpolation.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"
#include "ue3/Classes.h"
#include "ue3/Native.h"

// @baa 0x00d02f70
/* USeqAct_Interp slot 0x154 (kit vf_154, UE3's CleanUp()): shut the matinee down, destroy its replication actor and
 * unhook it from every latent actor (USeqAct_Latent::CleanUp, inlined). */
void USeqAct_Interp::vf_154()
{
    this->TermInterp();

    if (ReplicatedActor != NULL)
    {
        GWorld->DestroyActor(ReplicatedActor, FALSE, TRUE);
    }

    for (INT Idx = 0; Idx < LatentActors.Num(); Idx++)
    {
        if (LatentActors(Idx) != NULL)
        {
            LatentActors(Idx)->LatentActions.RemoveItem(this);
        }
    }
}

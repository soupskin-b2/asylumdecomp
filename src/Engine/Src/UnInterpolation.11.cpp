// UnInterpolation.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"
#include "ue3/Classes.h"
#include "ue3/Native.h"

/* Unnamed in the kit: UE3's USeqAct_Interp::TermInterp() (0x00cfa910). */

// @baa 0x00d02f70
/* USeqAct_Interp slot 0x154 (kit vf_154, UE3's CleanUp()): shut the matinee down, destroy its replication actor and
 * unhook it from every latent actor (USeqAct_Latent::CleanUp, inlined). */
void USeqAct_Interp::vf_154()
{
    ((USeqAct_Interp*)this)->sub_00cfa910();

    if (ReplicatedActor != NULL)
    {
        GWorld->sub_007e72a0(ReplicatedActor, FALSE, TRUE);
    }

    for (INT Idx = 0; Idx < LatentActors.Num(); Idx++)
    {
        if (LatentActors(Idx) != NULL)
        {
            LatentActors(Idx)->LatentActions.RemoveItem(this);
        }
    }
}

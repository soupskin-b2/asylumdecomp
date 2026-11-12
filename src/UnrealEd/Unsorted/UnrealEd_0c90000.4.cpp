// UnrealEd_0c90000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

// @baa 0x00c9a350
/* USeqAct_CrowdSpawner slot 0x154 (kit vf_154, UE3 USequenceObject::CleanUp-style): destroy the replication actor. */
void USeqAct_CrowdSpawner::vf_154()
{
    if (RepActor != NULL)
    {
        GWorld->sub_007e72a0(RepActor, FALSE, TRUE);
        RepActor = NULL;
    }
}

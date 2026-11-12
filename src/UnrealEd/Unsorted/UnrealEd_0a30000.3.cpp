// UnrealEd_0a30000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/PhysX.h"

void USkeletalMeshComponent::WakeSoftBody()
{
    NxSoftBody* nSoftBody = (NxSoftBody*)SoftBodySim;
    if (nSoftBody && bEnableSoftBodySimulation)
    {
        nSoftBody->wakeUp();
    }
}

// @baa 0x00a33af0
void USkeletalMeshComponent::execWakeSoftBody(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    WakeSoftBody();
}

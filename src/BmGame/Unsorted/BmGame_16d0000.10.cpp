// BmGame_16d0000.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x016d1640
FVector ARCrowdAttractor::GetAttractionForce(ARCrowdAgent* Agent, FLOAT DeltaTime)
{
    return FVector(0.f, 0.f, 0.f);
}

struct C
{
    char pad_0[0x8];
    INT Value_8;
    INT Value_c;
    INT Value_10;

    C* sub_016db4b0();
};

// @baa 0x016db4b0
C* C::sub_016db4b0()
{
    Value_8 = 0;
    Value_c = 0;
    Value_10 = 0;
    return this;
}

// @baa 0x016d0c10
void ARWindVolume::PostEditMove(UBOOL bFinished)
{
    Super::PostEditMove(bFinished);
    UpdateEditorComponents();
}

// @baa 0x016d15e0
/* An agent responds to an enabled attractor of its flock (when both have one) and of its flock stage. */
UBOOL ARCrowdAgent::CanRespondToAttractor(ARCrowdAttractor* Attractor)
{
    if (Attractor == NULL)
    {
        return FALSE;
    }
    if (!Attractor->bAttractorEnabled)
    {
        return FALSE;
    }
    if (FlockID && Attractor->FlockID && FlockID != Attractor->FlockID)
    {
        return FALSE;
    }
    if ((FlockStage || Attractor->FlockStage) && FlockStage != Attractor->FlockStage)
    {
        return FALSE;
    }
    return Attractor->FlockStage != 0;
}

// @baa 0x016d0bf0
void ARWindVolume::PostEditChange(UProperty* PropertyThatChanged)
{
    Super::PostEditChange(PropertyThatChanged);
    UpdateEditorComponents();
}

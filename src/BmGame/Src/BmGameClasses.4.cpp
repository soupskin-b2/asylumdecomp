// BmGameClasses.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x01556b60
/* Moves Offset by a random step of between half and all of the jitter range (signed with the range), then folds it
 * back while it overshoots the amplitude, flipping the amplitude's sign on each fold. */
void URBMScreenShakeModifier::ApplyJitter(FLOAT& Amplitude, FLOAT& Offset, FLOAT Frequency, FLOAT DeltaTime)
{
    const FLOAT Range = (Frequency * DeltaTime) * (4.f * Amplitude);
    FLOAT Step;
    if (Range > 0.f)
    {
        const FLOAT Min = Range * 0.5f;
        Step = Min + (Range - Min) * rand() / (FLOAT)RAND_MAX;
    }
    else
    {
        const FLOAT Max = Range * 0.5f;
        Step = Range + (Max - Range) * rand() / (FLOAT)RAND_MAX;
    }
    Offset += Step;
    while (appAbs(Offset) > appAbs(Amplitude))
    {
        Offset = Amplitude - (Offset - Amplitude);
        Amplitude = -Amplitude;
    }
}

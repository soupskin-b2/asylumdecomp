// BmGameClasses.cpp: 2 functions
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

// @baa 0x0155f900
/* The closest point to V inside the volume's stored bounds. */
FVector ARAmbientSoundTrackingVolume::GetClosestPosition(FVector V)
{
	V.X = Clamp(V.X, storedBounds.Min.X, storedBounds.Max.X);
	V.Y = Clamp(V.Y, storedBounds.Min.Y, storedBounds.Max.Y);
	V.Z = Clamp(V.Z, storedBounds.Min.Z, storedBounds.Max.Z);
	return V;
}

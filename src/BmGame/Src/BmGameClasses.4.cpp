// BmGameClasses.cpp: 3 functions
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

// @baa 0x015571e0
/* Advances a shake: TRUE once it has run its course; otherwise applies it at its remaining strength and (when it
 * has an FOV amplitude) wobbles the field of view, then scales the FOV by the fading multiplier. */
UBOOL URBMScreenShakeModifier::UpdateShake(FLOAT DeltaTime, FBMScreenShakeStruct& Shake, FVector& Loc, FRotator& Rot, FLOAT& FOV)
{
	const FLOAT Progress = Shake.Progress + DeltaTime;
	Shake.Progress = Progress;
	const FLOAT Duration = Shake.TimeDuration;
	if (Progress >= Duration)
	{
		return TRUE;
	}
	if (Progress < Duration)
	{
		const FLOAT ShakePct = 1.f - Progress / Duration;
		ApplyShake(DeltaTime, Shake, Loc, Rot, ShakePct);
		const FLOAT FOVAmplitude = Shake.FOVAmplitude;
		if (FOVAmplitude != 0.f)
		{
			Shake.FOVSinOffset += Shake.FOVFrequency * ShakePct * DeltaTime;
			FOV += appSin(Shake.FOVSinOffset) * FOVAmplitude * ShakePct;
		}
		FOV *= (Shake.FOVMultiplier - 1.f) * ShakePct + 1.f;
	}
	return FALSE;
}

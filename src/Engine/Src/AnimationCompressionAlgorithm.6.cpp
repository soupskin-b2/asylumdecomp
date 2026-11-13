// AnimationCompressionAlgorithm.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/AppMath.h"
#include <math.h>

/* the out-of-line TArray<FQuat>/TArray<FLOAT> Remove */
template void TArray<FQuat>::Remove(INT Index, INT Count);

template void TArray<FLOAT>::Remove(INT Index, INT Count);

/* The CRT call here binds where execAcos's does (0x01a37a44, see work/00593cd0.cpp, which matched with asin). */
/* AnimationCompressionAlgorithm.cpp: the angle between two rotations, in units of PI. */
static FORCEINLINE FLOAT FQuatError(const FQuat& Q1, const FQuat& Q2)
{
	const FLOAT cosom = Q1.X * Q2.X + Q1.Y * Q2.Y + Q1.Z * Q2.Z + Q1.W * Q2.W;
	return (appAbs(cosom) < 0.9999999f) ? asin(Clamp(cosom, -1.f, 1.f)) * (1.f / PI) : 0.0f;
}

// @baa 0x00c01df0
/* AnimationCompressionAlgorithm.cpp: a track whose keys are all within MaxRotDelta of the first is reduced to that key. */
static FORCEINLINE void FilterTrivialRotationKeys(FRotationTrack& Track, FLOAT MaxRotDelta)
{
	const INT KeyCount = Track.Times.Num();
#line 737 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\AnimationCompressionAlgorithm.cpp"
	check(Track.RotKeys.Num() == Track.Times.Num());

	// Only bother doing anything if we have some keys!
	if (KeyCount > 0)
	{
		const FQuat& FirstRot = Track.RotKeys(0);
		UBOOL bFramesIdentical = TRUE;
		for (INT KeyIndex = 1; KeyIndex < KeyCount; ++KeyIndex)
		{
			if (FQuatError(Track.RotKeys(KeyIndex), FirstRot) > MaxRotDelta)
			{
				bFramesIdentical = FALSE;
				break;
			}
		}

		// If all keys are the same, remove all but first frame
		if (bFramesIdentical)
		{
			Track.RotKeys.Remove(1, Track.RotKeys.Num() - 1);
			Track.RotKeys.Shrink();
			Track.Times.Remove(1, Track.Times.Num() - 1);
			Track.Times.Shrink();
			Track.Times(0) = 0.0f;
		}
	}
}

void UAnimationCompressionAlgorithm_RemoveLinearKeys::FilterTrivialRotationKeys(TArray<FRotationTrack>& InputTracks, FLOAT MaxRotDelta)
{
	const INT NumTracks = InputTracks.Num();
	for (INT TrackIndex = 0; TrackIndex < NumTracks; ++TrackIndex)
	{
		FRotationTrack& Track = InputTracks(TrackIndex);
		::FilterTrivialRotationKeys(Track, MaxRotDelta);
	}
}

#line 67 "candidate.cpp"

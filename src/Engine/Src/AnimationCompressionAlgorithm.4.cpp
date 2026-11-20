// AnimationCompressionAlgorithm.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC	/* appRealloc out of line, as in Shrink */
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

struct FVectorArray : public TArray<FVector>
{
	void sub_00667a40(INT Index, INT Count);	/* Remove */
};

struct FFloatArray : public TArray<FLOAT>
{
	void sub_00920980(INT Index, INT Count);	/* Remove */
};

// @baa 0x00c01c00
void UAnimationCompressionAlgorithm::FilterTrivialPositionKeys(TArray<FTranslationTrack>& InputTracks, FLOAT MaxPosDelta)
{
	const INT NumTracks = InputTracks.Num();
	for (INT TrackIndex = 0; TrackIndex < NumTracks; ++TrackIndex)
	{
		FTranslationTrack& Track = InputTracks(TrackIndex);
		const INT KeyCount = Track.Times.Num();
#line 691 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\AnimationCompressionAlgorithm.cpp"
		check(Track.PosKeys.Num() == Track.Times.Num());

		// Only bother doing anything if we have some keys!
		if (KeyCount > 0)
		{
			const FVector& FirstPos = Track.PosKeys(0);

			UBOOL bFramesIdentical = TRUE;
			for (INT KeyIndex = 1; KeyIndex < KeyCount; ++KeyIndex)
			{
				const FVector& ThisPos = Track.PosKeys(KeyIndex);

				if ((FirstPos - ThisPos).Size() > MaxPosDelta)
				{
					bFramesIdentical = FALSE;
					break;
				}
			}

			// If all keys are the same, remove all but first frame
			if (bFramesIdentical)
			{
				((FVectorArray&)Track.PosKeys).sub_00667a40(1, Track.PosKeys.Num() - 1);
				Track.PosKeys.Shrink();
				((FFloatArray&)Track.Times).sub_00920980(1, Track.Times.Num() - 1);
				Track.Times.Shrink();
				Track.Times(0) = 0.0f;
			}
		}
	}
}

#line 88 "candidate.cpp"

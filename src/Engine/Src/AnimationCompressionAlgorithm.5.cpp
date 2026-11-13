// AnimationCompressionAlgorithm.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC	/* appRealloc out of line, as in Empty and Shrink */
#include "ue3/Classes.h"

/* Kit gaps, with UE3's definitions (Array.h): TArray has no Shrink; TArray<FLOAT>::Add is out of line
 * here (00544290). */
struct FFloatArray : public TArray<FLOAT>
{
	INT sub_00544290(INT Count);			/* Add */
	void Shrink()
	{
		if (ArrayMax != ArrayNum)
		{
			ArrayMax = ArrayNum;
			AllocatorInstance.ResizeAllocation(ArrayNum, ArrayMax, sizeof(FLOAT));
		}
	}
};

UBOOL HasNonUnitScaleKeys(UAnimSequence* AnimSeq);
// @baa 0x00c00c00
	/* 00bfc050 */
/* AnimationCompressionAlgorithm.cpp: the scale keys of the raw tracks, kept (key major, every track
 * having the same number of keys) only if some bone actually scales. */
void CompressScaleKeys(UAnimSequence* AnimSeq)
{
	AnimSeq->CompressedScaleKeys.Empty();

	if (HasNonUnitScaleKeys(AnimSeq))
	{
		const INT NumTracks = AnimSeq->RawAnimData.Num();
#line 54 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\AnimationCompressionAlgorithm.cpp"
		check(NumTracks > 0);

		const INT NumKeys = AnimSeq->RawAnimData(0).ScaleKeys.Num();
#line 57 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\AnimationCompressionAlgorithm.cpp"
		check(NumKeys > 0);

		// every track needs as many scale keys
		for (INT TrackIndex = 1; TrackIndex < AnimSeq->RawAnimData.Num(); TrackIndex++)
		{
			if (AnimSeq->RawAnimData(TrackIndex).ScaleKeys.Num() != NumKeys)
			{
				return;
			}
		}

		((FFloatArray&)AnimSeq->CompressedScaleKeys).sub_00544290(NumKeys * NumTracks);

		for (INT TrackIndex = 0; TrackIndex < AnimSeq->RawAnimData.Num(); TrackIndex++)
		{
			for (INT KeyIndex = 0; KeyIndex < AnimSeq->RawAnimData(TrackIndex).ScaleKeys.Num(); KeyIndex++)
			{
				const FLOAT Scale = AnimSeq->RawAnimData(TrackIndex).ScaleKeys(KeyIndex);
				AnimSeq->CompressedScaleKeys(KeyIndex * NumTracks + TrackIndex) = Scale;
			}
		}

		AnimSeq->CompressedScaleKeys.Shrink();
	}
}

#line 66 "candidate.cpp"

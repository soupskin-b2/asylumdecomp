// AnimationCompressionAlgorithm.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x00bfc050
/* AnimationCompressionAlgorithm.cpp: whether any track of the raw animation scales its bone (a scale
 * key away from 1); callers keep the scale keys only then. */
UBOOL HasNonUnitScaleKeys(UAnimSequence* AnimSeq)
{
	for (INT TrackIndex = 0; TrackIndex < AnimSeq->RawAnimData.Num(); TrackIndex++)
	{
		for (INT KeyIndex = 0; KeyIndex < AnimSeq->RawAnimData(TrackIndex).ScaleKeys.Num(); KeyIndex++)
		{
			const FLOAT Scale = AnimSeq->RawAnimData(TrackIndex).ScaleKeys(KeyIndex);
			if (appAbs(Scale - 1.f) > 0.01f)
			{
				return TRUE;
			}
		}
	}

	return FALSE;
}

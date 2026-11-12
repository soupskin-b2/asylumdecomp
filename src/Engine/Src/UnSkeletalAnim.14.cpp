// UnSkeletalAnim.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
	using TArray<T>::ArrayNum;
	__forceinline T& At(INT i)
	{
#line 560 BAA_ARRAY_FILE
		check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
		return this->GetTypedData()[i];
	}
};

/* TArray<FRawAnimSequenceTrack>::Empty is out of line in this build (0x0093ca00). */
template<> void TArray<FRawAnimSequenceTrack>::Empty(INT Slack);
// @baa 0x0093d5e0
/* Cooking drops the raw (uncompressed) keys; only the compressed data ships. */
void UAnimSequence::StripData(UE3::EPlatformType TargetPlatform)
{
	for (INT TrackIndex = 0; TrackIndex < RawAnimData.Num(); TrackIndex++)
	{
		FRawAnimSequenceTrack& RawTrack = ((TArrayAt_<FRawAnimSequenceTrack>&)RawAnimData).At(TrackIndex);
		RawTrack.PosKeys.Empty();
		RawTrack.RotKeys.Empty();
		RawTrack.ScaleKeys.Empty();
		RawTrack.KeyTimes.Empty();
	}
	RawAnimData.Empty();
}

#line 39 "candidate.cpp"

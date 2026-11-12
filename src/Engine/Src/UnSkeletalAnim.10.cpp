// UnSkeletalAnim.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC	/* appFree out of line, as in ~FString */
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Native.h"
#include "ue3/Script.h"

/* Kit gaps (UnString.h): the kit's FString has its destructor out of line and no operator*; this build
 * inlines both here. FString_ is a same-layout stand-in with UE3's inline forms; FName::ToString
 * (005d5690) is declared on it to return one. */
class FString_ : public TArray<TCHAR>
{
public:
	const TCHAR* operator*() const { return Num() ? &(*this)(0) : TEXT(""); }
};

struct FName_ : public FName
{
	FString_ sub_005d5690() const;		/* ToString */
};

/* AnimationCompression.cpp (out of line, 00657120). */
void AnimationFormat_GetStats(const UAnimSequence* Seq, INT& NumTransTracks, INT& NumRotTracks, INT& TotalNumTransKeys, INT& TotalNumRotKeys,
	INT& TranslationKeySize, INT& RotationKeySize, INT& NumTransTracksWithOneKey, INT& NumRotTracksWithOneKey);
// @baa 0x009414b0
/* The track and key counts of every loaded animation sequence (the ANIMSEQSTATS console command). */
void GatherAnimSequenceStats(FOutputDevice& Ar)
{
	Ar.Logf(TEXT(" %60s %s %s"), TEXT("Sequence Name"), TEXT("NTT/NRT NT1/NR1"), TEXT("TotTrnKys TotRotKys"));

	INT TotalNumTransTracks = 0;
	INT TotalNumRotTracks = 0;
	INT TotalNumTransTracksWithOneKey = 0;
	INT TotalNumRotTracksWithOneKey = 0;
	INT TotalApproxCompressedSize = 0;
	INT TotalApproxKeyDataSize = 0;

	for (TObjectIterator<UAnimSequence> It; It; ++It)
	{
		UAnimSequence* Seq = *It;

		INT NumTransTracks = 0;
		INT NumRotTracks = 0;
		INT TotalNumTransKeys = 0;
		INT TotalNumRotKeys = 0;
		INT TranslationKeySize = 0;
		INT RotationKeySize = 0;
		INT NumTransTracksWithOneKey = 0;
		INT NumRotTracksWithOneKey = 0;

		AnimationFormat_GetStats(Seq, NumTransTracks, NumRotTracks, TotalNumTransKeys, TotalNumRotKeys,
			TranslationKeySize, RotationKeySize, NumTransTracksWithOneKey, NumRotTracksWithOneKey);

		TotalNumTransTracks += NumTransTracks;
		TotalNumRotTracks += NumRotTracks;
		TotalNumTransTracksWithOneKey += NumTransTracksWithOneKey;
		TotalNumRotTracksWithOneKey += NumRotTracksWithOneKey;

		const INT CompressedSize = Seq->CompressedTrackOffsets.Num() * sizeof(INT) + Seq->CompressedByteStream.Num();
		TotalApproxCompressedSize += CompressedSize;
		TotalApproxKeyDataSize += TotalNumTransKeys * TranslationKeySize + TotalNumRotKeys * RotationKeySize;

		Ar.Logf(TEXT(" %60s % 3i/%3i %3i/%3i % 10i %10i"), *((const FName_&)Seq->SequenceName).sub_005d5690(),
			NumTransTracks, NumRotTracks, NumTransTracksWithOneKey, NumRotTracksWithOneKey, TotalNumTransKeys, TotalNumRotKeys);
	}

	Ar.Logf(TEXT("======================================================================"));
	Ar.Logf(TEXT("Total Num Tracks: %i trans, %i rot, %i trans1, %i rot1"), TotalNumTransTracks, TotalNumRotTracks, TotalNumTransTracksWithOneKey, TotalNumRotTracksWithOneKey);
	Ar.Logf(TEXT("Approx Compressed Memory: %i bytes"), TotalApproxCompressedSize);
	Ar.Logf(TEXT("Approx Key Data Memory: %i bytes"), TotalApproxKeyDataSize);
}

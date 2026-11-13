// AnimationCompressionAlgorithm_RemoveLinearKeys.cpp: 8 functions
// Placed here by: class 6, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00bf8690
int UAnimationCompressionAlgorithm_RemoveLinearKeys::vf_000(void) { return 1; }

// @baa 0x00bfbe10
IMPLEMENT_CLASS_AT(UAnimationCompressionAlgorithm_RemoveLinearKeys, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\AnimationCompressionAlgorithm_RemoveLinearKeys.cpp", 11);

// @baa 0x00bfbe70
// @baa 0x00c00ae0
// @baa 0x00c02500
// @baa 0x00c0d3a0
// @baa 0x00c0d4b0
bool UAnimationCompressionAlgorithm_RemoveLinearKeys::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

/* Not in the headers: the compression helpers' bone description (only passed by reference here). */
struct FBoneData;
/* AnimationUtils / AnimationEncodingFormat helpers (cdecl, not in the headers). */
void SeparateRawDataIntoTracks( const TArray<FRawAnimSequenceTrack>& RawAnimData, FLOAT SequenceLength, TArray<FTranslationTrack>& OutTranslationData, TArray<FRotationTrack>& OutRotationData );
void AnimationFormat_SetInterfaceLinks( UAnimSequence& Seq );
UObject* StaticDuplicateObject( UObject* SourceObject, UObject* RootObject, UObject* DestOuter, const TCHAR* DestName, QWORD FlagMask = ~0, UClass* DestClass = NULL, void* InstanceGraph = NULL );
/* Core's UObject::MarkPackageDirty (0x005d9570), not declared on UObject in Classes.h. */


#define TRIVIAL_TRANSLATION_DIFF	0.0001f
#define TRIVIAL_ROTATION_DIFF		0.0003f
/* Classes.h declares DoReduction as 'virtual void DoReduction(INT, INT, INT)' (placeholder types);
 * this helper struct carries the real signature and the class's statics. */
struct UAnimationCompressionAlgorithm_RemoveLinearKeys_ : public UAnimationCompressionAlgorithm_RemoveLinearKeys
{
	static void FilterTrivialPositionKeys( TArray<FTranslationTrack>& Track, FLOAT MaxPosDelta );
	static void FilterTrivialRotationKeys( TArray<FRotationTrack>& InputTracks, FLOAT MaxRotDelta );
	static void FilterTrivialKeys( TArray<FTranslationTrack>& PositionTracks, TArray<FRotationTrack>& RotationTracks, FLOAT MaxPosDelta, FLOAT MaxRotDelta )
	{
		FilterTrivialRotationKeys(RotationTracks, MaxRotDelta);
		FilterTrivialPositionKeys(PositionTracks, MaxPosDelta);
	}
	static void BitwiseCompressAnimationTracks( UAnimSequence* Seq, BYTE TargetTranslationFormat, BYTE TargetRotationFormat, const TArray<FTranslationTrack>& TranslationData, const TArray<FRotationTrack>& RotationData, UBOOL IncludeKeyTable );

	void ProcessAnimationTracks( UAnimSequence* AnimSeq, USkeletalMesh* SkelMesh, const TArray<FBoneData>& BoneData, BYTE TargetTranslationFormat, BYTE TargetRotationFormat, TArray<FTranslationTrack>& PositionTracks, TArray<FRotationTrack>& RotationTracks );

	void DoReduction( UAnimSequence* AnimSeq, USkeletalMesh* SkelMesh, const TArray<FBoneData>& BoneData );
};

// @baa 0x00c16ee0
void UAnimationCompressionAlgorithm_RemoveLinearKeys_::DoReduction( UAnimSequence* AnimSeq, USkeletalMesh* SkelMesh, const TArray<FBoneData>& BoneData )
{
	// Separate out translation and rotation tracks.
	TArray<FTranslationTrack> TranslationData;
	TArray<FRotationTrack> RotationData;
	SeparateRawDataIntoTracks( AnimSeq->RawAnimData, AnimSeq->SequenceLength, TranslationData, RotationData );

	// remove obviously redundant keys from the source data
	FilterTrivialKeys(TranslationData, RotationData, TRIVIAL_TRANSLATION_DIFF, TRIVIAL_ROTATION_DIFF);

	// compress this animation without any key-reduction to prime the codec
	BitwiseCompressAnimationTracks(
		AnimSeq,
		TranslationCompressionFormat,
		RotationCompressionFormat,
		TranslationData,
		RotationData,
		TRUE);

	// record the proper runtime decompressor to use
	AnimSeq->KeyEncodingFormat = AKF_VariableKeyLerp;
	AnimationFormat_SetInterfaceLinks(*AnimSeq);
	AnimSeq->CompressionScheme = static_cast<UAnimationCompressionAlgorithm*>( StaticDuplicateObject( this, this, AnimSeq, TEXT("None"), ~(QWORD)0x4000 ) );
	AnimSeq->MarkPackageDirty();

	// remove the keys we can interpolate
	ProcessAnimationTracks(
		AnimSeq,
		SkelMesh,
		BoneData,
		TranslationCompressionFormat,
		RotationCompressionFormat,
		TranslationData,
		RotationData);

	// compress the final (key-reduced) tracks into the anim sequence buffers
	BitwiseCompressAnimationTracks(
		AnimSeq,
		TranslationCompressionFormat,
		RotationCompressionFormat,
		TranslationData,
		RotationData,
		TRUE);
}

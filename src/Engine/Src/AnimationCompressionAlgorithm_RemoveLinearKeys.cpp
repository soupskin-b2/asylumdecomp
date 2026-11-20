// AnimationCompressionAlgorithm_RemoveLinearKeys.cpp: 8 functions
// Placed here by: class 6, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00bf8690
UBOOL UAnimationCompressionAlgorithm_RemoveLinearKeys::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00bfbe10
IMPLEMENT_CLASS_AT(UAnimationCompressionAlgorithm_RemoveLinearKeys, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\AnimationCompressionAlgorithm_RemoveLinearKeys.cpp", 11);

// @baa 0x00bfbe70
// @baa 0x00c00ae0
// @baa 0x00c02500
// @baa 0x00c0d3a0
// @baa 0x00c0d4b0
UBOOL UAnimationCompressionAlgorithm_RemoveLinearKeys::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

#define TRIVIAL_TRANSLATION_DIFF	0.0001f
#define TRIVIAL_ROTATION_DIFF		0.0003f
// @baa 0x00c16ee0
void UAnimationCompressionAlgorithm_RemoveLinearKeys::DoReduction( UAnimSequence* AnimSeq, USkeletalMesh* SkelMesh, const TArray<FBoneData>& BoneData )
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

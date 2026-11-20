// Engine_0660000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00663630
INT UMaterialInterface::CheckMaterialUsage(INT Usage)
{
    PURE_VIRTUAL(UMaterialInterface::CheckMaterialUsage, return 0;)
}

// @baa 0x006636b0
UBOOL UMaterialInterface::GetStaticComponentMaskParameterValue(FName ParameterName, UBOOL& R, UBOOL& G, UBOOL& B, UBOOL& A, FGuid& OutExpressionGuid) PURE_VIRTUAL(UMaterialInterface::GetStaticComponentMaskParameterValue, return 0;);

// @baa 0x00663750
/* The base codec's slot: every codec overrides it. */
void AnimationEncodingFormat::GetPoseTranslations(TArray<FBoneAtom>& Atoms, const TArray<BoneTrackPair>& DesiredPairs, const UAnimSequence& Seq, FLOAT RelativePos, UBOOL bLooping) PURE_VIRTUAL(AnimationEncodingFormat::GetPoseTranslations,)


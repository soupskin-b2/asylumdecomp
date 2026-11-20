// Engine_0660000.cpp (part 16 of 17): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Script.h"

// @baa 0x00663730
/* The base codec's slot: every codec overrides it. */
void AnimationEncodingFormat::GetPoseRotations(TArray<FBoneAtom>& Atoms, const TArray<BoneTrackPair>& DesiredPairs, const UAnimSequence& Seq, FLOAT RelativePos, UBOOL bLooping) PURE_VIRTUAL(AnimationEncodingFormat::GetPoseRotations,)


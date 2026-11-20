// Engine_0660000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Script.h"
#include "ue3/Core.h"

// @baa 0x00663710
/* The base codec's slot: every codec overrides it. */
void AnimationEncodingFormat::GetBoneAtomTranslation(FBoneAtom& OutAtom, const UAnimSequence& Seq, const BYTE* Stream, INT NumKeys, FLOAT Time, FLOAT RelativePos, UBOOL bLooping) PURE_VIRTUAL(AnimationEncodingFormat::GetBoneAtomTranslation,)


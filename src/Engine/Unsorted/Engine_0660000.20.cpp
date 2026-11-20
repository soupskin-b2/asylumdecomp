// Engine_0660000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Script.h"
#include "ue3/Core.h"

// @baa 0x00663770
/* The base codec's slot: every codec overrides it. */
void AnimationEncodingFormat::ByteSwapRotationIn(UAnimSequence& Seq, FMemoryReader& MemoryReader, BYTE*& Stream, INT NumKeys) PURE_VIRTUAL(AnimationEncodingFormat::ByteSwapRotationIn,)


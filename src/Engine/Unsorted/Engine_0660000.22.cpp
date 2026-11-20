// Engine_0660000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Script.h"
#include "ue3/Core.h"

// @baa 0x006637b0
/* The base codec's slot: every codec overrides it. */
void AnimationEncodingFormat::ByteSwapRotationOut(UAnimSequence& Seq, FMemoryWriter& MemoryWriter, BYTE*& Stream, INT NumKeys) PURE_VIRTUAL(AnimationEncodingFormat::ByteSwapRotationOut,)


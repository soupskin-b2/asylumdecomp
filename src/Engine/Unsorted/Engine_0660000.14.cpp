// Engine_0660000.cpp (part 14 of 17): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Script.h"
#include "ue3/Implement.h"

// @baa 0x006634f0
IMPLEMENT_CLASS_AT(UMaterialInterface, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialShared.cpp", 10);

// UMaterialInterface::GetSurfaceHeight (slot 0x110): the material's default surface height (an INT).

// @baa 0x006635a0
DOUBLE UMaterialInterface::GetSurfaceHeight()
{
    return sub_006d9240();
}

// @baa 0x006636f0
/* The base codec's slot: every codec overrides it. */
void AnimationEncodingFormat::GetBoneAtomRotation(FBoneAtom& OutAtom, const UAnimSequence& Seq, const BYTE* Stream, INT NumKeys, FLOAT Time, FLOAT RelativePos, UBOOL bLooping) PURE_VIRTUAL(AnimationEncodingFormat::GetBoneAtomRotation,)


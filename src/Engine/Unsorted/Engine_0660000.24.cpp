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
INT UMaterialInterface::GetStaticComponentMaskParameterValue(INT MaterialIndex, INT ParamIndex, INT ComponentMask, INT Component1, INT Component2, INT Component3, INT Component4)
PURE_VIRTUAL(UMaterialInterface::GetStaticComponentMaskParameterValue, return 0;);

// AnimationEncodingFormat::GetPoseTranslations is an out-of-line pure virtual body
// (the UE3 script generator emits it with the same log call as any PURE_VIRTUAL stub).
// It's a thiscall method with five stack arguments, which the callee pops itself (ret 0x14);
// `this` is unused. The packet's earlier give-up noted the five parameter types are invisible,
// so they're kept as INTs (the only shape the bytes fix: five dwords).
struct AnimationEncodingFormat
{
	void GetPoseTranslations(INT a, INT b, INT c, INT d, INT e); /* 0x00663750 */
};

// @baa 0x00663750
void AnimationEncodingFormat::GetPoseTranslations(INT a, INT b, INT c, INT d, INT e)
{
	GError->Logf(TEXT("Pure virtual not implemented (%s)"), TEXT("AnimationEncodingFormat::GetPoseTranslations"));
}

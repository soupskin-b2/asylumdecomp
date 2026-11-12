// MaterialShared.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x006635d0
UINT UMaterialInterface::GetRenderProxy(INT)
{
    PURE_VIRTUAL(UMaterialInterface::GetRenderProxy, return 0;);
}

// @baa 0x00663610
void UMaterialInterface::GetTextures(INT, INT)
{
    PURE_VIRTUAL(UMaterial::GetTextures, );
}

// @baa 0x00663690
INT UMaterialInterface::GetStaticSwitchParameterValue(INT, INT, INT, INT)
{
    PURE_VIRTUAL(UMaterialInterface::GetStaticSwitchParameterValue, return 0;);
}

struct UMaterialInstanceTimeVarying_ : public UMaterialInstanceTimeVarying
{
	/* UMaterialInstance's (0x006c47c0): a parameter update that takes the name of the caller it
	 * was reached through. */
	void sub_006c47c0(const TCHAR* Caller);
};

// @baa 0x006d8f20
void UMaterialInstanceTimeVarying::SetDuration(FLOAT Value)
{
	((UMaterialInstanceTimeVarying_*)this)->sub_006c47c0(TEXT("MITV::SetDuration"));
	Duration = Value;
	vf_180();
}

extern void* g_026b2234;
// @baa 0x006d9280
void UMaterialInterface::execGetMaterial(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UMaterial**)Result = (UMaterial*)vf_130((INT)g_026b2234);
}

// @baa 0x006d92d0
void UMaterialInterface::execGetPhysicalMaterial(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UPhysicalMaterial**)Result = (UPhysicalMaterial*)GetPhysicalMaterial();
}

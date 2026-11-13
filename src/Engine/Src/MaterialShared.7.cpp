// MaterialShared.cpp: 8 functions
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


// @baa 0x006d8f20
void UMaterialInstanceTimeVarying::SetDuration(FLOAT Value)
{
	this->sub_006c47c0(TEXT("MITV::SetDuration"));
	Duration = Value;
	InitResources();
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

// @baa 0x006635b0
/* Slot 0x130 (unnamed in the kit; UE3's GetMaterial(EMaterialShaderPlatform)). */
INT UMaterialInterface::vf_130(INT) PURE_VIRTUAL(UMaterialInterface::GetMaterial, return NULL;);

// @baa 0x00663670
INT UMaterialInterface::CompileStaticPermutation(INT, INT, INT, INT, INT, INT) PURE_VIRTUAL(UMaterialInterface::CompileStaticPermutation, return 0;);

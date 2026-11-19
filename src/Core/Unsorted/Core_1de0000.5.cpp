// Core_1de0000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern "C" unsigned char sub_0059f5f0(int Index, int* pTable);
extern int g_025df4f4;
extern unsigned char g_026c49c1;
// @baa 0x01deda10
void sub_01deda10(void)
{
    g_026c49c1 = sub_0059f5f0(0x224, &g_025df4f4);
}

#include "ue3/Shader.h"
class LowQualityShaderName : public FGlobalShader
{
	DECLARE_SHADER_TYPE(LowQualityShaderName, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment& OutEnvironment);
};

// @baa 0x01de0f90
IMPLEMENT_SHADER_TYPE(, LowQualityShaderName, TEXT("BranchingPCFProjectionPixelShader"), TEXT("Main"), SF_Pixel, 491, 0);

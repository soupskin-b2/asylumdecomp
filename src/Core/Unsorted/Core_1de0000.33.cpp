// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
class TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFMediumQualityManualPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFMediumQualityManualPCF, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment& OutEnvironment);
};

// @baa 0x01de1a10
IMPLEMENT_SHADER_TYPE(, TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFMediumQualityManualPCF, TEXT("BranchingPCFModProjectionPixelShader"), TEXT("Main"), SF_Pixel, 502, 21);

// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
class TBranchingPCFModProjectionPixelShaderFPointLightPolicyFMediumQualityHwPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFPointLightPolicyFMediumQualityHwPCF, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment& OutEnvironment);
};

// @baa 0x01de2ff0
IMPLEMENT_SHADER_TYPE(, TBranchingPCFModProjectionPixelShaderFPointLightPolicyFMediumQualityHwPCF, TEXT("BranchingPCFModProjectionPixelShader"), TEXT("HardwarePCFMain"), SF_Pixel, 502, 21);

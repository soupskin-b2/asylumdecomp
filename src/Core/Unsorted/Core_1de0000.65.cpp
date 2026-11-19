// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
class TBranchingPCFModProjectionPixelShaderFPointLightPolicyFLowQualityFetch4PCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFPointLightPolicyFLowQualityFetch4PCF, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment& OutEnvironment);
};

// @baa 0x01de30b0
IMPLEMENT_SHADER_TYPE(, TBranchingPCFModProjectionPixelShaderFPointLightPolicyFLowQualityFetch4PCF, TEXT("BranchingPCFModProjectionPixelShader"), TEXT("Fetch4Main"), SF_Pixel, 502, 21);

// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
class TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFHighQualityFetch4PCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFHighQualityFetch4PCF, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment& OutEnvironment);
};

// @baa 0x01de4190
IMPLEMENT_SHADER_TYPE(, TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFHighQualityFetch4PCF, TEXT("BranchingPCFModProjectionPixelShader"), TEXT("Fetch4Main"), SF_Pixel, 502, 21);

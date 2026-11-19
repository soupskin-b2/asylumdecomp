// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
class MediumQualityShaderName : public FGlobalShader
{
	DECLARE_SHADER_TYPE(MediumQualityShaderName, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment& OutEnvironment);
};

// @baa 0x01de0ff0
IMPLEMENT_SHADER_TYPE(, MediumQualityShaderName, TEXT("BranchingPCFProjectionPixelShader"), TEXT("Main"), SF_Pixel, 491, 0);

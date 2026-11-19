// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
template<UINT NumSamples>
class TFilterPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TFilterPixelShader, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment& OutEnvironment);
};

// @baa 0x01dea8e0
IMPLEMENT_SHADER_TYPE(template<>, TFilterPixelShader<11>, TEXT("FilterPixelShader"), TEXT("Main"), SF_Pixel, 502, 21);

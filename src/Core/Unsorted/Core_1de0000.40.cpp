// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
/* The samples of the gather pass on floating-point targets (the value is the engine's, this definition does not depend on it). */
const UINT NumFPFilterSamples = 4;
template<UINT NumSamples>
class TDOFAndBloomGatherPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TDOFAndBloomGatherPixelShader, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment& OutEnvironment);
};

// @baa 0x01de1c90
IMPLEMENT_SHADER_TYPE(template<>, TDOFAndBloomGatherPixelShader<NumFPFilterSamples>, TEXT("DOFAndBloomGatherPixelShader"), TEXT("Main"), SF_Pixel, 561, 21);

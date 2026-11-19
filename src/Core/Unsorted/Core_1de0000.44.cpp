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

class FDOFAndBloomGatherFallbackPixelShader : public TDOFAndBloomGatherPixelShader<NumFPFilterSamples>
{
	DECLARE_SHADER_TYPE(FDOFAndBloomGatherFallbackPixelShader, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
};

// @baa 0x01de1e10
IMPLEMENT_SHADER_TYPE(, FDOFAndBloomGatherFallbackPixelShader, TEXT("DOFAndBloomGatherPixelShader"), TEXT("SM2Main"), SF_Pixel, 502, 21);

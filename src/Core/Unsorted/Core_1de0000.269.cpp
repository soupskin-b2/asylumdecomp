// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
/* The way the shadow depths are filtered. */
class F4SampleHwPCF;
template<class ShadowFilteringPolicy>
class TShadowProjectionPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TShadowProjectionPixelShader, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment& OutEnvironment);
};

// @baa 0x01deb430
IMPLEMENT_SHADER_TYPE(template<>, TShadowProjectionPixelShader<F4SampleHwPCF>, TEXT("ShadowProjectionPixelShader"), TEXT("HardwarePCFMain"), SF_Pixel, 502, 21);

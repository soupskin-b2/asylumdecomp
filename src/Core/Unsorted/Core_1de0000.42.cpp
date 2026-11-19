// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
/* The most samples a filter shader takes. */
#define MAX_FILTER_SAMPLES 16
template<UINT NumSamples>
class TDOFAndBloomGatherVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TDOFAndBloomGatherVertexShader, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment& OutEnvironment);
};

// @baa 0x01de1db0
IMPLEMENT_SHADER_TYPE(template<>, TDOFAndBloomGatherVertexShader<MAX_FILTER_SAMPLES>, TEXT("DOFAndBloomGatherVertexShader"), TEXT("Main"), SF_Vertex, 502, 21);

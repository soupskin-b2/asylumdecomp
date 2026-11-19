// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
template<UINT NumSamples>
class TFilterVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TFilterVertexShader, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment& OutEnvironment);
};

// @baa 0x01dea1c0
IMPLEMENT_SHADER_TYPE(template<>, TFilterVertexShader<1>, TEXT("FilterVertexShader"), TEXT("Main"), SF_Vertex, 502, 21);

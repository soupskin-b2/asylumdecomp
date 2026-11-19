// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
template<UINT NumVertices>
class FOcclusionQueryVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FOcclusionQueryVertexShader, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment& OutEnvironment);
};

// @baa 0x01dead60
IMPLEMENT_SHADER_TYPE(template<>, FOcclusionQueryVertexShader<0>, TEXT("OcclusionQueryVertexShader"), TEXT("Main"), SF_Vertex, 502, 21);

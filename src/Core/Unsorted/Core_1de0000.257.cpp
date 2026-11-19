// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
/* The vertices of the box an occlusion query draws (the value is the engine's, this definition does not depend on it). */
#define NUM_CUBE_VERTICES 36
template<UINT NumVertices>
class FOcclusionQueryVertexShader_PS3Instance : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FOcclusionQueryVertexShader_PS3Instance, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment& OutEnvironment);
};

// @baa 0x01deae20
IMPLEMENT_SHADER_TYPE(template<>, FOcclusionQueryVertexShader_PS3Instance<NUM_CUBE_VERTICES>, TEXT("OcclusionQueryVertexShader_PS3Instance"), TEXT("Main"), SF_Vertex, 502, 21);

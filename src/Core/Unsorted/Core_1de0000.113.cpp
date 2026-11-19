// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
class FEdgePreservingFilterVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FEdgePreservingFilterVertexShader, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
};

// @baa 0x01de7560
IMPLEMENT_SHADER_TYPE(, FEdgePreservingFilterVertexShader, TEXT("AmbientOcclusionShader"), TEXT("FilterVertexMain"), SF_Vertex, 502, 21);

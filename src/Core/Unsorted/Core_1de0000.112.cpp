// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
class FAmbientOcclusionVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FAmbientOcclusionVertexShader, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
};

// @baa 0x01de74c0
IMPLEMENT_SHADER_TYPE(, FAmbientOcclusionVertexShader, TEXT("AmbientOcclusionShader"), TEXT("OcclusionVertexMain"), SF_Vertex, 502, 21);

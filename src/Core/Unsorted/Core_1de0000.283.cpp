// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
class FLDRExtractVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FLDRExtractVertexShader, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
};

// @baa 0x01debaf0
IMPLEMENT_SHADER_TYPE(, FLDRExtractVertexShader, TEXT("LDRExtractVertexShader"), TEXT("Main"), SF_Vertex, 502, 21);

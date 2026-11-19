// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
class FLightFunctionVertexShader : public FMaterialShader
{
	DECLARE_SHADER_TYPE(FLightFunctionVertexShader, Material);

	static UBOOL ShouldCache(EShaderPlatform Platform, const FMaterial* Material);
};

// @baa 0x01dea000
IMPLEMENT_SHADER_TYPE(, FLightFunctionVertexShader, TEXT("LightFunctionVertexShader"), TEXT("Main"), SF_Vertex, 529, 21);

// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
class FLightFunctionPixelShader : public FMaterialShader
{
	DECLARE_SHADER_TYPE(FLightFunctionPixelShader, Material);

	static UBOOL ShouldCache(EShaderPlatform Platform, const FMaterial* Material);
};

// @baa 0x01dea060
IMPLEMENT_SHADER_TYPE(, FLightFunctionPixelShader, TEXT("LightFunctionPixelShader"), TEXT("Main"), SF_Pixel, 529, 21);

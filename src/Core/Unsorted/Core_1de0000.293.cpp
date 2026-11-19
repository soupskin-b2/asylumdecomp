// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
class FLoadingIconPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FLoadingIconPixelShader, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
};

// @baa 0x01decb80
IMPLEMENT_SHADER_TYPE(, FLoadingIconPixelShader, TEXT("LoadingIconPixelShader"), TEXT("Main"), SF_Pixel, 502, 21);

// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
class FSimpleElementMaskedGammaPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FSimpleElementMaskedGammaPixelShader, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
};

// @baa 0x01de9650
IMPLEMENT_SHADER_TYPE(, FSimpleElementMaskedGammaPixelShader, TEXT("SimpleElementPixelShader"), TEXT("GammaMaskedMain"), SF_Pixel, 502, 21);

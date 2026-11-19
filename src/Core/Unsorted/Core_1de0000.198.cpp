// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
class FSimpleElementPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FSimpleElementPixelShader, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
};

// @baa 0x01de9590
IMPLEMENT_SHADER_TYPE(, FSimpleElementPixelShader, TEXT("SimpleElementPixelShader"), TEXT("Main"), SF_Pixel, 502, 21);

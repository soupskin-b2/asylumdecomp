// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
class FOneColorPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FOneColorPixelShader, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
};

// @baa 0x01de2120
IMPLEMENT_SHADER_TYPE(, FOneColorPixelShader, TEXT("OneColorShader"), TEXT("MainPixelShader"), SF_Pixel, 502, 21);

// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
/* The kinds this shader comes in (those with a shader type in the game; the values are not established here). */
enum EGFxPixelShaderType
{
	GFx_PS_SolidColor,
	GFx_PS_CxformTexture,
	GFx_PS_CxformTextureMultiply,
	GFx_PS_TextTexture,
	GFx_PS_TextTextureColor,
	GFx_PS_TextTextureColorMultiply,
	GFx_PS_CxformGouraud,
	GFx_PS_CxformGouraudNoAddAlpha,
	GFx_PS_CxformGouraudTexture,
	GFx_PS_Cxform2Texture,
	GFx_PS_CxformGouraudMultiply,
	GFx_PS_CxformGouraudMultiplyNoAddAlpha,
	GFx_PS_CxformGouraudMultiplyTexture,
	GFx_PS_CxformMultiply2Texture
};

template<EGFxPixelShaderType PixelShaderType>
class FGFxPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FGFxPixelShader, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
};

// @baa 0x01df7db0
IMPLEMENT_SHADER_TYPE(template<>, FGFxPixelShader<GFx_PS_CxformGouraudNoAddAlpha>, TEXT("GFxPixelShader"), TEXT("Main_CxformGouraud_NoAddAlpha"), SF_Pixel, 502, 21);

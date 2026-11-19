// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
/* The kinds this shader comes in (those with a shader type in the game; the values are not established here). */
enum EGFxVertexShaderType
{
	GFx_VS_Strip,
	GFx_VS_Glyph,
	GFx_VS_XY16iC32,
	GFx_VS_XY16iCF32,
	GFx_VS_XY16iCF32_NoTex,
	GFx_VS_XY16iCF32_NoTexNoAlpha,
	GFx_VS_XY16iCF32_T2
};

template<EGFxVertexShaderType VertexShaderType>
class FGFxVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FGFxVertexShader, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
};

// @baa 0x01df8290
IMPLEMENT_SHADER_TYPE(template<>, FGFxVertexShader<GFx_VS_XY16iCF32_T2>, TEXT("GFxVertexShader"), TEXT("MainStripXY16iCF32_T2"), SF_Vertex, 502, 21);

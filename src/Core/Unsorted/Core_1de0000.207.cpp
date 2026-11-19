// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
template<UINT NumLayers>
class THeightFogVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(THeightFogVertexShader, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
};

// @baa 0x01de9990
IMPLEMENT_SHADER_TYPE(template<>, THeightFogVertexShader<4>, TEXT("HeightFogVertexShader"), TEXT("FourLayerMain"), SF_Vertex, 502, 21);

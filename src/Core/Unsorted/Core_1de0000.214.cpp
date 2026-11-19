// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
/* The shape of the fog volume. */
class FLinearHalfspaceDensityPolicy;
template<class DensityFunctionPolicy>
class TFogIntegralPixelShader : public FMeshMaterialShader
{
	DECLARE_SHADER_TYPE(TFogIntegralPixelShader, MeshMaterial);

	static UBOOL ShouldCache(EShaderPlatform Platform, const FMaterial* Material, const FVertexFactoryType* VertexFactoryType);
};

// @baa 0x01de9d60
IMPLEMENT_SHADER_TYPE(template<>, TFogIntegralPixelShader<FLinearHalfspaceDensityPolicy>, TEXT("FogIntegralPixelShader"), TEXT("LinearHalfspaceDensityMain"), SF_Pixel, 529, 21);

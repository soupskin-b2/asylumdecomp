// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
/* The shape of the fog volume. */
class FSphereDensityPolicy;
template<class DensityFunctionPolicy>
class TFogIntegralPixelShader : public FMeshMaterialShader
{
	DECLARE_SHADER_TYPE(TFogIntegralPixelShader, MeshMaterial);

	static UBOOL ShouldCache(EShaderPlatform Platform, const FMaterial* Material, const FVertexFactoryType* VertexFactoryType);
};

// @baa 0x01de9e20
IMPLEMENT_SHADER_TYPE(template<>, TFogIntegralPixelShader<FSphereDensityPolicy>, TEXT("FogIntegralPixelShader"), TEXT("SphericalDensityMain"), SF_Pixel, 529, 21);

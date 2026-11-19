// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
/* The shape of the fog volume. */
class FLinearHalfspaceDensityPolicy;
template<class DensityFunctionPolicy>
class TFogIntegralVertexShader : public FMeshMaterialShader
{
	DECLARE_SHADER_TYPE(TFogIntegralVertexShader, MeshMaterial);

	static UBOOL ShouldCache(EShaderPlatform Platform, const FMaterial* Material, const FVertexFactoryType* VertexFactoryType);
};

// @baa 0x01de9d00
IMPLEMENT_SHADER_TYPE(template<>, TFogIntegralVertexShader<FLinearHalfspaceDensityPolicy>, TEXT("FogIntegralVertexShader"), TEXT("Main"), SF_Vertex, 529, 21);

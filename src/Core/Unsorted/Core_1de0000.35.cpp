// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
/* How the distortion is drawn. */
class FDistortMeshAccumulatePolicy;
template<class DistortMeshPolicy>
class TDistortionMeshVertexShader : public FMeshMaterialShader
{
	DECLARE_SHADER_TYPE(TDistortionMeshVertexShader, MeshMaterial);

	static UBOOL ShouldCache(EShaderPlatform Platform, const FMaterial* Material, const FVertexFactoryType* VertexFactoryType);
};

// @baa 0x01de1ad0
IMPLEMENT_SHADER_TYPE(template<>, TDistortionMeshVertexShader<FDistortMeshAccumulatePolicy>, TEXT("DistortAccumulateVertexShader"), TEXT("Main"), SF_Vertex, 529, 21);

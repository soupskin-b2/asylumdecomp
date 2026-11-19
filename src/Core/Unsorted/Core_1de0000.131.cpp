// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
template<UINT Variant>
class TAOMeshVertexShader : public FMeshMaterialShader
{
	DECLARE_SHADER_TYPE(TAOMeshVertexShader, MeshMaterial);

	static UBOOL ShouldCache(EShaderPlatform Platform, const FMaterial* Material, const FVertexFactoryType* VertexFactoryType);
};

// @baa 0x01de7ca0
IMPLEMENT_SHADER_TYPE(template<>, TAOMeshVertexShader<0>, TEXT("AmbientOcclusionMeshShaders"), TEXT("MeshAOMaskVertexMain"), SF_Vertex, 529, 21);

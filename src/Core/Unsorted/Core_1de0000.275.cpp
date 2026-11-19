// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
class FModShadowMeshVertexShader : public FMeshMaterialShader
{
	DECLARE_SHADER_TYPE(FModShadowMeshVertexShader, MeshMaterial);

	static UBOOL ShouldCache(EShaderPlatform Platform, const FMaterial* Material, const FVertexFactoryType* VertexFactoryType);
};

// @baa 0x01deb790
IMPLEMENT_SHADER_TYPE(, FModShadowMeshVertexShader, TEXT("ModShadowMeshAttenuationVS"), TEXT("Main"), SF_Vertex, 529, 21);

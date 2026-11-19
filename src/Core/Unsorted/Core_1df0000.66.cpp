// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
class FTextureDensityVertexShader : public FMeshMaterialShader
{
	DECLARE_SHADER_TYPE(FTextureDensityVertexShader, MeshMaterial);

	static UBOOL ShouldCache(EShaderPlatform Platform, const FMaterial* Material, const FVertexFactoryType* VertexFactoryType);
};

// @baa 0x01df6a90
IMPLEMENT_SHADER_TYPE(, FTextureDensityVertexShader, TEXT("TextureDensityShader"), TEXT("MainVertexShader"), SF_Vertex, 529, 21);

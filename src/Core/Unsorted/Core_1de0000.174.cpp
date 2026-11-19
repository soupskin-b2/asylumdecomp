// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
class TBasePassVertexShaderFSimpleLightMapTexturePolicyFSphereDensityPolicy : public FMeshMaterialShader
{
	DECLARE_SHADER_TYPE(TBasePassVertexShaderFSimpleLightMapTexturePolicyFSphereDensityPolicy, MeshMaterial);

	static UBOOL ShouldCache(EShaderPlatform Platform, const FMaterial* Material, const FVertexFactoryType* VertexFactoryType);
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment& OutEnvironment);
};

// @baa 0x01de8c30
IMPLEMENT_SHADER_TYPE(, TBasePassVertexShaderFSimpleLightMapTexturePolicyFSphereDensityPolicy, TEXT("BasePassVertexShader"), TEXT("Main"), SF_Vertex, 529, 21);

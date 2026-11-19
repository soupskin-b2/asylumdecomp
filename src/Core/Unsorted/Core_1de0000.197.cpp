// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
class TBasePassPixelShaderFVolumetricTranslucencyLightMapPolicyOSMSkyLight : public FMeshMaterialShader
{
	DECLARE_SHADER_TYPE(TBasePassPixelShaderFVolumetricTranslucencyLightMapPolicyOSMSkyLight, MeshMaterial);

	static UBOOL ShouldCache(EShaderPlatform Platform, const FMaterial* Material, const FVertexFactoryType* VertexFactoryType);
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment& OutEnvironment);
};

// @baa 0x01de9530
IMPLEMENT_SHADER_TYPE(, TBasePassPixelShaderFVolumetricTranslucencyLightMapPolicyOSMSkyLight, TEXT("BasePassPixelShader"), TEXT("Main"), SF_Pixel, 529, 21);

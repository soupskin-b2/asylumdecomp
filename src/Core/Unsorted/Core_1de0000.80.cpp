// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
class TLightPixelShaderFSphericalHarmonicLightPolicyFShadowVertexBufferPolicy : public FMeshMaterialShader
{
	DECLARE_SHADER_TYPE(TLightPixelShaderFSphericalHarmonicLightPolicyFShadowVertexBufferPolicy, MeshMaterial);

	static UBOOL ShouldCache(EShaderPlatform Platform, const FMaterial* Material, const FVertexFactoryType* VertexFactoryType);
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment& OutEnvironment);
};

// @baa 0x01de3ad0
IMPLEMENT_SHADER_TYPE(, TLightPixelShaderFSphericalHarmonicLightPolicyFShadowVertexBufferPolicy, TEXT("SphericalHarmonicLightPixelShader"), TEXT("Main"), SF_Pixel, 529, 21);

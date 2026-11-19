// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
/* The kinds this shader comes in (those with a shader type in the game; the values are not established here). */
enum EAOApplyMode
{
	AOApply_Normal,
	AOApply_ReadFromAOHistory,
	AOApply_ApplyFog,
	AOApply_ApplyFogReadFromHistory
};

template<EAOApplyMode ApplyMode>
class TAOApplyPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TAOApplyPixelShader, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment& OutEnvironment);
};

// @baa 0x01de8000
IMPLEMENT_SHADER_TYPE(template<>, TAOApplyPixelShader<AOApply_ApplyFogReadFromHistory>, TEXT("AmbientOcclusionShader"), TEXT("AOAndFogApplyMain"), SF_Pixel, 502, 21);

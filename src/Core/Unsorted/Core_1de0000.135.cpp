// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
/* The kinds this shader comes in (those with a shader type in the game; the values are not established here). */
enum EAOMaskType
{
	AO_OcclusionMask,
	AO_HistoryMask,
	AO_HistoryUpdate,
	AO_HistoryMaskManualDepthTest,
	AO_HistoryUpdateManualDepthTest
};

template<EAOMaskType MaskType>
class TAOMaskPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TAOMaskPixelShader, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment& OutEnvironment);
};

// @baa 0x01de7dc0
IMPLEMENT_SHADER_TYPE(template<>, TAOMaskPixelShader<AO_HistoryUpdate>, TEXT("AmbientOcclusionShader"), TEXT("DynamicHistoryUpdatePixelMain"), SF_Pixel, 502, 21);

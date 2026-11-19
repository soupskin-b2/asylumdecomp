// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
class FMotionBlurPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FMotionBlurPixelShader, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment& OutEnvironment);
};

class FMotionBlurPixelShaderDynamicVelocitiesOnly : public FMotionBlurPixelShader
{
	DECLARE_SHADER_TYPE(FMotionBlurPixelShaderDynamicVelocitiesOnly, Global);
};

// @baa 0x01de5140
IMPLEMENT_SHADER_TYPE(, FMotionBlurPixelShaderDynamicVelocitiesOnly, TEXT("MotionBlurShader"), TEXT("MainPixelShaderDynamicVelocitiesOnly"), SF_Pixel, 508, 21);

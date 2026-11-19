// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
class FFluidSimulatePixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FFluidSimulatePixelShader, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
};

// @baa 0x01dec5d0
IMPLEMENT_SHADER_TYPE(, FFluidSimulatePixelShader, TEXT("FluidSurfaceSimulation"), TEXT("SimulatePixelMain"), SF_Pixel, 559, 21);

// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
class FFluidVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FFluidVertexShader, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
};

// @baa 0x01dec4d0
IMPLEMENT_SHADER_TYPE(, FFluidVertexShader, TEXT("FluidSurfaceSimulation"), TEXT("VertexMain"), SF_Vertex, 502, 21);

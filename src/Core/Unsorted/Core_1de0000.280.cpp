// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#include "ue3/Shader.h"
class FStereoExemplarVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FStereoExemplarVertexShader, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
};

// @baa 0x01deb910
IMPLEMENT_SHADER_TYPE(, FStereoExemplarVertexShader, TEXT("StereoExemplarVertexShader"), TEXT("Main"), SF_Vertex, 502, 21);

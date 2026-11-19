// Core_1df0000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

unsigned char __cdecl sub_0059f5f0(int Size, int* Data);
extern int g_025df9e8;
extern unsigned char g_026c5002;
// @baa 0x01df01b0
void sub_01df01b0(void)
{
	g_026c5002 = sub_0059f5f0(0x20c, &g_025df9e8);
}

#include "ue3/Shader.h"
class FHitProxyVertexShader : public FMeshMaterialShader
{
	DECLARE_SHADER_TYPE(FHitProxyVertexShader, MeshMaterial);

	static UBOOL ShouldCache(EShaderPlatform Platform, const FMaterial* Material, const FVertexFactoryType* VertexFactoryType);
};

// @baa 0x01df69d0
IMPLEMENT_SHADER_TYPE(, FHitProxyVertexShader, TEXT("HitProxyVertexShader"), TEXT("Main"), SF_Vertex, 529, 21);

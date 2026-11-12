// Engine_0ae0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* SceneFilterRendering.cpp: binds the Gaussian-filter shaders for a number of samples.
 * The rendering types below are not in the headers; they are declared as far as this function
 * uses them (RHI.h, RenderResource.h, Shader.h, GlobalShader.h, SceneFilterRendering.h). */
#define MAX_FILTER_SAMPLES 16
/* The D3D9 RHI's resource references are plain pointers at the call boundary. */
class FD3D9SamplerState;
class FD3D9Texture;
class FD3D9VertexDeclaration;
typedef FD3D9SamplerState* FSamplerStateRHIParamRef;

typedef FD3D9Texture* FTextureRHIParamRef;

typedef FD3D9VertexDeclaration* FVertexDeclarationRHIParamRef;

typedef FD3D9VertexDeclaration* FVertexDeclarationRHIRef;

enum EShaderPlatform;
extern EShaderPlatform GRHIShaderPlatform;
class FShader
{
};

class FGlobalShader : public FShader
{
};

class FGlobalShaderType;
/* The shaders of one platform, by type. */
template<typename ShaderMetaType>
class TShaderMap
{
public:
	template<typename ShaderType> ShaderType* GetShader() const;
};

TShaderMap<FGlobalShaderType>* GetGlobalShaderMap(EShaderPlatform Platform = GRHIShaderPlatform);
/* A reference to a shader of a shader map, found by its type. */
template<typename ShaderType>
class TShaderMapRef
{
public:
	TShaderMapRef(const TShaderMap<typename ShaderType::ShaderMetaType>* ShaderIndex)
	:	Shader(ShaderIndex->GetShader<ShaderType>())
	{}
	FORCEINLINE ShaderType* operator->() const { return Shader; }
	FORCEINLINE ShaderType* operator*() const { return Shader; }

private:
	ShaderType* Shader;
};

/* A bound shader state that is created on first use and shared by every draw call of its site. */
class FGlobalBoundShaderState
{
public:
	FGlobalBoundShaderState();
	~FGlobalBoundShaderState();
};

void SetGlobalBoundShaderState(FGlobalBoundShaderState& BoundShaderState, FVertexDeclarationRHIParamRef VertexDeclaration, FShader* VertexShader, FShader* PixelShader, UINT Stride);
/* A vertex of the quads the filters are drawn with. */
struct FFilterVertex
{
	FVector4 Position;
	FVector2D UV;
};

class FRenderResource
{
public:
	virtual ~FRenderResource();

private:
	FRenderResource* ResourceLinkElement;
	FRenderResource* ResourceLinkNext;
	FRenderResource** ResourceLinkPrevLink;
	BITFIELD bInitialized : 1;
};

class FFilterVertexDeclaration : public FRenderResource
{
public:
	FVertexDeclarationRHIRef VertexDeclarationRHI;
};

extern FFilterVertexDeclaration GFilterVertexDeclaration;
/* Filters with NumSamples samples: the vertex shader passes the sample offsets on, the pixel
 * shader weights the samples. */
template<UINT NumSamples>
class TFilterPixelShader : public FGlobalShader
{
public:
	typedef FGlobalShaderType ShaderMetaType;

	void SetParameters(FSamplerStateRHIParamRef SamplerStateRHI, FTextureRHIParamRef TextureRHI, const FLinearColor* SampleWeights);
};

template<UINT NumSamples>
class TFilterVertexShader : public FGlobalShader
{
public:
	typedef FGlobalShaderType ShaderMetaType;

	void SetParameters(const FVector2D* SampleOffsets);
};

// @baa 0x00ae2eb0
void sub_00ae2eb0(FSamplerStateRHIParamRef SamplerStateRHI, FTextureRHIParamRef TextureRHI, FVector2D* SampleOffsets, FLinearColor* SampleWeights, UINT NumSamples)
{
	// A macro to handle setting the filter shader for a specific number of samples.
#define SET_FILTER_SHADER_TYPE(NumSamples) \
	case NumSamples: \
	{ \
		TShaderMapRef<TFilterPixelShader<NumSamples> > PixelShader(GetGlobalShaderMap()); \
		TShaderMapRef<TFilterVertexShader<NumSamples> > VertexShader(GetGlobalShaderMap()); \
		VertexShader->SetParameters(SampleOffsets); \
		PixelShader->SetParameters(SamplerStateRHI, TextureRHI, SampleWeights); \
		static FGlobalBoundShaderState BoundShaderState; \
		SetGlobalBoundShaderState(BoundShaderState, GFilterVertexDeclaration.VertexDeclarationRHI, *VertexShader, *PixelShader, sizeof(FFilterVertex)); \
		break; \
	};

	// Set the appropriate filter shader for the given number of samples.
	switch (NumSamples)
	{
	SET_FILTER_SHADER_TYPE(1);
	SET_FILTER_SHADER_TYPE(2);
	SET_FILTER_SHADER_TYPE(3);
	SET_FILTER_SHADER_TYPE(4);
	SET_FILTER_SHADER_TYPE(5);
	SET_FILTER_SHADER_TYPE(6);
	SET_FILTER_SHADER_TYPE(7);
	SET_FILTER_SHADER_TYPE(8);
	SET_FILTER_SHADER_TYPE(9);
	SET_FILTER_SHADER_TYPE(10);
	SET_FILTER_SHADER_TYPE(11);
	SET_FILTER_SHADER_TYPE(12);
	SET_FILTER_SHADER_TYPE(13);
	SET_FILTER_SHADER_TYPE(14);
	SET_FILTER_SHADER_TYPE(15);
	SET_FILTER_SHADER_TYPE(16);
	default:
		GError->Logf(TEXT("Invalid number of samples: %u"), NumSamples);
	}

#undef SET_FILTER_SHADER_TYPE
}

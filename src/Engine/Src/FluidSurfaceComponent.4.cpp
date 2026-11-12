// FluidSurfaceComponent.cpp: 179 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

/* ShaderManager.h: TShaderMap::GetShader, the lookup of a shader by its type that a
 * TShaderMapRef<ShaderType> does. The containers and the shader classes are not in the headers;
 * they are declared here as far as the lookup uses them (UnSet.h, UnMap.h, RefCounting.h,
 * Shader.h). */
#define checkf(expr, ...) { if (!(expr)) appFailAssert(#expr, __FILE__, __LINE__, ##__VA_ARGS__); }
/* The index of an element of a set, INDEX_NONE for none. */
class FSetElementId
{
public:
	FSetElementId() : Index(INDEX_NONE) {}
	UBOOL IsValidId() const { return Index != INDEX_NONE; }
	operator INT() const { return Index; }

private:
	INT Index;
};

/* A set: its elements, each with the links of its hash bucket, and the buckets. */
template<typename ElementType, typename KeyInitType>
class TSet
{
public:
	FSetElementId FindId(KeyInitType Key) const;

	ElementType* Find(KeyInitType Key)
	{
		FSetElementId ElementId = FindId(Key);
		if (ElementId.IsValidId())
		{
			return &Elements[ElementId].Value;
		}
		else
		{
			return NULL;
		}
	}
	const ElementType* Find(KeyInitType Key) const
	{
		FSetElementId ElementId = FindId(Key);
		if (ElementId.IsValidId())
		{
			return &Elements[ElementId].Value;
		}
		else
		{
			return NULL;
		}
	}

private:
	class FElement
	{
	public:
		ElementType Value;
		mutable FSetElementId HashNextId;
		mutable INT HashIndex;
	};

	/* TSparseArray<FElement>: the elements, then the allocation flags and the free list. */
	FElement* Elements;
};

/* A map: a set of key and value pairs. */
template<typename KeyType, typename ValueType>
class TMap
{
public:
	ValueType* Find(KeyType Key)
	{
		FPair* Pair = Pairs.Find(Key);
		return Pair ? &Pair->Value : NULL;
	}
	const ValueType* Find(KeyType Key) const
	{
		const FPair* Pair = Pairs.Find(Key);
		return Pair ? &Pair->Value : NULL;
	}

private:
	class FPair
	{
	public:
		KeyType Key;
		ValueType Value;
	};

	TSet<FPair, KeyType> Pairs;
};

/* A counted reference to an object. */
template<typename ReferencedType>
class TRefCountPtr
{
public:
	FORCEINLINE operator ReferencedType*() const { return Reference; }

private:
	ReferencedType* Reference;
};

class FShaderType
{
public:
	virtual ~FShaderType();

	const TCHAR* GetName() const { return Name; }

private:
	DWORD HashIndex;
	const TCHAR* Name;
};

class FShader
{
};

/* The type of a shader that does not depend on a material. */
class FGlobalShaderType : public FShaderType
{
};

class FGlobalShader : public FShader
{
};

/* Gives a shader class its type: the description its shaders are compiled and looked up by. */
#define DECLARE_SHADER_TYPE(ShaderClass, ShaderMetaTypeShortcut) \
	public: \
	typedef F##ShaderMetaTypeShortcut##ShaderType ShaderMetaType; \
	static ShaderMetaType StaticType
/* The shaders of one platform, by type. */
template<typename ShaderMetaType>
class TShaderMap
{
public:
	/* Finds the shader of the given type; it is an error for the map not to have it. */
	template<typename ShaderType>
	ShaderType* GetShader() const
	{
#line 646 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\inc\\ShaderManager.h"
		const TRefCountPtr<FShader>* ShaderRef = Shaders.Find(&ShaderType::StaticType);
		checkf(ShaderRef != NULL && *ShaderRef != NULL, TEXT("Failed to find shader type %s"), ShaderType::StaticType.GetName());
		return (ShaderType*)(FShader*)*ShaderRef;
	}

private:
	TMap<FShaderType*, TRefCountPtr<FShader> > Shaders;
};

class TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFMediumQualityFetch4PCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFMediumQualityFetch4PCF, Global);
};

// @baa 0x006a4d90
template TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFMediumQualityFetch4PCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFMediumQualityFetch4PCF >() const;

#line 164 "candidate.cpp"

class TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFLowQualityManualPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFLowQualityManualPCF, Global);
};

// @baa 0x006a4cd0
template TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFLowQualityManualPCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFLowQualityManualPCF >() const;

class TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFMediumQualityManualPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFMediumQualityManualPCF, Global);
};

// @baa 0x006a4df0
template TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFMediumQualityManualPCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFMediumQualityManualPCF >() const;

class TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFHighQualityHwPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFHighQualityHwPCF, Global);
};

// @baa 0x006a4e50
template TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFHighQualityHwPCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFHighQualityHwPCF >() const;

class TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFHighQualityFetch4PCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFHighQualityFetch4PCF, Global);
};

// @baa 0x006a4eb0
template TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFHighQualityFetch4PCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFHighQualityFetch4PCF >() const;

class TModShadowVolumePixelShaderFDirectionalLightPolicy : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TModShadowVolumePixelShaderFDirectionalLightPolicy, Global);
};

// @baa 0x006a4f70
template TModShadowVolumePixelShaderFDirectionalLightPolicy* TShaderMap<FGlobalShaderType>::GetShader<TModShadowVolumePixelShaderFDirectionalLightPolicy >() const;

class FModShadowVolumeVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FModShadowVolumeVertexShader, Global);
};

// @baa 0x006a4fd0
template FModShadowVolumeVertexShader* TShaderMap<FGlobalShaderType>::GetShader<FModShadowVolumeVertexShader >() const;

class TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFHighQualityManualPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFHighQualityManualPCF, Global);
};

// @baa 0x006a4f10
template TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFHighQualityManualPCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFHighQualityManualPCF >() const;

class TModShadowVolumePixelShaderFPointLightPolicy : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TModShadowVolumePixelShaderFPointLightPolicy, Global);
};

// @baa 0x007124c0
template TModShadowVolumePixelShaderFPointLightPolicy* TShaderMap<FGlobalShaderType>::GetShader<TModShadowVolumePixelShaderFPointLightPolicy >() const;

class TModShadowProjectionPixelShaderFPointLightPolicyF4SampleHwPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TModShadowProjectionPixelShaderFPointLightPolicyF4SampleHwPCF, Global);
};

// @baa 0x00712520
template TModShadowProjectionPixelShaderFPointLightPolicyF4SampleHwPCF* TShaderMap<FGlobalShaderType>::GetShader<TModShadowProjectionPixelShaderFPointLightPolicyF4SampleHwPCF >() const;

class TModShadowProjectionPixelShaderFPointLightPolicyF4SampleManualPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TModShadowProjectionPixelShaderFPointLightPolicyF4SampleManualPCF, Global);
};

// @baa 0x00712580
template TModShadowProjectionPixelShaderFPointLightPolicyF4SampleManualPCF* TShaderMap<FGlobalShaderType>::GetShader<TModShadowProjectionPixelShaderFPointLightPolicyF4SampleManualPCF >() const;

class TModShadowProjectionPixelShaderFPointLightPolicyF16SampleHwPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TModShadowProjectionPixelShaderFPointLightPolicyF16SampleHwPCF, Global);
};

// @baa 0x007125e0
template TModShadowProjectionPixelShaderFPointLightPolicyF16SampleHwPCF* TShaderMap<FGlobalShaderType>::GetShader<TModShadowProjectionPixelShaderFPointLightPolicyF16SampleHwPCF >() const;

class TModShadowProjectionPixelShaderFPointLightPolicyF16SampleFetch4PCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TModShadowProjectionPixelShaderFPointLightPolicyF16SampleFetch4PCF, Global);
};

// @baa 0x00712640
template TModShadowProjectionPixelShaderFPointLightPolicyF16SampleFetch4PCF* TShaderMap<FGlobalShaderType>::GetShader<TModShadowProjectionPixelShaderFPointLightPolicyF16SampleFetch4PCF >() const;

class TModShadowProjectionPixelShaderFPointLightPolicyF16SampleManualPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TModShadowProjectionPixelShaderFPointLightPolicyF16SampleManualPCF, Global);
};

// @baa 0x007126a0
template TModShadowProjectionPixelShaderFPointLightPolicyF16SampleManualPCF* TShaderMap<FGlobalShaderType>::GetShader<TModShadowProjectionPixelShaderFPointLightPolicyF16SampleManualPCF >() const;

class TBranchingPCFModProjectionPixelShaderFPointLightPolicyFLowQualityFetch4PCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFPointLightPolicyFLowQualityFetch4PCF, Global);
};

// @baa 0x00712760
template TBranchingPCFModProjectionPixelShaderFPointLightPolicyFLowQualityFetch4PCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFPointLightPolicyFLowQualityFetch4PCF >() const;

class TBranchingPCFModProjectionPixelShaderFPointLightPolicyFLowQualityHwPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFPointLightPolicyFLowQualityHwPCF, Global);
};

// @baa 0x00712700
template TBranchingPCFModProjectionPixelShaderFPointLightPolicyFLowQualityHwPCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFPointLightPolicyFLowQualityHwPCF >() const;

class TBranchingPCFModProjectionPixelShaderFPointLightPolicyFLowQualityManualPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFPointLightPolicyFLowQualityManualPCF, Global);
};

// @baa 0x007127c0
template TBranchingPCFModProjectionPixelShaderFPointLightPolicyFLowQualityManualPCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFPointLightPolicyFLowQualityManualPCF >() const;

class TBranchingPCFModProjectionPixelShaderFPointLightPolicyFMediumQualityManualPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFPointLightPolicyFMediumQualityManualPCF, Global);
};

// @baa 0x007128e0
template TBranchingPCFModProjectionPixelShaderFPointLightPolicyFMediumQualityManualPCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFPointLightPolicyFMediumQualityManualPCF >() const;

class TBranchingPCFModProjectionPixelShaderFPointLightPolicyFMediumQualityFetch4PCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFPointLightPolicyFMediumQualityFetch4PCF, Global);
};

// @baa 0x00712880
template TBranchingPCFModProjectionPixelShaderFPointLightPolicyFMediumQualityFetch4PCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFPointLightPolicyFMediumQualityFetch4PCF >() const;

class TBranchingPCFModProjectionPixelShaderFPointLightPolicyFMediumQualityHwPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFPointLightPolicyFMediumQualityHwPCF, Global);
};

// @baa 0x00712820
template TBranchingPCFModProjectionPixelShaderFPointLightPolicyFMediumQualityHwPCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFPointLightPolicyFMediumQualityHwPCF >() const;

class TBranchingPCFModProjectionPixelShaderFPointLightPolicyFHighQualityFetch4PCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFPointLightPolicyFHighQualityFetch4PCF, Global);
};

// @baa 0x007129a0
template TBranchingPCFModProjectionPixelShaderFPointLightPolicyFHighQualityFetch4PCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFPointLightPolicyFHighQualityFetch4PCF >() const;

class TBranchingPCFModProjectionPixelShaderFPointLightPolicyFHighQualityHwPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFPointLightPolicyFHighQualityHwPCF, Global);
};

// @baa 0x00712940
template TBranchingPCFModProjectionPixelShaderFPointLightPolicyFHighQualityHwPCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFPointLightPolicyFHighQualityHwPCF >() const;

class TBranchingPCFModProjectionPixelShaderFPointLightPolicyFHighQualityManualPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFPointLightPolicyFHighQualityManualPCF, Global);
};

// @baa 0x00712a00
template TBranchingPCFModProjectionPixelShaderFPointLightPolicyFHighQualityManualPCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFPointLightPolicyFHighQualityManualPCF >() const;

class FLDRExtractVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FLDRExtractVertexShader, Global);
};

// @baa 0x0072ece0
template FLDRExtractVertexShader* TShaderMap<FGlobalShaderType>::GetShader<FLDRExtractVertexShader >() const;

class FShaderComplexityApplyPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FShaderComplexityApplyPixelShader, Global);
};

// @baa 0x0072ed40
template FShaderComplexityApplyPixelShader* TShaderMap<FGlobalShaderType>::GetShader<FShaderComplexityApplyPixelShader >() const;

class FScreenVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FScreenVertexShader, Global);
};

// @baa 0x0072ec80
template FScreenVertexShader* TShaderMap<FGlobalShaderType>::GetShader<FScreenVertexShader >() const;

class TModShadowProjectionPixelShaderFSpotLightPolicyF4SampleHwPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TModShadowProjectionPixelShaderFSpotLightPolicyF4SampleHwPCF, Global);
};

// @baa 0x00750150
template TModShadowProjectionPixelShaderFSpotLightPolicyF4SampleHwPCF* TShaderMap<FGlobalShaderType>::GetShader<TModShadowProjectionPixelShaderFSpotLightPolicyF4SampleHwPCF >() const;

class TModShadowProjectionPixelShaderFSpotLightPolicyF4SampleManualPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TModShadowProjectionPixelShaderFSpotLightPolicyF4SampleManualPCF, Global);
};

// @baa 0x007501b0
template TModShadowProjectionPixelShaderFSpotLightPolicyF4SampleManualPCF* TShaderMap<FGlobalShaderType>::GetShader<TModShadowProjectionPixelShaderFSpotLightPolicyF4SampleManualPCF >() const;

class TModShadowProjectionPixelShaderFSpotLightPolicyF16SampleHwPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TModShadowProjectionPixelShaderFSpotLightPolicyF16SampleHwPCF, Global);
};

// @baa 0x00750210
template TModShadowProjectionPixelShaderFSpotLightPolicyF16SampleHwPCF* TShaderMap<FGlobalShaderType>::GetShader<TModShadowProjectionPixelShaderFSpotLightPolicyF16SampleHwPCF >() const;

class TModShadowProjectionPixelShaderFSpotLightPolicyF16SampleFetch4PCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TModShadowProjectionPixelShaderFSpotLightPolicyF16SampleFetch4PCF, Global);
};

// @baa 0x00750270
template TModShadowProjectionPixelShaderFSpotLightPolicyF16SampleFetch4PCF* TShaderMap<FGlobalShaderType>::GetShader<TModShadowProjectionPixelShaderFSpotLightPolicyF16SampleFetch4PCF >() const;

class TModShadowProjectionPixelShaderFSpotLightPolicyF16SampleManualPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TModShadowProjectionPixelShaderFSpotLightPolicyF16SampleManualPCF, Global);
};

// @baa 0x007502d0
template TModShadowProjectionPixelShaderFSpotLightPolicyF16SampleManualPCF* TShaderMap<FGlobalShaderType>::GetShader<TModShadowProjectionPixelShaderFSpotLightPolicyF16SampleManualPCF >() const;

class TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFLowQualityHwPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFLowQualityHwPCF, Global);
};

// @baa 0x00750330
template TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFLowQualityHwPCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFLowQualityHwPCF >() const;

class TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFLowQualityFetch4PCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFLowQualityFetch4PCF, Global);
};

// @baa 0x00750390
template TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFLowQualityFetch4PCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFLowQualityFetch4PCF >() const;

class TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFLowQualityManualPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFLowQualityManualPCF, Global);
};

// @baa 0x007503f0
template TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFLowQualityManualPCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFLowQualityManualPCF >() const;

class TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFMediumQualityHwPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFMediumQualityHwPCF, Global);
};

// @baa 0x00750450
template TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFMediumQualityHwPCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFMediumQualityHwPCF >() const;

class TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFMediumQualityFetch4PCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFMediumQualityFetch4PCF, Global);
};

// @baa 0x007504b0
template TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFMediumQualityFetch4PCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFMediumQualityFetch4PCF >() const;

class TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFMediumQualityManualPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFMediumQualityManualPCF, Global);
};

// @baa 0x00750510
template TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFMediumQualityManualPCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFMediumQualityManualPCF >() const;

class TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFHighQualityHwPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFHighQualityHwPCF, Global);
};

// @baa 0x00750570
template TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFHighQualityHwPCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFHighQualityHwPCF >() const;

class TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFHighQualityFetch4PCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFHighQualityFetch4PCF, Global);
};

// @baa 0x007505d0
template TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFHighQualityFetch4PCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFHighQualityFetch4PCF >() const;

class TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFHighQualityManualPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFHighQualityManualPCF, Global);
};

// @baa 0x00750630
template TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFHighQualityManualPCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFSpotLightPolicyFHighQualityManualPCF >() const;

class TModShadowVolumePixelShaderFSpotLightPolicy : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TModShadowVolumePixelShaderFSpotLightPolicy, Global);
};

// @baa 0x00750690
template TModShadowVolumePixelShaderFSpotLightPolicy* TShaderMap<FGlobalShaderType>::GetShader<TModShadowVolumePixelShaderFSpotLightPolicy >() const;

class FUberPostProcessVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FUberPostProcessVertexShader, Global);
};

// @baa 0x007711f0
template FUberPostProcessVertexShader* TShaderMap<FGlobalShaderType>::GetShader<FUberPostProcessVertexShader >() const;

class TUberPostProcessBlendPixelShaderFALSE : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TUberPostProcessBlendPixelShaderFALSE, Global);
};

// @baa 0x007712b0
template TUberPostProcessBlendPixelShaderFALSE* TShaderMap<FGlobalShaderType>::GetShader<TUberPostProcessBlendPixelShaderFALSE >() const;

class TUberPostProcessBlendPixelShaderTRUE : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TUberPostProcessBlendPixelShaderTRUE, Global);
};

// @baa 0x00771250
template TUberPostProcessBlendPixelShaderTRUE* TShaderMap<FGlobalShaderType>::GetShader<TUberPostProcessBlendPixelShaderTRUE >() const;

class FMotionBlurVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FMotionBlurVertexShader, Global);
};

// @baa 0x00855f20
template FMotionBlurVertexShader* TShaderMap<FGlobalShaderType>::GetShader<FMotionBlurVertexShader >() const;

class FMotionBlurPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FMotionBlurPixelShader, Global);
};

// @baa 0x00855f80
template FMotionBlurPixelShader* TShaderMap<FGlobalShaderType>::GetShader<FMotionBlurPixelShader >() const;

class FMotionBlurPixelShaderDynamicVelocitiesOnly : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FMotionBlurPixelShaderDynamicVelocitiesOnly, Global);
};

// @baa 0x00855fe0
template FMotionBlurPixelShaderDynamicVelocitiesOnly* TShaderMap<FGlobalShaderType>::GetShader<FMotionBlurPixelShaderDynamicVelocitiesOnly >() const;

/* The kinds this shader comes in (those with a shader type in the game; the values are not established here). */
enum EAOMaskType
{
	AO_HistoryUpdate,
	AO_HistoryUpdateManualDepthTest,
	AO_HistoryMask,
	AO_HistoryMaskManualDepthTest,
	AO_OcclusionMask
};

template<EAOMaskType MaskType>
class TAOMaskPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TAOMaskPixelShader, Global);
};

// @baa 0x00a873c0
template TAOMaskPixelShader<AO_HistoryUpdate>* TShaderMap<FGlobalShaderType>::GetShader<TAOMaskPixelShader<AO_HistoryUpdate> >() const;

// @baa 0x00a87420
template TAOMaskPixelShader<AO_HistoryUpdateManualDepthTest>* TShaderMap<FGlobalShaderType>::GetShader<TAOMaskPixelShader<AO_HistoryUpdateManualDepthTest> >() const;

// @baa 0x00a87480
template TAOMaskPixelShader<AO_HistoryMask>* TShaderMap<FGlobalShaderType>::GetShader<TAOMaskPixelShader<AO_HistoryMask> >() const;

// @baa 0x00a87540
template TAOMaskPixelShader<AO_OcclusionMask>* TShaderMap<FGlobalShaderType>::GetShader<TAOMaskPixelShader<AO_OcclusionMask> >() const;

// @baa 0x00a874e0
template TAOMaskPixelShader<AO_HistoryMaskManualDepthTest>* TShaderMap<FGlobalShaderType>::GetShader<TAOMaskPixelShader<AO_HistoryMaskManualDepthTest> >() const;

class FDownsampleDepthVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FDownsampleDepthVertexShader, Global);
};

// @baa 0x00a875a0
template FDownsampleDepthVertexShader* TShaderMap<FGlobalShaderType>::GetShader<FDownsampleDepthVertexShader >() const;

class FDownsampleDepthPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FDownsampleDepthPixelShader, Global);
};

// @baa 0x00a87600
template FDownsampleDepthPixelShader* TShaderMap<FGlobalShaderType>::GetShader<FDownsampleDepthPixelShader >() const;

class FOneColorVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FOneColorVertexShader, Global);
};

// @baa 0x00a87660
template FOneColorVertexShader* TShaderMap<FGlobalShaderType>::GetShader<FOneColorVertexShader >() const;

class FOneColorPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FOneColorPixelShader, Global);
};

// @baa 0x00a876c0
template FOneColorPixelShader* TShaderMap<FGlobalShaderType>::GetShader<FOneColorPixelShader >() const;

class FAmbientOcclusionVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FAmbientOcclusionVertexShader, Global);
};

// @baa 0x00a87720
template FAmbientOcclusionVertexShader* TShaderMap<FGlobalShaderType>::GetShader<FAmbientOcclusionVertexShader >() const;

class TAmbientOcclusionPixelShaderFDefaultQualityAOTRUE : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TAmbientOcclusionPixelShaderFDefaultQualityAOTRUE, Global);
};

// @baa 0x00a87780
template TAmbientOcclusionPixelShaderFDefaultQualityAOTRUE* TShaderMap<FGlobalShaderType>::GetShader<TAmbientOcclusionPixelShaderFDefaultQualityAOTRUE >() const;

class TAmbientOcclusionPixelShaderFDefaultQualityAOFALSE : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TAmbientOcclusionPixelShaderFDefaultQualityAOFALSE, Global);
};

// @baa 0x00a877e0
template TAmbientOcclusionPixelShaderFDefaultQualityAOFALSE* TShaderMap<FGlobalShaderType>::GetShader<TAmbientOcclusionPixelShaderFDefaultQualityAOFALSE >() const;

template<UINT NumSamples>
class TEdgePreservingFilterPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TEdgePreservingFilterPixelShader, Global);
};

// @baa 0x00a878a0
template TEdgePreservingFilterPixelShader<2>* TShaderMap<FGlobalShaderType>::GetShader<TEdgePreservingFilterPixelShader<2> >() const;

class FEdgePreservingFilterVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FEdgePreservingFilterVertexShader, Global);
};

// @baa 0x00a87840
template FEdgePreservingFilterVertexShader* TShaderMap<FGlobalShaderType>::GetShader<FEdgePreservingFilterVertexShader >() const;

// @baa 0x00a87900
template TEdgePreservingFilterPixelShader<4>* TShaderMap<FGlobalShaderType>::GetShader<TEdgePreservingFilterPixelShader<4> >() const;

// @baa 0x00a87960
template TEdgePreservingFilterPixelShader<6>* TShaderMap<FGlobalShaderType>::GetShader<TEdgePreservingFilterPixelShader<6> >() const;

// @baa 0x00a879c0
template TEdgePreservingFilterPixelShader<8>* TShaderMap<FGlobalShaderType>::GetShader<TEdgePreservingFilterPixelShader<8> >() const;

// @baa 0x00a87a20
template TEdgePreservingFilterPixelShader<10>* TShaderMap<FGlobalShaderType>::GetShader<TEdgePreservingFilterPixelShader<10> >() const;

// @baa 0x00a87a80
template TEdgePreservingFilterPixelShader<12>* TShaderMap<FGlobalShaderType>::GetShader<TEdgePreservingFilterPixelShader<12> >() const;

// @baa 0x00a87ae0
template TEdgePreservingFilterPixelShader<14>* TShaderMap<FGlobalShaderType>::GetShader<TEdgePreservingFilterPixelShader<14> >() const;

// @baa 0x00a87b40
template TEdgePreservingFilterPixelShader<16>* TShaderMap<FGlobalShaderType>::GetShader<TEdgePreservingFilterPixelShader<16> >() const;

// @baa 0x00a87ba0
template TEdgePreservingFilterPixelShader<18>* TShaderMap<FGlobalShaderType>::GetShader<TEdgePreservingFilterPixelShader<18> >() const;

// @baa 0x00a87c00
template TEdgePreservingFilterPixelShader<20>* TShaderMap<FGlobalShaderType>::GetShader<TEdgePreservingFilterPixelShader<20> >() const;

// @baa 0x00a87c60
template TEdgePreservingFilterPixelShader<22>* TShaderMap<FGlobalShaderType>::GetShader<TEdgePreservingFilterPixelShader<22> >() const;

// @baa 0x00a87cc0
template TEdgePreservingFilterPixelShader<24>* TShaderMap<FGlobalShaderType>::GetShader<TEdgePreservingFilterPixelShader<24> >() const;

// @baa 0x00a87d20
template TEdgePreservingFilterPixelShader<26>* TShaderMap<FGlobalShaderType>::GetShader<TEdgePreservingFilterPixelShader<26> >() const;

// @baa 0x00a87d80
template TEdgePreservingFilterPixelShader<28>* TShaderMap<FGlobalShaderType>::GetShader<TEdgePreservingFilterPixelShader<28> >() const;

class FHistoryUpdateVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FHistoryUpdateVertexShader, Global);
};

// @baa 0x00a87e40
template FHistoryUpdateVertexShader* TShaderMap<FGlobalShaderType>::GetShader<FHistoryUpdateVertexShader >() const;

// @baa 0x00a87de0
template TEdgePreservingFilterPixelShader<30>* TShaderMap<FGlobalShaderType>::GetShader<TEdgePreservingFilterPixelShader<30> >() const;

class FStaticHistoryUpdatePixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FStaticHistoryUpdatePixelShader, Global);
};

// @baa 0x00a87ea0
template FStaticHistoryUpdatePixelShader* TShaderMap<FGlobalShaderType>::GetShader<FStaticHistoryUpdatePixelShader >() const;

/* The kinds this shader comes in (those with a shader type in the game; the values are not established here). */
enum EAOApplyMode
{
	AOApply_ApplyFogReadFromHistory,
	AOApply_ReadFromAOHistory,
	AOApply_ApplyFog,
	AOApply_Normal
};

template<EAOApplyMode ApplyMode>
class TAOApplyPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TAOApplyPixelShader, Global);
};

// @baa 0x00a87f00
template TAOApplyPixelShader<AOApply_ApplyFogReadFromHistory>* TShaderMap<FGlobalShaderType>::GetShader<TAOApplyPixelShader<AOApply_ApplyFogReadFromHistory> >() const;

// @baa 0x00a87f60
template TAOApplyPixelShader<AOApply_ReadFromAOHistory>* TShaderMap<FGlobalShaderType>::GetShader<TAOApplyPixelShader<AOApply_ReadFromAOHistory> >() const;

// @baa 0x00a87fc0
template TAOApplyPixelShader<AOApply_ApplyFog>* TShaderMap<FGlobalShaderType>::GetShader<TAOApplyPixelShader<AOApply_ApplyFog> >() const;

class FSimpleElementVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FSimpleElementVertexShader, Global);
};

// @baa 0x00a88080
template FSimpleElementVertexShader* TShaderMap<FGlobalShaderType>::GetShader<FSimpleElementVertexShader >() const;

// @baa 0x00a88020
template TAOApplyPixelShader<AOApply_Normal>* TShaderMap<FGlobalShaderType>::GetShader<TAOApplyPixelShader<AOApply_Normal> >() const;

class FSimpleElementHitProxyPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FSimpleElementHitProxyPixelShader, Global);
};

// @baa 0x00a880e0
template FSimpleElementHitProxyPixelShader* TShaderMap<FGlobalShaderType>::GetShader<FSimpleElementHitProxyPixelShader >() const;

class FSimpleElementMaskedGammaPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FSimpleElementMaskedGammaPixelShader, Global);
};

// @baa 0x00a88140
template FSimpleElementMaskedGammaPixelShader* TShaderMap<FGlobalShaderType>::GetShader<FSimpleElementMaskedGammaPixelShader >() const;

class FSimpleElementPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FSimpleElementPixelShader, Global);
};

// @baa 0x00a881a0
template FSimpleElementPixelShader* TShaderMap<FGlobalShaderType>::GetShader<FSimpleElementPixelShader >() const;

class FSimpleElementGammaPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FSimpleElementGammaPixelShader, Global);
};

// @baa 0x00a88200
template FSimpleElementGammaPixelShader* TShaderMap<FGlobalShaderType>::GetShader<FSimpleElementGammaPixelShader >() const;

template<UINT NumLayers>
class THeightFogVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(THeightFogVertexShader, Global);
};

// @baa 0x00a88260
template THeightFogVertexShader<1>* TShaderMap<FGlobalShaderType>::GetShader<THeightFogVertexShader<1> >() const;

template<UINT NumLayers>
class THeightFogPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(THeightFogPixelShader, Global);
};

// @baa 0x00a882c0
template THeightFogPixelShader<1>* TShaderMap<FGlobalShaderType>::GetShader<THeightFogPixelShader<1> >() const;

// @baa 0x00a88320
template THeightFogVertexShader<4>* TShaderMap<FGlobalShaderType>::GetShader<THeightFogVertexShader<4> >() const;

// @baa 0x00a88380
template THeightFogPixelShader<4>* TShaderMap<FGlobalShaderType>::GetShader<THeightFogPixelShader<4> >() const;

/* The type of a shader that is compiled once per material. */
class FMaterialShaderType : public FShaderType
{
};

class FMaterialShader : public FShader
{
};

class FLightFunctionVertexShader : public FMaterialShader
{
	DECLARE_SHADER_TYPE(FLightFunctionVertexShader, Material);
};

// @baa 0x00adce80
template FLightFunctionVertexShader* TShaderMap<FMaterialShaderType>::GetShader<FLightFunctionVertexShader >() const;

class FLightFunctionPixelShader : public FMaterialShader
{
	DECLARE_SHADER_TYPE(FLightFunctionPixelShader, Material);
};

// @baa 0x00adcee0
template FLightFunctionPixelShader* TShaderMap<FMaterialShaderType>::GetShader<FLightFunctionPixelShader >() const;

template<UINT NumSamples>
class TFilterPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TFilterPixelShader, Global);
};

// @baa 0x00add0e0
template TFilterPixelShader<2>* TShaderMap<FGlobalShaderType>::GetShader<TFilterPixelShader<2> >() const;

template<UINT NumSamples>
class TFilterVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TFilterVertexShader, Global);
};

// @baa 0x00add080
template TFilterVertexShader<1>* TShaderMap<FGlobalShaderType>::GetShader<TFilterVertexShader<1> >() const;

// @baa 0x00add140
template TFilterVertexShader<2>* TShaderMap<FGlobalShaderType>::GetShader<TFilterVertexShader<2> >() const;

// @baa 0x00add1a0
template TFilterPixelShader<3>* TShaderMap<FGlobalShaderType>::GetShader<TFilterPixelShader<3> >() const;

// @baa 0x00add200
template TFilterVertexShader<3>* TShaderMap<FGlobalShaderType>::GetShader<TFilterVertexShader<3> >() const;

// @baa 0x00add260
template TFilterPixelShader<4>* TShaderMap<FGlobalShaderType>::GetShader<TFilterPixelShader<4> >() const;

// @baa 0x00add2c0
template TFilterVertexShader<4>* TShaderMap<FGlobalShaderType>::GetShader<TFilterVertexShader<4> >() const;

// @baa 0x00add320
template TFilterPixelShader<5>* TShaderMap<FGlobalShaderType>::GetShader<TFilterPixelShader<5> >() const;

// @baa 0x00add380
template TFilterVertexShader<5>* TShaderMap<FGlobalShaderType>::GetShader<TFilterVertexShader<5> >() const;

// @baa 0x00add440
template TFilterVertexShader<6>* TShaderMap<FGlobalShaderType>::GetShader<TFilterVertexShader<6> >() const;

// @baa 0x00add3e0
template TFilterPixelShader<6>* TShaderMap<FGlobalShaderType>::GetShader<TFilterPixelShader<6> >() const;

// @baa 0x00add4a0
template TFilterPixelShader<7>* TShaderMap<FGlobalShaderType>::GetShader<TFilterPixelShader<7> >() const;

// @baa 0x00add560
template TFilterPixelShader<8>* TShaderMap<FGlobalShaderType>::GetShader<TFilterPixelShader<8> >() const;

// @baa 0x00add500
template TFilterVertexShader<7>* TShaderMap<FGlobalShaderType>::GetShader<TFilterVertexShader<7> >() const;

// @baa 0x00add5c0
template TFilterVertexShader<8>* TShaderMap<FGlobalShaderType>::GetShader<TFilterVertexShader<8> >() const;

// @baa 0x00add620
template TFilterPixelShader<9>* TShaderMap<FGlobalShaderType>::GetShader<TFilterPixelShader<9> >() const;

// @baa 0x00add680
template TFilterVertexShader<9>* TShaderMap<FGlobalShaderType>::GetShader<TFilterVertexShader<9> >() const;

// @baa 0x00add6e0
template TFilterPixelShader<10>* TShaderMap<FGlobalShaderType>::GetShader<TFilterPixelShader<10> >() const;

// @baa 0x00add7a0
template TFilterPixelShader<11>* TShaderMap<FGlobalShaderType>::GetShader<TFilterPixelShader<11> >() const;

// @baa 0x00add740
template TFilterVertexShader<10>* TShaderMap<FGlobalShaderType>::GetShader<TFilterVertexShader<10> >() const;

// @baa 0x00add800
template TFilterVertexShader<11>* TShaderMap<FGlobalShaderType>::GetShader<TFilterVertexShader<11> >() const;

// @baa 0x00add860
template TFilterPixelShader<12>* TShaderMap<FGlobalShaderType>::GetShader<TFilterPixelShader<12> >() const;

// @baa 0x00add8c0
template TFilterVertexShader<12>* TShaderMap<FGlobalShaderType>::GetShader<TFilterVertexShader<12> >() const;

// @baa 0x00add920
template TFilterPixelShader<13>* TShaderMap<FGlobalShaderType>::GetShader<TFilterPixelShader<13> >() const;

// @baa 0x00add980
template TFilterVertexShader<13>* TShaderMap<FGlobalShaderType>::GetShader<TFilterVertexShader<13> >() const;

// @baa 0x00adda40
template TFilterVertexShader<14>* TShaderMap<FGlobalShaderType>::GetShader<TFilterVertexShader<14> >() const;

// @baa 0x00add9e0
template TFilterPixelShader<14>* TShaderMap<FGlobalShaderType>::GetShader<TFilterPixelShader<14> >() const;

// @baa 0x00addaa0
template TFilterPixelShader<15>* TShaderMap<FGlobalShaderType>::GetShader<TFilterPixelShader<15> >() const;

// @baa 0x00addb00
template TFilterVertexShader<15>* TShaderMap<FGlobalShaderType>::GetShader<TFilterVertexShader<15> >() const;

// @baa 0x00addb60
template TFilterPixelShader<16>* TShaderMap<FGlobalShaderType>::GetShader<TFilterPixelShader<16> >() const;

template<INT Variant>
class FOcclusionQueryVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FOcclusionQueryVertexShader, Global);
};

// @baa 0x00addc20
template FOcclusionQueryVertexShader<0>* TShaderMap<FGlobalShaderType>::GetShader<FOcclusionQueryVertexShader<0> >() const;

// @baa 0x00addbc0
template TFilterVertexShader<16>* TShaderMap<FGlobalShaderType>::GetShader<TFilterVertexShader<16> >() const;

class FGammaCorrectionVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FGammaCorrectionVertexShader, Global);
};

// @baa 0x00addc80
template FGammaCorrectionVertexShader* TShaderMap<FGlobalShaderType>::GetShader<FGammaCorrectionVertexShader >() const;

class FGammaCorrectionPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FGammaCorrectionPixelShader, Global);
};

// @baa 0x00addce0
template FGammaCorrectionPixelShader* TShaderMap<FGlobalShaderType>::GetShader<FGammaCorrectionPixelShader >() const;

/* The way the shadow depths are filtered. */
class F4SampleHwPCF;
template<class ShadowFilteringPolicy>
class TShadowProjectionPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TShadowProjectionPixelShader, Global);
};

// @baa 0x00b14080
template TShadowProjectionPixelShader<F4SampleHwPCF>* TShaderMap<FGlobalShaderType>::GetShader<TShadowProjectionPixelShader<F4SampleHwPCF> >() const;

/* The way the shadow depths are filtered. */
class F4SampleManualPCF;
// @baa 0x00b140e0
template TShadowProjectionPixelShader<F4SampleManualPCF>* TShaderMap<FGlobalShaderType>::GetShader<TShadowProjectionPixelShader<F4SampleManualPCF> >() const;

/* The way the shadow depths are filtered. */
class F16SampleHwPCF;
// @baa 0x00b14140
template TShadowProjectionPixelShader<F16SampleHwPCF>* TShaderMap<FGlobalShaderType>::GetShader<TShadowProjectionPixelShader<F16SampleHwPCF> >() const;

/* The way the shadow depths are filtered. */
class F16SampleManualPCF;
// @baa 0x00b14200
template TShadowProjectionPixelShader<F16SampleManualPCF>* TShaderMap<FGlobalShaderType>::GetShader<TShadowProjectionPixelShader<F16SampleManualPCF> >() const;

/* The way the shadow depths are filtered. */
class F16SampleFetch4PCF;
// @baa 0x00b141a0
template TShadowProjectionPixelShader<F16SampleFetch4PCF>* TShaderMap<FGlobalShaderType>::GetShader<TShadowProjectionPixelShader<F16SampleFetch4PCF> >() const;

class FFilterOSMVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FFilterOSMVertexShader, Global);
};

// @baa 0x00b14260
template FFilterOSMVertexShader* TShaderMap<FGlobalShaderType>::GetShader<FFilterOSMVertexShader >() const;

class FGenerateOSMPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FGenerateOSMPixelShader, Global);
};

// @baa 0x00b142c0
template FGenerateOSMPixelShader* TShaderMap<FGlobalShaderType>::GetShader<FGenerateOSMPixelShader >() const;

class FShadowProjectionVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FShadowProjectionVertexShader, Global);
};

// @baa 0x00b14320
template FShadowProjectionVertexShader* TShaderMap<FGlobalShaderType>::GetShader<FShadowProjectionVertexShader >() const;

/* The way the shadow depths are filtered. */
class F4SampleManualPCFVolumetricOSM;
// @baa 0x00b14380
template TShadowProjectionPixelShader<F4SampleManualPCFVolumetricOSM>* TShaderMap<FGlobalShaderType>::GetShader<TShadowProjectionPixelShader<F4SampleManualPCFVolumetricOSM> >() const;

class FModShadowProjectionVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FModShadowProjectionVertexShader, Global);
};

// @baa 0x00b143e0
template FModShadowProjectionVertexShader* TShaderMap<FGlobalShaderType>::GetShader<FModShadowProjectionVertexShader >() const;

class FShadowVolumeVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FShadowVolumeVertexShader, Global);
};

// @baa 0x00b14440
template FShadowVolumeVertexShader* TShaderMap<FGlobalShaderType>::GetShader<FShadowVolumeVertexShader >() const;

class FStereoCalibPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FStereoCalibPixelShader, Global);
};

// @baa 0x00b14560
template FStereoCalibPixelShader* TShaderMap<FGlobalShaderType>::GetShader<FStereoCalibPixelShader >() const;

class FStereoExemplarVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FStereoExemplarVertexShader, Global);
};

// @baa 0x00b144a0
template FStereoExemplarVertexShader* TShaderMap<FGlobalShaderType>::GetShader<FStereoExemplarVertexShader >() const;

class FStereoExemplarPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FStereoExemplarPixelShader, Global);
};

// @baa 0x00b14500
template FStereoExemplarPixelShader* TShaderMap<FGlobalShaderType>::GetShader<FStereoExemplarPixelShader >() const;

class FParticleDownsamplePixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FParticleDownsamplePixelShader, Global);
};

// @baa 0x00b145c0
template FParticleDownsamplePixelShader* TShaderMap<FGlobalShaderType>::GetShader<FParticleDownsamplePixelShader >() const;

class FParticleUpsamplePixelShader4 : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FParticleUpsamplePixelShader4, Global);
};

// @baa 0x00b14620
template FParticleUpsamplePixelShader4* TShaderMap<FGlobalShaderType>::GetShader<FParticleUpsamplePixelShader4 >() const;

class FLDRExtractPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FLDRExtractPixelShader, Global);
};

// @baa 0x00b14680
template FLDRExtractPixelShader* TShaderMap<FGlobalShaderType>::GetShader<FLDRExtractPixelShader >() const;

/* The type of a shader that is compiled once per material and vertex factory. */
class FMeshMaterialShaderType : public FShaderType
{
};

class FMeshMaterialShader : public FMaterialShader
{
};

class FVelocityVertexShader : public FMeshMaterialShader
{
	DECLARE_SHADER_TYPE(FVelocityVertexShader, MeshMaterial);
};

// @baa 0x00b42e80
template FVelocityVertexShader* TShaderMap<FMeshMaterialShaderType>::GetShader<FVelocityVertexShader >() const;

class FVelocityPixelShader : public FMeshMaterialShader
{
	DECLARE_SHADER_TYPE(FVelocityPixelShader, MeshMaterial);
};

// @baa 0x00b42ee0
template FVelocityPixelShader* TShaderMap<FMeshMaterialShaderType>::GetShader<FVelocityPixelShader >() const;

class FFluidVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FFluidVertexShader, Global);
};

// @baa 0x00be8d30
template FFluidVertexShader* TShaderMap<FGlobalShaderType>::GetShader<FFluidVertexShader >() const;

class FFluidNormalPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FFluidNormalPixelShader, Global);
};

// @baa 0x00be8e50
template FFluidNormalPixelShader* TShaderMap<FGlobalShaderType>::GetShader<FFluidNormalPixelShader >() const;

class FApplyForcePixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FApplyForcePixelShader, Global);
};

// @baa 0x00be8d90
template FApplyForcePixelShader* TShaderMap<FGlobalShaderType>::GetShader<FApplyForcePixelShader >() const;

class FFluidSimulatePixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FFluidSimulatePixelShader, Global);
};

// @baa 0x00be8df0
template FFluidSimulatePixelShader* TShaderMap<FGlobalShaderType>::GetShader<FFluidSimulatePixelShader >() const;

class FFluidApplyPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FFluidApplyPixelShader, Global);
};

// @baa 0x00be8eb0
template FFluidApplyPixelShader* TShaderMap<FGlobalShaderType>::GetShader<FFluidApplyPixelShader >() const;

class FLoadingIconPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FLoadingIconPixelShader, Global);
};

// @baa 0x00c406d0
template FLoadingIconPixelShader* TShaderMap<FGlobalShaderType>::GetShader<FLoadingIconPixelShader >() const;

class FLoadingIconVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FLoadingIconVertexShader, Global);
};

// @baa 0x00c40670
template FLoadingIconVertexShader* TShaderMap<FGlobalShaderType>::GetShader<FLoadingIconVertexShader >() const;

class FBinkYCrCbAToRGBAPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FBinkYCrCbAToRGBAPixelShader, Global);
};

// @baa 0x00ccca70
template FBinkYCrCbAToRGBAPixelShader* TShaderMap<FGlobalShaderType>::GetShader<FBinkYCrCbAToRGBAPixelShader >() const;

class FBinkVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FBinkVertexShader, Global);
};

// @baa 0x00ccca10
template FBinkVertexShader* TShaderMap<FGlobalShaderType>::GetShader<FBinkVertexShader >() const;

class FTextureDensityVertexShader : public FMeshMaterialShader
{
	DECLARE_SHADER_TYPE(FTextureDensityVertexShader, MeshMaterial);
};

// @baa 0x00e092e0
template FTextureDensityVertexShader* TShaderMap<FMeshMaterialShaderType>::GetShader<FTextureDensityVertexShader >() const;

class FBinkYCrCbToRGBNoPixelAlphaPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FBinkYCrCbToRGBNoPixelAlphaPixelShader, Global);
};

// @baa 0x00cccad0
template FBinkYCrCbToRGBNoPixelAlphaPixelShader* TShaderMap<FGlobalShaderType>::GetShader<FBinkYCrCbToRGBNoPixelAlphaPixelShader >() const;

class FTextureDensityPixelShader : public FMeshMaterialShader
{
	DECLARE_SHADER_TYPE(FTextureDensityPixelShader, MeshMaterial);
};

// @baa 0x00e09340
template FTextureDensityPixelShader* TShaderMap<FMeshMaterialShaderType>::GetShader<FTextureDensityPixelShader >() const;

/* The kinds this shader comes in (those with a shader type in the game; the values are not established here). */
enum EGFxPixelShaderType
{
	GFx_PS_SolidColor,
	GFx_PS_CxformTexture,
	GFx_PS_CxformTextureMultiply,
	GFx_PS_TextTexture,
	GFx_PS_TextTextureColor,
	GFx_PS_TextTextureColorMultiply,
	GFx_PS_CxformGouraud,
	GFx_PS_CxformGouraudNoAddAlpha,
	GFx_PS_CxformGouraudTexture,
	GFx_PS_Cxform2Texture,
	GFx_PS_CxformGouraudMultiply,
	GFx_PS_CxformGouraudMultiplyNoAddAlpha,
	GFx_PS_CxformGouraudMultiplyTexture,
	GFx_PS_CxformMultiply2Texture
};

template<EGFxPixelShaderType PixelShaderType>
class FGFxPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FGFxPixelShader, Global);
};

// @baa 0x00e62bd0
template FGFxPixelShader<GFx_PS_SolidColor>* TShaderMap<FGlobalShaderType>::GetShader<FGFxPixelShader<GFx_PS_SolidColor> >() const;

// @baa 0x00e62c30
template FGFxPixelShader<GFx_PS_CxformTexture>* TShaderMap<FGlobalShaderType>::GetShader<FGFxPixelShader<GFx_PS_CxformTexture> >() const;

// @baa 0x00e62c90
template FGFxPixelShader<GFx_PS_CxformTextureMultiply>* TShaderMap<FGlobalShaderType>::GetShader<FGFxPixelShader<GFx_PS_CxformTextureMultiply> >() const;

// @baa 0x00e62d50
template FGFxPixelShader<GFx_PS_TextTextureColor>* TShaderMap<FGlobalShaderType>::GetShader<FGFxPixelShader<GFx_PS_TextTextureColor> >() const;

// @baa 0x00e62cf0
template FGFxPixelShader<GFx_PS_TextTexture>* TShaderMap<FGlobalShaderType>::GetShader<FGFxPixelShader<GFx_PS_TextTexture> >() const;

// @baa 0x00e62e10
template FGFxPixelShader<GFx_PS_CxformGouraud>* TShaderMap<FGlobalShaderType>::GetShader<FGFxPixelShader<GFx_PS_CxformGouraud> >() const;

// @baa 0x00e62db0
template FGFxPixelShader<GFx_PS_TextTextureColorMultiply>* TShaderMap<FGlobalShaderType>::GetShader<FGFxPixelShader<GFx_PS_TextTextureColorMultiply> >() const;

// @baa 0x00e62e70
template FGFxPixelShader<GFx_PS_CxformGouraudNoAddAlpha>* TShaderMap<FGlobalShaderType>::GetShader<FGFxPixelShader<GFx_PS_CxformGouraudNoAddAlpha> >() const;

// @baa 0x00e62ed0
template FGFxPixelShader<GFx_PS_CxformGouraudTexture>* TShaderMap<FGlobalShaderType>::GetShader<FGFxPixelShader<GFx_PS_CxformGouraudTexture> >() const;

// @baa 0x00e62f90
template FGFxPixelShader<GFx_PS_CxformGouraudMultiply>* TShaderMap<FGlobalShaderType>::GetShader<FGFxPixelShader<GFx_PS_CxformGouraudMultiply> >() const;

// @baa 0x00e62ff0
template FGFxPixelShader<GFx_PS_CxformGouraudMultiplyNoAddAlpha>* TShaderMap<FGlobalShaderType>::GetShader<FGFxPixelShader<GFx_PS_CxformGouraudMultiplyNoAddAlpha> >() const;

// @baa 0x00e62f30
template FGFxPixelShader<GFx_PS_Cxform2Texture>* TShaderMap<FGlobalShaderType>::GetShader<FGFxPixelShader<GFx_PS_Cxform2Texture> >() const;

// @baa 0x00e63050
template FGFxPixelShader<GFx_PS_CxformGouraudMultiplyTexture>* TShaderMap<FGlobalShaderType>::GetShader<FGFxPixelShader<GFx_PS_CxformGouraudMultiplyTexture> >() const;

// @baa 0x00e630b0
template FGFxPixelShader<GFx_PS_CxformMultiply2Texture>* TShaderMap<FGlobalShaderType>::GetShader<FGFxPixelShader<GFx_PS_CxformMultiply2Texture> >() const;

/* The kinds this shader comes in (those with a shader type in the game; the values are not established here). */
enum EGFxVertexShaderType
{
	GFx_VS_Strip,
	GFx_VS_Glyph,
	GFx_VS_XY16iC32,
	GFx_VS_XY16iCF32,
	GFx_VS_XY16iCF32_NoTex,
	GFx_VS_XY16iCF32_NoTexNoAlpha,
	GFx_VS_XY16iCF32_T2
};

template<EGFxVertexShaderType VertexShaderType>
class FGFxVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FGFxVertexShader, Global);
};

// @baa 0x00e631d0
template FGFxVertexShader<GFx_VS_XY16iC32>* TShaderMap<FGlobalShaderType>::GetShader<FGFxVertexShader<GFx_VS_XY16iC32> >() const;

// @baa 0x00e63170
template FGFxVertexShader<GFx_VS_Glyph>* TShaderMap<FGlobalShaderType>::GetShader<FGFxVertexShader<GFx_VS_Glyph> >() const;

// @baa 0x00e63110
template FGFxVertexShader<GFx_VS_Strip>* TShaderMap<FGlobalShaderType>::GetShader<FGFxVertexShader<GFx_VS_Strip> >() const;

// @baa 0x00e63290
template FGFxVertexShader<GFx_VS_XY16iCF32_NoTex>* TShaderMap<FGlobalShaderType>::GetShader<FGFxVertexShader<GFx_VS_XY16iCF32_NoTex> >() const;

// @baa 0x00e63230
template FGFxVertexShader<GFx_VS_XY16iCF32>* TShaderMap<FGlobalShaderType>::GetShader<FGFxVertexShader<GFx_VS_XY16iCF32> >() const;

// @baa 0x00e632f0
template FGFxVertexShader<GFx_VS_XY16iCF32_NoTexNoAlpha>* TShaderMap<FGlobalShaderType>::GetShader<FGFxVertexShader<GFx_VS_XY16iCF32_NoTexNoAlpha> >() const;

// @baa 0x00e63350
template FGFxVertexShader<GFx_VS_XY16iCF32_T2>* TShaderMap<FGlobalShaderType>::GetShader<FGFxVertexShader<GFx_VS_XY16iCF32_T2> >() const;

class FNULLPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FNULLPixelShader, Global);
};

// @baa 0x00eaad20
template FNULLPixelShader* TShaderMap<FGlobalShaderType>::GetShader<FNULLPixelShader >() const;

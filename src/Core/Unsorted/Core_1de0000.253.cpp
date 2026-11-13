// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* A shader class's type: the description its shaders are compiled, serialized and looked up by,
 * defined with IMPLEMENT_SHADER_TYPE next to the shader class. The shader classes and the
 * containers the type holds are not in the headers; they are declared here as far as the
 * definition needs them (Shader.h, ShaderManager.h, GlobalShader.h, MaterialShader.h,
 * MeshMaterialShader.h; UnSet.h, UnMap.h, SparseArray.h, BitArray.h,
 * UnContainerAllocationPolicies.h). */
/* The index of an element of a set, INDEX_NONE for none. */
class FSetElementId
{
public:
	FSetElementId() : Index(INDEX_NONE) {}

private:
	INT Index;
};

/* Keeps a few elements in the container itself and allocates when there are more. */
template<UINT NumInlineElements>
class TInlineAllocator
{
public:
	template<typename ElementType>
	class ForElementType
	{
	private:
		ElementType InlineData[NumInlineElements];
		ElementType* SecondaryData;
	};
};

/* An array of bits. */
class TBitArray
{
private:
	TInlineAllocator<4>::ForElementType<DWORD> AllocatorInstance;
	INT NumBits;
	INT MaxBits;
};

/* An array whose elements keep their index when others are removed. */
template<typename ElementType>
class TSparseArray
{
private:
	/* An allocated element, or the index of the next free one. */
	union FElementOrFreeListLink;

	TArray<FElementOrFreeListLink> Data;
	TBitArray AllocationFlags;
	INT FirstFreeIndex;
	INT NumFreeIndices;
};

/* A set: its elements, each with the links of its hash bucket, and the buckets. */
template<typename ElementType>
class TSet
{
private:
	class FElement;

	TSparseArray<FElement> Elements;
	mutable TInlineAllocator<1>::ForElementType<FSetElementId> Hash;
	mutable INT HashSize;
};

/* A map: a set of key and value pairs. */
template<typename KeyType, typename ValueType>
class TMap
{
private:
	class FPair;

	TSet<FPair> Pairs;
};

enum EShaderFrequency
{
	SF_Vertex = 0,
	SF_Pixel = 1
};

enum EShaderPlatform;
struct FShaderCompilerEnvironment;
class FMaterial;
class FVertexFactoryType;
class FShaderKey;
class FGlobalShaderType;
class FMaterialShaderType;
class FMeshMaterialShaderType;
class FShader
{
public:
	/* Lets a shader class change how its shaders are compiled; this one changes nothing. */
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment& OutEnvironment);
};

class FShaderType
{
public:
	typedef FShader* (*ConstructSerializedType)();
	typedef void (*ModifyCompilationEnvironmentType)(EShaderPlatform, FShaderCompilerEnvironment&);

	FShaderType(
		const TCHAR* InName,
		const TCHAR* InSourceFilename,
		const TCHAR* InFunctionName,
		DWORD InFrequency,
		INT InMinPackageVersion,
		INT InMinLicenseePackageVersion,
		ConstructSerializedType InConstructSerializedRef,
		ModifyCompilationEnvironmentType InModifyCompilationEnvironmentRef
		);
	virtual ~FShaderType();

	// Dynamic casts.
	virtual FGlobalShaderType* GetGlobalShaderType();
	virtual FMaterialShaderType* GetMaterialShaderType();
	virtual FMeshMaterialShaderType* GetMeshMaterialShaderType();

private:
	DWORD HashIndex;
	const TCHAR* Name;
	const TCHAR* SourceFilename;
	const TCHAR* FunctionName;
	DWORD Frequency;
	INT MinPackageVersion;
	INT MinLicenseePackageVersion;
	ConstructSerializedType ConstructSerializedRef;
	ModifyCompilationEnvironmentType ModifyCompilationEnvironmentRef;

	/* The shaders of this type by ID, and by code (to find duplicates). */
	TMap<FGuid, FShader*> ShaderIdMap;
	TMap<FShaderKey, FShader*> ShaderCodeMap;
};

/* The type of a shader that does not depend on a material. */
class FGlobalShaderType : public FShaderType
{
public:
	struct CompiledShaderInitializerType;
	typedef FShader* (*ConstructCompiledType)(const CompiledShaderInitializerType&);
	typedef UBOOL (*ShouldCacheType)(EShaderPlatform);

	FGlobalShaderType(
		const TCHAR* InName,
		const TCHAR* InSourceFilename,
		const TCHAR* InFunctionName,
		DWORD InFrequency,
		INT InMinPackageVersion,
		INT InMinLicenseePackageVersion,
		ConstructSerializedType InConstructSerializedRef,
		ConstructCompiledType InConstructCompiledRef,
		ModifyCompilationEnvironmentType InModifyCompilationEnvironmentRef,
		ShouldCacheType InShouldCacheRef
		):
		FShaderType(InName, InSourceFilename, InFunctionName, InFrequency, InMinPackageVersion, InMinLicenseePackageVersion, InConstructSerializedRef, InModifyCompilationEnvironmentRef),
		ConstructCompiledRef(InConstructCompiledRef),
		ShouldCacheRef(InShouldCacheRef)
	{}

private:
	ConstructCompiledType ConstructCompiledRef;
	ShouldCacheType ShouldCacheRef;
};

class FGlobalShader : public FShader
{
};

/* Gives a shader class its type. The two Construct functions are defined by this macro in the
 * engine (new ShaderClass); they are only declared here. */
#define DECLARE_SHADER_TYPE(ShaderClass, ShaderMetaTypeShortcut) \
	public: \
	typedef F##ShaderMetaTypeShortcut##ShaderType ShaderMetaType; \
	static ShaderMetaType StaticType; \
	static FShader* ConstructSerializedInstance(); \
	static FShader* ConstructCompiledInstance(const ShaderMetaType::CompiledShaderInitializerType& Initializer)
/* Defines the type of a shader class: the shader file and the function in it, and the package
 * versions older shaders of the type are thrown away at. */
#define IMPLEMENT_SHADER_TYPE(TemplatePrefix, ShaderClass, SourceFilename, FunctionName, Frequency, MinPackageVersion, MinLicenseePackageVersion) \
	TemplatePrefix \
	ShaderClass::ShaderMetaType ShaderClass::StaticType( \
		TEXT(#ShaderClass), \
		SourceFilename, \
		FunctionName, \
		Frequency, \
		MinPackageVersion, \
		MinLicenseePackageVersion, \
		ShaderClass::ConstructSerializedInstance, \
		ShaderClass::ConstructCompiledInstance, \
		ShaderClass::ModifyCompilationEnvironment, \
		ShaderClass::ShouldCache \
		)
template<UINT NumSamples>
class TFilterPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TFilterPixelShader, Global);

	static UBOOL ShouldCache(EShaderPlatform Platform);
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment& OutEnvironment);
};

// @baa 0x01deaca0
IMPLEMENT_SHADER_TYPE(template<>, TFilterPixelShader<16>, TEXT("FilterPixelShader"), TEXT("Main"), SF_Pixel, 502, 21);

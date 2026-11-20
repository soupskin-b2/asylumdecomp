/* What a shader class's type definition (IMPLEMENT_SHADER_TYPE) needs: the shader types of Shader.h,
 * GlobalShader.h, MaterialShader.h and MeshMaterialShader.h, as far as their inline constructors and the
 * macros go. FShaderType's own constructor and destructor are out of line. Include after "ue3/Classes.h". */
#pragma once
#include "Classes.h"
#include "Map.h"

enum EShaderFrequency
{
	SF_Vertex = 0,
	SF_Pixel = 1
};

enum EShaderPlatform;

struct FShaderCompilerEnvironment;

class FMaterial;

class FVertexFactoryType;

/* ShaderManager.h: a shader's compiled code and parameter map CRC, how the shader type finds duplicates */
class FShaderKey
{
public:
	FShaderKey() : ParameterMapCRC(0) {}

	TArray<BYTE> Code;
	DWORD ParameterMapCRC;
};

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

	const TCHAR* GetName() const { return Name; }

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

/* The type of a shader that is compiled once per material. */
class FMaterialShaderType : public FShaderType
{
public:
	struct CompiledShaderInitializerType;
	typedef FShader* (*ConstructCompiledType)(const CompiledShaderInitializerType&);
	typedef UBOOL (*ShouldCacheType)(EShaderPlatform, const FMaterial*);

	FMaterialShaderType(
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

/* The type of a shader that is compiled once per material and vertex factory. */
class FMeshMaterialShaderType : public FShaderType
{
public:
	struct CompiledShaderInitializerType;
	typedef FShader* (*ConstructCompiledType)(const CompiledShaderInitializerType&);
	typedef UBOOL (*ShouldCacheType)(EShaderPlatform, const FMaterial*, const FVertexFactoryType*);

	FMeshMaterialShaderType(
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

class FMaterialShader : public FShader
{
};

class FMeshMaterialShader : public FMaterialShader
{
};

/* RefCounting.h: a counted reference (only what the shader map's lookup uses). */
template<typename ReferencedType>
class TRefCountPtr
{
public:
	FORCEINLINE operator ReferencedType*() const { return Reference; }
	FORCEINLINE ReferencedType* GetReference() const { return Reference; }

private:
	ReferencedType* Reference;
};

/* ShaderManager.h: the shaders of one platform, by type. GetShader<T>() is instantiated out of line per shader
 * class (e.g.  template TFilterPixelShader<1>* TShaderMap<FGlobalShaderType>::GetShader<TFilterPixelShader<1> >() const;). */
template<typename ShaderMetaType>
class TShaderMap
{
public:
	/* Finds the shader of the given type; it is an error for the map not to have it. */
	template<typename ShaderType>
	ShaderType* GetShader() const
	{
		const TRefCountPtr<FShader>* ShaderRef = Shaders.Find(&ShaderType::StaticType);
		if (!(ShaderRef != NULL && *ShaderRef != NULL))
			appFailAssert("ShaderRef != NULL && *ShaderRef != NULL", "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\inc\\ShaderManager.h", 647, TEXT("Failed to find shader type %s"), ShaderType::StaticType.GetName());
		return (ShaderType*)(FShader*)*ShaderRef;
	}

private:
	TMap<FShaderType*, TRefCountPtr<FShader> > Shaders;
};

/* GlobalShader.h: a reference to a shader of a shader map, found by its type. */
template<typename ShaderType>
class TShaderMapRef
{
public:
	TShaderMapRef(const TShaderMap<typename ShaderType::ShaderMetaType>* ShaderIndex)
	:	Shader(ShaderIndex->template GetShader<ShaderType>())
	{}
	FORCEINLINE ShaderType* operator->() const { return Shader; }
	FORCEINLINE ShaderType* operator*() const { return Shader; }

private:
	ShaderType* Shader;
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

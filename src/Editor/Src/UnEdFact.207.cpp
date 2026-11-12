// UnEdFact.cpp: 13 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* UFactory's flags (UE3: bCreateNew, bEditAfterNew, bEditorImport, bText) are in the kit's
 * _native2 blob at 0x50; this stand-in names them. */
struct FFactoryFlags
{
	BITFIELD bCreateNew : 1;
	BITFIELD bEditAfterNew : 1;
	BITFIELD bEditorImport : 1;
	BITFIELD bText : 1;
};

// @baa 0x00f229e0
void UMaterialFactory::InitializeIntrinsicPropertyValues()
{
	SupportedClass = UMaterial::StaticClass();
	new(Formats) FString(TEXT("t3d;Material"));
	((FFactoryFlags*)_native2)->bCreateNew = FALSE;
	((FFactoryFlags*)_native2)->bEditorImport = TRUE;
	((FFactoryFlags*)_native2)->bText = TRUE;
}

// @baa 0x00f22aa0
void UClassFactoryUC::InitializeIntrinsicPropertyValues()
{
	new(Formats) FString(TEXT("uc;Unreal class definitions"));
	SupportedClass = UClass::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = FALSE;
	((FFactoryFlags*)_native2)->bText = TRUE;
}

// @baa 0x00f23130
void ULevelFactory::InitializeIntrinsicPropertyValues()
{
	SupportedClass = UWorld::StaticClass();
	new(Formats) FString(TEXT("t3d;Unreal World"));
	((FFactoryFlags*)_native2)->bCreateNew = FALSE;
	((FFactoryFlags*)_native2)->bEditorImport = TRUE;
	((FFactoryFlags*)_native2)->bText = TRUE;
}

// @baa 0x00f23190
void UPackageFactory::InitializeIntrinsicPropertyValues()
{
	SupportedClass = UPackage::StaticClass();
	new(Formats) FString(TEXT("T3DPKG;Unreal Package"));
	((FFactoryFlags*)_native2)->bCreateNew = FALSE;
	((FFactoryFlags*)_native2)->bEditorImport = TRUE;
	((FFactoryFlags*)_native2)->bText = TRUE;
}

// @baa 0x00f231f0
void UPolysFactory::InitializeIntrinsicPropertyValues()
{
	SupportedClass = UPolys::StaticClass();
	new(Formats) FString(TEXT("t3d;Unreal brush text"));
	((FFactoryFlags*)_native2)->bCreateNew = FALSE;
	((FFactoryFlags*)_native2)->bText = TRUE;
}

// @baa 0x00f24b10
void UAnimObjectFactory::InitializeIntrinsicPropertyValues()
{
	SupportedClass = UAnimObject::StaticClass();
	new(Formats) FString(TEXT("t3d;Unreal Anim Object"));
	((FFactoryFlags*)_native2)->bCreateNew = FALSE;
	((FFactoryFlags*)_native2)->bEditorImport = TRUE;
	((FFactoryFlags*)_native2)->bText = TRUE;
}

// @baa 0x00f25020
void UReimportSoundFactory::InitializeIntrinsicPropertyValues()
{
	SupportedClass = USoundNodeWave::StaticClass();
	new(Formats) FString(TEXT("wav;Sound"));
	((FFactoryFlags*)_native2)->bCreateNew = FALSE;
}

// @baa 0x00f252a0
void USpeedTreeFactory::InitializeIntrinsicPropertyValues()
{
	SupportedClass = USpeedTree::StaticClass();
	new(Formats) FString(TEXT("spt;SpeedTree"));
	((FFactoryFlags*)_native2)->bCreateNew = FALSE;
	((FFactoryFlags*)_native2)->bText = FALSE;
}

// @baa 0x00f24c30
void UReimportStaticMeshFactory::InitializeIntrinsicPropertyValues()
{
	SupportedClass = UStaticMesh::StaticClass();
	new(Formats) FString(TEXT("t3d;Static Mesh"));
	new(Formats) FString(TEXT("ase;Static Mesh"));
	((FFactoryFlags*)_native2)->bCreateNew = FALSE;
	((FFactoryFlags*)_native2)->bText = TRUE;
}

// @baa 0x00f23bb0
void UApexRenderMeshAssetFactory::InitializeIntrinsicPropertyValues()
{
	((FFactoryFlags*)_native2)->bEditorImport = TRUE;
	SupportedClass = UApexRenderMeshAsset::StaticClass();
	Description = TEXT("ApexRenderMeshAsset");
	new(Formats) FString(TEXT("arm;APEX Render Mesh Asset"));
}

// @baa 0x00f23c40
void UApexParticleSystemAssetFactory::InitializeIntrinsicPropertyValues()
{
	((FFactoryFlags*)_native2)->bEditorImport = TRUE;
	SupportedClass = UApexParticleSystemAsset::StaticClass();
	Description = TEXT("ApexParticleSystemAsset");
	new(Formats) FString(TEXT("psa;APEX Particle System Asset"));
}

// @baa 0x00f23cd0
void UApexMeshParticleFactoryAssetFactory::InitializeIntrinsicPropertyValues()
{
	((FFactoryFlags*)_native2)->bEditorImport = TRUE;
	SupportedClass = UApexMeshParticleFactoryAsset::StaticClass();
	Description = TEXT("ApexMeshParticleFactoryAsset");
	new(Formats) FString(TEXT("mpf;APEX Mesh Particle Factory Asset"));
}

// @baa 0x00f23ea0
void UTextureFactory::InitializeIntrinsicPropertyValues()
{
	SupportedClass = UTexture2D::StaticClass();
	new(Formats) FString(TEXT("bmp;Texture"));
	new(Formats) FString(TEXT("pcx;Texture"));
	new(Formats) FString(TEXT("tga;Texture"));
	new(Formats) FString(TEXT("float;Texture"));
	new(Formats) FString(TEXT("psd;Texture"));
	((FFactoryFlags*)_native2)->bCreateNew = FALSE;
	((FFactoryFlags*)_native2)->bEditorImport = TRUE;
}

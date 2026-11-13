// UnEdFact.cpp: 22 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

// @baa 0x00f23970
/* The factory's class hides the Object category in the editor. UClass::HideCategories is the
 * kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void USoundModeFactory::StaticConstructor()
{
    new((FNameArray&)GetClass()->Native_f0) FNameText(TEXT("Object"));
}

// @baa 0x00f239a0
/* The factory's class hides the Object category in the editor. UClass::HideCategories is the
 * kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void UFonixFactory::StaticConstructor()
{
    new((FNameArray&)GetClass()->Native_f0) FNameText(TEXT("Object"));
}

// @baa 0x00f22950
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97).
 * UClass::HideCategories is the kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void UTextureCubeFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->Native_f0) FName((EName)0x97);
}

// @baa 0x00f22980
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97).
 * UClass::HideCategories is the kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void UMaterialInstanceConstantFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->Native_f0) FName((EName)0x97);
}

// @baa 0x00f229b0
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97).
 * UClass::HideCategories is the kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void UMaterialInstanceTimeVaryingFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->Native_f0) FName((EName)0x97);
}

// @baa 0x00f22a40
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97).
 * UClass::HideCategories is the kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void UMaterialFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->Native_f0) FName((EName)0x97);
}

// @baa 0x00f22a70
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97).
 * UClass::HideCategories is the kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void UDecalMaterialFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->Native_f0) FName((EName)0x97);
}

// @baa 0x00f238e0
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97).
 * UClass::HideCategories is the kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void USoundCueFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->Native_f0) FName((EName)0x97);
}

// @baa 0x00f23a30
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97).
 * UClass::HideCategories is the kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void ULensFlareFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->Native_f0) FName((EName)0x97);
}

// @baa 0x00f23ac0
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97).
 * UClass::HideCategories is the kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void UParticleSystemFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->Native_f0) FName((EName)0x97);
}

// @baa 0x00f23af0
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97).
 * UClass::HideCategories is the kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void UApexDestructibleAssetFactory::StaticConstructor()
{
    new((FNameArray&)GetClass()->Native_f0) FName((EName)0x97);
}

// @baa 0x00f23b80
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97).
 * UClass::HideCategories is the kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void UApexRenderMeshAssetFactory::StaticConstructor()
{
    new((FNameArray&)GetClass()->Native_f0) FName((EName)0x97);
}

// @baa 0x00f23c10
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97).
 * UClass::HideCategories is the kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void UApexParticleSystemAssetFactory::StaticConstructor()
{
    new((FNameArray&)GetClass()->Native_f0) FName((EName)0x97);
}

// @baa 0x00f23ca0
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97).
 * UClass::HideCategories is the kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void UApexMeshParticleFactoryAssetFactory::StaticConstructor()
{
    new((FNameArray&)GetClass()->Native_f0) FName((EName)0x97);
}

// @baa 0x00f23d30
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97).
 * UClass::HideCategories is the kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void UDestructibleDamageParametersFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->Native_f0) FName((EName)0x97);
}

// @baa 0x00f23d60
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97).
 * UClass::HideCategories is the kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void UPhysXParticleSystemFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->Native_f0) FName((EName)0x97);
}

// @baa 0x00f23d90
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97).
 * UClass::HideCategories is the kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void UAnimSetFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->Native_f0) FName((EName)0x97);
}

// @baa 0x00f23dc0
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97).
 * UClass::HideCategories is the kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void UAnimTreeFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->Native_f0) FName((EName)0x97);
}

// @baa 0x00f23df0
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97).
 * UClass::HideCategories is the kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void UPostProcessFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->Native_f0) FName((EName)0x97);
}

// @baa 0x00f23e20
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97).
 * UClass::HideCategories is the kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void UPhysicalMaterialFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->Native_f0) FName((EName)0x97);
}

// @baa 0x00f25170
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97).
 * UClass::HideCategories is the kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void UCurveEdPresetCurveFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->Native_f0) FName((EName)0x97);
}

// @baa 0x00f251a0
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97).
 * UClass::HideCategories is the kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void UCameraAnimFactory::StaticConstructor()
{
    new((FNameArray&)GetClass()->Native_f0) FName((EName)0x97);
}

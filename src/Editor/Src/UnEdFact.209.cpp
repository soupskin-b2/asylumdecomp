// UnEdFact.cpp: 22 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

// @baa 0x00f23970
/* The factory's class hides the Object category in the editor. */
void USoundModeFactory::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FNameText(TEXT("Object"));
}

// @baa 0x00f239a0
/* The factory's class hides the Object category in the editor. */
void UFonixFactory::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FNameText(TEXT("Object"));
}

// @baa 0x00f22950
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97). */
void UTextureCubeFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FName(NAME_Object);
}

// @baa 0x00f22980
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97). */
void UMaterialInstanceConstantFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FName(NAME_Object);
}

// @baa 0x00f229b0
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97). */
void UMaterialInstanceTimeVaryingFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FName(NAME_Object);
}

// @baa 0x00f22a40
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97). */
void UMaterialFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FName(NAME_Object);
}

// @baa 0x00f22a70
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97). */
void UDecalMaterialFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FName(NAME_Object);
}

// @baa 0x00f238e0
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97). */
void USoundCueFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FName(NAME_Object);
}

// @baa 0x00f23a30
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97). */
void ULensFlareFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FName(NAME_Object);
}

// @baa 0x00f23ac0
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97). */
void UParticleSystemFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FName(NAME_Object);
}

// @baa 0x00f23af0
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97). */
void UApexDestructibleAssetFactory::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FName(NAME_Object);
}

// @baa 0x00f23b80
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97). */
void UApexRenderMeshAssetFactory::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FName(NAME_Object);
}

// @baa 0x00f23c10
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97). */
void UApexParticleSystemAssetFactory::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FName(NAME_Object);
}

// @baa 0x00f23ca0
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97). */
void UApexMeshParticleFactoryAssetFactory::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FName(NAME_Object);
}

// @baa 0x00f23d30
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97). */
void UDestructibleDamageParametersFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FName(NAME_Object);
}

// @baa 0x00f23d60
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97). */
void UPhysXParticleSystemFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FName(NAME_Object);
}

// @baa 0x00f23d90
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97). */
void UAnimSetFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FName(NAME_Object);
}

// @baa 0x00f23dc0
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97). */
void UAnimTreeFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FName(NAME_Object);
}

// @baa 0x00f23df0
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97). */
void UPostProcessFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FName(NAME_Object);
}

// @baa 0x00f23e20
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97). */
void UPhysicalMaterialFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FName(NAME_Object);
}

// @baa 0x00f25170
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97). */
void UCurveEdPresetCurveFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FName(NAME_Object);
}

// @baa 0x00f251a0
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97). */
void UCameraAnimFactory::StaticConstructor()
{
    new((FNameArray&)GetClass()->HideCategories) FName(NAME_Object);
}

// UnEdFact.cpp: 31 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 * sub_00f33200();
};

int sub_0060b3d0(void);
extern undefined * g_021324a0;
// @baa 0x00f33200
undefined4 * C::sub_00f33200(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  param_1[0x14] = param_1[0x14] | 4;
  *param_1 = (undefined4)(&g_021324a0);
  param_1[0x26] = 0;
  return param_1;
}

/* UFactory's flags (UE3: bCreateNew, bEditAfterNew, bEditorImport, bText) are in the kit's
 * _native2 blob at 0x50; this stand-in names them. */
struct FFactoryFlags
{
	BITFIELD bCreateNew : 1;
	BITFIELD bEditAfterNew : 1;
	BITFIELD bEditorImport : 1;
	BITFIELD bText : 1;
};

// @baa 0x00f206b0
void UTextureCubeFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = UTextureCube::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	((FFactoryFlags*)_native2)->bEditAfterNew = TRUE;
	Description = TEXT("Cubemap");
}

// @baa 0x00f206f0
void UMaterialInstanceConstantFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = UMaterialInstanceConstant::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	((FFactoryFlags*)_native2)->bEditAfterNew = TRUE;
	Description = TEXT("MaterialInstanceConstant");
}

// @baa 0x00f20730
void UMaterialInstanceTimeVaryingFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = UMaterialInstanceTimeVarying::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	((FFactoryFlags*)_native2)->bEditAfterNew = TRUE;
	Description = TEXT("MaterialInstanceTimeVarying(WIP)");
}

// @baa 0x00f20770
void UMaterialFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = UMaterial::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	((FFactoryFlags*)_native2)->bEditAfterNew = TRUE;
	Description = TEXT("Material");
}

// @baa 0x00f207b0
void UDecalMaterialFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = UDecalMaterial::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	((FFactoryFlags*)_native2)->bEditAfterNew = TRUE;
	Description = TEXT("Decal Material");
}

// @baa 0x00f20920
void USoundModeFactory::InitializeIntrinsicPropertyValues()
{
	SupportedClass = USoundMode::StaticClass();
	Description = TEXT("SoundMode");
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	((FFactoryFlags*)_native2)->bEditAfterNew = TRUE;
}

// @baa 0x00f20960
void UFonixFactory::InitializeIntrinsicPropertyValues()
{
	SupportedClass = USpeechRecognition::StaticClass();
	Description = TEXT("SpeechRecogniser");
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	((FFactoryFlags*)_native2)->bEditAfterNew = TRUE;
}

// @baa 0x00f209a0
void ULensFlareFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = ULensFlare::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	((FFactoryFlags*)_native2)->bEditAfterNew = TRUE;
	Description = TEXT("LensFlare");
}

// @baa 0x00f20a20
void UDestructibleDamageParametersFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = UDestructibleDamageParameters::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	((FFactoryFlags*)_native2)->bEditAfterNew = TRUE;
	Description = TEXT("DestructibleDamageParameters");
}

// @baa 0x00f20aa0
void UAnimSetFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = UAnimSet::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	((FFactoryFlags*)_native2)->bEditAfterNew = TRUE;
	Description = TEXT("AnimSet");
}

// @baa 0x00f20ae0
void UAnimTreeFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = UAnimTree::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	((FFactoryFlags*)_native2)->bEditAfterNew = TRUE;
	Description = TEXT("AnimTree");
}

// @baa 0x00f20b20
void UPostProcessFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = UPostProcessChain::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	((FFactoryFlags*)_native2)->bEditAfterNew = TRUE;
	Description = TEXT("Post Process Effect");
}

// @baa 0x00f20c60
void UCurveEdPresetCurveFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = UCurveEdPresetCurve::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	((FFactoryFlags*)_native2)->bEditAfterNew = TRUE;
	Description = TEXT("CurveEdPresetCurve");
}

// @baa 0x00f20ca0
void UCameraAnimFactory::InitializeIntrinsicPropertyValues()
{
	SupportedClass = UCameraAnim::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	Description = TEXT("Camera Animation");
}

// @baa 0x00f19360
/* A new, empty object of the class the editor asked for. */
UObject* UTextureCubeFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}

// @baa 0x00f193a0
/* A new, empty object of the class the editor asked for. */
UObject* UMaterialInstanceConstantFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}

// @baa 0x00f193e0
/* A new, empty object of the class the editor asked for. */
UObject* UMaterialInstanceTimeVaryingFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}

// @baa 0x00f19430
/* A new, empty object of the class the editor asked for. */
UObject* UMaterialFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}

// @baa 0x00f19470
/* A new, empty object of the class the editor asked for. */
UObject* UDecalMaterialFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}

// @baa 0x00f19580
/* A new, empty object of the class the editor asked for. */
UObject* UParticleSystemFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}

// @baa 0x00f195c0
/* A new, empty object of the class the editor asked for. */
UObject* UDestructibleDamageParametersFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}

// @baa 0x00f19600
/* A new, empty object of the class the editor asked for. */
UObject* UPhysXParticleSystemFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}

// @baa 0x00f19640
/* A new, empty object of the class the editor asked for. */
UObject* UAnimSetFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}

// @baa 0x00f19680
/* A new, empty object of the class the editor asked for. */
UObject* UAnimTreeFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}

// @baa 0x00f196c0
/* A new, empty object of the class the editor asked for. */
UObject* UPostProcessFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}

// @baa 0x00f19700
/* A new, empty object of the class the editor asked for. */
UObject* UPhysicalMaterialFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}

// @baa 0x00f19de0
/* A new, empty object of the class the editor asked for. */
UObject* UCurveEdPresetCurveFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}

class FObjectInstancingGraph;
/* UnObjBas.h ConstructObject<T>; its instances are out of line in the exe (USoundCue: 0x0078cfb0). */
template<class T>
T* ConstructObject(UClass* Class, UObject* Outer, FName Name, QWORD SetFlags, UObject* Template = NULL, UObject* SubobjectRoot = NULL, FObjectInstancingGraph* InstanceGraph = NULL);
// @baa 0x00f23910
/* A new, empty sound cue. */
UObject* USoundCueFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return ConstructObject<USoundCue>(USoundCue::StaticClass(), InParent, InName, Flags);
}

// @baa 0x00f239d0
/* A new, empty speech recognition object. */
UObject* UFonixFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return ConstructObject<USpeechRecognition>(USpeechRecognition::StaticClass(), InParent, InName, Flags);
}

// @baa 0x00f23a60
/* A new, empty lens flare. */
UObject* ULensFlareFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return ConstructObject<ULensFlare>(ULensFlare::StaticClass(), InParent, InName, Flags);
}

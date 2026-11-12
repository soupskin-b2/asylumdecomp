// Engine_0cc0000.cpp: 10 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* TArray<FTerrainFilteredMaterial> with the out-of-line destructor (0098df30) the original calls. */
struct FTerrainFilteredMaterialArray : public TArray<FTerrainFilteredMaterial>
{
    FTerrainFilteredMaterialArray() {}
    ~FTerrainFilteredMaterialArray();
};


// @baa 0x00cc6a40
void UTerrainLayerSetup::execSetMaterials(FFrame& Stack, RESULT_DECL)
{
    FTerrainFilteredMaterialArray NewMaterials;
    Stack.Step(Stack.Object, &NewMaterials);
    P_FINISH;
    ((UTerrainLayerSetup*)this)->sub_009a9810(NewMaterials);
}

/* TArray<FUISoundCue> with the out-of-line destructor (00cc4b20) the original calls. */
struct FUISoundCueArray : public TArray<FUISoundCue>
{
    FUISoundCueArray() {}
    ~FUISoundCueArray();
};


// @baa 0x00cc7590
void UUISkin::execGetSkinSoundCues(FFrame& Stack, RESULT_DECL)
{
    /* P_GET_TARRAY_REF(FUISoundCue, out_SoundCues) */
    FUISoundCueArray out_SoundCuesT;
    GPropAddr = 0;
    Stack.Step(Stack.Object, &out_SoundCuesT);
    FUISoundCueArray& out_SoundCues = GPropAddr ? *(FUISoundCueArray*)GPropAddr : out_SoundCuesT;
    P_FINISH;
    ((UUISkin*)this)->sub_00dced80(out_SoundCues);
}


// @baa 0x00cc0180
void AWorldInfo::execGetDemoRewindPoints(FFrame& Stack, RESULT_DECL)
{
    P_GET_TARRAY_REF(INT, OutRewindPoints);
    P_FINISH;
    *(UBOOL*)Result = ((AWorldInfo*)this)->sub_00c06210(OutRewindPoints);
}

/* TArray<UUIStyle*> with the out-of-line destructor (00cc4ac0) the original calls. */
struct FUIStyleArray : public TArray<UUIStyle*>
{
    FUIStyleArray() {}
    ~FUIStyleArray();
};


// @baa 0x00cc7480
void UUISkin::execGetAvailableStyles(FFrame& Stack, RESULT_DECL)
{
    /* P_GET_TARRAY_REF(UUIStyle*, out_Styles) */
    FUIStyleArray out_StylesT;
    GPropAddr = 0;
    Stack.Step(Stack.Object, &out_StylesT);
    FUIStyleArray& out_Styles = GPropAddr ? *(FUIStyleArray*)GPropAddr : out_StylesT;
    P_GET_UBOOL_OPTX(bIncludeInheritedStyles, TRUE);
    P_FINISH;
    ((UUISkin*)this)->sub_00dd6880(out_Styles, bIncludeInheritedStyles);
}


// @baa 0x00ccbd00
void UUISkin::execGetStyleGroups(FFrame& Stack, RESULT_DECL)
{
    P_GET_TARRAY_REF(FString, StyleGroupArray);
    P_GET_UBOOL_OPTX(bIncludeInheritedGroups, TRUE);
    P_FINISH;
    ((UUISkin*)this)->sub_00dd3900(StyleGroupArray, bIncludeInheritedGroups);
}

// @baa 0x00cc86b0
void UMaterialInterface::execGetScalarCurveParameterValue(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(ParameterName);
	/* This build's P_GET_STRUCT_REF zeroes the temporary after clearing GPropAddr (the kit's macro doesn't). */
	FInterpCurveFloat OutValueT;
	GPropAddr = 0;
	appMemzero(&OutValueT, sizeof(FInterpCurveFloat));
	Stack.Step(Stack.Object, &OutValueT);
	FInterpCurveFloat& OutValue = GPropAddr ? *(FInterpCurveFloat*)GPropAddr : OutValueT;
	P_FINISH;
	*(UBOOL*)Result = GetScalarCurveParameterValue(ParameterName, OutValue);
}

/* Kit gaps: SetDataStoreFieldValue (00d9ca20) isn't declared (names from the exe's native table). */

// @baa 0x00cc7090
void UUIRoot::execSetDataStoreFieldValue(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(InDataStoreMarkup);
	/* This build's P_GET_STRUCT_REF zeroes the temporary after clearing GPropAddr (the kit's macro doesn't). */
	FUIProviderFieldValue InFieldValueT;
	GPropAddr = 0;
	appMemzero(&InFieldValueT, sizeof(FUIProviderFieldValue));
	Stack.Step(Stack.Object, &InFieldValueT);
	FUIProviderFieldValue& InFieldValue = GPropAddr ? *(FUIProviderFieldValue*)GPropAddr : InFieldValueT;
	P_GET_OBJECT_OPTX(UUIScene, OwnerScene, NULL);
	P_GET_OBJECT_OPTX(ULocalPlayer, OwnerPlayer, NULL);
	P_FINISH;
	*(UBOOL*)Result = ((UUIRoot*)this)->SetDataStoreFieldValue(InDataStoreMarkup, InFieldValue, OwnerScene, OwnerPlayer);
}

/* Kit gaps: GetDataStoreFieldValue (00d9cb70) isn't declared (names from the exe's native table). */

// @baa 0x00cc7210
void UUIRoot::execGetDataStoreFieldValue(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(InDataStoreMarkup);
	/* This build's P_GET_STRUCT_REF zeroes the temporary after clearing GPropAddr (the kit's macro doesn't). */
	FUIProviderFieldValue OutFieldValueT;
	GPropAddr = 0;
	appMemzero(&OutFieldValueT, sizeof(FUIProviderFieldValue));
	Stack.Step(Stack.Object, &OutFieldValueT);
	FUIProviderFieldValue& OutFieldValue = GPropAddr ? *(FUIProviderFieldValue*)GPropAddr : OutFieldValueT;
	P_GET_OBJECT_OPTX(UUIScene, OwnerScene, NULL);
	P_GET_OBJECT_OPTX(ULocalPlayer, OwnerPlayer, NULL);
	P_FINISH;
	*(UBOOL*)Result = ((UUIRoot*)this)->GetDataStoreFieldValue(InDataStoreMarkup, OutFieldValue, OwnerScene, OwnerPlayer);
}

// @baa 0x00cc4360
/* SetVisibleFragments(array<byte> VisibilityFactors) */
void UFracturedStaticMeshComponent::execSetVisibleFragments(FFrame& Stack, RESULT_DECL)
{
	P_GET_TARRAY(BYTE, VisibilityFactors);
	P_FINISH;
	SetVisibleFragments(VisibilityFactors);
}

/* Kit gap: FInterpCurveVector's destructor (out of line, 0x006f17f0) isn't declared. */

// @baa 0x00cc87b0
/* GetVectorCurveParameterValue(name ParameterName, out InterpCurveVector OutValue) */
void UMaterialInterface::execGetVectorCurveParameterValue(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(ParameterName);
	/* This build's P_GET_STRUCT_REF zeroes the temporary after clearing GPropAddr (the kit's macro doesn't). */
	FInterpCurveVector OutValueT;
	GPropAddr = 0;
	appMemzero(&OutValueT, sizeof(FInterpCurveVector));
	Stack.Step(Stack.Object, &OutValueT);
	FInterpCurveVector& OutValue = GPropAddr ? *(FInterpCurveVector*)GPropAddr : OutValueT;
	P_FINISH;
	*(UBOOL*)Result = GetVectorCurveParameterValue(ParameterName, OutValue);
}

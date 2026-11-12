// Engine_0cc0000.cpp: 5 functions
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

struct UTerrainLayerSetup_ : public UTerrainLayerSetup
{
    /* SetMaterials(const TArray<FTerrainFilteredMaterial>&); Classes.h doesn't declare it. */
    void sub_009a9810(const FTerrainFilteredMaterialArray& NewMaterials);
};

// @baa 0x00cc6a40
void UTerrainLayerSetup::execSetMaterials(FFrame& Stack, RESULT_DECL)
{
    FTerrainFilteredMaterialArray NewMaterials;
    Stack.Step(Stack.Object, &NewMaterials);
    P_FINISH;
    ((UTerrainLayerSetup_*)this)->sub_009a9810(NewMaterials);
}

/* TArray<FUISoundCue> with the out-of-line destructor (00cc4b20) the original calls. */
struct FUISoundCueArray : public TArray<FUISoundCue>
{
    FUISoundCueArray() {}
    ~FUISoundCueArray();
};

struct UUISkin_ : public UUISkin
{
    /* GetSkinSoundCues(TArray<FUISoundCue>& out_SoundCues); Classes.h doesn't declare it. */
    void sub_00dced80(FUISoundCueArray& out_SoundCues);
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
    ((UUISkin_*)this)->sub_00dced80(out_SoundCues);
}

struct AWorldInfo_ : public AWorldInfo
{
    /* UBOOL GetDemoRewindPoints(TArray<INT>& OutRewindPoints); Classes.h doesn't declare it. */
    UBOOL sub_00c06210(TArray<INT>& OutRewindPoints);
};

// @baa 0x00cc0180
void AWorldInfo::execGetDemoRewindPoints(FFrame& Stack, RESULT_DECL)
{
    P_GET_TARRAY_REF(INT, OutRewindPoints);
    P_FINISH;
    *(UBOOL*)Result = ((AWorldInfo_*)this)->sub_00c06210(OutRewindPoints);
}

/* TArray<UUIStyle*> with the out-of-line destructor (00cc4ac0) the original calls. */
struct FUIStyleArray : public TArray<UUIStyle*>
{
    FUIStyleArray() {}
    ~FUIStyleArray();
};

struct UUISkin__00cc7480 : public UUISkin
{
    /* GetAvailableStyles(TArray<UUIStyle*>& out_Styles, UBOOL bIncludeInheritedStyles); Classes.h doesn't declare it. */
    void sub_00dd6880(FUIStyleArray& out_Styles, UBOOL bIncludeInheritedStyles);
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
    ((UUISkin__00cc7480*)this)->sub_00dd6880(out_Styles, bIncludeInheritedStyles);
}

struct UUISkin__00ccbd00 : public UUISkin
{
    /* GetStyleGroups(TArray<FString>& StyleGroupArray, UBOOL bIncludeInheritedGroups); Classes.h doesn't declare it. */
    void sub_00dd3900(TArray<FString>& StyleGroupArray, UBOOL bIncludeInheritedGroups);
};

// @baa 0x00ccbd00
void UUISkin::execGetStyleGroups(FFrame& Stack, RESULT_DECL)
{
    P_GET_TARRAY_REF(FString, StyleGroupArray);
    P_GET_UBOOL_OPTX(bIncludeInheritedGroups, TRUE);
    P_FINISH;
    ((UUISkin__00ccbd00*)this)->sub_00dd3900(StyleGroupArray, bIncludeInheritedGroups);
}

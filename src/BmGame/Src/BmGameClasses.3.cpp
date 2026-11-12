// BmGameClasses.cpp: 8 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

extern FName g_026e2644;
 /* InitHUD */
struct URSeqAct_HUDTimer_ : public URSeqAct_HUDTimer
{
    void eventInitHUD();
};

/* RSeqAct_HUDTimer.InitHUD script event: the generated glue (no parameters). */
inline void URSeqAct_HUDTimer_::eventInitHUD()
{
    ProcessEvent(FindFunctionChecked(g_026e2644), NULL);
}

// @baa 0x01556a30
/* Starts the timer from its full duration and lets script set up the HUD. */
void URSeqAct_HUDTimer::Activated()
{
    RemainingTime = (FLOAT)TimeInSeconds;
    LastUpdateTime = GWorld->GetWorldInfo()->TimeSeconds;
    ((URSeqAct_HUDTimer_*)this)->eventInitHUD();
}

// @baa 0x015640b0
/* The new factory's class hides the Object category in the editor. UClass::HideCategories is the
 * kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void URAimingConfigFactoryNew::StaticConstructor()
{
	new((FNameArray&)GetClass()->Native_f0) FNameText(TEXT("Object"));
}

// @baa 0x01564120
/* The new factory's class hides the Object category in the editor. UClass::HideCategories is the
 * kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void URBoneRescaleConfigFactoryNew::StaticConstructor()
{
	new((FNameArray&)GetClass()->Native_f0) FNameText(TEXT("Object"));
}

// @baa 0x01564150
/* The new factory's class hides the Object category in the editor. UClass::HideCategories is the
 * kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void URCharacterViewerConfigFactoryNew::StaticConstructor()
{
	new((FNameArray&)GetClass()->Native_f0) FNameText(TEXT("Object"));
}

// @baa 0x01564180
/* The new factory's class hides the Object category in the editor. UClass::HideCategories is the
 * kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void URMirrorConfigFactoryNew::StaticConstructor()
{
	new((FNameArray&)GetClass()->Native_f0) FNameText(TEXT("Object"));
}

// @baa 0x015641b0
/* The new factory's class hides the Object category in the editor. UClass::HideCategories is the
 * kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void URPoseConfigFactoryNew::StaticConstructor()
{
	new((FNameArray&)GetClass()->Native_f0) FNameText(TEXT("Object"));
}

// @baa 0x015641e0
/* The new factory's class hides the Object category in the editor. UClass::HideCategories is the
 * kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void URWeaponConfigFactoryNew::StaticConstructor()
{
	new((FNameArray&)GetClass()->Native_f0) FNameText(TEXT("Object"));
}

// @baa 0x01564210
/* The new factory's class hides the Object category in the editor. UClass::HideCategories is the
 * kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void URAlternateAnimationAndWeaponConfigFactoryNew::StaticConstructor()
{
	new((FNameArray&)GetClass()->Native_f0) FNameText(TEXT("Object"));
}

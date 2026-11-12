// LaunchEngineLoop.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// UE3's ARRAY_COUNT (Core.h), missing from the kit.
#define ARRAY_COUNT( array ) ( sizeof(array) / sizeof((array)[0]) )
typedef Native (*NativeLookup)(const TCHAR*);

extern NativeLookup GNativeLookupFuncs[500];
void AutoInitializeRegistrantsCore(INT& Lookup);
void AutoInitializeRegistrantsEngine(INT& Lookup);
void AutoInitializeRegistrantsIpDrv(INT& Lookup);
void AutoInitializeRegistrantsGFxUI(INT& Lookup);
void AutoInitializeRegistrantsEditor(INT& Lookup);
void AutoInitializeRegistrantsUnrealEd(INT& Lookup);
void AutoInitializeRegistrantsGFxUIEditor(INT& Lookup);
void AutoInitializeRegistrantsFMODAudio(INT& Lookup);
void AutoInitializeRegistrantsWinDrv(INT& Lookup);
void AutoInitializeRegistrantsOnlineSubsystemSteamworks(INT& Lookup);
void AutoInitializeRegistrantsCommonGame(INT& Lookup);
void AutoInitializeRegistrantsBmGame(INT& Lookup);
void AutoInitializeRegistrantsCommonEditor(INT& Lookup);
void AutoInitializeRegistrantsBmEditor(INT& Lookup);
void AutoGenerateNamesCore();
void AutoGenerateNamesEngine();
void AutoGenerateNamesGFxUI();
void AutoGenerateNamesEditor();
void AutoGenerateNamesUnrealEd();
void AutoGenerateNamesGFxUIEditor();
void AutoGenerateNamesIpDrv();
void AutoGenerateNamesCommonGame();
void AutoGenerateNamesBmGame();
void AutoGenerateNamesCommonEditor();
void AutoGenerateNamesBmEditor();
void AutoGenerateNamesOnlineSubsystemSteamworks();
// @baa 0x01503800
/**
 * Initialize registrants, basically calling StaticClass() to create the class and also
 * populating the lookup table, then register the script names of every package.
 */
void InitializeRegistrantsAndRegisterNames()
{
	// Static linking.
	for (INT k = 0; k < ARRAY_COUNT(GNativeLookupFuncs); k++)
	{
		GNativeLookupFuncs[k] = NULL;
	}
	INT Lookup = 0;
	// Auto-generated lookups and statics
	AutoInitializeRegistrantsCore(Lookup);
	AutoInitializeRegistrantsEngine(Lookup);
	AutoInitializeRegistrantsIpDrv(Lookup);
	AutoInitializeRegistrantsGFxUI(Lookup);
	AutoInitializeRegistrantsEditor(Lookup);
	AutoInitializeRegistrantsUnrealEd(Lookup);
	AutoInitializeRegistrantsGFxUIEditor(Lookup);
	AutoInitializeRegistrantsFMODAudio(Lookup);
	AutoInitializeRegistrantsWinDrv(Lookup);
	AutoInitializeRegistrantsOnlineSubsystemSteamworks(Lookup);
	AutoInitializeRegistrantsCommonGame(Lookup);
	AutoInitializeRegistrantsBmGame(Lookup);
	AutoInitializeRegistrantsCommonEditor(Lookup);
	AutoInitializeRegistrantsBmEditor(Lookup);
	// It is safe to increase the array size of GNativeLookupFuncs if this assert gets triggered.
#line 3428 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Launch\\Src\\LaunchEngineLoop.cpp"
	check(Lookup < ARRAY_COUNT(GNativeLookupFuncs));

	AutoGenerateNamesCore();
	AutoGenerateNamesEngine();
	AutoGenerateNamesGFxUI();
	AutoGenerateNamesEditor();
	AutoGenerateNamesUnrealEd();
	AutoGenerateNamesGFxUIEditor();
	AutoGenerateNamesIpDrv();
	AutoGenerateNamesCommonGame();
	AutoGenerateNamesBmGame();
	AutoGenerateNamesCommonEditor();
	AutoGenerateNamesBmEditor();
	AutoGenerateNamesOnlineSubsystemSteamworks();
}

#line 85 "candidate.cpp"

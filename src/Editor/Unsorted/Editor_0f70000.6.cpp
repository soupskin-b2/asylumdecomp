// Editor_0f70000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00f73120
void UTransactor::Reset(const TCHAR* Flag) PURE_VIRTUAL(UTransactor::Reset,);

// @baa 0x00f730c0
INT UTransactor::Begin(const TCHAR* SessionName)
{
    GError->Logf(TEXT("Pure virtual not implemented (%s)"), TEXT("UTransactor::Begin"));
    return 0;
}

// @baa 0x00f73160
UBOOL UTransactor::CanUndo(FString* Str)
{
	PURE_VIRTUAL(UTransactor::CanUndo, return 0;)
}

#include "ue3/ConstructObject.h"

// @baa 0x00f76940
template UEditorUserSettings* ConstructObject<UEditorUserSettings>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 60 "candidate.cpp"

// UnEdTran.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// Classes.h declares slot 0x128 as `virtual INT GetUndoDesc(INT, INT)`; UE3 has the signature below.

// @baa 0x00f793f0
FString UTransactor::GetUndoDesc(UBOOL bCheckWhetherUndoPossible) PURE_VIRTUAL(UTransactor::GetUndoDesc, return TEXT(""););

extern void* g_026667a8;
extern TCHAR g_01e3f3dc[];
int sub_00630f20(void*, const TCHAR*, ...);
// @baa 0x00f79430
FString UTransactor::GetRedoDesc()
{
	sub_00630f20(g_026667a8, L"Pure virtual not implemented (UTransactor::GetRedoDesc)", L"UTransactor::GetRedoDesc");
	return FString(g_01e3f3dc);
}

#include "ue3/ConstructObject.h"

// @baa 0x00f9cf80
template UEditorViewportInput* ConstructObject<UEditorViewportInput>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 68 "candidate.cpp"

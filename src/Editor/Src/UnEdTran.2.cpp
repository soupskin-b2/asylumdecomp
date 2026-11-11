// UnEdTran.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// Classes.h declares slot 0x128 as `virtual INT GetUndoDesc(INT, INT)`; UE3 has the signature below.
struct UTransactor_ : public UTransactor
{
    FString GetUndoDesc(UBOOL bCheckWhetherUndoPossible = TRUE);
};

// @baa 0x00f793f0
FString UTransactor_::GetUndoDesc(UBOOL bCheckWhetherUndoPossible) PURE_VIRTUAL(UTransactor::GetUndoDesc, return TEXT(""););

extern void* g_026667a8;
extern TCHAR g_01e3f3dc[];
int sub_00630f20(void*, const TCHAR*, ...);
struct UTransactor__00f79430 : public UTransactor
{
	FString GetRedoDesc();
};

// @baa 0x00f79430
FString UTransactor__00f79430::GetRedoDesc()
{
	sub_00630f20(g_026667a8, L"Pure virtual not implemented (UTransactor::GetRedoDesc)", L"UTransactor::GetRedoDesc");
	return FString(g_01e3f3dc);
}

// UnPhysLevel.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// 00630f20 pops 8 bytes (add esp, 8) -> __cdecl with two 4-byte arguments.
INT __cdecl sub_00630f20(INT a, const wchar_t* b);
extern INT g_026667a8;
// @baa 0x00a3b880
INT __stdcall sub_00a3b880(void* A, void* B, void* C)
{
    sub_00630f20(g_026667a8, L"onShapeQuery - NOT SUPPORTED");
    return 0;
}

int sub_00630f20(void*, const wchar_t*);
// @baa 0x00a3b8a0
// Unsupported sweep query: log a warning and report that nothing was found.
// The caller passes three parameters (12 bytes), popped by the callee (__stdcall).
INT __stdcall sub_00a3b8a0(void* a, void* b, void* c)
{
    sub_00630f20(g_026667a8, L"onSweepQuery - NOT SUPPORTED");
    return 0;
}

// @baa 0x00a446d0
/* TArray<URB_BodyInstance*>::ContainsItem, out of line (UWorld body instance pool, UnPhysLevel.cpp) */
template UBOOL TArray<URB_BodyInstance*>::ContainsItem(URB_BodyInstance* const& Item) const;

// @baa 0x00a44730
/* TArray<URB_ConstraintInstance*>::ContainsItem, out of line (UWorld::ConstraintInstancePool, UnPhysLevel.cpp) */
template UBOOL TArray<URB_ConstraintInstance*>::ContainsItem(URB_ConstraintInstance* const& Item) const;

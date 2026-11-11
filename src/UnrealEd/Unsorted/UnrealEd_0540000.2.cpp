// UnrealEd_0540000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

extern int g_026667a8;
int sub_00630f20(int Log, const wchar_t* Message);
// @baa 0x00541cf0
int __stdcall sub_00541cf0(int a, int b, int c)
{
    sub_00630f20(g_026667a8, L"Called FFileManagerError::CreateFileReader");
    return 0;
}

int __cdecl sub_00630f20(int A, const wchar_t* B);
// @baa 0x00541d10
int __stdcall sub_00541d10(int A, int B, int C, int D)
{
    sub_00630f20(g_026667a8, L"Called FFileManagerError::CreateFileWriter");
    return 0;
}

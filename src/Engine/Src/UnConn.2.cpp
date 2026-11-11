// UnConn.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern void* g_026667a8;
extern TCHAR g_01e3f3dc[];
int sub_00630f20(void*, const TCHAR*, ...);
// @baa 0x00c1a1d0
FString UNetConnection::LowLevelGetRemoteAddress()
{
	sub_00630f20(g_026667a8, L"Pure virtual not implemented (%s)", L"UNetConnection::LowLevelGetRemoteAddress");
	return FString(g_01e3f3dc);
}

// @baa 0x00c1a210
FString UNetConnection::LowLevelDescribe()
{
	sub_00630f20(g_026667a8, L"Pure virtual not implemented (UNetConnection::LowLevelDescribe)", L"UNetConnection::LowLevelDescribe");
	return FString(g_01e3f3dc);
}

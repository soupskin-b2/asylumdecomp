// UnNetDrv.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern void* g_026667a8;
extern TCHAR g_01e3f3dc[];
int sub_00630f20(void*, const TCHAR*, ...);
// @baa 0x00c1a590
FString UNetDriver::LowLevelGetNetworkNumber()
{
	sub_00630f20(g_026667a8, L"Pure virtual not implemented (UNetDriver::LowLevelGetNetworkNumber)", L"UNetDriver::LowLevelGetNetworkNumber");
	return FString(g_01e3f3dc);
}

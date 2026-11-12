// UnClient.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern void* g_026667a8;
int sub_00630f20(void*, const TCHAR*, ...);
// @baa 0x00cb5b00
INT UClient::CloseViewport(INT)
{
	return sub_00630f20(g_026667a8, L"Pure virtual not implemented (%s)", L"UClient::CloseViewport");
}

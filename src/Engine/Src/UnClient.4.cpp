// UnClient.cpp: 3 functions
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

// @baa 0x00cb5ae0
INT UClient::CreateWindowChildViewport(INT, INT, INT, INT, INT, INT)
{
	PURE_VIRTUAL(UClient::CreateWindowChildViewport, return 0;)
}

// @baa 0x00cb5a60
/* Slot 0x10c (unnamed in the kit; UE3's Init(UEngine*)). */
void UClient::vf_10c(INT) PURE_VIRTUAL(UClient::Init, );

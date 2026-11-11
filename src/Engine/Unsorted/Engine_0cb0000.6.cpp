// Engine_0cb0000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern int g_026667a8;
int __cdecl sub_00630f20(int Value, const wchar_t* Format, const wchar_t* Name);
struct UClient_ : public UClient
{
    INT sub_00cb5a80(INT A);
};

// @baa 0x00cb5a80
INT UClient_::sub_00cb5a80(INT A)
{
    return sub_00630f20(g_026667a8, L"Pure virtual not implemented (%s)", L"UClient::Tick");
}

int sub_00630f20(...);
// @baa 0x00cb5ac0
INT UClient::CreateViewport(INT X, INT Y, INT Width, INT Height, INT Style)
{
    sub_00630f20(g_026667a8, L"Pure virtual not implemented (%s)", L"UClient::CreateViewport");
    return 0;
}

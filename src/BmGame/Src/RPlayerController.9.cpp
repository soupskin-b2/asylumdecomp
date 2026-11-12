// RPlayerController.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern UBOOL g_025ef808;
// @baa 0x01615490
bool ARPlayerController::vf_4d8(INT A)
{
    return g_025ef808 = (A != 0);
}

struct C_0171e460
{
    INT A, B, C, D, E, F;
    C_0171e460* sub_0171e460();
};

// @baa 0x0171e460
C_0171e460* C_0171e460::sub_0171e460()
{
    A = 0;
    B = 0;
    C = 0;
    D = 0;
    E = 0;
    F = 0;
    return this;
}

struct C_T_47da0
{
    INT sub_00547da0(INT B);
};

extern C_T_47da0 g_026e2e64;
extern DWORD g_026e2500;
struct C_017211e0
{
    INT sub_017211e0(INT A, INT B);
};

// @baa 0x017211e0
INT C_017211e0::sub_017211e0(INT A, INT B)
{
    g_026e2500 = A;
    return g_026e2e64.sub_00547da0(B);
}

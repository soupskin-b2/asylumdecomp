// RPlayerController.cpp: 2 functions
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

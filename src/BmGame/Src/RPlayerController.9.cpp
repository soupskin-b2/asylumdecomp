// RPlayerController.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern UBOOL g_025ef808;
// @baa 0x01615490
bool ARPlayerController::vf_4d8(INT A)
{
    return g_025ef808 = (A != 0);
}

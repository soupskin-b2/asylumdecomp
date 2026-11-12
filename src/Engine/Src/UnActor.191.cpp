// UnActor.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00773700
uint AController::vf_374(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x1b8) & 1;
}

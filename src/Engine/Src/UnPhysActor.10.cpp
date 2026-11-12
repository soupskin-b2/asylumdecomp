// UnPhysActor.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x009d9ba0
uint AKAsset::vf_178(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0x1a8) + 0x194) >> 9 & 1;
}

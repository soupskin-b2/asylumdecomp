// PrimitiveComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_006f0b80 {
    int sub_006f0b80();
};

// @baa 0x006f0b80
int C_006f0b80::sub_006f0b80(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4;
}

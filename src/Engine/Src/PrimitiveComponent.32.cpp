// PrimitiveComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_006f0c00 {
    int sub_006f0c00();
};

// @baa 0x006f0c00
int C_006f0c00::sub_006f0c00(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4 + 0xb0;
}

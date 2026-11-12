// PrimitiveComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C_006e5fd0 {
    int sub_006e5fd0();
};

// @baa 0x006e5fd0
int C_006e5fd0::sub_006e5fd0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4;
}

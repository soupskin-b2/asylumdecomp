// UnEdFact.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_00f1fbd0 {
    int sub_00f1fbd0();
};

// @baa 0x00f1fbd0
int C_00f1fbd0::sub_00f1fbd0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

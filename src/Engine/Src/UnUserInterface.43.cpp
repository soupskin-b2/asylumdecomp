// UnUserInterface.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C_00d78f30 {
    int sub_00d78f30();
};

// @baa 0x00d78f30
int C_00d78f30::sub_00d78f30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

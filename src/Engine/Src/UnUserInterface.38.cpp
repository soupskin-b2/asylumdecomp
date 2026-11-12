// UnUserInterface.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_0056f5c0 {
    int sub_0056f5c0();
};

// @baa 0x0056f5c0
int C_0056f5c0::sub_0056f5c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

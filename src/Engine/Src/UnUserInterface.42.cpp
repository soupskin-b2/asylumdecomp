// UnUserInterface.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C_00d78f20 {
    int sub_00d78f20(int);
};

// @baa 0x00d78f20
int C_00d78f20::sub_00d78f20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

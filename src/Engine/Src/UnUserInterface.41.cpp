// UnUserInterface.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_0056f600 {
    int sub_0056f600(int);
};

// @baa 0x0056f600
int C_0056f600::sub_0056f600(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

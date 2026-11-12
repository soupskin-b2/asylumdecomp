// UnEdFact.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_00f1fd90 {
    int sub_00f1fd90(int);
};

// @baa 0x00f1fd90
int C_00f1fd90::sub_00f1fd90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// UnEdFact.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_00f1ffb0 {
    void sub_00f1ffb0(undefined4, undefined4, undefined4, undefined4, undefined4);
};

int sub_00630f20(...);
// @baa 0x00f1ffb0
void C_00f1ffb0::sub_00f1ffb0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

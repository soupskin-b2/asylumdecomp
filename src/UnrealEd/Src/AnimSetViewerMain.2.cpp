// AnimSetViewerMain.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0053dfa0(...);
int sub_00c38ac0(void);
// @baa 0x01310520
undefined4 UObject::sub_01310520(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x013105a0
undefined4 UObject::sub_013105a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

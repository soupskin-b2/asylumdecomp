// Core_0580000.cpp (part 2 of 3): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_005848b0(void);
// @baa 0x00584c20
undefined4 UState::sub_00584c20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005848b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

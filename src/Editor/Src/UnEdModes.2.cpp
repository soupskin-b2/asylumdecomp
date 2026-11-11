// UnEdModes.cpp (part 2 of 3): 2 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_00f5e370(void);
// @baa 0x00f5e810
undefined4 UObject::sub_00f5e810(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f5e370();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00f5bbb0();
// @baa 0x00f5f1a0
void sub_00f5f1a0(void) { sub_00f5bbb0(); }

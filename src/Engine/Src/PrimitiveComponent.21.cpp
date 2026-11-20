// PrimitiveComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_006efb40(void);
struct C_006f3f70 { undefined4 sub_006f3f70(byte param_2); };
// @baa 0x006f3f70
undefined4 C_006f3f70::sub_006f3f70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006efb40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

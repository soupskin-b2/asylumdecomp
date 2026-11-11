// UContentCommandlets.cpp (part 3 of 3): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0040fcc0(void);
int sub_0053dfa0(...);
// @baa 0x01060700
undefined4 UObject::sub_01060700(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

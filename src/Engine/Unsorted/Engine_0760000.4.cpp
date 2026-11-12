// Engine_0760000.cpp (part 4 of 5): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0053dfa0(...);
int sub_0075b520(void);
// @baa 0x007615b0
undefined4 UTextureCube::sub_007615b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0075b520();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}


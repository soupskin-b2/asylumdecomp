// Launch_1750000.cpp (part 4 of 4): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_011ee210(void);
// @baa 0x01757600
undefined4 UTexture2D::sub_01757600(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011ee210();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

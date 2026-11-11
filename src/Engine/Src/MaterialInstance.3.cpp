// MaterialInstance.cpp (part 3 of 3): 2 functions
// Placed here by: class 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_007271f0(void);
// @baa 0x00729050
undefined4 UMaterialInstance::sub_00729050(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007271f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0072dd00
undefined4 UMaterialInstance::sub_0072dd00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007271f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// UnTerrain.cpp (part 4 of 4): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_00549310(void);
// @baa 0x009927e0
undefined4 UObject::sub_009927e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00549310();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

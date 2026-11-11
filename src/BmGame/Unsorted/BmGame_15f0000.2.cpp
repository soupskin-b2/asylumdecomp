// BmGame_15f0000.cpp (part 2 of 20): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_0054eec0(void);
// @baa 0x015f2830
undefined4 UTexture2D::sub_015f2830(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0054eec0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00549310(void);
// @baa 0x015f2880
undefined4 UObject::sub_015f2880(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00549310();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// BmGame_1720000.cpp (part 3 of 3): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_00665d40(void);
// @baa 0x01729a40
undefined4 UPrimitiveComponent::sub_01729a40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00665d40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_006837e0(void);
// @baa 0x0172c240
undefined4 ULensFlare::sub_0172c240(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006837e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

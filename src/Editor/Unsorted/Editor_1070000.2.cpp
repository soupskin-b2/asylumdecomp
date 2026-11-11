// Editor_1070000.cpp (part 2 of 2): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_0107ea80(void);
// @baa 0x0107eba0
undefined4 UObject::sub_0107eba0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0107ea80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0107eae0(void);
// @baa 0x0107ebc0
undefined4 UObject::sub_0107ebc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0107eae0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

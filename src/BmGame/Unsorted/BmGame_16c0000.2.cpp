// BmGame_16c0000.cpp (part 2 of 21): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    undefined4 sub_016c6920(byte);
};

int sub_0053dfa0(...);
int sub_00765d90(void);
// @baa 0x016c6920
undefined4 C::sub_016c6920(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00765d90();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00549160(void);
// @baa 0x016c6940
undefined4 UObject::sub_016c6940(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00549160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

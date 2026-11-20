// Engine_05c0000.cpp (part 2 of 2): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_005cbd70(void);
struct C_005cc500 { undefined4 sub_005cc500(byte param_2); };
// @baa 0x005cc500
undefined4 C_005cc500::sub_005cc500(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005cbd70();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

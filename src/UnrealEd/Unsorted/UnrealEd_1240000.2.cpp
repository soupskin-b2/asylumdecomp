// UnrealEd_1240000.cpp (part 2 of 2): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_01240690(void);
// @baa 0x01243180
undefined4 UUnrealEdEngine::sub_01243180(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01240690();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

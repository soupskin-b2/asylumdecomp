// BmGame_1560000.cpp (part 3 of 4): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

void sub_0040fcc0();
// @baa 0x0156a910
void sub_0156a910(void) { sub_0040fcc0(); }

int sub_0053dfa0(...);
int sub_00549160(void);
// @baa 0x0156f500
undefined4 UObject::sub_0156f500(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00549160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// Editor_0ff0000.cpp (part 4 of 4): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_00549160(void);
// @baa 0x00ffa8c0
undefined4 UObject::sub_00ffa8c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00549160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00ff68b0(void);
// @baa 0x00ffa8e0
undefined4 UObject::sub_00ffa8e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ff68b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00f5e8b0();
// @baa 0x00ffbc90
void sub_00ffbc90(void) { sub_00f5e8b0(); }

void sub_00ffe1d0();
// @baa 0x00ffff50
void sub_00ffff50(void) { sub_00ffe1d0(); }

// Core_0600000.cpp (part 2 of 6): 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

void sub_0040fcc0();
// @baa 0x00602950
void sub_00602950(void) { sub_0040fcc0(); }

// @baa 0x00603610
void sub_00603610(void) { sub_0040fcc0(); }

// @baa 0x00603620
void sub_00603620(void) { sub_0040fcc0(); }

// @baa 0x00603630
void sub_00603630(void) { sub_0040fcc0(); }

// @baa 0x00603650
void sub_00603650(void) { sub_0040fcc0(); }

int sub_0053dfa0(...);
int sub_0060c4b0(void);
// @baa 0x0060e850
undefined4 UObject::sub_0060e850(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0060c4b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

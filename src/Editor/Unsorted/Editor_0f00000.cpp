// Editor_0f00000.cpp: 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_00f007d0(...);
// @baa 0x00f00ad0
void sub_00f00ad0(void)
{
  sub_00f007d0(0);
  return;
}

// @baa 0x00f00ae0
void sub_00f00ae0(void)
{
  sub_00f007d0(1);
  return;
}

int sub_0053dfa0(...);
int sub_00f03060(void);
// @baa 0x00f09600
undefined4 UPrimitiveComponent::sub_00f09600(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f03060();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C {
    undefined4 sub_00f09620(byte);
};

int sub_00f030d0(void);
// @baa 0x00f09620
undefined4 C::sub_00f09620(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f030d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

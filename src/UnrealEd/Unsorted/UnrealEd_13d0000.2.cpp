// UnrealEd_13d0000.cpp (part 2 of 4): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    undefined4 sub_013dced0(byte);
};

int sub_0053dfa0(...);
int sub_011157c0(void);
// @baa 0x013dced0
undefined4 C::sub_013dced0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011157c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00c38ac0(void);
// @baa 0x013def70
undefined4 UObject::sub_013def70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x013def90
undefined4 UObject::sub_013def90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x013df3c0
undefined4 UObject::sub_013df3c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// UnrealEd_13e0000.cpp (part 2 of 2): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0040fcc0(void);
int sub_0053dfa0(...);
// @baa 0x013e9ca0
undefined4 UObject::sub_013e9ca0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C {
    undefined4 sub_013ed840(byte);
};

int sub_013e9bc0(void);
// @baa 0x013ed840
undefined4 C::sub_013ed840(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013e9bc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013ed890 {
    undefined4 sub_013ed890(byte);
};

// @baa 0x013ed890
undefined4 C_013ed890::sub_013ed890(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013e9bc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013ed8e0 {
    undefined4 sub_013ed8e0(byte);
};

// @baa 0x013ed8e0
undefined4 C_013ed8e0::sub_013ed8e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013e9bc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

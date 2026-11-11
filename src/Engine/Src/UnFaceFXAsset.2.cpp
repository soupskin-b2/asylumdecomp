// UnFaceFXAsset.cpp (part 2 of 3): 3 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_00bef7d0(void);
// @baa 0x00befd00
undefined4 UObject::sub_00befd00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00bef7d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00bf0b90
undefined4 UObject::sub_00bf0b90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00bef7d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct Sub
{
    void sub_00bf61a0(INT Value);
};

extern Sub g_026c061c;
// @baa 0x00bf7470
void sub_00bf7470()
{
    g_026c061c.sub_00bf61a0(0);
}

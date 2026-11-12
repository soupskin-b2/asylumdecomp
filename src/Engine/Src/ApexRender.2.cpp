// ApexRender.cpp (part 2 of 2): 4 functions
// Placed here by: neighbours 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_00656790(void);
// @baa 0x009e2520
undefined4 ULensFlare::sub_009e2520(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656790();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x009e2540
undefined4 ULensFlare::sub_009e2540(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656790();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x009e2560
undefined4 ULensFlare::sub_009e2560(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656790();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_01fa3f38;
struct S009d5a00 {
    int* target;
    int index;
    int flags;
    S009d5a00* sub_009d5a00(int index);
};

// @baa 0x009d5a00
S009d5a00* S009d5a00::sub_009d5a00(int index)
{
    target = &g_01fa3f38;
    this->index = index;
    flags = 0;
    return this;
}

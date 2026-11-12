// AnimSetViewerMain.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0053dfa0(...);
int sub_00c38ac0(void);
// @baa 0x01310520
undefined4 UObject::sub_01310520(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x013105a0
undefined4 UObject::sub_013105a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0130e9a0 {
    int a;
    int b;
    int c;
    C_0130e9a0* sub_0130e9a0(int x, int y, int z);
};

// @baa 0x0130e9a0
C_0130e9a0* C_0130e9a0::sub_0130e9a0(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
    return this;
}

// UnParticleModules.cpp (part 2 of 5): 3 functions
// Placed here by: neighbours 2, class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern char g_01feddf8[];
// @baa 0x00b310d0
void UParticleModuleUberLTISIVCL::sub_00b310d0(void) { *(int*)((char*)this + 0) = (int)g_01feddf8; }

struct C {
    undefined4 sub_00b7baf0(byte);
};

int sub_0053dfa0(...);
int sub_00b4cdd0(void);
// @baa 0x00b7baf0
undefined4 C::sub_00b7baf0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b4cdd0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b7bc20 {
    undefined4 sub_00b7bc20(byte);
};

// @baa 0x00b7bc20
undefined4 C_00b7bc20::sub_00b7bc20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b4cdd0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

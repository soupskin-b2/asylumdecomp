// UnUIEditor.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0053dfa0(...);
void sub_0053dfa0(void*);
int sub_013e9bc0(void);
struct C_014adba0 {
    undefined4 sub_014adba0(byte);
};

// @baa 0x014adba0
undefined4 C_014adba0::sub_014adba0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013e9bc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

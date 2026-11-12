// UnUserInterface.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_00d80ce0(void);
struct C_00d8a830 {
    int sub_00d8a830();
};

// @baa 0x00d8a830
int C_00d8a830::sub_00d8a830(void)
{
    int param_1 = (int)this;

  sub_00d80ce0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

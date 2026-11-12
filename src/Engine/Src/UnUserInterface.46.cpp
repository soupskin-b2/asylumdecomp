// UnUserInterface.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_00d80d40(void);
struct C_00d8a850 {
    int sub_00d8a850();
};

// @baa 0x00d8a850
int C_00d8a850::sub_00d8a850(void)
{
    int param_1 = (int)this;

  sub_00d80d40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

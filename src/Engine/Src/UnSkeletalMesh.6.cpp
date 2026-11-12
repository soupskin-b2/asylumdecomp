// UnSkeletalMesh.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C_00967e00 {
    int sub_00967e00(undefined4, undefined4, undefined4);
    int sub_00964720(int);
};

// @baa 0x00967e00
int C_00967e00::sub_00967e00(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_00967e00 *)(this))->sub_00964720(param_2);
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  return param_1;
}

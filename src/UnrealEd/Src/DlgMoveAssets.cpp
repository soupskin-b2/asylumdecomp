// DlgMoveAssets.cpp: 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C_view {
    int sub_014639e0(int, int);
};

// @baa 0x01468c80
int UTexture2D::sub_01468c80(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_014639e0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x4c + *param_1;
  }
  return 0;
}

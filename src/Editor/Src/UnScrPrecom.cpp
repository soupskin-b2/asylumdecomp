// UnScrPrecom.cpp: 2 functions
// Placed here by: callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

typedef uint size_t;

struct C_view {
    int sub_005fc710(int, int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00ff1b60
void UPackageMap::sub_00ff1b60(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_005fc710(param_2, param_3);
  sub_01a37612((void *)(*param_1 + param_2 * 0xc),0,param_3 * 0xc);
  return;
}

struct C_view_00fff1c0 {
    int sub_00ffa960(int, int);
};

// @baa 0x00fff1c0
int UTexture2D::sub_00fff1c0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_00fff1c0 *)(this))->sub_00ffa960((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x28, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

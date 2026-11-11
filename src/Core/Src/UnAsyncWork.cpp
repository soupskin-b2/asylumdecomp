// UnAsyncWork.cpp: 5 functions
// Placed here by: neighbours 5.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

typedef uint size_t;

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x005673b0
void UTexture2D::sub_005673b0(void)
{
    int param_1 = (int)this;

  sub_01a375f0(*(void **)(param_1 + 0x10),*(void **)(param_1 + 0xc),*(size_t *)(param_1 + 0x14));
  return;
}

// @baa 0x005673d0
void UTexture2D::sub_005673d0(void)
{
    int param_1 = (int)this;

  sub_01a375f0(*(void **)(param_1 + 0x10),*(void **)(param_1 + 0xc),*(size_t *)(param_1 + 0x14));
  return;
}

void sub_00567290();
// @baa 0x00567440
void sub_00567440(void) { sub_00567290(); }

struct C_view {
    int sub_00567200(int);
};

extern undefined4 g_01e7d0c0;
// @baa 0x005674a0
undefined4 * UTexture2D::sub_005674a0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00567200(param_7);
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[5] = param_5;
  *param_1 = (undefined4)(&g_01e7d0c0);
  param_1[6] = param_6;
  param_1[7] = param_2;
  return param_1;
}

// @baa 0x005674e0
void sub_005674e0(void) { sub_00567290(); }

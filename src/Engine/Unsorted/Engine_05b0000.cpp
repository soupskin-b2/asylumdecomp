// Engine_05b0000.cpp: 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_005ae350(void);
// @baa 0x005b9180
int UTexture2D::sub_005b9180(void)
{
    int param_1 = (int)this;

  sub_005ae350();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_005ae3b0(void);
// @baa 0x005b91a0
int UTexture2D::sub_005b91a0(void)
{
    int param_1 = (int)this;

  sub_005ae3b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_005ae410(void);
// @baa 0x005b91c0
int UTexture2D::sub_005b91c0(void)
{
    int param_1 = (int)this;

  sub_005ae410();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_005b5c80();
// @baa 0x005b91e0
void sub_005b91e0(void) { sub_005b5c80(); }

void sub_005b6b90();
// @baa 0x005b92a0
void sub_005b92a0(void) { sub_005b6b90(); }

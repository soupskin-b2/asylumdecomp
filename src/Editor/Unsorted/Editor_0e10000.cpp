// Editor_0e10000.cpp: 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    int sub_00e12f60();
};

int sub_00e08f60(void);
// @baa 0x00e12f60
int C::sub_00e12f60(void)
{
    int param_1 = (int)this;

  sub_00e08f60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00e12f80 {
    int sub_00e12f80();
};

int sub_00e08fc0(void);
// @baa 0x00e12f80
int C_00e12f80::sub_00e12f80(void)
{
    int param_1 = (int)this;

  sub_00e08fc0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00e08f00(void);
// @baa 0x00e12fa0
int UGuidCache::sub_00e12fa0(void)
{
    int param_1 = (int)this;

  sub_00e08f00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

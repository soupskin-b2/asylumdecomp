// UnrealEd_0f70000.cpp: 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

void sub_00f70740();
// @baa 0x00f70b70
void sub_00f70b70(void) { sub_00f70740(); }

int sub_00f62060(void);
// @baa 0x00f70b80
int UPackageMap::sub_00f70b80(void)
{
    int param_1 = (int)this;

  sub_00f62060();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00f70ba0
void sub_00f70ba0(void) { sub_00f70740(); }

// @baa 0x00f70bb0
int UPackageMap::sub_00f70bb0(void)
{
    int param_1 = (int)this;

  sub_00f62060();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00f70bd0
void sub_00f70bd0(void) { sub_00f70740(); }

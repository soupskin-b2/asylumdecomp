// UnCoreNet.cpp: 5 functions
// Placed here by: neighbours 2, callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0053dfa0(...);
int sub_0061bb20(void);
// @baa 0x0061d820
undefined4 UPackageMap::sub_0061d820(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0061bb20();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C { void sub_00617d10(int); C *sub_0061d840(int); };

// @baa 0x0061d840
C *C::sub_0061d840(int a) { sub_00617d10(a); return this; }

// @baa 0x0061daf0
IMPLEMENT_CLASS_AT(UPackageMap, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnCoreNet.cpp", 525);

// @baa 0x0061e230

// @baa 0x005fc170
int UPackageMap::vf_134(int a) { return a | -1; }

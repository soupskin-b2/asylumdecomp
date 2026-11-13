// IpDrv_0e30000.cpp (part 2 of 2): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_00e39d80(void);
// @baa 0x00e3c670
undefined4 UHTTPDownload::sub_00e3c670(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e39d80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00e3c690
undefined4 UHTTPDownload::sub_00e3c690(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e39d80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// FInit_00e306d0: a three-word record cleared on construction.
struct FInit_00e306d0
{
	void* Reserved;
	INT A; /* 0x4 */
	INT B; /* 0x8 */
	INT C; /* 0xc */

	FInit_00e306d0* Init(INT Unused);
};

// @baa 0x00e306d0
FInit_00e306d0* FInit_00e306d0::Init(INT Unused)
{
	A = 0;
	B = 0;
	C = 0;
	return this;
}

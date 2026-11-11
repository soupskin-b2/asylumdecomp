// Engine_0c10000.cpp (part 5 of 5): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_005c7a70(...);
int sub_00c14850(void);
// @baa 0x00c14a00
undefined4 UPendingLevel::sub_00c14a00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c14850();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0xb4);
  }
  return param_1;
}

int sub_00c14990(void);
extern undefined * g_02031818;
extern undefined * g_02031838;
// @baa 0x00c14a30
undefined4 * UPendingLevel::sub_00c14a30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00c14990();
  *param_1 = (undefined4)(&g_02031838);
  param_1[0x21] = (undefined4)(&g_02031818);
  return param_1;
}

int sub_00630f20(...);
extern INT g_026667a8;
// @baa 0x00c14910
// @baa 0x00c14910
void UPendingLevel::vf_10c(INT DeltaTime)
{
	sub_00630f20(g_026667a8, L"Pure virtual not implemented (%s)", L"UPendingLevel::Tick");
}

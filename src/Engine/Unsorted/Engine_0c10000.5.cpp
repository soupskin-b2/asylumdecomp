// Engine_0c10000.cpp (part 5 of 5): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

int sub_005c7a70(...);
int sub_00c14850(void);
struct C_00c14a00 { undefined4 sub_00c14a00(byte param_2); };
// @baa 0x00c14a00
undefined4 C_00c14a00::sub_00c14a00(byte param_2)
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
struct C_00c14a30 { undefined4 * sub_00c14a30(void); };
// @baa 0x00c14a30
undefined4 * C_00c14a30::sub_00c14a30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00c14990();
  *param_1 = (undefined4)(&g_02031838);
  param_1[0x21] = (undefined4)(&g_02031818);
  return param_1;
}

// @baa 0x00c14910
// @baa 0x00c14910
void UPendingLevel::Tick(FLOAT DeltaTime) PURE_VIRTUAL(UPendingLevel::Tick,)

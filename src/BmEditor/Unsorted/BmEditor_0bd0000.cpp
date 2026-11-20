// BmEditor_0bd0000.cpp: 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_005c7a20(void);
extern undefined * g_0201c210;
struct C_00bd73d0 { undefined4 * sub_00bd73d0(void); };
// @baa 0x00bd73d0
undefined4 * C_00bd73d0::sub_00bd73d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0201c210);
  return param_1;
}

// @baa 0x00bd73f0
IMPLEMENT_CLASS_AT(ULensFlare, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\LensFlare.cpp", 10);

// @baa 0x00bd7480

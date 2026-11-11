// Engine_0850000.cpp (part 3 of 3): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00857830
IMPLEMENT_CLASS_AT(ACoverGroup, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnNavigationPoint.cpp", 1636);

int sub_005c7a20(void);
extern undefined * g_01f452b0;
// @baa 0x008591b0
undefined4 * UObject::sub_008591b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f452b0);
  return param_1;
}

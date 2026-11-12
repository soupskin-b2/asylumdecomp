// GFxUIEditor.cpp: 3 functions
// Placed here by: callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x014faa80
IMPLEMENT_CLASS_AT(UGFxEditor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUIEditor\\Src\\GFxUIEditor.cpp", 73);

// @baa 0x014faaa0

int sub_005c7a20(void);
extern undefined * g_022cc240;
// @baa 0x014f9dc0
undefined4 * UObject::sub_014f9dc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022cc240);
  return param_1;
}

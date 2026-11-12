// CommonGameRouterClasses.cpp: 8 functions
// Placed here by: callers 3, file 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01544010
IMPLEMENT_CLASS_AT(URReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameRouterClasses.cpp", 7);

// @baa 0x01544040
IMPLEMENT_CLASS_AT(URForcedReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameRouterClasses.cpp", 8);

// @baa 0x01544070
// @baa 0x01544130
// @baa 0x01546640
IMPLEMENT_CLASS_AT(ARPathNode, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameRouterClasses.cpp", 6);

// @baa 0x01546680

int sub_005c7a20(void);
struct C_015434b0 {
    undefined4 * sub_015434b0();
};

extern undefined * g_022e6688;
// @baa 0x015434b0
undefined4 * C_015434b0::sub_015434b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *param_1 = (undefined4)(&g_022e6688);
  return param_1;
}

struct C_015434d0 {
    undefined4 * sub_015434d0();
};

extern undefined * g_022e67d0;
// @baa 0x015434d0
undefined4 * C_015434d0::sub_015434d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *param_1 = (undefined4)(&g_022e67d0);
  return param_1;
}

// CommonGamePropClasses.cpp: 13 functions
// Placed here by: callers 5, file 5, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01541fa0
IMPLEMENT_CLASS_AT(URActorFactoryMoverNoCL, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGamePropClasses.cpp", 8);

// @baa 0x01541fc0
IMPLEMENT_CLASS_AT(URActorFactoryRigidBody, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGamePropClasses.cpp", 7);

// @baa 0x01541fe0
// @baa 0x015420a0
// @baa 0x01546450
IMPLEMENT_CLASS_AT(ARKActorSpawnable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGamePropClasses.cpp", 5);

// @baa 0x01546480
IMPLEMENT_CLASS_AT(ARBreakablePropStatic, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGamePropClasses.cpp", 4);

void sub_01545fb0();
// @baa 0x015464b0
void sub_015464b0(void) { sub_01545fb0(); }

// @baa 0x015464c0
// @baa 0x01546580
// @baa 0x01548a90
IMPLEMENT_CLASS_AT(URActorFactoryBreakablePropStatic, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGamePropClasses.cpp", 6);

// @baa 0x01548ab0

// @baa 0x0153bc40

int sub_005c7a20(void);
extern undefined * g_022e5630;
// @baa 0x0153fc90
undefined4 * UObject::sub_0153fc90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e5630);
  return param_1;
}

// UnUIEventSystem.cpp: 21 functions
// Placed here by: callers 10, file 10, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00dac690
IMPLEMENT_CLASS_AT(UUIEventContainer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIEventSystem.cpp", 91);

// @baa 0x00dac7c0
// @baa 0x00dc2e50
IMPLEMENT_CLASS_AT(UUISequence, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIEventSystem.cpp", 16);

// @baa 0x00dc2e70
IMPLEMENT_CLASS_AT(UUIStateSequence, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIEventSystem.cpp", 17);

// @baa 0x00dc2e90
IMPLEMENT_CLASS_AT(UUIAction, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIEventSystem.cpp", 19);

// @baa 0x00dc2eb0
IMPLEMENT_CLASS_AT(UUIAction_Scene, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIEventSystem.cpp", 54);

// @baa 0x00dc2ed0
IMPLEMENT_CLASS_AT(UUIAction_OpenScene, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIEventSystem.cpp", 55);

// @baa 0x00dc2ef0
IMPLEMENT_CLASS_AT(UUIEvent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIEventSystem.cpp", 58);

// @baa 0x00dc2f10
IMPLEMENT_CLASS_AT(UUIEvent_CalloutButtonInputProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIEventSystem.cpp", 60);

// @baa 0x00dc2f30
IMPLEMENT_CLASS_AT(UUIEvent_MetaObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIEventSystem.cpp", 59);

// @baa 0x00dc2f50
// @baa 0x00dc3010
// @baa 0x00dc30d0
// @baa 0x00dc3190
// @baa 0x00dc3250
// @baa 0x00dc3310
// @baa 0x00dc33d0
// @baa 0x00dc3490
// @baa 0x00dc9630
IMPLEMENT_CLASS_AT(UUIEvent_ProcessInput, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIEventSystem.cpp", 83);

int sub_005c7a70(...);
int sub_00dc95c0(void);
// @baa 0x00dc9640
undefined4 UUIEvent_ProcessInput::sub_00dc9640(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00dc95c0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x134);
  }
  return param_1;
}

// @baa 0x00dc9670

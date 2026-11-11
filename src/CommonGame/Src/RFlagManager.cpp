// RFlagManager.cpp: 11 functions
// Placed here by: callers 5, file 5, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x015424d0
IMPLEMENT_CLASS_AT(URSeqVar_GlobalFlag, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\RFlagManager.cpp", 19);

// @baa 0x015424f0
IMPLEMENT_CLASS_AT(URSeqVar_LocalFlag, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\RFlagManager.cpp", 18);

// @baa 0x01542510
// @baa 0x015425d0
// @baa 0x01549770
IMPLEMENT_CLASS_AT(URSeqAct_SwitchFlags, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\RFlagManager.cpp", 17);

// @baa 0x01549790
IMPLEMENT_CLASS_AT(URSeqAct_SetBoolEx, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\RFlagManager.cpp", 16);

// @baa 0x015497b0
// @baa 0x01549870
// @baa 0x0154a7a0
IMPLEMENT_CLASS_AT(URFlagManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\RFlagManager.cpp", 20);

int sub_005c7a70(...);
int sub_0154a720(void);
// @baa 0x0154a7b0
undefined4 URFlagManager::sub_0154a7b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0154a720();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x78);
  }
  return param_1;
}

// @baa 0x0154a7d0

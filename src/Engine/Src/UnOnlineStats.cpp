// UnOnlineStats.cpp: 9 functions
// Placed here by: callers 3, neighbours 3, file 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00d3ad10
IMPLEMENT_CLASS_AT(UOnlineStats, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnOnlineStats.cpp", 7);

// @baa 0x00d3ad30
IMPLEMENT_CLASS_AT(UOnlineStatsWrite, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnOnlineStats.cpp", 9);

// @baa 0x00d3ada0
ULightMapTexture2D::ULightMapTexture2D()
{
}

int sub_005c7a70(...);
int sub_00d3ada0(void);
// @baa 0x00d3ae00
undefined4 ULightMapTexture2D::sub_00d3ae00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d3ada0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x100);
  }
  return param_1;
}

// @baa 0x00d3ae30
// @baa 0x00d3aef0
// @baa 0x00d41990
IMPLEMENT_CLASS_AT(UOnlineStatsRead, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnOnlineStats.cpp", 8);

int sub_00828ee0(...);
// @baa 0x00d419b0
void UOnlineStatsRead::sub_00d419b0(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_00828ee0(param_2,param_1 + 4);
  return;
}

// @baa 0x00d41cf0

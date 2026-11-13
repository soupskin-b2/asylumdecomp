// UOnlineNewsInterfaceMcp.cpp: 8 functions
// Placed here by: file 2, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00e38120
IMPLEMENT_CLASS_AT(UMCPBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\IpDrv\\Src\\UOnlineNewsInterfaceMcp.cpp", 9);

// @baa 0x00e39110
// @baa 0x00e3ebc0
IMPLEMENT_CLASS_AT(UOnlineNewsInterfaceMcp, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\IpDrv\\Src\\UOnlineNewsInterfaceMcp.cpp", 10);

// @baa 0x00e2c830

// @baa 0x00e2c960
bool UMCPBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e34720
UBOOL UMCPBase::IsTickableWhenPaused() const { return TRUE; }

int sub_005c7a70(...);
int sub_00e34670(void);
// @baa 0x00e34760
undefined4 UMCPBase::sub_00e34760(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e34670();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x34);
  }
  return param_1;
}

// @baa 0x00e3a540

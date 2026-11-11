// UnNetDrv.cpp (part 3 of 3): 5 functions
// Placed here by: class 5.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_005c7a70(...);
int sub_00c1a4a0(void);
// @baa 0x00c1a5d0
undefined4 UNetDriver::sub_00c1a5d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c1a4a0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x150);
  }
  return param_1;
}

// @baa 0x00df4e30
void UNetDriver::vf_11c(void) {  }

// @baa 0x00df4e80
IMPLEMENT_CLASS_AT(UNetDriver, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnNetDrv.cpp", 807);

// @baa 0x00df4f90
int UNetDriver::vf_000(void) { return 1; }

// @baa 0x00df4fa0
bool UNetDriver::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// SpeedTreeComponent.cpp: 2 functions
// Placed here by: neighbours 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    int sub_00bce4e0();
};

// @baa 0x00bce4e0
int C::sub_00bce4e0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4 + 0x1c0;
}

// @baa 0x00bd1b90
IMPLEMENT_CLASS_AT(USpeedTreeComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\SpeedTreeComponent.cpp", 15);

// RCinematicCameraActor.cpp: 4 functions
// Placed here by: callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x016ca510
IMPLEMENT_CLASS_AT(ARCinematicCameraActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCinematicCameraActor.cpp", 6);

// @baa 0x016ca630

// @baa 0x016aa3a0

int sub_0053df70(...);
// @baa 0x016be3d0
void ARCinematicCameraActor::vf_274(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x260) = 0;
  if (*(int *)(param_1 + 0x264) != 0) {
    *(undefined4 *)(param_1 + 0x264) = 0;
    if (*(int *)(param_1 + 0x25c) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x25c),0,8);
      *(undefined4 *)(param_1 + 0x25c) = uVar1;
    }
  }
  return;
}

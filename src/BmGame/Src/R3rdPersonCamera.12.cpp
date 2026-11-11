// R3rdPersonCamera.cpp (part 12 of 12): 2 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_005c7a20(void);
extern undefined * g_02381708;
// @baa 0x0169fa70
undefined4 * UObject::sub_0169fa70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02381708);
  return param_1;
}

struct ARPawnPlayer_ : public ARPawnPlayer
{
    void sub_01688660();
};

// @baa 0x01688660
void ARPawnPlayer_::sub_01688660()
{
    if (bIsCrouched)
        vf_440(0);
    bWantsToCrouch = FALSE;
}

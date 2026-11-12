// R3rdPersonCamera.cpp (part 12 of 12): 4 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

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

struct S_0168de00 {
    void sub_007d7170();
    void sub_01689170();
    void sub_0168de00();
};

// @baa 0x0168de00
void S_0168de00::sub_0168de00() {
    sub_007d7170();
    sub_01689170();
}

// @baa 0x016a0da0
bool ARPawnPlayerChallengeJokerBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

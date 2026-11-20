// BmGame_1680000.cpp (part 5 of 7): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_005c7a20(void);
extern undefined * g_0237cd50;
struct C_01686730 { undefined4 * sub_01686730(void); };
// @baa 0x01686730
undefined4 * C_01686730::sub_01686730(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0237cd50);
  return param_1;
}

struct URSimpleRopeComponent_ : public URSimpleRopeComponent
{
    void sub_01685860();
};

// @baa 0x01685d20
void URSimpleRopeComponent::UpdateRope()
{
    URSimpleRopeComponent_* Self = (URSimpleRopeComponent_*)this;
    Self->URRopeComponentBase::UpdateRope();
    if (Self->GetIsRopeInitialised() != 0)
        Self->sub_01685860();
}

struct URSimpleRopeComponent_2 : public URSimpleRopeComponent
{
};

// @baa 0x01685d70
void URSimpleRopeComponent::FinaliseRope()
{
    URSimpleRopeComponent_2* Self = (URSimpleRopeComponent_2*)this;
    if (Self->GetIsRopeInitialised() != 0)
    {
        Self->sub_016857b0();
        Self->URRopeComponentBase::FinaliseRope();
    }
}

struct URSimpleRopeComponent__01685d40 : public URSimpleRopeComponent
{
    INT sub_01685860();
};

// @baa 0x01685d40
INT URSimpleRopeComponent::InitialiseRope()
{
    URSimpleRopeComponent__01685d40* Self = (URSimpleRopeComponent__01685d40*)this;
    INT R = Self->GetIsRopeInitialised();
    if (R == 0)
    {
        Self->PreviousSpoolArraySize = 0;
        Self->URRopeComponentBase::InitialiseRope();
        return Self->sub_01685860();
    }
    return R;
}

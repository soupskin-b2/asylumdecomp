// BmGame_1680000.cpp (part 5 of 7): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_005c7a20(void);
extern undefined * g_0237cd50;
// @baa 0x01686730
undefined4 * UObject::sub_01686730(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0237cd50);
  return param_1;
}

struct URSimpleRopeComponent_ : public URSimpleRopeComponent
{
    INT sub_0163f500();
    void sub_01685860();
};

// @baa 0x01685d20
void URSimpleRopeComponent::UpdateRope()
{
    URSimpleRopeComponent_* Self = (URSimpleRopeComponent_*)this;
    Self->sub_0164fb40();
    if (Self->sub_0163f500() != 0)
        Self->sub_01685860();
}

struct URSimpleRopeComponent_2 : public URSimpleRopeComponent
{
    INT sub_0163f500();
};

// @baa 0x01685d70
void URSimpleRopeComponent::FinaliseRope()
{
    URSimpleRopeComponent_2* Self = (URSimpleRopeComponent_2*)this;
    if (Self->sub_0163f500() != 0)
    {
        Self->sub_016857b0();
        Self->sub_0163f550();
    }
}

struct URSimpleRopeComponent__01685d40 : public URSimpleRopeComponent
{
    INT sub_0163f500();
    INT sub_01685860();
};

// @baa 0x01685d40
INT URSimpleRopeComponent::InitialiseRope()
{
    URSimpleRopeComponent__01685d40* Self = (URSimpleRopeComponent__01685d40*)this;
    INT R = Self->sub_0163f500();
    if (R == 0)
    {
        Self->PreviousSpoolArraySize = 0;
        Self->sub_01666110();
        return Self->sub_01685860();
    }
    return R;
}

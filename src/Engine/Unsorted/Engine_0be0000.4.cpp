// Engine_0be0000.cpp (part 4 of 4): 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_005c7a20(void);
extern undefined * g_02025dc0;
// @baa 0x00bec790
undefined4 * UObject::sub_00bec790(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02025dc0);
  return param_1;
}

extern undefined * g_02025ed0;
// @baa 0x00bec840
undefined4 * UObject::sub_00bec840(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02025ed0);
  return param_1;
}

extern undefined * g_02025fe0;
// @baa 0x00bec8f0
undefined4 * UObject::sub_00bec8f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02025fe0);
  return param_1;
}

struct S {
    int Object;
    int F4;
    int F8;
    int FC;
    volatile int F10;
    int F14;

    int sub_00be2880();
};

extern int g_0202020c;
// @baa 0x00be2880
int S::sub_00be2880()
{
    int T = (int)this;
    this->F8 = 0;
    this->FC = 0;
    this->F10 &= 0xfffffffe;
    this->Object = (int)&g_0202020c;
    this->F14 = 0;
    return T;
}

static S g_self_00be2880;
static int caller_00be2880()
{
    return g_self_00be2880.sub_00be2880();
}

struct S_00be28c0 {
    int Object;
    int F4;
    int F8;
    int FC;
    volatile int F10;
    int F14;

    int sub_00be28c0();
};

extern int g_02020398;
// @baa 0x00be28c0
int S_00be28c0::sub_00be28c0()
{
    int T = (int)this;
    this->F8 = 0;
    this->FC = 0;
    this->F10 &= 0xfffffffe;
    this->Object = (int)&g_02020398;
    this->F14 = 0;
    return T;
}

static S_00be28c0 g_self_00be28c0;
static int caller_00be28c0()
{
    return g_self_00be28c0.sub_00be28c0();
}

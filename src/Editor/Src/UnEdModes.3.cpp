// UnEdModes.cpp (part 3 of 3): 6 functions
// Placed here by: class 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_00f5bbb0(void);
// @baa 0x00f5f1b0
undefined4 UTerrainFactory::sub_00f5f1b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f5bbb0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_021591c0;
// @baa 0x00f5fee0
undefined4 * UTerrainFactory::sub_00f5fee0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_021591c0);
  sub_00f5bbb0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_022170c8;
// @baa 0x0127a180
undefined4 * UTerrainFactory::sub_0127a180(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_022170c8);
  sub_00f5bbb0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct Sub
{
    void sub_00fae2b0();
};

struct C
{
    char pad_00[0x1c];
    Sub* Object;

    void sub_00f4d560();
};

// @baa 0x00f4d560
void C::sub_00f4d560()
{
    if (Object)
        Object->sub_00fae2b0();
}

struct Sub_00f4d570
{
    void sub_00fa26a0();
};

struct C_00f4d570
{
    char pad_00[0x1c];
    Sub_00f4d570* Object;

    void sub_00f4d570();
};

// @baa 0x00f4d570
void C_00f4d570::sub_00f4d570()
{
    if (Object)
        Object->sub_00fa26a0();
}

struct Sub_00f5dc10
{
    void sub_00f5c640();
};

struct Object
{
    char pad_00[0x50];
    Sub_00f5dc10* Pointer;
};

extern Object* sub_00ec5970();
// @baa 0x00f5dc10
void sub_00f5dc10()
{
    sub_00ec5970()->Pointer->sub_00f5c640();
}

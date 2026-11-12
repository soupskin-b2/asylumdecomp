// UnTerrainEdit.cpp: 16 functions
// Placed here by: neighbours 10, callers 3, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_00991570();
};

int sub_0053df70(...);
// @baa 0x00991570
void C::sub_00991570(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x28c) = 0;
  if (*(int *)(param_1 + 0x290) != 0) {
    *(undefined4 *)(param_1 + 0x290) = 0;
    if (*(int *)(param_1 + 0x288) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x288),0,8);
      *(undefined4 *)(param_1 + 0x288) = uVar1;
    }
  }
  return;
}

struct M_00ffe1b0 { void sub_00ffbdd0(); };

struct C_00ffe1b0 { char pad[8]; M_00ffe1b0 m; void sub_00ffe1b0(); };

// @baa 0x00ffe1b0
void C_00ffe1b0::sub_00ffe1b0() { m.sub_00ffbdd0(); }

struct C_00ffe7a0 {
    undefined4 sub_00ffe7a0(byte);
};

int sub_0053dfa0(...);
int sub_00f5e8b0(void);
// @baa 0x00ffe7a0
undefined4 C_00ffe7a0::sub_00ffe7a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f5e8b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ffead0 {
    undefined4 sub_00ffead0(byte);
};

// @baa 0x00ffead0
undefined4 C_00ffead0::sub_00ffead0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f5e8b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ffee10 {
    undefined4 sub_00ffee10(byte);
};

// @baa 0x00ffee10
undefined4 C_00ffee10::sub_00ffee10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f5e8b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ffee30 {
    undefined4 sub_00ffee30(byte);
};

// @baa 0x00ffee30
undefined4 C_00ffee30::sub_00ffee30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f5e8b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ffee50 {
    undefined4 sub_00ffee50(byte);
};

// @baa 0x00ffee50
undefined4 C_00ffee50::sub_00ffee50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f5e8b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ffee70 {
    undefined4 sub_00ffee70(byte);
};

// @baa 0x00ffee70
undefined4 C_00ffee70::sub_00ffee70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f5e8b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ffee90 {
    undefined4 sub_00ffee90(byte);
};

// @baa 0x00ffee90
undefined4 C_00ffee90::sub_00ffee90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f5e8b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ffeeb0 {
    undefined4 sub_00ffeeb0(byte);
};

// @baa 0x00ffeeb0
undefined4 C_00ffeeb0::sub_00ffeeb0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f5e8b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ffeed0 {
    undefined4 sub_00ffeed0(byte);
};

// @baa 0x00ffeed0
undefined4 C_00ffeed0::sub_00ffeed0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f5e8b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x010000b0
IMPLEMENT_CLASS_AT(UTerrainMaterialFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnTerrainEdit.cpp", 2769);

// @baa 0x010000d0
IMPLEMENT_CLASS_AT(UTerrainLayerSetupFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnTerrainEdit.cpp", 2808);

// @baa 0x01002730
// @baa 0x010027f0

struct C_00ffe1c0
{
    char pad_0[0x8];
    INT Value_8;
    INT Value_c;
    INT Value_10;

    C_00ffe1c0* sub_00ffe1c0();
};

// @baa 0x00ffe1c0
C_00ffe1c0* C_00ffe1c0::sub_00ffe1c0()
{
    Value_8 = 0;
    Value_c = 0;
    Value_10 = 0;
    return this;
}

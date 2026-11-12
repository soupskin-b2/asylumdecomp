// UnCodecs.cpp: 20 functions
// Placed here by: callers 3, file 3, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00cb2160
IMPLEMENT_CLASS_AT(UCodecMovie, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCodecs.cpp", 9);

// @baa 0x00cb2180
IMPLEMENT_CLASS_AT(UCodecMovieFallback, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCodecs.cpp", 10);

// @baa 0x00cb2d30
IMPLEMENT_CLASS_AT(UCodecMovieBink, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCodecs.cpp", 11);

struct C {
    void sub_00cb2d70();
};

// @baa 0x00cb2d70
void C::sub_00cb2d70(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    *param_1 = 0;
  }
  return;
}

// @baa 0x00cb2d80
// @baa 0x00cb2e40
// @baa 0x00cb2f00

// @baa 0x00c8c690
void __stdcall sub_00c8c690(int a0, int a1) {  }

int sub_005c7a20(void);
extern undefined * g_02085a70;
// @baa 0x00c8c6f0
undefined4 * UObject::sub_00c8c6f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02085a70);
  return param_1;
}

// @baa 0x00c8c710
int sub_00c8c710(int a0, int a1) { return a1; }

extern undefined * g_02085bb8;
// @baa 0x00c8c720
undefined4 * UObject::sub_00c8c720(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02085bb8);
  return param_1;
}

// @baa 0x00c97b60

int sub_0053dfa0(...);
struct C_00cb3030 {
    undefined4 sub_00cb3030(byte);
};

int sub_007249d0(void);
// @baa 0x00cb3030
undefined4 C_00cb3030::sub_00cb3030(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_0053dfa0(void*);

struct C_00cb30c0 {
    undefined4 sub_00cb30c0(byte);
};

// @baa 0x00cb30c0
undefined4 C_00cb30c0::sub_00cb30c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00cb3150 {
    undefined4 sub_00cb3150(byte);
};

// @baa 0x00cb3150
undefined4 C_00cb3150::sub_00cb3150(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00cb3170(void);
// @baa 0x00cb31e0
undefined4 ULensFlare::sub_00cb31e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00cb3170();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00cbbec0

// @baa 0x00cbbfd0
bool UCodecMovieFallback::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cbc010

// @baa 0x00cbc120
bool UCodecMovieBink::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

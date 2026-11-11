// Editor_1540000.cpp: 8 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_005c7a20(void);
extern undefined * g_022e6918;
// @baa 0x015437f0
undefined4 * UObject::sub_015437f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e6918);
  return param_1;
}

// @baa 0x01543810
IMPLEMENT_CLASS_AT(URFlockComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\RFlock.cpp", 5);

// @baa 0x01543880
struct C { C* sub_015438d0(void); };

// @baa 0x015438d0
C* C::sub_015438d0(void) { return this; }

struct C_015438e0 {
    int sub_015438e0(int);
    int sub_01542940(int, int);
};

// @baa 0x015438e0
int C_015438e0::sub_015438e0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_015438e0 *)(this))->sub_01542940((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct C_01543910 { void sub_01542bd0(int); C_01543910 *sub_01543910(int); };

// @baa 0x01543910
C_01543910 *C_01543910::sub_01543910(int a) { sub_01542bd0(a); return this; }

int sub_0053dfa0(...);
int sub_00665d40(void);
// @baa 0x01543980
undefined4 UPrimitiveComponent::sub_01543980(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00665d40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_015433a0();
// @baa 0x015439a0
void sub_015439a0(void) { sub_015433a0(); }

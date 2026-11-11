// UnPrefab.cpp: 11 functions
// Placed here by: callers 4, file 4, neighbours 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00d39e30
IMPLEMENT_CLASS_AT(UPrefab, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPrefab.cpp", 10);

// @baa 0x00d39e50
// @baa 0x00d401f0
IMPLEMENT_CLASS_AT(UPrefabSequence, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPrefab.cpp", 1220);

// @baa 0x00d40210
IMPLEMENT_CLASS_AT(UPrefabSequenceContainer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPrefab.cpp", 1180);

struct C_view {
    int sub_005dfd20(int);
};

int sub_00d3f2a0(...);
int sub_00d3f310(...);
// @baa 0x00d40b60
void APrefabInstance::Serialize(FArchive& Ar)
{
    undefined4 param_2 = (undefined4)&Ar;
    int param_1 = (int)this;
  ((C_view *)(this))->sub_005dfd20(param_2);
  sub_00d3f2a0(param_2,param_1 + 0x1b0);
  sub_00d3f310(param_2,param_1 + 0x228);
  return;
}

// @baa 0x00d414e0
// @baa 0x00d415a0
struct C { void sub_00d3f4a0(int); C *sub_00d41890(int); };

// @baa 0x00d41890
C *C::sub_00d41890(int a) { sub_00d3f4a0(a); return this; }

// @baa 0x00d42280
IMPLEMENT_CLASS_AT(APrefabInstance, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPrefab.cpp", 11);

int sub_005c7a70(...);
int sub_00d421c0(void);
// @baa 0x00d42290
undefined4 APrefabInstance::sub_00d42290(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d421c0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x264);
  }
  return param_1;
}

// @baa 0x00d422c0

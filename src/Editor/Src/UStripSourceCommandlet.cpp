// UStripSourceCommandlet.cpp: 2 functions
// Placed here by: callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_01103b90();
};

// @baa 0x01103b90
void C::sub_01103b90(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffff7 | 0x17;
  return;
}

// @baa 0x011101a0
IMPLEMENT_CLASS_AT(UStripSourceCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UStripSourceCommandlet.cpp", 68);

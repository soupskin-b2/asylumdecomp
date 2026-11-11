// AnalyzeCookedContentCommandlet.cpp: 3 functions
// Placed here by: callers 2, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_01014970();
};

// @baa 0x01014970
void C::sub_01014970(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffff7 | 0x17;
  return;
}

// @baa 0x0104cfa0
IMPLEMENT_CLASS_AT(UAnalyzeCookedContentCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\AnalyzeCookedContentCommandlet.cpp", 16);

// @baa 0x0104db60

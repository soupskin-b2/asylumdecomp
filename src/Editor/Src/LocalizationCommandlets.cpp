// LocalizationCommandlets.cpp: 5 functions
// Placed here by: callers 4, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_01014990();
};

// @baa 0x01014990
void C::sub_01014990(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffff7 | 0x17;
  return;
}

struct C_010149c0 {
    void sub_010149c0();
};

// @baa 0x010149c0
void C_010149c0::sub_010149c0(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffff7 | 0x17;
  return;
}

// @baa 0x01036a00
IMPLEMENT_CLASS_AT(UExportLocCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\LocalizationCommandlets.cpp", 104);

// @baa 0x010375d0
struct S_0103d910 { void sub_0103c5e0(); };

// @baa 0x0103d910
void sub_0103d910(S_0103d910 *p) { if (p) p->sub_0103c5e0(); }

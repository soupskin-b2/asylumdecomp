// TextureCube.cpp: 4 functions
// Placed here by: neighbours 2, callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_0075bb50();
};

// @baa 0x0075bb50
undefined4 C::sub_0075bb50(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x17c) + 0xb0);
}

struct C_0075bb60 {
    undefined4 sub_0075bb60();
};

// @baa 0x0075bb60
undefined4 C_0075bb60::sub_0075bb60(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x17c) + 0xb4);
}

// @baa 0x007670f0
IMPLEMENT_CLASS_AT(UTextureCube, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\TextureCube.cpp", 12);

// @baa 0x00767250

// Engine_0e60000.cpp: 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    int sub_00e67d70();
};

int sub_00e5eed0(void);
// @baa 0x00e67d70
int C::sub_00e67d70(void)
{
    int param_1 = (int)this;

  sub_00e5eed0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00e67e00
IMPLEMENT_CLASS_AT(UGFxGameViewportClient, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIGameViewportClient.cpp", 14);

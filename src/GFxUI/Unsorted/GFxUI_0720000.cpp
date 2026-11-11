// GFxUI_0720000.cpp (part 1 of 3): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_006f7810(void);
extern undefined * g_01eef0c8;
// @baa 0x0072ee10
undefined4 * UPrimitiveComponent::sub_0072ee10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_01eef0c8);
  return param_1;
}

// @baa 0x0072ee30
IMPLEMENT_CLASS_AT(USpriteComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\SpriteComponent.cpp", 9);

// @baa 0x0072ee90
// @baa 0x0072ef00
DOUBLE UTexture2D::vf_10c() {
    int param_1 = (int)this;

  return (float10)*(int *)(param_1 + 0xbc);
}

// Texture2D.cpp: 8 functions
// Placed here by: callers 4, neighbours 3, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x005678e0
int UTexture2D::sub_005678e0(void) { return *(int*)((char*)this + 16); }

// @baa 0x005678f0
int UTexture2D::sub_005678f0(void) { return *(int*)((char*)this + 12); }

// @baa 0x00567900
bool UTexture2D::sub_00567900(void)
{
    int param_1 = (int)this;

  return (*(uint *)(param_1 + 4) & 0x92) != 0;
}

// @baa 0x0071d0b0
void UTexture2D::vf_05c(void) {  }

int sub_0056bf90(void);
extern undefined * g_01eee3d0;
// @baa 0x0071d180
undefined4 * UTexture2D::sub_0071d180(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0056bf90();
  *param_1 = (undefined4)(&g_01eee3d0);
  return param_1;
}

struct C {
    undefined4 sub_0072ad10(byte);
};

int sub_0053dfa0(...);
int sub_00725700(void);
// @baa 0x0072ad10
undefined4 C::sub_0072ad10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00725700();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00732190
IMPLEMENT_CLASS_AT(UTexture2D, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\Texture2D.cpp", 25);

// @baa 0x00733250

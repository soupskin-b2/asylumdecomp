// Texture.cpp (part 3 of 3): 11 functions
// Placed here by: class 9, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_005c7a70(...);
int sub_0071eea0(void);
// @baa 0x0071efc0
undefined4 UTexture::sub_0071efc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0071eea0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0xb0);
  }
  return param_1;
}

// @baa 0x00720a70
IMPLEMENT_CLASS_AT(UTexture, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\Texture.cpp", 12);

// @baa 0x00720b80
bool UTexture::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_0071eff0(void);
extern undefined * g_01eeea40;
// @baa 0x007290b0
undefined4 * UTexture::sub_007290b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0071eff0();
  *param_1 = (undefined4)(&g_01eeea40);
  return param_1;
}

extern undefined * g_01efedd0;
// @baa 0x00760ed0
undefined4 * UTexture::sub_00760ed0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0071eff0();
  *param_1 = (undefined4)(&g_01efedd0);
  return param_1;
}

// @baa 0x00760f00
IMPLEMENT_CLASS_AT(UTexture2DDynamic, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\Texture2DDynamic.cpp", 8);

extern undefined * g_01efef00;
// @baa 0x00760f90
undefined4 * UTexture::sub_00760f90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0071eff0();
  *param_1 = (undefined4)(&g_01efef00);
  return param_1;
}

extern undefined * g_01eff170;
// @baa 0x00761290
undefined4 * UTexture::sub_00761290(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0071eff0();
  *param_1 = (undefined4)(&g_01eff170);
  return param_1;
}

extern undefined * g_01eff2a0;
// @baa 0x00761360
undefined4 * UTexture::sub_00761360(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0071eff0();
  *param_1 = (undefined4)(&g_01eff2a0);
  return param_1;
}

extern undefined * g_01eff3d0;
// @baa 0x00761380
undefined4 * UTexture::sub_00761380(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0071eff0();
  *param_1 = (undefined4)(&g_01eff3d0);
  return param_1;
}

// @baa 0x0071eea0
// The destructor is the one DECLARE_CLASS defines inline (virtual ~UTexture() { ConditionalDestroy(); });
// the compiler emits it alongside UTexture's vtable, i.e. with this out-of-line constructor.
UTexture::UTexture()
{
}

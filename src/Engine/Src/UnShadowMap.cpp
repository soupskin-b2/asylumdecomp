// UnShadowMap.cpp: 18 functions
// Placed here by: callers 3, file 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x009125c0
IMPLEMENT_CLASS_AT(UShadowMap2D, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnShadowMap.cpp", 11);

// @baa 0x009126b0
// @baa 0x00938b80
IMPLEMENT_CLASS_AT(UShadowMapTexture2D, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnShadowMap.cpp", 10);

// @baa 0x00938b90
IMPLEMENT_CLASS_AT(UShadowMap1D, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnShadowMap.cpp", 12);

// @baa 0x00938bb0
// @baa 0x00938c70

// @baa 0x0090b7d0

// @baa 0x0090b8e0
int UShadowMapTexture2D::vf_000(void) { return 1; }

// @baa 0x0090b8f0
bool UShadowMapTexture2D::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0090b930

// @baa 0x0090ba40
int UShadowMap2D::vf_000(void) { return 1; }

// @baa 0x0090ba50
bool UShadowMap2D::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0090ba90

// @baa 0x0090bba0
int UShadowMap1D::vf_000(void) { return 1; }

// @baa 0x0090bbb0
bool UShadowMap1D::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00936800
UShadowMapTexture2D::UShadowMapTexture2D()
{
}

int sub_005c7a70(...);
int sub_00936800(void);
// @baa 0x00936860
undefined4 UShadowMapTexture2D::sub_00936860(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00936800();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x100);
  }
  return param_1;
}

// @baa 0x009368f0
UShadowMap1D::UShadowMap1D()
{
}

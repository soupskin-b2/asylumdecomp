// PointLightComponent.cpp: 11 functions
// Placed here by: callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00708890
IMPLEMENT_CLASS_AT(UPointLightComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PointLightComponent.cpp", 11);

// @baa 0x007092b0

// @baa 0x006da6e0

// @baa 0x006da7f0
int UPointLightComponent::vf_000(void) { return 1; }

// @baa 0x006da800
bool UPointLightComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006da8b0
int sub_006da8b0(void) { return 1; }

extern char g_01ed493c[];
// @baa 0x006da8f0
int sub_006da8f0(void) { return (int)g_01ed493c; }

extern char g_01ebb554[];
// @baa 0x006da900
void UPointLightComponent::sub_006da900(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

int sub_0053dfa0(...);
// @baa 0x006da910
undefined4 * UPointLightComponent::sub_006da910(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct UPointLightComponent_ : public UPointLightComponent
{
    void sub_006da930(const FMatrix* In);
};

// @baa 0x006da930
void UPointLightComponent_::sub_006da930(const FMatrix* In)
{
    CachedParentToWorld = *In;
}

struct FPointLightSceneProxy
{
	FPointLightSceneProxy(UPointLightComponent* Light);
	INT Member[692];
};

// @baa 0x00713300
UINT UPointLightComponent::CreateSceneInfo()
{
	FPointLightSceneProxy* Proxy = new FPointLightSceneProxy(this);
	return (UINT)Proxy;
}

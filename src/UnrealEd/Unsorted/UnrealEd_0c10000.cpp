// UnrealEd_0c10000.cpp: 15 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00c1f820
void UMaterialExpressionLightingSpecularHeidrichSeidel::vf_10c(int param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x15c) == param_2) {
    *(undefined4 *)(param_1 + 0x15c) = param_3;
  }
  if (*(int *)(param_1 + 0x60) == param_2) {
    *(undefined4 *)(param_1 + 0x60) = param_3;
  }
  if (*(int *)(param_1 + 0x7c) == param_2) {
    *(undefined4 *)(param_1 + 0x7c) = param_3;
  }
  if (*(int *)(param_1 + 0x98) == param_2) {
    *(undefined4 *)(param_1 + 0x98) = param_3;
  }
  if (*(int *)(param_1 + 0xb4) == param_2) {
    *(undefined4 *)(param_1 + 0xb4) = param_3;
  }
  if (*(int *)(param_1 + 0xd0) == param_2) {
    *(undefined4 *)(param_1 + 0xd0) = param_3;
  }
  if (*(int *)(param_1 + 0xec) == param_2) {
    *(undefined4 *)(param_1 + 0xec) = param_3;
  }
  if (*(int *)(param_1 + 0x108) == param_2) {
    *(undefined4 *)(param_1 + 0x108) = param_3;
  }
  if (*(int *)(param_1 + 0x124) == param_2) {
    *(undefined4 *)(param_1 + 0x124) = param_3;
  }
  if (*(int *)(param_1 + 0x140) == param_2) {
    *(undefined4 *)(param_1 + 0x140) = param_3;
  }
  return;
}

// @baa 0x00c1f9f0
void UMaterialExpressionFluidNormal::vf_10c(INT a0, UINT a1) {  }

// @baa 0x00c1fa90
void UMaterialExpressionDeriveNormalZ::vf_10c(INT a0, UINT a1) {  }

// @baa 0x00c1fb20
void UMaterialExpressionConstantBiasScale::vf_10c(int param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x60) == param_2) {
    *(undefined4 *)(param_1 + 0x60) = param_3;
  }
  return;
}

extern char g_02044338[];
struct C { C* sub_00c1fb40(void); };

// @baa 0x00c1fb40
C* C::sub_00c1fb40(void) { *(int*)((char*)this + 0) = (int)g_02044338; return this; }

// @baa 0x00c1fb70
void sub_00c1fb70(void) {  }

// @baa 0x00c1fb80
int sub_00c1fb80(int a0, int a1) { return a1; }

// @baa 0x00c1fb90
int sub_00c1fb90(int a0, int a1) { return a1; }

// @baa 0x00c1fba0
IMPLEMENT_CLASS_AT(UPathRenderingComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PathRenderingComponent.cpp", 86);

// @baa 0x00c1fcb0
int UPathRenderingComponent::vf_000(void) { return 1; }

// @baa 0x00c1fcc0
bool UPathRenderingComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00c1fdb0 {
    float10 sub_00c1fdb0();
};

// @baa 0x00c1fdb0
float10 C_00c1fdb0::sub_00c1fdb0(void)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(param_1 + 4) + 0xd8);
}

// @baa 0x00c1fe40
IMPLEMENT_CLASS_AT(URouteRenderingComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\RouteRenderingComponent.cpp", 12);

// @baa 0x00c1ff50
int URouteRenderingComponent::vf_000(void) { return 1; }

// @baa 0x00c1ff60
bool URouteRenderingComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

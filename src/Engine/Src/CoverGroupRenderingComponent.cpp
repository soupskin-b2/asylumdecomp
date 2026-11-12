// CoverGroupRenderingComponent.cpp: 10 functions
// Placed here by: callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00c155c0
IMPLEMENT_CLASS_AT(UCoverGroupRenderingComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\CoverGroupRenderingComponent.cpp", 12);

// @baa 0x00c155e0

// @baa 0x00bf8e30

// @baa 0x00bf8f40
int UCoverGroupRenderingComponent::vf_000(void) { return 1; }

// @baa 0x00bf8f50
bool UCoverGroupRenderingComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00bf8f90
int UCoverGroupRenderingComponent::vf_200(void) { return 1; }

// @baa 0x00c05780
int sub_00c05780(void) { return 1690; }

struct C_00c05790 {
    int sub_00c05790();
};

// @baa 0x00c05790
int C_00c05790::sub_00c05790(void)
{
    int param_1 = (int)this;

  return ((*(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xa8)) * 7 + *(int *)(param_1 + 0xc0) * 8 +
          *(int *)(param_1 + 0xb4) * 5 + *(int *)(param_1 + 0x9c) * 6 + *(int *)(param_1 + 0x84)) *
         4;
}

struct C_00c057d0 {
    int sub_00c057d0();
};

// @baa 0x00c057d0
int C_00c057d0::sub_00c057d0(void)
{
    int param_1 = (int)this;

  return ((*(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xa8)) * 7 + *(int *)(param_1 + 0xc0) * 8 +
          *(int *)(param_1 + 0xb4) * 5 + *(int *)(param_1 + 0x9c) * 6 + *(int *)(param_1 + 0x84)) *
         4 + 0xd0;
}

void sub_006837e0();
// @baa 0x00c05820
void sub_00c05820(void) { sub_006837e0(); }

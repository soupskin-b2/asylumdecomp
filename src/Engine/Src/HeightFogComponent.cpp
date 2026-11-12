// HeightFogComponent.cpp: 7 functions
// Placed here by: callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x006b1e70
IMPLEMENT_CLASS_AT(UHeightFogComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\HeightFogComponent.cpp", 8);

// @baa 0x006b44d0

// @baa 0x006aca20

// @baa 0x006acb30
int UHeightFogComponent::vf_000(void) { return 1; }

// @baa 0x006acb40
bool UHeightFogComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct Inner
{
    char pad_00[0x38];
    float Value;
};

struct C_006acb80
{
    char pad_00[0x50];
    float Value;

    void sub_006acb80(Inner* Source);
};

// @baa 0x006acb80
void C_006acb80::sub_006acb80(Inner* Source)
{
    Value = Source->Value;
}

struct C_view_006acbe0{
int sub_0076d150(int);
};

// @baa 0x006acbe0
void UHeightFogComponent::vf_11c(undefined4 param_2)
{
int param_1=(DWORD)this;
((C_view_006acbe0*)(this))->sub_0076d150(param_2);
(*(int(__stdcall**)(int))(**(int**)(0x3c+param_1)+0x38))((int)(param_1));
return;
}

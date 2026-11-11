// UnLevel.cpp: 12 functions
// Placed here by: neighbours 5, callers 4, file 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct S_005f2bf0 {
    int __thiscall sub_005f2c70(int);
};

struct C_0062da20 {
    char pad[0x28];
    S_005f2bf0 *member_28;
    int __thiscall sub_007d7590();
};

// @baa 0x007d7590
int C_0062da20::sub_007d7590() {
    return member_28->sub_005f2c70(0x30);
}

// @baa 0x007d75a0
IMPLEMENT_CLASS_AT(ULevelBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnLevel.cpp", 47);

// @baa 0x007d76b0
int ULevelBase::vf_000(void) { return 1; }

// @baa 0x007d76c0
bool ULevelBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007d7700
int ULevel::vf_000(void) { return 1; }

// @baa 0x007f07e0
IMPLEMENT_CLASS_AT(ULineBatchComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnLevel.cpp", 18);

// @baa 0x007f07f0
struct C_view {
    int sub_00547da0(int);
    int sub_00553180(int);
};

// @baa 0x007f0910
int URFMODSound::sub_007f0910(int param_2)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00547da0(param_2);
  ((C_view *)(((char *)this + 0xc)))->sub_00547da0(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  ((C_view *)(((char *)this + 0x1c)))->sub_00547da0(param_2 + 0x1c);
  ((C_view *)(((char *)this + 0x28)))->sub_00553180(param_2 + 0x28);
  ((C_view *)(((char *)this + 0x34)))->sub_00547da0(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  return param_1;
}

// @baa 0x007f1130
// @baa 0x007f1260
// @baa 0x007f9810
IMPLEMENT_CLASS_AT(ULevel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnLevel.cpp", 114);

// @baa 0x007f9820

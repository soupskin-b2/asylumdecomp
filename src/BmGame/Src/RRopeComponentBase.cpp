// RRopeComponentBase.cpp: 17 functions
// Placed here by: class 10, file 5, neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0163f230
IMPLEMENT_CLASS_AT(URRopeComponentBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RRopeComponentBase.cpp", 17);

// @baa 0x0163f340
int URRopeComponentBase::vf_000(void) { return 1; }

// @baa 0x0163f350
bool URRopeComponentBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163f390
void URRopeComponentBase::sub_0163f390(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x1a4) = *(uint *)(param_1 + 0x1a4) | 0x10;
  return;
}

// @baa 0x0163f480
void URRopeComponentBase::sub_0163f480(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x205) = 2;
  *(undefined1 *)(param_1 + 0x204) = param_2;
  return;
}

// @baa 0x0163f4a0
void URRopeComponentBase::sub_0163f4a0(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x205) = 3;
  *(undefined1 *)(param_1 + 0x204) = param_2;
  return;
}

// @baa 0x0163f4f0
DOUBLE URRopeComponentBase::vf_254() {
  return (float10)0;
}

// @baa 0x0163f740
int sub_0163f740(void) { return 0; }

struct C {
    undefined4 sub_0163f7a0(undefined4);
};

int sub_006311e0(...);
int sub_01573f30(...);
extern undefined4 g_02353750;
// @baa 0x0163f7a0
undefined4 C::sub_0163f7a0(undefined4 param_2)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0x1a4) & 2) == 0) {
    sub_006311e0("IsRopeEnd1Attached",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RRopeComponentBase.cpp"
                 ,0x288,&g_02353750);
  }
  sub_01573f30(param_2,*(undefined4 *)(param_1 + 0x1b0),*(undefined4 *)(param_1 + 0x1b8),
               *(undefined4 *)(param_1 + 0x1bc),param_1 + 0x1c8);
  return param_2;
}

struct C_0163f800 {
    undefined4 sub_0163f800(undefined4);
};

extern undefined4 g_02353840;
// @baa 0x0163f800
undefined4 C_0163f800::sub_0163f800(undefined4 param_2)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0x1a4) & 4) == 0) {
    sub_006311e0("IsRopeEnd2Attached",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RRopeComponentBase.cpp"
                 ,0x28f,&g_02353840);
  }
  sub_01573f30(param_2,*(undefined4 *)(param_1 + 0x1b4),*(undefined4 *)(param_1 + 0x1c0),
               *(undefined4 *)(param_1 + 0x1c4),param_1 + 0x1d4);
  return param_2;
}

struct C_0163f860 {
    undefined4 sub_0163f860();
};

extern undefined4 g_02353934;
// @baa 0x0163f860
undefined4 C_0163f860::sub_0163f860(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x224) == 0) {
    sub_006311e0("RopePhysicsBase != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RRopeComponentBase.cpp"
                 ,0x2f4,&g_02353934);
  }
  return *(undefined4 *)(param_1 + 0x224);
}

extern undefined4 g_02353a24;
// @baa 0x0163f890
undefined4 URSimpleRopeComponent::sub_0163f890(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x224) == 0) {
    sub_006311e0("RopePhysicsBase != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RRopeComponentBase.cpp"
                 ,0x2fa,&g_02353a24);
  }
  return *(undefined4 *)(param_1 + 0x224);
}

extern undefined4 g_02353b04;
// @baa 0x0163f8c0
INT URRopeComponentBase::vf_268() {
  sub_006311e0("false",
               "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RRopeComponentBase.cpp"
               ,0x300,&g_02353b04);
  return 0;
}

// @baa 0x01654ac0
// @baa 0x01654b20
// @baa 0x01655250
// @baa 0x01655590

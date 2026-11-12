// UnPrefab.cpp: 22 functions
// Placed here by: callers 4, file 4, neighbours 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00d39e30
IMPLEMENT_CLASS_AT(UPrefab, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPrefab.cpp", 10);

// @baa 0x00d39e50
// @baa 0x00d401f0
IMPLEMENT_CLASS_AT(UPrefabSequence, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPrefab.cpp", 1220);

// @baa 0x00d40210
IMPLEMENT_CLASS_AT(UPrefabSequenceContainer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPrefab.cpp", 1180);

struct C_view {
    int sub_005dfd20(int);
};

int sub_00d3f2a0(...);
int sub_00d3f310(...);
// @baa 0x00d40b60
void APrefabInstance::Serialize(FArchive& Ar)
{
    undefined4 param_2 = (undefined4)&Ar;
    int param_1 = (int)this;
  ((C_view *)(this))->sub_005dfd20(param_2);
  sub_00d3f2a0(param_2,param_1 + 0x1b0);
  sub_00d3f310(param_2,param_1 + 0x228);
  return;
}

// @baa 0x00d414e0
// @baa 0x00d415a0
struct C { void sub_00d3f4a0(int); C *sub_00d41890(int); };

// @baa 0x00d41890
C *C::sub_00d41890(int a) { sub_00d3f4a0(a); return this; }

// @baa 0x00d42280
IMPLEMENT_CLASS_AT(APrefabInstance, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPrefab.cpp", 11);

int sub_005c7a70(...);
int sub_00d421c0(void);
// @baa 0x00d42290
undefined4 APrefabInstance::sub_00d42290(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d421c0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x264);
  }
  return param_1;
}

// @baa 0x00d422c0

// @baa 0x00d1f920

// @baa 0x00d1fa30
int UPrefab::vf_000(void) { return 1; }

// @baa 0x00d1fa40
bool UPrefab::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d1fa80

// @baa 0x00d1fb90
int APrefabInstance::vf_000(void) { return 1; }

// @baa 0x00d1fba0
bool APrefabInstance::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d1fc70

// @baa 0x00d1fd80
int UPrefabSequenceContainer::vf_000(void) { return 1; }

// @baa 0x00d1fd90
bool UPrefabSequenceContainer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d1fdd0

int sub_005eac10(...);
int sub_00789620(...);
int sub_00d29890(...);
// @baa 0x00d35250
void sub_00d35250(undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = sub_00789620(param_1);
  if (iVar1 != 0) {
    iVar2 = sub_00d29890(param_2);
    if (*(int *)(iVar2 + 0x1b8) != 0) {
      uVar3 = sub_005eac10(*(undefined4 *)(iVar2 + 0x1b8),*(undefined4 *)(iVar2 + 0x1b8),iVar1,
                           L"None",0xffffffff,0xffffffff,0,0);
      *(undefined4 *)(iVar1 + 0x1b8) = uVar3;
      *(undefined4 *)(*(int *)(iVar1 + 0x1bc) + 0x1a4) = uVar3;
      return;
    }
    *(undefined4 *)(iVar1 + 0x1b8) = 0;
    *(undefined4 *)(*(int *)(iVar1 + 0x1bc) + 0x1a4) = 0;
  }
  return;
}

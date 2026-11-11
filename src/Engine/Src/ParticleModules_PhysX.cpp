// ParticleModules_PhysX.cpp: 15 functions
// Placed here by: class 8, neighbours 3, callers 2, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00b33c30
IMPLEMENT_CLASS_AT(UParticleModuleTypeDataMeshPhysX, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_PhysX.cpp", 13);

// @baa 0x00b33d40
int UParticleModuleTypeDataMeshPhysX::vf_000(void) { return 1; }

// @baa 0x00b33d50
bool UParticleModuleTypeDataMeshPhysX::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_0053dfa0(...);
int sub_00e06070(void);
// @baa 0x00b33d90
undefined4 UParticleModuleTypeDataMeshPhysX::sub_00b33d90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e06070();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_005eae70(...);
int sub_00b74aa0(void);
int sub_00df1aa0(void);
int sub_00df78c0(...);
extern undefined4 g_026c5e78;
// @baa 0x00b33db0
void UParticleModuleTypeDataMeshPhysX::vf_16c(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  sub_00b74aa0();
  if (*(int *)(param_1 + 0x54) == 0) {
    if (g_026c5e78 == 0) {
      g_026c5e78 = sub_00df78c0(L"Engine");
      sub_00df1aa0();
    }
    uVar1 = sub_005eae70(g_026c5e78,0,L"EngineResources.DefaultPhysXParSys",0,0,0,1);
    *(undefined4 *)(param_1 + 0x54) = uVar1;
  }
  return;
}

// @baa 0x00b33e20
IMPLEMENT_CLASS_AT(UParticleModuleTypeDataPhysX, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_PhysX.cpp", 127);

// @baa 0x00b33f30
int UParticleModuleTypeDataPhysX::vf_000(void) { return 1; }

// @baa 0x00b33f40
bool UParticleModuleTypeDataPhysX::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct T_00b3c470;
// @baa 0x00b3c470
template INT TArray<T_00b3c470*>::RemoveItem(T_00b3c470* const&);

// @baa 0x00b3dde0
// @baa 0x00b3de40
// @baa 0x00b40fe0
// @baa 0x00b41000
// @baa 0x00b41cf0
// @baa 0x00b41db0

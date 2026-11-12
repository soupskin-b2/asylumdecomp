// ParticleModules_Spawn.cpp: 21 functions
// Placed here by: class 8, callers 3, file 3, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00b33560
int UParticleModuleOrbit::vf_000(void) { return 1; }

// @baa 0x00b339c0
int UParticleModuleOrbit::vf_114(int a0) { return 72; }

// @baa 0x00b339d0
int UParticleModuleOrbit::vf_118(int a0) { return 0; }

// @baa 0x00b342a0
int UParticleModuleSpawnPerUnit::vf_000(void) { return 1; }

// @baa 0x00b40fc0
IMPLEMENT_CLASS_AT(UParticleModuleSpawnBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Spawn.cpp", 11);

// @baa 0x00b41e70
// @baa 0x00b43a00
IMPLEMENT_CLASS_AT(UParticleModuleOrbit, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Orbit.cpp", 16);

// @baa 0x00b43a90
// @baa 0x00b48fd0
// @baa 0x00b490e0
bool UParticleModuleOrbit::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b4a8a0
// @baa 0x00b4a8c0
IMPLEMENT_CLASS_AT(UParticleModuleSpawn, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Spawn.cpp", 16);

// @baa 0x00b4a8e0
IMPLEMENT_CLASS_AT(UParticleModuleSpawnPerUnit, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Spawn.cpp", 101);

// @baa 0x00b4b400
// @baa 0x00b4b4c0

// @baa 0x00b34260
int UParticleModuleSpawn::vf_000(void) { return 1; }

// @baa 0x00b342e0
int UParticleModuleSpawnPerUnit::vf_118(int a0) { return 4; }

int sub_00b339e0(void);
int sub_00b41c30(...);
extern undefined4 g_026bf31c;
// @baa 0x00b43ac0
int sub_00b43ac0(void)
{
  if (g_026bf31c == 0) {
    g_026bf31c = sub_00b41c30(L"Engine");
    sub_00b339e0();
  }
  return g_026bf31c;
}

int sub_00b34100(void);
int sub_00b41e70(...);
extern undefined4 g_026bf32c;
// @baa 0x00b43af0
int sub_00b43af0(void)
{
  if (g_026bf32c == 0) {
    g_026bf32c = sub_00b41e70(L"Engine");
    sub_00b34100();
  }
  return g_026bf32c;
}

int sub_005c7a20(void);
extern undefined * g_01fefa80;
// @baa 0x00b43b20
undefined4 * UObject::sub_00b43b20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fefa80);
  return param_1;
}

extern undefined * g_01fefbf0;
// @baa 0x00b43c00
undefined4 * UObject::sub_00b43c00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fefbf0);
  return param_1;
}

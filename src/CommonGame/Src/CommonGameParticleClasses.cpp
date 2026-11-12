// CommonGameParticleClasses.cpp: 21 functions
// Placed here by: callers 4, file 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01543010
IMPLEMENT_CLASS_AT(URParticleModuleOnDeathBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameParticleClasses.cpp", 5);

// @baa 0x01543030
IMPLEMENT_CLASS_AT(URParticleModuleSpawnDecalOnDeath, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameParticleClasses.cpp", 4);

// @baa 0x01543050
IMPLEMENT_CLASS_AT(URParticleModuleSpawnOnDeath, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameParticleClasses.cpp", 6);

// @baa 0x01543070
IMPLEMENT_CLASS_AT(URParticleModuleWaitForDeath, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameParticleClasses.cpp", 7);

// @baa 0x01543090
// @baa 0x01543150
// @baa 0x01543210
// @baa 0x015432d0

// @baa 0x0153b890
int URParticleModuleSpawnDecalOnDeath::vf_000(void) { return 1; }

// @baa 0x0153b8a0

// @baa 0x0153b9b0
int URParticleModuleOnDeathBase::vf_000(void) { return 1; }

// @baa 0x0153b9c0
bool URParticleModuleOnDeathBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0153ba00
int URParticleModuleSpawnOnDeath::vf_000(void) { return 1; }

// @baa 0x0153ba10
int URParticleModuleWaitForDeath::vf_000(void) { return 1; }

// @baa 0x0153ba20
void URParticleModuleSpawnDecalOnDeath::vf_168(int a0, int a1, int a2, int a3, int a4) {  }

// @baa 0x0153ba30
void URParticleModuleSpawnOnDeath::vf_168(int a0, int a1, int a2, int a3, int a4) {  }

// @baa 0x0153bb80
void URParticleModuleWaitForDeath::vf_168(int a0, int a1, int a2, int a3, int a4) {  }

int sub_005c7a20(void);
extern undefined * g_022e5f68;
// @baa 0x01541d80
undefined4 * UObject::sub_01541d80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e5f68);
  return param_1;
}

extern undefined * g_022e60d0;
// @baa 0x01541dc0
undefined4 * UObject::sub_01541dc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e60d0);
  return param_1;
}

extern undefined * g_022e6240;
// @baa 0x01541e60
undefined4 * UObject::sub_01541e60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e6240);
  return param_1;
}

extern undefined * g_022e63b0;
// @baa 0x01541f00
undefined4 * UObject::sub_01541f00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e63b0);
  return param_1;
}

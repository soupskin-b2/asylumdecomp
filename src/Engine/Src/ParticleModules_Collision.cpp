// ParticleModules_Collision.cpp: 24 functions
// Placed here by: class 10, neighbours 6, callers 2, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0077a3f0(...);
int sub_0077d790(void);
extern undefined4 g_026b3bf4;
// @baa 0x00b31180
int sub_00b31180(void)
{
  if (g_026b3bf4 == 0) {
    g_026b3bf4 = sub_0077a3f0(L"Engine");
    sub_0077d790();
  }
  return g_026b3bf4;
}

// @baa 0x00b32cf0
UBOOL UParticleModuleCollision::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b32d00
UINT UParticleModuleCollision::RequiredBytes(FParticleEmitterInstance* a0) { return 32; }

// @baa 0x00b32e00
UBOOL UParticleModuleCollision::GenerateLODModuleValues(UParticleModule* a0, FLOAT a1, UParticleLODLevel* a2) { return 1; }

// @baa 0x00b32ff0
void __stdcall sub_00b32ff0(int a0, int a1, int a2) {  }

// @baa 0x00b33000
void __stdcall sub_00b33000(int a0, int a1, int a2) {  }

// @baa 0x00b33010
UINT UParticleModuleEventReceiverSpawn::RequiredBytes(FParticleEmitterInstance* a0) { return 0; }

// @baa 0x00b33020
UINT UParticleModuleEventReceiverSpawn::RequiredBytesPerInstance(FParticleEmitterInstance* a0) { return 0; }

// @baa 0x00b33030
UINT UParticleModuleEventReceiverSpawn::PrepPerInstanceBlock(FParticleEmitterInstance* a0, void* a1) { return 0; }

// @baa 0x00b33040
void UParticleModuleEventReceiverSpawn::vf_170(void) {  }

// @baa 0x00b33050
void UParticleModuleEventReceiverSpawn::PostEditChange(UProperty* a0) {  }

// @baa 0x00b33060
UBOOL UParticleModuleEventReceiverSpawn::WillProcessParticleEvent(EParticleEventType param_2)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0x48) != 0) && (param_2 != *(byte *)(param_1 + 0x48))) {
    return 0;
  }
  return 1;
}

// @baa 0x00b40ce0
IMPLEMENT_CLASS_AT(UParticleModuleCollisionBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Collision.cpp", 19);

// @baa 0x00b41870
// @baa 0x00b43740
IMPLEMENT_CLASS_AT(UParticleModuleCollision, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Collision.cpp", 24);

// @baa 0x00b437f0
// @baa 0x00b48700
// @baa 0x00b48810
UBOOL UParticleModuleCollision::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b4a830
// @baa 0x00b4b070

// @baa 0x00b32b90

// @baa 0x00b32ca0
UBOOL UParticleModuleCollisionBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b32cb0
UBOOL UParticleModuleCollisionBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b32fe0
UBOOL UParticleModuleEventReceiverSpawn::HasUniqueStaticConfigName() const { return 1; }

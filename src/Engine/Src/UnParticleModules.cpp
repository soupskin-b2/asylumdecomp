// UnParticleModules.cpp (part 1 of 5): 630 functions
// Placed here by: neighbours 464, class 88, file 70, callers 8.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_007a2650(void);
int sub_007afe40(...);
extern undefined4 g_026b52f8;
// @baa 0x007b4da0
int sub_007b4da0(void)
{
  if (g_026b52f8 == 0) {
    g_026b52f8 = sub_007afe40(L"Engine");
    sub_007a2650();
  }
  return g_026b52f8;
}

// @baa 0x00b31080
void sub_00b31080(void) {  }

int sub_0053dfa0(...);
extern undefined * g_01feddf8;
// @baa 0x00b31090
undefined4 * UParticleModuleUberLTISIVCL::sub_00b31090(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01feddf8);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00b310e0
int UParticleModuleUberLTISIVCL::sub_00b310e0(void) { return *(int*)((char*)this + 12); }

// @baa 0x00b3d580
IMPLEMENT_CLASS_AT(UParticleModule, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 52);

// @baa 0x00b3d5f0
void UParticleModule::Render3DPreview(FParticleEmitterInstance* a0, const FSceneView* a1, FPrimitiveDrawInterface* a2) {  }

// @baa 0x00b3d600
EModuleType UParticleModule::GetModuleType() const { return EPMT_General; }

// @baa 0x00b3d610
UBOOL UParticleModule::IsSizeMultiplyLife() { return 0; }

// @baa 0x00b3d650
void UParticleModule::RefreshModule(UInterpCurveEdSetup* a0, UParticleEmitter* a1, INT a2) {  }

// @baa 0x00b3d660
int sub_005c7a20(void);
extern undefined * g_01fedf88;
// @baa 0x00b3d680
undefined4 * UObject::sub_00b3d680(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fedf88);
  return param_1;
}

// @baa 0x00b3d6a0
IMPLEMENT_CLASS_AT(UParticleModuleCollisionBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Collision.cpp", 19);

extern undefined * g_01fee0f0;
// @baa 0x00b3d700
undefined4 * UObject::sub_00b3d700(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fee0f0);
  return param_1;
}

// @baa 0x00b3d720
// @baa 0x00b3d740
IMPLEMENT_CLASS_AT(UParticleModuleEventBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Event.cpp", 11);

// @baa 0x00b3d7a0
EModuleType UParticleModuleEventBase::GetModuleType() const { return EPMT_Event; }

// @baa 0x00b3d7b0
extern undefined * g_01fee258;
// @baa 0x00b3d7d0
undefined4 * UObject::sub_00b3d7d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fee258);
  return param_1;
}

void sub_00b3c2d0();
// @baa 0x00b3d7f0
void sub_00b3d7f0(void) { sub_00b3c2d0(); }

// @baa 0x00b3d800
IMPLEMENT_CLASS_AT(UParticleModuleEventReceiverBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Event.cpp", 301);

// @baa 0x00b3d860
UBOOL UParticleModuleEventReceiverBase::WillProcessParticleEvent(EParticleEventType a0) { return 0; }

// @baa 0x00b3d870
UBOOL UParticleModuleEventReceiverBase::ProcessParticleEvent(FParticleEmitterInstance* a0, FParticleEventData& a1, FLOAT a2) { return 0; }

// @baa 0x00b3d880
extern undefined * g_01fee3c0;
// @baa 0x00b3d8a0
undefined4 * UObject::sub_00b3d8a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fee3c0);
  return param_1;
}

// @baa 0x00b3d8c0
IMPLEMENT_CLASS_AT(UParticleModuleMaterialBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Material.cpp", 12);

extern undefined * g_01fee530;
// @baa 0x00b3d920
undefined4 * UObject::sub_00b3d920(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fee530);
  return param_1;
}

// @baa 0x00b3d940
// @baa 0x00b3d960
IMPLEMENT_CLASS_AT(UParticleModuleOrbitBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Orbit.cpp", 11);

extern undefined * g_01fee698;
// @baa 0x00b3d9c0
undefined4 * UObject::sub_00b3d9c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fee698);
  return param_1;
}

// @baa 0x00b3d9e0
// @baa 0x00b3da00
IMPLEMENT_CLASS_AT(UParticleModuleParameterBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Parameter.cpp", 15);

extern undefined * g_01fee800;
// @baa 0x00b3da60
undefined4 * UObject::sub_00b3da60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fee800);
  return param_1;
}

// @baa 0x00b3da80
// @baa 0x00b3daa0
IMPLEMENT_CLASS_AT(UParticleModuleSpawnBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Spawn.cpp", 11);

struct S_00b3db00 {
    char pad[0x48];
    uint f;
    uint sub_00b3db00(uint a1, uint a2, uint a3, uint a4, uint a5, uint a6);
};

// @baa 0x00b3db00
uint S_00b3db00::sub_00b3db00(uint a1, uint a2, uint a3, uint a4, uint a5, uint a6)
{
    return f & 1;
}

int sub_007a27b0(void);
int sub_007c7eb0(...);
extern undefined4 g_026b52fc;
// @baa 0x00b4fcf0
int sub_00b4fcf0(void)
{
  if (g_026b52fc == 0) {
    g_026b52fc = sub_007c7eb0(L"Engine");
    sub_007a27b0();
  }
  return g_026b52fc;
}

// @baa 0x00b72210
UBOOL UParticleModuleAccelerationBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b72220
UBOOL UParticleModuleAttractorBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b72230
UBOOL UParticleModuleColorBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b72240
UBOOL UParticleModuleKillBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b72250
UBOOL UParticleModuleLifetimeBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b72260
UBOOL UParticleModuleLocationBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b72270
UBOOL UParticleModuleOrientationBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b72280
UBOOL UParticleModuleRotationBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b72290
UBOOL UParticleModuleRotationRateBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b722a0
UBOOL UParticleModuleSizeBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b722b0
UBOOL UParticleModuleSubUVBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b722c0
UBOOL UParticleModuleTypeDataBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b722d0
UBOOL UParticleModuleUberBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b722e0
UBOOL UParticleModuleVelocityBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b722f0
IMPLEMENT_CLASS_AT(UDistributionFloatParticleParameter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 30);

// @baa 0x00b72400
UBOOL UDistributionFloatParticleParameter::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b72410
UBOOL UDistributionFloatParticleParameter::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b72450
IMPLEMENT_CLASS_AT(UDistributionVectorParticleParameter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 31);

// @baa 0x00b72560
UBOOL UDistributionVectorParticleParameter::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b72570
UBOOL UDistributionVectorParticleParameter::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b725d0
// @baa 0x00b726e0
UBOOL UParticleModule::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b726f0
UBOOL UParticleModule::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b72730
void __stdcall sub_00b72730(int a0, int a1, int a2) {  }

// @baa 0x00b72740
void __stdcall sub_00b72740(int a0, int a1, int a2) {  }

// @baa 0x00b72750
UINT UParticleModule::RequiredBytes(FParticleEmitterInstance* a0) { return 0; }

// @baa 0x00b72760
UINT UParticleModule::RequiredBytesPerInstance(FParticleEmitterInstance* a0) { return 0; }

// @baa 0x00b728d0
UBOOL UParticleModuleLocation::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b72a80
UBOOL UParticleModuleLocationDirect::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b72ef0
UINT UParticleModuleLocationDirect::RequiredBytes(FParticleEmitterInstance* a0) { return 12; }

// @baa 0x00b72f00
void UParticleModuleLocationDirect::vf_168(void) {  }

// @baa 0x00b72f20
UBOOL UParticleModuleLocationEmitter::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b72f30
UINT UParticleModuleLocationEmitter::RequiredBytesPerInstance(FParticleEmitterInstance* a0) { return 4; }

// @baa 0x00b72f40
UBOOL UParticleModuleLocationEmitterDirect::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b72f50
UBOOL UParticleModuleLocationPrimitiveBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b730f0
UBOOL UParticleModuleLocationPrimitiveCylinder::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b73100
UBOOL UParticleModuleLocationPrimitiveSphere::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b73110
UBOOL URParticleModuleLocationSphereSection::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b73780
UBOOL UParticleModuleOrientationAxisLock::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b73790
void __stdcall sub_00b73790(int a0, int a1, int a2) {  }

// @baa 0x00b737a0
void __stdcall sub_00b737a0(int a0, int a1, int a2) {  }

// @baa 0x00b737b0
void UParticleModuleOrientationAxisLock::SetLockAxis(EParticleAxisLock param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x48) = param_2;
  return;
}

// @baa 0x00b737c0
UBOOL UParticleModuleRequired::HasUniqueStaticConfigName() const { return 1; }

int sub_005e59b0(void);
// @baa 0x00b73870
void UParticleModuleRequired::PostLoad(void)
{
    int param_1 = (int)this;

  sub_005e59b0();
  if (*(int *)(param_1 + 0xa8) < 1) {
    *(undefined4 *)(param_1 + 0xa8) = 1;
  }
  if (*(int *)(param_1 + 0xac) < 1) {
    *(undefined4 *)(param_1 + 0xac) = 1;
  }
  return;
}

// @baa 0x00b738a0
void __stdcall sub_00b738a0(int a0, int a1, int a2) {  }

// @baa 0x00b738b0
void __stdcall sub_00b738b0(int a0, int a1, int a2) {  }

// @baa 0x00b738c0
UBOOL UParticleModuleMeshRotation::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b738d0
UBOOL UParticleModuleMeshRotationRate::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b738e0
UBOOL UParticleModuleMeshRotationRateMultiplyLife::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b738f0
UBOOL UParticleModuleRotation::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b73950
UBOOL UParticleModuleRotationRate::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b739b0
UBOOL UParticleModuleRotationOverLifetime::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b73aa0
UBOOL UParticleModuleSize::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b73b60
UBOOL UParticleModuleSizeMultiplyVelocity::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b73d50
UBOOL UParticleModuleSizeMultiplyLife::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b73df0
UBOOL UParticleModuleSizeScale::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b73ec0
UBOOL UParticleModuleSubUV::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b73ed0
UBOOL UParticleModuleSubUVSelect::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b740d0
UBOOL UParticleModuleSubUVDirect::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b74270
UBOOL UParticleModuleRotationRateMultiplyLife::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b74340
UBOOL UParticleModuleAcceleration::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b748b0
UINT UParticleModuleAcceleration::RequiredBytes(FParticleEmitterInstance* a0) { return 12; }

// @baa 0x00b748c0
UBOOL UParticleModuleAccelerationOverLifetime::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b749c0
FParticleEmitterInstance* UParticleModuleTypeDataBase::CreateInstance(UParticleEmitter* a0, UParticleSystemComponent* a1) { return 0; }

// @baa 0x00b749d0
void UParticleModuleTypeDataBase::vf_16c(void) {  }

// @baa 0x00b749e0
UBOOL UParticleModuleTypeDataMesh::HasUniqueStaticConfigName() const { return 1; }

int sub_005eae70(...);
int sub_00946350(void);
int sub_0097fae0(...);
extern undefined4 g_026b5f14;
// @baa 0x00b74aa0
void UParticleModuleTypeDataMesh::vf_16c(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x48) == 0) {
    if (g_026b5f14 == 0) {
      g_026b5f14 = sub_0097fae0(L"Engine");
      sub_00946350();
    }
    uVar1 = sub_005eae70(g_026b5f14,0,L"UN_SimpleMeshes.TexPropCube_Dup",0,0,0,1);
    *(undefined4 *)(param_1 + 0x48) = uVar1;
  }
  return;
}

// @baa 0x00b74af0
UBOOL UParticleModuleTypeDataTrail::HasUniqueStaticConfigName() const { return 1; }

int sub_00b4e270(void);
extern undefined4 g_0200c158;
// @baa 0x00b74b00
undefined4 * UParticleModuleTypeDataTrail::sub_00b74b00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00b4e270();
  *param_1 = (undefined4)(&g_0200c158);
  return param_1;
}

void sub_00b4cdd0();
// @baa 0x00b74b20
void sub_00b74b20(void) { sub_00b4cdd0(); }

// @baa 0x00b74b30
void UParticleModuleTypeDataTrail::vf_16c(void) {  }

// @baa 0x00b74b50
UBOOL UParticleModuleTypeDataBeam::HasUniqueStaticConfigName() const { return 1; }

extern undefined4 g_0200c1f8;
// @baa 0x00b74c10
undefined4 * UParticleModuleTypeDataBeam::sub_00b74c10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00b4e270();
  *param_1 = (undefined4)(&g_0200c1f8);
  return param_1;
}

// @baa 0x00b74c30
void sub_00b74c30(void) { sub_00b4cdd0(); }

// @baa 0x00b74c40
void UParticleModuleTypeDataBeam::vf_16c(void) {  }

// @baa 0x00b74c80
UBOOL UParticleModuleUberBase::IsCompatible(UParticleEmitter* a0) { return 0; }

// @baa 0x00b74c90
UBOOL UParticleModuleUberBase::ConvertToUberModule(UParticleEmitter* a0) { return 0; }

// @baa 0x00b74ca0
UBOOL UParticleModuleUberLTISIVCL::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b74cb0
UBOOL UParticleModuleUberLTISIVCL::ConvertToUberModule(UParticleEmitter* a0) { return 0; }

// @baa 0x00b753e0
UBOOL UParticleModuleUberLTISIVCLIL::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b753f0
UBOOL UParticleModuleUberLTISIVCLIL::ConvertToUberModule(UParticleEmitter* a0) { return 0; }

// @baa 0x00b75c70
UBOOL UParticleModuleUberLTISIVCLILIRSSBLIRR::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b75c80
UBOOL UParticleModuleUberLTISIVCLILIRSSBLIRR::ConvertToUberModule(UParticleEmitter* a0) { return 0; }

// @baa 0x00b76610
UBOOL UParticleModuleUberRainDrops::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b76630
void __stdcall sub_00b76630(int a0, int a1, int a2) {  }

// @baa 0x00b76640
void UParticleModuleUberRainDrops::Render3DPreview(FParticleEmitterInstance* a0, const FSceneView* a1, FPrimitiveDrawInterface* a2) {  }

// @baa 0x00b767f0
UBOOL UParticleModuleUberRainImpacts::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b76950
void UParticleModuleUberRainImpacts::Render3DPreview(FParticleEmitterInstance* a0, const FSceneView* a1, FPrimitiveDrawInterface* a2) {  }

// @baa 0x00b76b10
UBOOL UParticleModuleUberRainSplashA::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b76c70
UBOOL UParticleModuleUberRainSplashB::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b77000
UBOOL UParticleModuleVelocity::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b774d0
UBOOL UParticleModuleVelocityInheritParent::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b774e0
UBOOL UParticleModuleVelocityOverLifetime::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b777f0
UBOOL UParticleModuleColor::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b778c0
UBOOL UParticleModuleColorByParameter::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b778d0
UBOOL UParticleModuleColorOverLife::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b779a0
UBOOL UParticleModuleColorScaleOverLife::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b77a90
UBOOL UParticleModuleColorScaleOverDensity::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b77b50
UBOOL UParticleModuleKillBox::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b77f80
UBOOL UParticleModuleKillHeight::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b782f0
UBOOL UParticleModuleLifetime::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b783b0
UBOOL UParticleModuleAttractorLine::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b78900
UBOOL UParticleModuleAttractorParticle::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b78910
UINT UParticleModuleAttractorParticle::RequiredBytes(FParticleEmitterInstance* a0) { return 20; }

// @baa 0x00b78920
UBOOL UParticleModuleAttractorPoint::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b78ff0
UBOOL URParticleModuleAttractorComponent::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b79000
IMPLEMENT_CLASS_AT(URParticleAttractorComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 6471);

// @baa 0x00b79110
UBOOL URParticleAttractorComponent::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b79120
UBOOL URParticleAttractorComponent::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b79160
void URParticleModuleAttractorComponent::Render3DPreview(FParticleEmitterInstance* a0, const FSceneView* a1, FPrimitiveDrawInterface* a2) {  }

// @baa 0x00b79170
UBOOL UParticleModuleLocationVertex::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00b7a1a0
// @baa 0x00b7a1d0
// @baa 0x00b85570
// @baa 0x00b855d0
void sub_00b921f0();
// @baa 0x00b92360
void sub_00b92360(void) { sub_00b921f0(); }

void sub_0040fcc0();
// @baa 0x00b92370
void sub_00b92370(void) { sub_0040fcc0(); }

extern undefined * g_0200c608;
// @baa 0x00b97130
undefined4 * UObject::sub_00b97130(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200c608);
  return param_1;
}

// @baa 0x00b97150
IMPLEMENT_CLASS_AT(UParticleModuleAccelerationBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 15);

extern undefined * g_0200c770;
// @baa 0x00b971d0
undefined4 * UObject::sub_00b971d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200c770);
  return param_1;
}

// @baa 0x00b971f0
IMPLEMENT_CLASS_AT(UParticleModuleAttractorBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 16);

extern undefined * g_0200c8d8;
// @baa 0x00b97210
undefined4 * UObject::sub_00b97210(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200c8d8);
  return param_1;
}

// @baa 0x00b97290
IMPLEMENT_CLASS_AT(URParticleModuleAttractorComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 6470);

extern undefined * g_0200ca48;
// @baa 0x00b97310
undefined4 * UObject::sub_00b97310(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200ca48);
  return param_1;
}

// @baa 0x00b97330
IMPLEMENT_CLASS_AT(UParticleModuleColorBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 17);

extern undefined * g_0200cbb0;
// @baa 0x00b97350
undefined4 * UObject::sub_00b97350(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200cbb0);
  return param_1;
}

// @baa 0x00b973d0
IMPLEMENT_CLASS_AT(UParticleModuleColorByParameter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 5412);

extern undefined * g_0200cd18;
// @baa 0x00b97450
undefined4 * UObject::sub_00b97450(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200cd18);
  return param_1;
}

// @baa 0x00b97470
IMPLEMENT_CLASS_AT(UParticleModuleKillBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 18);

// @baa 0x00b974f0
FLOAT UParticleModuleLifetimeBase::GetMaxLifetime() {
  return (float10)0;
}

// @baa 0x00b97500
IMPLEMENT_CLASS_AT(UParticleModuleLifetimeBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 19);

extern undefined * g_0200ce80;
// @baa 0x00b97520
undefined4 * UObject::sub_00b97520(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200ce80);
  return param_1;
}

extern undefined * g_0200cff0;
// @baa 0x00b975a0
undefined4 * UObject::sub_00b975a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200cff0);
  return param_1;
}

// @baa 0x00b975c0
IMPLEMENT_CLASS_AT(UParticleModuleLocationBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 20);

extern undefined * g_0200d158;
// @baa 0x00b975e0
undefined4 * UObject::sub_00b975e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200d158);
  return param_1;
}

// @baa 0x00b97660
IMPLEMENT_CLASS_AT(UParticleModuleLocationEmitter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 756);

extern undefined * g_0200d2c0;
// @baa 0x00b97680
undefined4 * UObject::sub_00b97680(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200d2c0);
  return param_1;
}

// @baa 0x00b97700
IMPLEMENT_CLASS_AT(UParticleModuleLocationEmitterDirect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 857);

// @baa 0x00b977a0
IMPLEMENT_CLASS_AT(UParticleModuleLocationPrimitiveBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 941);

extern undefined * g_0200d598;
// @baa 0x00b977d0
undefined4 * UObject::sub_00b977d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200d598);
  return param_1;
}

// @baa 0x00b97850
IMPLEMENT_CLASS_AT(UParticleModuleLocationVertex, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 6717);

extern undefined * g_0200d708;
// @baa 0x00b978d0
undefined4 * UObject::sub_00b978d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200d708);
  return param_1;
}

// @baa 0x00b978f0
IMPLEMENT_CLASS_AT(UParticleModuleOrientationBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 21);

extern undefined * g_0200d870;
// @baa 0x00b97910
undefined4 * UObject::sub_00b97910(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200d870);
  return param_1;
}

// @baa 0x00b97930
IMPLEMENT_CLASS_AT(UParticleModuleOrientationAxisLock, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 1407);

// @baa 0x00b97990
// @baa 0x00b979b0
IMPLEMENT_CLASS_AT(UParticleModuleRotationBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 22);

extern undefined * g_0200d9e0;
// @baa 0x00b97a10
undefined4 * UObject::sub_00b97a10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200d9e0);
  return param_1;
}

// @baa 0x00b97a30
// @baa 0x00b97a50
IMPLEMENT_CLASS_AT(UParticleModuleRotationRateBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 23);

extern undefined * g_0200db48;
// @baa 0x00b97ab0
undefined4 * UObject::sub_00b97ab0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200db48);
  return param_1;
}

// @baa 0x00b97ad0
// @baa 0x00b97af0
IMPLEMENT_CLASS_AT(UParticleModuleSizeBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 24);

extern undefined * g_0200dcb0;
// @baa 0x00b97b50
undefined4 * UObject::sub_00b97b50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200dcb0);
  return param_1;
}

// @baa 0x00b97b70
// @baa 0x00b97b90
IMPLEMENT_CLASS_AT(UParticleModuleSubUVBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 25);

extern undefined * g_0200de18;
// @baa 0x00b97bf0
undefined4 * UObject::sub_00b97bf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200de18);
  return param_1;
}

// @baa 0x00b97c10
// @baa 0x00b97c30
IMPLEMENT_CLASS_AT(UParticleModuleUberBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 27);

// @baa 0x00b97ca0
extern undefined * g_0200df80;
// @baa 0x00b97cc0
undefined4 * UObject::sub_00b97cc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200df80);
  return param_1;
}

extern undefined * g_0200e0f0;
// @baa 0x00b97ce0
undefined4 * UObject::sub_00b97ce0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200e0f0);
  return param_1;
}

// @baa 0x00b97d00
IMPLEMENT_CLASS_AT(UParticleModuleUberRainDrops, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 3567);

// @baa 0x00b97d60
// @baa 0x00b97d90
IMPLEMENT_CLASS_AT(UParticleModuleVelocityBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 28);

extern undefined * g_0200e260;
// @baa 0x00b97df0
undefined4 * UObject::sub_00b97df0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200e260);
  return param_1;
}

// @baa 0x00b97e10
// @baa 0x00b9ac80
// @baa 0x00b9aca0
extern undefined * g_0200e518;
// @baa 0x00b9acc0
undefined4 * UObject::sub_00b9acc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200e518);
  return param_1;
}

// @baa 0x00b9ace0
IMPLEMENT_CLASS_AT(UParticleModuleAcceleration, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 2748);

// @baa 0x00b9ad50
extern undefined * g_0200e680;
// @baa 0x00b9ad70
undefined4 * UObject::sub_00b9ad70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200e680);
  return param_1;
}

// @baa 0x00b9ad90
IMPLEMENT_CLASS_AT(UParticleModuleAccelerationOverLifetime, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 2788);

// @baa 0x00b9ae00
// @baa 0x00b9ae20
extern undefined * g_0200e7e8;
// @baa 0x00b9ae40
undefined4 * UObject::sub_00b9ae40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200e7e8);
  return param_1;
}

// @baa 0x00b9ae60
IMPLEMENT_CLASS_AT(UParticleModuleAttractorLine, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 6012);

// @baa 0x00b9aee0
extern undefined * g_0200e950;
// @baa 0x00b9af10
undefined4 * UObject::sub_00b9af10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200e950);
  return param_1;
}

// @baa 0x00b9af30
IMPLEMENT_CLASS_AT(UParticleModuleAttractorParticle, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 6100);

// @baa 0x00b9afb0
extern undefined * g_0200eab8;
// @baa 0x00b9afe0
undefined4 * UObject::sub_00b9afe0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200eab8);
  return param_1;
}

// @baa 0x00b9b000
IMPLEMENT_CLASS_AT(UParticleModuleAttractorPoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 6301);

// @baa 0x00b9b090
// @baa 0x00b9b0c0
// @baa 0x00b9b0e0
extern undefined * g_0200ec20;
// @baa 0x00b9b100
undefined4 * UObject::sub_00b9b100(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200ec20);
  return param_1;
}

// @baa 0x00b9b120
IMPLEMENT_CLASS_AT(UParticleModuleColor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 5322);

// @baa 0x00b9b1a0
// @baa 0x00b9b1d0
extern undefined * g_0200ed88;
// @baa 0x00b9b1f0
undefined4 * UObject::sub_00b9b1f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200ed88);
  return param_1;
}

// @baa 0x00b9b210
IMPLEMENT_CLASS_AT(UParticleModuleColorOverLife, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 5481);

// @baa 0x00b9b290
extern undefined * g_0200eef0;
// @baa 0x00b9b2c0
undefined4 * UObject::sub_00b9b2c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200eef0);
  return param_1;
}

// @baa 0x00b9b2e0
IMPLEMENT_CLASS_AT(UParticleModuleColorScaleOverDensity, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 5756);

// @baa 0x00b9b360
extern undefined * g_0200f058;
// @baa 0x00b9b390
undefined4 * UObject::sub_00b9b390(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200f058);
  return param_1;
}

// @baa 0x00b9b3b0
IMPLEMENT_CLASS_AT(UParticleModuleColorScaleOverLife, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 5639);

// @baa 0x00b9b430
// @baa 0x00b9b460
extern undefined * g_0200f1c0;
// @baa 0x00b9b480
undefined4 * UObject::sub_00b9b480(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200f1c0);
  return param_1;
}

// @baa 0x00b9b4a0
IMPLEMENT_CLASS_AT(UParticleModuleKillBox, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 5839);

// @baa 0x00b9b520
extern undefined * g_0200f328;
// @baa 0x00b9b550
undefined4 * UObject::sub_00b9b550(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200f328);
  return param_1;
}

// @baa 0x00b9b570
IMPLEMENT_CLASS_AT(UParticleModuleKillHeight, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 5902);

// @baa 0x00b9b5e0
// @baa 0x00b9b600
extern undefined * g_0200f490;
// @baa 0x00b9b620
undefined4 * UObject::sub_00b9b620(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200f490);
  return param_1;
}

// @baa 0x00b9b640
IMPLEMENT_CLASS_AT(UParticleModuleLifetime, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 5965);

// @baa 0x00b9b6b0
// @baa 0x00b9b6d0
extern undefined * g_0200f600;
// @baa 0x00b9b6f0
undefined4 * UObject::sub_00b9b6f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200f600);
  return param_1;
}

// @baa 0x00b9b710
IMPLEMENT_CLASS_AT(UParticleModuleLocation, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 623);

// @baa 0x00b9b780
extern undefined * g_0200f768;
// @baa 0x00b9b7a0
undefined4 * UObject::sub_00b9b7a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200f768);
  return param_1;
}

// @baa 0x00b9b7c0
IMPLEMENT_CLASS_AT(UParticleModuleLocationDirect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 683);

// @baa 0x00b9b860
// @baa 0x00b9b890
// @baa 0x00b9b8b0
extern undefined * g_0200d428;
// @baa 0x00b9b8d0
undefined4 * UObject::sub_00b9b8d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200d428);
  return param_1;
}

extern undefined * g_0200f8d8;
// @baa 0x00b9b8f0
undefined4 * UObject::sub_00b9b8f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200f8d8);
  return param_1;
}

// @baa 0x00b9b910
IMPLEMENT_CLASS_AT(UParticleModuleLocationPrimitiveCylinder, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 1014);

// @baa 0x00b9b990
extern undefined * g_0200fa48;
// @baa 0x00b9b9c0
undefined4 * UObject::sub_00b9b9c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200fa48);
  return param_1;
}

// @baa 0x00b9b9e0
IMPLEMENT_CLASS_AT(UParticleModuleLocationPrimitiveSphere, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 1197);

// @baa 0x00b9ba50
// @baa 0x00b9ba80
extern undefined * g_0200fbb8;
// @baa 0x00b9baa0
undefined4 * UObject::sub_00b9baa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200fbb8);
  return param_1;
}

// @baa 0x00b9bac0
IMPLEMENT_CLASS_AT(URParticleModuleLocationSphereSection, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 1326);

// @baa 0x00b9bb90
// @baa 0x00b9bbc0
// @baa 0x00b9bbe0
extern undefined * g_0200fd28;
// @baa 0x00b9bc00
undefined4 * UObject::sub_00b9bc00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200fd28);
  return param_1;
}

// @baa 0x00b9bc20
void UParticleModuleRequired::AddModuleCurvesToEditor(UInterpCurveEdSetup* a0) {  }

// @baa 0x00b9bc30
EModuleType UParticleModuleRequired::GetModuleType() const { return EPMT_Required; }

// @baa 0x00b9bc40
IMPLEMENT_CLASS_AT(UParticleModuleRequired, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 1454);

// @baa 0x00b9bcd0
// @baa 0x00b9bd00
extern undefined * g_0200fe90;
// @baa 0x00b9bd20
undefined4 * UObject::sub_00b9bd20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200fe90);
  return param_1;
}

// @baa 0x00b9bd40
IMPLEMENT_CLASS_AT(UParticleModuleMeshRotation, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 1544);

// @baa 0x00b9bdb0
extern undefined4 g_0200fff8;
// @baa 0x00b9bdd0
undefined4 * UObject::sub_00b9bdd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200fff8);
  return param_1;
}

// @baa 0x00b9bdf0
IMPLEMENT_CLASS_AT(UParticleModuleRotation, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 1662);

// @baa 0x00b9be60
extern undefined * g_02010160;
// @baa 0x00b9be80
undefined4 * UObject::sub_00b9be80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02010160);
  return param_1;
}

// @baa 0x00b9bea0
IMPLEMENT_CLASS_AT(UParticleModuleRotationOverLifetime, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 1704);

// @baa 0x00b9bf10
// @baa 0x00b9bf30
extern undefined * g_020102c8;
// @baa 0x00b9bf50
undefined4 * UObject::sub_00b9bf50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020102c8);
  return param_1;
}

// @baa 0x00b9bf70
IMPLEMENT_CLASS_AT(UParticleModuleMeshRotationRate, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 1573);

// @baa 0x00b9bfe0
extern undefined * g_02010430;
// @baa 0x00b9c000
undefined4 * UObject::sub_00b9c000(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02010430);
  return param_1;
}

// @baa 0x00b9c020
IMPLEMENT_CLASS_AT(UParticleModuleMeshRotationRateMultiplyLife, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 1613);

// @baa 0x00b9c090
extern undefined * g_02010598;
// @baa 0x00b9c0b0
undefined4 * UObject::sub_00b9c0b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02010598);
  return param_1;
}

// @baa 0x00b9c0d0
IMPLEMENT_CLASS_AT(UParticleModuleRotationRate, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 1673);

// @baa 0x00b9c140
extern undefined * g_02010700;
// @baa 0x00b9c160
undefined4 * UObject::sub_00b9c160(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02010700);
  return param_1;
}

// @baa 0x00b9c180
IMPLEMENT_CLASS_AT(UParticleModuleRotationRateMultiplyLife, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 2706);

// @baa 0x00b9c1f0
// @baa 0x00b9c210
extern undefined * g_02010868;
// @baa 0x00b9c230
undefined4 * UObject::sub_00b9c230(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02010868);
  return param_1;
}

// @baa 0x00b9c250
IMPLEMENT_CLASS_AT(UParticleModuleSize, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 1733);

// @baa 0x00b9c2c0
extern undefined * g_020109d0;
// @baa 0x00b9c2e0
undefined4 * UObject::sub_00b9c2e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020109d0);
  return param_1;
}

// @baa 0x00b9c300
UBOOL UParticleModuleSizeMultiplyLife::IsSizeMultiplyLife() { return 1; }

// @baa 0x00b9c310
IMPLEMENT_CLASS_AT(UParticleModuleSizeMultiplyLife, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 1806);

// @baa 0x00b9c380
extern undefined * g_02010b38;
// @baa 0x00b9c3a0
undefined4 * UObject::sub_00b9c3a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02010b38);
  return param_1;
}

// @baa 0x00b9c3c0
IMPLEMENT_CLASS_AT(UParticleModuleSizeMultiplyVelocity, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 1746);

// @baa 0x00b9c430
extern undefined * g_02010ca0;
// @baa 0x00b9c450
undefined4 * UObject::sub_00b9c450(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02010ca0);
  return param_1;
}

// @baa 0x00b9c470
IMPLEMENT_CLASS_AT(UParticleModuleSizeScale, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 1902);

// @baa 0x00b9c4e0
// @baa 0x00b9c500
extern undefined * g_02010e08;
// @baa 0x00b9c520
undefined4 * UObject::sub_00b9c520(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02010e08);
  return param_1;
}

// @baa 0x00b9c540
IMPLEMENT_CLASS_AT(UParticleModuleSubUV, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 1931);

// @baa 0x00b9c5b0
extern undefined * g_02010f80;
// @baa 0x00b9c5d0
undefined4 * UObject::sub_00b9c5d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02010f80);
  return param_1;
}

// @baa 0x00b9c5f0
IMPLEMENT_CLASS_AT(UParticleModuleSubUVDirect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 2591);

// @baa 0x00b9c670
extern undefined * g_020110f0;
// @baa 0x00b9c6a0
undefined4 * UObject::sub_00b9c6a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020110f0);
  return param_1;
}

// @baa 0x00b9c6c0
IMPLEMENT_CLASS_AT(UParticleModuleSubUVSelect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 2402);

// @baa 0x00b9c730
// @baa 0x00b9c750
IMPLEMENT_CLASS_AT(UParticleModuleTypeDataBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 26);

extern undefined * g_02011260;
// @baa 0x00b9c770
undefined4 * UObject::sub_00b9c770(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02011260);
  return param_1;
}

// @baa 0x00b9c790
IMPLEMENT_CLASS_AT(UParticleModuleTypeDataBeam, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 2891);

// @baa 0x00b9c840
// @baa 0x00b9c870
IMPLEMENT_CLASS_AT(UParticleModuleTypeDataMesh, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 2815);

extern undefined * g_020113e0;
// @baa 0x00b9c890
undefined4 * UObject::sub_00b9c890(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020113e0);
  return param_1;
}

// @baa 0x00b9c8b0
IMPLEMENT_CLASS_AT(UParticleModuleTypeDataTrail, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 2866);

// @baa 0x00b9c920
// @baa 0x00b9c940
extern undefined * g_02011560;
// @baa 0x00b9c960
undefined4 * UObject::sub_00b9c960(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02011560);
  return param_1;
}

// @baa 0x00b9c980
IMPLEMENT_CLASS_AT(UParticleModuleUberLTISIVCL, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 3019);

// @baa 0x00b9ca40
extern undefined * g_020116d0;
// @baa 0x00b9ca70
undefined4 * UObject::sub_00b9ca70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020116d0);
  return param_1;
}

// @baa 0x00b9ca90
IMPLEMENT_CLASS_AT(UParticleModuleUberLTISIVCLIL, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 3160);

// @baa 0x00b9cb60
extern undefined * g_02011840;
// @baa 0x00b9cb90
undefined4 * UObject::sub_00b9cb90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02011840);
  return param_1;
}

// @baa 0x00b9cbb0
IMPLEMENT_CLASS_AT(UParticleModuleUberLTISIVCLILIRSSBLIRR, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 3330);

// @baa 0x00b9ccb0
// @baa 0x00b9cce0
extern undefined * g_020119b0;
// @baa 0x00b9cd00
undefined4 * UObject::sub_00b9cd00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020119b0);
  return param_1;
}

// @baa 0x00b9cd20
IMPLEMENT_CLASS_AT(UParticleModuleUberRainImpacts, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 4099);

// @baa 0x00b9ce20
extern undefined * g_02011b20;
// @baa 0x00b9ce50
undefined4 * UObject::sub_00b9ce50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02011b20);
  return param_1;
}

// @baa 0x00b9ce70
IMPLEMENT_CLASS_AT(UParticleModuleUberRainSplashA, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 4642);

// @baa 0x00b9cf30
extern undefined * g_02011c90;
// @baa 0x00b9cf60
undefined4 * UObject::sub_00b9cf60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02011c90);
  return param_1;
}

// @baa 0x00b9cf80
IMPLEMENT_CLASS_AT(UParticleModuleUberRainSplashB, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 4935);

// @baa 0x00b9d040
// @baa 0x00b9d070
extern undefined * g_02011e00;
// @baa 0x00b9d090
undefined4 * UObject::sub_00b9d090(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02011e00);
  return param_1;
}

// @baa 0x00b9d0b0
IMPLEMENT_CLASS_AT(UParticleModuleVelocity, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 5210);

// @baa 0x00b9d130
extern undefined * g_02011f68;
// @baa 0x00b9d160
undefined4 * UObject::sub_00b9d160(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02011f68);
  return param_1;
}

// @baa 0x00b9d180
IMPLEMENT_CLASS_AT(UParticleModuleVelocityInheritParent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 5240);

// @baa 0x00b9d1f0
extern undefined * g_020120d0;
// @baa 0x00b9d210
undefined4 * UObject::sub_00b9d210(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020120d0);
  return param_1;
}

// @baa 0x00b9d230
IMPLEMENT_CLASS_AT(UParticleModuleVelocityOverLifetime, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 5270);

// @baa 0x00b9d2a0
// @baa 0x00b9d2c0
// @baa 0x00b9d380
// @baa 0x00b9d440
// @baa 0x00b9d500
// @baa 0x00b9d5c0
// @baa 0x00b9d680
// @baa 0x00b9d740
// @baa 0x00b9d800
// @baa 0x00b9d8c0
// @baa 0x00b9d980
// @baa 0x00b9da40
// @baa 0x00b9db00
// @baa 0x00b9dbc0
// @baa 0x00b9dc80
// @baa 0x00b9dd40
// @baa 0x00b9de00
// @baa 0x00b9dec0
// @baa 0x00b9df80
// @baa 0x00b9e040
// @baa 0x00b9e100
// @baa 0x00b9e1c0
// @baa 0x00b9e280
// @baa 0x00b9e340
// @baa 0x00b9e780
// @baa 0x00b9e7a0
// @baa 0x00b9e7c0
// @baa 0x00b9e7e0
// @baa 0x00b9e800
// @baa 0x00b9e820
// @baa 0x00b9e840
// @baa 0x00b9e860
// @baa 0x00b9e880
// @baa 0x00b9e8a0
// @baa 0x00b9e8c0
// @baa 0x00b9e8e0
// @baa 0x00b9e900
// @baa 0x00b9e920
// @baa 0x00b9e940
// @baa 0x00b9e960
// @baa 0x00b9e980
// @baa 0x00b9e9a0
// @baa 0x00b9e9c0
// @baa 0x00b9e9e0
// @baa 0x00b9ea00
// @baa 0x00b9ea20
// @baa 0x00b9ea40
// @baa 0x00b9ea60
// @baa 0x00b9ea80
// @baa 0x00b9eaa0
// @baa 0x00b9eac0
// @baa 0x00b9eae0
// @baa 0x00b9eb00
// @baa 0x00b9eb20
// @baa 0x00b9eb40
// @baa 0x00b9eb60
// @baa 0x00b9eb80
// @baa 0x00b9eba0
// @baa 0x00b9ebc0
// @baa 0x00b9ebe0
// @baa 0x00b9ec00
// @baa 0x00b9ec20
// @baa 0x00b9ec40
// @baa 0x00b9ec60
// @baa 0x00b9ec80
// @baa 0x00b9eca0
// @baa 0x00b9ecc0
// @baa 0x00b9ece0
// @baa 0x00b9ed00
// @baa 0x00b9ed20
// @baa 0x00b9ee30
UBOOL UParticleModuleAccelerationBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b9ee70
// @baa 0x00b9ef80
UBOOL UParticleModuleAttractorBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b9efc0
// @baa 0x00b9f0d0
UBOOL UParticleModuleColorBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b9f110
// @baa 0x00b9f220
UBOOL UParticleModuleKillBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b9f260
// @baa 0x00b9f370
UBOOL UParticleModuleLifetimeBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b9f3b0
// @baa 0x00b9f4c0
UBOOL UParticleModuleLocationBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b9f500
// @baa 0x00b9f610
UBOOL UParticleModuleOrientationBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b9f650
// @baa 0x00b9f760
UBOOL UParticleModuleRotationBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b9f7a0
// @baa 0x00b9f8b0
UBOOL UParticleModuleRotationRateBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b9f8f0
// @baa 0x00b9fa00
UBOOL UParticleModuleSizeBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b9fa40
// @baa 0x00b9fb50
UBOOL UParticleModuleSubUVBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b9fb90
// @baa 0x00b9fca0
UBOOL UParticleModuleTypeDataBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b9fce0
// @baa 0x00b9fdf0
UBOOL UParticleModuleUberBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b9fe30
// @baa 0x00b9ff40
UBOOL UParticleModuleVelocityBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba04b0
// @baa 0x00ba0570
// @baa 0x00ba0630
// @baa 0x00ba06f0
// @baa 0x00ba07b0
// @baa 0x00ba0870
// @baa 0x00ba0930
// @baa 0x00ba09f0
// @baa 0x00ba0b00
UBOOL UParticleModuleRequired::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba0b40
// @baa 0x00ba0c00
// @baa 0x00ba0cc0
// @baa 0x00ba0d80
// @baa 0x00ba0e40
// @baa 0x00ba0f00
// @baa 0x00ba0fc0
// @baa 0x00ba1080
// @baa 0x00ba1140
// @baa 0x00ba1200
// @baa 0x00ba12c0
// @baa 0x00ba1380
// @baa 0x00ba1440
// @baa 0x00ba1500
// @baa 0x00ba15c0
// @baa 0x00ba1680
// @baa 0x00ba1740
// @baa 0x00ba1800
// @baa 0x00ba18c0
// @baa 0x00ba1980
// @baa 0x00ba1a40
// @baa 0x00ba1b00
// @baa 0x00ba1bc0
// @baa 0x00ba1c80
// @baa 0x00ba1d40
// @baa 0x00ba1e00
// @baa 0x00ba1ec0
// @baa 0x00ba1f80
// @baa 0x00ba2040
// @baa 0x00ba2100
// @baa 0x00ba21c0
// @baa 0x00ba2280
// @baa 0x00ba2340
// @baa 0x00ba2400
// @baa 0x00ba24c0
// @baa 0x00ba2580
// @baa 0x00ba2640
// @baa 0x00ba2700
// @baa 0x00ba2840
int sub_00ba2840(void) { return 0; }

// @baa 0x00ba2850
char* UParticleModuleUberLTISIVCL::sub_00ba2850(void) { return (char*)this + 20; }

int sub_00b9d2c0(...);
int sub_00b9ed20(void);
extern undefined4 g_026bf720;
// @baa 0x00ba2bc0
int sub_00ba2bc0(void)
{
  if (g_026bf720 == 0) {
    g_026bf720 = sub_00b9d2c0(L"Engine");
    sub_00b9ed20();
  }
  return g_026bf720;
}

int sub_00b9d380(...);
int sub_00b9ee70(void);
extern undefined4 g_026bf724;
// @baa 0x00ba2bf0
int sub_00ba2bf0(void)
{
  if (g_026bf724 == 0) {
    g_026bf724 = sub_00b9d380(L"Engine");
    sub_00b9ee70();
  }
  return g_026bf724;
}

int sub_00b9d440(...);
int sub_00b9efc0(void);
extern undefined4 g_026bf728;
// @baa 0x00ba2c20
int sub_00ba2c20(void)
{
  if (g_026bf728 == 0) {
    g_026bf728 = sub_00b9d440(L"Engine");
    sub_00b9efc0();
  }
  return g_026bf728;
}

int sub_00b9d500(...);
int sub_00b9f110(void);
extern undefined4 g_026bf72c;
// @baa 0x00ba2c50
int sub_00ba2c50(void)
{
  if (g_026bf72c == 0) {
    g_026bf72c = sub_00b9d500(L"Engine");
    sub_00b9f110();
  }
  return g_026bf72c;
}

int sub_00b9d5c0(...);
int sub_00b9f260(void);
extern undefined4 g_026bf730;
// @baa 0x00ba2c80
int sub_00ba2c80(void)
{
  if (g_026bf730 == 0) {
    g_026bf730 = sub_00b9d5c0(L"Engine");
    sub_00b9f260();
  }
  return g_026bf730;
}

int sub_00b9d680(...);
int sub_00b9f3b0(void);
extern undefined4 g_026bf734;
// @baa 0x00ba2cb0
int sub_00ba2cb0(void)
{
  if (g_026bf734 == 0) {
    g_026bf734 = sub_00b9d680(L"Engine");
    sub_00b9f3b0();
  }
  return g_026bf734;
}

int sub_00b9d740(...);
int sub_00b9f500(void);
extern undefined4 g_026bf738;
// @baa 0x00ba2ce0
int sub_00ba2ce0(void)
{
  if (g_026bf738 == 0) {
    g_026bf738 = sub_00b9d740(L"Engine");
    sub_00b9f500();
  }
  return g_026bf738;
}

int sub_00b9d800(...);
int sub_00b9f650(void);
extern undefined4 g_026bf73c;
// @baa 0x00ba2d10
int sub_00ba2d10(void)
{
  if (g_026bf73c == 0) {
    g_026bf73c = sub_00b9d800(L"Engine");
    sub_00b9f650();
  }
  return g_026bf73c;
}

int sub_00b9d8c0(...);
int sub_00b9f7a0(void);
extern undefined4 g_026bf740;
// @baa 0x00ba2d40
int sub_00ba2d40(void)
{
  if (g_026bf740 == 0) {
    g_026bf740 = sub_00b9d8c0(L"Engine");
    sub_00b9f7a0();
  }
  return g_026bf740;
}

int sub_00b9d980(...);
int sub_00b9f8f0(void);
extern undefined4 g_026bf744;
// @baa 0x00ba2d70
int sub_00ba2d70(void)
{
  if (g_026bf744 == 0) {
    g_026bf744 = sub_00b9d980(L"Engine");
    sub_00b9f8f0();
  }
  return g_026bf744;
}

int sub_00b9da40(...);
int sub_00b9fa40(void);
extern undefined4 g_026bf748;
// @baa 0x00ba2da0
int sub_00ba2da0(void)
{
  if (g_026bf748 == 0) {
    g_026bf748 = sub_00b9da40(L"Engine");
    sub_00b9fa40();
  }
  return g_026bf748;
}

int sub_00b9dbc0(...);
int sub_00b9fce0(void);
extern undefined4 g_026bf750;
// @baa 0x00ba2dd0
int sub_00ba2dd0(void)
{
  if (g_026bf750 == 0) {
    g_026bf750 = sub_00b9dbc0(L"Engine");
    sub_00b9fce0();
  }
  return g_026bf750;
}

int sub_00b9dc80(...);
int sub_00b9fe30(void);
extern undefined4 g_026bf754;
// @baa 0x00ba2e00
int sub_00ba2e00(void)
{
  if (g_026bf754 == 0) {
    g_026bf754 = sub_00b9dc80(L"Engine");
    sub_00b9fe30();
  }
  return g_026bf754;
}

// @baa 0x00ba2f50
// @baa 0x00ba3060
UBOOL UParticleModuleLocation::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba30a0
// @baa 0x00ba31b0
UBOOL UParticleModuleLocationDirect::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba31f0
// @baa 0x00ba3300
UBOOL UParticleModuleLocationEmitter::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba3340
// @baa 0x00ba3450
UBOOL UParticleModuleLocationEmitterDirect::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba3490
// @baa 0x00ba35a0
UBOOL UParticleModuleLocationPrimitiveBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba35e0
// @baa 0x00ba36f0
UBOOL URParticleModuleLocationSphereSection::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba3730
// @baa 0x00ba3840
UBOOL UParticleModuleOrientationAxisLock::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba3880
// @baa 0x00ba3990
UBOOL UParticleModuleMeshRotation::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba39d0
// @baa 0x00ba3ae0
UBOOL UParticleModuleMeshRotationRate::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba3b20
// @baa 0x00ba3c30
UBOOL UParticleModuleMeshRotationRateMultiplyLife::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba3c70
// @baa 0x00ba3d80
UBOOL UParticleModuleRotation::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba3dc0
// @baa 0x00ba3ed0
UBOOL UParticleModuleRotationRate::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba3f10
// @baa 0x00ba4020
UBOOL UParticleModuleRotationOverLifetime::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba4060
// @baa 0x00ba4170
UBOOL UParticleModuleSize::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba41b0
// @baa 0x00ba42c0
UBOOL UParticleModuleSizeMultiplyVelocity::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba4300
// @baa 0x00ba4410
UBOOL UParticleModuleSizeMultiplyLife::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba4450
// @baa 0x00ba4560
UBOOL UParticleModuleSizeScale::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba45a0
// @baa 0x00ba46b0
UBOOL UParticleModuleSubUV::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba46f0
// @baa 0x00ba4800
UBOOL UParticleModuleSubUVSelect::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba4840
// @baa 0x00ba4950
UBOOL UParticleModuleSubUVDirect::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba4990
// @baa 0x00ba4aa0
UBOOL UParticleModuleRotationRateMultiplyLife::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba4ae0
// @baa 0x00ba4bf0
UBOOL UParticleModuleAcceleration::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba4c30
// @baa 0x00ba4d40
UBOOL UParticleModuleAccelerationOverLifetime::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba4d80
// @baa 0x00ba4e90
UBOOL UParticleModuleTypeDataMesh::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba4ed0
// @baa 0x00ba4fe0
UBOOL UParticleModuleTypeDataTrail::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba5020
// @baa 0x00ba5130
UBOOL UParticleModuleTypeDataBeam::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba5170
// @baa 0x00ba5280
UBOOL UParticleModuleUberLTISIVCL::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba52c0
// @baa 0x00ba53d0
UBOOL UParticleModuleUberLTISIVCLIL::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba5410
// @baa 0x00ba5520
UBOOL UParticleModuleUberLTISIVCLILIRSSBLIRR::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba5560
// @baa 0x00ba5670
UBOOL UParticleModuleUberRainDrops::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba56b0
// @baa 0x00ba57c0
UBOOL UParticleModuleUberRainImpacts::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba5800
// @baa 0x00ba5910
UBOOL UParticleModuleUberRainSplashA::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba5950
// @baa 0x00ba5a60
UBOOL UParticleModuleUberRainSplashB::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba5aa0
// @baa 0x00ba5bb0
UBOOL UParticleModuleVelocity::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba5bf0
// @baa 0x00ba5d00
UBOOL UParticleModuleVelocityInheritParent::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba5d40
// @baa 0x00ba5e50
UBOOL UParticleModuleVelocityOverLifetime::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba5e90
// @baa 0x00ba5fa0
UBOOL UParticleModuleColor::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba5fe0
// @baa 0x00ba60f0
UBOOL UParticleModuleColorByParameter::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba6130
// @baa 0x00ba6240
UBOOL UParticleModuleColorOverLife::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba6280
// @baa 0x00ba6390
UBOOL UParticleModuleColorScaleOverLife::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba63d0
// @baa 0x00ba64e0
UBOOL UParticleModuleColorScaleOverDensity::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba6520
// @baa 0x00ba6630
UBOOL UParticleModuleKillBox::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba6670
// @baa 0x00ba6780
UBOOL UParticleModuleKillHeight::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba67c0
// @baa 0x00ba68d0
UBOOL UParticleModuleLifetime::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba6910
// @baa 0x00ba6a20
UBOOL UParticleModuleAttractorLine::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba6a60
// @baa 0x00ba6b70
UBOOL UParticleModuleAttractorParticle::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba6bb0
// @baa 0x00ba6cc0
UBOOL UParticleModuleAttractorPoint::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba6d00
// @baa 0x00ba6e10
UBOOL URParticleModuleAttractorComponent::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba6e50
// @baa 0x00ba6f60
UBOOL UParticleModuleLocationVertex::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_00ba2860(void);
// @baa 0x00ba6fa0
undefined4 UParticleModuleUberLTISIVCL::sub_00ba6fa0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ba2860();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00b9e280(...);
int sub_00ba6d00(void);
extern undefined4 g_026bf82c;
// @baa 0x00ba7020
int sub_00ba7020(void)
{
  if (g_026bf82c == 0) {
    g_026bf82c = sub_00b9e280(L"Engine");
    sub_00ba6d00();
  }
  return g_026bf82c;
}

int sub_00ba2040(...);
int sub_00ba6130(void);
extern undefined4 g_026bf808;
// @baa 0x00ba7050
int sub_00ba7050(void)
{
  if (g_026bf808 == 0) {
    g_026bf808 = sub_00ba2040(L"Engine");
    sub_00ba6130();
  }
  return g_026bf808;
}

int sub_00ba04b0(...);
int sub_00ba2f50(void);
extern undefined4 g_026bf764;
// @baa 0x00ba7080
int sub_00ba7080(void)
{
  if (g_026bf764 == 0) {
    g_026bf764 = sub_00ba04b0(L"Engine");
    sub_00ba2f50();
  }
  return g_026bf764;
}

int sub_00ba0630(...);
int sub_00ba3490(void);
extern undefined4 g_026bf774;
// @baa 0x00ba70b0
int sub_00ba70b0(void)
{
  if (g_026bf774 == 0) {
    g_026bf774 = sub_00ba0630(L"Engine");
    sub_00ba3490();
  }
  return g_026bf774;
}

int sub_00ba0e40(...);
int sub_00ba3dc0(void);
extern undefined4 g_026bf79c;
// @baa 0x00ba70e0
int sub_00ba70e0(void)
{
  if (g_026bf79c == 0) {
    g_026bf79c = sub_00ba0e40(L"Engine");
    sub_00ba3dc0();
  }
  return g_026bf79c;
}

int sub_00ba1140(...);
int sub_00ba4300(void);
extern undefined4 g_026bf7ac;
// @baa 0x00ba7110
int sub_00ba7110(void)
{
  if (g_026bf7ac == 0) {
    g_026bf7ac = sub_00ba1140(L"Engine");
    sub_00ba4300();
  }
  return g_026bf7ac;
}

int sub_00ba18c0(...);
int sub_00ba5170(void);
extern undefined4 g_026bf7d8;
// @baa 0x00ba7140
int sub_00ba7140(void)
{
  if (g_026bf7d8 == 0) {
    g_026bf7d8 = sub_00ba18c0(L"Engine");
    sub_00ba5170();
  }
  return g_026bf7d8;
}

int sub_00ba1980(...);
int sub_00ba52c0(void);
extern undefined4 g_026bf7dc;
// @baa 0x00ba7170
int sub_00ba7170(void)
{
  if (g_026bf7dc == 0) {
    g_026bf7dc = sub_00ba1980(L"Engine");
    sub_00ba52c0();
  }
  return g_026bf7dc;
}

int sub_00ba1a40(...);
int sub_00ba5410(void);
extern undefined4 g_026bf7e0;
// @baa 0x00ba71a0
int sub_00ba71a0(void)
{
  if (g_026bf7e0 == 0) {
    g_026bf7e0 = sub_00ba1a40(L"Engine");
    sub_00ba5410();
  }
  return g_026bf7e0;
}

// @baa 0x00ba71d0
// @baa 0x00ba72e0
UBOOL UParticleModuleLocationPrimitiveCylinder::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ba7320
// @baa 0x00ba7430
UBOOL UParticleModuleLocationPrimitiveSphere::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_00ba06f0(...);
int sub_00ba71d0(void);
extern undefined4 g_026bf778;
// @baa 0x00ba8020
int sub_00ba8020(void)
{
  if (g_026bf778 == 0) {
    g_026bf778 = sub_00ba06f0(L"Engine");
    sub_00ba71d0();
  }
  return g_026bf778;
}

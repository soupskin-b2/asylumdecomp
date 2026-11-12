// UFactory.cpp: 199 functions
// Placed here by: neighbours 113, class 83, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x005b1550
UFactory::UFactory()
{
    *(DWORD*)((BYTE*)this + 0x50) &= 0xfffffffb;
}

IMPLEMENT_CLASS_AT(UFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UFactory.cpp", 329);
// @baa 0x005b15e0
int UFactory::vf_110(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10) { return 0; }

// @baa 0x005b15f0
int UFactory::vf_114(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10) { return 0; }

// @baa 0x005b1600
UObject* UFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn) { return 0; }

// @baa 0x005b1610
int UFactory::vf_11c(int a0) { return 0; }

// @baa 0x005b1620
int sub_0060b3d0(void);
extern undefined * g_01e8c3d8;
// @baa 0x005b3730
undefined4 * UFactory::sub_005b3730(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_01e8c3d8);
  return param_1;
}

// @baa 0x005fbdd0
int UFactory::sub_005fbdd0(void) { return *(int*)((char*)this + 48); }

int sub_006311e0(...);
extern undefined4 g_01ea43b0;
// @baa 0x005fbde0
INT UFactory::vf_10c() {
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x30) == 0) {
    sub_006311e0("SupportedClass",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UFactory.cpp"
                 ,0x38,&g_01ea43b0);
  }
  return *(undefined4 *)(param_1 + 0x30);
}

// @baa 0x005fbe10
int sub_005fbe10(int param_1, int param_2)
{
  return *(int *)(param_1 + 0x54) - *(int *)(param_2 + 0x54);
}

// @baa 0x005fbe20
// @baa 0x005fbf30
int UFactory::vf_000(void) { return 1; }

// @baa 0x005fbf40
bool UFactory::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0060b3d0
// @baa 0x0060ebc0
// @baa 0x0060f890
extern undefined * g_0214d0a0;
// @baa 0x00f31ba0
undefined4 * UFactory::sub_00f31ba0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0214d0a0);
  return param_1;
}

// @baa 0x00f31bc0
IMPLEMENT_CLASS_AT(UTextureCubeFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 61);

// @baa 0x00f31c20
extern undefined * g_0214d1c8;
// @baa 0x00f31c40
undefined4 * UFactory::sub_00f31c40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0214d1c8);
  return param_1;
}

// @baa 0x00f31c60
IMPLEMENT_CLASS_AT(UMaterialInstanceConstantFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 96);

// @baa 0x00f31cc0
extern undefined * g_0214d2f0;
// @baa 0x00f31ce0
undefined4 * UFactory::sub_00f31ce0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0214d2f0);
  return param_1;
}

// @baa 0x00f31d00
IMPLEMENT_CLASS_AT(UMaterialInstanceTimeVaryingFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 133);

// @baa 0x00f31d60
extern undefined * g_0214d418;
// @baa 0x00f31d80
undefined4 * UFactory::sub_00f31d80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0214d418);
  return param_1;
}

// @baa 0x00f31da0
IMPLEMENT_CLASS_AT(UMaterialFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 740);

// @baa 0x00f31e00
extern undefined * g_0214d540;
// @baa 0x00f31e20
undefined4 * UFactory::sub_00f31e20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0214d540);
  return param_1;
}

// @baa 0x00f31e40
IMPLEMENT_CLASS_AT(UMaterialFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 775);

// @baa 0x00f31ea0
extern undefined * g_0214d668;
// @baa 0x00f31ec0
undefined4 * UFactory::sub_00f31ec0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0214d668);
  return param_1;
}

// @baa 0x00f31ee0
IMPLEMENT_CLASS_AT(UDecalMaterialFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 802);

// @baa 0x00f31f40
// @baa 0x00f31f60
UStaticMeshFactory::UStaticMeshFactory()
{
    *(DWORD*)((BYTE*)this + 0x50) |= 0x4;
}

IMPLEMENT_CLASS_AT(UStaticMeshFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnStaticMeshEdit.cpp", 2399);
// @baa 0x00f31fc0
// @baa 0x00f31fe0
IMPLEMENT_CLASS_AT(USkeletalMeshFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnMeshEd.cpp", 1044);

// @baa 0x00f32040
// @baa 0x00f32060
IMPLEMENT_CLASS_AT(USoundFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 3808);

// @baa 0x00f320c0
// @baa 0x00f32100
IMPLEMENT_CLASS_AT(USoundTTSFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 3592);

// @baa 0x00f32170
extern undefined * g_0214dc30;
// @baa 0x00f321a0
undefined4 * UFactory::sub_00f321a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0214dc30);
  return param_1;
}

// @baa 0x00f321c0
IMPLEMENT_CLASS_AT(USoundCueFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4057);

// @baa 0x00f32220
extern undefined * g_0214dd58;
// @baa 0x00f32240
undefined4 * UFactory::sub_00f32240(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0214dd58);
  return param_1;
}

// @baa 0x00f32260
IMPLEMENT_CLASS_AT(ULensFlareFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4159);

// @baa 0x00f322c0
extern undefined * g_0214de80;
// @baa 0x00f322e0
undefined4 * UFactory::sub_00f322e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0214de80);
  return param_1;
}

// @baa 0x00f32300
IMPLEMENT_CLASS_AT(UParticleSystemFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4186);

// @baa 0x00f32360
extern undefined * g_0214dfa8;
// @baa 0x00f32380
undefined4 * UFactory::sub_00f32380(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0214dfa8);
  return param_1;
}

// @baa 0x00f323a0
IMPLEMENT_CLASS_AT(UDestructibleDamageParametersFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4373);

// @baa 0x00f32400
extern undefined * g_0214e0d0;
// @baa 0x00f32420
undefined4 * UFactory::sub_00f32420(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0214e0d0);
  return param_1;
}

// @baa 0x00f32440
IMPLEMENT_CLASS_AT(UPhysXParticleSystemFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4401);

// @baa 0x00f324a0
extern undefined * g_0214e1f8;
// @baa 0x00f324c0
undefined4 * UFactory::sub_00f324c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0214e1f8);
  return param_1;
}

extern undefined * g_0214e320;
// @baa 0x00f32560
undefined4 * UFactory::sub_00f32560(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0214e320);
  return param_1;
}

// @baa 0x00f32580
IMPLEMENT_CLASS_AT(UAnimTreeFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4455);

// @baa 0x00f325e0
extern undefined * g_0214e448;
// @baa 0x00f32600
undefined4 * UFactory::sub_00f32600(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0214e448);
  return param_1;
}

// @baa 0x00f32620
IMPLEMENT_CLASS_AT(UPostProcessFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4482);

// @baa 0x00f32680
extern undefined * g_0214e570;
// @baa 0x00f326a0
undefined4 * UFactory::sub_00f326a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0214e570);
  return param_1;
}

// @baa 0x00f326c0
IMPLEMENT_CLASS_AT(UPhysicalMaterialFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4509);

// @baa 0x00f32720
extern undefined * g_0214e698;
// @baa 0x00f32740
undefined4 * UFactory::sub_00f32740(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0214e698);
  return param_1;
}

// @baa 0x00f32760
IMPLEMENT_CLASS_AT(UCurveEdPresetCurveFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 8446);

// @baa 0x00f327c0
extern undefined * g_0214e7c0;
// @baa 0x00f327e0
undefined4 * UFactory::sub_00f327e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0214e7c0);
  return param_1;
}

// @baa 0x00f32800
IMPLEMENT_CLASS_AT(UCameraAnimFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 8483);

// @baa 0x00f32860
extern undefined * g_0214e8e8;
// @baa 0x00f32880
undefined4 * UFactory::sub_00f32880(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0214e8e8);
  return param_1;
}

// @baa 0x00f328a0
IMPLEMENT_CLASS_AT(UClassFactoryUC, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 1627);

// @baa 0x00f32900
extern undefined * g_0214ea10;
// @baa 0x00f32920
undefined4 * UFactory::sub_00f32920(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  param_1[0x14] = param_1[0x14] | 4;
  *param_1 = (undefined4)(&g_0214ea10);
  return param_1;
}

// @baa 0x00f32940
IMPLEMENT_CLASS_AT(ULevelFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 2211);

// @baa 0x00f329a0
extern undefined * g_0214eb38;
// @baa 0x00f329c0
undefined4 * UFactory::sub_00f329c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  param_1[0x14] = param_1[0x14] | 4;
  *param_1 = (undefined4)(&g_0214eb38);
  return param_1;
}

// @baa 0x00f329e0
IMPLEMENT_CLASS_AT(UPackageFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 2757);

// @baa 0x00f32a40
extern undefined * g_0214ec60;
// @baa 0x00f32a60
undefined4 * UFactory::sub_00f32a60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0214ec60);
  return param_1;
}

// @baa 0x00f32a80
IMPLEMENT_CLASS_AT(UPolysFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 3427);

// @baa 0x00f32ae0
extern undefined * g_0214ed88;
// @baa 0x00f32b00
undefined4 * UFactory::sub_00f32b00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0214ed88);
  return param_1;
}

// @baa 0x00f32b20
IMPLEMENT_CLASS_AT(UModelFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 3499);

// @baa 0x00f32b80
extern undefined * g_0214d9e0;
// @baa 0x00f32ba0
undefined4 * UFactory::sub_00f32ba0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  param_1[0x14] = param_1[0x14] | 4;
  *param_1 = (undefined4)(&g_0214d9e0);
  return param_1;
}

extern undefined * g_0214eeb0;
// @baa 0x00f32bc0
undefined4 * UFactory::sub_00f32bc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  param_1[0x14] = param_1[0x14] | 4;
  *param_1 = (undefined4)(&g_0214eeb0);
  return param_1;
}

// @baa 0x00f32be0
IMPLEMENT_CLASS_AT(USoundSurroundFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4028);

// @baa 0x00f32c40
extern undefined * g_0214efd8;
// @baa 0x00f32c60
undefined4 * UFactory::sub_00f32c60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0214efd8);
  return param_1;
}

// @baa 0x00f32c80
IMPLEMENT_CLASS_AT(USoundModeFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4098);

// @baa 0x00f32ce0
extern undefined * g_0214f100;
// @baa 0x00f32d00
undefined4 * UFactory::sub_00f32d00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0214f100);
  return param_1;
}

// @baa 0x00f32d20
IMPLEMENT_CLASS_AT(UFonixFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4131);

// @baa 0x00f32d80
extern undefined * g_0214f228;
// @baa 0x00f32da0
undefined4 * UFactory::sub_00f32da0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  param_1[0x14] = param_1[0x14] | 4;
  *param_1 = (undefined4)(&g_0214f228);
  return param_1;
}

// @baa 0x00f32dc0
IMPLEMENT_CLASS_AT(UApexDestructibleAssetFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4192);

// @baa 0x00f32e20
extern undefined * g_0214f350;
// @baa 0x00f32e40
undefined4 * UFactory::sub_00f32e40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  param_1[0x14] = param_1[0x14] | 4;
  *param_1 = (undefined4)(&g_0214f350);
  return param_1;
}

// @baa 0x00f32e60
IMPLEMENT_CLASS_AT(UApexRenderMeshAssetFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4240);

// @baa 0x00f32ec0
extern undefined * g_0214f478;
// @baa 0x00f32ee0
undefined4 * UFactory::sub_00f32ee0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  param_1[0x14] = param_1[0x14] | 4;
  *param_1 = (undefined4)(&g_0214f478);
  return param_1;
}

// @baa 0x00f32f00
IMPLEMENT_CLASS_AT(UApexParticleSystemAssetFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4276);

// @baa 0x00f32f60
extern undefined * g_0214f5a0;
// @baa 0x00f32f80
undefined4 * UFactory::sub_00f32f80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  param_1[0x14] = param_1[0x14] | 4;
  *param_1 = (undefined4)(&g_0214f5a0);
  return param_1;
}

// @baa 0x00f32fa0
IMPLEMENT_CLASS_AT(UApexMeshParticleFactoryAssetFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4312);

// @baa 0x00f33000
extern undefined * g_0214f6c8;
// @baa 0x00f33020
undefined4 * UFactory::sub_00f33020(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  param_1[0x14] = param_1[0x14] | 4;
  *param_1 = (undefined4)(&g_0214f6c8);
  return param_1;
}

// @baa 0x00f33040
IMPLEMENT_CLASS_AT(UTextureMovieFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4587);

// @baa 0x00f330a0
extern undefined * g_0214f7f0;
// @baa 0x00f330c0
undefined4 * UFactory::sub_00f330c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0214f7f0);
  return param_1;
}

// @baa 0x00f330e0
IMPLEMENT_CLASS_AT(UTextureRenderTargetFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4670);

// @baa 0x00f33140
extern undefined * g_0214f918;
// @baa 0x00f33160
undefined4 * UFactory::sub_00f33160(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0214f918);
  return param_1;
}

extern undefined * g_0214fa40;
// @baa 0x00f33240
undefined4 * UFactory::sub_00f33240(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  param_1[0x14] = param_1[0x14] | 4;
  *param_1 = (undefined4)(&g_0214fa40);
  return param_1;
}

// @baa 0x00f33260
IMPLEMENT_CLASS_AT(USequenceFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 7610);

// @baa 0x00f332c0
extern undefined * g_0214fb68;
// @baa 0x00f332e0
undefined4 * UFactory::sub_00f332e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  param_1[0x14] = param_1[0x14] | 4;
  *param_1 = (undefined4)(&g_0214fb68);
  return param_1;
}

extern undefined * g_02159638;
// @baa 0x00f623d0
undefined4 * UFactory::sub_00f623d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  param_1[0x14] = param_1[0x14] | 4;
  *param_1 = (undefined4)(&g_02159638);
  return param_1;
}

extern undefined * g_02159760;
// @baa 0x00f62720
undefined4 * UFactory::sub_00f62720(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_02159760);
  return param_1;
}

extern undefined * g_0217fbe8;
// @baa 0x00ffd560
undefined4 * UFactory::sub_00ffd560(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0217fbe8);
  return param_1;
}

// @baa 0x00ffd580
IMPLEMENT_CLASS_AT(UTerrainMaterialFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnTerrainEdit.cpp", 2769);

// @baa 0x00ffd5e0
extern undefined * g_0217fd10;
// @baa 0x00ffd600
undefined4 * UFactory::sub_00ffd600(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0217fd10);
  return param_1;
}

extern undefined * g_021ad2d8;
// @baa 0x0110a3d0
undefined4 * UFactory::sub_0110a3d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  param_1[0x14] = param_1[0x14] | 4;
  *param_1 = (undefined4)(&g_021ad2d8);
  return param_1;
}

extern undefined * g_022b32f0;
// @baa 0x014b3780
undefined4 * UFactory::sub_014b3780(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_022b32f0);
  return param_1;
}

extern undefined * g_022b3418;
// @baa 0x014b37a0
undefined4 * UFactory::sub_014b37a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_022b3418);
  return param_1;
}

// @baa 0x014b37c0
IMPLEMENT_CLASS_AT(UUISceneFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditor.cpp", 33);

// @baa 0x014b3820
extern undefined * g_022b3540;
// @baa 0x014b3840
undefined4 * UFactory::sub_014b3840(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_022b3540);
  return param_1;
}

extern undefined * g_022de368;
// @baa 0x0152c2a0
undefined4 * UFactory::sub_0152c2a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_022de368);
  return param_1;
}

// @baa 0x0152c2c0
IMPLEMENT_CLASS_AT(URScriptConversationFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 40);

// @baa 0x0152c320
extern undefined * g_022de490;
// @baa 0x0152c340
undefined4 * UFactory::sub_0152c340(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_022de490);
  return param_1;
}

extern undefined * g_022fd730;
// @baa 0x01571bf0
undefined4 * UFactory::sub_01571bf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_022fd730);
  return param_1;
}

// @baa 0x01571c10
IMPLEMENT_CLASS_AT(URAimingConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 84);

// @baa 0x01571c70
extern undefined * g_022fd858;
// @baa 0x01571c90
undefined4 * UFactory::sub_01571c90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_022fd858);
  return param_1;
}

// @baa 0x01571cb0
IMPLEMENT_CLASS_AT(URPoseConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 88);

// @baa 0x01571d10
extern undefined * g_022fd980;
// @baa 0x01571d30
undefined4 * UFactory::sub_01571d30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_022fd980);
  return param_1;
}

// @baa 0x01571d50
IMPLEMENT_CLASS_AT(URBoneRescaleConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 85);

// @baa 0x01571db0
extern undefined * g_022fdaa8;
// @baa 0x01571dd0
undefined4 * UFactory::sub_01571dd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_022fdaa8);
  return param_1;
}

// @baa 0x01571df0
IMPLEMENT_CLASS_AT(URCharacterViewerConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 86);

// @baa 0x01571e50
extern undefined * g_022fdbd0;
// @baa 0x01571e70
undefined4 * UFactory::sub_01571e70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_022fdbd0);
  return param_1;
}

// @baa 0x01571e90
IMPLEMENT_CLASS_AT(URMirrorConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 87);

// @baa 0x01571ef0
extern undefined * g_022fdcf8;
// @baa 0x01571f10
undefined4 * UFactory::sub_01571f10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_022fdcf8);
  return param_1;
}

// @baa 0x01571f30
IMPLEMENT_CLASS_AT(URWeaponConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 89);

// @baa 0x01571f90
extern undefined * g_022fde20;
// @baa 0x01571fb0
undefined4 * UFactory::sub_01571fb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_022fde20);
  return param_1;
}

extern undefined * g_023457a8;
// @baa 0x016265a0
undefined4 * UFactory::sub_016265a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_023457a8);
  return param_1;
}

// @baa 0x016265c0
IMPLEMENT_CLASS_AT(URSimpleIdleConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RIdleConfig.cpp", 14);

// @baa 0x01626620
extern undefined * g_023458d0;
// @baa 0x01626640
undefined4 * UFactory::sub_01626640(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_023458d0);
  return param_1;
}

// @baa 0x01626660
IMPLEMENT_CLASS_AT(URIdleTransitionConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RIdleConfig.cpp", 15);

// @baa 0x016266c0
extern undefined * g_023459f8;
// @baa 0x016266e0
undefined4 * UFactory::sub_016266e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_023459f8);
  return param_1;
}

// @baa 0x01626700
IMPLEMENT_CLASS_AT(URIdleWithDeathConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RIdleConfig.cpp", 16);

// @baa 0x01626760
extern undefined * g_02345b20;
// @baa 0x01626780
undefined4 * UFactory::sub_01626780(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_02345b20);
  return param_1;
}

// @baa 0x016267a0
IMPLEMENT_CLASS_AT(URPairedIdleConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RIdleConfig.cpp", 17);

// @baa 0x01626800
extern undefined * g_02345c48;
// @baa 0x01626820
undefined4 * UFactory::sub_01626820(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_02345c48);
  return param_1;
}

// @baa 0x01626840
IMPLEMENT_CLASS_AT(URSpecialMoveFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 23);

// @baa 0x016268a0
extern undefined * g_02345d70;
// @baa 0x016268c0
undefined4 * UFactory::sub_016268c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_02345d70);
  return param_1;
}

extern undefined * g_02376af0;
// @baa 0x01680550
undefined4 * UFactory::sub_01680550(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_02376af0);
  return param_1;
}

// @baa 0x01680570
IMPLEMENT_CLASS_AT(UREvidenceFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\REvidence.cpp", 8);

// @baa 0x016805d0
extern undefined * g_02376c18;
// @baa 0x016805f0
undefined4 * UFactory::sub_016805f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_02376c18);
  return param_1;
}

// @baa 0x01680610
IMPLEMENT_CLASS_AT(URDummyEvidenceConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\REvidence.cpp", 41);

// @baa 0x01680670
extern undefined * g_02376d40;
// @baa 0x01680690
undefined4 * UFactory::sub_01680690(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_02376d40);
  return param_1;
}

// @baa 0x016806b0
IMPLEMENT_CLASS_AT(URCrimeSceneAssetFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\REvidence.cpp", 44);

// @baa 0x01680710
extern undefined * g_02376e68;
// @baa 0x01680730
undefined4 * UFactory::sub_01680730(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_02376e68);
  return param_1;
}

extern undefined * g_0237d998;
// @baa 0x0169cd20
undefined4 * UFactory::sub_0169cd20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_0237d998);
  return param_1;
}

extern undefined * g_02392408;
// @baa 0x016c6c20
undefined4 * UFactory::sub_016c6c20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_02392408);
  return param_1;
}

// @baa 0x016c6c40
IMPLEMENT_CLASS_AT(URCapeStateConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp", 23);

// @baa 0x016c6ca0
extern undefined * g_02392530;
// @baa 0x016c6cc0
undefined4 * UFactory::sub_016c6cc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_02392530);
  return param_1;
}

extern undefined * g_023a2dc8;
// @baa 0x016dbdd0
undefined4 * UFactory::sub_016dbdd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_023a2dc8);
  return param_1;
}

// @baa 0x016dbdf0
IMPLEMENT_CLASS_AT(URCapeCollisionShapeConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeStateController.cpp", 21);

// @baa 0x016dbe50
extern undefined * g_023a2ef0;
// @baa 0x016dbe70
undefined4 * UFactory::sub_016dbe70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_023a2ef0);
  return param_1;
}

// @baa 0x016dbe90
IMPLEMENT_CLASS_AT(URCapeCollisionConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeStateController.cpp", 17);

// @baa 0x016dbef0
extern undefined * g_023a3018;
// @baa 0x016dbf10
undefined4 * UFactory::sub_016dbf10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_023a3018);
  return param_1;
}

// @baa 0x016dbf30
IMPLEMENT_CLASS_AT(URCapeStateBoneConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeStateController.cpp", 19);

// @baa 0x016dbf90
extern undefined * g_023a3140;
// @baa 0x016dbfb0
undefined4 * UFactory::sub_016dbfb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_023a3140);
  return param_1;
}

extern undefined * g_023c9d58;
// @baa 0x01729c30
undefined4 * UFactory::sub_01729c30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  *param_1 = (undefined4)(&g_023c9d58);
  return param_1;
}

// @baa 0x005fbd90
void UFactory::Serialize( FArchive& Ar )
{
	Super::Serialize( Ar );
	if( !Ar.IsLoading() && !Ar.IsSaving() )
	{
		Ar << SupportedClass << ContextClass;
	}
}

// Engine_08d0000.cpp (part 1 of 8): 43 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_008d1890(void);
// @baa 0x008d1d20
void USeqAct_SetDOFParams::vf_174(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) & 0xfffffffe;
  sub_008d1890();
  if (*(int *)(param_1 + 0xd8) == 0) {
    *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 1;
  }
  return;
}

// @baa 0x008d1d50
void USeqAct_ParticleEventGenerator::vf_174(void)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0xd4) & 1) != 0) {
    sub_008d1890();
    return;
  }
  return;
}

struct C { void sub_008c3280(int); C *sub_008d2040(int); };

// @baa 0x008d2040
C *C::sub_008d2040(int a) { sub_008c3280(a); return this; }

struct C_008d2110 { void sub_008c3340(int); C_008d2110 *sub_008d2110(int); };

// @baa 0x008d2110
C_008d2110 *C_008d2110::sub_008d2110(int a) { sub_008c3340(a); return this; }

struct C_view {
    int sub_008c3450(int);
};

// @baa 0x008d2130
undefined4 UObject::sub_008d2130(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(this))->sub_008c3450(param_2);
  return param_1;
}

struct C_008d2150 { void sub_008cda10(int); C_008d2150 *sub_008d2150(int); };

// @baa 0x008d2150
C_008d2150 *C_008d2150::sub_008d2150(int a) { sub_008cda10(a); return this; }

struct C_view_008d2170 {
    int sub_008cdc00(int, int);
};

// @baa 0x008d2170
int UObject::sub_008d2170(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_008d2170 *)(this))->sub_008cdc00((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_008d21a0 {
    int sub_008cdc80(int, int);
};

// @baa 0x008d21a0
int UObject::sub_008d21a0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_008d21a0 *)(this))->sub_008cdc80((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_008d21d0 {
    int sub_008cdc80(int, int);
};

// @baa 0x008d21d0
int UObject::sub_008d21d0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_008d21d0 *)(this))->sub_008cdc80((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

int sub_0053dfa0(...);
int sub_008cdad0(void);
// @baa 0x008d2260
undefined4 UObject::sub_008d2260(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_008cdad0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_008cdb30(void);
// @baa 0x008d2280
undefined4 UObject::sub_008d2280(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_008cdb30();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_008cdb90(void);
// @baa 0x008d22a0
undefined4 UObject::sub_008d22a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_008cdb90();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_008d22c0 {
    undefined4 sub_008d22c0(byte);
    int sub_00549160();
};

// @baa 0x008d22c0
undefined4 C_008d22c0::sub_008d22c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_008d22c0 *)(((char *)this + 8)))->sub_00549160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_005d88c0(...);
int sub_008aaf30(void);
int sub_008c8c10(...);
extern undefined4 g_026b5ad8;
// @baa 0x008d22f0
void sub_008d22f0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026b5ad8 == 0) {
    g_026b5ad8 = sub_008c8c10(L"Engine");
    sub_008aaf30();
  }
  sub_005d88c0(g_026b5ad8,param_1,param_2,param_3);
  return;
}

int sub_008c5a00(void);
// @baa 0x008d24b0
undefined4 USeqVar_Union::sub_008d24b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_008c5a00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x008d24d0
undefined4 USeqVar_Union::sub_008d24d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_008c5a00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x008d24f0
undefined4 USeqVar_Union::sub_008d24f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_008c5a00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x008d2510
undefined4 USeqVar_Union::sub_008d2510(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_008c5a00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_008a6e60(void);
int sub_008cf0a0(...);
extern undefined4 g_026b5a94;
// @baa 0x008d2530
int sub_008d2530(void)
{
  if (g_026b5a94 == 0) {
    g_026b5a94 = sub_008cf0a0(L"Engine");
    sub_008a6e60();
  }
  return g_026b5a94;
}

// @baa 0x008d2d00
IMPLEMENT_CLASS_AT(USceneCapturePortalComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSceneCapture.cpp", 14);

// @baa 0x008d2e10
bool USceneCapturePortalComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_008dcbc0 { void sub_008d5060(int); C_008dcbc0 *sub_008dcbc0(int); };

// @baa 0x008dcbc0
C_008dcbc0 *C_008dcbc0::sub_008dcbc0(int a) { sub_008d5060(a); return this; }

// @baa 0x008dd1d0
IMPLEMENT_CLASS_AT(ADynamicAnchor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnRoute.cpp", 10);

// @baa 0x008dd230
// @baa 0x008dd260
IMPLEMENT_CLASS_AT(ASceneCaptureActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSceneCapture.cpp", 15);

// @baa 0x008dd2c0
void ASceneCaptureActor::vf_354(void) {  }

// @baa 0x008dd2d0
// @baa 0x008dd360
IMPLEMENT_CLASS_AT(ASceneCapture2DActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSceneCapture.cpp", 16);

// @baa 0x008dd3c0
// @baa 0x008dd420
IMPLEMENT_CLASS_AT(ASceneCaptureCubeMapActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSceneCapture.cpp", 17);

// @baa 0x008dd480
// @baa 0x008dd4b0
IMPLEMENT_CLASS_AT(ASceneCaptureReflectActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSceneCapture.cpp", 18);

// @baa 0x008dd510
// @baa 0x008dd570
IMPLEMENT_CLASS_AT(ASceneCapturePortalActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSceneCapture.cpp", 19);

// @baa 0x008dd5d0
// @baa 0x008dd660
void* APortalTeleporter::vf_304() { return this; }

// @baa 0x008dd670
IMPLEMENT_CLASS_AT(APortalTeleporter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSceneCapture.cpp", 20);

// @baa 0x008dd6d0
void sub_008dc5b0();
// @baa 0x008deaa0
void sub_008deaa0(void) { sub_008dc5b0(); }

void sub_008dc8e0();
// @baa 0x008deab0
void sub_008deab0(void) { sub_008dc8e0(); }

void sub_008dc9b0();
// @baa 0x008deac0
void sub_008deac0(void) { sub_008dc9b0(); }

int sub_008c9390(...);
int sub_008d6300(void);
extern undefined4 g_026b5b18;
// @baa 0x008dead0
int sub_008dead0(void)
{
  if (g_026b5b18 == 0) {
    g_026b5b18 = sub_008c9390(L"Engine");
    sub_008d6300();
  }
  return g_026b5b18;
}

int sub_008d03f0(...);
int sub_008d5dc0(void);
extern undefined4 g_026b5b08;
// @baa 0x008deb00
int sub_008deb00(void)
{
  if (g_026b5b08 == 0) {
    g_026b5b08 = sub_008d03f0(L"Engine");
    sub_008d5dc0();
  }
  return g_026b5b08;
}

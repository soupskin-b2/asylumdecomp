// UnActorComponent.cpp (part 1 of 3): 278 functions
// Placed here by: neighbours 239, class 25, file 8, callers 5.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0064b530
IMPLEMENT_CLASS_AT(UActorComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorComponent.cpp", 46);

// @baa 0x0064b590
void __stdcall sub_0064b590(int a0) {  }

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x0064b5a0
void UActorComponent::vf_128(void)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0x44) & 0x20) == 0) {
    sub_006311e0("bEnableUpdateChildComponents",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\inc\\UnActorComponent.h"
                 ,0x46,&g_01e3f3dc);
  }
  return;
}

// @baa 0x0064b5c0
void UActorComponent::vf_130(void) {  }

// @baa 0x0064b5d0
void UActorComponent::vf_134(int a0) {  }

// @baa 0x0064b5e0
void UActorComponent::SetComponentRBFixed(int a0) {  }

// @baa 0x0064b5f0
void UActorComponent::vf_13c(int a0) {  }

// @baa 0x0064b600
int UActorComponent::vf_144(void) { return 1; }

// @baa 0x0064b610
int UActorComponent::sub_0064b610(void) { return *(int*)((char*)this + 60); }

// @baa 0x0064b620
int UActorComponent::sub_0064b620(void) { return *(int*)((char*)this + 64); }

// @baa 0x0064b640
void UActorComponent::GetActorReferences(TArray<FActorReference*>& a0, UBOOL a1) {  }

// @baa 0x0064b650
// @baa 0x006ab3c0
IMPLEMENT_CLASS_AT(UFogVolumeDensityComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\FogVolumeDensityComponents.cpp", 49);

// @baa 0x006ab4d0
int UFogVolumeDensityComponent::vf_000(void) { return 1; }

// @baa 0x006ab4e0
bool UFogVolumeDensityComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_00765d00(void);
// @baa 0x006ab520
void UFogVolumeDensityComponent::SetEnabled(uint param_2)
{
    int param_1 = (int)this;

  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x54);
  if ((uVar1 & 1) != param_2) {
    *(uint *)(param_1 + 0x54) = (uVar1 ^ param_2) & 1 ^ uVar1;
    sub_00765d00();
  }
  return;
}

// @baa 0x006c0ba0
// @baa 0x006c0c30
int sub_005c7a20(void);
extern undefined * g_01ecec60;
// @baa 0x006c0c60
undefined4 * UObject::sub_006c0c60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ecec60);
  return param_1;
}

extern undefined * g_01ecee20;
// @baa 0x006c0c80
undefined4 * UObject::sub_006c0c80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ecee20);
  return param_1;
}

// @baa 0x006c0ca0
IMPLEMENT_CLASS_AT(UFogVolumeConeDensityComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\FogVolumeDensityComponents.cpp", 419);

// @baa 0x006c0d00
extern undefined * g_01ecef70;
// @baa 0x006c0d30
undefined4 * UObject::sub_006c0d30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ecef70);
  return param_1;
}

// @baa 0x006c0d50
IMPLEMENT_CLASS_AT(UFogVolumeConstantDensityComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\FogVolumeDensityComponents.cpp", 304);

// @baa 0x006c0db0
extern undefined * g_01ecf0c0;
// @baa 0x006c0de0
undefined4 * UObject::sub_006c0de0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ecf0c0);
  return param_1;
}

// @baa 0x006c0e00
IMPLEMENT_CLASS_AT(UFogVolumeLinearHalfspaceDensityComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\FogVolumeDensityComponents.cpp", 324);

// @baa 0x006c0e60
extern undefined * g_01ecf210;
// @baa 0x006c0e90
undefined4 * UObject::sub_006c0e90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ecf210);
  return param_1;
}

// @baa 0x006c0eb0
IMPLEMENT_CLASS_AT(UFogVolumeSphericalDensityComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\FogVolumeDensityComponents.cpp", 357);

// @baa 0x006c0f10
// @baa 0x006c76f0
void sub_006d2950();
// @baa 0x006d4260
void sub_006d4260(void) { sub_006d2950(); }

void sub_006d29c0();
// @baa 0x006d4270
void sub_006d4270(void) { sub_006d29c0(); }

struct C_view {
    int sub_005d5620(int, int, int);
};

// @baa 0x006d4280
int UObject::sub_006d4280(void)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_005d5620((int)(L"None"), 1, 1);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return param_1;
}

// @baa 0x006d42f0
int UObject::sub_006d42f0(void)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_005d5620((int)(L"None"), 1, 1);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return param_1;
}

void sub_006d2a30();
// @baa 0x006d43b0
void sub_006d43b0(void) { sub_006d2a30(); }

// @baa 0x007590e0
// @baa 0x007591f0
int UActorComponent::vf_000(void) { return 1; }

// @baa 0x00759200
bool UActorComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00759240
int UAudioComponent::vf_000(void) { return 1; }

// @baa 0x00759250
int UWindDirectionalSourceComponent::vf_000(void) { return 1; }

// @baa 0x00759260
IMPLEMENT_CLASS_AT(UPrimitiveComponentFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorComponent.cpp", 51);

// @baa 0x00759370
int UPrimitiveComponentFactory::vf_000(void) { return 1; }

// @baa 0x00759380
bool UPrimitiveComponentFactory::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007593c0
int UMeshComponentFactory::vf_000(void) { return 1; }

// @baa 0x007593d0
int UStaticMeshComponentFactory::vf_000(void) { return 1; }

struct C_view_00759550 {
    virtual int vf_000();
    virtual int vf_004();
    virtual int vf_008();
    virtual int vf_00c();
    virtual int vf_010();
    virtual int vf_014();
    virtual int vf_018();
    virtual int PostLoad();
    virtual int BeginDestroy();
    virtual int IsReadyForFinishDestroy();
    virtual int SetLinker();
    virtual int vf_02c();
    virtual int vf_030();
    virtual int vf_034();
    virtual int IsPendingKill();
};

// @baa 0x00759550
UINT UActorComponent::vf_12c() {
    return IsPendingKill() == 0;
}

extern undefined4 g_01efb7d0;
// @baa 0x00759560
void UActorComponent::vf_118(void)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0x44) & 1) == 0) {
    sub_006311e0("bAttached",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorComponent.cpp"
                 ,0x256,&g_01efb7d0);
  }
  return;
}

extern undefined4 g_01efb990;
// @baa 0x00759590
void UActorComponent::UpdateTransform()
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0x44) & 1) == 0) {
    sub_006311e0("bAttached",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorComponent.cpp"
                 ,0x270,&g_01efb990);
  }
  return;
}

// @baa 0x007596b0
void UActorComponent::sub_007596b0(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x48) = param_2;
  return;
}

struct C { C* sub_00759920(void); };

// @baa 0x00759920
C* C::sub_00759920(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_007599b0 {
    void sub_007599b0(int *);
};

// @baa 0x007599b0
void C_007599b0::sub_007599b0(int * param_2)
{
    int param_1 = (int)this;

  if (*param_2 != 0) {
    *(int *)(*param_2 + 8) = param_1 + 4;
  }
  *(int *)(param_1 + 4) = *param_2;
  *(int **)(param_1 + 8) = param_2;
  *param_2 = param_1;
  return;
}

struct C_007599d0 { int a, b, c; C_007599d0(); };

// @baa 0x007599d0
C_007599d0::C_007599d0() : a(0), b(0), c(0) {}

struct C_007599e0 { int a, b, c; C_007599e0(); };

// @baa 0x007599e0
C_007599e0::C_007599e0() : a(0), b(0), c(0) {}

struct C_007599f0 { int a, b, c; C_007599f0(); };

// @baa 0x007599f0
C_007599f0::C_007599f0() : a(0), b(0), c(0) {}

struct C_00759a00 { int a, b, c; C_00759a00(); };

// @baa 0x00759a00
C_00759a00::C_00759a00() : a(0), b(0), c(0) {}

struct C_00759a10 { int sub_00759a10(void); };

// @baa 0x00759a10
int C_00759a10::sub_00759a10(void) { return *(int*)((char*)this + 4); }

struct C_00759a20 { int sub_00759a20(void); };

// @baa 0x00759a20
int C_00759a20::sub_00759a20(void) { return *(int*)((char*)this + 4); }

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_00759a30();
};

// @baa 0x00759a30
S *S::sub_00759a30()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_00759a40 { int a, b, c; C_00759a40(); };

// @baa 0x00759a40
C_00759a40::C_00759a40() : a(0), b(0), c(0) {}

struct C_00759a50 { int sub_00759a50(void); };

// @baa 0x00759a50
int C_00759a50::sub_00759a50(void) { return *(int*)((char*)this + 4); }

struct C_00759a60 {
    undefined4 * sub_00759a60(undefined4, undefined4);
};

int sub_00715880(void);
// @baa 0x00759a60
undefined4 * C_00759a60::sub_00759a60(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  int iVar1;
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar1 = sub_00715880();
  if (iVar1 == 0) {
    sub_006311e0("IsInGameThread()",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\inc\\Engine.h"
                 ,0x246,&g_01e3f3dc);
  }
  param_1[5] = param_2;
  param_1[6] = param_3;
  return param_1;
}

struct C_00759ab0 { int a; C_00759ab0(int); };

// @baa 0x00759ab0
C_00759ab0::C_00759ab0(int x) : a(x) {}

struct C_00759ac0 {
    void sub_00759ac0();
};

// @baa 0x00759ac0
void C_00759ac0::sub_00759ac0(void)
{
    int * param_1 = (int *)this;

  *param_1 = *(int *)(*param_1 + 4);
  return;
}

struct C_00759ad0 {
    int x;
    int sub_00759ad0();
};

// @baa 0x00759ad0
int C_00759ad0::sub_00759ad0()
{
    return x ? 0 : -1;
}

struct C_00759ae0 { int sub_00759ae0(void); };

// @baa 0x00759ae0
int C_00759ae0::sub_00759ae0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00759af0
int sub_00759af0(void) { return 1; }

// @baa 0x00759b00
int sub_00759b00(void) { return 1; }

struct C_00759b10 { int a, b, c; C_00759b10(); };

// @baa 0x00759b10
C_00759b10::C_00759b10() : a(0), b(0), c(0) {}

struct C_00759b20 { int sub_00759b20(void); };

// @baa 0x00759b20
int C_00759b20::sub_00759b20(void) { return *(int*)((char*)this + 4); }

struct C_00759b30 { int sub_00759b30(void); };

// @baa 0x00759b30
int C_00759b30::sub_00759b30(void) { return *(int*)((char*)this + 132); }

struct C_00759b40 { C_00759b40* sub_00759b40(int a0); };

// @baa 0x00759b40
C_00759b40* C_00759b40::sub_00759b40(int a0) { return this; }

struct C_00759b50 { C_00759b50* sub_00759b50(int a0); };

// @baa 0x00759b50
C_00759b50* C_00759b50::sub_00759b50(int a0) { return this; }

struct C_00759b60 {
    int sub_00759b60(int);
};

// @baa 0x00759b60
int C_00759b60::sub_00759b60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00759b70 { C_00759b70* sub_00759b70(int a0); };

// @baa 0x00759b70
C_00759b70* C_00759b70::sub_00759b70(int a0) { return this; }

struct C_00759b80 { C_00759b80* sub_00759b80(int a0); };

// @baa 0x00759b80
C_00759b80* C_00759b80::sub_00759b80(int a0) { return this; }

struct C_00759cf0 { C_00759cf0* sub_00759cf0(int a0); };

// @baa 0x00759cf0
C_00759cf0* C_00759cf0::sub_00759cf0(int a0) { return this; }

struct C_00759d00 { int sub_00759d00(void); };

// @baa 0x00759d00
int C_00759d00::sub_00759d00(void) { return *(int*)((char*)this + 0); }

struct C_00759d10 { C_00759d10* sub_00759d10(int a0); };

// @baa 0x00759d10
C_00759d10* C_00759d10::sub_00759d10(int a0) { return this; }

struct C_00759d20 { C_00759d20* sub_00759d20(int a0); };

// @baa 0x00759d20
C_00759d20* C_00759d20::sub_00759d20(int a0) { return this; }

struct C_00759d30 { C_00759d30* sub_00759d30(int a0); };

// @baa 0x00759d30
C_00759d30* C_00759d30::sub_00759d30(int a0) { return this; }

struct C_00759d40 { C_00759d40* sub_00759d40(int a0); };

// @baa 0x00759d40
C_00759d40* C_00759d40::sub_00759d40(int a0) { return this; }

struct C_00759d50 { C_00759d50* sub_00759d50(int a0); };

// @baa 0x00759d50
C_00759d50* C_00759d50::sub_00759d50(int a0) { return this; }

struct C_00759d60 { C_00759d60* sub_00759d60(int a0); };

// @baa 0x00759d60
C_00759d60* C_00759d60::sub_00759d60(int a0) { return this; }

struct C_00759d70 { C_00759d70* sub_00759d70(int a0); };

// @baa 0x00759d70
C_00759d70* C_00759d70::sub_00759d70(int a0) { return this; }

struct C_00759d80 { C_00759d80* sub_00759d80(int a0); };

// @baa 0x00759d80
C_00759d80* C_00759d80::sub_00759d80(int a0) { return this; }

struct C_00759d90 { C_00759d90* sub_00759d90(int a0); };

// @baa 0x00759d90
C_00759d90* C_00759d90::sub_00759d90(int a0) { return this; }

struct C_00759da0 { C_00759da0* sub_00759da0(int a0); };

// @baa 0x00759da0
C_00759da0* C_00759da0::sub_00759da0(int a0) { return this; }

struct C_00759db0 { C_00759db0* sub_00759db0(int a0); };

// @baa 0x00759db0
C_00759db0* C_00759db0::sub_00759db0(int a0) { return this; }

struct C_00759dc0 { C_00759dc0* sub_00759dc0(int a0); };

// @baa 0x00759dc0
C_00759dc0* C_00759dc0::sub_00759dc0(int a0) { return this; }

struct C_00759dd0 { C_00759dd0* sub_00759dd0(int a0); };

// @baa 0x00759dd0
C_00759dd0* C_00759dd0::sub_00759dd0(int a0) { return this; }

struct C_00759de0 { C_00759de0* sub_00759de0(int a0); };

// @baa 0x00759de0
C_00759de0* C_00759de0::sub_00759de0(int a0) { return this; }

struct C_00759df0 { C_00759df0* sub_00759df0(int a0); };

// @baa 0x00759df0
C_00759df0* C_00759df0::sub_00759df0(int a0) { return this; }

struct C_00759e00 { C_00759e00* sub_00759e00(int a0); };

// @baa 0x00759e00
C_00759e00* C_00759e00::sub_00759e00(int a0) { return this; }

struct C_00759e10 { C_00759e10* sub_00759e10(int a0); };

// @baa 0x00759e10
C_00759e10* C_00759e10::sub_00759e10(int a0) { return this; }

struct C_00759e20 { C_00759e20* sub_00759e20(int a0); };

// @baa 0x00759e20
C_00759e20* C_00759e20::sub_00759e20(int a0) { return this; }

struct C_00759e30 { C_00759e30* sub_00759e30(int a0); };

// @baa 0x00759e30
C_00759e30* C_00759e30::sub_00759e30(int a0) { return this; }

struct C_00759e40 { C_00759e40* sub_00759e40(int a0); };

// @baa 0x00759e40
C_00759e40* C_00759e40::sub_00759e40(int a0) { return this; }

struct C_00759e50 { C_00759e50* sub_00759e50(int a0); };

// @baa 0x00759e50
C_00759e50* C_00759e50::sub_00759e50(int a0) { return this; }

struct C_00759e60 { C_00759e60* sub_00759e60(int a0); };

// @baa 0x00759e60
C_00759e60* C_00759e60::sub_00759e60(int a0) { return this; }

struct C_00759e70 { C_00759e70* sub_00759e70(int a0); };

// @baa 0x00759e70
C_00759e70* C_00759e70::sub_00759e70(int a0) { return this; }

struct C_00759e80 { C_00759e80* sub_00759e80(int a0); };

// @baa 0x00759e80
C_00759e80* C_00759e80::sub_00759e80(int a0) { return this; }

struct C_00759e90 { C_00759e90* sub_00759e90(int a0); };

// @baa 0x00759e90
C_00759e90* C_00759e90::sub_00759e90(int a0) { return this; }

struct C_00759ea0 { C_00759ea0* sub_00759ea0(int a0); };

// @baa 0x00759ea0
C_00759ea0* C_00759ea0::sub_00759ea0(int a0) { return this; }

struct C_00759eb0 { int sub_00759eb0(void); };

// @baa 0x00759eb0
int C_00759eb0::sub_00759eb0(void) { return *(int*)((char*)this + 0); }

struct C_00759ec0 { C_00759ec0* sub_00759ec0(int a0); };

// @baa 0x00759ec0
C_00759ec0* C_00759ec0::sub_00759ec0(int a0) { return this; }

struct C_00759ed0 { C_00759ed0* sub_00759ed0(int a0); };

// @baa 0x00759ed0
C_00759ed0* C_00759ed0::sub_00759ed0(int a0) { return this; }

struct C_00759ee0 { C_00759ee0* sub_00759ee0(int a0); };

// @baa 0x00759ee0
C_00759ee0* C_00759ee0::sub_00759ee0(int a0) { return this; }

struct C_00759ef0 { int sub_00759ef0(void); };

// @baa 0x00759ef0
int C_00759ef0::sub_00759ef0(void) { return *(int*)((char*)this + 0); }

struct C_00759f00 { int sub_00759f00(void); };

// @baa 0x00759f00
int C_00759f00::sub_00759f00(void) { return *(int*)((char*)this + 0); }

struct C_00759f80 { int sub_00759f80(void); };

// @baa 0x00759f80
int C_00759f80::sub_00759f80(void) { return *(int*)((char*)this + 0); }

int sub_00716170(...);
// @baa 0x0075a090
undefined4 sub_0075a090(undefined4 param_1, int param_2)
{
  sub_00716170(param_1,param_2);
  sub_00716170(param_1,param_2 + 6);
  sub_00716170(param_1,param_2 + 0xc);
  sub_00716170(param_1,param_2 + 0x12);
  return param_1;
}

// @baa 0x0075a0d0
undefined4 sub_0075a0d0(undefined4 param_1, int param_2)
{
  sub_00716170(param_1,param_2);
  sub_00716170(param_1,param_2 + 6);
  sub_00716170(param_1,param_2 + 0xc);
  return param_1;
}

// @baa 0x0075a100
undefined4 sub_0075a100(undefined4 param_1, int param_2)
{
  sub_00716170(param_1,param_2);
  sub_00716170(param_1,param_2 + 6);
  return param_1;
}

int sub_007161b0(...);
// @baa 0x0075a130
undefined4 sub_0075a130(undefined4 param_1, int param_2)
{
  sub_007161b0(param_1,param_2);
  sub_00716170(param_1,param_2 + 6);
  sub_00716170(param_1,param_2 + 0xc);
  sub_00716170(param_1,param_2 + 0x12);
  sub_00716170(param_1,param_2 + 0x18);
  sub_00716170(param_1,param_2 + 0x1e);
  sub_00716170(param_1,param_2 + 0x24);
  return param_1;
}

struct C_0075a3b0 {
    undefined4 sub_0075a3b0();
};

// @baa 0x0075a3b0
undefined4 C_0075a3b0::sub_0075a3b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

struct C_0075a3c0 { int sub_0075a3c0(void); };

// @baa 0x0075a3c0
int C_0075a3c0::sub_0075a3c0(void) { return *(int*)((char*)this + 0); }

struct C_0075a3d0 { int sub_0075a3d0(void); };

// @baa 0x0075a3d0
int C_0075a3d0::sub_0075a3d0(void) { return *(int*)((char*)this + 0); }

struct C_0075a3e0 { int sub_0075a3e0(void); };

// @baa 0x0075a3e0
int C_0075a3e0::sub_0075a3e0(void) { return *(int*)((char*)this + 0); }

struct C_0075a3f0 { int sub_0075a3f0(void); };

// @baa 0x0075a3f0
int C_0075a3f0::sub_0075a3f0(void) { return *(int*)((char*)this + 0); }

struct C_0075a400 { int sub_0075a400(void); };

// @baa 0x0075a400
int C_0075a400::sub_0075a400(void) { return *(int*)((char*)this + 0); }

struct C_0075a410 {
    int sub_0075a410();
};

// @baa 0x0075a410
int C_0075a410::sub_0075a410(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0075a420 { int a, b; C_0075a420(int, int); };

// @baa 0x0075a420
C_0075a420::C_0075a420(int x, int y) : a(x), b(y) {}

struct C_0075a440 { int a, b; C_0075a440(int, int); };

// @baa 0x0075a440
C_0075a440::C_0075a440(int x, int y) : a(x), b(y) {}

struct C_0075a460 {
    int sub_0075a460();
};

// @baa 0x0075a460
int C_0075a460::sub_0075a460(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0075a470 { int a, b; C_0075a470(int, int); };

// @baa 0x0075a470
C_0075a470::C_0075a470(int x, int y) : a(x), b(y) {}

struct C_0075a490 {
    void sub_0075a490();
};

int sub_0053dfa0(...);
// @baa 0x0075a490
void C_0075a490::sub_0075a490(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_0053dfa0(*param_1);
    *param_1 = 0;
  }
  return;
}

void sub_007249d0();
// @baa 0x0075a4b0
void sub_0075a4b0(void) { sub_007249d0(); }

// @baa 0x0075a4c0
void sub_0075a4c0(void) { sub_007249d0(); }

struct C_0075a4d0 { int sub_0075a4d0(void); };

// @baa 0x0075a4d0
int C_0075a4d0::sub_0075a4d0(void) { return *(int*)((char*)this + 0); }

struct C_0075a4e0 { int sub_0075a4e0(void); };

// @baa 0x0075a4e0
int C_0075a4e0::sub_0075a4e0(void) { return *(int*)((char*)this + 0); }

struct C_0075a4f0 { int sub_0075a4f0(void); };

// @baa 0x0075a4f0
int C_0075a4f0::sub_0075a4f0(void) { return *(int*)((char*)this + 0); }

struct C_0075a500 { int sub_0075a500(void); };

// @baa 0x0075a500
int C_0075a500::sub_0075a500(void) { return *(int*)((char*)this + 0); }

struct C_0075a510 { int sub_0075a510(void); };

// @baa 0x0075a510
int C_0075a510::sub_0075a510(void) { return *(int*)((char*)this + 0); }

struct C_0075a520 { int sub_0075a520(void); };

// @baa 0x0075a520
int C_0075a520::sub_0075a520(void) { return *(int*)((char*)this + 0); }

struct C_0075a530 { int sub_0075a530(void); };

// @baa 0x0075a530
int C_0075a530::sub_0075a530(void) { return *(int*)((char*)this + 0); }

struct C_0075a540 { int sub_0075a540(void); };

// @baa 0x0075a540
int C_0075a540::sub_0075a540(void) { return *(int*)((char*)this + 0); }

struct C_0075a550 { int sub_0075a550(void); };

// @baa 0x0075a550
int C_0075a550::sub_0075a550(void) { return *(int*)((char*)this + 0); }

struct C_0075a560 { int sub_0075a560(void); };

// @baa 0x0075a560
int C_0075a560::sub_0075a560(void) { return *(int*)((char*)this + 0); }

struct C_0075a570 { int sub_0075a570(void); };

// @baa 0x0075a570
int C_0075a570::sub_0075a570(void) { return *(int*)((char*)this + 0); }

struct C_0075a580 { int sub_0075a580(void); };

// @baa 0x0075a580
int C_0075a580::sub_0075a580(void) { return *(int*)((char*)this + 0); }

struct C_0075a590 { int sub_0075a590(void); };

// @baa 0x0075a590
int C_0075a590::sub_0075a590(void) { return *(int*)((char*)this + 0); }

struct C_0075a5a0 { int sub_0075a5a0(void); };

// @baa 0x0075a5a0
int C_0075a5a0::sub_0075a5a0(void) { return *(int*)((char*)this + 0); }

struct C_0075a5b0 { int sub_0075a5b0(void); };

// @baa 0x0075a5b0
int C_0075a5b0::sub_0075a5b0(void) { return *(int*)((char*)this + 0); }

struct C_0075a5c0 { int sub_0075a5c0(void); };

// @baa 0x0075a5c0
int C_0075a5c0::sub_0075a5c0(void) { return *(int*)((char*)this + 0); }

struct C_0075a5d0 { int sub_0075a5d0(void); };

// @baa 0x0075a5d0
int C_0075a5d0::sub_0075a5d0(void) { return *(int*)((char*)this + 0); }

struct C_0075a5e0 { int sub_0075a5e0(void); };

// @baa 0x0075a5e0
int C_0075a5e0::sub_0075a5e0(void) { return *(int*)((char*)this + 0); }

struct C_0075a5f0 { int sub_0075a5f0(void); };

// @baa 0x0075a5f0
int C_0075a5f0::sub_0075a5f0(void) { return *(int*)((char*)this + 0); }

struct C_0075a600 { int sub_0075a600(void); };

// @baa 0x0075a600
int C_0075a600::sub_0075a600(void) { return *(int*)((char*)this + 0); }

struct C_0075a610 { int sub_0075a610(void); };

// @baa 0x0075a610
int C_0075a610::sub_0075a610(void) { return *(int*)((char*)this + 0); }

struct C_0075a620 { int sub_0075a620(void); };

// @baa 0x0075a620
int C_0075a620::sub_0075a620(void) { return *(int*)((char*)this + 0); }

struct C_0075a630 { int sub_0075a630(void); };

// @baa 0x0075a630
int C_0075a630::sub_0075a630(void) { return *(int*)((char*)this + 0); }

struct C_0075a640 { int sub_0075a640(void); };

// @baa 0x0075a640
int C_0075a640::sub_0075a640(void) { return *(int*)((char*)this + 0); }

struct C_0075a650 { int sub_0075a650(void); };

// @baa 0x0075a650
int C_0075a650::sub_0075a650(void) { return *(int*)((char*)this + 0); }

struct C_0075a660 { int sub_0075a660(void); };

// @baa 0x0075a660
int C_0075a660::sub_0075a660(void) { return *(int*)((char*)this + 0); }

struct C_0075a670 { int sub_0075a670(void); };

// @baa 0x0075a670
int C_0075a670::sub_0075a670(void) { return *(int*)((char*)this + 0); }

struct C_0075a680 { int sub_0075a680(void); };

// @baa 0x0075a680
int C_0075a680::sub_0075a680(void) { return *(int*)((char*)this + 0); }

struct S_0075a690 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0075a690(INT Index);
};

// @baa 0x0075a690
DWORD* S_0075a690::sub_0075a690(INT Index)
{
    return &Items(Index);
}

struct C_0075a6e0 { int sub_0075a6e0(void); };

// @baa 0x0075a6e0
int C_0075a6e0::sub_0075a6e0(void) { return *(int*)((char*)this + 0); }

struct C_0075a6f0 { int sub_0075a6f0(void); };

// @baa 0x0075a6f0
int C_0075a6f0::sub_0075a6f0(void) { return *(int*)((char*)this + 0); }

struct C_0075a700 { int sub_0075a700(void); };

// @baa 0x0075a700
int C_0075a700::sub_0075a700(void) { return *(int*)((char*)this + 0); }

struct C_0075a710 { int sub_0075a710(void); };

// @baa 0x0075a710
int C_0075a710::sub_0075a710(void) { return *(int*)((char*)this + 0); }

struct S_0075a720 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0075a720(INT Index);
};

// @baa 0x0075a720
DWORD* S_0075a720::sub_0075a720(INT Index)
{
    return &Items(Index);
}

// @baa 0x0075a770
int sub_0075a770(int a0) { return *(int*)a0; }

// @baa 0x0075a780
bool sub_0075a780(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0075a790 {
    void sub_0075a790(undefined4 *);
};

// @baa 0x0075a790
void C_0075a790::sub_0075a790(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_0075a7b0 { int sub_0075a7b0(void); };

// @baa 0x0075a7b0
int C_0075a7b0::sub_0075a7b0(void) { return *(int*)((char*)this + 0); }

// @baa 0x0075a7c0
int sub_0075a7c0(int a0) { return *(int*)a0; }

struct C_0075a7d0 { int a, b; C_0075a7d0(const C_0075a7d0 &); };

// @baa 0x0075a7d0
C_0075a7d0::C_0075a7d0(const C_0075a7d0 &o) : a(o.a), b(o.b) {}

// @baa 0x0075a810
int sub_0075a810(int a0) { return *(int*)a0; }

// @baa 0x0075a820
bool sub_0075a820(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0075a830 { int a, b; C_0075a830(const C_0075a830 &); };

// @baa 0x0075a830
C_0075a830::C_0075a830(const C_0075a830 &o) : a(o.a), b(o.b) {}

struct C_0075a890 { int sub_0075a890(void); };

// @baa 0x0075a890
int C_0075a890::sub_0075a890(void) { return *(int*)((char*)this + 0); }

struct C_0075a8a0 { int sub_0075a8a0(void); };

// @baa 0x0075a8a0
int C_0075a8a0::sub_0075a8a0(void) { return *(int*)((char*)this + 0); }

struct C_0075a8b0 { int sub_0075a8b0(void); };

// @baa 0x0075a8b0
int C_0075a8b0::sub_0075a8b0(void) { return *(int*)((char*)this + 0); }

struct C_0075a8c0 { int sub_0075a8c0(void); };

// @baa 0x0075a8c0
int C_0075a8c0::sub_0075a8c0(void) { return *(int*)((char*)this + 0); }

struct C_0075a8d0 { int sub_0075a8d0(void); };

// @baa 0x0075a8d0
int C_0075a8d0::sub_0075a8d0(void) { return *(int*)((char*)this + 0); }

struct C_0075a8e0 { int sub_0075a8e0(void); };

// @baa 0x0075a8e0
int C_0075a8e0::sub_0075a8e0(void) { return *(int*)((char*)this + 0); }

struct C_0075a8f0 { int sub_0075a8f0(void); };

// @baa 0x0075a8f0
int C_0075a8f0::sub_0075a8f0(void) { return *(int*)((char*)this + 0); }

struct C_0075a900 { int sub_0075a900(void); };

// @baa 0x0075a900
int C_0075a900::sub_0075a900(void) { return *(int*)((char*)this + 0); }

struct C_0075a910 { int sub_0075a910(void); };

// @baa 0x0075a910
int C_0075a910::sub_0075a910(void) { return *(int*)((char*)this + 0); }

struct C_0075a920 { int sub_0075a920(void); };

// @baa 0x0075a920
int C_0075a920::sub_0075a920(void) { return *(int*)((char*)this + 0); }

struct C_0075a930 { int sub_0075a930(void); };

// @baa 0x0075a930
int C_0075a930::sub_0075a930(void) { return *(int*)((char*)this + 0); }

struct C_0075a940 { int sub_0075a940(void); };

// @baa 0x0075a940
int C_0075a940::sub_0075a940(void) { return *(int*)((char*)this + 0); }

struct C_0075a950 { int sub_0075a950(void); };

// @baa 0x0075a950
int C_0075a950::sub_0075a950(void) { return *(int*)((char*)this + 0); }

struct C_0075a960 { int sub_0075a960(void); };

// @baa 0x0075a960
int C_0075a960::sub_0075a960(void) { return *(int*)((char*)this + 0); }

struct C_0075a970 { int sub_0075a970(void); };

// @baa 0x0075a970
int C_0075a970::sub_0075a970(void) { return *(int*)((char*)this + 0); }

struct C_0075a980 { int sub_0075a980(void); };

// @baa 0x0075a980
int C_0075a980::sub_0075a980(void) { return *(int*)((char*)this + 0); }

struct C_0075a990 { int sub_0075a990(void); };

// @baa 0x0075a990
int C_0075a990::sub_0075a990(void) { return *(int*)((char*)this + 0); }

struct C_0075a9a0 { int sub_0075a9a0(void); };

// @baa 0x0075a9a0
int C_0075a9a0::sub_0075a9a0(void) { return *(int*)((char*)this + 0); }

struct C_0075a9b0 { int sub_0075a9b0(void); };

// @baa 0x0075a9b0
int C_0075a9b0::sub_0075a9b0(void) { return *(int*)((char*)this + 0); }

struct C_0075a9c0 { int sub_0075a9c0(void); };

// @baa 0x0075a9c0
int C_0075a9c0::sub_0075a9c0(void) { return *(int*)((char*)this + 0); }

struct C_0075a9d0 { int sub_0075a9d0(void); };

// @baa 0x0075a9d0
int C_0075a9d0::sub_0075a9d0(void) { return *(int*)((char*)this + 0); }

struct C_0075a9e0 { int sub_0075a9e0(void); };

// @baa 0x0075a9e0
int C_0075a9e0::sub_0075a9e0(void) { return *(int*)((char*)this + 0); }

struct C_0075a9f0 { int sub_0075a9f0(void); };

// @baa 0x0075a9f0
int C_0075a9f0::sub_0075a9f0(void) { return *(int*)((char*)this + 0); }

struct C_0075aa00 { int sub_0075aa00(void); };

// @baa 0x0075aa00
int C_0075aa00::sub_0075aa00(void) { return *(int*)((char*)this + 0); }

struct C_0075aa10 { int sub_0075aa10(void); };

// @baa 0x0075aa10
int C_0075aa10::sub_0075aa10(void) { return *(int*)((char*)this + 0); }

// @baa 0x0075aa20
bool sub_0075aa20(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0075aa50 { C_0075aa50* sub_0075aa50(void); };

// @baa 0x0075aa50
C_0075aa50* C_0075aa50::sub_0075aa50(void) { return this; }

struct C_0075aa60 { int sub_0075aa60(void); };

// @baa 0x0075aa60
int C_0075aa60::sub_0075aa60(void) { return *(int*)((char*)this + 0); }

struct C_0075aa70 {
    int sub_0075aa70(int);
};

// @baa 0x0075aa70
int C_0075aa70::sub_0075aa70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0075aa80 {
    int sub_0075aa80(int);
};

// @baa 0x0075aa80
int C_0075aa80::sub_0075aa80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0075aa90 { int sub_0075aa90(void); };

// @baa 0x0075aa90
int C_0075aa90::sub_0075aa90(void) { return *(int*)((char*)this + 20); }

struct C_0075aaa0 { int sub_0075aaa0(void); };

// @baa 0x0075aaa0
int C_0075aaa0::sub_0075aaa0(void) { return *(int*)((char*)this + 20); }

struct C_0075aab0 { int sub_0075aab0(void); };

// @baa 0x0075aab0
int C_0075aab0::sub_0075aab0(void) { return *(int*)((char*)this + 20); }

struct C_0075aac0 { int sub_0075aac0(void); };

// @baa 0x0075aac0
int C_0075aac0::sub_0075aac0(void) { return *(int*)((char*)this + 20); }

struct C_0075aad0 { int sub_0075aad0(void); };

// @baa 0x0075aad0
int C_0075aad0::sub_0075aad0(void) { return *(int*)((char*)this + 20); }

struct C_0075aae0 { int sub_0075aae0(void); };

// @baa 0x0075aae0
int C_0075aae0::sub_0075aae0(void) { return *(int*)((char*)this + 20); }

struct C_0075aaf0 { int sub_0075aaf0(void); };

// @baa 0x0075aaf0
int C_0075aaf0::sub_0075aaf0(void) { return *(int*)((char*)this + 20); }

struct C_0075ab00 { int sub_0075ab00(void); };

// @baa 0x0075ab00
int C_0075ab00::sub_0075ab00(void) { return *(int*)((char*)this + 20); }

struct C_0075ab10 { int sub_0075ab10(void); };

// @baa 0x0075ab10
int C_0075ab10::sub_0075ab10(void) { return *(int*)((char*)this + 20); }

struct C_0075ab20 {
    int sub_0075ab20(int);
};

// @baa 0x0075ab20
int C_0075ab20::sub_0075ab20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0075ab30 {
    int sub_0075ab30(int);
};

// @baa 0x0075ab30
int C_0075ab30::sub_0075ab30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0075ab40 {
    int sub_0075ab40(int);
};

// @baa 0x0075ab40
int C_0075ab40::sub_0075ab40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x0075ae50
uint sub_0075ae50(uint param_1, uint param_2)
{
  return param_1 | -(uint)(param_1 == 0) & param_2;
}

struct T_0075ae70 { int x; };

// @baa 0x0075ae70
template T_0075ae70& TIndirectArray<T_0075ae70>::operator()(INT);

struct C_0075af30 { int a, b; C_0075af30(const C_0075af30 &); };

// @baa 0x0075af30
C_0075af30::C_0075af30(const C_0075af30 &o) : a(o.a), b(o.b) {}

struct C_0075af50 { int a, b; C_0075af50(const C_0075af50 &); };

// @baa 0x0075af50
C_0075af50::C_0075af50(const C_0075af50 &o) : a(o.a), b(o.b) {}

struct C_0075af70 { C_0075af70* sub_0075af70(void); };

// @baa 0x0075af70
C_0075af70* C_0075af70::sub_0075af70(void) { *(int*)((char*)this + 0) = 0; return this; }

struct A_0075b040 { virtual void sub_0075fa30(); char pad[16]; };

struct B_0075b040 { virtual void sub_0075fa30(); };

struct C_0075b040 : A_0075b040, B_0075b040 { virtual void sub_0075fa30(); C_0075b040(); };

C_0075b040::C_0075b040() {}

// @baa 0x0075b040
void C_0075b040::sub_0075fa30() {}

struct A_0075b050 { virtual void sub_0075d4f0(); char pad[16]; };

struct B_0075b050 { virtual void sub_0075d4f0(); };

struct C_0075b050 : A_0075b050, B_0075b050 { virtual void sub_0075d4f0(); C_0075b050(); };

C_0075b050::C_0075b050() {}

// @baa 0x0075b050
void C_0075b050::sub_0075d4f0() {}

struct A_0075b060 { virtual void sub_0075fa50(); char pad[16]; };

struct B_0075b060 { virtual void sub_0075fa50(); };

struct C_0075b060 : A_0075b060, B_0075b060 { virtual void sub_0075fa50(); C_0075b060(); };

C_0075b060::C_0075b060() {}

// @baa 0x0075b060
void C_0075b060::sub_0075fa50() {}

// @baa 0x0075b0e0
void sub_0075b0e0(void) {  }

// @baa 0x0075b0f0
int sub_0075b0f0(void) { return 0; }

extern int g_01efe6e8;
struct C_0075b160 {
    C_0075b160* sub_0075b160();
};

// @baa 0x0075b160
C_0075b160* C_0075b160::sub_0075b160()
{
    *(void**)this = (void*)&g_01efe6e8;
    *(void**)((char*)this + 4) = 0;
    return this;
}

struct A_0075b280 { virtual void sub_00755b90(); char pad[64]; };

struct B_0075b280 { virtual void sub_00755b90(); };

struct C_0075b280 : A_0075b280, B_0075b280 { virtual void sub_00755b90(); C_0075b280(); };

C_0075b280::C_0075b280() {}

// @baa 0x0075b280
void C_0075b280::sub_00755b90() {}

struct A_0075b290 { virtual void sub_00755b80(); char pad[64]; };

struct B_0075b290 { virtual void sub_00755b80(); };

struct C_0075b290 : A_0075b290, B_0075b290 { virtual void sub_00755b80(); C_0075b290(); };

C_0075b290::C_0075b290() {}

// @baa 0x0075b290
void C_0075b290::sub_00755b80() {}

struct A_0075b2a0 { virtual void sub_00760b50(); char pad[64]; };

struct B_0075b2a0 { virtual void sub_00760b50(); };

struct C_0075b2a0 : A_0075b2a0, B_0075b2a0 { virtual void sub_00760b50(); C_0075b2a0(); };

C_0075b2a0::C_0075b2a0() {}

// @baa 0x0075b2a0
void C_0075b2a0::sub_00760b50() {}

// @baa 0x0075b350
// @baa 0x0075b390
IMPLEMENT_CLASS_AT(UWindDirectionalSourceComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorComponent.cpp", 49);

// @baa 0x0075b430
// @baa 0x0075e600
// @baa 0x0075e6c0
// @baa 0x0075e780
void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00765d90 { void* Data; int Num; int Max; void sub_00765d90(); };

// @baa 0x00765d90
void C_00765d90::sub_00765d90() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00765df0 {
    undefined4 sub_00765df0();
};

// @baa 0x00765df0
undefined4 C_00765df0::sub_00765df0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct T_00765ee0;
// @baa 0x00765ee0
template INT TArray<T_00765ee0*>::RemoveItem(T_00765ee0* const&);

struct C_00765f60 { void* Data; int Num; int Max; void sub_00765f60(); };

// @baa 0x00765f60
void C_00765f60::sub_00765f60() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00765fc0 {
    undefined4 sub_00765fc0();
};

// @baa 0x00765fc0
undefined4 C_00765fc0::sub_00765fc0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_00765fd0 { C_00765fd0* sub_00765fd0(void); };

// @baa 0x00765fd0
C_00765fd0* C_00765fd0::sub_00765fd0(void) { return this; }

struct C_00765fe0 { void* Data; int Num; int Max; void sub_00765fe0(); };

// @baa 0x00765fe0
void C_00765fe0::sub_00765fe0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00766040 { void* Data; int Num; int Max; void sub_00766040(); };

// @baa 0x00766040
void C_00766040::sub_00766040() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007660a0 { void* Data; int Num; int Max; void sub_007660a0(); };

// @baa 0x007660a0
void C_007660a0::sub_007660a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct T_00766100;
// @baa 0x00766100
template INT TArray<T_00766100*>::RemoveItem(T_00766100* const&);

struct C_007662f0 { void* Data; int Num; int Max; void sub_007662f0(); };

// @baa 0x007662f0
void C_007662f0::sub_007662f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

int sub_00766290(void);
// @baa 0x00766430
undefined4 ULensFlare::sub_00766430(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00766290();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0076a3a0 { C_0076a3a0* sub_0076a3a0(void); };

// @baa 0x0076a3a0
C_0076a3a0* C_0076a3a0::sub_0076a3a0(void) { return this; }

struct C_0076d3e0 { C_0076d3e0* sub_0076d3e0(void); };

// @baa 0x0076d3e0
C_0076d3e0* C_0076d3e0::sub_0076d3e0(void) { return this; }

struct C_0076d3f0 { C_0076d3f0* sub_0076d3f0(void); };

// @baa 0x0076d3f0
C_0076d3f0* C_0076d3f0::sub_0076d3f0(void) { return this; }

struct C_0076d400 { C_0076d400* sub_0076d400(void); };

// @baa 0x0076d400
C_0076d400* C_0076d400::sub_0076d400(void) { return this; }

struct C_0076d410 { C_0076d410* sub_0076d410(void); };

// @baa 0x0076d410
C_0076d410* C_0076d410::sub_0076d410(void) { return this; }

struct C_0076d420 { C_0076d420* sub_0076d420(void); };

// @baa 0x0076d420
C_0076d420* C_0076d420::sub_0076d420(void) { return this; }

struct C_0076d430 { C_0076d430* sub_0076d430(void); };

// @baa 0x0076d430
C_0076d430* C_0076d430::sub_0076d430(void) { return this; }

struct C_0076d440 { C_0076d440* sub_0076d440(void); };

// @baa 0x0076d440
C_0076d440* C_0076d440::sub_0076d440(void) { return this; }

struct C_0076d450 { C_0076d450* sub_0076d450(void); };

// @baa 0x0076d450
C_0076d450* C_0076d450::sub_0076d450(void) { return this; }

struct C_0076d460 { C_0076d460* sub_0076d460(void); };

// @baa 0x0076d460
C_0076d460* C_0076d460::sub_0076d460(void) { return this; }

struct C_0076d470 { C_0076d470* sub_0076d470(void); };

// @baa 0x0076d470
C_0076d470* C_0076d470::sub_0076d470(void) { return this; }

struct C_0076d480 { C_0076d480* sub_0076d480(void); };

// @baa 0x0076d480
C_0076d480* C_0076d480::sub_0076d480(void) { return this; }

struct C_0076d490 { C_0076d490* sub_0076d490(void); };

// @baa 0x0076d490
C_0076d490* C_0076d490::sub_0076d490(void) { return this; }

struct C_0076d4a0 { C_0076d4a0* sub_0076d4a0(void); };

// @baa 0x0076d4a0
C_0076d4a0* C_0076d4a0::sub_0076d4a0(void) { return this; }

struct C_0076d4b0 { C_0076d4b0* sub_0076d4b0(void); };

// @baa 0x0076d4b0
C_0076d4b0* C_0076d4b0::sub_0076d4b0(void) { return this; }

struct C_0076d4c0 { C_0076d4c0* sub_0076d4c0(void); };

// @baa 0x0076d4c0
C_0076d4c0* C_0076d4c0::sub_0076d4c0(void) { return this; }

struct C_0076d4d0 { C_0076d4d0* sub_0076d4d0(void); };

// @baa 0x0076d4d0
C_0076d4d0* C_0076d4d0::sub_0076d4d0(void) { return this; }

struct C_0076d4e0 { C_0076d4e0* sub_0076d4e0(void); };

// @baa 0x0076d4e0
C_0076d4e0* C_0076d4e0::sub_0076d4e0(void) { return this; }

struct C_0076d4f0 { C_0076d4f0* sub_0076d4f0(void); };

// @baa 0x0076d4f0
C_0076d4f0* C_0076d4f0::sub_0076d4f0(void) { return this; }

struct C_0076d500 { C_0076d500* sub_0076d500(void); };

// @baa 0x0076d500
C_0076d500* C_0076d500::sub_0076d500(void) { return this; }

struct C_0076d510 { C_0076d510* sub_0076d510(void); };

// @baa 0x0076d510
C_0076d510* C_0076d510::sub_0076d510(void) { return this; }

struct C_0076d520 { C_0076d520* sub_0076d520(void); };

// @baa 0x0076d520
C_0076d520* C_0076d520::sub_0076d520(void) { return this; }

struct C_0076d530 { C_0076d530* sub_0076d530(void); };

// @baa 0x0076d530
C_0076d530* C_0076d530::sub_0076d530(void) { return this; }

struct C_0076d540 {
    int sub_0076d540(int);
    int sub_00766700(int, int);
};

// @baa 0x0076d540
int C_0076d540::sub_0076d540(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_0076d540 *)(this))->sub_00766700((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

// @baa 0x00771380
IMPLEMENT_CLASS_AT(UMeshComponentFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorComponent.cpp", 52);

// @baa 0x007713a0
IMPLEMENT_CLASS_AT(UStaticMeshComponentFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorComponent.cpp", 53);

// @baa 0x00771fd0
// @baa 0x00772090
// @baa 0x00781c10
IMPLEMENT_CLASS_AT(UAudioComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorComponent.cpp", 47);

// @baa 0x007846f0

// @baa 0x007595c0
void UActorComponent::Tick(FLOAT DeltaTime)
{
#line 634 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorComponent.cpp"
	check(bAttached);
}

#line 1676 "candidate.cpp"

// UnSkelControl.cpp: 87 functions
// Placed here by: neighbours 45, class 29, file 9, callers 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0090c4f0
IMPLEMENT_CLASS_AT(USkelControlBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkelControl.cpp", 9);

// @baa 0x0090c600
int USkelControlBase::vf_000(void) { return 1; }

// @baa 0x0090c610
bool USkelControlBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0090c650
int USkelControlSingleBone::vf_000(void) { return 1; }

// @baa 0x0090c660
int USkelControlLookAt::vf_000(void) { return 1; }

// @baa 0x0090c670
int USkelControlSpline::vf_000(void) { return 1; }

// @baa 0x0090c680
int USkelControlLimb::vf_000(void) { return 1; }

// @baa 0x0090c690
int USkelControlFootPlacement::vf_000(void) { return 1; }

// @baa 0x0090c6a0
int USkelControlWheel::vf_000(void) { return 1; }

// @baa 0x0090c6b0
int USkelControlTrail::vf_000(void) { return 1; }

// @baa 0x0090c6c0
int USkelControl_CCD_IK::vf_000(void) { return 1; }

// @baa 0x0090cf20
float USkelControlBase::vf_148(void) { return *(float*)((char*)this + 92); }

int sub_005e59b0(void);
// @baa 0x0090cf50
void USkelControlBase::vf_01c(void)
{
    int param_1 = (int)this;

  if ((*(uint *)(param_1 + 0x74) & 0x10) != 0) {
    *(undefined1 *)(param_1 + 0x68) = 1;
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xffffffef;
  }
  sub_005e59b0();
  return;
}

struct C_view {
    int sub_005dfd20(int);
};

// @baa 0x0090cf70
void USkelControlBase::Serialize(FArchive& Ar) {
    UINT param_2 = (UINT)&Ar;
    int param_1 = (int)this;
  ((C_view *)(this))->sub_005dfd20(param_2);
  if (((*(int *)(param_2 + 4) < 0x240) && (*(int *)(param_1 + 0xa0) != -9999999)) &&
     (*(int *)(param_1 + 0xa4) != -9999999)) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0xa0);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0xa4);
    *(undefined4 *)(param_1 + 0xa0) = 0xff676981;
  }
  return;
}

// @baa 0x0090cfc0
void USkelControlBase::vf_11c(void) {  }

// @baa 0x0090cfd0
byte USkelControlSingleBone::vf_138(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0xa8) & 1;
}

// @baa 0x0090d050
FLOAT USkelControlLookAt::vf_148() {
    int param_1 = (int)this;

  return (float10)*(float *)(param_1 + 0xe8) * (float10)*(float *)(param_1 + 0x5c);
}

// @baa 0x0090d1b0
void USkelControlLookAt::vf_14c(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0xa8) = *param_2;
  *(undefined4 *)(param_1 + 0xac) = param_2[1];
  *(undefined4 *)(param_1 + 0xb0) = param_2[2];
  return;
}

// @baa 0x0090d1e0
int sub_0090d1e0(void) { return 2; }

// @baa 0x0090d2e0
int sub_0090d2e0(void) { return 1; }

// @baa 0x009224f0
void* USkelControlBase::vf_114() { return this; }

// @baa 0x00922500
void __stdcall sub_00922500(int a0, int a1, int a2) {  }

// @baa 0x00922510
void USkelControlBase::vf_128(int a0, int a1, int a2) {  }

// @baa 0x00922520
void USkelControlBase::vf_12c(int a0, int a1, int a2) {  }

// @baa 0x00922530
float USkelControlBase::vf_130(int a0, int a1) { return *(float*)((char*)this + 144); }

// @baa 0x00922560
int sub_00922560(void) { return 0; }

// @baa 0x00922590
void USkelControlBase::vf_140(int a0, int a1) {  }

// @baa 0x009225a0
void USkelControlBase::vf_144(int a0, int a1, int a2, int a3) {  }

// @baa 0x009225b0
void USkelControlBase::vf_14c(UINT* a0) {  }

void sub_009212c0();
// @baa 0x009225c0
void sub_009225c0(void) { sub_009212c0(); }

void sub_00921440();
// @baa 0x009225d0
void sub_009225d0(void) { sub_00921440(); }

void sub_009214a0();
// @baa 0x009225e0
void sub_009225e0(void) { sub_009214a0(); }

// @baa 0x0092f7d0
// @baa 0x0092f850
// @baa 0x0092f870
int sub_005c7a20(void);
extern undefined * g_01f787f8;
// @baa 0x0092f8a0
undefined4 * UObject::sub_0092f8a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f787f8);
  return param_1;
}

// @baa 0x0092f8c0
IMPLEMENT_CLASS_AT(USkelControl_CCD_IK, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkelControl.cpp", 17);

// @baa 0x0092f930
// @baa 0x0092f960
IMPLEMENT_CLASS_AT(USkelControlLimb, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkelControl.cpp", 13);

// @baa 0x0092f9c0
extern undefined * g_01f78948;
// @baa 0x0092f9f0
undefined4 * UObject::sub_0092f9f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f78948);
  return param_1;
}

extern undefined * g_01f78a98;
// @baa 0x0092fa10
undefined4 * UObject::sub_0092fa10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f78a98);
  return param_1;
}

// @baa 0x0092fa30
IMPLEMENT_CLASS_AT(USkelControlFootPlacement, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkelControl.cpp", 14);

// @baa 0x0092fa90
extern undefined * g_01f78be8;
// @baa 0x0092fac0
undefined4 * UObject::sub_0092fac0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f78be8);
  return param_1;
}

// @baa 0x0092fae0
int sub_0092fae0(void) { return 1; }

// @baa 0x0092faf0
IMPLEMENT_CLASS_AT(USkelControlLookAt, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkelControl.cpp", 11);

// @baa 0x0092fb50
// @baa 0x0092fb80
IMPLEMENT_CLASS_AT(USkelControlSingleBone, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkelControl.cpp", 10);

// @baa 0x0092fbe0
extern undefined * g_01f78d40;
// @baa 0x0092fc10
undefined4 * UObject::sub_0092fc10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f78d40);
  return param_1;
}

extern undefined * g_01f78e90;
// @baa 0x0092fc30
undefined4 * UObject::sub_0092fc30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f78e90);
  return param_1;
}

// @baa 0x0092fc50
IMPLEMENT_CLASS_AT(USkelControlWheel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkelControl.cpp", 15);

// @baa 0x0092fcb0
extern undefined * g_01f78fe0;
// @baa 0x0092fce0
undefined4 * UObject::sub_0092fce0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f78fe0);
  return param_1;
}

// @baa 0x0092fd00
IMPLEMENT_CLASS_AT(USkelControlSpline, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkelControl.cpp", 12);

// @baa 0x0092fd60
extern undefined * g_01f79130;
// @baa 0x0092fd90
undefined4 * UObject::sub_0092fd90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f79130);
  return param_1;
}

// @baa 0x0092fdb0
IMPLEMENT_CLASS_AT(USkelControlTrail, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkelControl.cpp", 16);

// @baa 0x0092fe20
// @baa 0x0092fe50
// @baa 0x00936f60
// @baa 0x00936f80
// @baa 0x00936fa0
// @baa 0x00936fc0
// @baa 0x00936fe0
// @baa 0x00937000
// @baa 0x00937020
// @baa 0x00937040
// @baa 0x00937060
// @baa 0x00937120
// @baa 0x00937230
bool USkelControlSingleBone::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00937270
// @baa 0x00937330
// @baa 0x00937440
bool USkelControlLookAt::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00937480
// @baa 0x00937540
// @baa 0x00937650
bool USkelControlSpline::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00937690
// @baa 0x00937750
// @baa 0x00937860
bool USkelControlLimb::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009378a0
// @baa 0x00937960
// @baa 0x00937a20
// @baa 0x00937ae0
// @baa 0x00937bf0
bool USkelControlTrail::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00937c30

// UnSceneCapture.cpp (part 1 of 2): 65 functions
// Placed here by: callers 13, file 11, neighbours 7.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x008a6e60
IMPLEMENT_CLASS_AT(USceneCaptureComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSceneCapture.cpp", 10);

struct C{
int sub_008b1a10(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x008b1a10
int C::sub_008b1a10(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

int sub_0053dfa0(...);
int sub_008c5a00(void);
// @baa 0x008cde50
undefined4 USeqVar_Union::sub_008cde50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_008c5a00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x008ce1d0
// @baa 0x008cf0a0
// @baa 0x008d2560
IMPLEMENT_CLASS_AT(USceneCapture2DComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSceneCapture.cpp", 11);

// @baa 0x008d25b0
IMPLEMENT_CLASS_AT(USceneCaptureCubeMapComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSceneCapture.cpp", 12);

// @baa 0x008d25d0
IMPLEMENT_CLASS_AT(USceneCapturePortalComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSceneCapture.cpp", 14);

// @baa 0x008d25f0
IMPLEMENT_CLASS_AT(USceneCaptureReflectComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSceneCapture.cpp", 13);

// @baa 0x008d2610
// @baa 0x008d26d0
// @baa 0x008d27e0
bool USceneCapture2DComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008d2820
// @baa 0x008d28e0
// @baa 0x008d29f0
bool USceneCaptureCubeMapComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008d2a30
// @baa 0x008d2af0
// @baa 0x008d2c00
bool USceneCaptureReflectComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008d2c40
// @baa 0x008e03b0
IMPLEMENT_CLASS_AT(ASceneCaptureActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSceneCapture.cpp", 15);

// @baa 0x008e03e0
IMPLEMENT_CLASS_AT(ASceneCapture2DActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSceneCapture.cpp", 16);

// @baa 0x008e0410
IMPLEMENT_CLASS_AT(ASceneCaptureCubeMapActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSceneCapture.cpp", 17);

// @baa 0x008e0440
IMPLEMENT_CLASS_AT(ASceneCaptureReflectActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSceneCapture.cpp", 18);

// @baa 0x008e0470
IMPLEMENT_CLASS_AT(ASceneCapturePortalActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSceneCapture.cpp", 19);

// @baa 0x008e04a0
IMPLEMENT_CLASS_AT(APortalTeleporter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSceneCapture.cpp", 20);

// @baa 0x008e0590
// @baa 0x008e0650
// @baa 0x008e0710
// @baa 0x008e07d0
// @baa 0x008e0890
// @baa 0x008e0950

// @baa 0x008a6f70
int USceneCaptureComponent::vf_000(void) { return 1; }

// @baa 0x008a6f80
bool USceneCaptureComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008a6fc0
int USceneCapture2DComponent::vf_000(void) { return 1; }

// @baa 0x008a6fd0
int USceneCaptureCubeMapComponent::vf_000(void) { return 1; }

// @baa 0x008a6fe0
int USceneCaptureReflectComponent::vf_000(void) { return 1; }

// @baa 0x008a6ff0
int USceneCapturePortalComponent::vf_000(void) { return 1; }

// @baa 0x008a7000

// @baa 0x008a7110
int ASceneCaptureActor::vf_000(void) { return 1; }

// @baa 0x008a7120
bool ASceneCaptureActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008a7160
int ASceneCapture2DActor::vf_000(void) { return 1; }

// @baa 0x008a7170
int ASceneCaptureCubeMapActor::vf_000(void) { return 1; }

// @baa 0x008a7180
int ASceneCaptureReflectActor::vf_000(void) { return 1; }

// @baa 0x008a7190
int ASceneCapturePortalActor::vf_000(void) { return 1; }

// @baa 0x008a71a0
int APortalTeleporter::vf_000(void) { return 1; }

int sub_007654e0(void);
// @baa 0x008a71b0
void USceneCaptureComponent::vf_114(void)
{
    int param_1 = (int)this;

  sub_007654e0();
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x20;
  return;
}

void sub_005db340();
// @baa 0x008a72e0
void USceneCaptureComponent::vf_02c(void) { sub_005db340(); }

struct C_008a7480 {
    undefined4 sub_008a7480(byte);
};

int sub_00af9490(void);
// @baa 0x008a7480
undefined4 C_008a7480::sub_008a7480(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00af9490();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x008a7510
void sub_008a7510(void) {  }

// @baa 0x008a7520
void USceneCaptureReflectComponent::vf_114(void)
{
    int param_1 = (int)this;

  sub_007654e0();
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x20;
  return;
}

// @baa 0x008a7530
void sub_008a7530(void) {  }

// @baa 0x008a7540
void sub_008a7540(void) {  }

// @baa 0x008a7550
void USceneCapturePortalComponent::vf_114(void)
{
    int param_1 = (int)this;

  sub_007654e0();
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x20;
  return;
}

struct FVec_ {
    FLOAT X, Y, Z;
    FVec_() {}
    FVec_(FLOAT InX, FLOAT InY, FLOAT InZ) : X(InX), Y(InY), Z(InZ) {}
};

struct FLocOwner_ {
    INT Pad0;
    AActor* Base;        /* 0x4 */
    BYTE Pad1[0x98];
    AActor* Target;      /* 0xa0 */
    FVec_ sub_008a7560();
};

// @baa 0x008a7560
FVec_ FLocOwner_::sub_008a7560()
{
    if (Target)
    {
        return *(FVec_*)&Target->Location;
    }
    if (Base)
    {
        return *(FVec_*)&Base->Location;
    }
    return FVec_(0.f, 0.f, 0.f);
}

int sub_005c7a20(void);
struct C_008ce2c0 {
    undefined4 * sub_008ce2c0();
};

extern undefined * g_01f60cd0;
// @baa 0x008ce2c0
undefined4 * C_008ce2c0::sub_008ce2c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x13] = param_1[0x13] | 0x20;
  *param_1 = (undefined4)(&g_01f60cd0);
  return param_1;
}

struct C_008ce370 {
    undefined4 * sub_008ce370();
};

extern undefined * g_01f60e28;
// @baa 0x008ce370
undefined4 * C_008ce370::sub_008ce370(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x13] = param_1[0x13] | 0x20;
  *param_1 = (undefined4)(&g_01f60e28);
  return param_1;
}

struct C_008ce420 {
    undefined4 * sub_008ce420();
};

extern undefined * g_01f60f80;
// @baa 0x008ce420
undefined4 * C_008ce420::sub_008ce420(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x13] = param_1[0x13] | 0x20;
  *param_1 = (undefined4)(&g_01f60f80);
  return param_1;
}

// @baa 0x008d2d00

// @baa 0x008d2e10
bool USceneCapturePortalComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008eede0

// @baa 0x008eeef0
bool ASceneCapture2DActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008eef30

// @baa 0x008ef040
bool ASceneCaptureCubeMapActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008ef080

// @baa 0x008ef190
bool ASceneCaptureReflectActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

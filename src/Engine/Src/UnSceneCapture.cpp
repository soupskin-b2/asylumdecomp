// UnSceneCapture.cpp (part 1 of 2): 31 functions
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

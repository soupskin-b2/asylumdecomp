// RCapeStateController.cpp (part 5 of 6): 5 functions
// Placed here by: neighbours 2, class 1, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053df70(...);
// @baa 0x016d5990
void URCapeStateController::sub_016d5990(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0xc,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C {
    void sub_016d82b0(int);
};

// @baa 0x016d82b0
void C::sub_016d82b0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_016d87b0 {
    void sub_016d87b0(int);
};

// @baa 0x016d87b0
void C_016d87b0::sub_016d87b0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_016db1a0{
void sub_016db1a0(int);
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x016db1a0
void C_016db1a0::sub_016db1a0(int param_2)
{
int*param_1=(int*)this;
int iVar1;
int iVar2;
iVar1=param_1[1];
iVar2=0;
if(0<iVar1){
do{
if((iVar2<0)||((iVar2>=param_1[1]&&((iVar2!=0||(0!=param_1[1])))))){
sub_006311e0("i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0))",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x230,&g_01e3f3dc);
}
iVar2=iVar2+1;
}while(iVar2<iVar1);
}
param_1[1]=0;
if(param_1[2]!=param_2){
param_1[2]=param_2;
if((*param_1!=0)||(param_2!=0)){
iVar1=sub_0053df70(*param_1,param_2*0x50,8);
*param_1=iVar1;
}
}
return;
}

// The native cape physics object behind URCapeStateController::CapePhysicsRef (an FPointer in
// the headers); its class name isn't known.
class FRCapePhysics {
public:
    void sub_016c7070(FLOAT DeltaTime);
    UINT sub_016af420();
};

struct URCapeStateController_ : public URCapeStateController {
    URCapeComponent* GetOwner()
    {
#line 377 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeStateController.cpp"
        check(Owner != NULL);
        return Owner;
    }
    FRCapePhysics* GetCapePhysics()
    {
        // check(CapePhysicsRef != NULL), written out: the headers declare CapePhysicsRef as an FPointer.
#line 390 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeStateController.cpp"
        if (!CapePhysicsRef.Dummy) appFailAssert("CapePhysicsRef != NULL", __FILE__, __LINE__, TEXT(""));
        return (FRCapePhysics*)CapePhysicsRef.Dummy;
    }
    void sub_016e68f0(FLOAT DeltaTime, INT Param2, INT Param3);
};

// @baa 0x016e68f0
void URCapeStateController_::sub_016e68f0(FLOAT DeltaTime, INT Param2, INT Param3)
{
    FMatrix LocalToWorld;
    CapeAnimNode->sub_01569870(LocalToWorld);
    ((FRCapePhysics*)CapePhysicsRef.Dummy)->sub_016c7070(DeltaTime);

    const UINT NumBones = GetCapePhysics()->sub_016af420();
    for (UINT BoneIndex = 0; BoneIndex < NumBones; BoneIndex++)
    {
        sub_016e4940(BoneIndex, DeltaTime, LocalToWorld, Param2, Param3);
    }

    if (GetOwner()->IsPhysicsPostProcessEnabled)
    {
        sub_016e0260(DeltaTime, LocalToWorld);
    }
}

#line 153 "candidate.cpp"

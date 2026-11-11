// SceneCore.cpp: 3 functions
// Placed here by: file 1, callers 1, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    int * sub_00ab4cc0(int, int);
};

int sub_006311e0(...);
extern undefined4 g_01fd6230;
extern undefined4 g_01fd6308;
extern undefined4 g_01fd63f8;
// @baa 0x00ab4cc0
int * C::sub_00ab4cc0(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  *param_1 = param_3;
  param_1[1] = param_2;
  param_1[2] = -1;
  param_1[3] = -1;
  param_1[4] = 0;
  if (param_2 == 0) {
    sub_006311e0("Component",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\SceneCore.cpp"
                 ,0x10c,&g_01fd6230);
  }
  if (*param_1 == 0) {
    sub_006311e0("SceneCaptureProbe",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\SceneCore.cpp"
                 ,0x10d,&g_01fd6308);
  }
  if (*(int *)(param_2 + 0x78) != 0) {
    sub_006311e0("InComponent->CaptureInfo == NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\SceneCore.cpp"
                 ,0x10e,&g_01fd63f8);
  }
  *(int **)(param_2 + 0x78) = param_1;
  return param_1;
}

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x00abce40
int ULensFlare::sub_00abce40(int*param_2)
{
int*param_1=(int*)this;

int*piVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
piVar1=(int*)(*param_1+iVar2*4);
if(piVar1!=(int*)0x0){
iVar3=*param_2;
*piVar1=iVar3;
if(iVar3!=0){
*(int*)(iVar3+4)=*(int*)(iVar3+4)+1;
}
}
return iVar2;
}

struct C_00ac58a0 {
    undefined4 * sub_00ac58a0(byte);
};

int sub_00ab4c20(void);
extern undefined4 g_026bb6b0;
extern undefined4 g_026bb6b8;
// @baa 0x00ac58a0
undefined4 * C_00ac58a0::sub_00ac58a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00ab4c20();
  if ((param_2 & 1) != 0) {
    g_026bb6b8 = g_026bb6b8 + -1;
    *param_1 = g_026bb6b0;
    g_026bb6b0 = (undefined4)(param_1);
  }
  return param_1;
}

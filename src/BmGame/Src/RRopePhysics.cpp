// RRopePhysics.cpp (part 1 of 3): 15 functions
// Placed here by: neighbours 9, callers 4, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    float10 sub_0163faf0();
};

// @baa 0x0163faf0
float10 C::sub_0163faf0(void)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(param_1 + 0x10) + 0x10);
}

struct C_01647250{
int sub_01647250(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x01647250
int C_01647250::sub_01647250(undefined4*param_2)
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

struct C_0165cf60 {
    int sub_0165cf60();
};

int sub_006311e0(...);
int sub_0165ad00(...);
extern undefined2 g_01e3f3dc;
extern undefined4 g_02353cb8;
// @baa 0x0165cf60
int C_0165cf60::sub_0165cf60(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    sub_006311e0("m_pOwner != NULL",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\bmgame\\inc\\RRopePhysicsBase.h"
                 ,0x92,&g_01e3f3dc);
  }
  iVar1 = sub_0165ad00(*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
    sub_006311e0("pOwner != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RRopePhysics.cpp"
                 ,0x31,&g_02353cb8);
  }
  return iVar1;
}

struct C_0165cfc0 {
    int sub_0165cfc0();
};

int sub_0165ad60(...);
extern undefined4 g_02353d98;
// @baa 0x0165cfc0
int C_0165cfc0::sub_0165cfc0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    sub_006311e0("m_pOwner != NULL",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\bmgame\\inc\\RRopePhysicsBase.h"
                 ,0x98,&g_01e3f3dc);
  }
  iVar1 = sub_0165ad60(*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
    sub_006311e0("pOwner != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RRopePhysics.cpp"
                 ,0x38,&g_02353d98);
  }
  return iVar1;
}

int sub_0165cf60(void);
// @baa 0x0165d020
float10 sub_0165d020(void)
{
  int iVar1;
  
  iVar1 = sub_0165cf60();
  return (float10)*(float *)(iVar1 + 0x25c);
}

// @baa 0x0165d050
undefined4 sub_0165d050(void)
{
  int iVar1;
  
  iVar1 = sub_0165cf60();
  return *(undefined4 *)(iVar1 + 0x264);
}

// @baa 0x0165d0a0
float10 sub_0165d0a0(void)
{
  int iVar1;
  
  iVar1 = sub_0165cf60();
  return (float10)*(float *)(iVar1 + 0x274);
}

// @baa 0x0165d0b0
float10 sub_0165d0b0(void)
{
  int iVar1;
  
  iVar1 = sub_0165cf60();
  return (float10)*(float *)(iVar1 + 0x278);
}

// @baa 0x0165d0c0
float10 sub_0165d0c0(void)
{
  int iVar1;
  
  iVar1 = sub_0165cf60();
  return (float10)*(float *)(iVar1 + 0x27c);
}

// @baa 0x0165d0d0
float10 sub_0165d0d0(void)
{
  int iVar1;
  
  iVar1 = sub_0165cf60();
  return (float10)*(float *)(iVar1 + 0x280);
}

// @baa 0x0165d0e0
float10 sub_0165d0e0(void)
{
  int iVar1;
  
  iVar1 = sub_0165cf60();
  return (float10)*(float *)(iVar1 + 0x284);
}

// @baa 0x0165d130
float10 sub_0165d130(void)
{
  int iVar1;
  
  iVar1 = sub_0165cf60();
  return (float10)*(float *)(iVar1 + 0x28c);
}

struct C_01668d70 {
    uint sub_01668d70();
};

// @baa 0x01668d70
uint C_01668d70::sub_01668d70(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    sub_006311e0("m_pOwner != NULL",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\bmgame\\inc\\RRopePhysicsBase.h"
                 ,0x92,&g_01e3f3dc);
  }
  return *(uint *)(*(int *)(param_1 + 4) + 0x1a4) >> 1 & 1;
}

struct C_01668db0 {
    uint sub_01668db0();
};

// @baa 0x01668db0
uint C_01668db0::sub_01668db0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    sub_006311e0("m_pOwner != NULL",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\bmgame\\inc\\RRopePhysicsBase.h"
                 ,0x92,&g_01e3f3dc);
  }
  return *(uint *)(*(int *)(param_1 + 4) + 0x1a4) >> 2 & 1;
}

struct C_01669d10 {
    int sub_01669d10();
};

// @baa 0x01669d10
int C_01669d10::sub_01669d10(void)
{
    int param_1 = (int)this;

  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  for (iVar1 = *(int *)(param_1 + 0x1c); iVar1 != *(int *)(param_1 + 0x20);
      iVar1 = *(int *)(iVar1 + 0x1c)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

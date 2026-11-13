// ParticlePhysXSpriteEmitterInstance.cpp: 6 functions
// Placed here by: file 2, neighbours 2, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_00b501f0();
};

int sub_006311e0(...);
extern undefined4 g_01ff04cc;
// @baa 0x00b501f0
undefined4 C::sub_00b501f0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x164) + 0x48);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x84) == 0)) {
    sub_006311e0("PhysXTypeData.PhysXParSys && PhysXTypeData.PhysXParSys->PSys",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticlePhysXSpriteEmitterInstance.cpp"
                 ,0x43,&g_01ff04cc);
  }
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x164) + 0x48) + 0x84);
}

struct C_00b503d0 {
    void sub_00b503d0();
};

// @baa 0x00b503d0
void C_00b503d0::sub_00b503d0(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  return;
}

struct C_00b50420 { void sub_00b50420(int a0); };

// @baa 0x00b50420
void C_00b50420::sub_00b50420(int a0) { *(int*)((char*)this + 364) = a0; }

struct C_00b50430 {
    float10 sub_00b50430();
};

extern undefined4 g_01ff0c24;
extern undefined4 g_01ff0c94;
// @baa 0x00b50430
float10 C_00b50430::sub_00b50430(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 400) == 0) {
    sub_006311e0(&g_01ff0c94,
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticlePhysXSpriteEmitterInstance.cpp"
                 ,0x262,&g_01ff0c24);
  }
  return (float10)*(float *)(*(int *)(*(int *)(param_1 + 400) + 0x38) + 4);
}

typedef uint size_t;

struct C_00b51db0{
void sub_00b51db0(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
uint sub_0053df70(...);
extern undefined2 g_01e3f3dc;
// @baa 0x00b51db0
void C_00b51db0::sub_00b51db0(int param_2,int param_3)
{
int*param_1=(int*)this;
int iVar1;
INT iVar2;
if(param_3<0){
sub_006311e0("Count>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31a,&g_01e3f3dc);
}
if(param_1[1]<0){
sub_006311e0("ArrayNum>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31b,&g_01e3f3dc);
}
if(param_1[2]<param_1[1]){
sub_006311e0("ArrayMax>=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31c,&g_01e3f3dc);
}
if(param_2<0){
sub_006311e0("Index>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31d,&g_01e3f3dc);
}
if(param_2>param_1[1]){
sub_006311e0("Index<=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31e,&g_01e3f3dc);
}
iVar1=param_1[1];
iVar2=iVar1+param_3;
param_1[1]=iVar2;
if(iVar2>param_1[2]){
iVar2=sub_0053d240(iVar2,param_1[2],0xc);
param_1[2]=iVar2;
if((*param_1!=0)||(iVar2)){
iVar2=sub_0053df70(*param_1,iVar2*0xc,8);
*param_1=iVar2;
}
}
sub_0053df30((void*)(*param_1+(param_2+param_3)*0xc),(void*)(*param_1+param_2*0xc),
(iVar1-param_2)*0xc);
return;
}

// A free helper: forwards a scalar update to sub_00b467e0.
struct FObject_00b50390
{
	void sub_00b467e0(FLOAT Value);
	void sub_00b50390(FLOAT Value);
};

// @baa 0x00b50390
void FObject_00b50390::sub_00b50390(FLOAT Value)
{
	sub_00b467e0(Value);
}

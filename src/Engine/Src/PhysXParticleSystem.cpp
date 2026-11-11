// PhysXParticleSystem.cpp: 24 functions
// Placed here by: neighbours 8, callers 8, class 6, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00df03c0
IMPLEMENT_CLASS_AT(UPhysXParticleSystem, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PhysXParticleSystem.cpp", 17);

// @baa 0x00df0420
// @baa 0x00df1aa0
// @baa 0x00df1bb0
int UPhysXParticleSystem::vf_000(void) { return 1; }

// @baa 0x00df1bc0
bool UPhysXParticleSystem::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C {
    bool sub_00df1c90();
};

// @baa 0x00df1c90
bool C::sub_00df1c90(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

// @baa 0x00df6730
// @baa 0x00df78c0
struct C_00dfa8a0{
int sub_00dfa8a0(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x00dfa8a0
int C_00dfa8a0::sub_00dfa8a0(undefined4*param_2)
{
int*param_1=(int*)this;

int iVar2;
int iVar1;
undefined4*puVar3;

iVar1=param_1[1];
iVar2=iVar1+1;
param_1[1]=iVar2;
if(iVar2>param_1[2]){
iVar2=sub_0053d240(iVar2,param_1[2],0x10);
param_1[2]=iVar2;
if((*param_1!=0)||(iVar2)){
iVar2=sub_0053df70(*param_1,iVar2<<4,8);
*param_1=iVar2;
}
}
puVar3=(undefined4*)(iVar1*0x10+*param_1);
if((undefined4*)0x0!=puVar3){
*puVar3=*param_2;
puVar3[1]=param_2[1];
puVar3[2]=param_2[2];
puVar3[3]=param_2[3];
}
return iVar1;
}

struct C_00dfa910 {
    void sub_00dfa910(int, int);
};

int sub_00627f00(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x00dfa910
void C_00dfa910::sub_00dfa910(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  if ((param_2 < 0) || (param_3 < 0)) {
    sub_006311e0("(A >= 0) && (B >= 0)",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,0x41f,&g_01e3f3dc);
  }
  if ((param_1[1] <= param_2) || (param_1[1] <= param_3)) {
    sub_006311e0("(ArrayNum > A) && (ArrayNum > B)",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,0x420,&g_01e3f3dc);
  }
  if (param_2 != param_3) {
    sub_00627f00(param_2 * 0x10 + *param_1,param_3 * 0x10 + *param_1,0x10);
  }
  return;
}

struct T_00dfec50;
// @baa 0x00dfec50
template INT TArray<T_00dfec50*>::RemoveItem(T_00dfec50* const&);

struct C_00dfed40 {
    void sub_00dfed40();
};

extern "C" __declspec(dllimport) int free(...);
// @baa 0x00dfed40
void C_00dfed40::sub_00dfed40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

struct C_00dfed70 {
    void sub_00dfed70();
};

// @baa 0x00dfed70
void C_00dfed70::sub_00dfed70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  param_1[1] = *param_1;
  return;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00dfed80 { void* Data; int Num; int Max; void sub_00dfed80(); };

// @baa 0x00dfed80
void C_00dfed80::sub_00dfed80() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct T_00dfee90;
// @baa 0x00dfee90
template INT TArray<T_00dfee90*>::RemoveItem(T_00dfee90* const&);

struct C_00dfef10 { void* Data; int Num; int Max; void sub_00dfef10(); };

// @baa 0x00dfef10
void C_00dfef10::sub_00dfef10() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00dfef70 {
    void sub_00dfef70(int);
};

// @baa 0x00dfef70
void C_00dfef70::sub_00dfef70(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00dfefb0 { void* Data; int Num; int Max; void sub_00dfefb0(); };

// @baa 0x00dfefb0
void C_00dfefb0::sub_00dfefb0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00dff010 {
    void sub_00dff010(int);
};

// @baa 0x00dff010
void C_00dff010::sub_00dff010(int param_2)
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

struct C_00dff050 { void* Data; int Num; int Max; void sub_00dff050(); };

// @baa 0x00dff050
void C_00dff050::sub_00dff050() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00e007c0 {
    void sub_00e007c0();
};

// @baa 0x00e007c0
void C_00e007c0::sub_00e007c0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 0x150) != (void *)0x0) {
    free(*(void **)(param_1 + 0x150));
  }
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  return;
}

struct C_00e00de0 {
    void sub_00e00de0(int);
    int sub_00df8560(int);
    int sub_00e00c50(int);
    int sub_00df84e0();
};

// @baa 0x00e00de0
void C_00e00de0::sub_00e00de0(int param_2)
{
    int param_1 = (int)this;
  if ((*(int *)(param_1 + 0x68) != 0) && (0 < param_2)) {
    ((C_00e00de0 *)(this))->sub_00df8560((int)(&param_2));
    if (0 < param_2) {
      ((C_00e00de0 *)(this))->sub_00e00c50(param_2);
      ((C_00e00de0 *)(this))->sub_00df84e0();
    }
  }
  return;
}

struct S {
    void sub_00df8890();
    void sub_00dfcd80();
    void sub_00e013d0();
};

// @baa 0x00e013d0
void S::sub_00e013d0() {
    sub_00df8890();
    sub_00dfcd80();
}

struct C_view {
    int sub_00e00ec0(int);
    int sub_00e0cbf0();
};

extern undefined4 g_020d95c8;
// @baa 0x00e0cc80
void UPhysXParticleSystem::sub_00e0cc80(int param_2)
{
    int param_1 = (int)this;
  if (*(int *)(param_1 + 0x84) != 0) {
    if (param_2 == 0) {
      sub_006311e0("SpawnInstance",
                   "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PhysXParticleSystem.cpp"
                   ,0x148,&g_020d95c8);
    }
    ((C_view *)((*(char **)((char *)this + 0x84))))->sub_00e00ec0(param_2);
    if (*(int *)(*(int *)(param_1 + 0x84) + 0x84) == 0) {
      ((C_view *)(this))->sub_00e0cbf0();
    }
  }
  return;
}

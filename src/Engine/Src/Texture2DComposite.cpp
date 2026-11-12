// Texture2DComposite.cpp: 11 functions
// Placed here by: neighbours 5, callers 3, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x0071d810
int UTexture2D::sub_0071d810(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],0x14);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3!=0)){
iVar3=sub_0053df70(*param_1,iVar3*0x14,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*0x14);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
puVar1[2]=param_2[2];
puVar1[3]=param_2[3];
puVar1[4]=param_2[4];
}
return iVar2;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_00722670(); };

// @baa 0x00722670
void C::sub_00722670() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct S {
    TArray<WORD> Words; // 0x00
    WORD* sub_007226d0(INT Index);
};

// @baa 0x007226d0
WORD* S::sub_007226d0(INT Index)
{
    return &Words(Index);
}

struct C_00722720 { int sub_00722720(void); };

// @baa 0x00722720
int C_00722720::sub_00722720(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00722730 { void* Data; int Num; int Max; void sub_00722730(); };

// @baa 0x00722730
void C_00722730::sub_00722730() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00722790 {
    void sub_00722790(int);
};

// @baa 0x00722790
void C_00722790::sub_00722790(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x14,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0072b2d0 {
    undefined4 sub_0072b2d0(byte);
};

int sub_0053dfa0(...);
int sub_00725b50(void);
// @baa 0x0072b2d0
undefined4 C_0072b2d0::sub_0072b2d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00725b50();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0072efd0
IMPLEMENT_CLASS_AT(UTexture2DComposite, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\Texture2DComposite.cpp", 8);

// @baa 0x0072fc30

// @baa 0x00718020
int UTexture2DComposite::vf_000(void) { return 1; }

extern char g_01eeb23c[];
// @baa 0x00718030
int sub_00718030(void) { return (int)g_01eeb23c; }

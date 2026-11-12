// Engine_0ce0000.cpp: 20 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00ce7f80
void sub_00ce7f80(void) {  }

// @baa 0x00ce7f90
float10 sub_00ce7f90(double param_1)
{
  return (float10)param_1;
}

// @baa 0x00ce8260
undefined2 sub_00ce8260(void)
{
  return 0x69;
}

// @baa 0x00ce8270
undefined2 sub_00ce8270(void)
{
  return 0x66;
}

// @baa 0x00ce8350
int sub_00ce8350(int a0, int a1) { return a1; }

// @baa 0x00ce8360
int sub_00ce8360(int a0, int a1) { return a1; }

extern char g_020969ec[];
struct C { C* sub_00ce8370(void); };

// @baa 0x00ce8370
C* C::sub_00ce8370(void) { *(int*)((char*)this + 0) = (int)g_020969ec; return this; }

// @baa 0x00ceb130
int UInterpTrackInstToggle::vf_000(void) { return 1; }

// @baa 0x00ceb3d0
int UInterpTrackInstVisibility::vf_000(void) { return 1; }

// @baa 0x00ceb3e0
int UInterpTrackParticleReplay::vf_000(void) { return 1; }

// @baa 0x00ceb3f0
int UInterpTrackInstParticleReplay::vf_000(void) { return 1; }

// @baa 0x00cef3f0
INT UInterpTrackParticleReplay::GetNumKeyframes() { return *(int*)((char*)this + 84); }

struct C_00cef400{
int sub_00cef400(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00cef400
int C_00cef400::sub_00cef400(undefined4*param_2)
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

struct E { BYTE Bytes[16]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_00cef460(INT Index);
};

// @baa 0x00cef460
E* S::sub_00cef460(INT Index)
{
    return &Items(Index);
}

struct C_00ceff20 {
    int sub_00ceff20(int);
};

// @baa 0x00ceff20
int C_00ceff20::sub_00ceff20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00ceff30 {
    int sub_00ceff30(int);
};

// @baa 0x00ceff30
int C_00ceff30::sub_00ceff30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00ceff40 { C_00ceff40* sub_00ceff40(void); };

// @baa 0x00ceff40
C_00ceff40* C_00ceff40::sub_00ceff40(void) { *(int*)((char*)this + 8) = -1; return this; }

struct C_00ceff80 { int sub_00ceff80(void); };

// @baa 0x00ceff80
int C_00ceff80::sub_00ceff80(void) { return *(int*)((char*)this + 20); }

struct C_00ceff90 { int sub_00ceff90(void); };

// @baa 0x00ceff90
int C_00ceff90::sub_00ceff90(void) { return *(int*)((char*)this + 20); }

struct C_00ceffa0 {
    int sub_00ceffa0();
};

// @baa 0x00ceffa0
int C_00ceffa0::sub_00ceffa0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

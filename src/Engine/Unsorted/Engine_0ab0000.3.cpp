// Engine_0ab0000.cpp (part 3 of 3): 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    undefined4 sub_00abbe20(byte);
};

int sub_0053dfa0(...);
int sub_007249d0(void);
// @baa 0x00abbe20
undefined4 C::sub_00abbe20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00abc780
undefined4 ULensFlare::sub_00abc780(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00abc810
undefined4 ULensFlare::sub_00abc810(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00abcfe0
int ULensFlare::sub_00abcfe0(undefined4*param_2)
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

// @baa 0x00abd460
int ULensFlare::sub_00abd460(undefined4*param_2)
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

struct sub_00ab2090_struct
{
	void sub_00ab1f50(sub_00ab2090_struct* Other);
};

// @baa 0x00ab2090
sub_00ab2090_struct* sub_00ab2090(sub_00ab2090_struct* This, sub_00ab2090_struct* Other)
{
	This->sub_00ab1f50((sub_00ab2090_struct*)((char*)Other + 0x10));
	return This;
}

struct C_00ab8f80 {
  int Field0;  // +0x0
  int Field4;  // +0x4
  int Ref;     // +0x8
  void sub_00ab8f80();
};

extern int *g_026b0d94;
// @baa 0x00ab8f80
void C_00ab8f80::sub_00ab8f80(void)
{
  if (Ref != 0) {
    (*(int(__stdcall **)(int))(*g_026b0d94 + 0x218))(Ref);
  }
}

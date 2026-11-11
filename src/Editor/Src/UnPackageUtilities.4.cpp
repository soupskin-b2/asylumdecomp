// UnPackageUtilities.cpp (part 4 of 4): 6 functions
// Placed here by: neighbours 4, callers 1, class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C{
int sub_010c3770(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x010c3770
int C::sub_010c3770(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],8);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3!=0)){
iVar3=sub_0053df70(*param_1,iVar3*8,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*8);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
}
return iVar2;
}

struct C_010c39e0{
int sub_010c39e0(undefined4*);
};

// @baa 0x010c39e0
int C_010c39e0::sub_010c39e0(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar3;
int iVar2;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],0xc);
param_1[2]=iVar3;
if((*param_1)||(iVar3!=0)){
iVar3=sub_0053df70(*param_1,0xc*iVar3,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*0xc);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
puVar1[2]=param_2[2];
}
return iVar2;
}

struct C_010c4830 {
    void sub_010c4830(int);
};

// @baa 0x010c4830
void C_010c4830::sub_010c4830(int param_2)
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

int sub_0053dfa0(...);
int sub_010c6be0(void);
// @baa 0x010c7a00
undefined4 UObject::sub_010c7a00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_010c6be0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x010cb2a0
undefined4 UObject::sub_010cb2a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_010c6be0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_010ef500(void);
// @baa 0x010f8240
undefined4 UAnalyzeFallbackMaterialsCommandlet::sub_010f8240(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_010ef500();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

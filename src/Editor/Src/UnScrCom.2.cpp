// UnScrCom.cpp (part 2 of 4): 3 functions
// Placed here by: neighbours 2, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_00f9fe80(wchar_t *);
};

extern "C" __declspec(dllimport) int _wcsicmp(...);
// @baa 0x00f9fe80
undefined4 C::sub_00f9fe80(wchar_t * param_2)
{
    int param_1 = (int)this;

  int iVar1;
  
  if ((*(int *)(param_1 + 0x74) == 1) || (*(int *)(param_1 + 0x74) == 2)) {
    iVar1 = _wcsicmp((wchar_t *)(param_1 + 0x88),param_2);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

struct C_00fa3540{
int sub_00fa3540(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00fa3540
int C_00fa3540::sub_00fa3540(undefined4*param_2)
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

struct C_00fa3600{
int sub_00fa3600(undefined4*);
};

// @baa 0x00fa3600
int C_00fa3600::sub_00fa3600(undefined4*param_2)
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

// CommonEditor_1730000.cpp (part 3 of 5): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C{
int sub_0173ef30(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x0173ef30
int C::sub_0173ef30(undefined4*param_2)
{
int*param_1=(int*)this;

int iVar3;
int iVar2;
undefined4*puVar1;

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
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
puVar1[1]=param_2[1];
}
return iVar2;
}

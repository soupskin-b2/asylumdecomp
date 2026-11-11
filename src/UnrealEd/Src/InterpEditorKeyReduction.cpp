// InterpEditorKeyReduction.cpp (part 1 of 2): 2 functions
// Placed here by: callers 1, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C{
int sub_009887a0(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x009887a0
int C::sub_009887a0(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar3;
int iVar2;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],8);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
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

struct C_012f1f80 { C_012f1f80* sub_012f1f80(void); };

// @baa 0x012f1f80
C_012f1f80* C_012f1f80::sub_012f1f80(void) { return this; }

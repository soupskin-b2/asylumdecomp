// Engine_06e0000.cpp (part 5 of 14): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C{
int sub_006e68b0(int*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x006e68b0
int C::sub_006e68b0(int*param_2)
{
int*param_1=(int*)this;

int*piVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
piVar1=(int*)(*param_1+iVar2*4);
if(piVar1!=(int*)0x0){
iVar3=*param_2;
*piVar1=iVar3;
if(iVar3!=0){
*(int*)(iVar3+4)=*(int*)(iVar3+4)+1;
}
}
return iVar2;
}

void sub_007249d0();
// @baa 0x006ec590
void sub_006ec590(void) { sub_007249d0(); }

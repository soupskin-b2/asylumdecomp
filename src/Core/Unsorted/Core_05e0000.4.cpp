// Core_05e0000.cpp (part 4 of 5): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C{
void sub_005ef2a0(int*);
};

int sub_0053df70(...);
void*sub_01a375f0(void*,void*,size_t);
// @baa 0x005ef2a0
void C::sub_005ef2a0(int*param_2)
{
int*param_1=(int*)this;

int iVar1;

if((param_1!=param_2)&&(0<param_2[1])){
iVar1=param_1[1]+param_2[1];
if(iVar1>param_1[2]){
param_1[2]=iVar1;
if((*param_1!=0)||(iVar1!=0)){
iVar1=sub_0053df70(*param_1,4*iVar1,8);
*param_1=iVar1;
}
}
sub_01a375f0((void*)(*param_1+param_1[1]*4),(void*)*param_2,param_2[1]*4);
param_1[1]=param_1[1]+param_2[1];
}
return;
}

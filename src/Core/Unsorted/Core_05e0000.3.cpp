// Core_05e0000.cpp (part 3 of 5): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_01e729c0[];
struct C { void sub_005ee150(void); };

// @baa 0x005ee150
void C::sub_005ee150(void) { *(int*)((char*)this + 0) = (int)g_01e729c0; }

struct C_005ee200 { void sub_005ee200(void); };

// @baa 0x005ee200
void C_005ee200::sub_005ee200(void) { *(int*)((char*)this + 0) = (int)g_01e729c0; }

struct C_005ef1c0{
int sub_005ef1c0(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x005ef1c0
int C_005ef1c0::sub_005ef1c0(undefined4*param_2)
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

struct C_005efc00 { void sub_005efc00(void); };

// @baa 0x005efc00
void C_005efc00::sub_005efc00(void) { *(int*)((char*)this + 0) = (int)g_01e729c0; }

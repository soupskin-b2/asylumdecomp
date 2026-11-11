// UnGeom.cpp: 5 functions
// Placed here by: neighbours 3, callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x00f9f3f0
int sub_00f9f3f0(int * param_1, int * param_2)
{
  return *(int *)(*param_1 + 0x24) - *(int *)(*param_2 + 0x24);
}

struct C{
int sub_00fa3120(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00fa3120
int C::sub_00fa3120(undefined4*param_2)
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

struct C_00fa6e90 { void sub_00fa2410(); void sub_00fa6e90(int); };

// @baa 0x00fa6e90
void C_00fa6e90::sub_00fa6e90(int) { sub_00fa2410(); }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00fa98a0 { void* Data; int Num; int Max; void sub_00fa98a0(); };

// @baa 0x00fa98a0
void C_00fa98a0::sub_00fa98a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00fac6b0
int sub_00fac6b0(void) { return 1; }

// Menus.cpp: 4 functions
// Placed here by: callers 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_00d1fa80(void);
int sub_00d422c0(...);
extern undefined4 g_026c57c0;
// @baa 0x00ca0640
int sub_00ca0640(void)
{
  if (g_026c57c0 == 0) {
    g_026c57c0 = sub_00d422c0(L"Engine");
    sub_00d1fa80();
  }
  return g_026c57c0;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_0112f750(); };

// @baa 0x0112f750
void C::sub_0112f750() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_011c6290{
int sub_011c6290(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x011c6290
int C_011c6290::sub_011c6290(undefined4*param_2)
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

struct C_011d1430 { void* Data; int Num; int Max; void sub_011d1430(); };

// @baa 0x011d1430
void C_011d1430::sub_011d1430() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

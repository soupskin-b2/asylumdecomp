// UnContentStreaming.cpp (part 1 of 2): 10 functions
// Placed here by: neighbours 6, callers 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_026b2254[];
// @baa 0x00717c80
int sub_00717c80(void) { return (int)g_026b2254; }

extern undefined4 g_026b225c;
// @baa 0x00717cb0
undefined4 sub_00717cb0(void)
{
  return g_026b225c;
}

struct C { void sub_00788230(int a0); };

// @baa 0x00788230
void C::sub_00788230(int a0) { *(int*)((char*)this + 16) = a0; }

extern char g_01f13954[];
// @baa 0x007882d0
int sub_007882d0(void) { return (int)g_01f13954; }

extern char g_01ebb554[];
struct C_007882e0 { void sub_007882e0(void); };

// @baa 0x007882e0
void C_007882e0::sub_007882e0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_007882f0 {
    undefined4 * sub_007882f0(byte);
};

int sub_0053dfa0(...);
// @baa 0x007882f0
undefined4 * C_007882f0::sub_007882f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00788310
void sub_00788310(void) {  }

extern char g_01f160f8[];
struct C_00788320 { C_00788320* sub_00788320(void); };

// @baa 0x00788320
C_00788320* C_00788320::sub_00788320(void) { *(int*)((char*)this + 0) = (int)g_01f160f8; return this; }

struct C_0078c5b0{
int sub_0078c5b0(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x0078c5b0
int C_0078c5b0::sub_0078c5b0(undefined4*param_2)
{
int*param_1=(int*)this;

int iVar2;
undefined4*puVar1;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],0x14);
param_1[2]=iVar3;
if((*param_1)||(0!=iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*0x14,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*0x14);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
puVar1[2]=param_2[2];
puVar1[3]=param_2[3];
puVar1[4]=param_2[4];
}
return iVar2;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_007904c0 { void* Data; int Num; int Max; void sub_007904c0(); };

// @baa 0x007904c0
void C_007904c0::sub_007904c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

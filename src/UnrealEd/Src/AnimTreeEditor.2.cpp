// AnimTreeEditor.cpp (part 2 of 3): 17 functions
// Placed here by: neighbours 8, callers 7, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00d1f750
int sub_00d1f750(void) { return 19; }

// @baa 0x00d1f760
int sub_00d1f760(int a0) { return a0; }

struct C{
int sub_00f20e80(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00f20e80
int C::sub_00f20e80(undefined4*param_2)
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

struct C_013374a0 {
    void sub_013374a0();
    int sub_009357b0(int);
};

// @baa 0x013374a0
void C_013374a0::sub_013374a0(void)
{
    int param_1 = (int)this;
  ((C_013374a0 *)((*(char **)((char *)this + 0x360))))->sub_009357b0(1);
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x360) + 0x1bc) + 0x50) == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x360) + 0x1bc) = *(undefined4 *)(param_1 + 0x2f8);
  }
  return;
}

// @baa 0x013394c0
IMPLEMENT_CLASS_AT(UAnimNodeEditInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\AnimTreeEditor.cpp", 15);

// @baa 0x0133a1b0
// @baa 0x0133a520
int UUnrealEdEngine::sub_0133a520(undefined4*param_2)
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

struct C_01346540 {
    undefined4 sub_01346540(byte);
};

int sub_0053dfa0(...);
int sub_01346480(void);
// @baa 0x01346540
undefined4 C_01346540::sub_01346540(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01346480();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0133aea0(...);
// @baa 0x01346560
void sub_01346560(undefined4 * param_1)
{
  sub_0133aea0(*param_1,param_1[1]);
  return;
}

struct C_01346e50 { void sub_01345250(); void sub_01346e50(int); };

// @baa 0x01346e50
void C_01346e50::sub_01346e50(int) { sub_01345250(); }

struct T_01347590;
// @baa 0x01347590
template INT TArray<T_01347590*>::RemoveItem(T_01347590* const&);

// @baa 0x0134d9c0
int sub_0134d9c0(void) { return 1; }

struct A_0134d9d0 { virtual void sub_01353870(); char pad[420]; };

struct B_0134d9d0 { virtual void sub_01353870(); };

struct C_0134d9d0 : A_0134d9d0, B_0134d9d0 { virtual void sub_01353870(); C_0134d9d0(); };

C_0134d9d0::C_0134d9d0() {}

// @baa 0x0134d9d0
void C_0134d9d0::sub_01353870() {}

struct A_0134d9e0 { virtual void sub_01353870(); char pad[424]; };

struct B_0134d9e0 { virtual void sub_01353870(); };

struct C_0134d9e0 : A_0134d9e0, B_0134d9e0 { virtual void sub_01353870(); C_0134d9e0(); };

C_0134d9e0::C_0134d9e0() {}

// @baa 0x0134d9e0
void C_0134d9e0::sub_01353870() {}

struct A_0134d9f0 { virtual void sub_01353870(); char pad[408]; };

struct B_0134d9f0 { virtual void sub_01353870(); };

struct C_0134d9f0 : A_0134d9f0, B_0134d9f0 { virtual void sub_01353870(); C_0134d9f0(); };

C_0134d9f0::C_0134d9f0() {}

// @baa 0x0134d9f0
void C_0134d9f0::sub_01353870() {}

// @baa 0x01356040
IMPLEMENT_CLASS_AT(UAnimTreeEdSkelComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\AnimTreeEditor.cpp", 14);

// @baa 0x013573c0

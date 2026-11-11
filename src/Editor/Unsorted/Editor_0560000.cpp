// Editor_0560000.cpp (part 1 of 2): 21 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00567940
bool UTexture2D::sub_00567940(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x24) != 0;
}

// @baa 0x00567950
uint UTexture2D::sub_00567950(void)
{
    int param_1 = (int)this;

  return ~(*(uint *)(param_1 + 4) >> 5) & 1;
}

struct C { int sub_0056ea40(void); };

// @baa 0x0056ea40
int C::sub_0056ea40(void) { return *(int*)((char*)this + 0); }

struct C_0056ea50 {
    int sub_0056ea50();
};

// @baa 0x0056ea50
int C_0056ea50::sub_0056ea50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0056ea70{
int sub_0056ea70(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x0056ea70
int C_0056ea70::sub_0056ea70(undefined4*param_2)
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

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0056ead0(INT Index);
};

// @baa 0x0056ead0
DWORD* S::sub_0056ead0(INT Index)
{
    return &Items(Index);
}

struct C_0056eb20 {
    int sub_0056eb20(undefined4 *, int);
    int sub_00568d70(int, int);
};

// @baa 0x0056eb20
int C_0056eb20::sub_0056eb20(undefined4 * param_2, int param_3)
{
    int * param_1 = (int *)this;
  undefined4 *puVar1;
  ((C_0056eb20 *)(this))->sub_00568d70(param_3, 1);
  puVar1 = (undefined4 *)(*param_1 + param_3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return param_3;
}

extern "C" void sub_00568e90();
struct CNode {
    // 0x00
    void* Unk00;
    // 0x04
    void* Unk04;
    void sub_0056ebe0();
};

// @baa 0x0056ebe0
void CNode::sub_0056ebe0()
{
    Unk04 = *(void**)((char*)Unk04 + 0x34);
    sub_00568e90();
}

extern "C" void sub_00568ee0();
struct CNode_0056ec20 {
    // 0x00
    void* Unk00;
    // 0x04
    void* Unk04;
    void sub_0056ec20();
};

// @baa 0x0056ec20
void CNode_0056ec20::sub_0056ec20()
{
    Unk04 = *(void**)((char*)Unk04 + 0x34);
    sub_00568ee0();
}

struct C_0056ec30 {
    undefined4 * sub_0056ec30(byte);
};

int sub_0053dfa0(...);
int sub_00568c10(void);
extern undefined4 g_01e7d100;
// @baa 0x0056ec30
undefined4 * C_0056ec30::sub_0056ec30(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e7d100);
  sub_00568c10();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0056ecd0 {
    int sub_0056ecd0(int);
};

// @baa 0x0056ecd0
int C_0056ecd0::sub_0056ecd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0056ece0 { int sub_0056ece0(void); };

// @baa 0x0056ece0
int C_0056ece0::sub_0056ece0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0056ecf0 { int sub_0056ecf0(void); };

// @baa 0x0056ecf0
int C_0056ecf0::sub_0056ecf0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0056ed00 { int sub_0056ed00(void); };

// @baa 0x0056ed00
int C_0056ed00::sub_0056ed00(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0056ed10 {
    int sub_0056ed10(int);
};

// @baa 0x0056ed10
int C_0056ed10::sub_0056ed10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0056ed20 { int sub_0056ed20(void); };

// @baa 0x0056ed20
int C_0056ed20::sub_0056ed20(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0056ed30 {
    int sub_0056ed30(int);
};

// @baa 0x0056ed30
int C_0056ed30::sub_0056ed30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x0056ed40
void __stdcall sub_0056ed40(int a0, int a1) {  }

struct C_0056ed50 {
    int sub_0056ed50(int);
};

// @baa 0x0056ed50
int C_0056ed50::sub_0056ed50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0056ed60 {
    int sub_0056ed60();
};

// @baa 0x0056ed60
int C_0056ed60::sub_0056ed60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0056ed80 {
    int sub_0056ed80(int);
};

// @baa 0x0056ed80
int C_0056ed80::sub_0056ed80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// UnEdAct.cpp: 19 functions
// Placed here by: callers 12, neighbours 7.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"
#include "ue3/Map.h"

struct C {
    int sub_00d3aac0();
};

// @baa 0x00d3aac0
int C::sub_00d3aac0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d3c290 {
    int sub_00d3c290();
};

// @baa 0x00d3c290
int C_00d3c290::sub_00d3c290(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00d3d980 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00d3d980& operator++();
};

// @baa 0x00d3d980
FSparseArrayConstIt_00d3d980& FSparseArrayConstIt_00d3d980::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00d40030 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00d40030(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00d40030
FSparseArrayConstIt_00d40030::FSparseArrayConstIt_00d40030(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_00f53410{
int sub_00f53410(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00f53410
int C_00f53410::sub_00f53410(undefined4*param_2)
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

// @baa 0x01284520
int UUnrealEdEngine::sub_01284520(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x0128bbf0
int UUnrealEdEngine::sub_0128bbf0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x0128bc10
int UUnrealEdEngine::sub_0128bc10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

// @baa 0x0128f900
int UUnrealEdEngine::sub_0128f900(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct FSparseArrayConstIt_012911b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_012911b0& operator++();
};

// @baa 0x012911b0
FSparseArrayConstIt_012911b0& FSparseArrayConstIt_012911b0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_view {
    int sub_01291d60(int, int);
};

// @baa 0x01292750
int UUnrealEdEngine::sub_01292750(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_01291d60(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_01291ca0(int, int);
};

struct C_01292780 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_01292780(void);
};

// @baa 0x01292780
void C_01292780::sub_01292780(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_01291ca0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

int sub_0128fea0(void);
// @baa 0x012927e0
int UUnrealEdEngine::sub_012927e0(void)
{
    int param_1 = (int)this;

  sub_0128fea0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0128ff00(void);
// @baa 0x01292800
int UUnrealEdEngine::sub_01292800(void)
{
    int param_1 = (int)this;

  sub_0128ff00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01292820
UUnrealEdEngine::UUnrealEdEngine()
{
}

struct A_012928b0 { virtual void sub_012929b0(); char pad[1064]; };

struct B_012928b0 { virtual void sub_012929b0(); };

struct C_012928b0 : A_012928b0, B_012928b0 { virtual void sub_012929b0(); C_012928b0(); };

C_012928b0::C_012928b0() {}

// @baa 0x012928b0
void C_012928b0::sub_012929b0() {}

// @baa 0x012928c0
int sub_005c7a70(...);
int sub_012928c0(void);
// @baa 0x012929b0
undefined4 UUnrealEdEngine::sub_012929b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_012928c0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x690);
  }
  return param_1;
}

// @baa 0x01294c90
int UUnrealEdEngine::sub_01294c90(void)
{
    int param_1 = (int)this;

  sub_0128fea0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// Engine_0bb0000.cpp (part 1 of 3): 185 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    int sub_00bb3730(undefined4);
};

// @baa 0x00bb3730
int C::sub_00bb3730(undefined4 param_2)
{
    int param_1 = (int)this;

  switch(param_2) {
  case 0:
  case 1:
    return param_1 + 0x18;
  case 2:
    return param_1 + 0x24;
  case 3:
    return param_1 + 0x30;
  default:
    return param_1 + 0x3c;
  }
}

struct C_00bb3d70 { int sub_00bb3d70(void); };

// @baa 0x00bb3d70
int C_00bb3d70::sub_00bb3d70(void) { return *(int*)((char*)this + 572); }

struct C_00bb3e30 {
    void sub_00bb3e30(undefined4);
};

int sub_00716170(...);
// @baa 0x00bb3e30
void C_00bb3e30::sub_00bb3e30(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_00716170(param_2,param_1 + 4);
  sub_00716170(param_2,param_1 + 10);
  sub_00716170(param_2,param_1 + 0x10);
  sub_00716170(param_2,param_1 + 0x16);
  sub_00716170(param_2,param_1 + 0x1c);
  sub_00716170(param_2,param_1 + 0x22);
  sub_00716170(param_2,param_1 + 0x28);
  sub_00716170(param_2,param_1 + 0x2e);
  sub_00716170(param_2,param_1 + 0x34);
  sub_00716170(param_2,param_1 + 0x3a);
  return;
}

int sub_0053df40(...);
extern undefined * g_02019ffc;
// @baa 0x00bb43e0
undefined4 * sub_00bb43e0(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x48,8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(&g_02019ffc);
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    *(undefined2 *)(puVar1 + 5) = 0;
    *(undefined2 *)((int)puVar1 + 0x1a) = 0;
    *(undefined2 *)(puVar1 + 8) = 0;
    *(undefined2 *)((int)puVar1 + 0x26) = 0;
    *(undefined2 *)(puVar1 + 0xb) = 0;
    *(undefined2 *)((int)puVar1 + 0x32) = 0;
    *(undefined2 *)(puVar1 + 0xe) = 0;
    *(undefined2 *)((int)puVar1 + 0x3e) = 0;
    *(undefined2 *)(puVar1 + 0x11) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// @baa 0x00bb4430
undefined4 * sub_00bb4430(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x48,8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(&g_02019ffc);
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    *(undefined2 *)(puVar1 + 5) = 0;
    *(undefined2 *)((int)puVar1 + 0x1a) = 0;
    *(undefined2 *)(puVar1 + 8) = 0;
    *(undefined2 *)((int)puVar1 + 0x26) = 0;
    *(undefined2 *)(puVar1 + 0xb) = 0;
    *(undefined2 *)((int)puVar1 + 0x32) = 0;
    *(undefined2 *)(puVar1 + 0xe) = 0;
    *(undefined2 *)((int)puVar1 + 0x3e) = 0;
    *(undefined2 *)(puVar1 + 0x11) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// @baa 0x00bb4480
undefined4 * sub_00bb4480(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x48,8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(&g_02019ffc);
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    *(undefined2 *)(puVar1 + 5) = 0;
    *(undefined2 *)((int)puVar1 + 0x1a) = 0;
    *(undefined2 *)(puVar1 + 8) = 0;
    *(undefined2 *)((int)puVar1 + 0x26) = 0;
    *(undefined2 *)(puVar1 + 0xb) = 0;
    *(undefined2 *)((int)puVar1 + 0x32) = 0;
    *(undefined2 *)(puVar1 + 0xe) = 0;
    *(undefined2 *)((int)puVar1 + 0x3e) = 0;
    *(undefined2 *)(puVar1 + 0x11) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_00bb4580 { C_00bb4580* sub_00bb4580(void); };

// @baa 0x00bb4580
C_00bb4580* C_00bb4580::sub_00bb4580(void) { return this; }

struct C_00bb4590 { C_00bb4590* sub_00bb4590(void); };

// @baa 0x00bb4590
C_00bb4590* C_00bb4590::sub_00bb4590(void) { return this; }

struct C_00bb45a0 { int a, b, c; C_00bb45a0(); };

// @baa 0x00bb45a0
C_00bb45a0::C_00bb45a0() : a(0), b(0), c(0) {}

struct C_00bb45b0 { int sub_00bb45b0(void); };

// @baa 0x00bb45b0
int C_00bb45b0::sub_00bb45b0(void) { return *(int*)((char*)this + 4); }

struct C_00bb45c0 { int sub_00bb45c0(void); };

// @baa 0x00bb45c0
int C_00bb45c0::sub_00bb45c0(void) { return *(int*)((char*)this + 0); }

struct C_00bb4640 { int sub_00bb4640(void); };

// @baa 0x00bb4640
int C_00bb4640::sub_00bb4640(void) { return *(int*)((char*)this + 0); }

extern undefined * g_02019f8c;
// @baa 0x00bb4af0
undefined4 * sub_00bb4af0(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x10,8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(&g_02019f8c);
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_00bb4b20 {
    undefined4 * sub_00bb4b20(byte);
};

int sub_0053dfa0(...);
extern undefined * g_01ecdfc8;
// @baa 0x00bb4b20
undefined4 * C_00bb4b20::sub_00bb4b20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ecdfc8);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00bb4b50
int ULensFlare::sub_00bb4b50(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x140) * 0x188 + 0x18c;
}

// @baa 0x00bb4b70
undefined4 ULensFlare::sub_00bb4b70(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(*(int *)(param_1 + 4) + 0xec) = *(undefined4 *)(param_1 + 8);
  return 0xc;
}

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00bb53e0(INT Index);
};

// @baa 0x00bb53e0
DWORD* S::sub_00bb53e0(INT Index)
{
    return &Items(Index);
}

typedef uint size_t;

struct C_00bb5430 {
    int sub_00bb5430(int);
    int sub_00badad0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00bb5430
int C_00bb5430::sub_00bb5430(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00bb5430 *)(this))->sub_00badad0(param_2);
  sub_01a37612((void *)(iVar1 * 0x34 + *param_1),0,param_2 * 0x34);
  return iVar1;
}

struct E { BYTE Bytes[320]; };

struct S_00bb5460 {
    TArray<E> Items; // 0x00
    E* sub_00bb5460(INT Index);
};

// @baa 0x00bb5460
E* S_00bb5460::sub_00bb5460(INT Index)
{
    return &Items(Index);
}

struct S_00bb54b0 {
    TArray<E> Items; // 0x00
    const E* sub_00bb54b0(INT Index) const;
};

// @baa 0x00bb54b0
const E* S_00bb54b0::sub_00bb54b0(INT Index) const
{
    return &Items(Index);
}

struct C_00bb5500 {
    int sub_00bb5500(int);
    int sub_00badb90(int);
};

// @baa 0x00bb5500
int C_00bb5500::sub_00bb5500(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00bb5500 *)(this))->sub_00badb90(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 4),0,param_2 * 4);
  return iVar1;
}

struct E_00bb5540 { BYTE Bytes[312]; };

struct S_00bb5540 {
    TArray<E_00bb5540> Items; // 0x00
    E_00bb5540* sub_00bb5540(INT Index);
};

// @baa 0x00bb5540
E_00bb5540* S_00bb5540::sub_00bb5540(INT Index)
{
    return &Items(Index);
}

struct S_00bb5590 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00bb5590(INT Index);
};

// @baa 0x00bb5590
QWORD* S_00bb5590::sub_00bb5590(INT Index)
{
    return &Items(Index);
}

struct E_00bb55e0 { BYTE Bytes[20]; };

struct S_00bb55e0 {
    TArray<E_00bb55e0> Items; // 0x00
    const E_00bb55e0* sub_00bb55e0(INT Index) const;
};

// @baa 0x00bb55e0
const E_00bb55e0* S_00bb55e0::sub_00bb55e0(INT Index) const
{
    return &Items(Index);
}

struct E_00bb5630 { BYTE Bytes[12]; };

struct S_00bb5630 {
    TArray<E_00bb5630> Items; // 0x00
    E_00bb5630* sub_00bb5630(INT Index);
};

// @baa 0x00bb5630
E_00bb5630* S_00bb5630::sub_00bb5630(INT Index)
{
    return &Items(Index);
}

struct E_00bb5680 { BYTE Bytes[12]; };

struct S_00bb5680 {
    TArray<E_00bb5680> Items; // 0x00
    const E_00bb5680* sub_00bb5680(INT Index) const;
};

// @baa 0x00bb5680
const E_00bb5680* S_00bb5680::sub_00bb5680(INT Index) const
{
    return &Items(Index);
}

struct C_00bb56d0 {
    int sub_00bb56d0(int);
    int sub_00badc70(int);
};

// @baa 0x00bb56d0
int C_00bb56d0::sub_00bb56d0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00bb56d0 *)(this))->sub_00badc70(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

struct E_00bb5710 { BYTE Bytes[64]; };

struct S_00bb5710 {
    TArray<E_00bb5710> Items; // 0x00
    const E_00bb5710* sub_00bb5710(INT Index) const;
};

// @baa 0x00bb5710
const E_00bb5710* S_00bb5710::sub_00bb5710(INT Index) const
{
    return &Items(Index);
}

struct E_00bb5760 { BYTE Bytes[80]; };

struct S_00bb5760 {
    TArray<E_00bb5760> Items; // 0x00
    E_00bb5760* sub_00bb5760(INT Index);
};

// @baa 0x00bb5760
E_00bb5760* S_00bb5760::sub_00bb5760(INT Index)
{
    return &Items(Index);
}

struct E_00bb57b0 { BYTE Bytes[80]; };

struct S_00bb57b0 {
    TArray<E_00bb57b0> Items; // 0x00
    const E_00bb57b0* sub_00bb57b0(INT Index) const;
};

// @baa 0x00bb57b0
const E_00bb57b0* S_00bb57b0::sub_00bb57b0(INT Index) const
{
    return &Items(Index);
}

struct E_00bb5800 { BYTE Bytes[96]; };

struct S_00bb5800 {
    TArray<E_00bb5800> Items; // 0x00
    E_00bb5800* sub_00bb5800(INT Index);
};

// @baa 0x00bb5800
E_00bb5800* S_00bb5800::sub_00bb5800(INT Index)
{
    return &Items(Index);
}

struct E_00bb5850 { BYTE Bytes[96]; };

struct S_00bb5850 {
    TArray<E_00bb5850> Items; // 0x00
    const E_00bb5850* sub_00bb5850(INT Index) const;
};

// @baa 0x00bb5850
const E_00bb5850* S_00bb5850::sub_00bb5850(INT Index) const
{
    return &Items(Index);
}

struct E_00bb58a0 { BYTE Bytes[64]; };

struct S_00bb58a0 {
    TArray<E_00bb58a0> Items; // 0x00
    E_00bb58a0* sub_00bb58a0(INT Index);
};

// @baa 0x00bb58a0
E_00bb58a0* S_00bb58a0::sub_00bb58a0(INT Index)
{
    return &Items(Index);
}

struct E_00bb58f0 { BYTE Bytes[64]; };

struct S_00bb58f0 {
    TArray<E_00bb58f0> Items; // 0x00
    const E_00bb58f0* sub_00bb58f0(INT Index) const;
};

// @baa 0x00bb58f0
const E_00bb58f0* S_00bb58f0::sub_00bb58f0(INT Index) const
{
    return &Items(Index);
}

struct C_00bb5940 {
    int sub_00bb5940(int);
    int sub_00badd90(int);
};

// @baa 0x00bb5940
int C_00bb5940::sub_00bb5940(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00bb5940 *)(this))->sub_00badd90(param_2);
  sub_01a37612((void *)(iVar1 * 0x40 + *param_1),0,param_2 << 6);
  return iVar1;
}

struct C_00bb5970 {
    int sub_00bb5970(int);
    int sub_009b1100(int);
};

// @baa 0x00bb5970
int C_00bb5970::sub_00bb5970(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00bb5970 *)(this))->sub_009b1100(param_2);
  sub_01a37612((void *)(iVar1 * 0xe0 + *param_1),0,param_2 * 0xe0);
  return iVar1;
}

struct C_00bb5a20{
int sub_00bb5a20(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00bb5a20
int C_00bb5a20::sub_00bb5a20(undefined4*param_2)
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

struct E_00bb5d00 { BYTE Bytes[72]; };

struct S_00bb5d00 {
    TArray<E_00bb5d00> Items; // 0x00
    E_00bb5d00* sub_00bb5d00(INT Index);
};

// @baa 0x00bb5d00
E_00bb5d00* S_00bb5d00::sub_00bb5d00(INT Index)
{
    return &Items(Index);
}

struct E_00bb5d50 { BYTE Bytes[68]; };

struct S_00bb5d50 {
    TArray<E_00bb5d50> Items; // 0x00
    E_00bb5d50* sub_00bb5d50(INT Index);
};

// @baa 0x00bb5d50
E_00bb5d50* S_00bb5d50::sub_00bb5d50(INT Index)
{
    return &Items(Index);
}

struct C_00bb5da0 {
    undefined4 * sub_00bb5da0(undefined4);
    int sub_00bb44d0(int);
};

extern undefined * g_0201a1f8;
// @baa 0x00bb5da0
undefined4 * C_00bb5da0::sub_00bb5da0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00bb5da0 *)(this))->sub_00bb44d0(param_2);
  *param_1 = (undefined4)(&g_0201a1f8);
  return param_1;
}

struct C_00bb5dc0 {
    undefined4 * sub_00bb5dc0(byte);
};

extern undefined * g_02019f6c;
// @baa 0x00bb5dc0
undefined4 * C_00bb5dc0::sub_00bb5dc0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02019f6c);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00bb5de0 {
    undefined4 * sub_00bb5de0(undefined4);
    int sub_00bb44d0(int);
};

extern undefined * g_0201a20c;
// @baa 0x00bb5de0
undefined4 * C_00bb5de0::sub_00bb5de0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00bb5de0 *)(this))->sub_00bb44d0(param_2);
  *param_1 = (undefined4)(&g_0201a20c);
  return param_1;
}

struct C_00bb5e00 {
    undefined4 * sub_00bb5e00(byte);
};

// @baa 0x00bb5e00
undefined4 * C_00bb5e00::sub_00bb5e00(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02019f6c);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct E_00bb5e20 { BYTE Bytes[48]; };

struct S_00bb5e20 {
    TArray<E_00bb5e20> Items; // 0x00
    const E_00bb5e20* sub_00bb5e20(INT Index) const;
};

// @baa 0x00bb5e20
const E_00bb5e20* S_00bb5e20::sub_00bb5e20(INT Index) const
{
    return &Items(Index);
}

struct E_00bb5ed0 { BYTE Bytes[12]; };

struct S_00bb5ed0 {
    TArray<E_00bb5ed0> Items; // 0x00
    E_00bb5ed0* sub_00bb5ed0(INT Index);
};

// @baa 0x00bb5ed0
E_00bb5ed0* S_00bb5ed0::sub_00bb5ed0(INT Index)
{
    return &Items(Index);
}

struct C_00bb5f20 {
    void sub_00bb5f20(undefined4 *);
};

// @baa 0x00bb5f20
void C_00bb5f20::sub_00bb5f20(undefined4 * param_2)
{
    undefined4 param_1 = (undefined4)this;

  *param_2 = param_1;
  param_2[1] = 0;
  return;
}

struct C_00bb5f30{
int sub_00bb5f30(undefined4*);
};

// @baa 0x00bb5f30
int C_00bb5f30::sub_00bb5f30(undefined4*param_2)
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

struct E_00bb5fc0 { BYTE Bytes[16]; };

struct S_00bb5fc0 {
    TArray<E_00bb5fc0> Items; // 0x00
    E_00bb5fc0* sub_00bb5fc0(INT Index);
};

// @baa 0x00bb5fc0
E_00bb5fc0* S_00bb5fc0::sub_00bb5fc0(INT Index)
{
    return &Items(Index);
}

extern char g_026bf8bc[];
// @baa 0x00bb60b0
int sub_00bb60b0(void) { return (int)g_026bf8bc; }

int sub_00656790(void);
// @baa 0x00bb6120
undefined4 ULensFlare::sub_00bb6120(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656790();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00bb6170 {
    int sub_00bb6170(int);
};

// @baa 0x00bb6170
int C_00bb6170::sub_00bb6170(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x138 + *param_1;
}

struct C_00bb6180 {
    int sub_00bb6180(int);
};

// @baa 0x00bb6180
int C_00bb6180::sub_00bb6180(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x00bb6190
void __stdcall sub_00bb6190(int a0, int a1) {  }

// @baa 0x00bb61a0
void __stdcall sub_00bb61a0(int a0, int a1) {  }

struct E_00bb61b0 { BYTE Bytes[64]; };

struct S_00bb61b0 {
    TArray<E_00bb61b0> Items; // 0x00
    E_00bb61b0* sub_00bb61b0(INT Index);
};

// @baa 0x00bb61b0
E_00bb61b0* S_00bb61b0::sub_00bb61b0(INT Index)
{
    return &Items(Index);
}

// @baa 0x00bb6200
void __stdcall sub_00bb6200(int a0, int a1) {  }

// @baa 0x00bb6210
void __stdcall sub_00bb6210(int a0, int a1) {  }

// @baa 0x00bb6220
void __stdcall sub_00bb6220(int a0, int a1) {  }

// @baa 0x00bb6230
void __stdcall sub_00bb6230(int a0, int a1) {  }

struct C_00bb6240 {
    int sub_00bb6240(int);
};

// @baa 0x00bb6240
int C_00bb6240::sub_00bb6240(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct E_00bb6400 { BYTE Bytes[32]; };

struct S_00bb6400 {
    TArray<E_00bb6400> Items; // 0x00
    E_00bb6400* sub_00bb6400(INT Index);
};

// @baa 0x00bb6400
E_00bb6400* S_00bb6400::sub_00bb6400(INT Index)
{
    return &Items(Index);
}

struct E_00bb6450 { BYTE Bytes[32]; };

struct S_00bb6450 {
    TArray<E_00bb6450> Items; // 0x00
    const E_00bb6450* sub_00bb6450(INT Index) const;
};

// @baa 0x00bb6450
const E_00bb6450* S_00bb6450::sub_00bb6450(INT Index) const
{
    return &Items(Index);
}

struct C_00bb64a0 {
    int sub_00bb64a0(int);
};

// @baa 0x00bb64a0
int C_00bb64a0::sub_00bb64a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x00bb64b0
void __stdcall sub_00bb64b0(int a0, int a1) {  }

struct C_00bb64f0 {
    int sub_00bb64f0(int);
};

// @baa 0x00bb64f0
int C_00bb64f0::sub_00bb64f0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 4;
}

// @baa 0x00bb6500
void __stdcall sub_00bb6500(int a0, int a1) {  }

struct C_00bb6510 {
    int sub_00bb6510(int);
};

// @baa 0x00bb6510
int C_00bb6510::sub_00bb6510(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

// @baa 0x00bb6520
void __stdcall sub_00bb6520(int a0, int a1) {  }

// @baa 0x00bb6530
void __stdcall sub_00bb6530(int a0, int a1) {  }

struct C_00bb6570{
void sub_00bb6570();
};

extern undefined4*g_026b0d94;
// @baa 0x00bb6570
void C_00bb6570::sub_00bb6570(void)
{
int param_1=(int)this;
int iVar1;
iVar1=*(int*)(param_1+0x14);
*(undefined4*)(0x14+param_1)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x234))((int)(iVar1));
}
return;
}

struct C_00bb65c0{
void sub_00bb65c0();
};

// @baa 0x00bb65c0
void C_00bb65c0::sub_00bb65c0(void)
{
int param_1=(int)this;
int iVar1;
iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x234))((int)(iVar1));
}
return;
}

struct C_00bb65e0 {
    int sub_00bb65e0(int);
};

// @baa 0x00bb65e0
int C_00bb65e0::sub_00bb65e0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0xc;
}

struct C_00bb65f0 {
    int sub_00bb65f0(int);
};

// @baa 0x00bb65f0
int C_00bb65f0::sub_00bb65f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00bb6600
void __stdcall sub_00bb6600(int a0, int a1) {  }

struct C_00bb6610 {
    void sub_00bb6610();
};

// @baa 0x00bb6610
void C_00bb6610::sub_00bb6610(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x18c0) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x18c0));
    *(undefined4 *)(param_1 + 0x18c0) = 0;
  }
  return;
}

struct C_00bb6670{
void sub_00bb6670();
};

// @baa 0x00bb6670
void C_00bb6670::sub_00bb6670(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x234))((int)(iVar1));
}
return;
}

struct C_00bb69e0 {
    int sub_00bb69e0(int);
};

// @baa 0x00bb69e0
int C_00bb69e0::sub_00bb69e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

int sub_00656490(void);
// @baa 0x00bb69f0
undefined4 ULensFlare::sub_00bb69f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656490();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00bb6a10
undefined4 ULensFlare::sub_00bb6a10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656490();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00bb6a30
undefined4 ULensFlare::sub_00bb6a30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656490();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct FFaceFXElement
{
	INT X;    // 0x00
	INT Y;    // 0x04
	INT Z;    // 0x08
	INT W;    // 0x0c
	INT Unk10;// 0x10
};

struct UFxRenderWidget
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_00bb6a50(INT Index);
};

// @baa 0x00bb6a50
FFaceFXElement* UFxRenderWidget::sub_00bb6a50(INT Index)
{
	return &BoneArray(Index);
}

struct E_00bb6aa0 { BYTE Bytes[12]; };

struct S_00bb6aa0 {
    TArray<E_00bb6aa0> Items; // 0x00
    E_00bb6aa0* sub_00bb6aa0(INT Index);
};

// @baa 0x00bb6aa0
E_00bb6aa0* S_00bb6aa0::sub_00bb6aa0(INT Index)
{
    return &Items(Index);
}

struct C_00bb6ed0 { int sub_00bb6ed0(void); };

// @baa 0x00bb6ed0
int C_00bb6ed0::sub_00bb6ed0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00bb6f10 { C_00bb6f10* sub_00bb6f10(void); };

// @baa 0x00bb6f10
C_00bb6f10* C_00bb6f10::sub_00bb6f10(void) { *(int*)((char*)this + 2112) = 0; return this; }

struct C_00bb6f20 {
    void sub_00bb6f20();
};

// @baa 0x00bb6f20
void C_00bb6f20::sub_00bb6f20(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x840) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x840));
    *(undefined4 *)(param_1 + 0x840) = 0;
  }
  return;
}

struct C_00bb6f80 { int sub_00bb6f80(void); };

// @baa 0x00bb6f80
int C_00bb6f80::sub_00bb6f80(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00bb6f90 { C_00bb6f90* sub_00bb6f90(void); };

// @baa 0x00bb6f90
C_00bb6f90* C_00bb6f90::sub_00bb6f90(void) { *(int*)((char*)this + 6336) = 0; return this; }

struct C_00bb6fa0 {
    uint sub_00bb6fa0();
};

// @baa 0x00bb6fa0
uint C_00bb6fa0::sub_00bb6fa0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x18c0) | -(uint)(*(uint *)(param_1 + 0x18c0) == 0) & param_1;
}

struct C_00bb70d0 {
    int sub_00bb70d0(int);
};

// @baa 0x00bb70d0
int C_00bb70d0::sub_00bb70d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00bb70e0 { int sub_00bb70e0(void); };

// @baa 0x00bb70e0
int C_00bb70e0::sub_00bb70e0(void) { return *(int*)((char*)this + 20); }

struct C_00bb70f0 {
    int sub_00bb70f0();
};

// @baa 0x00bb70f0
int C_00bb70f0::sub_00bb70f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

int sub_005413d0(...);
// @baa 0x00bb7130
void sub_00bb7130(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00bb7140 {
    int sub_00bb7140(int);
};

// @baa 0x00bb7140
int C_00bb7140::sub_00bb7140(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00bb7150 {
    int sub_00bb7150(int);
};

// @baa 0x00bb7150
int C_00bb7150::sub_00bb7150(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00bb7160 { int sub_00bb7160(void); };

// @baa 0x00bb7160
int C_00bb7160::sub_00bb7160(void) { return *(int*)((char*)this + 20); }

struct C_00bb7170 {
    uint sub_00bb7170();
};

// @baa 0x00bb7170
uint C_00bb7170::sub_00bb7170(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x840) | -(uint)(*(uint *)(param_1 + 0x840) == 0) & param_1;
}

int sub_009b16e0(...);
// @baa 0x00bb7190
void sub_00bb7190(undefined4 param_1)
{
  sub_009b16e0(param_1,0);
  return;
}

struct C_00bb71a0 {
    int sub_00bb71a0(int);
};

// @baa 0x00bb71a0
int C_00bb71a0::sub_00bb71a0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00bb71b0 { int sub_00bb71b0(void); };

// @baa 0x00bb71b0
int C_00bb71b0::sub_00bb71b0(void) { return *(int*)((char*)this + 20); }

struct C_00bb71c0 {
    int sub_00bb71c0();
};

// @baa 0x00bb71c0
int C_00bb71c0::sub_00bb71c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00bb71e0 {
    int sub_00bb71e0();
};

// @baa 0x00bb71e0
int C_00bb71e0::sub_00bb71e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00bb71f0 {
    uint sub_00bb71f0();
};

// @baa 0x00bb71f0
uint C_00bb71f0::sub_00bb71f0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x840) | -(uint)(*(uint *)(param_1 + 0x840) == 0) & param_1;
}

// @baa 0x00bb7ae0
void sub_00bb7ae0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00bb7b20
void sub_00bb7b20(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}

struct C_00bb7b60 {
    uint sub_00bb7b60();
};

// @baa 0x00bb7b60
uint C_00bb7b60::sub_00bb7b60(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x40) | -(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1;
}

int sub_006566e0(void);
extern undefined * g_0201a2ac;
// @baa 0x00bb7ca0
undefined4 * ULensFlare::sub_00bb7ca0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006566e0();
  *param_1 = (undefined4)(&g_0201a2ac);
  return param_1;
}

extern char g_026c0130[];
// @baa 0x00bb7cc0
int sub_00bb7cc0(void) { return (int)g_026c0130; }

// @baa 0x00bb7cd0
void ULensFlare::sub_00bb7cd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_0201a2ac);
  sub_00656790();
  return;
}

struct C_00bb7ce0 {
    FString sub_00bb7ce0();
};

// @baa 0x00bb7ce0
FString C_00bb7ce0::sub_00bb7ce0()
{
    return TEXT("LensFlare Vertex Factory");
}

// @baa 0x00bb7d10
undefined4 * ULensFlare::sub_00bb7d10(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_0201a2ac);
  sub_00656790();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00bb7e20
IMPLEMENT_CLASS_AT(UActorFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorFactory.cpp", 28);

// @baa 0x00bb7ea0
int UActorFactory::vf_110(int a0) { return 1; }

// @baa 0x00bb7eb0
void __stdcall sub_00bb7eb0(int a0) {  }

// @baa 0x00bb7ec0
int UActorFactory::vf_120(void) { return 1; }

// @baa 0x00bb7f10
int sub_005c7a20(void);
extern undefined * g_0201a310;
// @baa 0x00bb7f30
undefined4 * UObject::sub_00bb7f30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0201a310);
  return param_1;
}

struct E_00bb7f50 { BYTE Bytes[52]; };

struct S_00bb7f50 {
    BYTE Pad[0xc];
    TArray<E_00bb7f50> Items; // 0x0c
    E_00bb7f50* sub_00bb7f50(INT Index);
};

// @baa 0x00bb7f50
E_00bb7f50* S_00bb7f50::sub_00bb7f50(INT Index)
{
    return &Items(Index);
}

struct S_00bb7fa0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00bb7fa0(INT Index);
};

// @baa 0x00bb7fa0
DWORD* S_00bb7fa0::sub_00bb7fa0(INT Index)
{
    return &Items(Index);
}

struct S16 {
    INT f00;
    INT f04;
    INT f08;
    INT f0c;
    S16* sub_00bb7ff0();
};

// @baa 0x00bb7ff0
S16* S16::sub_00bb7ff0()
{
    f00 = 0;
    f04 = 0;
    f08 = 0;
    f0c = 0;
    return this;
}

extern undefined * g_0201a438;
// @baa 0x00bb83f0
undefined4 * UObject::sub_00bb83f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0201a438);
  return param_1;
}

// @baa 0x00bb8410
IMPLEMENT_CLASS_AT(USpeedTreeActorFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\SpeedTreeActorFactory.cpp", 9);

// @baa 0x00bb8470
struct C_00bb8490 {
    undefined4 * sub_00bb8490(undefined4);
    int sub_006566e0();
    int sub_00bafcf0();
};

extern undefined * g_0201a55c;
// @baa 0x00bb8490
undefined4 * C_00bb8490::sub_00bb8490(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00bb8490 *)(this))->sub_006566e0();
  *param_1 = (undefined4)(&g_0201a55c);
  ((C_00bb8490 *)(((char *)this + 0x1c0)))->sub_00bafcf0();
  param_1[0x8f] = param_2;
  return param_1;
}

// @baa 0x00bb84c0
undefined4 ULensFlare::sub_00bb84c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656790();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00bb84e0 {
    undefined4 * sub_00bb84e0(undefined4);
    int sub_006566e0();
    int sub_00bafcf0();
};

extern undefined * g_0201a588;
// @baa 0x00bb84e0
undefined4 * C_00bb84e0::sub_00bb84e0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00bb84e0 *)(this))->sub_006566e0();
  ((C_00bb84e0 *)(((char *)this + 0x1c0)))->sub_00bafcf0();
  param_1[0x8f] = param_2;
  *param_1 = (undefined4)(&g_0201a588);
  return param_1;
}

extern char g_026bf900[];
// @baa 0x00bb8510
int sub_00bb8510(void) { return (int)g_026bf900; }

// @baa 0x00bb8520
undefined4 ULensFlare::sub_00bb8520(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656790();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00bb8540 {
    undefined4 * sub_00bb8540(undefined4);
    int sub_006566e0();
    int sub_00bafcf0();
};

extern undefined * g_0201a5b4;
// @baa 0x00bb8540
undefined4 * C_00bb8540::sub_00bb8540(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00bb8540 *)(this))->sub_006566e0();
  ((C_00bb8540 *)(((char *)this + 0x1c0)))->sub_00bafcf0();
  param_1[0x8f] = param_2;
  *param_1 = (undefined4)(&g_0201a5b4);
  return param_1;
}

extern char g_026bfb50[];
// @baa 0x00bb8570
int sub_00bb8570(void) { return (int)g_026bfb50; }

// @baa 0x00bb8580
undefined4 ULensFlare::sub_00bb8580(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656790();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00bb85a0 {
    undefined4 * sub_00bb85a0(undefined4);
    int sub_006566e0();
    int sub_00bafcf0();
};

extern undefined * g_0201a5e0;
// @baa 0x00bb85a0
undefined4 * C_00bb85a0::sub_00bb85a0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00bb85a0 *)(this))->sub_006566e0();
  ((C_00bb85a0 *)(((char *)this + 0x1c0)))->sub_00bafcf0();
  param_1[0x8f] = param_2;
  *param_1 = (undefined4)(&g_0201a5e0);
  return param_1;
}

extern char g_026bfac8[];
// @baa 0x00bb85d0
int sub_00bb85d0(void) { return (int)g_026bfac8; }

// @baa 0x00bb85e0
undefined4 ULensFlare::sub_00bb85e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656790();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00bb8600 {
    undefined4 * sub_00bb8600(undefined4);
    int sub_006566e0();
    int sub_00bafcf0();
};

extern undefined * g_0201a60c;
// @baa 0x00bb8600
undefined4 * C_00bb8600::sub_00bb8600(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00bb8600 *)(this))->sub_006566e0();
  ((C_00bb8600 *)(((char *)this + 0x1c0)))->sub_00bafcf0();
  param_1[0x8f] = param_2;
  *param_1 = (undefined4)(&g_0201a60c);
  return param_1;
}

extern char g_026bfb20[];
// @baa 0x00bb8630
int sub_00bb8630(void) { return (int)g_026bfb20; }

// @baa 0x00bb8640
undefined4 ULensFlare::sub_00bb8640(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656790();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00bb8ed0 {
    void sub_00bb8ed0(undefined4);
    int sub_00bb3e30(int);
};

// @baa 0x00bb8ed0
void C_00bb8ed0::sub_00bb8ed0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_00bb8ed0 *)(this))->sub_00bb3e30(param_2);
  sub_00716170(param_2,param_1 + 0x48);
  sub_00716170(param_2,param_1 + 0x4e);
  sub_00716170(param_2,param_1 + 0x54);
  return;
}

struct C_00bb9550 {
    undefined4 * sub_00bb9550(byte);
};

// @baa 0x00bb9550
undefined4 * C_00bb9550::sub_00bb9550(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ecdfc8);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00bb9870
int sub_00bb9870(void) { return 1690; }

// @baa 0x00bb9880
int sub_00bb9880(void) { return 0; }

int sub_00bb9800(void);
// @baa 0x00bb9890
undefined4 ULensFlare::sub_00bb9890(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00bb9800();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern void* g_026b2234;
struct FFlareItem
{
    BYTE Pad0[0xc];
    BYTE Flags;
    BYTE Pad1[0xf];
    TArray<void*> Items;
    BYTE Pad2[0x118];
};

struct FFlareLayout
{
    BYTE Pad0[0x3c];
    BYTE Active;
    BYTE Pad1[0xf];
    TArray<void*> Arr1;
    BYTE Pad2[0x120];
    TArray<FFlareItem> Arr2;
};

struct CRes;
struct CVTableObj
{
    virtual void* v00();
    virtual void* v01();
    virtual void* v02();
    virtual void* v03();
    virtual void* v04();
    virtual void* v05();
    virtual void* v06();
    virtual void* v07();
    virtual void* v08();
    virtual void* v09();
    virtual void* v10();
    virtual void* v11();
    virtual void* v12();
    virtual void* v13();
    virtual void* v14();
    virtual void* v15();
    virtual void* v16();
    virtual void* v17();
    virtual void* v18();
    virtual void* v19();
    virtual void* v20();
    virtual void* v21();
    virtual void* v22();
    virtual void* v23();
    virtual void* v24();
    virtual void* v25();
    virtual void* v26();
    virtual void* v27();
    virtual void* v28();
    virtual void* v29();
    virtual void* v30();
    virtual void* v31();
    virtual void* v32();
    virtual void* v33();
    virtual void* v34();
    virtual void* v35();
    virtual void* v36();
    virtual void* v37();
    virtual void* v38();
    virtual void* v39();
    virtual void* v40();
    virtual void* v41();
    virtual void* v42();
    virtual void* v43();
    virtual void* v44();
    virtual void* v45();
    virtual void* v46();
    virtual void* v47();
    virtual void* v48();
    virtual void* v49();
    virtual void* v50();
    virtual void* v51();
    virtual void* v52();
    virtual void* v53();
    virtual void* v54();
    virtual void* v55();
    virtual void* v56();
    virtual void* v57();
    virtual void* v58();
    virtual void* v59();
    virtual void* v60();
    virtual void* v61();
    virtual void* v62();
    virtual void* v63();
    virtual void* v64();
    virtual void* v65();
    virtual void* v66();
    virtual void* v67();
    virtual void* v68();
    virtual void* v69();
    virtual void* v70();
    virtual void* v71();
    virtual void* v72();
    virtual void* v73();
    virtual void* v74();
    virtual void* v75();
    virtual CRes* v76(void*);
};

struct CRes
{
    unsigned int sub_006ae0c0();
};

// @baa 0x00bbb810
int ULensFlareComponent::vf_258()
{
    if (Template == 0)
        return 0;
    int Result = 0;
    if ((((FFlareLayout*)Template)->Active & 1) != 0)
    {
        for (int i = 0; i < ((FFlareLayout*)Template)->Arr1.Num(); i++)
        {
            void* pObj = ((FFlareLayout*)Template)->Arr1(i);
            if (pObj != 0)
            {
                CRes* r = ((CVTableObj*)pObj)->v76(g_026b2234);
                if (r != 0 && r->sub_006ae0c0() == 1)
                {
                    Result = 1;
                    goto Done;
                }
            }
        }
    }
    for (int i = 0; i < ((FFlareLayout*)Template)->Arr2.Num(); i++)
    {
        const FFlareItem& Elem = ((FFlareLayout*)Template)->Arr2(i);
        if ((Elem.Flags & 1) != 0)
        {
            for (int j = 0; j < Elem.Items.Num(); j++)
            {
                void* pObj = Elem.Items(j);
                if (pObj != 0)
                {
                    CRes* r = ((CVTableObj*)pObj)->v76(g_026b2234);
                    if (r != 0 && r->sub_006ae0c0() == 1)
                    {
                        Result = 1;
                        break;
                    }
                }
            }
        }
    }
Done:
    return Result;
}

struct CRes_00bbbbb0;
struct CVTableObj_00bbbbb0
{
    virtual void* v00();
    virtual void* v01();
    virtual void* v02();
    virtual void* v03();
    virtual void* v04();
    virtual void* v05();
    virtual void* v06();
    virtual void* v07();
    virtual void* v08();
    virtual void* v09();
    virtual void* v10();
    virtual void* v11();
    virtual void* v12();
    virtual void* v13();
    virtual void* v14();
    virtual void* v15();
    virtual void* v16();
    virtual void* v17();
    virtual void* v18();
    virtual void* v19();
    virtual void* v20();
    virtual void* v21();
    virtual void* v22();
    virtual void* v23();
    virtual void* v24();
    virtual void* v25();
    virtual void* v26();
    virtual void* v27();
    virtual void* v28();
    virtual void* v29();
    virtual void* v30();
    virtual void* v31();
    virtual void* v32();
    virtual void* v33();
    virtual void* v34();
    virtual void* v35();
    virtual void* v36();
    virtual void* v37();
    virtual void* v38();
    virtual void* v39();
    virtual void* v40();
    virtual void* v41();
    virtual void* v42();
    virtual void* v43();
    virtual void* v44();
    virtual void* v45();
    virtual void* v46();
    virtual void* v47();
    virtual void* v48();
    virtual void* v49();
    virtual void* v50();
    virtual void* v51();
    virtual void* v52();
    virtual void* v53();
    virtual void* v54();
    virtual void* v55();
    virtual void* v56();
    virtual void* v57();
    virtual void* v58();
    virtual void* v59();
    virtual void* v60();
    virtual void* v61();
    virtual void* v62();
    virtual void* v63();
    virtual void* v64();
    virtual void* v65();
    virtual void* v66();
    virtual void* v67();
    virtual void* v68();
    virtual void* v69();
    virtual void* v70();
    virtual void* v71();
    virtual void* v72();
    virtual void* v73();
    virtual void* v74();
    virtual void* v75();
    virtual CRes_00bbbbb0* v76(void*);
};

struct CRes_00bbbbb0
{
    unsigned int sub_006ae0f0();
};

// @baa 0x00bbbbb0
int ULensFlareComponent::vf_260()
{
    if (Template == 0)
        return 0;
    int Result = 0;
    if ((((FFlareLayout*)Template)->Active & 1) != 0)
    {
        for (int i = 0; i < ((FFlareLayout*)Template)->Arr1.Num(); i++)
        {
            void* pObj = ((FFlareLayout*)Template)->Arr1(i);
            if (pObj != 0)
            {
                CRes_00bbbbb0* r = ((CVTableObj_00bbbbb0*)pObj)->v76(g_026b2234);
                if (r != 0 && r->sub_006ae0f0() == 1)
                {
                    Result = 1;
                    goto Done;
                }
            }
        }
    }
    for (int i = 0; i < ((FFlareLayout*)Template)->Arr2.Num(); i++)
    {
        const FFlareItem& Elem = ((FFlareLayout*)Template)->Arr2(i);
        if ((Elem.Flags & 1) != 0)
        {
            for (int j = 0; j < Elem.Items.Num(); j++)
            {
                void* pObj = Elem.Items(j);
                if (pObj != 0)
                {
                    CRes_00bbbbb0* r = ((CVTableObj_00bbbbb0*)pObj)->v76(g_026b2234);
                    if (r != 0 && r->sub_006ae0f0() == 1)
                    {
                        Result = 1;
                        break;
                    }
                }
            }
        }
    }
Done:
    return Result;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00bbc540 { void* Data; int Num; int Max; void sub_00bbc540(); };

// @baa 0x00bbc540
void C_00bbc540::sub_00bbc540() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00bbc5e0 { void* Data; int Num; int Max; void sub_00bbc5e0(); };

// @baa 0x00bbc5e0
void C_00bbc5e0::sub_00bbc5e0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00bbc680 { void* Data; int Num; int Max; void sub_00bbc680(); };

// @baa 0x00bbc680
void C_00bbc680::sub_00bbc680() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00bbc6e0 { void* Data; int Num; int Max; void sub_00bbc6e0(); };

// @baa 0x00bbc6e0
void C_00bbc6e0::sub_00bbc6e0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00bbc740 { void* Data; int Num; int Max; void sub_00bbc740(); };

// @baa 0x00bbc740
void C_00bbc740::sub_00bbc740() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00bbc7a0 { void* Data; int Num; int Max; void sub_00bbc7a0(); };

// @baa 0x00bbc7a0
void C_00bbc7a0::sub_00bbc7a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00bbc840 { void* Data; int Num; int Max; void sub_00bbc840(); };

// @baa 0x00bbc840
void C_00bbc840::sub_00bbc840() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00bbc8a0 { void* Data; int Num; int Max; void sub_00bbc8a0(); };

// @baa 0x00bbc8a0
void C_00bbc8a0::sub_00bbc8a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00bbc950 { void* Data; int Num; int Max; void sub_00bbc950(); };

// @baa 0x00bbc950
void C_00bbc950::sub_00bbc950() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00bbc9b0 { void* Data; int Num; int Max; void sub_00bbc9b0(); };

// @baa 0x00bbc9b0
void C_00bbc9b0::sub_00bbc9b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00bbca10 {
    undefined4 sub_00bbca10();
};

// @baa 0x00bbca10
undefined4 C_00bbca10::sub_00bbca10(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_00bbcab0 { int sub_00bbcab0(void); };

// @baa 0x00bbcab0
int C_00bbcab0::sub_00bbcab0(void) { return *(int*)((char*)this + 8); }

struct C_00bbcac0 { char* sub_00bbcac0(void); };

// @baa 0x00bbcac0
char* C_00bbcac0::sub_00bbcac0(void) { return (char*)this + 48; }

struct C_00bbcad0 { char* sub_00bbcad0(void); };

// @baa 0x00bbcad0
char* C_00bbcad0::sub_00bbcad0(void) { return (char*)this + 20; }

struct C_00bbcae0 { C_00bbcae0* sub_00bbcae0(void); };

// @baa 0x00bbcae0
C_00bbcae0* C_00bbcae0::sub_00bbcae0(void) { return this; }

struct C_00bbcf80 {
    FString sub_00bbcf80();
};

// @baa 0x00bbcf80
FString C_00bbcf80::sub_00bbcf80()
{
    return TEXT("Foliage instances");
}

struct C_00bbd040 { char* sub_00bbd040(void); };

// @baa 0x00bbd040
char* C_00bbd040::sub_00bbd040(void) { return (char*)this + 48; }

struct C_00bbd050 { char* sub_00bbd050(void); };

// @baa 0x00bbd050
char* C_00bbd050::sub_00bbd050(void) { return (char*)this + 20; }

struct C_00bbd060 { C_00bbd060* sub_00bbd060(void); };

// @baa 0x00bbd060
C_00bbd060* C_00bbd060::sub_00bbd060(void) { return this; }

struct C_00bbd4f0 {
    FString sub_00bbd4f0();
};

// @baa 0x00bbd4f0
FString C_00bbd4f0::sub_00bbd4f0()
{
    return TEXT("Foliage instances");
}

struct C_00bbd5f0 {
    FString sub_00bbd5f0();
};

// @baa 0x00bbd5f0
FString C_00bbd5f0::sub_00bbd5f0()
{
    return TEXT("Foliage instances");
}

struct C_00bbd620 {
    undefined4 sub_00bbd620(byte);
};

int sub_00bbcef0(void);
// @baa 0x00bbd620
undefined4 C_00bbd620::sub_00bbd620(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00bbcef0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00bbd640 {
    undefined4 sub_00bbd640(byte);
};

int sub_00bbd460(void);
// @baa 0x00bbd640
undefined4 C_00bbd640::sub_00bbd640(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00bbd460();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00bbd660
void __stdcall sub_00bbd660(int a0, int a1) {  }

struct C_00bbe3f0 {
    undefined4 sub_00bbe3f0(byte);
};

int sub_008129a0(void);
// @baa 0x00bbe3f0
undefined4 C_00bbe3f0::sub_00bbe3f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_008129a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_0040fcc0();
// @baa 0x00bbe410
void sub_00bbe410(void) { sub_0040fcc0(); }

struct C_00bbe420 {
    int sub_00bbe420();
};

// @baa 0x00bbe420
int C_00bbe420::sub_00bbe420(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00bbe6e0 {
    int sub_00bbe6e0(int);
};

// @baa 0x00bbe6e0
int C_00bbe6e0::sub_00bbe6e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00bbe6f0 {
    int sub_00bbe6f0();
};

// @baa 0x00bbe6f0
int C_00bbe6f0::sub_00bbe6f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00bbe710 {
    int sub_00bbe710();
};

// @baa 0x00bbe710
int C_00bbe710::sub_00bbe710(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00bbe720 {
    uint sub_00bbe720();
};

// @baa 0x00bbe720
uint C_00bbe720::sub_00bbe720(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x840) | -(uint)(*(uint *)(param_1 + 0x840) == 0) & param_1;
}

struct C_00bbe740 {
    int sub_00bbe740(int);
};

// @baa 0x00bbe740
int C_00bbe740::sub_00bbe740(int param_2)
{
    uint param_1 = (uint)this;

  return param_2 * 0x40 +
         (-(uint)(*(uint *)(param_1 + 0x840) == 0) & param_1 | *(uint *)(param_1 + 0x840));
}

struct C_00bbe7d0 {
    int sub_00bbe7d0(int);
};

// @baa 0x00bbe7d0
int C_00bbe7d0::sub_00bbe7d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00bbe7e0 {
    uint sub_00bbe7e0();
};

// @baa 0x00bbe7e0
uint C_00bbe7e0::sub_00bbe7e0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x18c0) | -(uint)(*(uint *)(param_1 + 0x18c0) == 0) & param_1;
}

struct C_00bbe800 {
    uint sub_00bbe800();
};

// @baa 0x00bbe800
uint C_00bbe800::sub_00bbe800(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x18c0) | -(uint)(*(uint *)(param_1 + 0x18c0) == 0) & param_1;
}

struct C_00bbe8b0 {
    int sub_00bbe8b0();
};

// @baa 0x00bbe8b0
int C_00bbe8b0::sub_00bbe8b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00bbe8c0 {
    int sub_00bbe8c0();
};

// @baa 0x00bbe8c0
int C_00bbe8c0::sub_00bbe8c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00bbe8e0 {
    int sub_00bbe8e0();
};

// @baa 0x00bbe8e0
int C_00bbe8e0::sub_00bbe8e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00bbe970 {
    int sub_00bbe970();
};

// @baa 0x00bbe970
int C_00bbe970::sub_00bbe970(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00bbe980 {
    int sub_00bbe980();
};

// @baa 0x00bbe980
int C_00bbe980::sub_00bbe980(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00bbedc0 {
    uint sub_00bbedc0();
};

// @baa 0x00bbedc0
uint C_00bbedc0::sub_00bbedc0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x40) | -(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1;
}

struct C_00bbede0 {
    uint sub_00bbede0();
};

// @baa 0x00bbede0
uint C_00bbede0::sub_00bbede0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x40) | -(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1;
}

// BmGame_16b0000.cpp (part 1 of 4): 127 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C { int sub_016b0000(void); };

// @baa 0x016b0000
int C::sub_016b0000(void) { return *(int*)((char*)this + 0); }

struct C_016b0010 { int sub_016b0010(void); };

// @baa 0x016b0010
int C_016b0010::sub_016b0010(void) { return *(int*)((char*)this + 0); }

struct C_016b0020 {
    int sub_016b0020(int);
};

// @baa 0x016b0020
int C_016b0020::sub_016b0020(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x7c + *param_1;
}

struct C_016b0030 { int sub_016b0030(void); };

// @baa 0x016b0030
int C_016b0030::sub_016b0030(void) { return *(int*)((char*)this + 0); }

struct C_016b0040 { int sub_016b0040(void); };

// @baa 0x016b0040
int C_016b0040::sub_016b0040(void) { return *(int*)((char*)this + 0); }

struct C_016b00c0 {
    int sub_016b00c0(int);
};

// @baa 0x016b00c0
int C_016b00c0::sub_016b00c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_016b00d0 { int sub_016b00d0(void); };

// @baa 0x016b00d0
int C_016b00d0::sub_016b00d0(void) { return *(int*)((char*)this + 0); }

struct C_016b00e0 { int sub_016b00e0(void); };

// @baa 0x016b00e0
int C_016b00e0::sub_016b00e0(void) { return *(int*)((char*)this + 0); }

struct C_016b00f0 {
    int sub_016b00f0(int);
};

// @baa 0x016b00f0
int C_016b00f0::sub_016b00f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_016b0100 { int sub_016b0100(void); };

// @baa 0x016b0100
int C_016b0100::sub_016b0100(void) { return *(int*)((char*)this + 0); }

struct C_016b0110 { int sub_016b0110(void); };

// @baa 0x016b0110
int C_016b0110::sub_016b0110(void) { return *(int*)((char*)this + 0); }

struct C_016b0120 {
    int sub_016b0120(int);
};

// @baa 0x016b0120
int C_016b0120::sub_016b0120(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_016b0130 {
    int sub_016b0130();
};

// @baa 0x016b0130
int C_016b0130::sub_016b0130(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_016b0140 { int a, b; C_016b0140(int, int); };

// @baa 0x016b0140
C_016b0140::C_016b0140(int x, int y) : a(x), b(y) {}

struct C_016b0160 { int sub_016b0160(void); };

// @baa 0x016b0160
int C_016b0160::sub_016b0160(void) { return *(int*)((char*)this + 0); }

struct C_016b0170 { int sub_016b0170(void); };

// @baa 0x016b0170
int C_016b0170::sub_016b0170(void) { return *(int*)((char*)this + 0); }

struct C_016b0180 { int sub_016b0180(void); };

// @baa 0x016b0180
int C_016b0180::sub_016b0180(void) { return *(int*)((char*)this + 0); }

struct C_016b0190 { int sub_016b0190(void); };

// @baa 0x016b0190
int C_016b0190::sub_016b0190(void) { return *(int*)((char*)this + 0); }

struct C_016b01a0 { int sub_016b01a0(void); };

// @baa 0x016b01a0
int C_016b01a0::sub_016b01a0(void) { return *(int*)((char*)this + 0); }

struct C_016b01b0 { int sub_016b01b0(void); };

// @baa 0x016b01b0
int C_016b01b0::sub_016b01b0(void) { return *(int*)((char*)this + 0); }

struct C_016b01c0 { int sub_016b01c0(void); };

// @baa 0x016b01c0
int C_016b01c0::sub_016b01c0(void) { return *(int*)((char*)this + 0); }

struct C_016b01d0 { int sub_016b01d0(void); };

// @baa 0x016b01d0
int C_016b01d0::sub_016b01d0(void) { return *(int*)((char*)this + 0); }

struct C_016b01e0 { int sub_016b01e0(void); };

// @baa 0x016b01e0
int C_016b01e0::sub_016b01e0(void) { return *(int*)((char*)this + 0); }

struct C_016b01f0 { int sub_016b01f0(void); };

// @baa 0x016b01f0
int C_016b01f0::sub_016b01f0(void) { return *(int*)((char*)this + 0); }

struct C_016b0200 { int sub_016b0200(void); };

// @baa 0x016b0200
int C_016b0200::sub_016b0200(void) { return *(int*)((char*)this + 0); }

// @baa 0x016b0210
int sub_016b0210(int a0) { return *(int*)a0; }

// @baa 0x016b0220
bool sub_016b0220(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_016b0260 {
    void sub_016b0260(undefined4 *);
};

// @baa 0x016b0260
void C_016b0260::sub_016b0260(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_016b0320 { int sub_016b0320(void); };

// @baa 0x016b0320
int C_016b0320::sub_016b0320(void) { return *(int*)((char*)this + 0); }

struct C_016b0330 { int sub_016b0330(void); };

// @baa 0x016b0330
int C_016b0330::sub_016b0330(void) { return *(int*)((char*)this + 0); }

struct C_016b0340 { int sub_016b0340(void); };

// @baa 0x016b0340
int C_016b0340::sub_016b0340(void) { return *(int*)((char*)this + 0); }

struct C_016b0350 { int sub_016b0350(void); };

// @baa 0x016b0350
int C_016b0350::sub_016b0350(void) { return *(int*)((char*)this + 0); }

struct C_016b0360 { int sub_016b0360(void); };

// @baa 0x016b0360
int C_016b0360::sub_016b0360(void) { return *(int*)((char*)this + 0); }

struct C_016b0370 { int sub_016b0370(void); };

// @baa 0x016b0370
int C_016b0370::sub_016b0370(void) { return *(int*)((char*)this + 0); }

struct C_016b0380 { int sub_016b0380(void); };

// @baa 0x016b0380
int C_016b0380::sub_016b0380(void) { return *(int*)((char*)this + 0); }

struct C_016b0390 { int sub_016b0390(void); };

// @baa 0x016b0390
int C_016b0390::sub_016b0390(void) { return *(int*)((char*)this + 0); }

struct C_016b03a0 { int sub_016b03a0(void); };

// @baa 0x016b03a0
int C_016b03a0::sub_016b03a0(void) { return *(int*)((char*)this + 0); }

struct C_016b03b0 { int sub_016b03b0(void); };

// @baa 0x016b03b0
int C_016b03b0::sub_016b03b0(void) { return *(int*)((char*)this + 0); }

struct C_016b03c0 { int sub_016b03c0(void); };

// @baa 0x016b03c0
int C_016b03c0::sub_016b03c0(void) { return *(int*)((char*)this + 20); }

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
	FFaceFXElement* sub_016b5470(INT Index);
};

// @baa 0x016b5470
FFaceFXElement* UFxRenderWidget::sub_016b5470(INT Index)
{
	return &BoneArray(Index);
}

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_016b54c0(INT Index);
};

// @baa 0x016b54c0
DWORD* S::sub_016b54c0(INT Index)
{
    return &Items(Index);
}

struct E { BYTE Bytes[16]; };

struct S_016b5510 {
    TArray<E> Items; // 0x00
    const E* sub_016b5510(INT Index) const;
};

// @baa 0x016b5510
const E* S_016b5510::sub_016b5510(INT Index) const
{
    return &Items(Index);
}

struct E_016b5560 { BYTE Bytes[60]; };

struct S_016b5560 {
    TArray<E_016b5560> Items; // 0x00
    const E_016b5560* sub_016b5560(INT Index) const;
};

// @baa 0x016b5560
const E_016b5560* S_016b5560::sub_016b5560(INT Index) const
{
    return &Items(Index);
}

struct E_016b55b0 { BYTE Bytes[48]; };

struct S_016b55b0 {
    TArray<E_016b55b0> Items; // 0x00
    const E_016b55b0* sub_016b55b0(INT Index) const;
};

// @baa 0x016b55b0
const E_016b55b0* S_016b55b0::sub_016b55b0(INT Index) const
{
    return &Items(Index);
}

struct E_016b5600 { BYTE Bytes[12]; };

struct S_016b5600 {
    TArray<E_016b5600> Items; // 0x00
    E_016b5600* sub_016b5600(INT Index);
};

// @baa 0x016b5600
E_016b5600* S_016b5600::sub_016b5600(INT Index)
{
    return &Items(Index);
}

struct E_016b5650 { BYTE Bytes[80]; };

struct S_016b5650 {
    TArray<E_016b5650> Items; // 0x00
    E_016b5650* sub_016b5650(INT Index);
};

// @baa 0x016b5650
E_016b5650* S_016b5650::sub_016b5650(INT Index)
{
    return &Items(Index);
}

struct S_016b56a0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_016b56a0(INT Index);
};

// @baa 0x016b56a0
DWORD* S_016b56a0::sub_016b56a0(INT Index)
{
    return &Items(Index);
}

struct S_016b56f0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_016b56f0(INT Index) const;
};

// @baa 0x016b56f0
const DWORD* S_016b56f0::sub_016b56f0(INT Index) const
{
    return &Items(Index);
}

struct E_016b5740 { BYTE Bytes[12]; };

struct S_016b5740 {
    TArray<E_016b5740> Items; // 0x00
    E_016b5740* sub_016b5740(INT Index);
};

// @baa 0x016b5740
E_016b5740* S_016b5740::sub_016b5740(INT Index)
{
    return &Items(Index);
}

struct E_016b5790 { BYTE Bytes[12]; };

struct S_016b5790 {
    TArray<E_016b5790> Items; // 0x00
    const E_016b5790* sub_016b5790(INT Index) const;
};

// @baa 0x016b5790
const E_016b5790* S_016b5790::sub_016b5790(INT Index) const
{
    return &Items(Index);
}

struct E_016b57e0 { BYTE Bytes[12]; };

struct S_016b57e0 {
    TArray<E_016b57e0> Items; // 0x00
    const E_016b57e0* sub_016b57e0(INT Index) const;
};

// @baa 0x016b57e0
const E_016b57e0* S_016b57e0::sub_016b57e0(INT Index) const
{
    return &Items(Index);
}

struct S_016b5830 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_016b5830(INT Index) const;
};

// @baa 0x016b5830
const QWORD* S_016b5830::sub_016b5830(INT Index) const
{
    return &Items(Index);
}

struct E_016b5880 { BYTE Bytes[20]; };

struct S_016b5880 {
    TArray<E_016b5880> Items; // 0x00
    const E_016b5880* sub_016b5880(INT Index) const;
};

// @baa 0x016b5880
const E_016b5880* S_016b5880::sub_016b5880(INT Index) const
{
    return &Items(Index);
}

struct E_016b58d0 { BYTE Bytes[12]; };

struct S_016b58d0 {
    TArray<E_016b58d0> Items; // 0x00
    E_016b58d0* sub_016b58d0(INT Index);
};

// @baa 0x016b58d0
E_016b58d0* S_016b58d0::sub_016b58d0(INT Index)
{
    return &Items(Index);
}

struct E_016b5920 { BYTE Bytes[12]; };

struct S_016b5920 {
    TArray<E_016b5920> Items; // 0x00
    const E_016b5920* sub_016b5920(INT Index) const;
};

// @baa 0x016b5920
const E_016b5920* S_016b5920::sub_016b5920(INT Index) const
{
    return &Items(Index);
}

struct S_016b5970 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_016b5970(INT Index) const;
};

// @baa 0x016b5970
const DWORD* S_016b5970::sub_016b5970(INT Index) const
{
    return &Items(Index);
}

struct S_016b59c0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_016b59c0(INT Index);
};

// @baa 0x016b59c0
DWORD* S_016b59c0::sub_016b59c0(INT Index)
{
    return &Items(Index);
}

struct C_016b5a10{
int sub_016b5a10(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x016b5a10
int C_016b5a10::sub_016b5a10(undefined4*param_2)
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

struct E_016b5a70 { BYTE Bytes[124]; };

struct S_016b5a70 {
    TArray<E_016b5a70> Items; // 0x00
    E_016b5a70* sub_016b5a70(INT Index);
};

// @baa 0x016b5a70
E_016b5a70* S_016b5a70::sub_016b5a70(INT Index)
{
    return &Items(Index);
}

struct E_016b5ac0 { BYTE Bytes[124]; };

struct S_016b5ac0 {
    TArray<E_016b5ac0> Items; // 0x00
    const E_016b5ac0* sub_016b5ac0(INT Index) const;
};

// @baa 0x016b5ac0
const E_016b5ac0* S_016b5ac0::sub_016b5ac0(INT Index) const
{
    return &Items(Index);
}

struct S_016b5b10 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_016b5b10(INT Index);
};

// @baa 0x016b5b10
QWORD* S_016b5b10::sub_016b5b10(INT Index)
{
    return &Items(Index);
}

struct S_016b5b60 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_016b5b60(INT Index) const;
};

// @baa 0x016b5b60
const QWORD* S_016b5b60::sub_016b5b60(INT Index) const
{
    return &Items(Index);
}

typedef uint size_t;

struct C_016b5bb0 {
    int sub_016b5bb0(int);
    int sub_016b0050(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x016b5bb0
int C_016b5bb0::sub_016b5bb0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_016b5bb0 *)(this))->sub_016b0050(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 8),0,param_2 * 8);
  return iVar1;
}

struct S_016b5bf0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_016b5bf0(INT Index);
};

// @baa 0x016b5bf0
DWORD* S_016b5bf0::sub_016b5bf0(INT Index)
{
    return &Items(Index);
}

struct S_016b5c80 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_016b5c80(INT Index);
};

// @baa 0x016b5c80
DWORD* S_016b5c80::sub_016b5c80(INT Index)
{
    return &Items(Index);
}

struct C_016b5d10 {
    int sub_016b5d10(int);
};

// @baa 0x016b5d10
int C_016b5d10::sub_016b5d10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x016b5d20
void __stdcall sub_016b5d20(int a0, int a1) {  }

struct C_016b5d30 {
    int sub_016b5d30(int);
};

// @baa 0x016b5d30
int C_016b5d30::sub_016b5d30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x016b5d40
void __stdcall sub_016b5d40(int a0, int a1) {  }

struct C_016b5d50 {
    int sub_016b5d50(int);
};

// @baa 0x016b5d50
int C_016b5d50::sub_016b5d50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_016b5d60 {
    int sub_016b5d60(int);
};

// @baa 0x016b5d60
int C_016b5d60::sub_016b5d60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_016b5d70 {
    int sub_016b5d70(int);
};

// @baa 0x016b5d70
int C_016b5d70::sub_016b5d70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_016b5d80 {
    int sub_016b5d80(int);
};

// @baa 0x016b5d80
int C_016b5d80::sub_016b5d80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x40 + *param_1;
}

struct C_016b5d90 {
    int sub_016b5d90(int);
};

// @baa 0x016b5d90
int C_016b5d90::sub_016b5d90(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_016b5da0 {
    int sub_016b5da0(int);
};

// @baa 0x016b5da0
int C_016b5da0::sub_016b5da0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_016b5db0 {
    int sub_016b5db0(int);
};

// @baa 0x016b5db0
int C_016b5db0::sub_016b5db0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_016b5dc0 {
    int sub_016b5dc0(int);
};

// @baa 0x016b5dc0
int C_016b5dc0::sub_016b5dc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x016b5dd0
void __stdcall sub_016b5dd0(int a0, int a1) {  }

// @baa 0x016b5de0
void __stdcall sub_016b5de0(int a0, int a1) {  }

struct C_016b5df0 {
    int sub_016b5df0(int);
};

// @baa 0x016b5df0
int C_016b5df0::sub_016b5df0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x016b5e00
void __stdcall sub_016b5e00(int a0, int a1) {  }

// @baa 0x016b5e10
void __stdcall sub_016b5e10(int a0, int a1) {  }

// @baa 0x016b5e20
void __stdcall sub_016b5e20(int a0, int a1) {  }

struct C_016b5e30{
int sub_016b5e30(undefined4*);
};

// @baa 0x016b5e30
int C_016b5e30::sub_016b5e30(undefined4*param_2)
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

// @baa 0x016b5e90
void __stdcall sub_016b5e90(int a0, int a1) {  }

struct S_016b5ea0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_016b5ea0(INT Index);
};

// @baa 0x016b5ea0
DWORD* S_016b5ea0::sub_016b5ea0(INT Index)
{
    return &Items(Index);
}

struct E_016b5ef0 { BYTE Bytes[40]; };

struct S_016b5ef0 {
    TArray<E_016b5ef0> Items; // 0x00
    E_016b5ef0* sub_016b5ef0(INT Index);
};

// @baa 0x016b5ef0
E_016b5ef0* S_016b5ef0::sub_016b5ef0(INT Index)
{
    return &Items(Index);
}

struct E_016b5f40 { BYTE Bytes[24]; };

struct S_016b5f40 {
    TArray<E_016b5f40> Items; // 0x00
    E_016b5f40* sub_016b5f40(INT Index);
};

// @baa 0x016b5f40
E_016b5f40* S_016b5f40::sub_016b5f40(INT Index)
{
    return &Items(Index);
}

struct E_016b5f90 { BYTE Bytes[64]; };

struct S_016b5f90 {
    TArray<E_016b5f90> Items; // 0x00
    E_016b5f90* sub_016b5f90(INT Index);
};

// @baa 0x016b5f90
E_016b5f90* S_016b5f90::sub_016b5f90(INT Index)
{
    return &Items(Index);
}

struct E_016b5fe0 { BYTE Bytes[44]; };

struct S_016b5fe0 {
    TArray<E_016b5fe0> Items; // 0x00
    E_016b5fe0* sub_016b5fe0(INT Index);
};

// @baa 0x016b5fe0
E_016b5fe0* S_016b5fe0::sub_016b5fe0(INT Index)
{
    return &Items(Index);
}

struct S_016b6030 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_016b6030(INT Index);
};

// @baa 0x016b6030
DWORD* S_016b6030::sub_016b6030(INT Index)
{
    return &Items(Index);
}

struct S_016b6080 {
    TArray<E> Items; // 0x00
    E* sub_016b6080(INT Index);
};

// @baa 0x016b6080
E* S_016b6080::sub_016b6080(INT Index)
{
    return &Items(Index);
}

struct E_016b60d0 { BYTE Bytes[12]; };

struct S_016b60d0 {
    TArray<E_016b60d0> Items; // 0x00
    E_016b60d0* sub_016b60d0(INT Index);
};

// @baa 0x016b60d0
E_016b60d0* S_016b60d0::sub_016b60d0(INT Index)
{
    return &Items(Index);
}

struct S_016b6120 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_016b6120(INT Index);
};

// @baa 0x016b6120
QWORD* S_016b6120::sub_016b6120(INT Index)
{
    return &Items(Index);
}

struct UFxRenderWidget_016b6170
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_016b6170(INT Index);
};

// @baa 0x016b6170
FFaceFXElement* UFxRenderWidget_016b6170::sub_016b6170(INT Index)
{
	return &BoneArray(Index);
}

struct C_016b61c0 { int sub_016b61c0(void); };

// @baa 0x016b61c0
int C_016b61c0::sub_016b61c0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

int sub_005413d0(...);
// @baa 0x016b61d0
void sub_016b61d0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_016b61e0 {
    int sub_016b61e0(int);
};

// @baa 0x016b61e0
int C_016b61e0::sub_016b61e0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct C_016b61f0 {
    int sub_016b61f0(int);
};

// @baa 0x016b61f0
int C_016b61f0::sub_016b61f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_016b6200 { int sub_016b6200(void); };

// @baa 0x016b6200
int C_016b6200::sub_016b6200(void) { return *(int*)((char*)this + 20); }

struct C_016b6210 {
    int sub_016b6210();
};

// @baa 0x016b6210
int C_016b6210::sub_016b6210(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

int sub_005c7a20(void);
extern undefined * g_023921a0;
// @baa 0x016b8a50
undefined4 * UObject::sub_016b8a50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023921a0);
  return param_1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_016bdc80 { void* Data; int Num; int Max; void sub_016bdc80(); };

// @baa 0x016bdc80
void C_016bdc80::sub_016bdc80() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_016bdce0 { void* Data; int Num; int Max; void sub_016bdce0(); };

// @baa 0x016bdce0
void C_016bdce0::sub_016bdce0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_016bde00 { void* Data; int Num; int Max; void sub_016bde00(); };

// @baa 0x016bde00
void C_016bde00::sub_016bde00() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_016be020 { void* Data; int Num; int Max; void sub_016be020(); };

// @baa 0x016be020
void C_016be020::sub_016be020() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_016be080 { void* Data; int Num; int Max; void sub_016be080(); };

// @baa 0x016be080
void C_016be080::sub_016be080() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_016be0e0 {
    int sub_016b5e30(undefined4 *);
    int sub_016be0e0(undefined4 *);
};

// @baa 0x016be0e0
int C_016be0e0::sub_016be0e0(undefined4 *param_1)
{
    return sub_016b5e30(param_1);
}

// @baa 0x016be1d0
void __stdcall sub_016be1d0(int a0, int a1) {  }

// @baa 0x016be1e0
void __stdcall sub_016be1e0(int a0, int a1) {  }

// @baa 0x016be1f0
void __stdcall sub_016be1f0(int a0, int a1) {  }

// @baa 0x016be200
void __stdcall sub_016be200(int a0, int a1) {  }

// @baa 0x016be210
void __stdcall sub_016be210(int a0, int a1) {  }

// @baa 0x016be220
void __stdcall sub_016be220(int a0, int a1) {  }

// @baa 0x016be230
void __stdcall sub_016be230(int a0, int a1) {  }

// @baa 0x016be280
void __stdcall sub_016be280(int a0, int a1) {  }

// @baa 0x016be290
void __stdcall sub_016be290(int a0, int a1) {  }

struct C_016be2a0 { int sub_016be2a0(void); };

// @baa 0x016be2a0
int C_016be2a0::sub_016be2a0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_016be350 {
    int sub_016be350(int);
};

// @baa 0x016be350
int C_016be350::sub_016be350(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_016be360 {
    int sub_016be360(int);
};

// @baa 0x016be360
int C_016be360::sub_016be360(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_016be370 {
    int sub_016be370();
};

// @baa 0x016be370
int C_016be370::sub_016be370(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_016be390 {
    int sub_016be390();
};

// @baa 0x016be390
int C_016be390::sub_016be390(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_016be3a0 {
    int sub_016be3a0();
};

// @baa 0x016be3a0
int C_016be3a0::sub_016be3a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_016be3b0 {
    int sub_016be3b0();
};

// @baa 0x016be3b0
int C_016be3b0::sub_016be3b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

void sub_016bdc80();
// @baa 0x016be3c0
void sub_016be3c0(void) { sub_016bdc80(); }

void sub_016bdce0();
// @baa 0x016be550
void sub_016be550(void) { sub_016bdce0(); }

void sub_016bdda0();
// @baa 0x016be840
void sub_016be840(void) { sub_016bdda0(); }

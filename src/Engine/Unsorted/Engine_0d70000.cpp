// Engine_0d70000.cpp (part 1 of 2): 218 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct E { BYTE Bytes[12]; };

struct S {
    TArray<E> Items; // 0x00
    const E* sub_00d708b0(INT Index) const;
};

// @baa 0x00d708b0
const E* S::sub_00d708b0(INT Index) const
{
    return &Items(Index);
}

typedef uint size_t;

struct C {
    int sub_00d70900(int);
    int sub_00d6ccc0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00d70900
int C::sub_00d70900(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C *)(this))->sub_00d6ccc0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

struct S_00d70940 {
    TArray<E> Items; // 0x00
    const E* sub_00d70940(INT Index) const;
};

// @baa 0x00d70940
const E* S_00d70940::sub_00d70940(INT Index) const
{
    return &Items(Index);
}

struct E_00d70a00 { BYTE Bytes[20]; };

struct S_00d70a00 {
    TArray<E_00d70a00> Items; // 0x00
    const E_00d70a00* sub_00d70a00(INT Index) const;
};

// @baa 0x00d70a00
const E_00d70a00* S_00d70a00::sub_00d70a00(INT Index) const
{
    return &Items(Index);
}

struct C_00d70a50 {
    int sub_00d70a50(int);
    int sub_00d6cd40(int);
};

// @baa 0x00d70a50
int C_00d70a50::sub_00d70a50(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00d70a50 *)(this))->sub_00d6cd40(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x14),0,param_2 * 0x14);
  return iVar1;
}

struct E_00d70a90 { BYTE Bytes[36]; };

struct S_00d70a90 {
    TArray<E_00d70a90> Items; // 0x00
    E_00d70a90* sub_00d70a90(INT Index);
};

// @baa 0x00d70a90
E_00d70a90* S_00d70a90::sub_00d70a90(INT Index)
{
    return &Items(Index);
}

struct E_00d70ae0 { BYTE Bytes[64]; };

struct S_00d70ae0 {
    TArray<E_00d70ae0> Items; // 0x00
    E_00d70ae0* sub_00d70ae0(INT Index);
};

// @baa 0x00d70ae0
E_00d70ae0* S_00d70ae0::sub_00d70ae0(INT Index)
{
    return &Items(Index);
}

struct E_00d70b30 { BYTE Bytes[64]; };

struct S_00d70b30 {
    TArray<E_00d70b30> Items; // 0x00
    const E_00d70b30* sub_00d70b30(INT Index) const;
};

// @baa 0x00d70b30
const E_00d70b30* S_00d70b30::sub_00d70b30(INT Index) const
{
    return &Items(Index);
}

struct S_00d70b80 {
    TArray<E> Items; // 0x00
    E* sub_00d70b80(INT Index);
};

// @baa 0x00d70b80
E* S_00d70b80::sub_00d70b80(INT Index)
{
    return &Items(Index);
}

struct C_00d70bd0 {
    int sub_00d70bd0(int);
    int sub_00d6ce30(int);
};

// @baa 0x00d70bd0
int C_00d70bd0::sub_00d70bd0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00d70bd0 *)(this))->sub_00d6ce30(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
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
	FFaceFXElement* sub_00d70c10(INT Index);
};

// @baa 0x00d70c10
FFaceFXElement* UFxRenderWidget::sub_00d70c10(INT Index)
{
	return &BoneArray(Index);
}

struct E_00d70c60 { BYTE Bytes[40]; };

struct S_00d70c60 {
    TArray<E_00d70c60> Items; // 0x00
    E_00d70c60* sub_00d70c60(INT Index);
};

// @baa 0x00d70c60
E_00d70c60* S_00d70c60::sub_00d70c60(INT Index)
{
    return &Items(Index);
}

struct E_00d70cb0 { BYTE Bytes[24]; };

struct S_00d70cb0 {
    TArray<E_00d70cb0> Items; // 0x00
    E_00d70cb0* sub_00d70cb0(INT Index);
};

// @baa 0x00d70cb0
E_00d70cb0* S_00d70cb0::sub_00d70cb0(INT Index)
{
    return &Items(Index);
}

struct E_00d70d00 { BYTE Bytes[24]; };

struct S_00d70d00 {
    TArray<E_00d70d00> Items; // 0x00
    const E_00d70d00* sub_00d70d00(INT Index) const;
};

// @baa 0x00d70d00
const E_00d70d00* S_00d70d00::sub_00d70d00(INT Index) const
{
    return &Items(Index);
}

struct C_00d70d50 {
    int sub_00d70d50(int);
    int sub_00d6cf90(int);
};

// @baa 0x00d70d50
int C_00d70d50::sub_00d70d50(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00d70d50 *)(this))->sub_00d6cf90(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x18),0,param_2 * 0x18);
  return iVar1;
}

struct E_00d70d90 { BYTE Bytes[24]; };

struct S_00d70d90 {
    TArray<E_00d70d90> Items; // 0x00
    E_00d70d90* sub_00d70d90(INT Index);
};

// @baa 0x00d70d90
E_00d70d90* S_00d70d90::sub_00d70d90(INT Index)
{
    return &Items(Index);
}

struct E_00d70de0 { BYTE Bytes[24]; };

struct S_00d70de0 {
    TArray<E_00d70de0> Items; // 0x00
    const E_00d70de0* sub_00d70de0(INT Index) const;
};

// @baa 0x00d70de0
const E_00d70de0* S_00d70de0::sub_00d70de0(INT Index) const
{
    return &Items(Index);
}

struct E_00d70e30 { BYTE Bytes[148]; };

struct S_00d70e30 {
    TArray<E_00d70e30> Items; // 0x00
    E_00d70e30* sub_00d70e30(INT Index);
};

// @baa 0x00d70e30
E_00d70e30* S_00d70e30::sub_00d70e30(INT Index)
{
    return &Items(Index);
}

struct E_00d70e80 { BYTE Bytes[36]; };

struct S_00d70e80 {
    TArray<E_00d70e80> Items; // 0x00
    const E_00d70e80* sub_00d70e80(INT Index) const;
};

// @baa 0x00d70e80
const E_00d70e80* S_00d70e80::sub_00d70e80(INT Index) const
{
    return &Items(Index);
}

struct C_00d70ed0{
int sub_00d70ed0(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00d70ed0
int C_00d70ed0::sub_00d70ed0(undefined4*param_2)
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

struct C_00d70f30{
int sub_00d70f30(undefined4*);
};

// @baa 0x00d70f30
int C_00d70f30::sub_00d70f30(undefined4*param_2)
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

struct C_00d70f90{
int sub_00d70f90(undefined4*);
};

// @baa 0x00d70f90
int C_00d70f90::sub_00d70f90(undefined4*param_2)
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

struct S_00d71040 {
    TArray<E> Items; // 0x00
    E* sub_00d71040(INT Index);
};

// @baa 0x00d71040
E* S_00d71040::sub_00d71040(INT Index)
{
    return &Items(Index);
}

struct C_00d71090 {
    int sub_00d71090(int);
};

// @baa 0x00d71090
int C_00d71090::sub_00d71090(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00d710a0 {
    int sub_00d710a0(int);
};

// @baa 0x00d710a0
int C_00d710a0::sub_00d710a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00d710b0 {
    int sub_00d710b0(int);
};

// @baa 0x00d710b0
int C_00d710b0::sub_00d710b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_00d710c0 {
    int sub_00d710c0(int);
};

// @baa 0x00d710c0
int C_00d710c0::sub_00d710c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00d710d0 {
    int sub_00d710d0(int);
};

// @baa 0x00d710d0
int C_00d710d0::sub_00d710d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00d710e0
void __stdcall sub_00d710e0(int a0, int a1) {  }

struct C_00d710f0 {
    int sub_00d710f0(int);
};

// @baa 0x00d710f0
int C_00d710f0::sub_00d710f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00d71100 {
    int sub_00d71100(int);
};

// @baa 0x00d71100
int C_00d71100::sub_00d71100(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_00d71110 {
    int sub_00d71110(int);
};

// @baa 0x00d71110
int C_00d71110::sub_00d71110(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00d71120 {
    int sub_00d71120(int);
};

// @baa 0x00d71120
int C_00d71120::sub_00d71120(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00d71130 {
    int sub_00d71130(int);
};

// @baa 0x00d71130
int C_00d71130::sub_00d71130(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00d71140 {
    int sub_00d71140(int);
};

// @baa 0x00d71140
int C_00d71140::sub_00d71140(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_00d71150 {
    int sub_00d71150(int);
};

// @baa 0x00d71150
int C_00d71150::sub_00d71150(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00d71160 {
    int sub_00d71160(int);
};

// @baa 0x00d71160
int C_00d71160::sub_00d71160(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_00d71170 {
    int sub_00d71170(int);
};

// @baa 0x00d71170
int C_00d71170::sub_00d71170(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_00d71180 {
    int sub_00d71180(int);
};

// @baa 0x00d71180
int C_00d71180::sub_00d71180(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct S_00d71190 {
    TArray<E> Items; // 0x00
    E* sub_00d71190(INT Index);
};

// @baa 0x00d71190
E* S_00d71190::sub_00d71190(INT Index)
{
    return &Items(Index);
}

struct C_00d711e0 {
    int sub_00d711e0(int);
};

// @baa 0x00d711e0
int C_00d711e0::sub_00d711e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00d711f0
void __stdcall sub_00d711f0(int a0, int a1) {  }

struct UFxRenderWidget_00d71200
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_00d71200(INT Index);
};

// @baa 0x00d71200
FFaceFXElement* UFxRenderWidget_00d71200::sub_00d71200(INT Index)
{
	return &BoneArray(Index);
}

struct C_00d71250 {
    int sub_00d71250(int);
};

// @baa 0x00d71250
int C_00d71250::sub_00d71250(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00d71260 {
    int sub_00d71260(int);
};

// @baa 0x00d71260
int C_00d71260::sub_00d71260(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00d71280 {
    int sub_00d71280(int);
};

// @baa 0x00d71280
int C_00d71280::sub_00d71280(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x94 + *param_1;
}

struct C_00d71290 { int sub_00d71290(void); };

// @baa 0x00d71290
int C_00d71290::sub_00d71290(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00d712a0 {
    int sub_00d712a0(int);
};

// @baa 0x00d712a0
int C_00d712a0::sub_00d712a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00d712b0
void __stdcall sub_00d712b0(int a0, int a1) {  }

struct S_00d71330 {
    TArray<E> Items; // 0x00
    E* sub_00d71330(INT Index);
};

// @baa 0x00d71330
E* S_00d71330::sub_00d71330(INT Index)
{
    return &Items(Index);
}

struct S_00d71380 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00d71380(INT Index);
};

// @baa 0x00d71380
QWORD* S_00d71380::sub_00d71380(INT Index)
{
    return &Items(Index);
}

struct UFxRenderWidget_00d713d0
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_00d713d0(INT Index);
};

// @baa 0x00d713d0
FFaceFXElement* UFxRenderWidget_00d713d0::sub_00d713d0(INT Index)
{
	return &BoneArray(Index);
}

struct E_00d71420 { BYTE Bytes[16]; };

struct S_00d71420 {
    TArray<E_00d71420> Items; // 0x00
    E_00d71420* sub_00d71420(INT Index);
};

// @baa 0x00d71420
E_00d71420* S_00d71420::sub_00d71420(INT Index)
{
    return &Items(Index);
}

struct S_00d71470 {
    TArray<E> Items; // 0x00
    E* sub_00d71470(INT Index);
};

// @baa 0x00d71470
E* S_00d71470::sub_00d71470(INT Index)
{
    return &Items(Index);
}

struct E_00d714c0 { BYTE Bytes[16]; };

struct S_00d714c0 {
    TArray<E_00d714c0> Items; // 0x00
    E_00d714c0* sub_00d714c0(INT Index);
};

// @baa 0x00d714c0
E_00d714c0* S_00d714c0::sub_00d714c0(INT Index)
{
    return &Items(Index);
}

struct S_00d71510 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00d71510(INT Index);
};

// @baa 0x00d71510
QWORD* S_00d71510::sub_00d71510(INT Index)
{
    return &Items(Index);
}

struct UFxRenderWidget_00d71560
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_00d71560(INT Index);
};

// @baa 0x00d71560
FFaceFXElement* UFxRenderWidget_00d71560::sub_00d71560(INT Index)
{
	return &BoneArray(Index);
}

struct E_00d715b0 { BYTE Bytes[40]; };

struct S_00d715b0 {
    TArray<E_00d715b0> Items; // 0x00
    E_00d715b0* sub_00d715b0(INT Index);
};

// @baa 0x00d715b0
E_00d715b0* S_00d715b0::sub_00d715b0(INT Index)
{
    return &Items(Index);
}

struct S_00d71600 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00d71600(INT Index);
};

// @baa 0x00d71600
QWORD* S_00d71600::sub_00d71600(INT Index)
{
    return &Items(Index);
}

struct E_00d71650 { BYTE Bytes[24]; };

struct S_00d71650 {
    TArray<E_00d71650> Items; // 0x00
    E_00d71650* sub_00d71650(INT Index);
};

// @baa 0x00d71650
E_00d71650* S_00d71650::sub_00d71650(INT Index)
{
    return &Items(Index);
}

struct C_00d716a0 {
    void sub_00d716a0(int *);
};

// @baa 0x00d716a0
void C_00d716a0::sub_00d716a0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 8;
  return;
}

struct C_00d716b0 { int sub_00d716b0(void); };

// @baa 0x00d716b0
int C_00d716b0::sub_00d716b0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00d71710 { int sub_00d71710(void); };

// @baa 0x00d71710
int C_00d71710::sub_00d71710(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00d71720 { int sub_00d71720(void); };

// @baa 0x00d71720
int C_00d71720::sub_00d71720(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct E_00d71730 { BYTE Bytes[36]; };

struct S_00d71730 {
    TArray<E_00d71730> Items; // 0x00
    E_00d71730* sub_00d71730(INT Index);
};

// @baa 0x00d71730
E_00d71730* S_00d71730::sub_00d71730(INT Index)
{
    return &Items(Index);
}

int sub_005413d0(...);
// @baa 0x00d71780
void sub_00d71780(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00d71790 {
    int sub_00d71790();
};

// @baa 0x00d71790
int C_00d71790::sub_00d71790(void)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c);
}

struct C_00d717a0 { int sub_00d717a0(void); };

// @baa 0x00d717a0
int C_00d717a0::sub_00d717a0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00d717b0 {
    int sub_00d717b0();
};

// @baa 0x00d717b0
int C_00d717b0::sub_00d717b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d717d0 {
    int sub_00d717d0();
};

// @baa 0x00d717d0
int C_00d717d0::sub_00d717d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d717f0 { int sub_00d717f0(void); };

// @baa 0x00d717f0
int C_00d717f0::sub_00d717f0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00d71800 {
    int sub_00d71800();
};

// @baa 0x00d71800
int C_00d71800::sub_00d71800(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d71820 {
    int sub_00d71820();
};

// @baa 0x00d71820
int C_00d71820::sub_00d71820(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d71840 {
    int sub_00d71840();
};

// @baa 0x00d71840
int C_00d71840::sub_00d71840(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d718c0 {
    int sub_00d718c0(int);
};

// @baa 0x00d718c0
int C_00d718c0::sub_00d718c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00d718d0 {
    int sub_00d718d0(int);
};

// @baa 0x00d718d0
int C_00d718d0::sub_00d718d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x00d718e0
void sub_00d718e0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00d718f0 {
    int sub_00d718f0(int);
};

// @baa 0x00d718f0
int C_00d718f0::sub_00d718f0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00d71900 {
    int sub_00d71900(int);
};

// @baa 0x00d71900
int C_00d71900::sub_00d71900(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00d71910 {
    int sub_00d71910(int);
};

// @baa 0x00d71910
int C_00d71910::sub_00d71910(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

struct C_00d71920 {
    int sub_00d71920(int);
};

// @baa 0x00d71920
int C_00d71920::sub_00d71920(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

struct C_00d71930 {
    int sub_00d71930(int);
};

// @baa 0x00d71930
int C_00d71930::sub_00d71930(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00d71940 {
    int sub_00d71940(int);
};

// @baa 0x00d71940
int C_00d71940::sub_00d71940(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00d71950 {
    int sub_00d71950(int);
};

// @baa 0x00d71950
int C_00d71950::sub_00d71950(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00d71990
void sub_00d71990(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00d719a0 {
    int sub_00d719a0(int);
};

// @baa 0x00d719a0
int C_00d719a0::sub_00d719a0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct C_00d719b0 {
    int sub_00d719b0(int);
};

// @baa 0x00d719b0
int C_00d719b0::sub_00d719b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00d71a30 {
    int sub_00d71a30(int);
};

// @baa 0x00d71a30
int C_00d71a30::sub_00d71a30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00d71a50 {
    int sub_00d71a50(int);
};

// @baa 0x00d71a50
int C_00d71a50::sub_00d71a50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00d71a70 {
    int sub_00d71a70(int);
};

// @baa 0x00d71a70
int C_00d71a70::sub_00d71a70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_00d71a80 {
    int sub_00d71a80(int);
};

// @baa 0x00d71a80
int C_00d71a80::sub_00d71a80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00d71a90 {
    int sub_00d71a90(int);
};

// @baa 0x00d71a90
int C_00d71a90::sub_00d71a90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00d71aa0 {
    int sub_00d71aa0(int);
};

// @baa 0x00d71aa0
int C_00d71aa0::sub_00d71aa0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

struct E_00d71ab0 { BYTE Bytes[52]; };

struct S_00d71ab0 {
    TArray<E_00d71ab0> Items; // 0x00
    E_00d71ab0* sub_00d71ab0(INT Index);
};

// @baa 0x00d71ab0
E_00d71ab0* S_00d71ab0::sub_00d71ab0(INT Index)
{
    return &Items(Index);
}

struct C_00d71b00 {
    int sub_00d71b00();
};

// @baa 0x00d71b00
int C_00d71b00::sub_00d71b00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00d71b10 {
    int sub_00d71b10(int);
};

// @baa 0x00d71b10
int C_00d71b10::sub_00d71b10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00d71b20 {
    int sub_00d71b20();
};

// @baa 0x00d71b20
int C_00d71b20::sub_00d71b20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00d71b30 {
    int sub_00d71b30(int);
};

// @baa 0x00d71b30
int C_00d71b30::sub_00d71b30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct S_00d71b40 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00d71b40(INT Index);
};

// @baa 0x00d71b40
DWORD* S_00d71b40::sub_00d71b40(INT Index)
{
    return &Items(Index);
}

// @baa 0x00d720d0
void sub_00d720d0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x00d720f0
void sub_00d720f0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00d72140
void sub_00d72140(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00d72160
void sub_00d72160(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct C_00d721b0 {
    int sub_00d721b0(int);
};

// @baa 0x00d721b0
int C_00d721b0::sub_00d721b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00d721c0 {
    int sub_00d721c0();
};

// @baa 0x00d721c0
int C_00d721c0::sub_00d721c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

// @baa 0x00d721d0
void sub_00d721d0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

struct C_00d77870 {
    int sub_00d77870();
};

// @baa 0x00d77870
int C_00d77870::sub_00d77870(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4 + 0x160;
}

struct C_00d77880 {
    void sub_00d77880();
};

// @baa 0x00d77880
void C_00d77880::sub_00d77880(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[2] = param_1[1];
  return;
}

struct C_00d77a60 {
    void sub_00d77a60();
};

extern "C" __declspec(dllimport) int free(...);
// @baa 0x00d77a60
void C_00d77a60::sub_00d77a60(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 4) != (void *)0x0) {
    free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00d78810 { void* Data; int Num; int Max; void sub_00d78810(); };

// @baa 0x00d78810
void C_00d78810::sub_00d78810() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d78870 {
    int sub_00d78870();
};

// @baa 0x00d78870
int C_00d78870::sub_00d78870(void)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c);
}

struct C_00d78880 { void* Data; int Num; int Max; void sub_00d78880(); };

// @baa 0x00d78880
void C_00d78880::sub_00d78880() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00d78970
void __stdcall sub_00d78970(int a0, int a1) {  }

// @baa 0x00d78980
void __stdcall sub_00d78980(int a0, int a1) {  }

// @baa 0x00d78990
void __stdcall sub_00d78990(int a0, int a1) {  }

// @baa 0x00d789a0
void __stdcall sub_00d789a0(int a0, int a1) {  }

// @baa 0x00d789b0
void __stdcall sub_00d789b0(int a0, int a1) {  }

// @baa 0x00d789c0
void __stdcall sub_00d789c0(int a0, int a1) {  }

// @baa 0x00d789d0
void __stdcall sub_00d789d0(int a0, int a1) {  }

struct C_00d789e0 { int sub_00d789e0(void); };

// @baa 0x00d789e0
int C_00d789e0::sub_00d789e0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x00d789f0
void __stdcall sub_00d789f0(int a0, int a1) {  }

struct C_00d78a00 { int sub_00d78a00(void); };

// @baa 0x00d78a00
int C_00d78a00::sub_00d78a00(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00d78a10 {
    int sub_00d78a10();
};

// @baa 0x00d78a10
int C_00d78a10::sub_00d78a10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d78a30 {
    int sub_00d78a30();
};

// @baa 0x00d78a30
int C_00d78a30::sub_00d78a30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d78a50 { int sub_00d78a50(void); };

// @baa 0x00d78a50
int C_00d78a50::sub_00d78a50(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00d78a60 {
    int sub_00d78a60();
};

// @baa 0x00d78a60
int C_00d78a60::sub_00d78a60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d78ac0 {
    int sub_00d78ac0();
};

// @baa 0x00d78ac0
int C_00d78ac0::sub_00d78ac0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d78ae0 {
    int sub_00d78ae0();
};

// @baa 0x00d78ae0
int C_00d78ae0::sub_00d78ae0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct M_00d78b50 { void sub_0040fcc0(); };

struct C_00d78b50 { char pad[8]; M_00d78b50 m; void sub_00d78b50(); };

// @baa 0x00d78b50
void C_00d78b50::sub_00d78b50() { m.sub_0040fcc0(); }

struct M_00d78b60 { void sub_0040fcc0(); };

struct C_00d78b60 { char pad[8]; M_00d78b60 m; void sub_00d78b60(); };

// @baa 0x00d78b60
void C_00d78b60::sub_00d78b60() { m.sub_0040fcc0(); }

struct C_00d79030 {
    int sub_00d79030(int);
};

// @baa 0x00d79030
int C_00d79030::sub_00d79030(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00d79040 {
    int sub_00d79040();
};

// @baa 0x00d79040
int C_00d79040::sub_00d79040(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00d79050 {
    int sub_00d79050();
};

// @baa 0x00d79050
int C_00d79050::sub_00d79050(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00d79060 {
    int sub_00d79060(int);
};

// @baa 0x00d79060
int C_00d79060::sub_00d79060(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00d79080 {
    int sub_00d79080(int);
};

// @baa 0x00d79080
int C_00d79080::sub_00d79080(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_00d79090 {
    int sub_00d79090(int);
};

// @baa 0x00d79090
int C_00d79090::sub_00d79090(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

// @baa 0x00d790a0
void __stdcall sub_00d790a0(int a0, int a1) {  }

struct C_00d790b0 {
    int sub_00d790b0();
};

// @baa 0x00d790b0
int C_00d790b0::sub_00d790b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00d790c0 {
    int sub_00d790c0();
};

// @baa 0x00d790c0
int C_00d790c0::sub_00d790c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00d790d0 {
    int sub_00d790d0();
};

// @baa 0x00d790d0
int C_00d790d0::sub_00d790d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00d790e0 {
    int sub_00d790e0();
};

// @baa 0x00d790e0
int C_00d790e0::sub_00d790e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_00d79100 {
    int sub_00d79100();
};

// @baa 0x00d79100
int C_00d79100::sub_00d79100(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00d79110 {
    int sub_00d79110();
};

// @baa 0x00d79110
int C_00d79110::sub_00d79110(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00d79120 {
    int sub_00d79120();
};

// @baa 0x00d79120
int C_00d79120::sub_00d79120(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x34 + *(int *)*param_1;
}

struct C_00d79130 {
    int sub_00d79130();
};

// @baa 0x00d79130
int C_00d79130::sub_00d79130(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00d79140 {
    int sub_00d79140(int);
};

// @baa 0x00d79140
int C_00d79140::sub_00d79140(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

// @baa 0x00d79150
void __stdcall sub_00d79150(int a0, int a1) {  }

struct C_00d79160 {
    int sub_00d79160();
};

// @baa 0x00d79160
int C_00d79160::sub_00d79160(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_00d79180 {
    int sub_00d79180();
};

// @baa 0x00d79180
int C_00d79180::sub_00d79180(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00d79190 {
    int sub_00d79190();
};

// @baa 0x00d79190
int C_00d79190::sub_00d79190(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x34 + *(int *)*param_1;
}

struct C_00d791a0 {
    int sub_00d791a0();
};

// @baa 0x00d791a0
int C_00d791a0::sub_00d791a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00d791b0 {
    int sub_00d791b0();
};

// @baa 0x00d791b0
int C_00d791b0::sub_00d791b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00d791f0 {
    int sub_00d791f0();
};

// @baa 0x00d791f0
int C_00d791f0::sub_00d791f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_view {
    int sub_00d79210(int, int);
};

// @baa 0x00d79290
int UTexture2D::sub_00d79290(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_00d79210((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct C_00d794c0 {
    undefined4 * sub_00d794c0(undefined4 *);
    int sub_00d74260(int);
};

// @baa 0x00d794c0
undefined4 * C_00d794c0::sub_00d794c0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  if (param_2 != param_1) {
    *param_1 = *param_2;
    ((C_00d794c0 *)(((char *)this + 4)))->sub_00d74260((int)(param_2 + 1));
  }
  return param_1;
}

void sub_00d78700();
// @baa 0x00d79510
void sub_00d79510(void) { sub_00d78700(); }

void sub_00d78810();
// @baa 0x00d79550
void sub_00d79550(void) { sub_00d78810(); }

struct C_00d7bd30 { C_00d7bd30* sub_00d7bd30(void); };

// @baa 0x00d7bd30
C_00d7bd30* C_00d7bd30::sub_00d7bd30(void) { return this; }

struct C_00d7be20 { C_00d7be20* sub_00d7be20(void); };

// @baa 0x00d7be20
C_00d7be20* C_00d7be20::sub_00d7be20(void) { return this; }

struct C_00d7bfa0 { void* Data; int Num; int Max; void sub_00d7bfa0(); };

// @baa 0x00d7bfa0
void C_00d7bfa0::sub_00d7bfa0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d7c000 { void* Data; int Num; int Max; void sub_00d7c000(); };

// @baa 0x00d7c000
void C_00d7c000::sub_00d7c000() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d7c060 {
    undefined4 sub_00d7c060();
};

// @baa 0x00d7c060
undefined4 C_00d7c060::sub_00d7c060(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct TBitArray {
    int* AllocatorData;
    int NumBits;
    int MaxBits;
    int InlineData[4];
};

struct FBitIterator {
    int WordIndex;
    int Mask;
    const int* WordData;
    int UnvisitedMask;
    int CurrentIndex;
    int BaseIndex;

    FBitIterator(const TBitArray& Array, int StartIndex)
        : WordIndex(StartIndex >> 5)
        , Mask(1 << (StartIndex & 31))
        , WordData(Array.InlineData)
        , UnvisitedMask(~0 << (StartIndex & 31))
        , CurrentIndex(StartIndex)
        , BaseIndex(StartIndex & ~31)
    {
    }
    void FindFirstSetBit();
    void Advance()
    {
        UnvisitedMask &= ~Mask;
        FindFirstSetBit();
    }
};

struct TConstSetBitIterator_00d7cf80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7cf80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7cf80& operator++();
};

TConstSetBitIterator_00d7cf80::TConstSetBitIterator_00d7cf80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7cf80
TConstSetBitIterator_00d7cf80& TConstSetBitIterator_00d7cf80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7cfa0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7cfa0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7cfa0& operator++();
};

TConstSetBitIterator_00d7cfa0::TConstSetBitIterator_00d7cfa0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7cfa0
TConstSetBitIterator_00d7cfa0& TConstSetBitIterator_00d7cfa0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00d7cfc0 {
    int sub_00d7cfc0();
};

// @baa 0x00d7cfc0
int C_00d7cfc0::sub_00d7cfc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

struct TConstSetBitIterator_00d7cfd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7cfd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7cfd0& operator++();
};

TConstSetBitIterator_00d7cfd0::TConstSetBitIterator_00d7cfd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7cfd0
TConstSetBitIterator_00d7cfd0& TConstSetBitIterator_00d7cfd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7cff0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7cff0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7cff0& operator++();
};

TConstSetBitIterator_00d7cff0::TConstSetBitIterator_00d7cff0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7cff0
TConstSetBitIterator_00d7cff0& TConstSetBitIterator_00d7cff0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d010 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d010(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d010& operator++();
};

TConstSetBitIterator_00d7d010::TConstSetBitIterator_00d7d010(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d010
TConstSetBitIterator_00d7d010& TConstSetBitIterator_00d7d010::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d030 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d030(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d030& operator++();
};

TConstSetBitIterator_00d7d030::TConstSetBitIterator_00d7d030(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d030
TConstSetBitIterator_00d7d030& TConstSetBitIterator_00d7d030::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d050 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d050(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d050& operator++();
};

TConstSetBitIterator_00d7d050::TConstSetBitIterator_00d7d050(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d050
TConstSetBitIterator_00d7d050& TConstSetBitIterator_00d7d050::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d0a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d0a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d0a0& operator++();
};

TConstSetBitIterator_00d7d0a0::TConstSetBitIterator_00d7d0a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d0a0
TConstSetBitIterator_00d7d0a0& TConstSetBitIterator_00d7d0a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d0f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d0f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d0f0& operator++();
};

TConstSetBitIterator_00d7d0f0::TConstSetBitIterator_00d7d0f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d0f0
TConstSetBitIterator_00d7d0f0& TConstSetBitIterator_00d7d0f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d140 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d140(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d140& operator++();
};

TConstSetBitIterator_00d7d140::TConstSetBitIterator_00d7d140(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d140
TConstSetBitIterator_00d7d140& TConstSetBitIterator_00d7d140::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d190 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d190(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d190& operator++();
};

TConstSetBitIterator_00d7d190::TConstSetBitIterator_00d7d190(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d190
TConstSetBitIterator_00d7d190& TConstSetBitIterator_00d7d190::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d1e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d1e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d1e0& operator++();
};

TConstSetBitIterator_00d7d1e0::TConstSetBitIterator_00d7d1e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d1e0
TConstSetBitIterator_00d7d1e0& TConstSetBitIterator_00d7d1e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d230 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d230(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d230& operator++();
};

TConstSetBitIterator_00d7d230::TConstSetBitIterator_00d7d230(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d230
TConstSetBitIterator_00d7d230& TConstSetBitIterator_00d7d230::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d280 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d280(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d280& operator++();
};

TConstSetBitIterator_00d7d280::TConstSetBitIterator_00d7d280(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d280
TConstSetBitIterator_00d7d280& TConstSetBitIterator_00d7d280::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d2d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d2d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d2d0& operator++();
};

TConstSetBitIterator_00d7d2d0::TConstSetBitIterator_00d7d2d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d2d0
TConstSetBitIterator_00d7d2d0& TConstSetBitIterator_00d7d2d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d320 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d320(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d320& operator++();
};

TConstSetBitIterator_00d7d320::TConstSetBitIterator_00d7d320(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d320
TConstSetBitIterator_00d7d320& TConstSetBitIterator_00d7d320::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d340 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d340(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d340& operator++();
};

TConstSetBitIterator_00d7d340::TConstSetBitIterator_00d7d340(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d340
TConstSetBitIterator_00d7d340& TConstSetBitIterator_00d7d340::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d360 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d360(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d360& operator++();
};

TConstSetBitIterator_00d7d360::TConstSetBitIterator_00d7d360(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d360
TConstSetBitIterator_00d7d360& TConstSetBitIterator_00d7d360::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d380 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d380(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d380& operator++();
};

TConstSetBitIterator_00d7d380::TConstSetBitIterator_00d7d380(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d380
TConstSetBitIterator_00d7d380& TConstSetBitIterator_00d7d380::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d3a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d3a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d3a0& operator++();
};

TConstSetBitIterator_00d7d3a0::TConstSetBitIterator_00d7d3a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d3a0
TConstSetBitIterator_00d7d3a0& TConstSetBitIterator_00d7d3a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d3c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d3c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d3c0& operator++();
};

TConstSetBitIterator_00d7d3c0::TConstSetBitIterator_00d7d3c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d3c0
TConstSetBitIterator_00d7d3c0& TConstSetBitIterator_00d7d3c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d3e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d3e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d3e0& operator++();
};

TConstSetBitIterator_00d7d3e0::TConstSetBitIterator_00d7d3e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d3e0
TConstSetBitIterator_00d7d3e0& TConstSetBitIterator_00d7d3e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d430 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d430(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d430& operator++();
};

TConstSetBitIterator_00d7d430::TConstSetBitIterator_00d7d430(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d430
TConstSetBitIterator_00d7d430& TConstSetBitIterator_00d7d430::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d480 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d480(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d480& operator++();
};

TConstSetBitIterator_00d7d480::TConstSetBitIterator_00d7d480(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d480
TConstSetBitIterator_00d7d480& TConstSetBitIterator_00d7d480::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d4d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d4d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d4d0& operator++();
};

TConstSetBitIterator_00d7d4d0::TConstSetBitIterator_00d7d4d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d4d0
TConstSetBitIterator_00d7d4d0& TConstSetBitIterator_00d7d4d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d520 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d520(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d520& operator++();
};

TConstSetBitIterator_00d7d520::TConstSetBitIterator_00d7d520(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d520
TConstSetBitIterator_00d7d520& TConstSetBitIterator_00d7d520::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d570 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d570(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d570& operator++();
};

TConstSetBitIterator_00d7d570::TConstSetBitIterator_00d7d570(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d570
TConstSetBitIterator_00d7d570& TConstSetBitIterator_00d7d570::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d5c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d5c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d5c0& operator++();
};

TConstSetBitIterator_00d7d5c0::TConstSetBitIterator_00d7d5c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d5c0
TConstSetBitIterator_00d7d5c0& TConstSetBitIterator_00d7d5c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d610 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d610(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d610& operator++();
};

TConstSetBitIterator_00d7d610::TConstSetBitIterator_00d7d610(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d610
TConstSetBitIterator_00d7d610& TConstSetBitIterator_00d7d610::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d660 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d660(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d660& operator++();
};

TConstSetBitIterator_00d7d660::TConstSetBitIterator_00d7d660(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d660
TConstSetBitIterator_00d7d660& TConstSetBitIterator_00d7d660::operator++()
{
    It.Advance();
    return *this;
}

struct C_00d7d680 {
    int sub_00d7d680();
};

// @baa 0x00d7d680
int C_00d7d680::sub_00d7d680(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

// @baa 0x00d7d6a0
int UTexture2D::sub_00d7d6a0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view *)(this))->sub_00d79210((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct TConstSetBitIterator_00d7d6e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d6e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d6e0& operator++();
};

TConstSetBitIterator_00d7d6e0::TConstSetBitIterator_00d7d6e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d6e0
TConstSetBitIterator_00d7d6e0& TConstSetBitIterator_00d7d6e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d7d700 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d7d700(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d7d700& operator++();
};

TConstSetBitIterator_00d7d700::TConstSetBitIterator_00d7d700(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d7d700
TConstSetBitIterator_00d7d700& TConstSetBitIterator_00d7d700::operator++()
{
    It.Advance();
    return *this;
}

void sub_00d7bd40();
// @baa 0x00d7d750
void sub_00d7d750(void) { sub_00d7bd40(); }

void sub_00d7bfa0();
// @baa 0x00d7d760
void sub_00d7d760(void) { sub_00d7bfa0(); }

void sub_00d7c000();
// @baa 0x00d7d770
void sub_00d7d770(void) { sub_00d7c000(); }

void sub_00d7c070();
// @baa 0x00d7d790
void sub_00d7d790(void) { sub_00d7c070(); }

void sub_00d7c0d0();
// @baa 0x00d7d7a0
void sub_00d7d7a0(void) { sub_00d7c0d0(); }

void sub_00d7c130();
// @baa 0x00d7d7b0
void sub_00d7d7b0(void) { sub_00d7c130(); }

void sub_00d7c190();
// @baa 0x00d7d830
void sub_00d7d830(void) { sub_00d7c190(); }

void sub_00d7c1f0();
// @baa 0x00d7d840
void sub_00d7d840(void) { sub_00d7c1f0(); }

void sub_00d7c260();
// @baa 0x00d7d850
void sub_00d7d850(void) { sub_00d7c260(); }

struct C_00d7f7a0 { C_00d7f7a0* sub_00d7f7a0(void); };

// @baa 0x00d7f7a0
C_00d7f7a0* C_00d7f7a0::sub_00d7f7a0(void) { return this; }

struct C_00d7f7b0 { C_00d7f7b0* sub_00d7f7b0(void); };

// @baa 0x00d7f7b0
C_00d7f7b0* C_00d7f7b0::sub_00d7f7b0(void) { return this; }

struct C_00d7f7c0 { C_00d7f7c0* sub_00d7f7c0(void); };

// @baa 0x00d7f7c0
C_00d7f7c0* C_00d7f7c0::sub_00d7f7c0(void) { return this; }

struct C_00d7f7d0 { C_00d7f7d0* sub_00d7f7d0(void); };

// @baa 0x00d7f7d0
C_00d7f7d0* C_00d7f7d0::sub_00d7f7d0(void) { return this; }

struct C_00d7f7e0 { C_00d7f7e0* sub_00d7f7e0(void); };

// @baa 0x00d7f7e0
C_00d7f7e0* C_00d7f7e0::sub_00d7f7e0(void) { return this; }

struct C_00d7f990 { C_00d7f990* sub_00d7f990(void); };

// @baa 0x00d7f990
C_00d7f990* C_00d7f990::sub_00d7f990(void) { return this; }

struct C_00d7f9a0 {
    int sub_00d7f9a0();
};

// @baa 0x00d7f9a0
int C_00d7f9a0::sub_00d7f9a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_00d7f9b0 {
    int sub_00d7f9b0();
};

// @baa 0x00d7f9b0
int C_00d7f9b0::sub_00d7f9b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00d7f9c0 {
    int sub_00d7f9c0();
};

// @baa 0x00d7f9c0
int C_00d7f9c0::sub_00d7f9c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_00d7f9d0 {
    int sub_00d7f9d0();
};

// @baa 0x00d7f9d0
int C_00d7f9d0::sub_00d7f9d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00d7f9e0 {
    int sub_00d7f9e0();
};

// @baa 0x00d7f9e0
int C_00d7f9e0::sub_00d7f9e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x18;
}

struct C_00d7f9f0 {
    int sub_00d7f9f0();
};

// @baa 0x00d7f9f0
int C_00d7f9f0::sub_00d7f9f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

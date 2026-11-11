// BmEditor_0cb0000.cpp: 42 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct E { BYTE Bytes[12]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_00cb4a00(INT Index);
};

// @baa 0x00cb4a00
E* S::sub_00cb4a00(INT Index)
{
    return &Items(Index);
}

typedef uint size_t;

struct C_view {
    int sub_00cb12e0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00cb4a50
int ULensFlare::sub_00cb4a50(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_view *)(this))->sub_00cb12e0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00cb4a90
int ULensFlare::sub_00cb4a90(undefined4*param_2)
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

// @baa 0x00cb4af0
bool ULensFlare::sub_00cb4af0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x20) != 0;
}

int sub_0053dfa0(...);
int sub_00cb4950(void);
// @baa 0x00cb4b00
undefined4 ULensFlare::sub_00cb4b00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00cb4950();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C {
    int sub_00cb4b40(int);
};

// @baa 0x00cb4b40
int C::sub_00cb4b40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00cb4b50 {
    int sub_00cb4b50(int);
};

// @baa 0x00cb4b50
int C_00cb4b50::sub_00cb4b50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00cb4b60
void __stdcall sub_00cb4b60(int a0, int a1) {  }

struct C_00cb4b70 {
    int sub_00cb4b70(int);
};

// @baa 0x00cb4b70
int C_00cb4b70::sub_00cb4b70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00cb4be0 {
    int sub_00cb4be0(int);
};

// @baa 0x00cb4be0
int C_00cb4be0::sub_00cb4be0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x00cb4bf0
void __stdcall sub_00cb4bf0(int a0, int a1) {  }

struct C_00cb4c00 {
    int sub_00cb4c00(int);
};

// @baa 0x00cb4c00
int C_00cb4c00::sub_00cb4c00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00cb4c20 {
    int sub_00cb4c20(int);
};

// @baa 0x00cb4c20
int C_00cb4c20::sub_00cb4c20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00cb4c30
void __stdcall sub_00cb4c30(int a0, int a1) {  }

struct C_00cb4c70 {
    int sub_00cb4c70(int);
};

// @baa 0x00cb4c70
int C_00cb4c70::sub_00cb4c70(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 4;
}

// @baa 0x00cb4c80
void __stdcall sub_00cb4c80(int a0, int a1) {  }

struct C_00cb4c90 {
    int sub_00cb4c90(int);
};

// @baa 0x00cb4c90
int C_00cb4c90::sub_00cb4c90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00cb4cd0 {
    int sub_00cb4cd0(int);
};

// @baa 0x00cb4cd0
int C_00cb4cd0::sub_00cb4cd0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

// @baa 0x00cb4ce0
void __stdcall sub_00cb4ce0(int a0, int a1) {  }

struct C_00cb4cf0 {
    int sub_00cb4cf0(int);
};

// @baa 0x00cb4cf0
int C_00cb4cf0::sub_00cb4cf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x3c;
}

struct C_00cb4d10 {
    int sub_00cb4d10(int);
};

// @baa 0x00cb4d10
int C_00cb4d10::sub_00cb4d10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00cb4d30 {
    int sub_00cb4d30(int);
};

// @baa 0x00cb4d30
int C_00cb4d30::sub_00cb4d30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00cb4d40{
int sub_00cb4d40(undefined4*);
};

// @baa 0x00cb4d40
int C_00cb4d40::sub_00cb4d40(undefined4*param_2)
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

struct C_00cb4e00 {
    int sub_00cb4e00(int);
};

// @baa 0x00cb4e00
int C_00cb4e00::sub_00cb4e00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00cb4e10
void __stdcall sub_00cb4e10(int a0, int a1) {  }

struct C_00cb4e20{
int sub_00cb4e20(undefined4*);
};

// @baa 0x00cb4e20
int C_00cb4e20::sub_00cb4e20(undefined4*param_2)
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

struct C_00cb4e80 {
    int sub_00cb4e80(int);
};

// @baa 0x00cb4e80
int C_00cb4e80::sub_00cb4e80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00cb4e90 {
    int sub_00cb4e90(int);
};

// @baa 0x00cb4e90
int C_00cb4e90::sub_00cb4e90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00cb4ea0
void __stdcall sub_00cb4ea0(int a0, int a1) {  }

struct C_00cb4eb0 {
    int sub_00cb4eb0(int);
};

// @baa 0x00cb4eb0
int C_00cb4eb0::sub_00cb4eb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00cb4ec0
void __stdcall sub_00cb4ec0(int a0, int a1) {  }

struct C_00cb4ed0 {
    int sub_00cb4ed0(int);
};

// @baa 0x00cb4ed0
int C_00cb4ed0::sub_00cb4ed0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00cb4ee0 {
    void sub_00cb4ee0(undefined4 *);
};

// @baa 0x00cb4ee0
void C_00cb4ee0::sub_00cb4ee0(undefined4 * param_2)
{
    undefined4 param_1 = (undefined4)this;

  *param_2 = param_1;
  param_2[1] = 0;
  return;
}

struct C_00cb4ef0 {
    void sub_00cb4ef0();
};

// @baa 0x00cb4ef0
void C_00cb4ef0::sub_00cb4ef0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x18c0) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x18c0));
    *(undefined4 *)(param_1 + 0x18c0) = 0;
  }
  return;
}

struct C_00cb4f20 {
    int sub_00cb4f20(int);
};

// @baa 0x00cb4f20
int C_00cb4f20::sub_00cb4f20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00cb4f30 {
    int sub_00cb4f30(int);
};

// @baa 0x00cb4f30
int C_00cb4f30::sub_00cb4f30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00cb4f40 {
    int sub_00cb4f40(int);
};

// @baa 0x00cb4f40
int C_00cb4f40::sub_00cb4f40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00cb4f50 {
    int sub_00cb4f50(int);
};

// @baa 0x00cb4f50
int C_00cb4f50::sub_00cb4f50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00cb4f60 {
    int sub_00cb4f60(int);
};

// @baa 0x00cb4f60
int C_00cb4f60::sub_00cb4f60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct S_00cb4f70 {
    TArray<E> Items; // 0x00
    E* sub_00cb4f70(INT Index);
};

// @baa 0x00cb4f70
E* S_00cb4f70::sub_00cb4f70(INT Index)
{
    return &Items(Index);
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
	FFaceFXElement* sub_00cb4ff0(INT Index);
};

// @baa 0x00cb4ff0
FFaceFXElement* UFxRenderWidget::sub_00cb4ff0(INT Index)
{
	return &BoneArray(Index);
}

struct UFxRenderWidget_00cb5040
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_00cb5040(INT Index);
};

// @baa 0x00cb5040
FFaceFXElement* UFxRenderWidget_00cb5040::sub_00cb5040(INT Index)
{
	return &BoneArray(Index);
}

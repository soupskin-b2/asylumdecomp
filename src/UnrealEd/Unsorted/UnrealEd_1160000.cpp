// UnrealEd_1160000.cpp: 35 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct S {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_011630e0(INT Index);
};

// @baa 0x011630e0
QWORD* S::sub_011630e0(INT Index)
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
	FFaceFXElement* sub_01163240(INT Index);
};

// @baa 0x01163240
FFaceFXElement* UFxRenderWidget::sub_01163240(INT Index)
{
	return &BoneArray(Index);
}

struct S_01163290 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_01163290(INT Index) const;
};

// @baa 0x01163290
const DWORD* S_01163290::sub_01163290(INT Index) const
{
    return &Items(Index);
}

struct E { BYTE Bytes[124]; };

struct S_011632e0 {
    TArray<E> Items; // 0x00
    E* sub_011632e0(INT Index);
};

// @baa 0x011632e0
E* S_011632e0::sub_011632e0(INT Index)
{
    return &Items(Index);
}

typedef uint size_t;

struct C {
    int sub_01163330(int);
    int sub_0115fa30(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x01163330
int C::sub_01163330(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C *)(this))->sub_0115fa30(param_2);
  sub_01a37612((void *)(iVar1 * 0x7c + *param_1),0,param_2 * 0x7c);
  return iVar1;
}

struct E_01163360 { BYTE Bytes[24]; };

struct S_01163360 {
    TArray<E_01163360> Items; // 0x00
    E_01163360* sub_01163360(INT Index);
};

// @baa 0x01163360
E_01163360* S_01163360::sub_01163360(INT Index)
{
    return &Items(Index);
}

struct E_011633b0 { BYTE Bytes[24]; };

struct S_011633b0 {
    TArray<E_011633b0> Items; // 0x00
    const E_011633b0* sub_011633b0(INT Index) const;
};

// @baa 0x011633b0
const E_011633b0* S_011633b0::sub_011633b0(INT Index) const
{
    return &Items(Index);
}

struct C_01163400{
int sub_01163400(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x01163400
int C_01163400::sub_01163400(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],0x18);
param_1[2]=iVar3;
if((*param_1)||(0!=iVar3)){
iVar3=sub_0053df70(*param_1,0x18*iVar3,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*0x18);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
puVar1[2]=param_2[2];
puVar1[3]=param_2[3];
puVar1[4]=param_2[4];
puVar1[5]=param_2[5];
}
return iVar2;
}

struct E_01163480 { BYTE Bytes[12]; };

struct S_01163480 {
    TArray<E_01163480> Items; // 0x00
    E_01163480* sub_01163480(INT Index);
};

// @baa 0x01163480
E_01163480* S_01163480::sub_01163480(INT Index)
{
    return &Items(Index);
}

struct E_011634d0 { BYTE Bytes[116]; };

struct S_011634d0 {
    TArray<E_011634d0> Items; // 0x00
    E_011634d0* sub_011634d0(INT Index);
};

// @baa 0x011634d0
E_011634d0* S_011634d0::sub_011634d0(INT Index)
{
    return &Items(Index);
}

struct E_01163930 { BYTE Bytes[16]; };

struct S_01163930 {
    TArray<E_01163930> Items; // 0x00
    E_01163930* sub_01163930(INT Index);
};

// @baa 0x01163930
E_01163930* S_01163930::sub_01163930(INT Index)
{
    return &Items(Index);
}

struct E_01163980 { BYTE Bytes[16]; };

struct S_01163980 {
    TArray<E_01163980> Items; // 0x00
    E_01163980* sub_01163980(INT Index);
};

// @baa 0x01163980
E_01163980* S_01163980::sub_01163980(INT Index)
{
    return &Items(Index);
}

struct C_011639d0 {
    int sub_011639d0(int);
    int sub_0115ff20(int);
};

// @baa 0x011639d0
int C_011639d0::sub_011639d0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_011639d0 *)(this))->sub_0115ff20(param_2);
  sub_01a37612((void *)(iVar1 * 0x10 + *param_1),0,param_2 << 4);
  return iVar1;
}

struct E_01163a00 { BYTE Bytes[816]; };

struct S_01163a00 {
    TArray<E_01163a00> Items; // 0x00
    E_01163a00* sub_01163a00(INT Index);
};

// @baa 0x01163a00
E_01163a00* S_01163a00::sub_01163a00(INT Index)
{
    return &Items(Index);
}

struct C_01163a50 {
    int sub_01163a50(int);
};

// @baa 0x01163a50
int C_01163a50::sub_01163a50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x01163a60
void __stdcall sub_01163a60(int a0, int a1) {  }

struct C_01163a70 {
    int sub_01163a70(int);
};

// @baa 0x01163a70
int C_01163a70::sub_01163a70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_01163a80 {
    int sub_01163a80(int);
};

// @baa 0x01163a80
int C_01163a80::sub_01163a80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

// @baa 0x01163a90
void __stdcall sub_01163a90(int a0, int a1) {  }

struct C_01163aa0 {
    int sub_01163aa0(int);
};

// @baa 0x01163aa0
int C_01163aa0::sub_01163aa0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x74 + *param_1;
}

// @baa 0x01163ab0
void __stdcall sub_01163ab0(int a0, int a1) {  }

struct C_01163ac0 {
    int sub_01163ac0(int);
};

// @baa 0x01163ac0
int C_01163ac0::sub_01163ac0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_01163ad0 {
    int sub_01163ad0(int);
};

// @baa 0x01163ad0
int C_01163ad0::sub_01163ad0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x01163ae0
void __stdcall sub_01163ae0(int a0, int a1) {  }

struct C_01163af0 {
    int sub_01163af0(int);
};

// @baa 0x01163af0
int C_01163af0::sub_01163af0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x01163b00
void __stdcall sub_01163b00(int a0, int a1) {  }

struct C_01163b10 {
    int sub_01163b10(int);
};

// @baa 0x01163b10
int C_01163b10::sub_01163b10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x330 + *param_1;
}

struct E_01163b50 { BYTE Bytes[48]; };

struct S_01163b50 {
    TArray<E_01163b50> Items; // 0x00
    E_01163b50* sub_01163b50(INT Index);
};

// @baa 0x01163b50
E_01163b50* S_01163b50::sub_01163b50(INT Index)
{
    return &Items(Index);
}

struct C_011642a0 {
    void sub_011642a0(int);
};

// @baa 0x011642a0
void C_011642a0::sub_011642a0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x18,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_011642e0 {
    void sub_011642e0(int);
};

// @baa 0x011642e0
void C_011642e0::sub_011642e0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x74,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_01164320 {
    void sub_01164320(int);
};

// @baa 0x01164320
void C_01164320::sub_01164320(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

void sub_01164360();
// @baa 0x01164460
void sub_01164460(void) { sub_01164360(); }

struct C_01164c80 { int a, b, c; C_01164c80(); };

// @baa 0x01164c80
C_01164c80::C_01164c80() : a(0), b(0), c(0) {}

struct C_view {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x01164ca0
undefined4 * UObject::sub_01164ca0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  return param_1;
}

struct C_0116c3e0 {
    undefined4 sub_0116c3e0(byte);
};

int sub_0053dfa0(...);
int sub_0116c2f0(void);
// @baa 0x0116c3e0
undefined4 C_0116c3e0::sub_0116c3e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0116c2f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

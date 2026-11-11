// Editor_0ef0000.cpp (part 1 of 11): 72 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00ef09c0
int UTextureExporterT3D::vf_000(void) { return 1; }

struct C_00ef0a00 { int a, b, c; C_00ef0a00(); };

// @baa 0x00ef0a00
C_00ef0a00::C_00ef0a00() : a(0), b(0), c(0) {}

struct C_00ef0a10 { int a, b, c; C_00ef0a10(); };

// @baa 0x00ef0a10
C_00ef0a10::C_00ef0a10() : a(0), b(0), c(0) {}

struct C_00ef0ac0 { int a, b, c; C_00ef0ac0(); };

// @baa 0x00ef0ac0
C_00ef0ac0::C_00ef0ac0() : a(0), b(0), c(0) {}

struct C_00ef0b80 { int a, b, c; C_00ef0b80(); };

// @baa 0x00ef0b80
C_00ef0b80::C_00ef0b80() : a(0), b(0), c(0) {}

struct C_00ef0c00 { int a, b, c; C_00ef0c00(); };

// @baa 0x00ef0c00
C_00ef0c00::C_00ef0c00() : a(0), b(0), c(0) {}

struct C { C* sub_00ef0c80(void); };

// @baa 0x00ef0c80
C* C::sub_00ef0c80(void) { return this; }

struct C_00ef0cc0 { int a, b, c; C_00ef0cc0(); };

// @baa 0x00ef0cc0
C_00ef0cc0::C_00ef0cc0() : a(0), b(0), c(0) {}

struct C_00ef0cd0 { int a, b, c; C_00ef0cd0(); };

// @baa 0x00ef0cd0
C_00ef0cd0::C_00ef0cd0() : a(0), b(0), c(0) {}

struct C_00ef0d10 { int a, b, c; C_00ef0d10(); };

// @baa 0x00ef0d10
C_00ef0d10::C_00ef0d10() : a(0), b(0), c(0) {}

extern "C" int __cdecl sub_018260a0(const char* File, DWORD Line);
// fcollada FMArray-like container: count + T* data (T is 4 bytes)
struct FMArray {
    INT Unk00;   // 0x00
    INT Unk04;   // 0x04
    INT Count;   // 0x08
    INT* Data;   // 0x0c
    INT sub_00ef0d20(UINT Index);
};

// @baa 0x00ef0d20
INT FMArray::sub_00ef0d20(UINT Index)
{
    if (!(Index < Count))
        sub_018260a0("e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 506);
    return Data[Index];
}

struct C_00ef0d80 {
    void sub_00ef0d80();
};

void sub_01826080(void *);
// @baa 0x00ef0d80
void C_00ef0d80::sub_00ef0d80(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_00ef0e10 {
    void sub_00ef0e10();
};

// @baa 0x00ef0e10
void C_00ef0e10::sub_00ef0e10(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_00ef0fd0 { int sub_00ef0fd0(void); };

// @baa 0x00ef0fd0
int C_00ef0fd0::sub_00ef0fd0(void) { return *(int*)((char*)this + 44); }

struct C_00ef1010 { int a, b, c; C_00ef1010(); };

// @baa 0x00ef1010
C_00ef1010::C_00ef1010() : a(0), b(0), c(0) {}

struct C_00ef1020 { int a, b, c; C_00ef1020(); };

// @baa 0x00ef1020
C_00ef1020::C_00ef1020() : a(0), b(0), c(0) {}

struct C_00ef1030 { int a, b, c; C_00ef1030(); };

// @baa 0x00ef1030
C_00ef1030::C_00ef1030() : a(0), b(0), c(0) {}

struct C_00ef1040 {
    int sub_00ef1040(byte);
};

int sub_0053dfa0(...);
// @baa 0x00ef1040
int C_00ef1040::sub_00ef1040(byte param_2)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ef1070 {
    int sub_00ef1070(byte);
};

// @baa 0x00ef1070
int C_00ef1070::sub_00ef1070(byte param_2)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ef1180 { int sub_00ef1180(void); };

// @baa 0x00ef1180
int C_00ef1180::sub_00ef1180(void) { return *(int*)((char*)this + 0); }

struct C_00ef1190 { int sub_00ef1190(void); };

// @baa 0x00ef1190
int C_00ef1190::sub_00ef1190(void) { return *(int*)((char*)this + 0); }

struct C_00ef11a0 { int sub_00ef11a0(void); };

// @baa 0x00ef11a0
int C_00ef11a0::sub_00ef11a0(void) { return *(int*)((char*)this + 0); }

struct C_00ef1300 { int sub_00ef1300(void); };

// @baa 0x00ef1300
int C_00ef1300::sub_00ef1300(void) { return *(int*)((char*)this + 0); }

struct C_00ef1440 { int sub_00ef1440(void); };

// @baa 0x00ef1440
int C_00ef1440::sub_00ef1440(void) { return *(int*)((char*)this + 0); }

struct C_00ef14c0 { int sub_00ef14c0(void); };

// @baa 0x00ef14c0
int C_00ef14c0::sub_00ef14c0(void) { return *(int*)((char*)this + 0); }

struct C_00ef14d0 { int sub_00ef14d0(void); };

// @baa 0x00ef14d0
int C_00ef14d0::sub_00ef14d0(void) { return *(int*)((char*)this + 0); }

struct C_00ef1550 {
    int sub_00ef1550(int);
};

// @baa 0x00ef1550
int C_00ef1550::sub_00ef1550(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00ef1600 {
    undefined4 sub_00ef1600();
};

// @baa 0x00ef1600
undefined4 C_00ef1600::sub_00ef1600(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

struct C_00ef1900 { int sub_00ef1900(void); };

// @baa 0x00ef1900
int C_00ef1900::sub_00ef1900(void) { return *(int*)((char*)this + 0); }

struct C_00ef1910 { int sub_00ef1910(void); };

// @baa 0x00ef1910
int C_00ef1910::sub_00ef1910(void) { return *(int*)((char*)this + 0); }

struct C_00ef1990 { int sub_00ef1990(void); };

// @baa 0x00ef1990
int C_00ef1990::sub_00ef1990(void) { return *(int*)((char*)this + 0); }

struct C_00ef1a10 {
    undefined4 sub_00ef1a10(byte);
};

// @baa 0x00ef1a10
undefined4 C_00ef1a10::sub_00ef1a10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ef1a30 { int sub_00ef1a30(void); };

// @baa 0x00ef1a30
int C_00ef1a30::sub_00ef1a30(void) { return *(int*)((char*)this + 0); }

struct C_00ef1a40 { int sub_00ef1a40(void); };

// @baa 0x00ef1a40
int C_00ef1a40::sub_00ef1a40(void) { return *(int*)((char*)this + 0); }

struct C_00ef1a50 { int sub_00ef1a50(void); };

// @baa 0x00ef1a50
int C_00ef1a50::sub_00ef1a50(void) { return *(int*)((char*)this + 0); }

struct C_00ef2840 {
    undefined4 sub_00ef2840(byte);
};

int sub_00eee7f0(void);
// @baa 0x00ef2840
undefined4 C_00ef2840::sub_00ef2840(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00eee7f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ef41e0{
int sub_00ef41e0(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x00ef41e0
int C_00ef41e0::sub_00ef41e0(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],0x14);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3!=0)){
iVar3=sub_0053df70(*param_1,iVar3*0x14,8);
*param_1=iVar3;
}
}
puVar1=(uint*)(*param_1+iVar2*0x14);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
puVar1[2]=param_2[2];
puVar1[3]=param_2[3];
puVar1[4]=param_2[4];
}
return iVar2;
}

struct S {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00ef42c0(INT Index);
};

// @baa 0x00ef42c0
QWORD* S::sub_00ef42c0(INT Index)
{
    return &Items(Index);
}

struct T_00ef4310 { BYTE b[8]; };

// @baa 0x00ef4310
template T_00ef4310& TArray<T_00ef4310>::Last(INT);

struct C_00ef4730 {
    void sub_00ef4730(undefined4);
    int sub_00ec7530(int);
};

// @baa 0x00ef4730
void C_00ef4730::sub_00ef4730(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00ef4730 *)(this))->sub_00ec7530(param_2);
  param_1[1] = *param_1;
  return;
}

typedef uint size_t;

struct C_00ef4790 {
    undefined4 * sub_00ef4790(undefined4 *);
    int sub_00ec7530(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00ef4790
undefined4 * C_00ef4790::sub_00ef4790(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  if (param_1 != param_2) {
    ((C_00ef4790 *)(this))->sub_00ec7530(param_2[1]);
    param_1[1] = *param_1;
    sub_01a375f0((void *)param_1[2],(void *)param_2[2],param_2[1] * 4);
  }
  return param_1;
}

struct C_00ef4800 {
    void sub_00ef4800(undefined4);
    int sub_00ec80e0(int);
};

// @baa 0x00ef4800
void C_00ef4800::sub_00ef4800(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00ef4800 *)(this))->sub_00ec80e0(param_2);
  param_1[1] = *param_1;
  return;
}

struct S_00ef4820 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00ef4820(INT Index);
};

// @baa 0x00ef4820
DWORD* S_00ef4820::sub_00ef4820(INT Index)
{
    return &Items(Index);
}

struct C_00ef48d0 {
    void sub_00ef48d0(undefined4);
    int sub_00ef16c0(int, int);
};

// @baa 0x00ef48d0
void C_00ef48d0::sub_00ef48d0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_00ef48d0 *)(this))->sub_00ef16c0(*(int *)(param_1 + 4) * 0x40 + *(int *)(param_1 + 8), param_2);
  return;
}

struct C_00ef49a0 {
    void sub_00ef49a0(undefined4);
    int sub_00ef1820(int, int);
};

// @baa 0x00ef49a0
void C_00ef49a0::sub_00ef49a0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_00ef49a0 *)(this))->sub_00ef1820(*(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 4, param_2);
  return;
}

struct E { BYTE Bytes[24]; };

struct S_00ef4a80 {
    TArray<E> Items; // 0x00
    E* sub_00ef4a80(INT Index);
};

// @baa 0x00ef4a80
E* S_00ef4a80::sub_00ef4a80(INT Index)
{
    return &Items(Index);
}

struct S_00ef5130 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00ef5130(INT Index);
};

// @baa 0x00ef5130
DWORD* S_00ef5130::sub_00ef5130(INT Index)
{
    return &Items(Index);
}

struct S_00ef51e0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00ef51e0(INT Index);
};

// @baa 0x00ef51e0
DWORD* S_00ef51e0::sub_00ef51e0(INT Index)
{
    return &Items(Index);
}

struct C_00ef5290 {
    int sub_00ef5290(int);
};

// @baa 0x00ef5290
int C_00ef5290::sub_00ef5290(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x00ef52a0
void __stdcall sub_00ef52a0(int a0, int a1) {  }

struct C_00ef52b0 {
    int sub_00ef52b0(int);
};

// @baa 0x00ef52b0
int C_00ef52b0::sub_00ef52b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00ef52c0
void __stdcall sub_00ef52c0(int a0, int a1) {  }

struct C_00ef52d0 {
    int sub_00ef52d0(int);
};

// @baa 0x00ef52d0
int C_00ef52d0::sub_00ef52d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x00ef52e0
void __stdcall sub_00ef52e0(int a0, int a1) {  }

struct C_00ef52f0 {
    int sub_00ef52f0(int);
};

// @baa 0x00ef52f0
int C_00ef52f0::sub_00ef52f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x60 + *param_1;
}

struct C_00ef5350 {
    int sub_00ef5350(int);
};

// @baa 0x00ef5350
int C_00ef5350::sub_00ef5350(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 4;
}

// @baa 0x00ef5360
void __stdcall sub_00ef5360(int a0, int a1) {  }

// @baa 0x00ef5370
void __stdcall sub_00ef5370(int a0, int a1) {  }

struct C_00ef5420 {
    int sub_00ef5420(int);
};

// @baa 0x00ef5420
int C_00ef5420::sub_00ef5420(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00ef5430
void __stdcall sub_00ef5430(int a0, int a1) {  }

struct C_00ef5790 {
    int sub_00ef5790(int);
};

// @baa 0x00ef5790
int C_00ef5790::sub_00ef5790(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x00ef57a0
void __stdcall sub_00ef57a0(int a0, int a1) {  }

struct C_00ef57b0 {
    int sub_00ef57b0(int);
};

// @baa 0x00ef57b0
int C_00ef57b0::sub_00ef57b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00ef57c0
void __stdcall sub_00ef57c0(int a0, int a1) {  }

struct C_00ef57d0 {
    int sub_00ef57d0(int);
};

// @baa 0x00ef57d0
int C_00ef57d0::sub_00ef57d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00ef57e0
void __stdcall sub_00ef57e0(int a0, int a1) {  }

struct C_00ef8c20 {
    undefined4 * sub_00ef8c20();
};

int sub_00ef3160(void);
// @baa 0x00ef8c20
undefined4 * C_00ef8c20::sub_00ef8c20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0xffffffff;
  param_1[1] = 0;
  sub_00ef3160();
  return param_1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00efa570 { void* Data; int Num; int Max; void sub_00efa570(); };

// @baa 0x00efa570
void C_00efa570::sub_00efa570() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00efa610 { void* Data; int Num; int Max; void sub_00efa610(); };

// @baa 0x00efa610
void C_00efa610::sub_00efa610() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00efa6b0 { void* Data; int Num; int Max; void sub_00efa6b0(); };

// @baa 0x00efa6b0
void C_00efa6b0::sub_00efa6b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00efa9c0 { void* Data; int Num; int Max; void sub_00efa9c0(); };

// @baa 0x00efa9c0
void C_00efa9c0::sub_00efa9c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00efb020 { void* Data; int Num; int Max; void sub_00efb020(); };

// @baa 0x00efb020
void C_00efb020::sub_00efb020() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// Core_05f0000.cpp (part 1 of 6): 438 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_view {
    int sub_00417ef0(int);
};

// @baa 0x005f0660
int UObject::sub_005f0660(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00417ef0(param_2);
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return param_1;
}

// @baa 0x005f06e0
void __stdcall sub_005f06e0(int a0, int a1) {  }

// @baa 0x005f06f0
void __stdcall sub_005f06f0(int a0, int a1) {  }

struct C {
    void sub_005f1630(int);
};

int sub_0053df70(...);
// @baa 0x005f1630
void C::sub_005f1630(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_005f1670{
int*sub_005f1670(int*);
};

void*sub_01a375f0(void*,void*,size_t);
// @baa 0x005f1670
int*C_005f1670::sub_005f1670(int*param_2)
{
int*param_1=(int*)this;

int iVar1;

if((param_1!=param_2)&&(0<param_2[1])){
iVar1=param_1[1]+param_2[1];
if(iVar1>param_1[2]){
param_1[2]=iVar1;
if((*param_1!=0)||(iVar1!=0)){
iVar1=sub_0053df70(*param_1,iVar1*4,8);
*param_1=iVar1;
}
}
sub_01a375f0((void*)(*param_1+param_1[1]*4),(void*)*param_2,param_2[1]*4);
param_1[1]=param_1[1]+param_2[1];
}
return param_1;
}

struct C_005f16e0 {
    void sub_005f16e0(int);
};

// @baa 0x005f16e0
void C_005f16e0::sub_005f16e0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct T_005f17d0;
// @baa 0x005f17d0
template INT TArray<T_005f17d0*>::RemoveItem(T_005f17d0* const&);

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_005f1850 { void* Data; int Num; int Max; void sub_005f1850(); };

// @baa 0x005f1850
void C_005f1850::sub_005f1850() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

typedef uint size_t;

struct C_view_005f19e0 {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x005f19e0
undefined4 * UObject::sub_005f19e0(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  ((C_view_005f19e0 *)(this))->sub_00417dc0(puVar1[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*puVar1,param_1[1] * 2);
  }
  param_1[3] = param_2[1];
  return param_1;
}

// @baa 0x005f1a20
int UObject::sub_005f1a20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

void sub_0040fcc0();
// @baa 0x005f1a80
void sub_005f1a80(void) { sub_0040fcc0(); }

// @baa 0x005f1a90
int UObject::sub_005f1a90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_view_005f1b40 {
    int sub_00417dc0(int);
};

// @baa 0x005f1b40
undefined4 * UObject::sub_005f1b40(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_005f1b40 *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = param_2[3];
  return param_1;
}

void sub_005f1670();
// @baa 0x005f2e80
void sub_005f2e80(void) { sub_005f1670(); }

struct C_005f3d60 {
    void sub_005f3d60();
    int sub_005f0160(int, int);
};

extern undefined * g_01e9f82c;
// @baa 0x005f3d60
void C_005f3d60::sub_005f3d60(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(&g_01e9f82c);
  if (param_1[1] != 0) {
    ((C_005f3d60 *)(this))->sub_005f0160(1, 0);
  }
  return;
}

struct C_005f3d80 { void* Data; int Num; int Max; void sub_005f3d80(); };

// @baa 0x005f3d80
void C_005f3d80::sub_005f3d80() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_005f3de0 { void* Data; int Num; int Max; void sub_005f3de0(); };

// @baa 0x005f3de0
void C_005f3de0::sub_005f3de0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_005f4980 {
    int sub_005f4980(int);
};

// @baa 0x005f4980
int C_005f4980::sub_005f4980(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_005f4990 {
    int sub_005f4990(int);
    int sub_005f18c0(int, int);
};

// @baa 0x005f4990
int C_005f4990::sub_005f4990(int param_2)
{
    int * param_1 = (int *)this;
  ((C_005f4990 *)(this))->sub_005f18c0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_005f49c0 {
    int sub_005f49c0(int);
};

// @baa 0x005f49c0
int C_005f49c0::sub_005f49c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
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

struct TConstSetBitIterator_005f4b20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005f4b20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005f4b20& operator++();
};

TConstSetBitIterator_005f4b20::TConstSetBitIterator_005f4b20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005f4b20
TConstSetBitIterator_005f4b20& TConstSetBitIterator_005f4b20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005f4b70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005f4b70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005f4b70& operator++();
};

TConstSetBitIterator_005f4b70::TConstSetBitIterator_005f4b70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005f4b70
TConstSetBitIterator_005f4b70& TConstSetBitIterator_005f4b70::operator++()
{
    It.Advance();
    return *this;
}

struct C_005f5180 {
    undefined4 sub_005f5180(byte);
};

int sub_0053dfa0(...);
int sub_005f1c80(void);
// @baa 0x005f5180
undefined4 C_005f5180::sub_005f5180(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005f1c80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_005f5300 {
    undefined4 sub_005f5300(byte);
};

int sub_005f3b20(void);
// @baa 0x005f5300
undefined4 C_005f5300::sub_005f5300(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005f3b20();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_005f5390 {
    undefined4 sub_005f5390(byte);
};

int sub_005f5320(void);
// @baa 0x005f5390
undefined4 C_005f5390::sub_005f5390(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005f5320();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_005f54e0 {
    undefined4 sub_005f54e0(byte);
};

int sub_005f5280(void);
// @baa 0x005f54e0
undefined4 C_005f54e0::sub_005f54e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005f5280();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_005f5dc0 {
    int sub_005f5dc0(int);
    int sub_005f18c0(int, int);
};

// @baa 0x005f5dc0
int C_005f5dc0::sub_005f5dc0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_005f5dc0 *)(this))->sub_005f18c0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct TConstSetBitIterator_005f5fc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005f5fc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005f5fc0& operator++();
};

TConstSetBitIterator_005f5fc0::TConstSetBitIterator_005f5fc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005f5fc0
TConstSetBitIterator_005f5fc0& TConstSetBitIterator_005f5fc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005f6010 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005f6010(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005f6010& operator++();
};

TConstSetBitIterator_005f6010::TConstSetBitIterator_005f6010(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005f6010
TConstSetBitIterator_005f6010& TConstSetBitIterator_005f6010::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005f6090 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005f6090(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005f6090& operator++();
};

TConstSetBitIterator_005f6090::TConstSetBitIterator_005f6090(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005f6090
TConstSetBitIterator_005f6090& TConstSetBitIterator_005f6090::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005f60e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005f60e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005f60e0& operator++();
};

TConstSetBitIterator_005f60e0::TConstSetBitIterator_005f60e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005f60e0
TConstSetBitIterator_005f60e0& TConstSetBitIterator_005f60e0::operator++()
{
    It.Advance();
    return *this;
}

struct C_005f90d0 {
    void sub_005f90d0();
    int sub_005f5e50(int);
};

// @baa 0x005f90d0
void C_005f90d0::sub_005f90d0(void)
{
    int param_1 = (int)this;
  ((C_005f90d0 *)((*(char **)((char *)this + 0x10))))->sub_005f5e50(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_005f9b50 {
    int sub_005f9b50();
};

int sub_005f6030(void);
// @baa 0x005f9b50
int C_005f9b50::sub_005f9b50(void)
{
    int param_1 = (int)this;

  sub_005f6030();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_005f9b70 {
    undefined4 sub_005f9b70(byte);
};

int sub_00559cb0(void);
// @baa 0x005f9b70
undefined4 C_005f9b70::sub_005f9b70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00559cb0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_005f9d30 {
    int sub_005f9d30(undefined4, undefined4);
    int sub_005f9ad0(int, int);
};

// @baa 0x005f9d30
int C_005f9d30::sub_005f9d30(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_005f9d30 *)(this))->sub_005f9ad0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_005f9d50 {
    int sub_005f9d50();
};

// @baa 0x005f9d50
int C_005f9d50::sub_005f9d50(void)
{
    int param_1 = (int)this;

  sub_005f6030();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_005f9b90();
// @baa 0x005f9d70
void sub_005f9d70(void) { sub_005f9b90(); }

struct C_005f9dc0 {
    int sub_005f9dc0();
};

// @baa 0x005f9dc0
int C_005f9dc0::sub_005f9dc0(void)
{
    int param_1 = (int)this;

  sub_005f6030();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_005fa030 {
    int sub_005fa030();
};

// @baa 0x005fa030
int C_005fa030::sub_005fa030(void)
{
    int param_1 = (int)this;

  sub_005f6030();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

extern char g_01ea6bb8[];
struct C_005fa480 { void sub_005fa480(void); };

// @baa 0x005fa480
void C_005fa480::sub_005fa480(void) { *(int*)((char*)this + 0) = (int)g_01ea6bb8; }

// @baa 0x005fa490
void sub_005fa490(void) {  }

// @baa 0x005fa4a0
void sub_005fa4a0(void) {  }

// @baa 0x005fa4b0
int sub_005fa4b0(void) { return 1; }

// @baa 0x005fa4c0
int __stdcall sub_005fa4c0(int a0) { return 0; }

// @baa 0x005fa4d0
float __stdcall sub_005fa4d0(float f)
{
    return 0.0f;
}

extern char g_01ea6bd8[];
struct C_005fa4e0 { void sub_005fa4e0(void); };

// @baa 0x005fa4e0
void C_005fa4e0::sub_005fa4e0(void) { *(int*)((char*)this + 0) = (int)g_01ea6bd8; }

// @baa 0x005fa4f0
int __stdcall sub_005fa4f0(int a0, int a1, int a2) { return 0; }

// @baa 0x005fa500
void sub_005fa500(void) {  }

// @baa 0x005fa510
int __stdcall sub_005fa510(int a0) { return 0; }

// @baa 0x005fa530
void sub_005fa530(void) {  }

// @baa 0x005fa540
void sub_005fa540(void) {  }

// @baa 0x005fa550
void sub_005fa550(void) {  }

// @baa 0x005fa560
float10 sub_005fa560(double param_1)
{
  return (float10)param_1;
}

struct C_005fa570 { void sub_005fa570(int a0); };

// @baa 0x005fa570
void C_005fa570::sub_005fa570(int a0) { *(int*)((char*)this + 8) = a0; }

struct C_005fa580 { void sub_005fa580(int a0); };

// @baa 0x005fa580
void C_005fa580::sub_005fa580(int a0) { *(int*)((char*)this + 12) = a0; }

struct C_005fa590 {
    void sub_005fa590();
};

// @baa 0x005fa590
void C_005fa590::sub_005fa590(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  return;
}

extern char g_01ea6bec[];
struct C_005fa5a0 { void sub_005fa5a0(void); };

// @baa 0x005fa5a0
void C_005fa5a0::sub_005fa5a0(void) { *(int*)((char*)this + 0) = (int)g_01ea6bec; }

// @baa 0x005fa5b0
void sub_005fa5b0(void) {  }

// @baa 0x005fa5c0
void sub_005fa5c0(void) {  }

// @baa 0x005fa5d0
int sub_005fa5d0(void) { return 1; }

// @baa 0x005fa5f0
undefined4 sub_005fa5f0(short param_1)
{
  if ((param_1 != 0x20) && (param_1 != 9)) {
    return 0;
  }
  return 1;
}

struct C_005fa670 { void sub_005fa670(int a0); };

// @baa 0x005fa670
void C_005fa670::sub_005fa670(int a0) { *(int*)((char*)this + 32) = a0; }

// @baa 0x005fa680
int sub_005fa680(int a0) { return a0; }

// @baa 0x005fa6f0
int sub_005fa6f0(int a0, int a1) { return a1; }

// @baa 0x005fa700
int sub_005fa700(int a0, int a1) { return a1; }

extern char g_0268d104[];
// @baa 0x005fa710
int sub_005fa710(void) { return (int)g_0268d104; }

// @baa 0x005fa780
int UProperty::vf_160(void) { return 0; }

// @baa 0x005faa50
undefined4 sub_005faa50(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x005faa60
int sub_005faa60(int a0, int a1) { return a1; }

struct C_005faa70 {
    char pad[0x3c];
    WORD field_3c;
    DWORD sub_005faa70();
};

// @baa 0x005faa70
DWORD C_005faa70::sub_005faa70(void)
{
    return field_3c;
}

// @baa 0x005faa80
int UArrayProperty::sub_005faa80(void)
{
    int param_1 = (int)this;

  return (int)*(short *)(param_1 + 0x3e);
}

// @baa 0x005faa90
undefined2 sub_005faa90(void)
{
  return 0x73;
}

// @baa 0x005faaa0
int UArrayProperty::sub_005faaa0(void) { return *(int*)((char*)this + 4); }

struct C_005faab0 { int a, b, c; C_005faab0(); };

// @baa 0x005faab0
C_005faab0::C_005faab0() : a(0), b(0), c(0) {}

// @baa 0x005faac0
int UArrayProperty::sub_005faac0(void) { return *(int*)((char*)this + 0); }

// @baa 0x005faad0
int UArrayProperty::sub_005faad0(void) { return *(int*)((char*)this + 0); }

// @baa 0x005faae0
int UArrayProperty::sub_005faae0(void) { return *(int*)((char*)this + 0); }

// @baa 0x005faaf0
int UArrayProperty::sub_005faaf0(void) { return *(int*)((char*)this + 20); }

// @baa 0x005fab00
int UArrayProperty::sub_005fab00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_005facf0 { C_005facf0* sub_005facf0(void); };

// @baa 0x005facf0
C_005facf0* C_005facf0::sub_005facf0(void) { *(int*)((char*)this + 0) = (int)g_01ea6bb8; return this; }

int sub_0053df40(...);
int sub_00629c10(...);
int sub_0062d090(...);
// @baa 0x005fad00
undefined4 * sub_005fad00(void)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = sub_00629c10(L"NODATABASE");
  iVar2 = sub_0062d090(uVar1);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)sub_0053df40(4,8);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = (undefined4)(&g_01ea6bd8);
      return puVar3;
    }
  }
  return (undefined4 *)0x0;
}

// @baa 0x005fb100
void UPackageMap::sub_005fb100(void) { *(int*)((char*)this + 64) = 1; }

// @baa 0x005fb110
void UPackageMap::sub_005fb110(void) { *(int*)((char*)this + 64) = 0; }

// @baa 0x005fb120
int UPackageMap::sub_005fb120(void) { return *(int*)((char*)this + 64); }

struct C_005fb130 { int sub_005fb130(void); };

// @baa 0x005fb130
int C_005fb130::sub_005fb130(void) { return *(int*)((char*)this + 124); }

struct C_005fb140 { int sub_005fb140(void); };

// @baa 0x005fb140
int C_005fb140::sub_005fb140(void) { return *(int*)((char*)this + 128); }

extern char g_01e72a60[];
struct C_005fb150 { void sub_005fb150(void); };

// @baa 0x005fb150
void C_005fb150::sub_005fb150(void) { *(int*)((char*)this + 0) = (int)g_01e72a60; }

// @baa 0x005fb160
int sub_005fb160(int param_1, int param_2)
{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0xc) - *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 0x10) - *(int *)(param_1 + 0x10);
  }
  return iVar1;
}

struct C_005fb1e0 { char* sub_005fb1e0(void); };

// @baa 0x005fb1e0
char* C_005fb1e0::sub_005fb1e0(void) { return (char*)this + 156; }

// @baa 0x005fb1f0
int __stdcall sub_005fb1f0(int a0) { return 1; }

struct C_005fb450 {
    undefined4 sub_005fb450(undefined4);
};

// @baa 0x005fb450
undefined4 C_005fb450::sub_005fb450(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return 1;
}

// @baa 0x005fb460
int sub_005fb460(void) { return 1; }

struct C_005fb500 {
    float10 sub_005fb500();
};

// @baa 0x005fb500
float10 C_005fb500::sub_005fb500(void)
{
    double * param_1 = (double *)this;

  if (0 < *(int *)(param_1 + 3)) {
    return (float10)*param_1 / (float10)*(int *)(param_1 + 3);
  }
  return (float10)0;
}

int sub_0062d5a0(...);
extern undefined4 g_025d6818;
// @baa 0x005fb5b0
int sub_005fb5b0(void)
{
  int iVar1;
  undefined4 uVar2;
  int iStack_4;
  
  iVar1 = g_025d6818;
  iStack_4 = 0;
  uVar2 = sub_00629c10(L"-gABC=",&iStack_4);
  sub_0062d5a0(uVar2);
  if (iStack_4 == 0) {
    iStack_4 = iVar1;
  }
  return iStack_4;
}

// @baa 0x005fb620
void sub_005fb620(void) {  }

// @baa 0x005fb630
void sub_005fb630(void) {  }

// @baa 0x005fb640
void sub_005fb640(void) {  }

// @baa 0x005fb7d0
int sub_005fb7d0(int * param_1, int * param_2)
{
  return *param_2 - *param_1;
}

// @baa 0x005fb7e0
int sub_005fb7e0(int * param_1, int * param_2)
{
  return *param_2 - *param_1;
}

struct C_005fb7f0 {
    void sub_005fb7f0();
};

extern undefined4 g_02666790;
extern undefined4 g_02666794;
// @baa 0x005fb7f0
void C_005fb7f0::sub_005fb7f0(void)
{
    int param_1 = (int)this;

  uint uVar1;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x4c) == 0);
  *(uint *)(param_1 + 0x4c) = uVar1;
  if (uVar1 != 0) {
    *(undefined4 *)(param_1 + 0x50) = g_02666790;
    *(undefined4 *)(param_1 + 0x54) = g_02666794;
    return;
  }
  *(undefined4 *)(param_1 + 0x58) = g_02666790;
  *(undefined4 *)(param_1 + 0x5c) = g_02666794;
  return;
}

struct C_005fb820 {
    void sub_005fb820();
};

// @baa 0x005fb820
void C_005fb820::sub_005fb820(void)
{
    int param_1 = (int)this;

  uint uVar1;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x4c) == 0);
  *(uint *)(param_1 + 0x4c) = uVar1;
  if (uVar1 != 0) {
    *(undefined4 *)(param_1 + 0x50) = g_02666790;
    *(undefined4 *)(param_1 + 0x54) = g_02666794;
    return;
  }
  *(undefined4 *)(param_1 + 0x58) = g_02666790;
  *(undefined4 *)(param_1 + 0x5c) = g_02666794;
  return;
}

// @baa 0x005fba80
UExporter::UExporter()
{
    *(DWORD*)((BYTE*)this + 0x54) &= 0xfffffffd;
}

IMPLEMENT_CLASS_AT(UExporter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UExporter.cpp", 36);
// @baa 0x005fbb90
int UExporter::vf_000(void) { return 1; }

// @baa 0x005fbba0
bool UExporter::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x005fbf80
IMPLEMENT_CLASS_AT(UHelpCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UHelpCommandlet.cpp", 208);

// @baa 0x005fc090
int UHelpCommandlet::vf_000(void) { return 1; }

// @baa 0x005fc0a0
bool UHelpCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x005fc170
int UPackageMap::vf_134(int a) { return a | -1; }

// @baa 0x005fc1a0
IMPLEMENT_CLASS_AT(UPackageMap, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnCoreNet.cpp", 525);

// @baa 0x005fc2b0
int UPackageMap::vf_000(void) { return 1; }

// @baa 0x005fc2c0
bool UPackageMap::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_view_005fc300 {
    int sub_00543d30(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x005fc300
int UObject::sub_005fc300(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_view_005fc300 *)(this))->sub_00543d30(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

struct C_005fc380 { int a, b, c; C_005fc380(); };

// @baa 0x005fc380
C_005fc380::C_005fc380() : a(0), b(0), c(0) {}

struct C_005fc390 { int a, b, c; C_005fc390(); };

// @baa 0x005fc390
C_005fc390::C_005fc390() : a(0), b(0), c(0) {}

// @baa 0x005fc3a0
int UObject::sub_005fc3a0(void) { return *(int*)((char*)this + 4); }

// @baa 0x005fc3b0
int UObject::sub_005fc3b0(void) { return *(int*)((char*)this + 4); }

// @baa 0x005fc3c0
int UObject::sub_005fc3c0(void) { return *(int*)((char*)this + 0); }

struct C_005fc3d0 { int a, b, c; C_005fc3d0(); };

// @baa 0x005fc3d0
C_005fc3d0::C_005fc3d0() : a(0), b(0), c(0) {}

struct C_005fc3e0 { int a, b, c; C_005fc3e0(); };

// @baa 0x005fc3e0
C_005fc3e0::C_005fc3e0() : a(0), b(0), c(0) {}

// @baa 0x005fc3f0
int UObject::sub_005fc3f0(void) { return *(int*)((char*)this + 0); }

// @baa 0x005fc400
int UObject::sub_005fc400(void) { return *(int*)((char*)this + 4); }

struct C_005fc410 { int a, b, c; C_005fc410(); };

// @baa 0x005fc410
C_005fc410::C_005fc410() : a(0), b(0), c(0) {}

// @baa 0x005fc420
int UObject::sub_005fc420(void) { return *(int*)((char*)this + 0); }

// @baa 0x005fc430
int UObject::sub_005fc430(void) { return *(int*)((char*)this + 4); }

struct C_005fc4b0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_005fc4b0* sub_005fc4b0(INT value);
};

// @baa 0x005fc4b0
C_005fc4b0* C_005fc4b0::sub_005fc4b0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct CCtr {
    int a;
    int b;
    CCtr* sub_005fc4d0() { b++; return this; }
};

// @baa 0x005fc4d0
void g_use(CCtr* p, int x) { if (x) p->sub_005fc4d0(); }

struct C_005fc4e0 { int a, b, c; C_005fc4e0(); };

// @baa 0x005fc4e0
C_005fc4e0::C_005fc4e0() : a(0), b(0), c(0) {}

struct C_005fc4f0 { int sub_005fc4f0(void); };

// @baa 0x005fc4f0
int C_005fc4f0::sub_005fc4f0(void) { return *(int*)((char*)this + 4); }

struct C_005fc500 { int a, b, c; C_005fc500(); };

// @baa 0x005fc500
C_005fc500::C_005fc500() : a(0), b(0), c(0) {}

struct C_005fc510 { int sub_005fc510(void); };

// @baa 0x005fc510
int C_005fc510::sub_005fc510(void) { return *(int*)((char*)this + 4); }

struct T_005fc520 { int x; };

// @baa 0x005fc520
template T_005fc520& TIndirectArray<T_005fc520>::operator()(INT);

struct C_005fc570 { int sub_005fc570(void); };

// @baa 0x005fc570
int C_005fc570::sub_005fc570(void) { return *(int*)((char*)this + 0); }

struct C_005fc580 { int sub_005fc580(void); };

// @baa 0x005fc580
int C_005fc580::sub_005fc580(void) { return *(int*)((char*)this + 4); }

struct E { BYTE Bytes[412]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_005fc590(INT Index);
};

// @baa 0x005fc590
E* S::sub_005fc590(INT Index)
{
    return &Items(Index);
}

struct C_005fc660 { int sub_005fc660(void); };

// @baa 0x005fc660
int C_005fc660::sub_005fc660(void) { return *(int*)((char*)this + 0); }

struct C_005fc670 { int sub_005fc670(void); };

// @baa 0x005fc670
int C_005fc670::sub_005fc670(void) { return *(int*)((char*)this + 4); }

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
	FFaceFXElement* sub_005fc680(INT Index);
};

// @baa 0x005fc680
FFaceFXElement* UFxRenderWidget::sub_005fc680(INT Index)
{
	return &BoneArray(Index);
}

struct C_005fc6d0 { int a, b, c; C_005fc6d0(); };

// @baa 0x005fc6d0
C_005fc6d0::C_005fc6d0() : a(0), b(0), c(0) {}

struct C_005fc6e0 { int sub_005fc6e0(void); };

// @baa 0x005fc6e0
int C_005fc6e0::sub_005fc6e0(void) { return *(int*)((char*)this + 4); }

struct C_005fc6f0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_005fc6f0(INT Index);
};

// @baa 0x005fc6f0
UBOOL C_005fc6f0::sub_005fc6f0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_005fc830 { int sub_005fc830(void); };

// @baa 0x005fc830
int C_005fc830::sub_005fc830(void) { return *(int*)((char*)this + 0); }

struct C_005fc900 { int sub_005fc900(void); };

// @baa 0x005fc900
int C_005fc900::sub_005fc900(void) { return *(int*)((char*)this + 0); }

struct C_005fc930 { int sub_005fc930(void); };

// @baa 0x005fc930
int C_005fc930::sub_005fc930(void) { return *(int*)((char*)this + 0); }

struct C_005fc9b0 { int sub_005fc9b0(void); };

// @baa 0x005fc9b0
int C_005fc9b0::sub_005fc9b0(void) { return *(int*)((char*)this + 0); }

// @baa 0x005fc9c0
void __stdcall sub_005fc9c0(int a0, int a1) {  }

struct C_005fca40 { int sub_005fca40(void); };

// @baa 0x005fca40
int C_005fca40::sub_005fca40(void) { return *(int*)((char*)this + 0); }

struct C_005fcac0 {
    int sub_005fcac0();
};

// @baa 0x005fcac0
int C_005fcac0::sub_005fcac0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_005fcad0 { int a, b; C_005fcad0(int, int); };

// @baa 0x005fcad0
C_005fcad0::C_005fcad0(int x, int y) : a(x), b(y) {}

struct C_005fcaf0 {
    int sub_005fcaf0();
};

// @baa 0x005fcaf0
int C_005fcaf0::sub_005fcaf0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_005fcb00 { int a, b; C_005fcb00(int, int); };

// @baa 0x005fcb00
C_005fcb00::C_005fcb00(int x, int y) : a(x), b(y) {}

struct C_005fcb20 {
    int sub_005fcb20();
};

// @baa 0x005fcb20
int C_005fcb20::sub_005fcb20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_005fcb30 {
    int sub_005fcb30();
};

// @baa 0x005fcb30
int C_005fcb30::sub_005fcb30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_005fcb40 { int a, b; C_005fcb40(int, int); };

// @baa 0x005fcb40
C_005fcb40::C_005fcb40(int x, int y) : a(x), b(y) {}

struct C_005fcb60 {
    int sub_005fcb60();
};

// @baa 0x005fcb60
int C_005fcb60::sub_005fcb60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_005fcb70 { int a, b; C_005fcb70(int, int); };

// @baa 0x005fcb70
C_005fcb70::C_005fcb70(int x, int y) : a(x), b(y) {}

struct C_005fcb90 {
    int sub_005fcb90();
};

// @baa 0x005fcb90
int C_005fcb90::sub_005fcb90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_005fcba0 { int a, b; C_005fcba0(int, int); };

// @baa 0x005fcba0
C_005fcba0::C_005fcba0(int x, int y) : a(x), b(y) {}

struct C_005fcbc0 {
    int sub_005fcbc0();
};

// @baa 0x005fcbc0
int C_005fcbc0::sub_005fcbc0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_005fcbd0 { int a, b; C_005fcbd0(int, int); };

// @baa 0x005fcbd0
C_005fcbd0::C_005fcbd0(int x, int y) : a(x), b(y) {}

struct C_005fcbf0 {
    int sub_005fcbf0();
};

// @baa 0x005fcbf0
int C_005fcbf0::sub_005fcbf0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_005fcc00 { int a, b; C_005fcc00(int, int); };

// @baa 0x005fcc00
C_005fcc00::C_005fcc00(int x, int y) : a(x), b(y) {}

struct C_005fcc20 {
    int sub_005fcc20();
};

// @baa 0x005fcc20
int C_005fcc20::sub_005fcc20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_005fcc30 { int a, b; C_005fcc30(int, int); };

// @baa 0x005fcc30
C_005fcc30::C_005fcc30(int x, int y) : a(x), b(y) {}

struct C_005fcc50 {
    int sub_005fcc50();
};

// @baa 0x005fcc50
int C_005fcc50::sub_005fcc50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_005fcc60 { int a, b; C_005fcc60(int, int); };

// @baa 0x005fcc60
C_005fcc60::C_005fcc60(int x, int y) : a(x), b(y) {}

struct C_005fcc80 {
    int sub_005fcc80();
};

// @baa 0x005fcc80
int C_005fcc80::sub_005fcc80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_005fcc90 { int a, b; C_005fcc90(int, int); };

// @baa 0x005fcc90
C_005fcc90::C_005fcc90(int x, int y) : a(x), b(y) {}

struct C_005fccb0 {
    int sub_005fccb0();
};

// @baa 0x005fccb0
int C_005fccb0::sub_005fccb0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_005fccc0 { int a, b; C_005fccc0(int, int); };

// @baa 0x005fccc0
C_005fccc0::C_005fccc0(int x, int y) : a(x), b(y) {}

struct C_005fcce0 {
    int sub_005fcce0();
};

// @baa 0x005fcce0
int C_005fcce0::sub_005fcce0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_005fccf0 { int a, b; C_005fccf0(int, int); };

// @baa 0x005fccf0
C_005fccf0::C_005fccf0(int x, int y) : a(x), b(y) {}

struct C_005fcd10 { int sub_005fcd10(void); };

// @baa 0x005fcd10
int C_005fcd10::sub_005fcd10(void) { return *(int*)((char*)this + 0); }

struct C_005fcd20 { int sub_005fcd20(void); };

// @baa 0x005fcd20
int C_005fcd20::sub_005fcd20(void) { return *(int*)((char*)this + 0); }

// @baa 0x005fcd30
int sub_005fcd30(int a0) { return *(int*)a0; }

// @baa 0x005fcd40
bool sub_005fcd40(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_005fcd50 { int a, b; C_005fcd50(const C_005fcd50 &); };

// @baa 0x005fcd50
C_005fcd50::C_005fcd50(const C_005fcd50 &o) : a(o.a), b(o.b) {}

struct C_005fcd90 { int sub_005fcd90(void); };

// @baa 0x005fcd90
int C_005fcd90::sub_005fcd90(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_005fcdc0 {
    void sub_005fcdc0();
};

// @baa 0x005fcdc0
void C_005fcdc0::sub_005fcdc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0053dfa0(*param_1);
  *param_1 = 0;
  return;
}

// @baa 0x005fcde0
int sub_005fcde0(int a0) { return *(int*)a0; }

// @baa 0x005fcdf0
undefined4 sub_005fcdf0(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_005fce10 {
    void sub_005fce10(int *);
};

// @baa 0x005fce10
void C_005fce10::sub_005fce10(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 8);
  return;
}

// @baa 0x005fce20
int sub_005fce20(int a0) { return *(int*)a0; }

struct C_005fce30 {
    void sub_005fce30(int *);
};

// @baa 0x005fce30
void C_005fce30::sub_005fce30(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

struct C_005fce40 { int sub_005fce40(void); };

// @baa 0x005fce40
int C_005fce40::sub_005fce40(void) { return *(int*)((char*)this + 4); }

// @baa 0x005fce50
int sub_005fce50(int a0) { return *(int*)a0; }

struct C_005fce60 {
    void sub_005fce60(int *);
};

// @baa 0x005fce60
void C_005fce60::sub_005fce60(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

struct C_005fce70 { int sub_005fce70(void); };

// @baa 0x005fce70
int C_005fce70::sub_005fce70(void) { return *(int*)((char*)this + 0); }

struct C_005fce80 { int sub_005fce80(void); };

// @baa 0x005fce80
int C_005fce80::sub_005fce80(void) { return *(int*)((char*)this + 0); }

struct C_005fce90 { int sub_005fce90(void); };

// @baa 0x005fce90
int C_005fce90::sub_005fce90(void) { return *(int*)((char*)this + 0); }

struct C_005fcea0 { int sub_005fcea0(void); };

// @baa 0x005fcea0
int C_005fcea0::sub_005fcea0(void) { return *(int*)((char*)this + 0); }

// @baa 0x005fceb0
int sub_005fceb0(int a0) { return *(int*)a0; }

// @baa 0x005fcec0
undefined4 sub_005fcec0(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_005fcee0 {
    void sub_005fcee0(int *);
};

// @baa 0x005fcee0
void C_005fcee0::sub_005fcee0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 8;
  return;
}

struct C_005fcef0 { int sub_005fcef0(void); };

// @baa 0x005fcef0
int C_005fcef0::sub_005fcef0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x005fcf00
int sub_005fcf00(int a0) { return *(int*)a0; }

struct C_005fcf10 {
    void sub_005fcf10(int *);
};

// @baa 0x005fcf10
void C_005fcf10::sub_005fcf10(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

struct C_005fcf20 { int sub_005fcf20(void); };

// @baa 0x005fcf20
int C_005fcf20::sub_005fcf20(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_005fcf30 { int sub_005fcf30(void); };

// @baa 0x005fcf30
int C_005fcf30::sub_005fcf30(void) { return *(int*)((char*)this + 0); }

// @baa 0x005fcf40
int sub_005fcf40(int a0) { return *(int*)a0; }

struct C_005fcf50 {
    void sub_005fcf50(int *);
};

// @baa 0x005fcf50
void C_005fcf50::sub_005fcf50(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 0x10);
  return;
}

struct C_005fcf60 { int sub_005fcf60(void); };

// @baa 0x005fcf60
int C_005fcf60::sub_005fcf60(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x005fcf70
int sub_005fcf70(int a0) { return *(int*)a0; }

struct C_005fcf80 {
    void sub_005fcf80(int *);
};

// @baa 0x005fcf80
void C_005fcf80::sub_005fcf80(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 0xc);
  return;
}

// @baa 0x005fcf90
int sub_005fcf90(int a0) { return *(int*)a0; }

struct C_005fcfa0 {
    void sub_005fcfa0(int *);
};

// @baa 0x005fcfa0
void C_005fcfa0::sub_005fcfa0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

struct C_005fcfb0 { int sub_005fcfb0(void); };

// @baa 0x005fcfb0
int C_005fcfb0::sub_005fcfb0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_005fcfc0 { int sub_005fcfc0(void); };

// @baa 0x005fcfc0
int C_005fcfc0::sub_005fcfc0(void) { return *(int*)((char*)this + 0); }

// @baa 0x005fcfd0
int sub_005fcfd0(int a0) { return *(int*)a0; }

// @baa 0x005fcfe0
bool sub_005fcfe0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_005fcff0 { int a, b; C_005fcff0(const C_005fcff0 &); };

// @baa 0x005fcff0
C_005fcff0::C_005fcff0(const C_005fcff0 &o) : a(o.a), b(o.b) {}

struct C_005fd030 { int sub_005fd030(void); };

// @baa 0x005fd030
int C_005fd030::sub_005fd030(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_005fd060 { int sub_005fd060(void); };

// @baa 0x005fd060
int C_005fd060::sub_005fd060(void) { return *(int*)((char*)this + 0); }

// @baa 0x005fd070
int sub_005fd070(int a0) { return *(int*)a0; }

// @baa 0x005fd080
bool sub_005fd080(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_005fd090 { int a, b; C_005fd090(const C_005fd090 &); };

// @baa 0x005fd090
C_005fd090::C_005fd090(const C_005fd090 &o) : a(o.a), b(o.b) {}

struct C_005fd0d0 { int sub_005fd0d0(void); };

// @baa 0x005fd0d0
int C_005fd0d0::sub_005fd0d0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x005fd100
int sub_005fd100(int a0) { return *(int*)a0; }

// @baa 0x005fd110
bool sub_005fd110(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_005fd120 {
    void sub_005fd120(undefined4 *);
};

// @baa 0x005fd120
void C_005fd120::sub_005fd120(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_005fd140 { int sub_005fd140(void); };

// @baa 0x005fd140
int C_005fd140::sub_005fd140(void) { return *(int*)((char*)this + 0); }

struct C_005fd1b0 { int sub_005fd1b0(void); };

// @baa 0x005fd1b0
int C_005fd1b0::sub_005fd1b0(void) { return *(int*)((char*)this + 0); }

struct C_005fd1c0 {
    int sub_005fd1c0(int);
};

// @baa 0x005fd1c0
int C_005fd1c0::sub_005fd1c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_005fd1d0 { int a; C_005fd1d0(int); };

// @baa 0x005fd1d0
C_005fd1d0::C_005fd1d0(int x) : a(x) {}

struct C_005fd200 {
    int sub_005fd200(int);
};

// @baa 0x005fd200
int C_005fd200::sub_005fd200(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_005fd210 {
    int sub_005fd210(int);
};

// @baa 0x005fd210
int C_005fd210::sub_005fd210(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x005fd220
int* sub_005fd220(int* a, int b)
{
  *a = b;
  return a;
}

struct C_005fd2d0 { int sub_005fd2d0(void); };

// @baa 0x005fd2d0
int C_005fd2d0::sub_005fd2d0(void) { return *(int*)((char*)this + 4); }

struct C_005fd3a0 { int sub_005fd3a0(void); };

// @baa 0x005fd3a0
int C_005fd3a0::sub_005fd3a0(void) { return *(int*)((char*)this + 0); }

struct C_005fd3b0 { int sub_005fd3b0(void); };

// @baa 0x005fd3b0
int C_005fd3b0::sub_005fd3b0(void) { return *(int*)((char*)this + 0); }

struct C_005fd3c0 { int sub_005fd3c0(void); };

// @baa 0x005fd3c0
int C_005fd3c0::sub_005fd3c0(void) { return *(int*)((char*)this + 4); }

struct C_005fd450 { int sub_005fd450(void); };

// @baa 0x005fd450
int C_005fd450::sub_005fd450(void) { return *(int*)((char*)this + 20); }

struct C_005fd460 { int sub_005fd460(void); };

// @baa 0x005fd460
int C_005fd460::sub_005fd460(void) { return *(int*)((char*)this + 20); }

struct C_005fd470 { int sub_005fd470(void); };

// @baa 0x005fd470
int C_005fd470::sub_005fd470(void) { return *(int*)((char*)this + 20); }

struct C_005fd480 { int sub_005fd480(void); };

// @baa 0x005fd480
int C_005fd480::sub_005fd480(void) { return *(int*)((char*)this + 20); }

struct C_005fd490 { int sub_005fd490(void); };

// @baa 0x005fd490
int C_005fd490::sub_005fd490(void) { return *(int*)((char*)this + 20); }

struct C_005fd4c0 {
    int sub_005fd4c0(int);
};

// @baa 0x005fd4c0
int C_005fd4c0::sub_005fd4c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_005fd4e0 {
    int sub_005fd4e0(int);
};

// @baa 0x005fd4e0
int C_005fd4e0::sub_005fd4e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_005fd4f0 {
    int sub_005fd4f0(int);
};

// @baa 0x005fd4f0
int C_005fd4f0::sub_005fd4f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_005fd510 { int sub_005fd510(void); };

// @baa 0x005fd510
int C_005fd510::sub_005fd510(void) { return *(int*)((char*)this + 20); }

struct C_005fd520 {
    int sub_005fd520(int);
};

// @baa 0x005fd520
int C_005fd520::sub_005fd520(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_005fd530 { int sub_005fd530(void); };

// @baa 0x005fd530
int C_005fd530::sub_005fd530(void) { return *(int*)((char*)this + 20); }

struct C_005fd540 { int sub_005fd540(void); };

// @baa 0x005fd540
int C_005fd540::sub_005fd540(void) { return *(int*)((char*)this + 20); }

// @baa 0x005fd550
int sub_005fd550(int a0) { return a0; }

struct C_005fd560 {
    int sub_005fd560(int);
};

// @baa 0x005fd560
int C_005fd560::sub_005fd560(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_005fd570 {
    int sub_005fd570(int);
};

// @baa 0x005fd570
int C_005fd570::sub_005fd570(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_005fd580 { int sub_005fd580(void); };

// @baa 0x005fd580
int C_005fd580::sub_005fd580(void) { return *(int*)((char*)this + 0); }

struct C_005fd590 { int sub_005fd590(void); };

// @baa 0x005fd590
int C_005fd590::sub_005fd590(void) { return *(int*)((char*)this + 0); }

struct C_005fd5c0 {
    undefined4 sub_005fd5c0();
};

// @baa 0x005fd5c0
undefined4 C_005fd5c0::sub_005fd5c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

struct C_005fd5d0 { int sub_005fd5d0(void); };

// @baa 0x005fd5d0
int C_005fd5d0::sub_005fd5d0(void) { return *(int*)((char*)this + 0); }

struct C_005fd5e0 { int sub_005fd5e0(void); };

// @baa 0x005fd5e0
int C_005fd5e0::sub_005fd5e0(void) { return *(int*)((char*)this + 0); }

struct C_005fd5f0 { int sub_005fd5f0(void); };

// @baa 0x005fd5f0
int C_005fd5f0::sub_005fd5f0(void) { return *(int*)((char*)this + 0); }

struct C_005fd600 {
    int sub_005fd600(int);
};

// @baa 0x005fd600
int C_005fd600::sub_005fd600(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_005fd610 {
    int sub_005fd610(int);
};

// @baa 0x005fd610
int C_005fd610::sub_005fd610(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_005fd630 {
    int sub_005fd630(int);
};

// @baa 0x005fd630
int C_005fd630::sub_005fd630(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_005fd650 {
    int sub_005fd650(int);
};

// @baa 0x005fd650
int C_005fd650::sub_005fd650(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_005fd660 {
    int sub_005fd660(int);
};

// @baa 0x005fd660
int C_005fd660::sub_005fd660(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_005fd670 {
    int sub_005fd670(int);
};

// @baa 0x005fd670
int C_005fd670::sub_005fd670(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_005fd680 { int sub_005fd680(void); };

// @baa 0x005fd680
int C_005fd680::sub_005fd680(void) { return *(int*)((char*)this + 20); }

struct C_005fd690 { int sub_005fd690(void); };

// @baa 0x005fd690
int C_005fd690::sub_005fd690(void) { return *(int*)((char*)this + 20); }

struct C_005fd6a0 { int sub_005fd6a0(void); };

// @baa 0x005fd6a0
int C_005fd6a0::sub_005fd6a0(void) { return *(int*)((char*)this + 20); }

struct C_005fd6b0 { int sub_005fd6b0(void); };

// @baa 0x005fd6b0
int C_005fd6b0::sub_005fd6b0(void) { return *(int*)((char*)this + 20); }

struct C_005fd6c0 { int sub_005fd6c0(void); };

// @baa 0x005fd6c0
int C_005fd6c0::sub_005fd6c0(void) { return *(int*)((char*)this + 20); }

struct C_005fd6d0 { int sub_005fd6d0(void); };

// @baa 0x005fd6d0
int C_005fd6d0::sub_005fd6d0(void) { return *(int*)((char*)this + 20); }

struct C_005fd6e0 { int sub_005fd6e0(void); };

// @baa 0x005fd6e0
int C_005fd6e0::sub_005fd6e0(void) { return *(int*)((char*)this + 20); }

struct C_005fd6f0 { int sub_005fd6f0(void); };

// @baa 0x005fd6f0
int C_005fd6f0::sub_005fd6f0(void) { return *(int*)((char*)this + 20); }

struct C_005fd700 { int sub_005fd700(void); };

// @baa 0x005fd700
int C_005fd700::sub_005fd700(void) { return *(int*)((char*)this + 20); }

struct C_005fd710 { int sub_005fd710(void); };

// @baa 0x005fd710
int C_005fd710::sub_005fd710(void) { return *(int*)((char*)this + 20); }

struct C_005fd720 { int sub_005fd720(void); };

// @baa 0x005fd720
int C_005fd720::sub_005fd720(void) { return *(int*)((char*)this + 20); }

struct C_005fd730 { int sub_005fd730(void); };

// @baa 0x005fd730
int C_005fd730::sub_005fd730(void) { return *(int*)((char*)this + 20); }

struct C_005fd740 { int sub_005fd740(void); };

// @baa 0x005fd740
int C_005fd740::sub_005fd740(void) { return *(int*)((char*)this + 20); }

struct C_005fd750 { int sub_005fd750(void); };

// @baa 0x005fd750
int C_005fd750::sub_005fd750(void) { return *(int*)((char*)this + 20); }

struct C_005fd760 { int sub_005fd760(void); };

// @baa 0x005fd760
int C_005fd760::sub_005fd760(void) { return *(int*)((char*)this + 20); }

struct C_005fd770 { int sub_005fd770(void); };

// @baa 0x005fd770
int C_005fd770::sub_005fd770(void) { return *(int*)((char*)this + 20); }

struct C_005fd780 { int sub_005fd780(void); };

// @baa 0x005fd780
int C_005fd780::sub_005fd780(void) { return *(int*)((char*)this + 20); }

struct C_005fd790 {
    int sub_005fd790(int);
};

// @baa 0x005fd790
int C_005fd790::sub_005fd790(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_005fd7a0 { int a, b, c; C_005fd7a0(); };

// @baa 0x005fd7a0
C_005fd7a0::C_005fd7a0() : a(0), b(0), c(0) {}

struct C_005fd7b0 { int sub_005fd7b0(void); };

// @baa 0x005fd7b0
int C_005fd7b0::sub_005fd7b0(void) { return *(int*)((char*)this + 0); }

struct C_005fd7c0 { int sub_005fd7c0(void); };

// @baa 0x005fd7c0
int C_005fd7c0::sub_005fd7c0(void) { return *(int*)((char*)this + 0); }

struct C_005fd7d0 { int a, b, c; C_005fd7d0(); };

// @baa 0x005fd7d0
C_005fd7d0::C_005fd7d0() : a(0), b(0), c(0) {}

struct C_005fd7e0 { int sub_005fd7e0(void); };

// @baa 0x005fd7e0
int C_005fd7e0::sub_005fd7e0(void) { return *(int*)((char*)this + 0); }

struct C_005fd7f0 { int sub_005fd7f0(void); };

// @baa 0x005fd7f0
int C_005fd7f0::sub_005fd7f0(void) { return *(int*)((char*)this + 0); }

struct C_005fd800 { int a, b, c; C_005fd800(); };

// @baa 0x005fd800
C_005fd800::C_005fd800() : a(0), b(0), c(0) {}

struct C_005fd810 { int sub_005fd810(void); };

// @baa 0x005fd810
int C_005fd810::sub_005fd810(void) { return *(int*)((char*)this + 0); }

struct C_005fd820 { int sub_005fd820(void); };

// @baa 0x005fd820
int C_005fd820::sub_005fd820(void) { return *(int*)((char*)this + 0); }

struct C_005fd830 {
    int sub_005fd830(int);
};

// @baa 0x005fd830
int C_005fd830::sub_005fd830(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_005fd8d0 {
    void sub_005fd8d0(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

int sub_00630f20(...);
// @baa 0x005fd8d0
void C_005fd8d0::sub_005fd8d0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

struct C_005fd900 {
    void sub_005fd900(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x005fd900
void C_005fd900::sub_005fd900(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

struct C_005fd950 {
    void sub_005fd950(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

int sub_00630ea0(...);
// @baa 0x005fd950
void C_005fd950::sub_005fd950(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630ea0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}

struct C_005fd9e0 {
    void sub_005fd9e0(undefined4, undefined4, undefined4, undefined4, float);
};

// @baa 0x005fd9e0
void C_005fd9e0::sub_005fd9e0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, float param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,(double)param_6);
  return;
}

struct C_005fda30 {
    void sub_005fda30(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x005fda30
void C_005fda30::sub_005fda30(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}

void sub_00572b30();
// @baa 0x005fdad0
void sub_005fdad0(void) { sub_00572b30(); }

struct C_005fdae0 {
    void sub_005fdae0(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x005fdae0
void C_005fdae0::sub_005fdae0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

struct C_005fdb10 { int sub_005fdb10(void); };

// @baa 0x005fdb10
int C_005fdb10::sub_005fdb10(void) { return *(int*)((char*)this + 4); }

struct S_005fdb20 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_005fdb20(INT Index) const;
};

// @baa 0x005fdb20
const DWORD* S_005fdb20::sub_005fdb20(INT Index) const
{
    return &Items(Index);
}

struct C_005fdbc0 { int a, b; C_005fdbc0(const C_005fdbc0 &); };

// @baa 0x005fdbc0
C_005fdbc0::C_005fdbc0(const C_005fdbc0 &o) : a(o.a), b(o.b) {}

struct C_005fdbe0 { int sub_005fdbe0(void); };

// @baa 0x005fdbe0
int C_005fdbe0::sub_005fdbe0(void) { return *(int*)((char*)this + 4); }

struct E_005fdbf0 { BYTE Bytes[16]; };

struct S_005fdbf0 {
    TArray<E_005fdbf0> Items; // 0x00
    const E_005fdbf0* sub_005fdbf0(INT Index) const;
};

// @baa 0x005fdbf0
const E_005fdbf0* S_005fdbf0::sub_005fdbf0(INT Index) const
{
    return &Items(Index);
}

struct S_005fdcb0 {
    TArray<E> Items; // 0x00
    const E* sub_005fdcb0(INT Index) const;
};

// @baa 0x005fdcb0
const E* S_005fdcb0::sub_005fdcb0(INT Index) const
{
    return &Items(Index);
}

struct C_005fdd00 { int a, b; C_005fdd00(const C_005fdd00 &); };

// @baa 0x005fdd00
C_005fdd00::C_005fdd00(const C_005fdd00 &o) : a(o.a), b(o.b) {}

struct E_005fdd20 { BYTE Bytes[20]; };

struct S_005fdd20 {
    TArray<E_005fdd20> Items; // 0x00
    const E_005fdd20* sub_005fdd20(INT Index) const;
};

// @baa 0x005fdd20
const E_005fdd20* S_005fdd20::sub_005fdd20(INT Index) const
{
    return &Items(Index);
}

struct C_005fdd70 { int a, b; C_005fdd70(const C_005fdd70 &); };

// @baa 0x005fdd70
C_005fdd70::C_005fdd70(const C_005fdd70 &o) : a(o.a), b(o.b) {}

struct S_005fdd90 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_005fdd90(INT Index) const;
};

// @baa 0x005fdd90
const DWORD* S_005fdd90::sub_005fdd90(INT Index) const
{
    return &Items(Index);
}

struct C_005fde90 { int a, b; C_005fde90(int, int); };

// @baa 0x005fde90
C_005fde90::C_005fde90(int x, int y) : a(x), b(y) {}

// @baa 0x005fdeb0
int sub_005fdeb0(int a0) { return *(int*)a0; }

struct C_005fdec0 { int sub_005fdec0(void); };

// @baa 0x005fdec0
int C_005fdec0::sub_005fdec0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_005fded0 {
    void sub_005fded0(int *);
};

// @baa 0x005fded0
void C_005fded0::sub_005fded0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 0xc);
  return;
}

// @baa 0x005fdee0
void sub_005fdee0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x005fdf40
void sub_005fdf40(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_005fdf60 {
    undefined4 * sub_005fdf60(byte);
};

// @baa 0x005fdf60
undefined4 * C_005fdf60::sub_005fdf60(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ea6bb8);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_005fdf80 {
    undefined4 * sub_005fdf80(byte);
};

// @baa 0x005fdf80
undefined4 * C_005fdf80::sub_005fdf80(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ea6bd8);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_005fdfa0 {
    undefined4 * sub_005fdfa0(byte);
};

// @baa 0x005fdfa0
undefined4 * C_005fdfa0::sub_005fdfa0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ea6bec);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_005fdfc0 {
    int sub_005fdfc0(int);
};

// @baa 0x005fdfc0
int C_005fdfc0::sub_005fdfc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 2;
}

struct C_005fe120 {
    int sub_005fe120();
};

// @baa 0x005fe120
int C_005fe120::sub_005fe120(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0xc);
}

struct E_005fe130 { BYTE Bytes[12]; };

struct S_005fe130 {
    TArray<E_005fe130> Items; // 0x00
    E_005fe130* sub_005fe130(INT Index);
};

// @baa 0x005fe130
E_005fe130* S_005fe130::sub_005fe130(INT Index)
{
    return &Items(Index);
}

struct C_005fe180 {
    int sub_005fe180(int);
};

// @baa 0x005fe180
int C_005fe180::sub_005fe180(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x38;
}

struct C_005fe1a0 { int sub_005fe1a0(void); };

// @baa 0x005fe1a0
int C_005fe1a0::sub_005fe1a0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_005fe200 {
    int sub_005fe200();
};

// @baa 0x005fe200
int C_005fe200::sub_005fe200(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005fe220 {
    int sub_005fe220(int);
};

// @baa 0x005fe220
int C_005fe220::sub_005fe220(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

int sub_005fac40(void);
// @baa 0x005fe2c0
undefined4 UArrayProperty::sub_005fe2c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005fac40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0053ec70(void);
extern undefined * g_01ea70d8;
// @baa 0x005fe3b0
undefined4 * UTexture2D::sub_005fe3b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72a60);
  sub_0053ec70();
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *param_1 = (undefined4)(&g_01ea70d8);
  param_1[0x1a] = 1;
  return param_1;
}

struct C_005fe3e0 {
    void sub_005fe3e0(int, int);
};

// @baa 0x005fe3e0
void C_005fe3e0::sub_005fe3e0(int param_2, int param_3)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + param_2;
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + param_3;
  return;
}

struct C_005fe400 {
    undefined4 * sub_005fe400(byte);
};

// @baa 0x005fe400
undefined4 * C_005fe400::sub_005fe400(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72a60);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_005fe560 {
    void sub_005fe560();
};

// @baa 0x005fe560
void C_005fe560::sub_005fe560(void)
{
    int param_1 = (int)this;

                    
                    
  (**(code **)(param_1 + 0x18))();
  return;
}

struct C_005fe570 {
    void sub_005fe570();
};

// @baa 0x005fe570
void C_005fe570::sub_005fe570(void)
{
    int param_1 = (int)this;

                    
                    
  (**(code **)(param_1 + 0x1c))();
  return;
}

struct S_005feb70 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_005feb70(INT Index) const;
};

// @baa 0x005feb70
const DWORD* S_005feb70::sub_005feb70(INT Index) const
{
    return &Items(Index);
}

struct S_005febc0 {
    TArray<WORD> Words; // 0x00
    WORD* sub_005febc0(INT Index);
};

// @baa 0x005febc0
WORD* S_005febc0::sub_005febc0(INT Index)
{
    return &Words(Index);
}

struct E_005fec90 { BYTE Bytes[12]; };

struct S_005fec90 {
    TArray<E_005fec90> Items; // 0x00
    E_005fec90* sub_005fec90(INT Index);
};

// @baa 0x005fec90
E_005fec90* S_005fec90::sub_005fec90(INT Index)
{
    return &Items(Index);
}

struct UFxRenderWidget_005fece0
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_005fece0(INT Index);
};

// @baa 0x005fece0
FFaceFXElement* UFxRenderWidget_005fece0::sub_005fece0(INT Index)
{
	return &BoneArray(Index);
}

struct S_005fed70 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_005fed70(INT Index);
};

// @baa 0x005fed70
DWORD* S_005fed70::sub_005fed70(INT Index)
{
    return &Items(Index);
}

// @baa 0x005fee20
int UPackageMap::sub_005fee20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x005fee30
int UPackageMap::sub_005fee30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x005fee40
void __stdcall sub_005fee40(int a0, int a1) {  }

// @baa 0x005fee50
int UPackageMap::sub_005fee50(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x005fee60
int UPackageMap::sub_005fee60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x005fee70
int UPackageMap::sub_005fee70(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x005fee80
int UPackageMap::sub_005fee80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x005fee90
int UPackageMap::sub_005fee90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x005feea0
int UPackageMap::sub_005feea0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 2;
}

// @baa 0x005feeb0
void __stdcall sub_005feeb0(int a0, int a1) {  }

// @baa 0x005feec0
int UPackageMap::sub_005feec0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x005feed0
int UPackageMap::sub_005feed0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x005feee0
int UPackageMap::sub_005feee0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x19c + *param_1;
}

// @baa 0x005feef0
int UPackageMap::sub_005feef0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x005fef00
int UPackageMap::sub_005fef00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x005fef10
void __stdcall sub_005fef10(int a0, int a1) {  }

// @baa 0x005fef20
int UPackageMap::sub_005fef20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x005fef40
void UPackageMap::sub_005fef40(void)
{
    int param_1 = (int)this;

  sub_0053dfa0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

struct S_005fef60 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_005fef60(INT Index);
};

// @baa 0x005fef60
DWORD* S_005fef60::sub_005fef60(INT Index)
{
    return &Items(Index);
}

// @baa 0x005fefe0
int UPackageMap::sub_005fefe0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

int sub_005413d0(...);
// @baa 0x005feff0
void sub_005feff0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

// @baa 0x005ff000
int UPackageMap::sub_005ff000(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

// @baa 0x005ff0d0
int UPackageMap::sub_005ff0d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x005ff0e0
int UPackageMap::sub_005ff0e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct S_005ff150 { int sub_00544d40(int); };

// @baa 0x005ff150
int sub_005ff150(S_005ff150 *s, int a) { return s->sub_00544d40(a); }

struct S_005ff1e0 { int sub_00544d40(int); };

// @baa 0x005ff1e0
int sub_005ff1e0(S_005ff1e0 *s, int a) { return s->sub_00544d40(a); }

// @baa 0x005ff2a0
int UPackageMap::sub_005ff2a0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x005ff2b0
int UPackageMap::sub_005ff2b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct E_005ff2c0 { BYTE Bytes[16]; };

struct S_005ff2c0 {
    TArray<E_005ff2c0> Items; // 0x00
    E_005ff2c0* sub_005ff2c0(INT Index);
};

// @baa 0x005ff2c0
E_005ff2c0* S_005ff2c0::sub_005ff2c0(INT Index)
{
    return &Items(Index);
}

struct S_005ff310 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_005ff310(INT Index);
};

// @baa 0x005ff310
DWORD* S_005ff310::sub_005ff310(INT Index)
{
    return &Items(Index);
}

// @baa 0x005ff360
int UPackageMap::sub_005ff360(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x005ff390
int UPackageMap::sub_005ff390(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x005ff3b0
int UPackageMap::sub_005ff3b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x005ff3d0
int UPackageMap::sub_005ff3d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x005ff3f0
int UPackageMap::sub_005ff3f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x005ff410
int UPackageMap::sub_005ff410(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

// @baa 0x005ff420
int UPackageMap::sub_005ff420(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct S_005ff440 { int sub_00544d40(int); };

// @baa 0x005ff440
int sub_005ff440(S_005ff440 *s, int a) { return s->sub_00544d40(a); }

// @baa 0x005ff450
int UPackageMap::sub_005ff450(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct S_005ff460 { int sub_005fe420(int); };

// @baa 0x005ff460
int sub_005ff460(S_005ff460 *s, int a) { return s->sub_005fe420(a); }

// @baa 0x005ff470
int UPackageMap::sub_005ff470(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct S_005ff490 { int sub_00544d40(int); };

// @baa 0x005ff490
int sub_005ff490(S_005ff490 *s, int a) { return s->sub_00544d40(a); }

// @baa 0x005ff4a0
int UPackageMap::sub_005ff4a0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x005ff4b0
int UPackageMap::sub_005ff4b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct S_005ff4d0 { int sub_00544d40(int); };

// @baa 0x005ff4d0
int sub_005ff4d0(S_005ff4d0 *s, int a) { return s->sub_00544d40(a); }

// @baa 0x005ff4e0
int UPackageMap::sub_005ff4e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x005ff4f0
int UPackageMap::sub_005ff4f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x005ff510
int UPackageMap::sub_005ff510(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x005ff530
int UPackageMap::sub_005ff530(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_005ff5d0 {
    int sub_005ff5d0(int);
};

// @baa 0x005ff5d0
int C_005ff5d0::sub_005ff5d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_005ff5e0 {
    int sub_005ff5e0(int);
};

// @baa 0x005ff5e0
int C_005ff5e0::sub_005ff5e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_005ff5f0 { int sub_005ff5f0(void); };

// @baa 0x005ff5f0
int C_005ff5f0::sub_005ff5f0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_005ff600 {
    void sub_005ff600();
};

// @baa 0x005ff600
void C_005ff600::sub_005ff600(void)
{
    int param_1 = (int)this;

  sub_0053dfa0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

struct C_005ff680 {
    int sub_005ff680(int);
};

// @baa 0x005ff680
int C_005ff680::sub_005ff680(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_005ff690 {
    int sub_005ff690(int);
};

// @baa 0x005ff690
int C_005ff690::sub_005ff690(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_005ff6a0 {
    int sub_005ff6a0(int);
};

// @baa 0x005ff6a0
int C_005ff6a0::sub_005ff6a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x5c + *param_1;
}

struct C_005ff6b0 {
    int sub_005ff6b0(int);
};

// @baa 0x005ff6b0
int C_005ff6b0::sub_005ff6b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x5c + *param_1;
}

struct C_005ff6c0 {
    int sub_005ff6c0(int);
};

// @baa 0x005ff6c0
int C_005ff6c0::sub_005ff6c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_005ff6d0 {
    int sub_005ff6d0(int);
};

// @baa 0x005ff6d0
int C_005ff6d0::sub_005ff6d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_005ff6e0 {
    int sub_005ff6e0();
};

// @baa 0x005ff6e0
int C_005ff6e0::sub_005ff6e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_005ff720 {
    int sub_005ff720(int);
};

// @baa 0x005ff720
int C_005ff720::sub_005ff720(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_005ff840 {
    int sub_005ff840(int);
};

// @baa 0x005ff840
int C_005ff840::sub_005ff840(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_005ff8e0 {
    int sub_005ff8e0(int);
};

// @baa 0x005ff8e0
int C_005ff8e0::sub_005ff8e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_005ff8f0 {
    int sub_005ff8f0(int);
};

// @baa 0x005ff8f0
int C_005ff8f0::sub_005ff8f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_005ff980 {
    int sub_005ff980();
};

// @baa 0x005ff980
int C_005ff980::sub_005ff980(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_005ff990 {
    int sub_005ff990(int);
};

// @baa 0x005ff990
int C_005ff990::sub_005ff990(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x005ff9d0
void sub_005ff9d0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_005ff9e0 {
    int sub_005ff9e0(int);
};

// @baa 0x005ff9e0
int C_005ff9e0::sub_005ff9e0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

// @baa 0x005ffa20
void sub_005ffa20(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_005ffa30 {
    int sub_005ffa30(int);
};

// @baa 0x005ffa30
int C_005ffa30::sub_005ffa30(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x28;
}

struct C_005ffa40 {
    int sub_005ffa40();
};

// @baa 0x005ffa40
int C_005ffa40::sub_005ffa40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005ffa60 {
    int sub_005ffa60();
};

// @baa 0x005ffa60
int C_005ffa60::sub_005ffa60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005ffa80 {
    int sub_005ffa80();
};

// @baa 0x005ffa80
int C_005ffa80::sub_005ffa80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005ffaa0 {
    int sub_005ffaa0();
};

// @baa 0x005ffaa0
int C_005ffaa0::sub_005ffaa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_005ffac0 {
    int sub_005ffac0();
};

// @baa 0x005ffac0
int C_005ffac0::sub_005ffac0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005ffae0 {
    int sub_005ffae0();
};

// @baa 0x005ffae0
int C_005ffae0::sub_005ffae0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005ffb00 {
    int sub_005ffb00();
};

// @baa 0x005ffb00
int C_005ffb00::sub_005ffb00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_005ffb10 {
    int sub_005ffb10();
};

// @baa 0x005ffb10
int C_005ffb10::sub_005ffb10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005ffb30 {
    int sub_005ffb30();
};

// @baa 0x005ffb30
int C_005ffb30::sub_005ffb30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_005ffb40 {
    int sub_005ffb40();
};

// @baa 0x005ffb40
int C_005ffb40::sub_005ffb40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005ffb60 {
    int sub_005ffb60();
};

// @baa 0x005ffb60
int C_005ffb60::sub_005ffb60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_005ffb70 {
    int sub_005ffb70();
};

// @baa 0x005ffb70
int C_005ffb70::sub_005ffb70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005ffb90 {
    int sub_005ffb90(int);
};

// @baa 0x005ffb90
int C_005ffb90::sub_005ffb90(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_005ffba0 {
    int sub_005ffba0(int);
};

// @baa 0x005ffba0
int C_005ffba0::sub_005ffba0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct E_005ffbb0 { BYTE Bytes[84]; };

struct S_005ffbb0 {
    TArray<E_005ffbb0> Items; // 0x00
    E_005ffbb0* sub_005ffbb0(INT Index);
};

// @baa 0x005ffbb0
E_005ffbb0* S_005ffbb0::sub_005ffbb0(INT Index)
{
    return &Items(Index);
}

struct C_005ffc00 {
    int sub_005ffc00(int);
};

// @baa 0x005ffc00
int C_005ffc00::sub_005ffc00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x5c + *param_1;
}

struct E_005ffc10 { BYTE Bytes[92]; };

struct S_005ffc10 {
    TArray<E_005ffc10> Items; // 0x00
    E_005ffc10* sub_005ffc10(INT Index);
};

// @baa 0x005ffc10
E_005ffc10* S_005ffc10::sub_005ffc10(INT Index)
{
    return &Items(Index);
}

struct E_005ffc60 { BYTE Bytes[40]; };

struct S_005ffc60 {
    TArray<E_005ffc60> Items; // 0x00
    E_005ffc60* sub_005ffc60(INT Index);
};

// @baa 0x005ffc60
E_005ffc60* S_005ffc60::sub_005ffc60(INT Index)
{
    return &Items(Index);
}

struct C_005ffcb0 {
    int sub_005ffcb0(int);
};

// @baa 0x005ffcb0
int C_005ffcb0::sub_005ffcb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_005ffcc0 {
    int sub_005ffcc0(int);
};

// @baa 0x005ffcc0
int C_005ffcc0::sub_005ffcc0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_005ffcd0 {
    int sub_005ffcd0();
};

// @baa 0x005ffcd0
int C_005ffcd0::sub_005ffcd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_005ffcf0 {
    int sub_005ffcf0(int);
};

// @baa 0x005ffcf0
int C_005ffcf0::sub_005ffcf0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_005ffd00 {
    int sub_005ffd00(int);
};

// @baa 0x005ffd00
int C_005ffd00::sub_005ffd00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_005ffd10 {
    int sub_005ffd10();
};

// @baa 0x005ffd10
int C_005ffd10::sub_005ffd10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005ffd30 {
    int sub_005ffd30();
};

// @baa 0x005ffd30
int C_005ffd30::sub_005ffd30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_005ffd40 {
    int sub_005ffd40();
};

// @baa 0x005ffd40
int C_005ffd40::sub_005ffd40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005ffd60 {
    int sub_005ffd60();
};

// @baa 0x005ffd60
int C_005ffd60::sub_005ffd60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_005ffd70 {
    int sub_005ffd70();
};

// @baa 0x005ffd70
int C_005ffd70::sub_005ffd70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005ffd90 {
    int sub_005ffd90();
};

// @baa 0x005ffd90
int C_005ffd90::sub_005ffd90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005ffdb0 {
    int sub_005ffdb0();
};

// @baa 0x005ffdb0
int C_005ffdb0::sub_005ffdb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_005ffdd0 {
    int sub_005ffdd0();
};

// @baa 0x005ffdd0
int C_005ffdd0::sub_005ffdd0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005ffdf0 {
    int sub_005ffdf0();
};

// @baa 0x005ffdf0
int C_005ffdf0::sub_005ffdf0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005ffe10 {
    int sub_005ffe10();
};

// @baa 0x005ffe10
int C_005ffe10::sub_005ffe10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_005ffe20 {
    int sub_005ffe20();
};

// @baa 0x005ffe20
int C_005ffe20::sub_005ffe20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005ffe40 {
    int sub_005ffe40();
};

// @baa 0x005ffe40
int C_005ffe40::sub_005ffe40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_005ffe50 {
    int sub_005ffe50();
};

// @baa 0x005ffe50
int C_005ffe50::sub_005ffe50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005ffe70 {
    int sub_005ffe70();
};

// @baa 0x005ffe70
int C_005ffe70::sub_005ffe70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_005ffe80 {
    int sub_005ffe80();
};

// @baa 0x005ffe80
int C_005ffe80::sub_005ffe80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005ffea0 {
    int sub_005ffea0();
};

// @baa 0x005ffea0
int C_005ffea0::sub_005ffea0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

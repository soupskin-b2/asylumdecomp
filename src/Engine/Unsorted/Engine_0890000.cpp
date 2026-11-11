// Engine_0890000.cpp (part 1 of 2): 86 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_008915b0(INT Index);
};

// @baa 0x008915b0
DWORD* S::sub_008915b0(INT Index)
{
    return &Items(Index);
}

struct S_00891600 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00891600(INT Index);
};

// @baa 0x00891600
DWORD* S_00891600::sub_00891600(INT Index)
{
    return &Items(Index);
}

struct C {
    int sub_00891650(undefined4 *, int);
    int sub_0088dab0(int, int);
};

// @baa 0x00891650
int C::sub_00891650(undefined4 * param_2, int param_3)
{
    int * param_1 = (int *)this;
  undefined4 *puVar1;
  ((C *)(this))->sub_0088dab0(param_3, 1);
  puVar1 = (undefined4 *)(*param_1 + param_3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return param_3;
}

struct S_00891680 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00891680(INT Index);
};

// @baa 0x00891680
DWORD* S_00891680::sub_00891680(INT Index)
{
    return &Items(Index);
}

struct C_008916d0{
int sub_008916d0(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x008916d0
int C_008916d0::sub_008916d0(undefined4*param_2)
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

typedef uint size_t;

struct C_00891760 {
    int sub_00891760(int);
    int sub_0088dc60(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00891760
int C_00891760::sub_00891760(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00891760 *)(this))->sub_0088dc60(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x24),0,param_2 * 0x24);
  return iVar1;
}

struct E { BYTE Bytes[12]; };

struct S_008917a0 {
    TArray<E> Items; // 0x00
    E* sub_008917a0(INT Index);
};

// @baa 0x008917a0
E* S_008917a0::sub_008917a0(INT Index)
{
    return &Items(Index);
}

struct S_008917f0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_008917f0(INT Index);
};

// @baa 0x008917f0
DWORD* S_008917f0::sub_008917f0(INT Index)
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
	FFaceFXElement* sub_00891840(INT Index);
};

// @baa 0x00891840
FFaceFXElement* UFxRenderWidget::sub_00891840(INT Index)
{
	return &BoneArray(Index);
}

struct S_00891890 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00891890(INT Index);
};

// @baa 0x00891890
DWORD* S_00891890::sub_00891890(INT Index)
{
    return &Items(Index);
}

// @baa 0x00891930
int sub_00891930(void) { return 1; }

// @baa 0x00891940
int sub_00891940(void) { return 1; }

struct C_00891950 {
    void sub_00891950();
};

int sub_006563e0(void);
extern undefined * g_01eee7b4;
// @baa 0x00891950
void C_00891950::sub_00891950(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01eee7b4);
  sub_006563e0();
  return;
}

// @baa 0x008919b0
int sub_008919b0(void) { return 1; }

// @baa 0x008919c0
int sub_008919c0(void) { return 1; }

struct C_008919d0 {
    void sub_008919d0();
};

// @baa 0x008919d0
void C_008919d0::sub_008919d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01eee7b4);
  sub_006563e0();
  return;
}

int sub_0053dfa0(...);
// @baa 0x008919e0
undefined4 * UTextureCube::sub_008919e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01eee7b4);
  sub_006563e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00891a10
undefined4 * UTextureCube::sub_00891a10(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01eee7b4);
  sub_006563e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00891a40 {
    int sub_00891a40(int);
};

// @baa 0x00891a40
int C_00891a40::sub_00891a40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00891a50
void __stdcall sub_00891a50(int a0, int a1) {  }

struct C_00891a90 {
    int sub_00891a90(int);
};

// @baa 0x00891a90
int C_00891a90::sub_00891a90(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00891aa0 {
    int sub_00891aa0(int);
};

// @baa 0x00891aa0
int C_00891aa0::sub_00891aa0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00891ab0 {
    int sub_00891ab0(int);
};

// @baa 0x00891ab0
int C_00891ab0::sub_00891ab0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00891ac0 {
    int sub_00891ac0(int);
};

// @baa 0x00891ac0
int C_00891ac0::sub_00891ac0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00891ad0
void __stdcall sub_00891ad0(int a0, int a1) {  }

struct C_00891ae0 {
    int sub_00891ae0(int);
};

// @baa 0x00891ae0
int C_00891ae0::sub_00891ae0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00891af0
void __stdcall sub_00891af0(int a0, int a1) {  }

struct C_00891b00 {
    int sub_00891b00(int);
};

// @baa 0x00891b00
int C_00891b00::sub_00891b00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00891b10 {
    int sub_00891b10(int);
};

// @baa 0x00891b10
int C_00891b10::sub_00891b10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00891b20
void __stdcall sub_00891b20(int a0, int a1) {  }

struct E_00891b30 { BYTE Bytes[16]; };

struct S_00891b30 {
    TArray<E_00891b30> Items; // 0x00
    E_00891b30* sub_00891b30(INT Index);
};

// @baa 0x00891b30
E_00891b30* S_00891b30::sub_00891b30(INT Index)
{
    return &Items(Index);
}

struct S_00891b80 {
    TArray<E> Items; // 0x00
    E* sub_00891b80(INT Index);
};

// @baa 0x00891b80
E* S_00891b80::sub_00891b80(INT Index)
{
    return &Items(Index);
}

struct C_00891bd0 { int sub_00891bd0(void); };

// @baa 0x00891bd0
int C_00891bd0::sub_00891bd0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00891be0 { int sub_00891be0(void); };

// @baa 0x00891be0
int C_00891be0::sub_00891be0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00891cb0 {
    int sub_00891cb0(int);
};

// @baa 0x00891cb0
int C_00891cb0::sub_00891cb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00891cc0 {
    int sub_00891cc0(int);
};

// @baa 0x00891cc0
int C_00891cc0::sub_00891cc0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

int sub_005413d0(...);
// @baa 0x00891d00
void sub_00891d00(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00891d10 {
    int sub_00891d10(int);
};

// @baa 0x00891d10
int C_00891d10::sub_00891d10(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00891d20 {
    int sub_00891d20(int);
};

// @baa 0x00891d20
int C_00891d20::sub_00891d20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00891d30 {
    int sub_00891d30();
};

// @baa 0x00891d30
int C_00891d30::sub_00891d30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00891d50 {
    int sub_00891d50();
};

// @baa 0x00891d50
int C_00891d50::sub_00891d50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00891d70 {
    int sub_00891d70();
};

// @baa 0x00891d70
int C_00891d70::sub_00891d70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00891d90 {
    int sub_00891d90();
};

// @baa 0x00891d90
int C_00891d90::sub_00891d90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00891db0 {
    int sub_00891db0();
};

// @baa 0x00891db0
int C_00891db0::sub_00891db0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x00891e70
void sub_00891e70(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00891e90
void sub_00891e90(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct M_00891fa0 { void sub_0040fcc0(); };

struct C_00891fa0 { char pad[4]; M_00891fa0 m; void sub_00891fa0(); };

// @baa 0x00891fa0
void C_00891fa0::sub_00891fa0() { m.sub_0040fcc0(); }

struct M_00891fc0 { void sub_0040fcc0(); };

struct C_00891fc0 { char pad[4]; M_00891fc0 m; void sub_00891fc0(); };

// @baa 0x00891fc0
void C_00891fc0::sub_00891fc0() { m.sub_0040fcc0(); }

struct C_00891fd0 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_00891fd0& sub_00891fd0(int Arg);
};

// @baa 0x00891fd0
C_00891fd0& C_00891fd0::sub_00891fd0(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00897b80 { void* Data; int Num; int Max; void sub_00897b80(); };

// @baa 0x00897b80
void C_00897b80::sub_00897b80() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00897be0 {
    undefined4 sub_00897be0();
};

// @baa 0x00897be0
undefined4 C_00897be0::sub_00897be0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_00897bf0 { C_00897bf0* sub_00897bf0(void); };

// @baa 0x00897bf0
C_00897bf0* C_00897bf0::sub_00897bf0(void) { return this; }

struct C_00897c00 { C_00897c00* sub_00897c00(void); };

// @baa 0x00897c00
C_00897c00* C_00897c00::sub_00897c00(void) { return this; }

struct C_00897c10 { int sub_00897c10(void); };

// @baa 0x00897c10
int C_00897c10::sub_00897c10(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

extern TArray<int> g_026a1ca4;
struct C_00897c20 {
    int sub_00897c20();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00897c20
int C_00897c20::sub_00897c20()
{
    return g_026a1ca4(Index);
}

struct C_00897c80 {
    int sub_00897c80();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00897c80
int C_00897c80::sub_00897c80()
{
    return g_026a1ca4(Index);
}

void sub_00895ad0();
// @baa 0x00897ce0
void sub_00897ce0(void) { sub_00895ad0(); }

struct C_00897cf0 {
    int sub_00897cf0(int);
};

// @baa 0x00897cf0
int C_00897cf0::sub_00897cf0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00897d00 {
    int sub_00897d00(int);
};

// @baa 0x00897d00
int C_00897d00::sub_00897d00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00897d10 {
    int sub_00897d10();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00897d10
int C_00897d10::sub_00897d10()
{
    return g_026a1ca4(Index);
}

struct C_00897d70 {
    int sub_00897d70();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00897d70
int C_00897d70::sub_00897d70()
{
    return g_026a1ca4(Index);
}

struct C_00897e10 {
    int sub_00897e10();
};

// @baa 0x00897e10
int C_00897e10::sub_00897e10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x10 + *(int *)*param_1;
}

int sub_0040fcc0(void);
// @baa 0x00897e20
undefined4 UObject::sub_00897e20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00897ea0
int UObject::sub_00897ea0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
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

struct TConstSetBitIterator_00897fd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00897fd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00897fd0& operator++();
};

TConstSetBitIterator_00897fd0::TConstSetBitIterator_00897fd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00897fd0
TConstSetBitIterator_00897fd0& TConstSetBitIterator_00897fd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00897ff0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00897ff0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00897ff0& operator++();
};

TConstSetBitIterator_00897ff0::TConstSetBitIterator_00897ff0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00897ff0
TConstSetBitIterator_00897ff0& TConstSetBitIterator_00897ff0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00898010 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00898010(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00898010& operator++();
};

TConstSetBitIterator_00898010::TConstSetBitIterator_00898010(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00898010
TConstSetBitIterator_00898010& TConstSetBitIterator_00898010::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00898060 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00898060(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00898060& operator++();
};

TConstSetBitIterator_00898060::TConstSetBitIterator_00898060(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00898060
TConstSetBitIterator_00898060& TConstSetBitIterator_00898060::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_008980b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_008980b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_008980b0& operator++();
};

TConstSetBitIterator_008980b0::TConstSetBitIterator_008980b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x008980b0
TConstSetBitIterator_008980b0& TConstSetBitIterator_008980b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_008980d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_008980d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_008980d0& operator++();
};

TConstSetBitIterator_008980d0::TConstSetBitIterator_008980d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x008980d0
TConstSetBitIterator_008980d0& TConstSetBitIterator_008980d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_008980f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_008980f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_008980f0& operator++();
};

TConstSetBitIterator_008980f0::TConstSetBitIterator_008980f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x008980f0
TConstSetBitIterator_008980f0& TConstSetBitIterator_008980f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00898140 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00898140(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00898140& operator++();
};

TConstSetBitIterator_00898140::TConstSetBitIterator_00898140(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00898140
TConstSetBitIterator_00898140& TConstSetBitIterator_00898140::operator++()
{
    It.Advance();
    return *this;
}

void sub_00897b80();
// @baa 0x00898200
void sub_00898200(void) { sub_00897b80(); }

int sub_005c7a20(void);
extern undefined * g_01f4d688;
// @baa 0x00898210
undefined4 * UObject::sub_00898210(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f4d688);
  return param_1;
}

// @baa 0x00898230
IMPLEMENT_CLASS_AT(UPostProcessChain, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPostProcess.cpp", 8);

// @baa 0x008982a0
struct C_00899e30 {
    int sub_00899e30(int);
    int sub_00897e40(int, int);
};

// @baa 0x00899e30
int C_00899e30::sub_00899e30(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00899e30 *)(this))->sub_00897e40((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct TConstSetBitIterator_0089a100 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0089a100(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0089a100& operator++();
};

TConstSetBitIterator_0089a100::TConstSetBitIterator_0089a100(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0089a100
TConstSetBitIterator_0089a100& TConstSetBitIterator_0089a100::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0089a150 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0089a150(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0089a150& operator++();
};

TConstSetBitIterator_0089a150::TConstSetBitIterator_0089a150(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0089a150
TConstSetBitIterator_0089a150& TConstSetBitIterator_0089a150::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0089a260 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0089a260(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0089a260& operator++();
};

TConstSetBitIterator_0089a260::TConstSetBitIterator_0089a260(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0089a260
TConstSetBitIterator_0089a260& TConstSetBitIterator_0089a260::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0089a2b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0089a2b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0089a2b0& operator++();
};

TConstSetBitIterator_0089a2b0::TConstSetBitIterator_0089a2b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0089a2b0
TConstSetBitIterator_0089a2b0& TConstSetBitIterator_0089a2b0::operator++()
{
    It.Advance();
    return *this;
}

void sub_00899d70();
// @baa 0x0089c270
void sub_0089c270(void) { sub_00899d70(); }

struct C_0089c390 {
    void sub_0089c390();
    int sub_00899ec0(int);
};

// @baa 0x0089c390
void C_0089c390::sub_0089c390(void)
{
    int param_1 = (int)this;
  ((C_0089c390 *)((*(char **)((char *)this + 0x10))))->sub_00899ec0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0089c3d0 {
    undefined4 sub_0089c3d0(byte);
};

int sub_00553720(void);
// @baa 0x0089c3d0
undefined4 C_0089c3d0::sub_0089c3d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00553720();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_0089e280();
// @baa 0x0089f1f0
void sub_0089f1f0(void) { sub_0089e280(); }

struct C_0089f2c0 { C_0089f2c0* sub_0089f2c0(void); };

// @baa 0x0089f2c0
C_0089f2c0* C_0089f2c0::sub_0089f2c0(void) { return this; }

// Editor_1100000.cpp (part 1 of 2): 86 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_011005e0();
    int sub_011002d0(int);
};

// @baa 0x011005e0
void C::sub_011005e0(void)
{
    int param_1 = (int)this;
  ((C *)((*(char **)((char *)this + 0x10))))->sub_011002d0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_01100600 {
    int sub_01100600();
};

int sub_010d28c0(void);
// @baa 0x01100600
int C_01100600::sub_01100600(void)
{
    int param_1 = (int)this;

  sub_010d28c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01100e40 {
    int sub_01100e40();
};

// @baa 0x01100e40
int C_01100e40::sub_01100e40(void)
{
    int param_1 = (int)this;

  sub_010d28c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x011033c0
int sub_011033c0(int a0, int a1) { return a1; }

// @baa 0x011033d0
int sub_011033d0(int a0, int a1) { return a1; }

// @baa 0x01103400
undefined4 sub_01103400(byte param_1)
{
  if (((param_1 < 9) || (0xd < param_1)) && (param_1 != 0x20)) {
    return 0;
  }
  return 1;
}

// @baa 0x01103420
undefined4 sub_01103420(char param_1)
{
  if ((param_1 != '\r') && (param_1 != '\n')) {
    return 0;
  }
  return 1;
}

// @baa 0x01103440
bool sub_01103440(char param_1)
{
  return param_1 == ';';
}

struct C_01103590 {
    undefined4 sub_01103590();
};

// @baa 0x01103590
undefined4 C_01103590::sub_01103590(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  char cVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  do {
    cVar1 = *(char *)*param_1;
    *param_1 = (undefined4)((char *)*param_1 + 1);
    if (cVar1 == '\r') {
      return uVar2;
    }
  } while (cVar1 != '\n');
  return uVar2;
}

struct C_011035b0 {
    DWORD x;
    DWORD y;
    bool sub_011035b0();
};

// @baa 0x011035b0
bool C_011035b0::sub_011035b0()
{
    return x >= y;
}

struct C_01103930 {
    undefined4 sub_01103930();
};

// @baa 0x01103930
undefined4 C_01103930::sub_01103930(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 4);
}

struct C_01103940 { int sub_01103940(void); };

// @baa 0x01103940
int C_01103940::sub_01103940(void) { return *(int*)((char*)this + 4); }

struct C_01103950 { int sub_01103950(void); };

// @baa 0x01103950
int C_01103950::sub_01103950(void) { return *(int*)((char*)this + 4); }

struct C_01103980 { int a, b; C_01103980(int, int); };

// @baa 0x01103980
C_01103980::C_01103980(int x, int y) : a(x), b(y) {}

// @baa 0x011039a0
int sub_011039a0(int a0) { return *(int*)a0; }

// @baa 0x011039b0
bool sub_011039b0(int param_1, int param_2)
{
  return param_1 == param_2;
}

// @baa 0x01103a00
int sub_01103a00(int a0) { return *(int*)a0; }

struct C_01103a10 {
    void sub_01103a10(int *);
};

// @baa 0x01103a10
void C_01103a10::sub_01103a10(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 8;
  return;
}

struct C_01103a20 { int sub_01103a20(void); };

// @baa 0x01103a20
int C_01103a20::sub_01103a20(void) { return *(int*)((char*)this + 4); }

int sub_005eae70(...);
int sub_006ae990(void);
int sub_006d6500(...);
extern undefined4 g_026b0de4;
// @baa 0x01103a30
void sub_01103a30(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026b0de4 == 0) {
    g_026b0de4 = sub_006d6500(L"Engine");
    sub_006ae990();
  }
  sub_005eae70(g_026b0de4,param_1,param_2,param_3,param_4,param_5,1);
  return;
}

// @baa 0x01103ab0
void sub_01103ab0(void) {  }

struct C_01103ad0 { void sub_01103ad0(void); };

// @baa 0x01103ad0
void C_01103ad0::sub_01103ad0(void) { *(int*)((char*)this + 232) = 1; }

int sub_005e1960(...);
int sub_00bed450(void);
int sub_00bf4db0(...);
extern undefined4 g_026667a8;
extern undefined4 g_026c0598;
// @baa 0x01103ae0
void sub_01103ae0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026c0598 == 0) {
    g_026c0598 = sub_00bf4db0(L"Engine");
    sub_00bed450();
  }
  sub_005e1960(g_026c0598,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x01103b40
int sub_01103b40(int a0, int a1) { return a1; }

// @baa 0x01103b80
int sub_01103b80(int a0, int a1) { return a1; }

// @baa 0x01103ba0
int sub_01103ba0(int a0, int a1) { return a1; }

struct C_01103bc0 { int a, b, c; C_01103bc0(); };

// @baa 0x01103bc0
C_01103bc0::C_01103bc0() : a(0), b(0), c(0) {}

struct C_01103bd0 { int sub_01103bd0(void); };

// @baa 0x01103bd0
int C_01103bd0::sub_01103bd0(void) { return *(int*)((char*)this + 0); }

struct C_01103be0 { int sub_01103be0(void); };

// @baa 0x01103be0
int C_01103be0::sub_01103be0(void) { return *(int*)((char*)this + 0); }

struct E { BYTE Bytes[36]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_011048a0(INT Index);
};

// @baa 0x011048a0
E* S::sub_011048a0(INT Index)
{
    return &Items(Index);
}

struct S_011048f0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_011048f0(INT Index);
};

// @baa 0x011048f0
DWORD* S_011048f0::sub_011048f0(INT Index)
{
    return &Items(Index);
}

struct C_01104940{
int sub_01104940(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x01104940
int C_01104940::sub_01104940(undefined4*param_2)
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

struct C_011049a0 { int sub_011049a0(void); };

// @baa 0x011049a0
int C_011049a0::sub_011049a0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_011049b0 {
    int sub_011049b0(int);
};

// @baa 0x011049b0
int C_011049b0::sub_011049b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_011049c0 {
    int sub_011049c0(int);
};

// @baa 0x011049c0
int C_011049c0::sub_011049c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x011049d0
void __stdcall sub_011049d0(int a0, int a1) {  }

struct C_011049e0 {
    int sub_011049e0(int);
};

// @baa 0x011049e0
int C_011049e0::sub_011049e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_011049f0 {
    int sub_011049f0();
};

// @baa 0x011049f0
int C_011049f0::sub_011049f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01104a10 {
    int sub_01104a10();
};

// @baa 0x01104a10
int C_01104a10::sub_01104a10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01104a60 {
    int sub_01104a60(int);
};

// @baa 0x01104a60
int C_01104a60::sub_01104a60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_01104aa0 {
    int sub_01104aa0(int);
};

// @baa 0x01104aa0
int C_01104aa0::sub_01104aa0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x7c + *param_1;
}

struct C_01104ab0 {
    int sub_01104ab0(int);
};

// @baa 0x01104ab0
int C_01104ab0::sub_01104ab0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x7c + *param_1;
}

struct C_01104ac0 {
    int sub_01104ac0();
};

// @baa 0x01104ac0
int C_01104ac0::sub_01104ac0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01104ae0 {
    int sub_01104ae0();
};

// @baa 0x01104ae0
int C_01104ae0::sub_01104ae0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_01104af0 {
    int sub_01104af0();
};

// @baa 0x01104af0
int C_01104af0::sub_01104af0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01104b10 {
    int sub_01104b10();
};

// @baa 0x01104b10
int C_01104b10::sub_01104b10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_01104b20 {
    int sub_01104b20(int);
};

// @baa 0x01104b20
int C_01104b20::sub_01104b20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x7c + *param_1;
}

struct E_01104b30 { BYTE Bytes[124]; };

struct S_01104b30 {
    TArray<E_01104b30> Items; // 0x00
    E_01104b30* sub_01104b30(INT Index);
};

// @baa 0x01104b30
E_01104b30* S_01104b30::sub_01104b30(INT Index)
{
    return &Items(Index);
}

// @baa 0x01104cc0
void __stdcall sub_01104cc0(int a0, int a1) {  }

struct C_01107320 {
    int sub_01107320();
};

// @baa 0x01107320
int C_01107320::sub_01107320(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01107340 {
    int sub_01107340();
};

// @baa 0x01107340
int C_01107340::sub_01107340(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

extern TArray<int> g_026a1ca4;
struct C_01107360 {
    int sub_01107360();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x01107360
int C_01107360::sub_01107360()
{
    return g_026a1ca4(Index);
}

struct C_01107470 {
    int sub_01107470();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x01107470
int C_01107470::sub_01107470()
{
    return g_026a1ca4(Index);
}

struct C_011074d0 {
    int sub_011074d0();
};

// @baa 0x011074d0
int C_011074d0::sub_011074d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_011074e0 {
    int sub_011074e0(int);
};

// @baa 0x011074e0
int C_011074e0::sub_011074e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x7c + *param_1;
}

struct C_01107550 {
    int sub_01107550();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x01107550
int C_01107550::sub_01107550()
{
    return g_026a1ca4(Index);
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

struct TConstSetBitIterator_011075f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_011075f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_011075f0& operator++();
};

TConstSetBitIterator_011075f0::TConstSetBitIterator_011075f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x011075f0
TConstSetBitIterator_011075f0& TConstSetBitIterator_011075f0::operator++()
{
    It.Advance();
    return *this;
}

struct C_01107690 {
    int sub_01107690(int);
};

// @baa 0x01107690
int C_01107690::sub_01107690(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x7c + *param_1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_011076a0 { void* Data; int Num; int Max; void sub_011076a0(); };

// @baa 0x011076a0
void C_011076a0::sub_011076a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct TConstSetBitIterator_01107700 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01107700(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01107700& operator++();
};

TConstSetBitIterator_01107700::TConstSetBitIterator_01107700(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01107700
TConstSetBitIterator_01107700& TConstSetBitIterator_01107700::operator++()
{
    It.Advance();
    return *this;
}

struct C_01107720 {
    int sub_01107720();
};

// @baa 0x01107720
int C_01107720::sub_01107720(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x7c + *(int *)*param_1;
}

struct TConstSetBitIterator_01107890 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01107890(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01107890& operator++();
};

TConstSetBitIterator_01107890::TConstSetBitIterator_01107890(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01107890
TConstSetBitIterator_01107890& TConstSetBitIterator_01107890::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_011078b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_011078b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_011078b0& operator++();
};

TConstSetBitIterator_011078b0::TConstSetBitIterator_011078b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x011078b0
TConstSetBitIterator_011078b0& TConstSetBitIterator_011078b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_011078d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_011078d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_011078d0& operator++();
};

TConstSetBitIterator_011078d0::TConstSetBitIterator_011078d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x011078d0
TConstSetBitIterator_011078d0& TConstSetBitIterator_011078d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01107920 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01107920(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01107920& operator++();
};

TConstSetBitIterator_01107920::TConstSetBitIterator_01107920(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01107920
TConstSetBitIterator_01107920& TConstSetBitIterator_01107920::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01107970 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01107970(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01107970& operator++();
};

TConstSetBitIterator_01107970::TConstSetBitIterator_01107970(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01107970
TConstSetBitIterator_01107970& TConstSetBitIterator_01107970::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_011079c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_011079c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_011079c0& operator++();
};

TConstSetBitIterator_011079c0::TConstSetBitIterator_011079c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x011079c0
TConstSetBitIterator_011079c0& TConstSetBitIterator_011079c0::operator++()
{
    It.Advance();
    return *this;
}

struct A_0110ed20 { virtual void sub_0110edd0(); char pad[96]; };

struct B_0110ed20 { virtual void sub_0110edd0(); };

struct C_0110ed20 : A_0110ed20, B_0110ed20 { virtual void sub_0110edd0(); C_0110ed20(); };

C_0110ed20::C_0110ed20() {}

// @baa 0x0110ed20
void C_0110ed20::sub_0110edd0() {}

int sub_005c7a70(...);
int sub_0110ed30(void);
// @baa 0x0110edd0
undefined4 URFMODSoundFactory::sub_0110edd0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0110ed30();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x6c);
  }
  return param_1;
}

struct TConstSetBitIterator_0110edf0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0110edf0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0110edf0& operator++();
};

TConstSetBitIterator_0110edf0::TConstSetBitIterator_0110edf0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0110edf0
TConstSetBitIterator_0110edf0& TConstSetBitIterator_0110edf0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0110ee50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0110ee50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0110ee50& operator++();
};

TConstSetBitIterator_0110ee50::TConstSetBitIterator_0110ee50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0110ee50
TConstSetBitIterator_0110ee50& TConstSetBitIterator_0110ee50::operator++()
{
    It.Advance();
    return *this;
}

struct C_0110ee70 {
    int sub_0110ee70();
};

// @baa 0x0110ee70
int C_0110ee70::sub_0110ee70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x7c + *(int *)*param_1;
}

struct C_0110ee80 {
    int sub_0110ee80();
};

// @baa 0x0110ee80
int C_0110ee80::sub_0110ee80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x7c + 8 + *(int *)*param_1;
}

struct C_0110ee90 {
    void sub_0110ee90();
    int sub_011084d0(int);
};

// @baa 0x0110ee90
void C_0110ee90::sub_0110ee90(void)
{
    int param_1 = (int)this;
  ((C_0110ee90 *)((*(char **)((char *)this + 0x10))))->sub_011084d0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0110ef10 {
    undefined4 * sub_0110ef10(int *);
    int sub_01108720(int);
};

// @baa 0x0110ef10
undefined4 * C_0110ef10::sub_0110ef10(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  ((C_0110ef10 *)(((char *)this + 8)))->sub_01108720(param_2[1]);
  return param_1;
}

struct C_0110ef40 {
    undefined4 * sub_0110ef40(int *);
    int sub_01108720(int);
};

// @baa 0x0110ef40
undefined4 * C_0110ef40::sub_0110ef40(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  ((C_0110ef40 *)(((char *)this + 8)))->sub_01108720(param_2[1]);
  param_1[0x1d] = 0xffffffff;
  return param_1;
}

struct C_0110ef70 {
    undefined4 sub_0110ef70(byte);
    int sub_01108060();
};

int sub_0053dfa0(...);
// @baa 0x0110ef70
undefined4 C_0110ef70::sub_0110ef70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0110ef70 *)(((char *)this + 8)))->sub_01108060();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_0110f0e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0110f0e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0110f0e0& operator++();
};

TConstSetBitIterator_0110f0e0::TConstSetBitIterator_0110f0e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0110f0e0
TConstSetBitIterator_0110f0e0& TConstSetBitIterator_0110f0e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0110f3b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0110f3b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0110f3b0& operator++();
};

TConstSetBitIterator_0110f3b0::TConstSetBitIterator_0110f3b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0110f3b0
TConstSetBitIterator_0110f3b0& TConstSetBitIterator_0110f3b0::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x0110f6a0
UStripSourceCommandlet::UStripSourceCommandlet()
{
    if (!(*(QWORD*)&ObjectFlags & 0x200)) AddToRoot();
}

// @baa 0x0110f700
int sub_0110f700(void);
// @baa 0x0110f760
undefined4 UStripSourceCommandlet::sub_0110f760(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0110f700();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x70);
  }
  return param_1;
}

// @baa 0x0110f780
USetMaterialUsageCommandlet::USetMaterialUsageCommandlet()
{
    if (!(*(QWORD*)&ObjectFlags & 0x200)) AddToRoot();
}

// @baa 0x0110f7e0
int sub_0110f7e0(void);
// @baa 0x0110f840
undefined4 USetMaterialUsageCommandlet::sub_0110f840(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0110f7e0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x70);
  }
  return param_1;
}

struct S011035c0 {
    INT A;
    INT B;
    INT C;

    S011035c0& sub_011035c0(INT A_, INT B_, INT C_);
    static void KeepAlive();
};

// @baa 0x011035c0
S011035c0& S011035c0::sub_011035c0(INT A_, INT B_, INT C_)
{
    A = A_;
    B = B_;
    C = C_;
    return *this;
}

void S011035c0::KeepAlive()
{
    S011035c0 S;
    S.sub_011035c0(0, 0, 0);
}

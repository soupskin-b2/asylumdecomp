// Engine_0680000.cpp (part 1 of 7): 290 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_00680010(); };

// @baa 0x00680010
void C::sub_00680010() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00680070 {
    void sub_00680070(int);
};

int sub_0053df70(...);
// @baa 0x00680070
void C_00680070::sub_00680070(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x50,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_006800b0 { void* Data; int Num; int Max; void sub_006800b0(); };

// @baa 0x006800b0
void C_006800b0::sub_006800b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00680110 { void* Data; int Num; int Max; void sub_00680110(); };

// @baa 0x00680110
void C_00680110::sub_00680110() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
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

struct TConstSetBitIterator_00680170 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00680170(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00680170& operator++();
};

TConstSetBitIterator_00680170::TConstSetBitIterator_00680170(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00680170
TConstSetBitIterator_00680170& TConstSetBitIterator_00680170::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00680190 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00680190(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00680190& operator++();
};

TConstSetBitIterator_00680190::TConstSetBitIterator_00680190(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00680190
TConstSetBitIterator_00680190& TConstSetBitIterator_00680190::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006801b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006801b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006801b0& operator++();
};

TConstSetBitIterator_006801b0::TConstSetBitIterator_006801b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006801b0
TConstSetBitIterator_006801b0& TConstSetBitIterator_006801b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006801d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006801d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006801d0& operator++();
};

TConstSetBitIterator_006801d0::TConstSetBitIterator_006801d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006801d0
TConstSetBitIterator_006801d0& TConstSetBitIterator_006801d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006801f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006801f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006801f0& operator++();
};

TConstSetBitIterator_006801f0::TConstSetBitIterator_006801f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006801f0
TConstSetBitIterator_006801f0& TConstSetBitIterator_006801f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00680210 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00680210(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00680210& operator++();
};

TConstSetBitIterator_00680210::TConstSetBitIterator_00680210(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00680210
TConstSetBitIterator_00680210& TConstSetBitIterator_00680210::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00680230 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00680230(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00680230& operator++();
};

TConstSetBitIterator_00680230::TConstSetBitIterator_00680230(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00680230
TConstSetBitIterator_00680230& TConstSetBitIterator_00680230::operator++()
{
    It.Advance();
    return *this;
}

struct C_00680250 {
    int sub_00680250();
};

// @baa 0x00680250
int C_00680250::sub_00680250(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

struct TConstSetBitIterator_00680260 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00680260(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00680260& operator++();
};

TConstSetBitIterator_00680260::TConstSetBitIterator_00680260(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00680260
TConstSetBitIterator_00680260& TConstSetBitIterator_00680260::operator++()
{
    It.Advance();
    return *this;
}

struct C_00680280 {
    int sub_00680280();
};

// @baa 0x00680280
int C_00680280::sub_00680280(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

struct TConstSetBitIterator_00680290 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00680290(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00680290& operator++();
};

TConstSetBitIterator_00680290::TConstSetBitIterator_00680290(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00680290
TConstSetBitIterator_00680290& TConstSetBitIterator_00680290::operator++()
{
    It.Advance();
    return *this;
}

struct C_006802b0 {
    int sub_006802b0();
};

// @baa 0x006802b0
int C_006802b0::sub_006802b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

struct TConstSetBitIterator_00680430 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00680430(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00680430& operator++();
};

TConstSetBitIterator_00680430::TConstSetBitIterator_00680430(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00680430
TConstSetBitIterator_00680430& TConstSetBitIterator_00680430::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00680480 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00680480(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00680480& operator++();
};

TConstSetBitIterator_00680480::TConstSetBitIterator_00680480(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00680480
TConstSetBitIterator_00680480& TConstSetBitIterator_00680480::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006804d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006804d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006804d0& operator++();
};

TConstSetBitIterator_006804d0::TConstSetBitIterator_006804d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006804d0
TConstSetBitIterator_006804d0& TConstSetBitIterator_006804d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00680520 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00680520(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00680520& operator++();
};

TConstSetBitIterator_00680520::TConstSetBitIterator_00680520(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00680520
TConstSetBitIterator_00680520& TConstSetBitIterator_00680520::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00680570 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00680570(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00680570& operator++();
};

TConstSetBitIterator_00680570::TConstSetBitIterator_00680570(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00680570
TConstSetBitIterator_00680570& TConstSetBitIterator_00680570::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006805c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006805c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006805c0& operator++();
};

TConstSetBitIterator_006805c0::TConstSetBitIterator_006805c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006805c0
TConstSetBitIterator_006805c0& TConstSetBitIterator_006805c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00680610 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00680610(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00680610& operator++();
};

TConstSetBitIterator_00680610::TConstSetBitIterator_00680610(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00680610
TConstSetBitIterator_00680610& TConstSetBitIterator_00680610::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00680660 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00680660(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00680660& operator++();
};

TConstSetBitIterator_00680660::TConstSetBitIterator_00680660(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00680660
TConstSetBitIterator_00680660& TConstSetBitIterator_00680660::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006806b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006806b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006806b0& operator++();
};

TConstSetBitIterator_006806b0::TConstSetBitIterator_006806b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006806b0
TConstSetBitIterator_006806b0& TConstSetBitIterator_006806b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00680700 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00680700(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00680700& operator++();
};

TConstSetBitIterator_00680700::TConstSetBitIterator_00680700(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00680700
TConstSetBitIterator_00680700& TConstSetBitIterator_00680700::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00680720 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00680720(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00680720& operator++();
};

TConstSetBitIterator_00680720::TConstSetBitIterator_00680720(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00680720
TConstSetBitIterator_00680720& TConstSetBitIterator_00680720::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00680740 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00680740(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00680740& operator++();
};

TConstSetBitIterator_00680740::TConstSetBitIterator_00680740(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00680740
TConstSetBitIterator_00680740& TConstSetBitIterator_00680740::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00680790 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00680790(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00680790& operator++();
};

TConstSetBitIterator_00680790::TConstSetBitIterator_00680790(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00680790
TConstSetBitIterator_00680790& TConstSetBitIterator_00680790::operator++()
{
    It.Advance();
    return *this;
}

void sub_00675860();
// @baa 0x00680b90
void sub_00680b90(void) { sub_00675860(); }

void sub_00675920();
// @baa 0x00680ba0
void sub_00680ba0(void) { sub_00675920(); }

void sub_00675980();
// @baa 0x00680bb0
void sub_00680bb0(void) { sub_00675980(); }

void sub_006759e0();
// @baa 0x00680bc0
void sub_00680bc0(void) { sub_006759e0(); }

void sub_00675a50();
// @baa 0x00680be0
void sub_00680be0(void) { sub_00675a50(); }

void sub_00675ab0();
// @baa 0x00680bf0
void sub_00680bf0(void) { sub_00675ab0(); }

void sub_00675b80();
// @baa 0x00680c00
void sub_00680c00(void) { sub_00675b80(); }

void sub_00675be0();
// @baa 0x00680c10
void sub_00680c10(void) { sub_00675be0(); }

void sub_00675c40();
// @baa 0x00680c20
void sub_00680c20(void) { sub_00675c40(); }

extern "C" int __cdecl sub_0053df40(int Size, int Alignment);
struct FGameplayObject
{
    FGameplayObject * sub_00673290();
};

// @baa 0x00680dd0
FGameplayObject * sub_00680dd0()
{
    FGameplayObject * pObject = (FGameplayObject *)sub_0053df40(0x60, 8);
    if (pObject)
        return pObject->sub_00673290();
    return 0;
}

struct C_00680f00 {
    void sub_00680f00();
};

// @baa 0x00680f00
void C_00680f00::sub_00680f00(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

struct C_006826d0 {
    undefined4 sub_006826d0(byte);
};

int sub_0053dfa0(...);
int sub_00673790(void);
// @baa 0x006826d0
undefined4 C_006826d0::sub_006826d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00673790();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_0067ac40();
// @baa 0x00683510
void sub_00683510(void) { sub_0067ac40(); }

// @baa 0x006835b0
void __stdcall sub_006835b0(int a0) {  }

// @baa 0x006835c0
void __stdcall sub_006835c0(int a0) {  }

// @baa 0x006835d0
void __stdcall sub_006835d0(int a0, int a1) {  }

// @baa 0x006835e0
void __stdcall sub_006835e0(int a0, int a1, int a2, int a3, int a4) {  }

// @baa 0x006835f0
void __stdcall sub_006835f0(int a0, int a1, int a2, int a3) {  }

// @baa 0x00683600
void __stdcall sub_00683600(int a0) {  }

// @baa 0x00683610
void __stdcall sub_00683610(int a0, int a1, int a2) {  }

// @baa 0x00683650
int sub_00683650(void) { return 1; }

// @baa 0x00683660
void __stdcall sub_00683660(int a0) {  }

// @baa 0x00683670
void sub_00683670(void) {  }

// @baa 0x00683680
int __stdcall sub_00683680(int a0) { return 1; }

// @baa 0x00683690
int sub_00683690(void) { return 0; }

// @baa 0x006836a0
int sub_006836a0(void) { return 0; }

// @baa 0x006836b0
int sub_006836b0(void) { return 1690; }

// @baa 0x006836c0
int ULensFlare::sub_006836c0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 4;
}

// @baa 0x006836d0
int ULensFlare::sub_006836d0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 0x18;
}

// @baa 0x006836e0
int ULensFlare::sub_006836e0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 0x1c;
}

// @baa 0x00683700
int ULensFlare::sub_00683700(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 0x14;
}

// @baa 0x00683710
int ULensFlare::sub_00683710(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) << 5;
}

// @baa 0x00683720
int ULensFlare::sub_00683720(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 0x1c;
}

// @baa 0x00683740
int ULensFlare::sub_00683740(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4;
}

// @baa 0x00683750
int ULensFlare::sub_00683750(void)
{
    int param_1 = (int)this;

  return ((*(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xa8)) * 7 + *(int *)(param_1 + 0xc0) * 8 +
          *(int *)(param_1 + 0xb4) * 5 + *(int *)(param_1 + 0x9c) * 6 + *(int *)(param_1 + 0x84)) *
         4;
}

// @baa 0x00683790
int ULensFlare::sub_00683790(void)
{
    int param_1 = (int)this;

  return ((*(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xa8)) * 7 + *(int *)(param_1 + 0xc0) * 8 +
          *(int *)(param_1 + 0xb4) * 5 + *(int *)(param_1 + 0x9c) * 6 + *(int *)(param_1 + 0x84)) *
         4 + 0xd0;
}

struct C_00684b40 {
    undefined4 sub_00684b40();
};

// @baa 0x00684b40
undefined4 C_00684b40::sub_00684b40(void)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x00684d00
int sub_00684d00(void) { return 1690; }

struct C_00684d10 { int sub_00684d10(void); };

// @baa 0x00684d10
int C_00684d10::sub_00684d10(void) { return *(int*)((char*)this + 4); }

struct T_00684d20 { int x; };

// @baa 0x00684d20
template const T_00684d20& TIndirectArray<T_00684d20>::operator()(INT) const;

struct C_00684db0 { int sub_00684db0(void); };

// @baa 0x00684db0
int C_00684db0::sub_00684db0(void) { return *(int*)((char*)this + 4); }

struct C_00684dc0 { int sub_00684dc0(void); };

// @baa 0x00684dc0
int C_00684dc0::sub_00684dc0(void) { return *(int*)((char*)this + 4); }

struct C_00684dd0 { int sub_00684dd0(void); };

// @baa 0x00684dd0
int C_00684dd0::sub_00684dd0(void) { return *(int*)((char*)this + 4); }

struct C_00684de0 {
    int sub_00684de0();
};

// @baa 0x00684de0
int C_00684de0::sub_00684de0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 0x60;
}

struct C_00684df0 { int sub_00684df0(void); };

// @baa 0x00684df0
int C_00684df0::sub_00684df0(void) { return *(int*)((char*)this + 4); }

struct C_00684e00 { int sub_00684e00(void); };

// @baa 0x00684e00
int C_00684e00::sub_00684e00(void) { return *(int*)((char*)this + 0); }

struct C_00684e80 { int sub_00684e80(void); };

// @baa 0x00684e80
int C_00684e80::sub_00684e80(void) { return *(int*)((char*)this + 0); }

struct C_00684eb0 {
    int sub_00684eb0();
};

// @baa 0x00684eb0
int C_00684eb0::sub_00684eb0(void)
{
    int param_1 = (int)this;

  return ((*(int *)(param_1 + 0x104) + *(int *)(param_1 + 0xec) + *(int *)(param_1 + 0xcc) +
          *(int *)(param_1 + 0xa8)) * 7 +
          (*(int *)(param_1 + 0xe0) * 3 + *(int *)(param_1 + 0xf8) + *(int *)(param_1 + 0xc0)) * 8 +
          *(int *)(param_1 + 0xb4) * 5 + *(int *)(param_1 + 0x9c) * 6 + *(int *)(param_1 + 0x84)) *
         4;
}

struct C_00684f10{
int sub_00684f10(int*);
};

int sub_0053d240(...);
// @baa 0x00684f10
int C_00684f10::sub_00684f10(int*param_2)
{
int*param_1=(int*)this;

int*piVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
piVar1=(int*)(*param_1+iVar2*4);
if(piVar1!=(int*)0x0){
iVar3=*param_2;
*piVar1=iVar3;
if(iVar3!=0){
*(int*)(iVar3+4)=*(int*)(iVar3+4)+1;
}
}
return iVar2;
}

struct E { BYTE Bytes[60]; };

struct S {
    TArray<E> Items; // 0x00
    const E* sub_00684f70(INT Index) const;
};

// @baa 0x00684f70
const E* S::sub_00684f70(INT Index) const
{
    return &Items(Index);
}

struct C_00685030 { int a, b; C_00685030(int, int); };

// @baa 0x00685030
C_00685030::C_00685030(int x, int y) : a(x), b(y) {}

extern undefined4 g_026af518;
extern undefined4 g_026af51c;
extern undefined4 g_026af520;
// @baa 0x00685050
undefined * sub_00685050(void)
{
  if ((g_026af520 & 1) == 0) {
    g_026af520 = g_026af520 | 1;
    g_026af518 = 0;
    g_026af51c = (undefined4)(L"HHitProxy");
  }
  return (undefined *)(&g_026af518);
}

struct S_00685080 {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x00685080
void sub_00685080(S_00685080* p, INT Value)
{
    p->vf_18(Value);
}

extern undefined4 g_026af524;
extern undefined4 g_026af528;
extern undefined4 g_026af52c;
// @baa 0x006850a0
undefined * sub_006850a0(void)
{
  if ((g_026af52c & 1) == 0) {
    g_026af52c = g_026af52c | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026af524 = (undefined4)(&g_026af518);
    g_026af528 = (undefined4)(L"HActorComplex");
  }
  return (undefined *)(&g_026af524);
}

// @baa 0x00685140
int sub_00685140(void) { return 3; }

int sub_00684eb0(void);
// @baa 0x00685790
int sub_00685790(void)
{
  int iVar1;
  
  iVar1 = sub_00684eb0();
  return iVar1 + 0x110;
}

int sub_00685150(void);
// @baa 0x006857a0
undefined4 UObject::sub_006857a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00685150();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006864c0 {
    undefined4 * sub_006864c0();
};

int sub_0067e520(void);
extern undefined4 g_01ebc994;
extern undefined * g_01ebc99c;
// @baa 0x006864c0
undefined4 * C_006864c0::sub_006864c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067e520();
  *param_1 = (undefined4)(&g_01ebc99c);
  param_1[5] = (undefined4)(&g_01ebc994);
  return param_1;
}

struct FGameplayObject_006864e0
{
    FGameplayObject_006864e0 * sub_00675130();
};

// @baa 0x006864e0
FGameplayObject_006864e0 * sub_006864e0()
{
    FGameplayObject_006864e0 * pObject = (FGameplayObject_006864e0 *)sub_0053df40(0x7c, 8);
    if (pObject)
        return pObject->sub_00675130();
    return 0;
}

struct C_view {
    int sub_0065a620(int, int, int);
};

// @baa 0x006865d0
void UTexture2D::sub_006865d0(int param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) != param_2) {
    *(int *)(param_1 + 0x74) = param_2;
    ((C_view *)(this))->sub_0065a620(0, param_2, 0x10);
  }
  return;
}

struct C_00686900 { C_00686900* sub_00686900(void); };

// @baa 0x00686900
C_00686900* C_00686900::sub_00686900(void) { return this; }

struct C_00686910 { C_00686910* sub_00686910(void); };

// @baa 0x00686910
C_00686910* C_00686910::sub_00686910(void) { return this; }

struct C_00686920 { C_00686920* sub_00686920(void); };

// @baa 0x00686920
C_00686920* C_00686920::sub_00686920(void) { return this; }

struct C_00686930 { C_00686930* sub_00686930(void); };

// @baa 0x00686930
C_00686930* C_00686930::sub_00686930(void) { return this; }

struct C_00686940 { void sub_0067e5d0(int); C_00686940 *sub_00686940(int); };

// @baa 0x00686940
C_00686940 *C_00686940::sub_00686940(int a) { sub_0067e5d0(a); return this; }

struct C_00686960 { void sub_0067e660(int); C_00686960 *sub_00686960(int); };

// @baa 0x00686960
C_00686960 *C_00686960::sub_00686960(int a) { sub_0067e660(a); return this; }

struct C_00686980 { void sub_0067e710(int); C_00686980 *sub_00686980(int); };

// @baa 0x00686980
C_00686980 *C_00686980::sub_00686980(int a) { sub_0067e710(a); return this; }

struct C_006869a0 { void sub_0067e7b0(int); C_006869a0 *sub_006869a0(int); };

// @baa 0x006869a0
C_006869a0 *C_006869a0::sub_006869a0(int a) { sub_0067e7b0(a); return this; }

struct C_006869c0 { void sub_00680950(int); C_006869c0 *sub_006869c0(int); };

// @baa 0x006869c0
C_006869c0 *C_006869c0::sub_006869c0(int a) { sub_00680950(a); return this; }

struct C_006869e0 { void sub_00680a60(int); C_006869e0 *sub_006869e0(int); };

// @baa 0x006869e0
C_006869e0 *C_006869e0::sub_006869e0(int a) { sub_00680a60(a); return this; }

struct FGameplayObject_00686a00
{
    FGameplayObject_00686a00 * sub_0067e900();
};

// @baa 0x00686a00
FGameplayObject_00686a00 * sub_00686a00()
{
    FGameplayObject_00686a00 * pObject = (FGameplayObject_00686a00 *)sub_0053df40(0x118, 8);
    if (pObject)
        return pObject->sub_0067e900();
    return 0;
}

struct FGameplayObject_00686a20
{
    FGameplayObject_00686a20 * sub_0067e9c0();
};

// @baa 0x00686a20
FGameplayObject_00686a20 * sub_00686a20()
{
    FGameplayObject_00686a20 * pObject = (FGameplayObject_00686a20 *)sub_0053df40(0x198, 8);
    if (pObject)
        return pObject->sub_0067e9c0();
    return 0;
}

struct FGameplayObject_00686a40
{
    FGameplayObject_00686a40 * sub_0067ea90();
};

// @baa 0x00686a40
FGameplayObject_00686a40 * sub_00686a40()
{
    FGameplayObject_00686a40 * pObject = (FGameplayObject_00686a40 *)sub_0053df40(0x1d8, 8);
    if (pObject)
        return pObject->sub_0067ea90();
    return 0;
}

struct FGameplayObject_00686a60
{
    FGameplayObject_00686a60 * sub_0067eb60();
};

// @baa 0x00686a60
FGameplayObject_00686a60 * sub_00686a60()
{
    FGameplayObject_00686a60 * pObject = (FGameplayObject_00686a60 *)sub_0053df40(0xd8, 8);
    if (pObject)
        return pObject->sub_0067eb60();
    return 0;
}

struct FGameplayObject_00686a80
{
    FGameplayObject_00686a80 * sub_0067ec20();
};

// @baa 0x00686a80
FGameplayObject_00686a80 * sub_00686a80()
{
    FGameplayObject_00686a80 * pObject = (FGameplayObject_00686a80 *)sub_0053df40(0xf8, 8);
    if (pObject)
        return pObject->sub_0067ec20();
    return 0;
}

struct FGameplayObject_00686aa0
{
    FGameplayObject_00686aa0 * sub_0067ece0();
};

// @baa 0x00686aa0
FGameplayObject_00686aa0 * sub_00686aa0()
{
    FGameplayObject_00686aa0 * pObject = (FGameplayObject_00686aa0 *)sub_0053df40(0x138, 8);
    if (pObject)
        return pObject->sub_0067ece0();
    return 0;
}

struct FGameplayObject_00686ac0
{
    FGameplayObject_00686ac0 * sub_0067edb0();
};

// @baa 0x00686ac0
FGameplayObject_00686ac0 * sub_00686ac0()
{
    FGameplayObject_00686ac0 * pObject = (FGameplayObject_00686ac0 *)sub_0053df40(0xd8, 8);
    if (pObject)
        return pObject->sub_0067edb0();
    return 0;
}

struct FGameplayObject_00686ae0
{
    FGameplayObject_00686ae0 * sub_0067ee70();
};

// @baa 0x00686ae0
FGameplayObject_00686ae0 * sub_00686ae0()
{
    FGameplayObject_00686ae0 * pObject = (FGameplayObject_00686ae0 *)sub_0053df40(0xf8, 8);
    if (pObject)
        return pObject->sub_0067ee70();
    return 0;
}

struct FGameplayObject_00686b00
{
    FGameplayObject_00686b00 * sub_0067ef30();
};

// @baa 0x00686b00
FGameplayObject_00686b00 * sub_00686b00()
{
    FGameplayObject_00686b00 * pObject = (FGameplayObject_00686b00 *)sub_0053df40(0x138, 8);
    if (pObject)
        return pObject->sub_0067ef30();
    return 0;
}

struct C_00686b20 { C_00686b20* sub_00686b20(void); };

// @baa 0x00686b20
C_00686b20* C_00686b20::sub_00686b20(void) { return this; }

struct FGameplayObject_00686b30
{
    FGameplayObject_00686b30 * sub_0067f000();
};

// @baa 0x00686b30
FGameplayObject_00686b30 * sub_00686b30()
{
    FGameplayObject_00686b30 * pObject = (FGameplayObject_00686b30 *)sub_0053df40(0x5c, 8);
    if (pObject)
        return pObject->sub_0067f000();
    return 0;
}

struct FGameplayObject_00686b50
{
    FGameplayObject_00686b50 * sub_0067f060();
};

// @baa 0x00686b50
FGameplayObject_00686b50 * sub_00686b50()
{
    FGameplayObject_00686b50 * pObject = (FGameplayObject_00686b50 *)sub_0053df40(0x60, 8);
    if (pObject)
        return pObject->sub_0067f060();
    return 0;
}

struct FGameplayObject_00686b70
{
    FGameplayObject_00686b70 * sub_0067f0c0();
};

// @baa 0x00686b70
FGameplayObject_00686b70 * sub_00686b70()
{
    FGameplayObject_00686b70 * pObject = (FGameplayObject_00686b70 *)sub_0053df40(0x5c, 8);
    if (pObject)
        return pObject->sub_0067f0c0();
    return 0;
}

struct FGameplayObject_00687510
{
    FGameplayObject_00687510 * sub_0067f140();
};

// @baa 0x00687510
FGameplayObject_00687510 * sub_00687510()
{
    FGameplayObject_00687510 * pObject = (FGameplayObject_00687510 *)sub_0053df40(0x54, 8);
    if (pObject)
        return pObject->sub_0067f140();
    return 0;
}

struct FGameplayObject_00687530
{
    FGameplayObject_00687530 * sub_0067e520();
};

// @baa 0x00687530
FGameplayObject_00687530 * sub_00687530()
{
    FGameplayObject_00687530 * pObject = (FGameplayObject_00687530 *)sub_0053df40(0x88, 8);
    if (pObject)
        return pObject->sub_0067e520();
    return 0;
}

struct FGameplayObject_006875b0
{
    FGameplayObject_006875b0 * sub_0067f1e0();
};

// @baa 0x006875b0
FGameplayObject_006875b0 * sub_006875b0()
{
    FGameplayObject_006875b0 * pObject = (FGameplayObject_006875b0 *)sub_0053df40(0x88, 8);
    if (pObject)
        return pObject->sub_0067f1e0();
    return 0;
}

struct C_view_006877a0 {
    int sub_0067f3f0(int, int);
};

// @baa 0x006877a0
int UTexture2D::sub_006877a0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_006877a0 *)(this))->sub_0067f3f0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x28;
  }
  return 0;
}

// @baa 0x006877d0
void __stdcall sub_006877d0(int a0, int a1) {  }

// @baa 0x006877e0
void UTexture2D::sub_006877e0(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

struct C_00687910 {
    void sub_00687910(undefined4);
};

int sub_00716170(...);
// @baa 0x00687910
void C_00687910::sub_00687910(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00716170(param_2,param_1);
  return;
}

struct C_view_00687930 {
    int sub_0073f030(int);
};

int sub_007161b0(...);
int sub_00a49bb0(...);
// @baa 0x00687930
undefined4 UTexture2D::sub_00687930(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view_00687930 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  sub_00a49bb0(param_2,param_1 + 0x54);
  sub_007161b0(param_2,param_1 + 0xc0);
  return uVar1;
}

struct A_00687970 { virtual void sub_0068b3f0(); char pad[16]; };

struct B_00687970 { virtual void sub_0068b3f0(); };

struct C_00687970 : A_00687970, B_00687970 { virtual void sub_0068b3f0(); C_00687970(); };

C_00687970::C_00687970() {}

// @baa 0x00687970
void C_00687970::sub_0068b3f0() {}

struct C_00687b50 {
    void sub_00687b50(undefined4);
};

// @baa 0x00687b50
void C_00687b50::sub_00687b50(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007161b0(param_2,param_1);
  return;
}

struct C_view_00687b70 {
    int sub_0073f030(int);
};

// @baa 0x00687b70
undefined4 UTexture2D::sub_00687b70(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view_00687b70 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  sub_007161b0(param_2,param_1 + 0x52);
  sub_00a49bb0(param_2,param_1 + 0x58);
  sub_007161b0(param_2,param_1 + 0xc4);
  return uVar1;
}

struct A_00687bc0 { virtual void sub_0068b410(); char pad[16]; };

struct B_00687bc0 { virtual void sub_0068b410(); };

struct C_00687bc0 : A_00687bc0, B_00687bc0 { virtual void sub_0068b410(); C_00687bc0(); };

C_00687bc0::C_00687bc0() {}

// @baa 0x00687bc0
void C_00687bc0::sub_0068b410() {}

struct C_view_00687da0 {
    int sub_0073f030(int);
};

// @baa 0x00687da0
undefined4 UTexture2D::sub_00687da0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view_00687da0 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  sub_00a49bb0(param_2,param_1 + 0x54);
  sub_007161b0(param_2,param_1 + 0xc0);
  return uVar1;
}

struct A_00687de0 { virtual void sub_0068b430(); char pad[16]; };

struct B_00687de0 { virtual void sub_0068b430(); };

struct C_00687de0 : A_00687de0, B_00687de0 { virtual void sub_0068b430(); C_00687de0(); };

C_00687de0::C_00687de0() {}

// @baa 0x00687de0
void C_00687de0::sub_0068b430() {}

int sub_0067eb60(void);
extern undefined4 g_01ebdb28;
extern undefined * g_01ebdb30;
// @baa 0x00688030
undefined4 * UTexture2D::sub_00688030(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067eb60();
  *(undefined2 *)(param_1 + 0x37) = 0;
  *(undefined2 *)((int)param_1 + 0xe2) = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  *(undefined2 *)((int)param_1 + 0xee) = 0;
  *param_1 = (undefined4)(&g_01ebdb30);
  param_1[5] = (undefined4)(&g_01ebdb28);
  return param_1;
}

struct C_00688070 {
    undefined4 * sub_00688070();
};

int sub_0067ec20(void);
extern undefined4 g_01ebdb5c;
extern undefined * g_01ebdb64;
// @baa 0x00688070
undefined4 * C_00688070::sub_00688070(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067ec20();
  *(undefined2 *)(param_1 + 0x3f) = 0;
  *(undefined2 *)((int)param_1 + 0x102) = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  *(undefined2 *)((int)param_1 + 0x10e) = 0;
  *param_1 = (undefined4)(&g_01ebdb64);
  param_1[5] = (undefined4)(&g_01ebdb5c);
  return param_1;
}

struct C_006880b0 {
    undefined4 * sub_006880b0();
};

int sub_0067ece0(void);
extern undefined4 g_01ebdb90;
extern undefined * g_01ebdb98;
// @baa 0x006880b0
undefined4 * C_006880b0::sub_006880b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067ece0();
  *(undefined2 *)(param_1 + 0x4f) = 0;
  *(undefined2 *)((int)param_1 + 0x142) = 0;
  *(undefined2 *)(param_1 + 0x52) = 0;
  *(undefined2 *)((int)param_1 + 0x14e) = 0;
  *param_1 = (undefined4)(&g_01ebdb98);
  param_1[5] = (undefined4)(&g_01ebdb90);
  return param_1;
}

int sub_0067edb0(void);
extern undefined4 g_01ebdbc4;
extern undefined * g_01ebdbcc;
// @baa 0x006880f0
undefined4 * UTexture2D::sub_006880f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067edb0();
  *(undefined2 *)(param_1 + 0x37) = 0;
  *(undefined2 *)((int)param_1 + 0xe2) = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  *(undefined2 *)((int)param_1 + 0xee) = 0;
  *param_1 = (undefined4)(&g_01ebdbcc);
  param_1[5] = (undefined4)(&g_01ebdbc4);
  return param_1;
}

struct C_00688130 {
    undefined4 * sub_00688130();
};

int sub_0067ee70(void);
extern undefined4 g_01ebdbf8;
extern undefined * g_01ebdc00;
// @baa 0x00688130
undefined4 * C_00688130::sub_00688130(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067ee70();
  *(undefined2 *)(param_1 + 0x3f) = 0;
  *(undefined2 *)((int)param_1 + 0x102) = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  *(undefined2 *)((int)param_1 + 0x10e) = 0;
  *param_1 = (undefined4)(&g_01ebdc00);
  param_1[5] = (undefined4)(&g_01ebdbf8);
  return param_1;
}

struct C_00688170 {
    undefined4 * sub_00688170();
};

int sub_0067ef30(void);
extern undefined4 g_01ebdc2c;
extern undefined * g_01ebdc34;
// @baa 0x00688170
undefined4 * C_00688170::sub_00688170(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067ef30();
  *(undefined2 *)(param_1 + 0x4f) = 0;
  *(undefined2 *)((int)param_1 + 0x142) = 0;
  *(undefined2 *)(param_1 + 0x52) = 0;
  *(undefined2 *)((int)param_1 + 0x14e) = 0;
  *param_1 = (undefined4)(&g_01ebdc34);
  param_1[5] = (undefined4)(&g_01ebdc2c);
  return param_1;
}

struct C_006881b0 {
    undefined4 * sub_006881b0();
};

int sub_0067e900(void);
extern undefined4 g_01ebdc60;
extern undefined * g_01ebdc68;
// @baa 0x006881b0
undefined4 * C_006881b0::sub_006881b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067e900();
  *(undefined2 *)(param_1 + 0x47) = 0;
  *(undefined2 *)((int)param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x4a) = 0;
  *(undefined2 *)((int)param_1 + 0x12e) = 0;
  *param_1 = (undefined4)(&g_01ebdc68);
  param_1[5] = (undefined4)(&g_01ebdc60);
  return param_1;
}

struct C_006881f0 {
    undefined4 * sub_006881f0();
};

int sub_0067e9c0(void);
extern undefined4 g_01ebdc94;
extern undefined * g_01ebdc9c;
// @baa 0x006881f0
undefined4 * C_006881f0::sub_006881f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067e9c0();
  *(undefined2 *)(param_1 + 0x67) = 0;
  *(undefined2 *)((int)param_1 + 0x1a2) = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  *(undefined2 *)((int)param_1 + 0x1ae) = 0;
  *param_1 = (undefined4)(&g_01ebdc9c);
  param_1[5] = (undefined4)(&g_01ebdc94);
  return param_1;
}

struct C_00688230 {
    undefined4 * sub_00688230();
};

int sub_0067ea90(void);
extern undefined4 g_01ebdcc8;
extern undefined * g_01ebdcd0;
// @baa 0x00688230
undefined4 * C_00688230::sub_00688230(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067ea90();
  *(undefined2 *)(param_1 + 0x77) = 0;
  *(undefined2 *)((int)param_1 + 0x1e2) = 0;
  *(undefined2 *)(param_1 + 0x7a) = 0;
  *(undefined2 *)((int)param_1 + 0x1ee) = 0;
  *param_1 = (undefined4)(&g_01ebdcd0);
  param_1[5] = (undefined4)(&g_01ebdcc8);
  return param_1;
}

struct C_view_00688450 {
    int sub_0073f030(int);
};

// @baa 0x00688450
undefined4 UMorphWeightSequence::sub_00688450(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view_00688450 *)(this))->sub_0073f030(param_2);
  sub_00a49bb0(param_2,param_1 + 0x4c);
  return uVar1;
}

struct A_00688480 { virtual void sub_0068b450(); char pad[16]; };

struct B_00688480 { virtual void sub_0068b450(); };

struct C_00688480 : A_00688480, B_00688480 { virtual void sub_0068b450(); C_00688480(); };

C_00688480::C_00688480() {}

// @baa 0x00688480
void C_00688480::sub_0068b450() {}

int sub_0067f2d0(void);
// @baa 0x00688600
undefined4 UTexture2D::sub_00688600(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0067f2d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00675ff0(void);
// @baa 0x00688620
undefined4 UTexture2D::sub_00688620(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00675ff0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_00688aa0 { void sub_00675b80(); };

struct C_00688aa0 { char pad[8]; M_00688aa0 m; void sub_00688aa0(); };

// @baa 0x00688aa0
void C_00688aa0::sub_00688aa0() { m.sub_00675b80(); }

// @baa 0x00688ab0
void __stdcall sub_00688ab0(int a0, int a1) {  }

struct TConstSetBitIterator_00688d30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00688d30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00688d30& operator++();
};

TConstSetBitIterator_00688d30::TConstSetBitIterator_00688d30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00688d30
TConstSetBitIterator_00688d30& TConstSetBitIterator_00688d30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00688d80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00688d80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00688d80& operator++();
};

TConstSetBitIterator_00688d80::TConstSetBitIterator_00688d80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00688d80
TConstSetBitIterator_00688d80& TConstSetBitIterator_00688d80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00688dd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00688dd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00688dd0& operator++();
};

TConstSetBitIterator_00688dd0::TConstSetBitIterator_00688dd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00688dd0
TConstSetBitIterator_00688dd0& TConstSetBitIterator_00688dd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00688e20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00688e20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00688e20& operator++();
};

TConstSetBitIterator_00688e20::TConstSetBitIterator_00688e20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00688e20
TConstSetBitIterator_00688e20& TConstSetBitIterator_00688e20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00688e70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00688e70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00688e70& operator++();
};

TConstSetBitIterator_00688e70::TConstSetBitIterator_00688e70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00688e70
TConstSetBitIterator_00688e70& TConstSetBitIterator_00688e70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00688ec0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00688ec0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00688ec0& operator++();
};

TConstSetBitIterator_00688ec0::TConstSetBitIterator_00688ec0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00688ec0
TConstSetBitIterator_00688ec0& TConstSetBitIterator_00688ec0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00688f10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00688f10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00688f10& operator++();
};

TConstSetBitIterator_00688f10::TConstSetBitIterator_00688f10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00688f10
TConstSetBitIterator_00688f10& TConstSetBitIterator_00688f10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00688f60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00688f60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00688f60& operator++();
};

TConstSetBitIterator_00688f60::TConstSetBitIterator_00688f60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00688f60
TConstSetBitIterator_00688f60& TConstSetBitIterator_00688f60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00688fb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00688fb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00688fb0& operator++();
};

TConstSetBitIterator_00688fb0::TConstSetBitIterator_00688fb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00688fb0
TConstSetBitIterator_00688fb0& TConstSetBitIterator_00688fb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006890c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006890c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006890c0& operator++();
};

TConstSetBitIterator_006890c0::TConstSetBitIterator_006890c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006890c0
TConstSetBitIterator_006890c0& TConstSetBitIterator_006890c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00689110 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00689110(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00689110& operator++();
};

TConstSetBitIterator_00689110::TConstSetBitIterator_00689110(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00689110
TConstSetBitIterator_00689110& TConstSetBitIterator_00689110::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x006892a0
UPrimitiveComponent::UPrimitiveComponent()
{
    DetachFence = 0;
    MotionBlurInfoIndex = 0xffffffff;
    CachedParentToWorld.XPlane.X = 1.0f;
    CachedParentToWorld.XPlane.Y = 0.0f;
    CachedParentToWorld.XPlane.Z = 0.0f;
    CachedParentToWorld.XPlane.W = 0.0f;
    CachedParentToWorld.YPlane.X = 0.0f;
    CachedParentToWorld.YPlane.Y = 1.0f;
    CachedParentToWorld.YPlane.Z = 0.0f;
    CachedParentToWorld.YPlane.W = 0.0f;
    CachedParentToWorld.ZPlane.X = 0.0f;
    CachedParentToWorld.ZPlane.Y = 0.0f;
    CachedParentToWorld.ZPlane.Z = 1.0f;
    CachedParentToWorld.ZPlane.W = 0.0f;
    CachedParentToWorld.WPlane.X = 0.0f;
    CachedParentToWorld.WPlane.Y = 0.0f;
    CachedParentToWorld.WPlane.Z = 0.0f;
    CachedParentToWorld.WPlane.W = 1.0f;
}

// @baa 0x00689330
void UPrimitiveComponent::vf_164(int a0, int a1, int a2) {  }

// @baa 0x00689340
void UPrimitiveComponent::vf_168(int a0) {  }

// @baa 0x00689350
void UPrimitiveComponent::vf_16c(int a0) {  }

// @baa 0x00689360
undefined1 UPrimitiveComponent::vf_170(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x19d);
}

// @baa 0x00689370
int UPrimitiveComponent::vf_174(int a0, int a1, int a2, int a3) { return 1; }

// @baa 0x00689380
int UPrimitiveComponent::vf_178(int a0, int a1, int a2, int a3, int a4) { return 1; }

// @baa 0x00689390
UINT UPrimitiveComponent::vf_17c() { return 0; }

// @baa 0x006893a0
int UPrimitiveComponent::vf_180(int a0) { return 0; }

// @baa 0x006893d0
void UPrimitiveComponent::vf_1e4(int a0) {  }

// @baa 0x006893e0
int UPrimitiveComponent::vf_1fc(void) { return 0; }

// @baa 0x006893f0
int UPrimitiveComponent::vf_200(void) { return 0; }

// @baa 0x00689400
int UPrimitiveComponent::vf_204(void) { return 1; }

// @baa 0x00689410
uint UPrimitiveComponent::vf_208(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x194) >> 0x16 & 1;
}

// @baa 0x00689420
int UPrimitiveComponent::vf_210(void) { return 1; }

// @baa 0x00689430
void UPrimitiveComponent::vf_248(int a0) {  }

// @baa 0x00689440
UINT UPrimitiveComponent::vf_24c() { return 0; }

int sub_005c7a70(...);
int sub_006892a0(void);
// @baa 0x006894a0
undefined4 UPrimitiveComponent::sub_006894a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006892a0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x1b0);
  }
  return param_1;
}

// @baa 0x006894d0
IMPLEMENT_CLASS_AT(UMeshComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 15);

int sub_00630f20(...);
extern undefined4 g_026667a8;
// @baa 0x00689540
undefined4 UMeshComponent::vf_258(void) {
  sub_00630f20(g_026667a8,L"Pure virtual not implemented (%s)",L"UMeshComponent::GetNumElements");
  return 0;
}

// @baa 0x00689560
struct C_00689590 { void sub_00685d30(int); void sub_00689590(); };

// @baa 0x00689590
void C_00689590::sub_00689590() { sub_00685d30(0); }

struct M_006895a0 { void sub_00686770(); };

struct C_006895a0 { char pad[48]; M_006895a0 m; void sub_006895a0(); };

// @baa 0x006895a0
void C_006895a0::sub_006895a0() { m.sub_00686770(); }

struct C_006895b0 {
    undefined4 sub_006895b0(byte);
    int sub_00686770();
};

// @baa 0x006895b0
undefined4 C_006895b0::sub_006895b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_006895b0 *)(((char *)this + 0x30)))->sub_00686770();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_01a37872(...);
int sub_01e231c0(...);
extern undefined4 g_026af530;
extern undefined4 g_026af534;
extern undefined4 g_026af538;
extern undefined4 g_026af53c;
// @baa 0x006895e0
undefined * sub_006895e0(void)
{
  if ((g_026af53c & 1) == 0) {
    g_026af53c = g_026af53c | 1;
    g_026af530 = 0;
    g_026af534 = 0;
    g_026af538 = 0;
    sub_01a37872(&sub_01e231c0);
  }
  return (undefined *)(&g_026af530);
}

int sub_006837e0(void);
// @baa 0x00689e50
undefined4 ULensFlare::sub_00689e50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006837e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_006857c0(void);
// @baa 0x00689e70
undefined4 ULensFlare::sub_00689e70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006857c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_006f7810(void);
extern undefined * g_01ebe598;
// @baa 0x00689e90
undefined4 * UPrimitiveComponent::sub_00689e90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_01ebe598);
  return param_1;
}

struct C_0068a3c0 {
    undefined4 * sub_0068a3c0(undefined4 *);
    int sub_00672a40(int);
    int sub_00680a60(int);
    int sub_0054e560(int);
};

// @baa 0x0068a3c0
undefined4 * C_0068a3c0::sub_0068a3c0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  ((C_0068a3c0 *)(((char *)this + 0xc)))->sub_00672a40((int)(param_2 + 3));
  ((C_0068a3c0 *)(((char *)this + 0x18)))->sub_00680a60((int)(param_2 + 6));
  ((C_0068a3c0 *)(((char *)this + 0x24)))->sub_0054e560((int)(param_2 + 9));
  return param_1;
}

struct C_0068a660 { void sub_00689160(int); C_0068a660 *sub_0068a660(int); };

// @baa 0x0068a660
C_0068a660 *C_0068a660::sub_0068a660(int a) { sub_00689160(a); return this; }

struct C_view_0068a750 {
    int sub_0067f3f0(int, int);
};

// @baa 0x0068a750
undefined4 UTexture2D::sub_0068a750(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_0068a750 *)(this))->sub_0067f3f0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x28, iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0x1c);
  }
  return 0;
}

struct FGameplayObject_0068a8e0
{
    FGameplayObject_0068a8e0 * sub_00687850();
};

// @baa 0x0068a8e0
FGameplayObject_0068a8e0 * sub_0068a8e0()
{
    FGameplayObject_0068a8e0 * pObject = (FGameplayObject_0068a8e0 *)sub_0053df40(0xc8, 8);
    if (pObject)
        return pObject->sub_00687850();
    return 0;
}

struct FGameplayObject_0068a970
{
    FGameplayObject_0068a970 * sub_00687a80();
};

// @baa 0x0068a970
FGameplayObject_0068a970 * sub_0068a970()
{
    FGameplayObject_0068a970 * pObject = (FGameplayObject_0068a970 *)sub_0053df40(0xcc, 8);
    if (pObject)
        return pObject->sub_00687a80();
    return 0;
}

struct FGameplayObject_0068aa00
{
    FGameplayObject_0068aa00 * sub_00687ce0();
};

// @baa 0x0068aa00
FGameplayObject_0068aa00 * sub_0068aa00()
{
    FGameplayObject_0068aa00 * pObject = (FGameplayObject_0068aa00 *)sub_0053df40(0xc8, 8);
    if (pObject)
        return pObject->sub_00687ce0();
    return 0;
}

struct FGameplayObject_0068b110
{
    FGameplayObject_0068b110 * sub_00688490();
};

// @baa 0x0068b110
FGameplayObject_0068b110 * sub_0068b110()
{
    FGameplayObject_0068b110 * pObject = (FGameplayObject_0068b110 *)sub_0053df40(0xb8, 8);
    if (pObject)
        return pObject->sub_00688490();
    return 0;
}

struct C_0068b390 {
    void sub_0068b390();
    int sub_006887c0(int);
};

// @baa 0x0068b390
void C_0068b390::sub_0068b390(void)
{
    int param_1 = (int)this;
  ((C_0068b390 *)((*(char **)((char *)this + 0x10))))->sub_006887c0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0068b3b0 {
    void sub_0068b3b0();
    int sub_00688930(int);
};

// @baa 0x0068b3b0
void C_0068b3b0::sub_0068b3b0(void)
{
    int param_1 = (int)this;
  ((C_0068b3b0 *)((*(char **)((char *)this + 0x10))))->sub_00688930(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0068b3d0 {
    undefined4 sub_0068b3d0(byte);
};

int sub_0068a360(void);
// @baa 0x0068b3d0
undefined4 C_0068b3d0::sub_0068b3d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0068a360();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00688640(void);
// @baa 0x0068b3f0
undefined4 UTexture2D::sub_0068b3f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00688640();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_006886a0(void);
// @baa 0x0068b410
undefined4 UTexture2D::sub_0068b410(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006886a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00688700(void);
// @baa 0x0068b430
undefined4 UTexture2D::sub_0068b430(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00688700();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00688760(void);
// @baa 0x0068b450
undefined4 UTexture2D::sub_0068b450(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00688760();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_0068b6c0 {
    int sub_00675b80();
};

// @baa 0x0068b6c0
undefined4 UTexture2D::sub_0068b6c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_0068b6c0 *)(((char *)this + 8)))->sub_00675b80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_0068a680();
// @baa 0x0068c3e0
void sub_0068c3e0(void) { sub_0068a680(); }

struct C_0068d730 { C_0068d730* sub_0068d730(void); };

// @baa 0x0068d730
C_0068d730* C_0068d730::sub_0068d730(void) { return this; }

void sub_0068b280();
// @baa 0x0068d810
void sub_0068d810(void) { sub_0068b280(); }

struct S_0068d8f0 { int sub_0068bb60(); };

struct C_0068d8f0 { int a; C_0068d8f0(S_0068d8f0 *); };

// @baa 0x0068d8f0
C_0068d8f0::C_0068d8f0(S_0068d8f0 *s) : a(s->sub_0068bb60()) {}

struct S_0068d910 { int sub_0068bbc0(); };

struct C_0068d910 { int a; C_0068d910(S_0068d910 *); };

// @baa 0x0068d910
C_0068d910::C_0068d910(S_0068d910 *s) : a(s->sub_0068bbc0()) {}

struct S_0068d930 { int sub_0068bc20(); };

struct C_0068d930 { int a; C_0068d930(S_0068d930 *); };

// @baa 0x0068d930
C_0068d930::C_0068d930(S_0068d930 *s) : a(s->sub_0068bc20()) {}

struct S_0068d950 { int sub_0068bc80(); };

struct C_0068d950 { int a; C_0068d950(S_0068d950 *); };

// @baa 0x0068d950
C_0068d950::C_0068d950(S_0068d950 *s) : a(s->sub_0068bc80()) {}

struct S_0068d970 { int sub_0068bce0(); };

struct C_0068d970 { int a; C_0068d970(S_0068d970 *); };

// @baa 0x0068d970
C_0068d970::C_0068d970(S_0068d970 *s) : a(s->sub_0068bce0()) {}

struct S_0068d990 { int sub_0068bd40(); };

struct C_0068d990 { int a; C_0068d990(S_0068d990 *); };

// @baa 0x0068d990
C_0068d990::C_0068d990(S_0068d990 *s) : a(s->sub_0068bd40()) {}

struct S_0068d9b0 { int sub_0068bda0(); };

struct C_0068d9b0 { int a; C_0068d9b0(S_0068d9b0 *); };

// @baa 0x0068d9b0
C_0068d9b0::C_0068d9b0(S_0068d9b0 *s) : a(s->sub_0068bda0()) {}

struct S_0068d9d0 { int sub_0068be00(); };

struct C_0068d9d0 { int a; C_0068d9d0(S_0068d9d0 *); };

// @baa 0x0068d9d0
C_0068d9d0::C_0068d9d0(S_0068d9d0 *s) : a(s->sub_0068be00()) {}

struct S_0068d9f0 { int sub_0068be60(); };

struct C_0068d9f0 { int a; C_0068d9f0(S_0068d9f0 *); };

// @baa 0x0068d9f0
C_0068d9f0::C_0068d9f0(S_0068d9f0 *s) : a(s->sub_0068be60()) {}

struct S_0068da10 { int sub_0068bec0(); };

struct C_0068da10 { int a; C_0068da10(S_0068da10 *); };

// @baa 0x0068da10
C_0068da10::C_0068da10(S_0068da10 *s) : a(s->sub_0068bec0()) {}

struct S_0068da30 { int sub_0068bf20(); };

struct C_0068da30 { int a; C_0068da30(S_0068da30 *); };

// @baa 0x0068da30
C_0068da30::C_0068da30(S_0068da30 *s) : a(s->sub_0068bf20()) {}

struct S_0068da50 { int sub_0068bf80(); };

struct C_0068da50 { int a; C_0068da50(S_0068da50 *); };

// @baa 0x0068da50
C_0068da50::C_0068da50(S_0068da50 *s) : a(s->sub_0068bf80()) {}

struct S_0068da70 { int sub_0068bfe0(); };

struct C_0068da70 { int a; C_0068da70(S_0068da70 *); };

// @baa 0x0068da70
C_0068da70::C_0068da70(S_0068da70 *s) : a(s->sub_0068bfe0()) {}

struct S_0068da90 { int sub_0068c040(); };

struct C_0068da90 { int a; C_0068da90(S_0068da90 *); };

// @baa 0x0068da90
C_0068da90::C_0068da90(S_0068da90 *s) : a(s->sub_0068c040()) {}

struct S_0068dab0 { int sub_0068c0a0(); };

struct C_0068dab0 { int a; C_0068dab0(S_0068dab0 *); };

// @baa 0x0068dab0
C_0068dab0::C_0068dab0(S_0068dab0 *s) : a(s->sub_0068c0a0()) {}

struct S_0068dad0 { int sub_0068c100(); };

struct C_0068dad0 { int a; C_0068dad0(S_0068dad0 *); };

// @baa 0x0068dad0
C_0068dad0::C_0068dad0(S_0068dad0 *s) : a(s->sub_0068c100()) {}

struct S_0068daf0 { int sub_0068c160(); };

struct C_0068daf0 { int a; C_0068daf0(S_0068daf0 *); };

// @baa 0x0068daf0
C_0068daf0::C_0068daf0(S_0068daf0 *s) : a(s->sub_0068c160()) {}

struct S_0068db10 { int sub_0068c1c0(); };

struct C_0068db10 { int a; C_0068db10(S_0068db10 *); };

// @baa 0x0068db10
C_0068db10::C_0068db10(S_0068db10 *s) : a(s->sub_0068c1c0()) {}

struct S_0068db30 { int sub_0068c220(); };

struct C_0068db30 { int a; C_0068db30(S_0068db30 *); };

// @baa 0x0068db30
C_0068db30::C_0068db30(S_0068db30 *s) : a(s->sub_0068c220()) {}

struct M_0068df80 { void sub_0068b5f0(); };

struct C_0068df80 { char pad[8]; M_0068df80 m; void sub_0068df80(); };

// @baa 0x0068df80
void C_0068df80::sub_0068df80() { m.sub_0068b5f0(); }

struct S_0068e310 { int sub_0068c280(); };

struct C_0068e310 { int a; C_0068e310(S_0068e310 *); };

// @baa 0x0068e310
C_0068e310::C_0068e310(S_0068e310 *s) : a(s->sub_0068c280()) {}

void sub_0068b6f0();
// @baa 0x0068e330
void sub_0068e330(void) { sub_0068b6f0(); }

void sub_0068b770();
// @baa 0x0068e340
void sub_0068e340(void) { sub_0068b770(); }

void sub_0068b7f0();
// @baa 0x0068e350
void sub_0068e350(void) { sub_0068b7f0(); }

int sub_00689000(void);
// @baa 0x0068e360
int UTexture2D::sub_0068e360(void)
{
    int param_1 = (int)this;

  sub_00689000();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00689060(void);
// @baa 0x0068e380
int UTexture2D::sub_0068e380(void)
{
    int param_1 = (int)this;

  sub_00689060();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_0068d660();
// @baa 0x0068e670
void sub_0068e670(void) { sub_0068d660(); }

// @baa 0x0068e680
IMPLEMENT_CLASS_AT(AActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 32);

// @baa 0x0068ea70
APawn* AActor::GetPlayerPawn() { return 0; }

// @baa 0x0068ea80
UINT AActor::vf_160() { return 0; }

int sub_005c7a30(void);
// @baa 0x0068ea90
undefined4 AActor::vf_0c4(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = sub_005c7a30();
  if ((iVar1 != 0) && ((*(byte *)(param_1 + 0x30) & 0x40) == 0)) {
    return 1;
  }
  return 0;
}

// @baa 0x0068eab0
void AActor::vf_184(void) {  }

// @baa 0x0068eac0
int AActor::vf_188(void) { return 1; }

// @baa 0x0068ee60
void AActor::vf_194(void) {  }

// @baa 0x0068ee70
int AActor::vf_1c0(int a0) { return 0; }

// @baa 0x0068ee80
void AActor::vf_214(void) {  }

// @baa 0x0068ee90
void AActor::vf_21c(int a0, int a1, int a2) {  }

// @baa 0x0068eea0
void AActor::vf_224(int a0) {  }

// @baa 0x0068eeb0
void AActor::vf_228(int a0, int a1) {  }

// @baa 0x0068eed0
void AActor::vf_24c(void) {  }

// @baa 0x0068eee0
void AActor::vf_250(int a0, int a1, int a2, int a3) {  }

// @baa 0x0068eef0
void AActor::vf_254(int a0, int a1, int a2) {  }

// @baa 0x0068ef00
void AActor::vf_258(int a0) {  }

// @baa 0x0068ef10
void AActor::vf_260(int a0) {  }

// @baa 0x0068ef20
void AActor::vf_264(int a0) {  }

// @baa 0x0068ef30
void AActor::vf_268(INT a0, INT a1, INT a2, INT a3, INT a4, FLOAT a5, INT a6) {  }

// @baa 0x0068ef40
void AActor::vf_26c(UINT a0, UINT a1) {  }

// @baa 0x0068ef50
void AActor::vf_270(int a0) {  }

// @baa 0x0068ef60
void AActor::vf_274(void) {  }

// @baa 0x0068ef70
void AActor::vf_278(int a0, int a1, int a2, int a3) {  }

// @baa 0x0068ef80
void AActor::vf_27c(int a0, int a1, int a2) {  }

// @baa 0x0068ef90
void AActor::vf_280(void) {  }

// @baa 0x0068efa0
int AActor::vf_284(void) { return 0; }

// @baa 0x0068efb0
UINT AActor::vf_288() { return 0; }

// @baa 0x0068efc0
void AActor::vf_28c(int a0, int a1, int a2) {  }

// @baa 0x0068efd0
void AActor::vf_290(void) {  }

// @baa 0x0068efe0
void AActor::vf_294(int a0, int a1, int a2) {  }

// @baa 0x0068eff0
void AActor::vf_298(int a0, int a1, int a2) {  }

// @baa 0x0068f000
int AActor::vf_29c(int a0) { return 0; }

// @baa 0x0068f010
void AActor::vf_2a0(void) {  }

// @baa 0x0068f020
void AActor::vf_2c0(void) {  }

// @baa 0x0068f030
void AActor::vf_2c4(void) {  }

// @baa 0x0068f040
int AActor::vf_2cc(void) { return 0; }

// @baa 0x0068f050
int AActor::vf_2d0(void) { return 0; }

// @baa 0x0068f060
int AActor::vf_2d4(void) { return 0; }

// @baa 0x0068f070
int AActor::vf_2d8(void) { return 0; }

// @baa 0x0068f080
int AActor::vf_2dc(void) { return 0; }

// @baa 0x0068f090
APlayerController* AActor::GetAPlayerController() { return 0; }

// @baa 0x0068f0a0
void* AActor::vf_2e4() { return 0; }

// @baa 0x0068f0b0
void* AActor::vf_2ec() { return 0; }

// @baa 0x0068f0c0
void* AActor::vf_2e8() { return 0; }

// @baa 0x0068f0d0
int AActor::vf_2f0(void) { return 0; }

// @baa 0x0068f0e0
void* AActor::vf_2f4() { return 0; }

// @baa 0x0068f0f0
void* AActor::vf_2f8() { return 0; }

// @baa 0x0068f100
void* AActor::vf_300() { return 0; }

// @baa 0x0068f110
void* AActor::vf_2fc() { return 0; }

// @baa 0x0068f120
void* AActor::vf_304() { return 0; }

// @baa 0x0068f130
ANSICHAR* AActor::vf_32c() { return 0; }

// @baa 0x0068f140
void* AActor::vf_330(INT a0) { return 0; }

// @baa 0x0068f150
void AActor::vf_338(int a0, int a1) {  }

// @baa 0x0068f160
int AActor::vf_33c(int a0) { return 0; }

// @baa 0x0068f170
void AActor::vf_340(TArray<AActor*>& a0) {  }

// @baa 0x0068f180
int AActor::vf_348(int a0, int a1) { return 0; }

// @baa 0x0068f190
char* AActor::vf_34c(void) { return (char*)this + 412; }

// @baa 0x0068f200
int AActor::sub_0068f200(void) { return *(int*)((char*)this + 4); }

// @baa 0x0068f570
IMPLEMENT_CLASS_AT(AInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 74);

// @baa 0x0068f600
// @baa 0x0068f6a0
IMPLEMENT_CLASS_AT(AFileWriter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\AFileLog.cpp", 12);

// @baa 0x0068f7c0
UStaticMeshComponent::UStaticMeshComponent()
{
}

int sub_0068f7c0(void);
// @baa 0x0068f860
undefined4 UStaticMeshComponent::sub_0068f860(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0068f7c0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x1f0);
  }
  return param_1;
}

/* Kit gap: the mesh-side handler (0x00963100; its name isn't known) isn't declared. */
struct UStaticMesh_ : public UStaticMesh
{
	void sub_00963100(INT); /* 0x00963100 */
};

// @baa 0x0068f840
/* Slot 0x248 (unnamed in the kit): forwards to the static mesh. */
void UStaticMeshComponent::vf_248(INT Param)
{
	if (StaticMesh)
	{
		((UStaticMesh_*)StaticMesh)->sub_00963100(Param);
	}
}

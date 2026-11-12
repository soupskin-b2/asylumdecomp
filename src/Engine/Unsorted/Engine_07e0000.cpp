// Engine_07e0000.cpp (part 1 of 2): 163 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    int sub_007e01a0(int);
};

// @baa 0x007e01a0
int C::sub_007e01a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_007e01b0 {
    int sub_007e01b0();
};

// @baa 0x007e01b0
int C_007e01b0::sub_007e01b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007e01d0 {
    int sub_007e01d0();
};

// @baa 0x007e01d0
int C_007e01d0::sub_007e01d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007e01f0 {
    int sub_007e01f0();
};

// @baa 0x007e01f0
int C_007e01f0::sub_007e01f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct M_007e0220 { void sub_007df900(); };

struct C_007e0220 { char pad[4]; M_007e0220 m; void sub_007e0220(); };

// @baa 0x007e0220
void C_007e0220::sub_007e0220() { m.sub_007df900(); }

struct M_007e0230 { void sub_00602210(); };

struct C_007e0230 { char pad[24]; M_007e0230 m; void sub_007e0230(); };

// @baa 0x007e0230
void C_007e0230::sub_007e0230() { m.sub_00602210(); }

struct C_007e02a0 { C_007e02a0* sub_007e02a0(void); };

// @baa 0x007e02a0
C_007e02a0* C_007e02a0::sub_007e02a0(void) { *(int*)((char*)this + 20) = -1; return this; }

struct C_007e02b0 { C_007e02b0* sub_007e02b0(void); };

// @baa 0x007e02b0
C_007e02b0* C_007e02b0::sub_007e02b0(void) { *(int*)((char*)this + 20) = -1; return this; }

// @baa 0x007e02c0
void __stdcall sub_007e02c0(int a0, int a1) {  }

struct C_007e02d0 {
    int sub_007e02d0();
};

// @baa 0x007e02d0
int C_007e02d0::sub_007e02d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_007e03d0 {
    int sub_007e03d0(int);
};

// @baa 0x007e03d0
int C_007e03d0::sub_007e03d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x44;
}

struct C_007e03f0 {
    int sub_007e03f0();
};

// @baa 0x007e03f0
int C_007e03f0::sub_007e03f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x44;
}

struct C_007e0410 {
    int sub_007e0410();
};

// @baa 0x007e0410
int C_007e0410::sub_007e0410(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_007e0420 {
    int sub_007e0420(int);
};

// @baa 0x007e0420
int C_007e0420::sub_007e0420(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_007e0430 {
    int sub_007e0430();
};

// @baa 0x007e0430
int C_007e0430::sub_007e0430(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_007e0440 {
    int sub_007e0440();
};

// @baa 0x007e0440
int C_007e0440::sub_007e0440(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_007e0460 {
    int sub_007e0460();
};

// @baa 0x007e0460
int C_007e0460::sub_007e0460(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_007e0480 {
    int sub_007e0480();
};

// @baa 0x007e0480
int C_007e0480::sub_007e0480(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x2c + *(int *)*param_1;
}

struct C_007e0610 {
    uint sub_007e0610();
};

// @baa 0x007e0610
uint C_007e0610::sub_007e0610(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x3c0) | -(uint)(*(uint *)(param_1 + 0x3c0) == 0) & param_1;
}

struct C_007e0630 {
    int sub_007e0630();
};

// @baa 0x007e0630
int C_007e0630::sub_007e0630(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x2c + *(int *)*param_1;
}

struct C_007e0640 {
    int sub_007e0640();
};

// @baa 0x007e0640
int C_007e0640::sub_007e0640(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_007e0650 {
    int sub_007e0650();
};

// @baa 0x007e0650
int C_007e0650::sub_007e0650(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_007e0670 {
    int sub_007e0670();
};

// @baa 0x007e0670
int C_007e0670::sub_007e0670(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_007e0690 {
    int sub_007e0690();
};

// @baa 0x007e0690
int C_007e0690::sub_007e0690(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x44;
}

void sub_007df200();
// @baa 0x007e3b70
void sub_007e3b70(void) { sub_007df200(); }

struct C_007e3d60 { void sub_005532a0(int); C_007e3d60 *sub_007e3d60(int); };

// @baa 0x007e3d60
C_007e3d60 *C_007e3d60::sub_007e3d60(int a) { sub_005532a0(a); return this; }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_007e3ee0 { void* Data; int Num; int Max; void sub_007e3ee0(); };

// @baa 0x007e3ee0
void C_007e3ee0::sub_007e3ee0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007e3f40 { void* Data; int Num; int Max; void sub_007e3f40(); };

// @baa 0x007e3f40
void C_007e3f40::sub_007e3f40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007e3fa0 {
    undefined4 sub_007e3fa0();
};

// @baa 0x007e3fa0
undefined4 C_007e3fa0::sub_007e3fa0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_007e3fb0 { C_007e3fb0* sub_007e3fb0(void); };

// @baa 0x007e3fb0
C_007e3fb0* C_007e3fb0::sub_007e3fb0(void) { return this; }

struct C_007e3fc0 { C_007e3fc0* sub_007e3fc0(void); };

// @baa 0x007e3fc0
C_007e3fc0* C_007e3fc0::sub_007e3fc0(void) { return this; }

extern TArray<int> g_026a1ca4;
struct C_007e42f0 {
    int sub_007e42f0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x007e42f0
int C_007e42f0::sub_007e42f0()
{
    return g_026a1ca4(Index);
}

struct C_007e4350 {
    int sub_007e4350();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x007e4350
int C_007e4350::sub_007e4350()
{
    return g_026a1ca4(Index);
}

struct C_007e43b0 {
    int sub_007e43b0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x007e43b0
int C_007e43b0::sub_007e43b0()
{
    return g_026a1ca4(Index);
}

struct C_007e4410 {
    int sub_007e4410();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x007e4410
int C_007e4410::sub_007e4410()
{
    return g_026a1ca4(Index);
}

struct C_007e4470 {
    int sub_007e4470();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x007e4470
int C_007e4470::sub_007e4470()
{
    return g_026a1ca4(Index);
}

struct C_007e44d0 {
    int sub_007e44d0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x007e44d0
int C_007e44d0::sub_007e44d0()
{
    return g_026a1ca4(Index);
}

struct C_007e4530 {
    int sub_007e4530();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x007e4530
int C_007e4530::sub_007e4530()
{
    return g_026a1ca4(Index);
}

struct C_007e4590 {
    int sub_007e4590();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x007e4590
int C_007e4590::sub_007e4590()
{
    return g_026a1ca4(Index);
}

struct C_007e45f0 {
    int sub_007e45f0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x007e45f0
int C_007e45f0::sub_007e45f0()
{
    return g_026a1ca4(Index);
}

struct C_007e4650 {
    int sub_007e4650();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x007e4650
int C_007e4650::sub_007e4650()
{
    return g_026a1ca4(Index);
}

struct C_007e46b0 {
    int sub_007e46b0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x007e46b0
int C_007e46b0::sub_007e46b0()
{
    return g_026a1ca4(Index);
}

struct C_007e4770 {
    int sub_007e4770(int);
};

// @baa 0x007e4770
int C_007e4770::sub_007e4770(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_007e4780 {
    int sub_007e4780(int);
};

// @baa 0x007e4780
int C_007e4780::sub_007e4780(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_007e4790 {
    int sub_007e4790();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x007e4790
int C_007e4790::sub_007e4790()
{
    return g_026a1ca4(Index);
}

struct C_007e47f0 {
    int sub_007e47f0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x007e47f0
int C_007e47f0::sub_007e47f0()
{
    return g_026a1ca4(Index);
}

struct C_007e4850 {
    int sub_007e4850(int);
};

// @baa 0x007e4850
int C_007e4850::sub_007e4850(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_007e4b70 {
    int sub_007e4b70();
};

// @baa 0x007e4b70
int C_007e4b70::sub_007e4b70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x10 + *(int *)*param_1;
}

struct C_007e4bc0 {
    int sub_007e4bc0();
};

// @baa 0x007e4bc0
int C_007e4bc0::sub_007e4bc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x10 + *(int *)*param_1;
}

struct C_007e4bd0 {
    int sub_007e4bd0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x007e4bd0
int C_007e4bd0::sub_007e4bd0()
{
    return g_026a1ca4(Index);
}

struct C_007e4c50 {
    undefined4 sub_007e4c50(byte);
    int sub_0040fcc0();
};

int sub_0053dfa0(...);
// @baa 0x007e4c50
undefined4 C_007e4c50::sub_007e4c50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_007e4c50 *)(((char *)this + 0x18)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00549310(void);
// @baa 0x007e4c80
undefined4 UObject::sub_007e4c80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00549310();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_007e4ca0 { void sub_007e1760(); };

struct C_007e4ca0 { char pad[4]; M_007e4ca0 m; void sub_007e4ca0(); };

// @baa 0x007e4ca0
void C_007e4ca0::sub_007e4ca0() { m.sub_007e1760(); }

struct C_007e4d20 { void* Data; int Num; int Max; void sub_007e4d20(); };

// @baa 0x007e4d20
void C_007e4d20::sub_007e4d20() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007e4d80 {
    int sub_007e4d80(int);
};

// @baa 0x007e4d80
int C_007e4d80::sub_007e4d80(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct C_007e4d90 {
    undefined4 * sub_007e4d90(undefined4 *);
    int sub_007e0240(int);
};

// @baa 0x007e4d90
undefined4 * C_007e4d90::sub_007e4d90(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_007e4d90 *)(((char *)this + 4)))->sub_007e0240(param_2[1]);
  return param_1;
}

struct C_007e4db0 {
    undefined4 * sub_007e4db0(undefined4 *);
    int sub_007e0240(int);
};

// @baa 0x007e4db0
undefined4 * C_007e4db0::sub_007e4db0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_007e4db0 *)(((char *)this + 4)))->sub_007e0240(param_2[1]);
  param_1[4] = 0xffffffff;
  return param_1;
}

struct C_007e4de0 {
    int sub_007e4de0(int);
};

// @baa 0x007e4de0
int C_007e4de0::sub_007e4de0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_007e4df0 { void* Data; int Num; int Max; void sub_007e4df0(); };

// @baa 0x007e4df0
void C_007e4df0::sub_007e4df0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007e4e50 {
    int sub_007e4e50(int);
};

// @baa 0x007e4e50
int C_007e4e50::sub_007e4e50(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_007e4ee0 {
    int sub_007e4ee0(int);
};

// @baa 0x007e4ee0
int C_007e4ee0::sub_007e4ee0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x44;
}

struct C_007e4fa0 {
    int sub_007e4fa0(int);
};

// @baa 0x007e4fa0
int C_007e4fa0::sub_007e4fa0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_007e4fb0 {
    int sub_007e4fb0();
};

// @baa 0x007e4fb0
int C_007e4fb0::sub_007e4fb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x2c + *(int *)*param_1;
}

struct C_007e4fc0 {
    int sub_007e4fc0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x007e4fc0
int C_007e4fc0::sub_007e4fc0()
{
    return g_026a1ca4(Index);
}

struct C_007e5050 {
    undefined4 sub_007e5050(byte);
    int sub_007df900();
};

// @baa 0x007e5050
undefined4 C_007e5050::sub_007e5050(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_007e5050 *)(((char *)this + 4)))->sub_007df900();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_007e5110 {
    undefined4 sub_007e5110(byte);
    int sub_00602210();
};

// @baa 0x007e5110
undefined4 C_007e5110::sub_007e5110(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_007e5110 *)(((char *)this + 0x18)))->sub_00602210();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_007e5140 { void sub_007e1760(); };

struct C_007e5140 { char pad[4]; M_007e5140 m; void sub_007e5140(); };

// @baa 0x007e5140
void C_007e5140::sub_007e5140() { m.sub_007e1760(); }

struct C_007e5450 {
    void sub_007e5450(int);
};

int sub_0053df70(...);
// @baa 0x007e5450
void C_007e5450::sub_007e5450(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x44,8);
      *param_1 = iVar1;
    }
  }
  return;
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

struct TConstSetBitIterator_007e5740 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e5740(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e5740& operator++();
};

TConstSetBitIterator_007e5740::TConstSetBitIterator_007e5740(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e5740
TConstSetBitIterator_007e5740& TConstSetBitIterator_007e5740::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e5760 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e5760(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e5760& operator++();
};

TConstSetBitIterator_007e5760::TConstSetBitIterator_007e5760(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e5760
TConstSetBitIterator_007e5760& TConstSetBitIterator_007e5760::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e5780 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e5780(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e5780& operator++();
};

TConstSetBitIterator_007e5780::TConstSetBitIterator_007e5780(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e5780
TConstSetBitIterator_007e5780& TConstSetBitIterator_007e5780::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e57a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e57a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e57a0& operator++();
};

TConstSetBitIterator_007e57a0::TConstSetBitIterator_007e57a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e57a0
TConstSetBitIterator_007e57a0& TConstSetBitIterator_007e57a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e57c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e57c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e57c0& operator++();
};

TConstSetBitIterator_007e57c0::TConstSetBitIterator_007e57c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e57c0
TConstSetBitIterator_007e57c0& TConstSetBitIterator_007e57c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e57e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e57e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e57e0& operator++();
};

TConstSetBitIterator_007e57e0::TConstSetBitIterator_007e57e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e57e0
TConstSetBitIterator_007e57e0& TConstSetBitIterator_007e57e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e5830 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e5830(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e5830& operator++();
};

TConstSetBitIterator_007e5830::TConstSetBitIterator_007e5830(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e5830
TConstSetBitIterator_007e5830& TConstSetBitIterator_007e5830::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e5880 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e5880(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e5880& operator++();
};

TConstSetBitIterator_007e5880::TConstSetBitIterator_007e5880(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e5880
TConstSetBitIterator_007e5880& TConstSetBitIterator_007e5880::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e58d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e58d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e58d0& operator++();
};

TConstSetBitIterator_007e58d0::TConstSetBitIterator_007e58d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e58d0
TConstSetBitIterator_007e58d0& TConstSetBitIterator_007e58d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e5920 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e5920(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e5920& operator++();
};

TConstSetBitIterator_007e5920::TConstSetBitIterator_007e5920(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e5920
TConstSetBitIterator_007e5920& TConstSetBitIterator_007e5920::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e5970 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e5970(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e5970& operator++();
};

TConstSetBitIterator_007e5970::TConstSetBitIterator_007e5970(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e5970
TConstSetBitIterator_007e5970& TConstSetBitIterator_007e5970::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e59c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e59c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e59c0& operator++();
};

TConstSetBitIterator_007e59c0::TConstSetBitIterator_007e59c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e59c0
TConstSetBitIterator_007e59c0& TConstSetBitIterator_007e59c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e5a10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e5a10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e5a10& operator++();
};

TConstSetBitIterator_007e5a10::TConstSetBitIterator_007e5a10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e5a10
TConstSetBitIterator_007e5a10& TConstSetBitIterator_007e5a10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e5a60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e5a60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e5a60& operator++();
};

TConstSetBitIterator_007e5a60::TConstSetBitIterator_007e5a60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e5a60
TConstSetBitIterator_007e5a60& TConstSetBitIterator_007e5a60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e5ab0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e5ab0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e5ab0& operator++();
};

TConstSetBitIterator_007e5ab0::TConstSetBitIterator_007e5ab0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e5ab0
TConstSetBitIterator_007e5ab0& TConstSetBitIterator_007e5ab0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e5ad0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e5ad0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e5ad0& operator++();
};

TConstSetBitIterator_007e5ad0::TConstSetBitIterator_007e5ad0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e5ad0
TConstSetBitIterator_007e5ad0& TConstSetBitIterator_007e5ad0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e5af0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e5af0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e5af0& operator++();
};

TConstSetBitIterator_007e5af0::TConstSetBitIterator_007e5af0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e5af0
TConstSetBitIterator_007e5af0& TConstSetBitIterator_007e5af0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e5b10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e5b10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e5b10& operator++();
};

TConstSetBitIterator_007e5b10::TConstSetBitIterator_007e5b10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e5b10
TConstSetBitIterator_007e5b10& TConstSetBitIterator_007e5b10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e5b30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e5b30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e5b30& operator++();
};

TConstSetBitIterator_007e5b30::TConstSetBitIterator_007e5b30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e5b30
TConstSetBitIterator_007e5b30& TConstSetBitIterator_007e5b30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e5b50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e5b50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e5b50& operator++();
};

TConstSetBitIterator_007e5b50::TConstSetBitIterator_007e5b50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e5b50
TConstSetBitIterator_007e5b50& TConstSetBitIterator_007e5b50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e5b70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e5b70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e5b70& operator++();
};

TConstSetBitIterator_007e5b70::TConstSetBitIterator_007e5b70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e5b70
TConstSetBitIterator_007e5b70& TConstSetBitIterator_007e5b70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e5b90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e5b90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e5b90& operator++();
};

TConstSetBitIterator_007e5b90::TConstSetBitIterator_007e5b90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e5b90
TConstSetBitIterator_007e5b90& TConstSetBitIterator_007e5b90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e5be0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e5be0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e5be0& operator++();
};

TConstSetBitIterator_007e5be0::TConstSetBitIterator_007e5be0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e5be0
TConstSetBitIterator_007e5be0& TConstSetBitIterator_007e5be0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e5c30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e5c30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e5c30& operator++();
};

TConstSetBitIterator_007e5c30::TConstSetBitIterator_007e5c30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e5c30
TConstSetBitIterator_007e5c30& TConstSetBitIterator_007e5c30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e5c80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e5c80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e5c80& operator++();
};

TConstSetBitIterator_007e5c80::TConstSetBitIterator_007e5c80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e5c80
TConstSetBitIterator_007e5c80& TConstSetBitIterator_007e5c80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e5cd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e5cd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e5cd0& operator++();
};

TConstSetBitIterator_007e5cd0::TConstSetBitIterator_007e5cd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e5cd0
TConstSetBitIterator_007e5cd0& TConstSetBitIterator_007e5cd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e5d20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e5d20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e5d20& operator++();
};

TConstSetBitIterator_007e5d20::TConstSetBitIterator_007e5d20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e5d20
TConstSetBitIterator_007e5d20& TConstSetBitIterator_007e5d20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e5d70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e5d70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e5d70& operator++();
};

TConstSetBitIterator_007e5d70::TConstSetBitIterator_007e5d70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e5d70
TConstSetBitIterator_007e5d70& TConstSetBitIterator_007e5d70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e5dc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e5dc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e5dc0& operator++();
};

TConstSetBitIterator_007e5dc0::TConstSetBitIterator_007e5dc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e5dc0
TConstSetBitIterator_007e5dc0& TConstSetBitIterator_007e5dc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e5e10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e5e10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e5e10& operator++();
};

TConstSetBitIterator_007e5e10::TConstSetBitIterator_007e5e10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e5e10
TConstSetBitIterator_007e5e10& TConstSetBitIterator_007e5e10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007e5e30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007e5e30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007e5e30& operator++();
};

TConstSetBitIterator_007e5e30::TConstSetBitIterator_007e5e30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007e5e30
TConstSetBitIterator_007e5e30& TConstSetBitIterator_007e5e30::operator++()
{
    It.Advance();
    return *this;
}

struct C_007e5f70 {
    undefined4 sub_007e5f70(byte);
    int sub_007e1760();
};

// @baa 0x007e5f70
undefined4 C_007e5f70::sub_007e5f70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_007e5f70 *)(((char *)this + 4)))->sub_007e1760();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_007e5fa0 {
    undefined4 * sub_007e5fa0(undefined4 *);
    int sub_007e5080(int);
};

// @baa 0x007e5fa0
undefined4 * C_007e5fa0::sub_007e5fa0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_007e5fa0 *)(((char *)this + 4)))->sub_007e5080((int)(param_2 + 1));
  return param_1;
}

struct C_007e5fc0 {
    undefined4 * sub_007e5fc0(undefined4 *);
    int sub_007e5150(int);
};

// @baa 0x007e5fc0
undefined4 * C_007e5fc0::sub_007e5fc0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  ((C_007e5fc0 *)(((char *)this + 0x18)))->sub_007e5150((int)(param_2 + 6));
  return param_1;
}

void sub_007e0f70();
// @baa 0x007e6000
void sub_007e6000(void) { sub_007e0f70(); }

void sub_007e3ee0();
// @baa 0x007e6030
void sub_007e6030(void) { sub_007e3ee0(); }

void sub_007e3f40();
// @baa 0x007e6040
void sub_007e6040(void) { sub_007e3f40(); }

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x007e6b30
void sub_007e6b30(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_007e6b50 { int sub_007e6b50(void); };

// @baa 0x007e6b50
int C_007e6b50::sub_007e6b50(void) { return *(int*)((char*)this + 0); }

int sub_007e1930(void);
// @baa 0x007e6c30
undefined4 UGameEngine::sub_007e6c30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007e1930();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_007e6d50 {
    void sub_007e6d50(undefined4);
};

int sub_007e6c50(...);
// @baa 0x007e6d50
void C_007e6d50::sub_007e6d50(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_007e6c50(param_2,param_1 + 4);
  return;
}

// @baa 0x007ea160
int sub_007ea160(void) { return 1690; }

// @baa 0x007ea170
int ULensFlare::sub_007ea170(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 0x30;
}

// @baa 0x007ea180
int ULensFlare::sub_007ea180(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x84) + *(int *)(param_1 + 0x9c) * 0xc) * 4;
}

// @baa 0x007ea2e0
int ULensFlare::sub_007ea2e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x84) + *(int *)(param_1 + 0x9c) * 0xc) * 4 + 0xb0;
}

int sub_007ea300(void);
// @baa 0x007ea360
undefined4 ULensFlare::sub_007ea360(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007ea300();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_007ea590 {
    int sub_007ea590();
};

// @baa 0x007ea590
int C_007ea590::sub_007ea590(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007ea5b0 {
    int sub_007ea5b0();
};

// @baa 0x007ea5b0
int C_007ea5b0::sub_007ea5b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_007ea5c0 {
    int sub_007ea5c0();
};

// @baa 0x007ea5c0
int C_007ea5c0::sub_007ea5c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_007ea730 {
    int sub_007ea730();
};

// @baa 0x007ea730
int C_007ea730::sub_007ea730(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007ea750 {
    int sub_007ea750();
};

// @baa 0x007ea750
int C_007ea750::sub_007ea750(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x44;
}

struct C_007ea8d0 {
    int sub_007ea8d0();
};

// @baa 0x007ea8d0
int C_007ea8d0::sub_007ea8d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007ea8f0 {
    int sub_007ea8f0();
};

// @baa 0x007ea8f0
int C_007ea8f0::sub_007ea8f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_007ea900 {
    int sub_007ea900();
};

// @baa 0x007ea900
int C_007ea900::sub_007ea900(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x18;
}

struct C_007eaa70 {
    int sub_007eaa70();
};

// @baa 0x007eaa70
int C_007eaa70::sub_007eaa70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007eaa90 {
    int sub_007eaa90();
};

// @baa 0x007eaa90
int C_007eaa90::sub_007eaa90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007eaab0 {
    int sub_007eaab0();
};

// @baa 0x007eaab0
int C_007eaab0::sub_007eaab0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_007eaac0 { void sub_007e4710(int); C_007eaac0 *sub_007eaac0(int); };

// @baa 0x007eaac0
C_007eaac0 *C_007eaac0::sub_007eaac0(int a) { sub_007e4710(a); return this; }

struct C_007eac00 {
    int sub_007eac00(int);
    int sub_007e4e60(int, int);
};

// @baa 0x007eac00
int C_007eac00::sub_007eac00(int param_2)
{
    int * param_1 = (int *)this;
  ((C_007eac00 *)(this))->sub_007e4e60((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x44;
  }
  return 0;
}

struct C_view {
    int sub_007e4f00(int, int);
};

// @baa 0x007eac40
int UState::sub_007eac40(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_007e4f00((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x2c + *param_1;
  }
  return 0;
}

struct C_007eac70 {
    int sub_007eac70();
};

// @baa 0x007eac70
int C_007eac70::sub_007eac70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x2c + *(int *)*param_1;
}

struct TConstSetBitIterator_007ec150 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007ec150(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007ec150& operator++();
};

TConstSetBitIterator_007ec150::TConstSetBitIterator_007ec150(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007ec150
TConstSetBitIterator_007ec150& TConstSetBitIterator_007ec150::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007ec1a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007ec1a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007ec1a0& operator++();
};

TConstSetBitIterator_007ec1a0::TConstSetBitIterator_007ec1a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007ec1a0
TConstSetBitIterator_007ec1a0& TConstSetBitIterator_007ec1a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007ec1f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007ec1f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007ec1f0& operator++();
};

TConstSetBitIterator_007ec1f0::TConstSetBitIterator_007ec1f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007ec1f0
TConstSetBitIterator_007ec1f0& TConstSetBitIterator_007ec1f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007ec240 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007ec240(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007ec240& operator++();
};

TConstSetBitIterator_007ec240::TConstSetBitIterator_007ec240(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007ec240
TConstSetBitIterator_007ec240& TConstSetBitIterator_007ec240::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007ec290 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007ec290(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007ec290& operator++();
};

TConstSetBitIterator_007ec290::TConstSetBitIterator_007ec290(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007ec290
TConstSetBitIterator_007ec290& TConstSetBitIterator_007ec290::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007ec2e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007ec2e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007ec2e0& operator++();
};

TConstSetBitIterator_007ec2e0::TConstSetBitIterator_007ec2e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007ec2e0
TConstSetBitIterator_007ec2e0& TConstSetBitIterator_007ec2e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007ec330 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007ec330(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007ec330& operator++();
};

TConstSetBitIterator_007ec330::TConstSetBitIterator_007ec330(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007ec330
TConstSetBitIterator_007ec330& TConstSetBitIterator_007ec330::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007ec380 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007ec380(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007ec380& operator++();
};

TConstSetBitIterator_007ec380::TConstSetBitIterator_007ec380(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007ec380
TConstSetBitIterator_007ec380& TConstSetBitIterator_007ec380::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007ec3d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007ec3d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007ec3d0& operator++();
};

TConstSetBitIterator_007ec3d0::TConstSetBitIterator_007ec3d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007ec3d0
TConstSetBitIterator_007ec3d0& TConstSetBitIterator_007ec3d0::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x007ec790
int sub_007ec790(void) { return 0; }

// @baa 0x007ec7a0
void __stdcall sub_007ec7a0(int a0) {  }

// @baa 0x007ec7b0
void __stdcall sub_007ec7b0(int a0) {  }

// @baa 0x007ec7c0
int __stdcall sub_007ec7c0(int a0) { return 0; }

// @baa 0x007ec7d0
void __stdcall sub_007ec7d0(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x007ec7e0
void __stdcall sub_007ec7e0(int a0, int a1, int a2, int a3) {  }

// @baa 0x007ec7f0
INT ULineBatchComponent::vf_264(INT a, INT b, INT c, INT d) {
    return 0xFFFFFFFF | 0xFFFFFFFF;
}

// @baa 0x007ec800
void ULineBatchComponent::vf_268(INT a0, INT a1, INT a2, INT a3, INT a4) {  }

// @baa 0x007ec870
ULineBatchComponent::ULineBatchComponent()
{
    FPrimitiveDrawInterfaceView.Dummy = 0;
    BatchLineDrawDepth = 0;
    DefaultLifeTime = 0.0f;
}

int sub_005c7a70(...);
int sub_007ec870(void);
// @baa 0x007ec8f0
undefined4 ULineBatchComponent::sub_007ec8f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007ec870();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x1c0);
  }
  return param_1;
}

int sub_007ec920(void);
// @baa 0x007eca10
undefined4 ULevelBase::sub_007eca10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007ec920();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x84);
  }
  return param_1;
}

void sub_0076d2d0();
// @baa 0x007ede70
void sub_007ede70(void) { sub_0076d2d0(); }

// @baa 0x007ede80
void sub_007ede80(void) { sub_0076d2d0(); }

struct C_007eead0 {
    int sub_007eead0();
};

// @baa 0x007eead0
int C_007eead0::sub_007eead0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x2c + *(int *)*param_1;
}

struct C_007eeae0 {
    int sub_007eeae0();
};

// @baa 0x007eeae0
int C_007eeae0::sub_007eeae0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x2c + 0x18 + *(int *)*param_1;
}

struct TConstSetBitIterator_007eebe0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007eebe0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007eebe0& operator++();
};

TConstSetBitIterator_007eebe0::TConstSetBitIterator_007eebe0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007eebe0
TConstSetBitIterator_007eebe0& TConstSetBitIterator_007eebe0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007eec00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007eec00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007eec00& operator++();
};

TConstSetBitIterator_007eec00::TConstSetBitIterator_007eec00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007eec00
TConstSetBitIterator_007eec00& TConstSetBitIterator_007eec00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007eec20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007eec20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007eec20& operator++();
};

TConstSetBitIterator_007eec20::TConstSetBitIterator_007eec20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007eec20
TConstSetBitIterator_007eec20& TConstSetBitIterator_007eec20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007eec40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007eec40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007eec40& operator++();
};

TConstSetBitIterator_007eec40::TConstSetBitIterator_007eec40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007eec40
TConstSetBitIterator_007eec40& TConstSetBitIterator_007eec40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007eec60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007eec60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007eec60& operator++();
};

TConstSetBitIterator_007eec60::TConstSetBitIterator_007eec60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007eec60
TConstSetBitIterator_007eec60& TConstSetBitIterator_007eec60::operator++()
{
    It.Advance();
    return *this;
}

struct C_007eec80 {
    void sub_007eec80();
    int sub_007eaf30(int);
};

// @baa 0x007eec80
void C_007eec80::sub_007eec80(void)
{
    int param_1 = (int)this;
  ((C_007eec80 *)((*(char **)((char *)this + 0x10))))->sub_007eaf30(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_007eeca0 {
    void sub_007eeca0();
    int sub_007eb0a0(int);
};

// @baa 0x007eeca0
void C_007eeca0::sub_007eeca0(void)
{
    int param_1 = (int)this;
  ((C_007eeca0 *)((*(char **)((char *)this + 0x10))))->sub_007eb0a0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_007eecc0 {
    void sub_007eecc0();
    int sub_007eb200(int);
};

// @baa 0x007eecc0
void C_007eecc0::sub_007eecc0(void)
{
    int param_1 = (int)this;
  ((C_007eecc0 *)((*(char **)((char *)this + 0x10))))->sub_007eb200(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_007eece0 {
    void sub_007eece0();
    int sub_007eb500(int);
};

// @baa 0x007eece0
void C_007eece0::sub_007eece0(void)
{
    int param_1 = (int)this;
  ((C_007eece0 *)((*(char **)((char *)this + 0x10))))->sub_007eb500(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

int sub_007eaed0(void);
// @baa 0x007eed00
undefined4 UObject::sub_007eed00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007eaed0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

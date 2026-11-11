// UnrealEd_1130000.cpp: 39 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_0112f960(void);
// @baa 0x01130c50
undefined4 UObject::sub_01130c50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0112f960();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C& sub_011310a0(int Arg);
};

// @baa 0x011310a0
C& C::sub_011310a0(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

int sub_0111e490(...);
int sub_01126710(void);
extern undefined4 g_026ce6bc;
// @baa 0x01131170
int sub_01131170(void)
{
  if (g_026ce6bc == 0) {
    g_026ce6bc = sub_0111e490(L"UnrealEd");
    sub_01126710();
  }
  return g_026ce6bc;
}

int sub_0111e610(...);
int sub_011269b0(void);
extern undefined4 g_026ce6c4;
// @baa 0x011311a0
int sub_011311a0(void)
{
  if (g_026ce6c4 == 0) {
    g_026ce6c4 = sub_0111e610(L"UnrealEd");
    sub_011269b0();
  }
  return g_026ce6c4;
}

struct C_01131360 {
    undefined4 * sub_01131360(undefined4);
    int sub_01131300(int);
};

extern undefined * g_021bb8f0;
// @baa 0x01131360
undefined4 * C_01131360::sub_01131360(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01131360 *)(this))->sub_01131300(param_2);
  *param_1 = (undefined4)(&g_021bb8f0);
  return param_1;
}

struct C_01131930 { void sub_01121150(); void sub_01131930(int); };

// @baa 0x01131930
void C_01131930::sub_01131930(int) { sub_01121150(); }

struct C_01131c20 {
    void sub_01131c20();
};

int sub_01131a30(void);
extern undefined * g_021c0ad8;
// @baa 0x01131c20
void C_01131c20::sub_01131c20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_021c0ad8);
  sub_01131a30();
  return;
}

struct C_011327d0 {
    undefined4 sub_011327d0(byte);
};

int sub_01132770(void);
// @baa 0x011327d0
undefined4 C_011327d0::sub_011327d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01132770();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_011331d0 {
    undefined4 sub_011331d0(byte);
};

int sub_01133160(void);
// @baa 0x011331d0
undefined4 C_011331d0::sub_011331d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01133160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01136270 {
    undefined4 sub_01136270(byte);
};

int sub_01126da0(void);
// @baa 0x01136270
undefined4 C_01136270::sub_01136270(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01126da0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct A_01137c10 { virtual void sub_01141230(); char pad[408]; };

struct B_01137c10 { virtual void sub_01141230(); };

struct C_01137c10 : A_01137c10, B_01137c10 { virtual void sub_01141230(); C_01137c10(); };

C_01137c10::C_01137c10() {}

// @baa 0x01137c10
void C_01137c10::sub_01141230() {}

struct C_0113bbc0 { void sub_01130b90(int); C_0113bbc0 *sub_0113bbc0(int); };

// @baa 0x0113bbc0
C_0113bbc0 *C_0113bbc0::sub_0113bbc0(int a) { sub_01130b90(a); return this; }

struct C_0113bbe0 {
    int sub_0113bbe0(int);
    int sub_0112f9c0(int, int);
};

// @baa 0x0113bbe0
int C_0113bbe0::sub_0113bbe0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0113bbe0 *)(this))->sub_0112f9c0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x1c;
  }
  return 0;
}

struct C_0113bc20 {
    int sub_0113bc20(int);
    int sub_0112fbc0(int, int);
};

// @baa 0x0113bc20
int C_0113bc20::sub_0113bc20(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0113bc20 *)(this))->sub_0112fbc0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_0113bcb0 {
    int sub_0113bcb0(int);
    int sub_0112fc30(int, int);
};

// @baa 0x0113bcb0
int C_0113bcb0::sub_0113bcb0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0113bcb0 *)(this))->sub_0112fc30((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

// @baa 0x0113bdc0
undefined4 UObject::sub_0113bdc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0112f960();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_0040fcc0();
// @baa 0x0113bde0
void sub_0113bde0(void) { sub_0040fcc0(); }

struct M_0113bdf0 { void sub_0040fcc0(); };

struct C_0113bdf0 { char pad[4]; M_0113bdf0 m; void sub_0113bdf0(); };

// @baa 0x0113bdf0
void C_0113bdf0::sub_0113bdf0() { m.sub_0040fcc0(); }

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

struct TConstSetBitIterator_0113c1d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0113c1d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0113c1d0& operator++();
};

TConstSetBitIterator_0113c1d0::TConstSetBitIterator_0113c1d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0113c1d0
TConstSetBitIterator_0113c1d0& TConstSetBitIterator_0113c1d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0113c1f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0113c1f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0113c1f0& operator++();
};

TConstSetBitIterator_0113c1f0::TConstSetBitIterator_0113c1f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0113c1f0
TConstSetBitIterator_0113c1f0& TConstSetBitIterator_0113c1f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0113c210 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0113c210(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0113c210& operator++();
};

TConstSetBitIterator_0113c210::TConstSetBitIterator_0113c210(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0113c210
TConstSetBitIterator_0113c210& TConstSetBitIterator_0113c210::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0113c230 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0113c230(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0113c230& operator++();
};

TConstSetBitIterator_0113c230::TConstSetBitIterator_0113c230(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0113c230
TConstSetBitIterator_0113c230& TConstSetBitIterator_0113c230::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0113c250 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0113c250(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0113c250& operator++();
};

TConstSetBitIterator_0113c250::TConstSetBitIterator_0113c250(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0113c250
TConstSetBitIterator_0113c250& TConstSetBitIterator_0113c250::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0113c270 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0113c270(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0113c270& operator++();
};

TConstSetBitIterator_0113c270::TConstSetBitIterator_0113c270(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0113c270
TConstSetBitIterator_0113c270& TConstSetBitIterator_0113c270::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0113c2c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0113c2c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0113c2c0& operator++();
};

TConstSetBitIterator_0113c2c0::TConstSetBitIterator_0113c2c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0113c2c0
TConstSetBitIterator_0113c2c0& TConstSetBitIterator_0113c2c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0113c310 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0113c310(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0113c310& operator++();
};

TConstSetBitIterator_0113c310::TConstSetBitIterator_0113c310(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0113c310
TConstSetBitIterator_0113c310& TConstSetBitIterator_0113c310::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0113c360 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0113c360(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0113c360& operator++();
};

TConstSetBitIterator_0113c360::TConstSetBitIterator_0113c360(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0113c360
TConstSetBitIterator_0113c360& TConstSetBitIterator_0113c360::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0113c3b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0113c3b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0113c3b0& operator++();
};

TConstSetBitIterator_0113c3b0::TConstSetBitIterator_0113c3b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0113c3b0
TConstSetBitIterator_0113c3b0& TConstSetBitIterator_0113c3b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0113c400 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0113c400(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0113c400& operator++();
};

TConstSetBitIterator_0113c400::TConstSetBitIterator_0113c400(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0113c400
TConstSetBitIterator_0113c400& TConstSetBitIterator_0113c400::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0113c420 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0113c420(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0113c420& operator++();
};

TConstSetBitIterator_0113c420::TConstSetBitIterator_0113c420(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0113c420
TConstSetBitIterator_0113c420& TConstSetBitIterator_0113c420::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0113c440 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0113c440(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0113c440& operator++();
};

TConstSetBitIterator_0113c440::TConstSetBitIterator_0113c440(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0113c440
TConstSetBitIterator_0113c440& TConstSetBitIterator_0113c440::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0113c460 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0113c460(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0113c460& operator++();
};

TConstSetBitIterator_0113c460::TConstSetBitIterator_0113c460(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0113c460
TConstSetBitIterator_0113c460& TConstSetBitIterator_0113c460::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0113c4b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0113c4b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0113c4b0& operator++();
};

TConstSetBitIterator_0113c4b0::TConstSetBitIterator_0113c4b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0113c4b0
TConstSetBitIterator_0113c4b0& TConstSetBitIterator_0113c4b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0113c500 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0113c500(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0113c500& operator++();
};

TConstSetBitIterator_0113c500::TConstSetBitIterator_0113c500(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0113c500
TConstSetBitIterator_0113c500& TConstSetBitIterator_0113c500::operator++()
{
    It.Advance();
    return *this;
}

struct C_0113c970 { void sub_011311d0(int); C_0113c970 *sub_0113c970(int); };

// @baa 0x0113c970
C_0113c970 *C_0113c970::sub_0113c970(int a) { sub_011311d0(a); return this; }

struct C_0113d050 {
    undefined4 sub_0113d050(byte);
};

int sub_01131860(void);
// @baa 0x0113d050
undefined4 C_0113d050::sub_0113d050(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01131860();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0113d070 {
    undefined4 sub_0113d070(byte);
};

// @baa 0x0113d070
undefined4 C_0113d070::sub_0113d070(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01131a30();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0113d090 {
    undefined4 * sub_0113d090(byte);
};

// @baa 0x0113d090
undefined4 * C_0113d090::sub_0113d090(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_021c0ad8);
  sub_01131a30();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0113d0c0 {
    undefined4 sub_0113d0c0(byte);
};

int sub_011334c0(void);
// @baa 0x0113d0c0
undefined4 C_0113d0c0::sub_0113d0c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011334c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

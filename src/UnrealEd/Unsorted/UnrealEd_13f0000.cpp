// UnrealEd_13f0000.cpp: 50 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct A_013f0f10 { virtual void sub_013f6580(); char pad[332]; };

struct B_013f0f10 { virtual void sub_013f6580(); };

struct C_013f0f10 : A_013f0f10, B_013f0f10 { virtual void sub_013f6580(); C_013f0f10(); };

C_013f0f10::C_013f0f10() {}

// @baa 0x013f0f10
void C_013f0f10::sub_013f6580() {}

struct C {
    undefined4 sub_013f35e0(byte);
};

int sub_0053dfa0(...);
int sub_013ec2f0(void);
// @baa 0x013f35e0
undefined4 C::sub_013f35e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013ec2f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013f4050 {
    int sub_013f4050();
};

// @baa 0x013f4050
int C_013f4050::sub_013f4050(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[2] * 0x3c;
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

struct TConstSetBitIterator_013f4930 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013f4930(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013f4930& operator++();
};

TConstSetBitIterator_013f4930::TConstSetBitIterator_013f4930(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013f4930
TConstSetBitIterator_013f4930& TConstSetBitIterator_013f4930::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013f4980 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013f4980(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013f4980& operator++();
};

TConstSetBitIterator_013f4980::TConstSetBitIterator_013f4980(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013f4980
TConstSetBitIterator_013f4980& TConstSetBitIterator_013f4980::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013f49d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013f49d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013f49d0& operator++();
};

TConstSetBitIterator_013f49d0::TConstSetBitIterator_013f49d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013f49d0
TConstSetBitIterator_013f49d0& TConstSetBitIterator_013f49d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013f4a20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013f4a20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013f4a20& operator++();
};

TConstSetBitIterator_013f4a20::TConstSetBitIterator_013f4a20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013f4a20
TConstSetBitIterator_013f4a20& TConstSetBitIterator_013f4a20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013f4a70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013f4a70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013f4a70& operator++();
};

TConstSetBitIterator_013f4a70::TConstSetBitIterator_013f4a70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013f4a70
TConstSetBitIterator_013f4a70& TConstSetBitIterator_013f4a70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013f4ac0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013f4ac0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013f4ac0& operator++();
};

TConstSetBitIterator_013f4ac0::TConstSetBitIterator_013f4ac0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013f4ac0
TConstSetBitIterator_013f4ac0& TConstSetBitIterator_013f4ac0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013f4b10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013f4b10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013f4b10& operator++();
};

TConstSetBitIterator_013f4b10::TConstSetBitIterator_013f4b10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013f4b10
TConstSetBitIterator_013f4b10& TConstSetBitIterator_013f4b10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013f4da0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013f4da0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013f4da0& operator++();
};

TConstSetBitIterator_013f4da0::TConstSetBitIterator_013f4da0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013f4da0
TConstSetBitIterator_013f4da0& TConstSetBitIterator_013f4da0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013f4df0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013f4df0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013f4df0& operator++();
};

TConstSetBitIterator_013f4df0::TConstSetBitIterator_013f4df0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013f4df0
TConstSetBitIterator_013f4df0& TConstSetBitIterator_013f4df0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013f4e40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013f4e40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013f4e40& operator++();
};

TConstSetBitIterator_013f4e40::TConstSetBitIterator_013f4e40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013f4e40
TConstSetBitIterator_013f4e40& TConstSetBitIterator_013f4e40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013f4e90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013f4e90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013f4e90& operator++();
};

TConstSetBitIterator_013f4e90::TConstSetBitIterator_013f4e90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013f4e90
TConstSetBitIterator_013f4e90& TConstSetBitIterator_013f4e90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013f4ee0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013f4ee0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013f4ee0& operator++();
};

TConstSetBitIterator_013f4ee0::TConstSetBitIterator_013f4ee0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013f4ee0
TConstSetBitIterator_013f4ee0& TConstSetBitIterator_013f4ee0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013f4f30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013f4f30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013f4f30& operator++();
};

TConstSetBitIterator_013f4f30::TConstSetBitIterator_013f4f30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013f4f30
TConstSetBitIterator_013f4f30& TConstSetBitIterator_013f4f30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013f4f80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013f4f80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013f4f80& operator++();
};

TConstSetBitIterator_013f4f80::TConstSetBitIterator_013f4f80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013f4f80
TConstSetBitIterator_013f4f80& TConstSetBitIterator_013f4f80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013f50b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013f50b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013f50b0& operator++();
};

TConstSetBitIterator_013f50b0::TConstSetBitIterator_013f50b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013f50b0
TConstSetBitIterator_013f50b0& TConstSetBitIterator_013f50b0::operator++()
{
    It.Advance();
    return *this;
}

struct M_013f5100 { void sub_00553180(); };

struct C_013f5100 { char pad[8]; M_013f5100 m; void sub_013f5100(); };

// @baa 0x013f5100
void C_013f5100::sub_013f5100() { m.sub_00553180(); }

struct A_013f6100 { virtual void sub_013f6110(); char pad[4]; };

struct B_013f6100 { virtual void sub_013f6110(); };

struct C_013f6100 : A_013f6100, B_013f6100 { virtual void sub_013f6110(); C_013f6100(); };

C_013f6100::C_013f6100() {}

// @baa 0x013f6100
void C_013f6100::sub_013f6110() {}

struct C_013f6580 {
    undefined4 sub_013f6580(byte);
};

int sub_013f0f20(void);
// @baa 0x013f6580
undefined4 C_013f6580::sub_013f6580(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013f0f20();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013f6c10 {
    undefined4 sub_013f6c10(byte);
};

int sub_013f1890(void);
// @baa 0x013f6c10
undefined4 C_013f6c10::sub_013f6c10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013f1890();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_013f8b00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013f8b00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013f8b00& operator++();
};

TConstSetBitIterator_013f8b00::TConstSetBitIterator_013f8b00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013f8b00
TConstSetBitIterator_013f8b00& TConstSetBitIterator_013f8b00::operator++()
{
    It.Advance();
    return *this;
}

struct C_013f9060 { void sub_013f8f50(); void sub_013f9060(int); };

// @baa 0x013f9060
void C_013f9060::sub_013f9060(int) { sub_013f8f50(); }

void sub_013f7cd0();
// @baa 0x013f98d0
void sub_013f98d0(void) { sub_013f7cd0(); }

void sub_013f7d60();
// @baa 0x013f98e0
void sub_013f98e0(void) { sub_013f7d60(); }

void sub_013f7f40();
// @baa 0x013f9a50
void sub_013f9a50(void) { sub_013f7f40(); }

struct C_013fa0a0 {
    int sub_013fa0a0();
};

int sub_013f48d0(void);
// @baa 0x013fa0a0
int C_013fa0a0::sub_013fa0a0(void)
{
    int param_1 = (int)this;

  sub_013f48d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_013fa520 {
    int sub_013fa520();
};

int sub_013f4b60(void);
// @baa 0x013fa520
int C_013fa520::sub_013fa520(void)
{
    int param_1 = (int)this;

  sub_013f4b60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_013fa540 {
    int sub_013fa540();
};

int sub_013f4bc0(void);
// @baa 0x013fa540
int C_013fa540::sub_013fa540(void)
{
    int param_1 = (int)this;

  sub_013f4bc0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_013fa560 {
    int sub_013fa560();
};

int sub_013f4c20(void);
// @baa 0x013fa560
int C_013fa560::sub_013fa560(void)
{
    int param_1 = (int)this;

  sub_013f4c20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_013fa580 {
    int sub_013fa580();
};

int sub_013f4c80(void);
// @baa 0x013fa580
int C_013fa580::sub_013fa580(void)
{
    int param_1 = (int)this;

  sub_013f4c80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_013fa5a0 {
    int sub_013fa5a0();
};

int sub_013f4ce0(void);
// @baa 0x013fa5a0
int C_013fa5a0::sub_013fa5a0(void)
{
    int param_1 = (int)this;

  sub_013f4ce0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_013fa5c0 {
    int sub_013fa5c0();
};

int sub_013f4d40(void);
// @baa 0x013fa5c0
int C_013fa5c0::sub_013fa5c0(void)
{
    int param_1 = (int)this;

  sub_013f4d40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_013fb6c0 {
    undefined4 sub_013fb6c0(byte);
};

int sub_013e2f40(void);
// @baa 0x013fb6c0
undefined4 C_013fb6c0::sub_013fb6c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013e2f40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct A_013fba40 { virtual void sub_013fba50(); char pad[332]; };

struct B_013fba40 { virtual void sub_013fba50(); };

struct C_013fba40 : A_013fba40, B_013fba40 { virtual void sub_013fba50(); C_013fba40(); };

C_013fba40::C_013fba40() {}

// @baa 0x013fba40
void C_013fba40::sub_013fba50() {}

// @baa 0x013fbdc0
void sub_013fbdc0(void) { sub_013f7f40(); }

struct C_013fc450 {
    int sub_013fc450();
};

// @baa 0x013fc450
int C_013fc450::sub_013fc450(void)
{
    int param_1 = (int)this;

  sub_013f48d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_013fcd50 {
    int sub_013fcd50();
};

// @baa 0x013fcd50
int C_013fcd50::sub_013fcd50(void)
{
    int param_1 = (int)this;

  sub_013f4b60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_013fcd70 {
    int sub_013fcd70();
};

// @baa 0x013fcd70
int C_013fcd70::sub_013fcd70(void)
{
    int param_1 = (int)this;

  sub_013f4bc0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_013fcd90 {
    int sub_013fcd90();
};

// @baa 0x013fcd90
int C_013fcd90::sub_013fcd90(void)
{
    int param_1 = (int)this;

  sub_013f4c20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_013fcdb0 {
    int sub_013fcdb0();
};

// @baa 0x013fcdb0
int C_013fcdb0::sub_013fcdb0(void)
{
    int param_1 = (int)this;

  sub_013f4c80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_013fcdd0 {
    int sub_013fcdd0();
};

// @baa 0x013fcdd0
int C_013fcdd0::sub_013fcdd0(void)
{
    int param_1 = (int)this;

  sub_013f4ce0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_013fcdf0 {
    int sub_013fcdf0();
};

// @baa 0x013fcdf0
int C_013fcdf0::sub_013fcdf0(void)
{
    int param_1 = (int)this;

  sub_013f4d40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_013fbd50();
// @baa 0x013fce90
void sub_013fce90(void) { sub_013fbd50(); }

void sub_013fbce0();
// @baa 0x013fcea0
void sub_013fcea0(void) { sub_013fbce0(); }

void sub_013fbdd0();
// @baa 0x013fe270
void sub_013fe270(void) { sub_013fbdd0(); }

void sub_013fbe40();
// @baa 0x013fe280
void sub_013fe280(void) { sub_013fbe40(); }

void sub_013fbf20();
// @baa 0x013fed10
void sub_013fed10(void) { sub_013fbf20(); }

void sub_013fbf90();
// @baa 0x013fed20
void sub_013fed20(void) { sub_013fbf90(); }

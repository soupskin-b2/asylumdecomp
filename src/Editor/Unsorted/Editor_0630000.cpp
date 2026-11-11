// Editor_0630000.cpp: 10 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int sub_00630fe0();
};

// @baa 0x00630fe0
int C::sub_00630fe0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *(int *)*param_1 + param_1[5] * 0x24;
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

struct TConstSetBitIterator_00630ff0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00630ff0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00630ff0& operator++();
};

TConstSetBitIterator_00630ff0::TConstSetBitIterator_00630ff0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00630ff0
TConstSetBitIterator_00630ff0& TConstSetBitIterator_00630ff0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00631040 {
    void sub_00631040(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

int sub_00630f20(...);
// @baa 0x00631040
void C_00631040::sub_00631040(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

struct C_00631090 {
    void sub_00631090(undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00631090
void C_00631090::sub_00631090(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    undefined4 param_1 = (undefined4)this;
  sub_00630f20(param_1,param_2,param_3,param_4,param_5);
  return;
}

struct C_006310b0 {
    void sub_006310b0(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x006310b0
void C_006310b0::sub_006310b0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 param_1 = (undefined4)this;
  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

struct C_006310e0 {
    void sub_006310e0(undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x006310e0
void C_006310e0::sub_006310e0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

struct C_00631110 {
    void sub_00631110(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00631110
void C_00631110::sub_00631110(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

struct C_00631140 {
    void sub_00631140(undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00631140
void C_00631140::sub_00631140(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

struct TConstSetBitIterator_00631170 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00631170(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00631170& operator++();
};

TConstSetBitIterator_00631170::TConstSetBitIterator_00631170(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00631170
TConstSetBitIterator_00631170& TConstSetBitIterator_00631170::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00631190 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00631190(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00631190& operator++();
};

TConstSetBitIterator_00631190::TConstSetBitIterator_00631190(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00631190
TConstSetBitIterator_00631190& TConstSetBitIterator_00631190::operator++()
{
    It.Advance();
    return *this;
}

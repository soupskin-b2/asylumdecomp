// Engine_16c0000.cpp: 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int sub_016c7520(int);
    int sub_016c5fd0(int, int);
};

// @baa 0x016c7520
int C::sub_016c7520(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C *)(this))->sub_016c5fd0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_016c7560 {
    int sub_016c7560(int);
    int sub_016c5fd0(int, int);
};

// @baa 0x016c7560
int C_016c7560::sub_016c7560(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_016c7560 *)(this))->sub_016c5fd0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_016c7710 {
    void sub_016c7710();
    int sub_016c6990(int);
};

// @baa 0x016c7710
void C_016c7710::sub_016c7710(void)
{
    int param_1 = (int)this;
  ((C_016c7710 *)((*(char **)((char *)this + 0x10))))->sub_016c6990(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
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

struct TConstSetBitIterator_016c7730 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_016c7730(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_016c7730& operator++();
};

TConstSetBitIterator_016c7730::TConstSetBitIterator_016c7730(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x016c7730
TConstSetBitIterator_016c7730& TConstSetBitIterator_016c7730::operator++()
{
    It.Advance();
    return *this;
}

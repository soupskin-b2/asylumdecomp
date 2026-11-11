// UnTexCompress.cpp: 21 functions
// Placed here by: neighbours 20, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x00717ce0
void __stdcall sub_00717ce0(int a0) {  }

// @baa 0x00d51420
void __stdcall sub_00d51420(int a0, int a1, int a2, int a3, int a4, int a5) {  }

struct C { void sub_00d4cef0(int); C *sub_00d51c00(int); };

// @baa 0x00d51c00
C *C::sub_00d51c00(int a) { sub_00d4cef0(a); return this; }

struct C_00d51e70 { int sub_00d51e70(void); };

// @baa 0x00d51e70
int C_00d51e70::sub_00d51e70(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00d51e80 {
    int sub_00d51e80();
};

// @baa 0x00d51e80
int C_00d51e80::sub_00d51e80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d51ea0 {
    int sub_00d51ea0(int);
};

// @baa 0x00d51ea0
int C_00d51ea0::sub_00d51ea0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00d51f70 {
    int sub_00d51f70(int);
};

// @baa 0x00d51f70
int C_00d51f70::sub_00d51f70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00d51f80 {
    int sub_00d51f80();
};

// @baa 0x00d51f80
int C_00d51f80::sub_00d51f80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

struct C_00d51f90 {
    int sub_00d51f90();
};

// @baa 0x00d51f90
int C_00d51f90::sub_00d51f90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x10 + *(int *)*param_1;
}

struct C_00d51fa0 {
    undefined4 sub_00d51fa0(byte);
    int sub_00602210();
};

int sub_0053dfa0(...);
// @baa 0x00d51fa0
undefined4 C_00d51fa0::sub_00d51fa0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00d51fa0 *)(((char *)this + 0xc)))->sub_00602210();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00d51fd0 {
    undefined4 sub_00d51fd0(byte);
};

int sub_00d4c340(void);
// @baa 0x00d51fd0
undefined4 C_00d51fd0::sub_00d51fd0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d4c340();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00d51ff0 {
    undefined4 sub_00d51ff0(byte);
};

int sub_00d4c270(void);
// @baa 0x00d51ff0
undefined4 C_00d51ff0::sub_00d51ff0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d4c270();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00d52010 {
    int sub_00d52010(int);
};

// @baa 0x00d52010
int C_00d52010::sub_00d52010(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00d52080 {
    int sub_00d52080(int);
};

// @baa 0x00d52080
int C_00d52080::sub_00d52080(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x24;
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

struct TConstSetBitIterator_00d521b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d521b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d521b0& operator++();
};

TConstSetBitIterator_00d521b0::TConstSetBitIterator_00d521b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d521b0
TConstSetBitIterator_00d521b0& TConstSetBitIterator_00d521b0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00d52270 {
    int sub_00d52270();
};

// @baa 0x00d52270
int C_00d52270::sub_00d52270(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[2] * 0x18;
}

struct TConstSetBitIterator_00d52280 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d52280(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d52280& operator++();
};

TConstSetBitIterator_00d52280::TConstSetBitIterator_00d52280(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d52280
TConstSetBitIterator_00d52280& TConstSetBitIterator_00d52280::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d522d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d522d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d522d0& operator++();
};

TConstSetBitIterator_00d522d0::TConstSetBitIterator_00d522d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d522d0
TConstSetBitIterator_00d522d0& TConstSetBitIterator_00d522d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d52320 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d52320(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d52320& operator++();
};

TConstSetBitIterator_00d52320::TConstSetBitIterator_00d52320(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d52320
TConstSetBitIterator_00d52320& TConstSetBitIterator_00d52320::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d52370 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d52370(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d52370& operator++();
};

TConstSetBitIterator_00d52370::TConstSetBitIterator_00d52370(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d52370
TConstSetBitIterator_00d52370& TConstSetBitIterator_00d52370::operator++()
{
    It.Advance();
    return *this;
}

struct C_00d52960 {
    undefined4 sub_00d52960(byte);
};

int sub_00d514d0(void);
// @baa 0x00d52960
undefined4 C_00d52960::sub_00d52960(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d514d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

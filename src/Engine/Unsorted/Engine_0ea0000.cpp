// Engine_0ea0000.cpp: 14 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int sub_00ea5b30(int);
};

// @baa 0x00ea5b30
int C::sub_00ea5b30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x9c + *param_1;
}

struct C_00ea5be0 {
    int sub_00ea5be0(int);
};

// @baa 0x00ea5be0
int C_00ea5be0::sub_00ea5be0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x9c + *param_1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00ea5bf0 { void* Data; int Num; int Max; void sub_00ea5bf0(); };

// @baa 0x00ea5bf0
void C_00ea5bf0::sub_00ea5bf0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00ea5da0 {
    void sub_00ea5da0(int);
};

int sub_0053df70(...);
// @baa 0x00ea5da0
void C_00ea5da0::sub_00ea5da0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x9c,8);
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

struct TConstSetBitIterator_00ea5de0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ea5de0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ea5de0& operator++();
};

TConstSetBitIterator_00ea5de0::TConstSetBitIterator_00ea5de0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ea5de0
TConstSetBitIterator_00ea5de0& TConstSetBitIterator_00ea5de0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ea5e00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ea5e00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ea5e00& operator++();
};

TConstSetBitIterator_00ea5e00::TConstSetBitIterator_00ea5e00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ea5e00
TConstSetBitIterator_00ea5e00& TConstSetBitIterator_00ea5e00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ea5e50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ea5e50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ea5e50& operator++();
};

TConstSetBitIterator_00ea5e50::TConstSetBitIterator_00ea5e50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ea5e50
TConstSetBitIterator_00ea5e50& TConstSetBitIterator_00ea5e50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ea5e70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ea5e70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ea5e70& operator++();
};

TConstSetBitIterator_00ea5e70::TConstSetBitIterator_00ea5e70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ea5e70
TConstSetBitIterator_00ea5e70& TConstSetBitIterator_00ea5e70::operator++()
{
    It.Advance();
    return *this;
}

struct C_00eaa3a0 {
    int sub_00eaa3a0(int);
    int sub_00ea5b40(int, int);
};

// @baa 0x00eaa3a0
int C_00eaa3a0::sub_00eaa3a0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00eaa3a0 *)(this))->sub_00ea5b40((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x9c + *param_1;
  }
  return 0;
}

struct TConstSetBitIterator_00eaa4d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00eaa4d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00eaa4d0& operator++();
};

TConstSetBitIterator_00eaa4d0::TConstSetBitIterator_00eaa4d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00eaa4d0
TConstSetBitIterator_00eaa4d0& TConstSetBitIterator_00eaa4d0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00eaad80 { void sub_00eaac30(int); C_00eaad80 *sub_00eaad80(int); };

// @baa 0x00eaad80
C_00eaad80 *C_00eaad80::sub_00eaad80(int a) { sub_00eaac30(a); return this; }

struct S_00eaada0 { int sub_00eaad20(); };

struct C_00eaada0 { int a; C_00eaada0(S_00eaada0 *); };

// @baa 0x00eaada0
C_00eaada0::C_00eaada0(S_00eaada0 *s) : a(s->sub_00eaad20()) {}

struct M_00eaff60 { void sub_006d66e0(); };

struct C_00eaff60 { char pad[4]; M_00eaff60 m; void sub_00eaff60(); };

// @baa 0x00eaff60
void C_00eaff60::sub_00eaff60() { m.sub_006d66e0(); }

struct C_00eaffe0 {
    undefined4 * sub_00eaffe0(undefined4);
    int sub_0074f0b0(int);
};

extern undefined4 g_021284bc;
// @baa 0x00eaffe0
undefined4 * C_00eaffe0::sub_00eaffe0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(&g_021284bc);
  ((C_00eaffe0 *)(((char *)this + 4)))->sub_0074f0b0(param_2);
  return param_1;
}

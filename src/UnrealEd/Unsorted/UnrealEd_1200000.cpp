// UnrealEd_1200000.cpp: 75 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C { void sub_011ffea0(); void sub_01200030(int); };

// @baa 0x01200030
void C::sub_01200030(int) { sub_011ffea0(); }

struct C_01200ba0 { void sub_00ff6db0(int); C_01200ba0 *sub_01200ba0(int); };

// @baa 0x01200ba0
C_01200ba0 *C_01200ba0::sub_01200ba0(int a) { sub_00ff6db0(a); return this; }

struct C_012053a0 {
    undefined4 sub_012053a0(byte);
};

int sub_0053dfa0(...);
int sub_011fb5a0(void);
// @baa 0x012053a0
undefined4 C_012053a0::sub_012053a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011fb5a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_005c7a70(...);
int sub_01206570(void);
// @baa 0x012066b0
undefined4 UPropertyWindowManager::sub_012066b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01206570();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0xd0);
  }
  return param_1;
}

struct X {
    void sub_011fd650();
};

struct C_012066f0 {
    char _0[8];
    X* x;
    void sub_012066f0();
};

// @baa 0x012066f0
void C_012066f0::sub_012066f0() {
    x->sub_011fd650();
}

class wxCommandEvent;
class wxGrid;
class wxCommandEvent {
    public:
    public: __declspec(dllimport) int GetInt() const;
    friend struct C_01208380;
};

class wxGrid {
    public:
    public: __declspec(dllimport) void ClearSelection();
    friend struct C_01208380;
};

struct C_01208380 {
    void sub_01208380(wxCommandEvent *);
    int sub_012075f0(int);
};

// @baa 0x01208380
void C_01208380::sub_01208380(wxCommandEvent * param_2)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((wxCommandEvent *)(param_2))->wxCommandEvent::GetInt();
  *(int *)(param_1 + 0x194) = iVar1;
  ((wxGrid *)(*(wxGrid **)(param_1 + 0x19c)))->wxGrid::ClearSelection();
  ((C_01208380 *)(this))->sub_012075f0(param_1 + 0x1d4);
  return;
}

struct C_01208480 {
    void sub_01208480(undefined4);
};

int sub_007e3de0(...);
int sub_007e6c50(...);
// @baa 0x01208480
void C_01208480::sub_01208480(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_007e3de0(param_2,param_1 + 0x1c);
  sub_007e6c50(param_2,param_1 + 0x50);
  return;
}

struct C_01208860 {
    int sub_01208860();
};

// @baa 0x01208860
int C_01208860::sub_01208860(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01208880 {
    int sub_01208880();
};

// @baa 0x01208880
int C_01208880::sub_01208880(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_01208890 {
    int sub_01208890();
};

// @baa 0x01208890
int C_01208890::sub_01208890(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_012088b0 {
    int sub_012088b0();
};

// @baa 0x012088b0
int C_012088b0::sub_012088b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_012088c0 {
    int sub_012088c0();
};

// @baa 0x012088c0
int C_012088c0::sub_012088c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[5] * 0x18;
}

struct C_012088d0 {
    int sub_012088d0(int);
    int sub_01201110(int, int);
};

// @baa 0x012088d0
int C_012088d0::sub_012088d0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_012088d0 *)(this))->sub_01201110((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_01208900 {
    int sub_01208900(int);
    int sub_012012e0(int, int);
};

// @baa 0x01208900
int C_01208900::sub_01208900(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01208900 *)(this))->sub_012012e0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x1c;
  }
  return 0;
}

struct C_01208940 {
    int sub_01208940(int);
    int sub_012014f0(int, int);
};

// @baa 0x01208940
int C_01208940::sub_01208940(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01208940 *)(this))->sub_012014f0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_01208970 {
    int sub_01208970(int);
    int sub_012016b0(int, int);
};

// @baa 0x01208970
int C_01208970::sub_01208970(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01208970 *)(this))->sub_012016b0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_012089a0 {
    int sub_012089a0(int);
    int sub_01201720(int, int);
};

// @baa 0x012089a0
int C_012089a0::sub_012089a0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_012089a0 *)(this))->sub_01201720((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

int sub_01201090(void);
// @baa 0x01208ba0
undefined4 UObject::sub_01208ba0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01201090();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
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

struct TConstSetBitIterator_01208bc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01208bc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01208bc0& operator++();
};

TConstSetBitIterator_01208bc0::TConstSetBitIterator_01208bc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01208bc0
TConstSetBitIterator_01208bc0& TConstSetBitIterator_01208bc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01208be0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01208be0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01208be0& operator++();
};

TConstSetBitIterator_01208be0::TConstSetBitIterator_01208be0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01208be0
TConstSetBitIterator_01208be0& TConstSetBitIterator_01208be0::operator++()
{
    It.Advance();
    return *this;
}

int sub_0040fcc0(void);
// @baa 0x01208c00
undefined4 UObject::sub_01208c00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x01208c20
undefined4 UObject::sub_01208c20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x01208c40
undefined4 UObject::sub_01208c40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_01209360 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01209360(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01209360& operator++();
};

TConstSetBitIterator_01209360::TConstSetBitIterator_01209360(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01209360
TConstSetBitIterator_01209360& TConstSetBitIterator_01209360::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01209380 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01209380(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01209380& operator++();
};

TConstSetBitIterator_01209380::TConstSetBitIterator_01209380(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01209380
TConstSetBitIterator_01209380& TConstSetBitIterator_01209380::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_012093a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_012093a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_012093a0& operator++();
};

TConstSetBitIterator_012093a0::TConstSetBitIterator_012093a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x012093a0
TConstSetBitIterator_012093a0& TConstSetBitIterator_012093a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_012093f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_012093f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_012093f0& operator++();
};

TConstSetBitIterator_012093f0::TConstSetBitIterator_012093f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x012093f0
TConstSetBitIterator_012093f0& TConstSetBitIterator_012093f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01209440 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01209440(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01209440& operator++();
};

TConstSetBitIterator_01209440::TConstSetBitIterator_01209440(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01209440
TConstSetBitIterator_01209440& TConstSetBitIterator_01209440::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01209490 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01209490(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01209490& operator++();
};

TConstSetBitIterator_01209490::TConstSetBitIterator_01209490(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01209490
TConstSetBitIterator_01209490& TConstSetBitIterator_01209490::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_012094e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_012094e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_012094e0& operator++();
};

TConstSetBitIterator_012094e0::TConstSetBitIterator_012094e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x012094e0
TConstSetBitIterator_012094e0& TConstSetBitIterator_012094e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01209500 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01209500(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01209500& operator++();
};

TConstSetBitIterator_01209500::TConstSetBitIterator_01209500(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01209500
TConstSetBitIterator_01209500& TConstSetBitIterator_01209500::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01209520 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01209520(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01209520& operator++();
};

TConstSetBitIterator_01209520::TConstSetBitIterator_01209520(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01209520
TConstSetBitIterator_01209520& TConstSetBitIterator_01209520::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01209540 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01209540(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01209540& operator++();
};

TConstSetBitIterator_01209540::TConstSetBitIterator_01209540(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01209540
TConstSetBitIterator_01209540& TConstSetBitIterator_01209540::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01209560 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01209560(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01209560& operator++();
};

TConstSetBitIterator_01209560::TConstSetBitIterator_01209560(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01209560
TConstSetBitIterator_01209560& TConstSetBitIterator_01209560::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01209580 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01209580(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01209580& operator++();
};

TConstSetBitIterator_01209580::TConstSetBitIterator_01209580(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01209580
TConstSetBitIterator_01209580& TConstSetBitIterator_01209580::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_012095a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_012095a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_012095a0& operator++();
};

TConstSetBitIterator_012095a0::TConstSetBitIterator_012095a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x012095a0
TConstSetBitIterator_012095a0& TConstSetBitIterator_012095a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_012095f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_012095f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_012095f0& operator++();
};

TConstSetBitIterator_012095f0::TConstSetBitIterator_012095f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x012095f0
TConstSetBitIterator_012095f0& TConstSetBitIterator_012095f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01209640 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01209640(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01209640& operator++();
};

TConstSetBitIterator_01209640::TConstSetBitIterator_01209640(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01209640
TConstSetBitIterator_01209640& TConstSetBitIterator_01209640::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01209690 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01209690(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01209690& operator++();
};

TConstSetBitIterator_01209690::TConstSetBitIterator_01209690(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01209690
TConstSetBitIterator_01209690& TConstSetBitIterator_01209690::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_012096e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_012096e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_012096e0& operator++();
};

TConstSetBitIterator_012096e0::TConstSetBitIterator_012096e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x012096e0
TConstSetBitIterator_012096e0& TConstSetBitIterator_012096e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01209730 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01209730(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01209730& operator++();
};

TConstSetBitIterator_01209730::TConstSetBitIterator_01209730(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01209730
TConstSetBitIterator_01209730& TConstSetBitIterator_01209730::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01209780 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01209780(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01209780& operator++();
};

TConstSetBitIterator_01209780::TConstSetBitIterator_01209780(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01209780
TConstSetBitIterator_01209780& TConstSetBitIterator_01209780::operator++()
{
    It.Advance();
    return *this;
}

int sub_01a37872(...);
int sub_01e262c0(...);
extern undefined4 g_026d34fc;
extern undefined4 g_026d3500;
extern undefined4 g_026d3504;
extern undefined4 g_026d3508;
// @baa 0x0120afc0
undefined4 * sub_0120afc0(void)
{
  if ((g_026d3508 & 1) == 0) {
    g_026d3508 = g_026d3508 | 1;
    g_026d34fc = 0;
    g_026d3500 = 0;
    g_026d3504 = 0;
    sub_01a37872(&sub_01e262c0);
  }
  return &g_026d34fc;
}

extern char g_021f8c44[];
// @baa 0x0120ccd0
int sub_0120ccd0(void) { return (int)g_021f8c44; }

struct A_0120cce0 { virtual void sub_0120cdd0(); char pad[320]; };

struct B_0120cce0 { virtual void sub_0120cdd0(); };

struct C_0120cce0 : A_0120cce0, B_0120cce0 { virtual void sub_0120cdd0(); C_0120cce0(); };

C_0120cce0::C_0120cce0() {}

// @baa 0x0120cce0
void C_0120cce0::sub_0120cdd0() {}

struct A_0120ccf0 { virtual void sub_0120cdd0(); char pad[384]; };

struct B_0120ccf0 { virtual void sub_0120cdd0(); };

struct C_0120ccf0 : A_0120ccf0, B_0120ccf0 { virtual void sub_0120cdd0(); C_0120ccf0(); };

C_0120ccf0::C_0120ccf0() {}

// @baa 0x0120ccf0
void C_0120ccf0::sub_0120cdd0() {}

struct A_0120cd00 { virtual void sub_0120cdd0(); char pad[324]; };

struct B_0120cd00 { virtual void sub_0120cdd0(); };

struct C_0120cd00 : A_0120cd00, B_0120cd00 { virtual void sub_0120cdd0(); C_0120cd00(); };

C_0120cd00::C_0120cd00() {}

// @baa 0x0120cd00
void C_0120cd00::sub_0120cdd0() {}

int sub_0120cd10(void);
// @baa 0x0120cdd0
undefined4 UUnrealEdEngine::sub_0120cdd0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0120cd10();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0120d380 {
    int sub_0120d380(int);
    int sub_01201110(int, int);
};

// @baa 0x0120d380
int C_0120d380::sub_0120d380(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_0120d380 *)(this))->sub_01201110((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct C_0120d3c0 {
    int sub_0120d3c0(int);
    int sub_012012e0(int, int);
};

// @baa 0x0120d3c0
int C_0120d3c0::sub_0120d3c0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_0120d3c0 *)(this))->sub_012012e0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x1c, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct C_0120d400 {
    undefined4 sub_0120d400(int);
    int sub_012014f0(int, int);
};

// @baa 0x0120d400
undefined4 C_0120d400::sub_0120d400(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_0120d400 *)(this))->sub_012014f0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}

struct C_0120d480 {
    int sub_0120d480(int);
    int sub_01201720(int, int);
};

// @baa 0x0120d480
int C_0120d480::sub_0120d480(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_0120d480 *)(this))->sub_01201720((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct TConstSetBitIterator_0120d520 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0120d520(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0120d520& operator++();
};

TConstSetBitIterator_0120d520::TConstSetBitIterator_0120d520(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0120d520
TConstSetBitIterator_0120d520& TConstSetBitIterator_0120d520::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0120d540 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0120d540(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0120d540& operator++();
};

TConstSetBitIterator_0120d540::TConstSetBitIterator_0120d540(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0120d540
TConstSetBitIterator_0120d540& TConstSetBitIterator_0120d540::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0120de00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0120de00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0120de00& operator++();
};

TConstSetBitIterator_0120de00::TConstSetBitIterator_0120de00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0120de00
TConstSetBitIterator_0120de00& TConstSetBitIterator_0120de00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0120de50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0120de50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0120de50& operator++();
};

TConstSetBitIterator_0120de50::TConstSetBitIterator_0120de50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0120de50
TConstSetBitIterator_0120de50& TConstSetBitIterator_0120de50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0120dea0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0120dea0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0120dea0& operator++();
};

TConstSetBitIterator_0120dea0::TConstSetBitIterator_0120dea0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0120dea0
TConstSetBitIterator_0120dea0& TConstSetBitIterator_0120dea0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0120def0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0120def0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0120def0& operator++();
};

TConstSetBitIterator_0120def0::TConstSetBitIterator_0120def0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0120def0
TConstSetBitIterator_0120def0& TConstSetBitIterator_0120def0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0120e120 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0120e120(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0120e120& operator++();
};

TConstSetBitIterator_0120e120::TConstSetBitIterator_0120e120(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0120e120
TConstSetBitIterator_0120e120& TConstSetBitIterator_0120e120::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0120e170 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0120e170(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0120e170& operator++();
};

TConstSetBitIterator_0120e170::TConstSetBitIterator_0120e170(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0120e170
TConstSetBitIterator_0120e170& TConstSetBitIterator_0120e170::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0120e1c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0120e1c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0120e1c0& operator++();
};

TConstSetBitIterator_0120e1c0::TConstSetBitIterator_0120e1c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0120e1c0
TConstSetBitIterator_0120e1c0& TConstSetBitIterator_0120e1c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0120e210 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0120e210(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0120e210& operator++();
};

TConstSetBitIterator_0120e210::TConstSetBitIterator_0120e210(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0120e210
TConstSetBitIterator_0120e210& TConstSetBitIterator_0120e210::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0120e260 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0120e260(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0120e260& operator++();
};

TConstSetBitIterator_0120e260::TConstSetBitIterator_0120e260(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0120e260
TConstSetBitIterator_0120e260& TConstSetBitIterator_0120e260::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0120e2b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0120e2b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0120e2b0& operator++();
};

TConstSetBitIterator_0120e2b0::TConstSetBitIterator_0120e2b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0120e2b0
TConstSetBitIterator_0120e2b0& TConstSetBitIterator_0120e2b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0120e300 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0120e300(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0120e300& operator++();
};

TConstSetBitIterator_0120e300::TConstSetBitIterator_0120e300(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0120e300
TConstSetBitIterator_0120e300& TConstSetBitIterator_0120e300::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x0120fab0
IMPLEMENT_CLASS_AT(UPropertyInputArray, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\PropertyUtils.cpp", 3448);

// @baa 0x0120fbc0
bool UPropertyInputArray::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0120fc00
IMPLEMENT_CLASS_AT(UPropertyInputArrayItemBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\PropertyUtils.cpp", 3449);

// @baa 0x0120fd10
bool UPropertyInputArrayItemBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_0120fde0 {
    undefined4 * sub_0120fde0();
};

int sub_0120b820(void);
extern undefined4 g_021f8c60;
// @baa 0x0120fde0
undefined4 * C_0120fde0::sub_0120fde0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0120b820();
  *param_1 = (undefined4)(&g_021f8c60);
  return param_1;
}

struct C_0120fe00 {
    undefined4 * sub_0120fe00(byte);
};

extern undefined4 g_021f517c;
// @baa 0x0120fe00
undefined4 * C_0120fe00::sub_0120fe00(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_021f517c);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0120fea0 {
    undefined4 * sub_0120fea0();
};

extern undefined4 g_021f8c68;
// @baa 0x0120fea0
undefined4 * C_0120fea0::sub_0120fea0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0120b820();
  *param_1 = (undefined4)(&g_021f8c68);
  return param_1;
}

struct C_0120fec0 {
    undefined4 * sub_0120fec0(byte);
};

// @baa 0x0120fec0
undefined4 * C_0120fec0::sub_0120fec0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_021f517c);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0120fee0 {
    undefined4 * sub_0120fee0();
};

extern undefined4 g_021f8c70;
// @baa 0x0120fee0
undefined4 * C_0120fee0::sub_0120fee0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0120b820();
  *param_1 = (undefined4)(&g_021f8c70);
  return param_1;
}

struct C_0120ff00 {
    undefined4 * sub_0120ff00(byte);
};

// @baa 0x0120ff00
undefined4 * C_0120ff00::sub_0120ff00(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_021f517c);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

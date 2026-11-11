// UnUIEditorControls.cpp (part 1 of 2): 34 functions
// Placed here by: neighbours 34.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern char g_026ddbf0[];
// @baa 0x0149bae0
int sub_0149bae0(void) { return (int)g_026ddbf0; }

struct C {
    void sub_0149baf0();
};

// @baa 0x0149baf0
void C::sub_0149baf0(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  return;
}

extern char g_026ddc08[];
// @baa 0x0149bb40
int sub_0149bb40(void) { return (int)g_026ddc08; }

class wxToolBar;
class wxToolBar {
    public:
    public: __declspec(dllimport) wxToolBar();
    friend struct C_0149bb50;
};

struct C_0149bb50 {
    wxToolBar * sub_0149bb50();
};

extern undefined * g_022b1920;
// @baa 0x0149bb50
wxToolBar * C_0149bb50::sub_0149bb50(void)
{
    wxToolBar * param_1 = (wxToolBar *)this;

  ((wxToolBar *)(param_1))->wxToolBar::wxToolBar();
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined ***)param_1 = &g_022b1920;
  return param_1;
}

// @baa 0x0149bb80
void sub_0149bb80(void) {  }

extern char g_025e93f4[];
// @baa 0x0149bb90
int sub_0149bb90(void) { return (int)g_025e93f4; }

extern char g_026ddc20[];
// @baa 0x0149bba0
int sub_0149bba0(void) { return (int)g_026ddc20; }

void sub_013e9bc0();
// @baa 0x014a84e0
void sub_014a84e0(void) { sub_013e9bc0(); }

struct C_014a8560 {
    undefined4 sub_014a8560(byte);
};

int sub_0053dfa0(...);
int sub_014a2d20(void);
// @baa 0x014a8560
undefined4 C_014a8560::sub_014a8560(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014a2d20();
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

struct TConstSetBitIterator_014b9f20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014b9f20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014b9f20& operator++();
};

TConstSetBitIterator_014b9f20::TConstSetBitIterator_014b9f20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014b9f20
TConstSetBitIterator_014b9f20& TConstSetBitIterator_014b9f20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014b9f70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014b9f70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014b9f70& operator++();
};

TConstSetBitIterator_014b9f70::TConstSetBitIterator_014b9f70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014b9f70
TConstSetBitIterator_014b9f70& TConstSetBitIterator_014b9f70::operator++()
{
    It.Advance();
    return *this;
}

void sub_014bbd40();
// @baa 0x014bc580
void sub_014bc580(void) { sub_014bbd40(); }

void sub_014bbef0();
// @baa 0x014bc620
void sub_014bc620(void) { sub_014bbef0(); }

struct C_view {
    int sub_014bad80(int, int);
};

// @baa 0x014bc670
int UTexture2D::sub_014bc670(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_014bad80(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

int sub_014b3380(void);
// @baa 0x014bc6c0
int UTexture2D::sub_014bc6c0(void)
{
    int param_1 = (int)this;

  sub_014b3380();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_014b33e0(void);
// @baa 0x014bc6e0
int UTexture2D::sub_014bc6e0(void)
{
    int param_1 = (int)this;

  sub_014b33e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_014b3440(void);
// @baa 0x014bc700
int UTexture2D::sub_014bc700(void)
{
    int param_1 = (int)this;

  sub_014b3440();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_014bb080();
// @baa 0x014bc780
void sub_014bc780(void) { sub_014bb080(); }

int sub_014ad9b0(void);
// @baa 0x014bc790
int UTexture2D::sub_014bc790(void)
{
    int param_1 = (int)this;

  sub_014ad9b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_014bbad0();
// @baa 0x014bc7b0
void sub_014bc7b0(void) { sub_014bbad0(); }

void sub_014bbb40();
// @baa 0x014bc7c0
void sub_014bc7c0(void) { sub_014bbb40(); }

struct C_014bc7d0 {
    void sub_014bc7d0();
    int sub_014b2700(int);
    int sub_014b2790(int);
    int sub_014b2820(int);
    int sub_014bbc20(int);
};

// @baa 0x014bc7d0
void C_014bc7d0::sub_014bc7d0(void)
{
    int param_1 = (int)this;
  ((C_014bc7d0 *)(((char *)this + 0x50)))->sub_014b2700(*(undefined4 *)(param_1 + 0x54));
  ((C_014bc7d0 *)(((char *)this + 0x68)))->sub_014b2790(*(undefined4 *)(param_1 + 0x6c));
  ((C_014bc7d0 *)(((char *)this + 0x74)))->sub_014b2820(*(undefined4 *)(param_1 + 0x78));
  ((C_014bc7d0 *)(((char *)this + 0x80)))->sub_014bbc20(0);
  return;
}

void sub_014bbbb0();
// @baa 0x014bdc00
void sub_014bdc00(void) { sub_014bbbb0(); }

// @baa 0x014bdc10
int UTexture2D::sub_014bdc10(void)
{
    int param_1 = (int)this;

  sub_014b3380();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x014bdc30
int UTexture2D::sub_014bdc30(void)
{
    int param_1 = (int)this;

  sub_014b33e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x014bdc50
int UTexture2D::sub_014bdc50(void)
{
    int param_1 = (int)this;

  sub_014b3440();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_014bdc70 { void sub_014bc720(int); C_014bdc70 *sub_014bdc70(int); };

// @baa 0x014bdc70
C_014bdc70 *C_014bdc70::sub_014bdc70(int a) { sub_014bc720(a); return this; }

// @baa 0x014bdc90
void sub_014bdc90(void) { sub_014bb080(); }

struct A_014bdd40 { virtual void sub_014bfe00(); char pad[44]; };

struct B_014bdd40 { virtual void sub_014bfe00(); };

struct C_014bdd40 : A_014bdd40, B_014bdd40 { virtual void sub_014bfe00(); C_014bdd40(); };

C_014bdd40::C_014bdd40() {}

// @baa 0x014bdd40
void C_014bdd40::sub_014bfe00() {}

struct A_014bdd50 { virtual void sub_014bfe00(); char pad[52]; };

struct B_014bdd50 { virtual void sub_014bfe00(); };

struct C_014bdd50 : A_014bdd50, B_014bdd50 { virtual void sub_014bfe00(); C_014bdd50(); };

C_014bdd50::C_014bdd50() {}

// @baa 0x014bdd50
void C_014bdd50::sub_014bfe00() {}

// @baa 0x014bdd60
void sub_014bdd60(void) { sub_014bbad0(); }

// @baa 0x014bdd70
void sub_014bdd70(void) { sub_014bbb40(); }

struct A_014be9b0 { virtual void sub_014bfe30(); char pad[532]; };

struct B_014be9b0 { virtual void sub_014bfe30(); };

struct C_014be9b0 : A_014be9b0, B_014be9b0 { virtual void sub_014bfe30(); C_014be9b0(); };

C_014be9b0::C_014be9b0() {}

// @baa 0x014be9b0
void C_014be9b0::sub_014bfe30() {}

struct A_014bea50 { virtual void sub_014c03a0(); char pad[532]; };

struct B_014bea50 { virtual void sub_014c03a0(); };

struct C_014bea50 : A_014bea50, B_014bea50 { virtual void sub_014c03a0(); C_014bea50(); };

C_014bea50::C_014bea50() {}

// @baa 0x014bea50
void C_014bea50::sub_014c03a0() {}

// FluidSurfaceComponent.cpp: 174 functions
// Placed here by: neighbours 89, class 51, callers 4, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_view {
    int sub_0065a720(int, int, int);
};

// @baa 0x006753c0
void UFluidSurfaceComponent::sub_006753c0(int param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) != param_2) {
    *(int *)(param_1 + 0x94) = param_2;
    ((C_view *)(this))->sub_0065a720(0, param_2, 0x10);
  }
  return;
}

struct C {
    void sub_00680b20(int);
    int sub_0065a870(int, int, int);
};

// @baa 0x00680b20
void C::sub_00680b20(int param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  if (*(int *)(param_1 + 200) != param_2) {
    *(int *)(param_1 + 200) = param_2;
    ((C *)(this))->sub_0065a870(0, param_2, 0xc);
  }
  return;
}

struct C_view_00680b50 {
    int sub_00672f70(int, int);
};

// @baa 0x00680b50
int UFluidSurfaceComponent::sub_00680b50(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00680b50 *)(this))->sub_00672f70((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

int sub_006865f0(...);
int sub_0068a4a0(...);
// @baa 0x0068ce70
undefined4 sub_0068ce70(undefined4 param_1, int param_2)
{
  sub_0068a4a0(param_1,param_2);
  sub_006865f0(param_1,param_2 + 0x80);
  return param_1;
}

// @baa 0x006ab230
IMPLEMENT_CLASS_AT(AFogVolumeDensityInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\FogVolumeDensityComponents.cpp", 11);

struct C_006ac390 {
    void sub_006ac390();
};

int sub_006311e0(...);
extern undefined4 g_01ec6750;
extern undefined4 g_01ec6878;
extern undefined4 g_026c3cdc;
// @baa 0x006ac390
void C_006ac390::sub_006ac390(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    if (((g_026c3cdc == 0) || (*(int *)(g_026c3cdc + 800) == 0)) ||
       (*(int *)(g_026c3cdc + 0x330) == 0)) {
      sub_006311e0("GEngine && GEngine->Client && GEngine->GameViewport",
                   "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\src\\../Bink/Src/FullScreenMovieBink.inl"
                   ,0xb96,&g_01ec6750);
    }
    iVar1 = *(int *)(*(int *)(g_026c3cdc + 0x330) + 0x38);
    *(int *)(param_1 + 8) = iVar1;
    if (iVar1 == 0) {
      sub_006311e0("Viewport",
                   "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\src\\../Bink/Src/FullScreenMovieBink.inl"
                   ,0xb99,&g_01ec6878);
    }
  }
  return;
}

struct C_006b6dc0 { int sub_006b6dc0(void); };

// @baa 0x006b6dc0
int C_006b6dc0::sub_006b6dc0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_006b6dd0 {
    int sub_006b6dd0(int);
};

// @baa 0x006b6dd0
int C_006b6dd0::sub_006b6dd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_006b6de0 { int sub_006b6de0(void); };

// @baa 0x006b6de0
int C_006b6de0::sub_006b6de0(void) { return *(int*)((char*)this + 4); }

struct C_006b6df0 {
    void sub_006b6df0();
};

int sub_0053dfa0(...);
// @baa 0x006b6df0
void C_006b6df0::sub_006b6df0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x220) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x220));
    *(undefined4 *)(param_1 + 0x220) = 0;
  }
  return;
}

struct C_006b6f10 {
    int sub_006b6f10(int);
};

// @baa 0x006b6f10
int C_006b6f10::sub_006b6f10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_006b6fa0 { C_006b6fa0* sub_006b6fa0(void); };

// @baa 0x006b6fa0
C_006b6fa0* C_006b6fa0::sub_006b6fa0(void) { *(int*)((char*)this + 6336) = 0; return this; }

struct C_006b6fb0 {
    uint sub_006b6fb0();
};

// @baa 0x006b6fb0
uint C_006b6fb0::sub_006b6fb0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x18c0) | -(uint)(*(uint *)(param_1 + 0x18c0) == 0) & param_1;
}

struct C_006b6fd0 {
    int sub_006b6fd0();
};

// @baa 0x006b6fd0
int C_006b6fd0::sub_006b6fd0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006b6ff0 {
    int sub_006b6ff0();
};

// @baa 0x006b6ff0
int C_006b6ff0::sub_006b6ff0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_006b7000 {
    int sub_006b7000();
};

// @baa 0x006b7000
int C_006b7000::sub_006b7000(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006b7020 {
    int sub_006b7020();
};

// @baa 0x006b7020
int C_006b7020::sub_006b7020(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006b7040 {
    int sub_006b7040();
};

// @baa 0x006b7040
int C_006b7040::sub_006b7040(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006b7060 {
    int sub_006b7060();
};

// @baa 0x006b7060
int C_006b7060::sub_006b7060(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_006b7070 {
    int sub_006b7070(int);
};

// @baa 0x006b7070
int C_006b7070::sub_006b7070(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_006b7080 {
    int sub_006b7080(int);
};

// @baa 0x006b7080
int C_006b7080::sub_006b7080(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_006b70c0 {
    int sub_006b70c0(int);
};

// @baa 0x006b70c0
int C_006b70c0::sub_006b70c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_006c5370 {
    int sub_006c5370(int);
};

// @baa 0x006c5370
int C_006c5370::sub_006c5370(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_006c53e0 {
    int sub_006c53e0(int);
};

// @baa 0x006c53e0
int C_006c53e0::sub_006c53e0(int param_2)
{
    uint param_1 = (uint)this;

  return param_2 * 0x88 +
         (-(uint)(*(uint *)(param_1 + 0x220) == 0) & param_1 | *(uint *)(param_1 + 0x220));
}

void sub_0040fcc0();
// @baa 0x006c5540
void sub_006c5540(void) { sub_0040fcc0(); }

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

struct TConstSetBitIterator_006c9310 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006c9310(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006c9310& operator++();
};

TConstSetBitIterator_006c9310::TConstSetBitIterator_006c9310(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006c9310
TConstSetBitIterator_006c9310& TConstSetBitIterator_006c9310::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006c9360 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006c9360(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006c9360& operator++();
};

TConstSetBitIterator_006c9360::TConstSetBitIterator_006c9360(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006c9360
TConstSetBitIterator_006c9360& TConstSetBitIterator_006c9360::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006c93b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006c93b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006c93b0& operator++();
};

TConstSetBitIterator_006c93b0::TConstSetBitIterator_006c93b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006c93b0
TConstSetBitIterator_006c93b0& TConstSetBitIterator_006c93b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006c9400 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006c9400(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006c9400& operator++();
};

TConstSetBitIterator_006c9400::TConstSetBitIterator_006c9400(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006c9400
TConstSetBitIterator_006c9400& TConstSetBitIterator_006c9400::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006c9420 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006c9420(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006c9420& operator++();
};

TConstSetBitIterator_006c9420::TConstSetBitIterator_006c9420(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006c9420
TConstSetBitIterator_006c9420& TConstSetBitIterator_006c9420::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006c94a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006c94a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006c94a0& operator++();
};

TConstSetBitIterator_006c94a0::TConstSetBitIterator_006c94a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006c94a0
TConstSetBitIterator_006c94a0& TConstSetBitIterator_006c94a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006c94f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006c94f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006c94f0& operator++();
};

TConstSetBitIterator_006c94f0::TConstSetBitIterator_006c94f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006c94f0
TConstSetBitIterator_006c94f0& TConstSetBitIterator_006c94f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006c9540 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006c9540(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006c9540& operator++();
};

TConstSetBitIterator_006c9540::TConstSetBitIterator_006c9540(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006c9540
TConstSetBitIterator_006c9540& TConstSetBitIterator_006c9540::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006cbc10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006cbc10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006cbc10& operator++();
};

TConstSetBitIterator_006cbc10::TConstSetBitIterator_006cbc10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006cbc10
TConstSetBitIterator_006cbc10& TConstSetBitIterator_006cbc10::operator++()
{
    It.Advance();
    return *this;
}

struct M_006cbc30 { void sub_006c8a90(); };

struct C_006cbc30 { char pad[6464]; M_006cbc30 m; void sub_006cbc30(); };

// @baa 0x006cbc30
void C_006cbc30::sub_006cbc30() { m.sub_006c8a90(); }

struct TConstSetBitIterator_006cbd40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006cbd40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006cbd40& operator++();
};

TConstSetBitIterator_006cbd40::TConstSetBitIterator_006cbd40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006cbd40
TConstSetBitIterator_006cbd40& TConstSetBitIterator_006cbd40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006cbd90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006cbd90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006cbd90& operator++();
};

TConstSetBitIterator_006cbd90::TConstSetBitIterator_006cbd90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006cbd90
TConstSetBitIterator_006cbd90& TConstSetBitIterator_006cbd90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006cbde0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006cbde0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006cbde0& operator++();
};

TConstSetBitIterator_006cbde0::TConstSetBitIterator_006cbde0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006cbde0
TConstSetBitIterator_006cbde0& TConstSetBitIterator_006cbde0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006cbe00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006cbe00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006cbe00& operator++();
};

TConstSetBitIterator_006cbe00::TConstSetBitIterator_006cbe00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006cbe00
TConstSetBitIterator_006cbe00& TConstSetBitIterator_006cbe00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006cc090 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006cc090(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006cc090& operator++();
};

TConstSetBitIterator_006cc090::TConstSetBitIterator_006cc090(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006cc090
TConstSetBitIterator_006cc090& TConstSetBitIterator_006cc090::operator++()
{
    It.Advance();
    return *this;
}

struct C_006cc0b0 {
    void sub_006cc0b0();
    int sub_006c8c30(int);
};

// @baa 0x006cc0b0
void C_006cc0b0::sub_006cc0b0(void)
{
    int param_1 = (int)this;
  ((C_006cc0b0 *)((*(char **)((char *)this + 0x10))))->sub_006c8c30(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_006cc0d0 {
    void sub_006cc0d0();
    int sub_006c8d90(int);
};

// @baa 0x006cc0d0
void C_006cc0d0::sub_006cc0d0(void)
{
    int param_1 = (int)this;
  ((C_006cc0d0 *)((*(char **)((char *)this + 0x10))))->sub_006c8d90(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct TConstSetBitIterator_006cc260 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006cc260(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006cc260& operator++();
};

TConstSetBitIterator_006cc260::TConstSetBitIterator_006cc260(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006cc260
TConstSetBitIterator_006cc260& TConstSetBitIterator_006cc260::operator++()
{
    It.Advance();
    return *this;
}

struct C_006cc280 {
    void sub_006cc280();
    int sub_006c8f60(int);
};

// @baa 0x006cc280
void C_006cc280::sub_006cc280(void)
{
    int param_1 = (int)this;
  ((C_006cc280 *)((*(char **)((char *)this + 0x10))))->sub_006c8f60(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_006cc2a0 {
    void sub_006cc2a0();
    int sub_006c8fe0(int);
};

// @baa 0x006cc2a0
void C_006cc2a0::sub_006cc2a0(void)
{
    int param_1 = (int)this;
  ((C_006cc2a0 *)((*(char **)((char *)this + 0x10))))->sub_006c8fe0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct TConstSetBitIterator_006cc2c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006cc2c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006cc2c0& operator++();
};

TConstSetBitIterator_006cc2c0::TConstSetBitIterator_006cc2c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006cc2c0
TConstSetBitIterator_006cc2c0& TConstSetBitIterator_006cc2c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006cc310 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006cc310(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006cc310& operator++();
};

TConstSetBitIterator_006cc310::TConstSetBitIterator_006cc310(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006cc310
TConstSetBitIterator_006cc310& TConstSetBitIterator_006cc310::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006cc360 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006cc360(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006cc360& operator++();
};

TConstSetBitIterator_006cc360::TConstSetBitIterator_006cc360(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006cc360
TConstSetBitIterator_006cc360& TConstSetBitIterator_006cc360::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006cd8d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006cd8d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006cd8d0& operator++();
};

TConstSetBitIterator_006cd8d0::TConstSetBitIterator_006cd8d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006cd8d0
TConstSetBitIterator_006cd8d0& TConstSetBitIterator_006cd8d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006cd920 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006cd920(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006cd920& operator++();
};

TConstSetBitIterator_006cd920::TConstSetBitIterator_006cd920(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006cd920
TConstSetBitIterator_006cd920& TConstSetBitIterator_006cd920::operator++()
{
    It.Advance();
    return *this;
}

int sub_006c92b0(void);
// @baa 0x006d1680
int UFluidSurfaceComponent::sub_006d1680(void)
{
    int param_1 = (int)this;

  sub_006c92b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct TConstSetBitIterator_006d16a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006d16a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006d16a0& operator++();
};

TConstSetBitIterator_006d16a0::TConstSetBitIterator_006d16a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006d16a0
TConstSetBitIterator_006d16a0& TConstSetBitIterator_006d16a0::operator++()
{
    It.Advance();
    return *this;
}

int sub_006c9440(void);
// @baa 0x006d1800
int UFluidSurfaceComponent::sub_006d1800(void)
{
    int param_1 = (int)this;

  sub_006c9440();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_006d2aa0 {
    int sub_006d1240(int, int);
};

// @baa 0x006d2aa0
void UState::sub_006d2aa0(void)
{
    int param_1 = (int)this;
  ((C_view_006d2aa0 *)(this))->sub_006d1240(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_006d2bf0 {
    int sub_006d1300(int, int);
};

// @baa 0x006d2bf0
void UTexture2D::sub_006d2bf0(void)
{
    int param_1 = (int)this;
  ((C_view_006d2bf0 *)(this))->sub_006d1300(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_006d2d30 {
    int sub_006d13c0(int, int);
};

// @baa 0x006d2d30
undefined4 UTexture2D::sub_006d2d30(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_006d2d30 *)(this))->sub_006d13c0(param_2, param_3);
  return param_1;
}

struct C_006d2d50 {
    undefined4 sub_006d2d50(undefined4, undefined4);
    int sub_006d1420(int, int);
};

// @baa 0x006d2d50
undefined4 C_006d2d50::sub_006d2d50(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_006d2d50 *)(this))->sub_006d1420(param_2, param_3);
  return param_1;
}

struct C_006d2d70 {
    int sub_006d2d70(undefined4, undefined4);
    int sub_006d1480(int, int);
};

// @baa 0x006d2d70
int C_006d2d70::sub_006d2d70(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_006d2d70 *)(this))->sub_006d1480(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_006d2d90 {
    int sub_006d2d90(undefined4, undefined4);
    int sub_006d1500(int, int);
};

// @baa 0x006d2d90
int C_006d2d90::sub_006d2d90(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_006d2d90 *)(this))->sub_006d1500(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

int sub_006c91f0(void);
// @baa 0x006d2db0
int USpeechRecognition::sub_006d2db0(void)
{
    int param_1 = (int)this;

  sub_006c91f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_006d2dd0 {
    int sub_006d2dd0();
};

int sub_006c9250(void);
// @baa 0x006d2dd0
int C_006d2dd0::sub_006d2dd0(void)
{
    int param_1 = (int)this;

  sub_006c9250();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x006d30a0
int UFluidSurfaceComponent::sub_006d30a0(void)
{
    int param_1 = (int)this;

  sub_006c92b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct TConstSetBitIterator_006d30c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006d30c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006d30c0& operator++();
};

TConstSetBitIterator_006d30c0::TConstSetBitIterator_006d30c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006d30c0
TConstSetBitIterator_006d30c0& TConstSetBitIterator_006d30c0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_006d3110 {
    int sub_006d16f0(int, int);
};

// @baa 0x006d3110
int UFluidSurfaceComponent::sub_006d3110(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_006d3110 *)(this))->sub_006d16f0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_006d3130 {
    int sub_006d1790(int, int);
};

// @baa 0x006d3130
int UFluidSurfaceComponent::sub_006d3130(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_006d3130 *)(this))->sub_006d1790(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

// @baa 0x006d3150
int UFluidSurfaceComponent::sub_006d3150(void)
{
    int param_1 = (int)this;

  sub_006c9440();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_006d2950();
// @baa 0x006d3170
void sub_006d3170(void) { sub_006d2950(); }

void sub_006d29c0();
// @baa 0x006d3180
void sub_006d3180(void) { sub_006d29c0(); }

void sub_006d2a30();
// @baa 0x006d3190
void sub_006d3190(void) { sub_006d2a30(); }

int sub_006ab230(void);
int sub_006d1930(...);
extern undefined4 g_026b0d9c;
// @baa 0x006d31a0
int sub_006d31a0(void)
{
  if (g_026b0d9c == 0) {
    g_026b0d9c = sub_006d1930(L"Engine");
    sub_006ab230();
  }
  return g_026b0d9c;
}

// @baa 0x006d31d0
IMPLEMENT_CLASS_AT(AFogVolumeConstantDensityInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\FogVolumeDensityComponents.cpp", 303);

// @baa 0x006d32e0
bool AFogVolumeConstantDensityInfo::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006d3320
IMPLEMENT_CLASS_AT(AFogVolumeLinearHalfspaceDensityInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\FogVolumeDensityComponents.cpp", 323);

// @baa 0x006d3430
bool AFogVolumeLinearHalfspaceDensityInfo::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006d3470
IMPLEMENT_CLASS_AT(AFogVolumeSphericalDensityInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\FogVolumeDensityComponents.cpp", 356);

// @baa 0x006d3580
bool AFogVolumeSphericalDensityInfo::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006d35c0
IMPLEMENT_CLASS_AT(AFogVolumeConeDensityInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\FogVolumeDensityComponents.cpp", 394);

// @baa 0x006d36d0
bool AFogVolumeConeDensityInfo::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_006d2b90();
// @baa 0x006d3de0
void sub_006d3de0(void) { sub_006d2b90(); }

struct C_view_006d3e40 {
    int sub_006d13c0(int, int);
};

// @baa 0x006d3e40
int UTexture2D::sub_006d3e40(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_006d3e40 *)(this))->sub_006d13c0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_006d1240(int, int);
};

struct C_006d3e70 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_006d3e70(void);
};

// @baa 0x006d3e70
void C_006d3e70::sub_006d3e70(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_006d1240(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_006d3ed0 {
    int sub_006d3ed0(undefined4, undefined4, undefined4);
    int sub_006d1420(int, int);
};

// @baa 0x006d3ed0
int C_006d3ed0::sub_006d3ed0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_006d3ed0 *)(this))->sub_006d1420(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_006d3f00 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_006d1300(int, int);
};

struct C_006d3f00 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_006d3f00* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_006d3f00(void);
};

// @baa 0x006d3f00
void C_006d3f00::sub_006d3f00(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_006d1300(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

// @baa 0x006d3f20
int USpeechRecognition::sub_006d3f20(void)
{
    int param_1 = (int)this;

  sub_006c91f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_006d3f40 {
    int sub_006d3f40();
};

// @baa 0x006d3f40
int C_006d3f40::sub_006d3f40(void)
{
    int param_1 = (int)this;

  sub_006c9250();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_006d2eb0();
// @baa 0x006d3fa0
void sub_006d3fa0(void) { sub_006d2eb0(); }

void sub_006d3030();
// @baa 0x006d3ff0
void sub_006d3ff0(void) { sub_006d3030(); }

// @baa 0x006d4000
int UFluidSurfaceComponent::sub_006d4000(void)
{
    int param_1 = (int)this;

  sub_006c92b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct TConstSetBitIterator_006d4020 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006d4020(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006d4020& operator++();
};

TConstSetBitIterator_006d4020::TConstSetBitIterator_006d4020(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006d4020
TConstSetBitIterator_006d4020& TConstSetBitIterator_006d4020::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x006d4070
int UFluidSurfaceComponent::sub_006d4070(void)
{
    int param_1 = (int)this;

  sub_006c9440();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x006d6000
int UFluidSurfaceComponent::sub_006d6000(void)
{
    int param_1 = (int)this;

  sub_006c92b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_006d6020 {
    void sub_006d6020(undefined4);
};

int sub_006d3030(...);
// @baa 0x006d6020
void C_006d6020::sub_006d6020(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006d3030(param_2,param_1);
  return;
}

struct C_006d6240 { void sub_006d2eb0(int); void sub_006d6240(); };

// @baa 0x006d6240
void C_006d6240::sub_006d6240() { sub_006d2eb0(0); }

// @baa 0x006d6250
int UFluidSurfaceComponent::sub_006d6250(void)
{
    int param_1 = (int)this;

  sub_006c9440();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x006d6690
int UFluidSurfaceComponent::sub_006d6690(void)
{
    int param_1 = (int)this;

  sub_006c9440();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return param_1;
}

// @baa 0x007080f0
int UFluidSurfaceComponent::sub_007080f0(void)
{
    int param_1 = (int)this;

  sub_006c9440();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return param_1;
}

int sub_00a4aaa0(void);
// @baa 0x00a4e280
int UFluidSurfaceComponent::sub_00a4e280(void)
{
    int param_1 = (int)this;

  sub_00a4aaa0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00a4ab00(void);
// @baa 0x00a4e2a0
int UFluidSurfaceComponent::sub_00a4e2a0(void)
{
    int param_1 = (int)this;

  sub_00a4ab00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00a4ab60(void);
// @baa 0x00a4e2c0
int UFluidSurfaceComponent::sub_00a4e2c0(void)
{
    int param_1 = (int)this;

  sub_00a4ab60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00a4faf0
int UFluidSurfaceComponent::sub_00a4faf0(void)
{
    int param_1 = (int)this;

  sub_00a4aaa0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00a4fb10
int UFluidSurfaceComponent::sub_00a4fb10(void)
{
    int param_1 = (int)this;

  sub_00a4ab00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00a4fb30
int UFluidSurfaceComponent::sub_00a4fb30(void)
{
    int param_1 = (int)this;

  sub_00a4ab60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00a51370
int UFluidSurfaceComponent::sub_00a51370(void)
{
    int param_1 = (int)this;

  sub_00a4aaa0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00a51440
int UFluidSurfaceComponent::sub_00a51440(void)
{
    int param_1 = (int)this;

  sub_00a4ab00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00a51460
int UFluidSurfaceComponent::sub_00a51460(void)
{
    int param_1 = (int)this;

  sub_00a4ab60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00a52430
int UFluidSurfaceComponent::sub_00a52430(void)
{
    int param_1 = (int)this;

  sub_00a4aaa0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00a52650
int UFluidSurfaceComponent::sub_00a52650(void)
{
    int param_1 = (int)this;

  sub_00a4ab00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00a52670
int UFluidSurfaceComponent::sub_00a52670(void)
{
    int param_1 = (int)this;

  sub_00a4ab60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00a52690 { void sub_00a51480(int); C_00a52690 *sub_00a52690(int); };

// @baa 0x00a52690
C_00a52690 *C_00a52690::sub_00a52690(int a) { sub_00a51480(a); return this; }

// @baa 0x00a53780
int UFluidSurfaceComponent::sub_00a53780(void)
{
    int param_1 = (int)this;

  sub_006c9440();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return param_1;
}

struct C_00a53960 { void sub_00a51480(int); C_00a53960 *sub_00a53960(int); };

// @baa 0x00a53960
C_00a53960 *C_00a53960::sub_00a53960(int a) { sub_00a51480(a); return this; }

// @baa 0x00a552f0
int UFluidSurfaceComponent::sub_00a552f0(void)
{
    int param_1 = (int)this;

  sub_006c9440();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return param_1;
}

struct C_00a55310 { void sub_00a51480(int); C_00a55310 *sub_00a55310(int); };

// @baa 0x00a55310
C_00a55310 *C_00a55310::sub_00a55310(int a) { sub_00a51480(a); return this; }

struct C_view_00a55790 {
    int sub_00a51480(int);
};

// @baa 0x00a55790
int UFluidSurfaceComponent::sub_00a55790(int param_2)
{
    int param_1 = (int)this;
  ((C_view_00a55790 *)(this))->sub_00a51480(param_2);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  return param_1;
}

struct C_view_00a55ab0 {
    int sub_00a51480(int);
};

// @baa 0x00a55ab0
int UFluidSurfaceComponent::sub_00a55ab0(int param_2)
{
    int param_1 = (int)this;
  ((C_view_00a55ab0 *)(this))->sub_00a51480(param_2);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  return param_1;
}

struct C_00bdc540 {
    undefined4 sub_00bdc540();
};

// @baa 0x00bdc540
undefined4 C_00bdc540::sub_00bdc540(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x11c) == 0) && (*(int *)(param_1 + 0x120) == 0)) {
    return 0;
  }
  return 1;
}

// @baa 0x00bdc630
int AFluidSurfaceActorMovable::vf_000(void) { return 1; }

// @baa 0x00bdc640
IMPLEMENT_CLASS_AT(AFluidSurfaceActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\FluidSurfaceActor.cpp", 9);

// @baa 0x00bdc750
int AFluidSurfaceActor::vf_000(void) { return 1; }

// @baa 0x00bdc760
bool AFluidSurfaceActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00bdc7a0
void AFluidSurfaceActor::vf_09c(void) {  }

// @baa 0x00bdc7e0
IMPLEMENT_CLASS_AT(UFluidSurfaceComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\FluidSurfaceComponent.cpp", 11);

// @baa 0x00bdc8f0
int UFluidSurfaceComponent::vf_000(void) { return 1; }

// @baa 0x00bdc900
bool UFluidSurfaceComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00bdc940
int UFluidSurfaceComponent::sub_00bdc940(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1a4);
  if (iVar1 == 0) {
    iVar1 = *(int *)(g_026c3cdc + 0xdc);
  }
  return iVar1;
}

extern char g_0201da5c[];
// @baa 0x00bdda40
int sub_00bdda40(void) { return (int)g_0201da5c; }

extern char g_01ebb554[];
struct C_00bdda50 { void sub_00bdda50(void); };

// @baa 0x00bdda50
void C_00bdda50::sub_00bdda50(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00bdda60 {
    undefined4 * sub_00bdda60(byte);
};

// @baa 0x00bdda60
undefined4 * C_00bdda60::sub_00bdda60(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_0201dcc4[];
// @baa 0x00bddab0
int sub_00bddab0(void) { return (int)g_0201dcc4; }

struct C_00bddac0 { void sub_00bddac0(void); };

// @baa 0x00bddac0
void C_00bddac0::sub_00bddac0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00bddad0 {
    undefined4 * sub_00bddad0(byte);
};

// @baa 0x00bddad0
undefined4 * C_00bddad0::sub_00bddad0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_0201df3c[];
// @baa 0x00bddb20
int sub_00bddb20(void) { return (int)g_0201df3c; }

struct C_00bddb30 { void sub_00bddb30(void); };

// @baa 0x00bddb30
void C_00bddb30::sub_00bddb30(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00bddb40 {
    undefined4 * sub_00bddb40(byte);
};

// @baa 0x00bddb40
undefined4 * C_00bddb40::sub_00bddb40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00bddbf0
void UFluidSurfaceComponent::vf_158(undefined4 * param_2, undefined4 * param_3)
{
    int param_1 = (int)this;

  *param_2 = *(undefined4 *)(param_1 + 0x1a8);
  *param_3 = *(undefined4 *)(param_1 + 0x1a8);
  return;
}

struct FFluidSimulation {
    virtual ~FFluidSimulation();
    void sub_00be3f20(UBOOL bRelease);
};

struct UFluidSurfaceComponent_ : public UFluidSurfaceComponent {
    void sub_00be48d0(UBOOL bRelease);
};

// @baa 0x00be48d0
void UFluidSurfaceComponent_::sub_00be48d0(UBOOL bRelease)
{
    FFluidSimulation*& Simulation = *(FFluidSimulation**)&FluidSimulation;
    if (Simulation)
    {
        Simulation->sub_00be3f20(bRelease);
        if (bRelease)
        {
            delete Simulation;
            Simulation = NULL;
        }
    }
}

int sub_0053df70(...);
// @baa 0x00be73e0
void UFluidSurfaceComponent::sub_00be73e0(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x24c) = 0;
  if (*(int *)(param_1 + 0x250) != 0) {
    *(undefined4 *)(param_1 + 0x250) = 0;
    if (*(int *)(param_1 + 0x248) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x248),0,8);
      *(undefined4 *)(param_1 + 0x248) = uVar1;
    }
  }
  return;
}

struct T {
    virtual void f0();
};

struct C_00be7ec0 {
    DWORD pad0;
    T *p;
    void sub_00be7ec0();
};

// @baa 0x00be7ec0
void C_00be7ec0::sub_00be7ec0() {
    p->f0();
}

struct Target {
    virtual int v0();
    virtual int v1(int a);
    virtual int v2(int a);
};

struct S {
    int f0;
    Target *f1;
    int sub_00be8020(int a);
};

// @baa 0x00be8020
int S::sub_00be8020(int a)
{
    return f1->v2(a);
}

struct C_00be80f0 {
    undefined4 sub_00be80f0(byte);
};

int sub_00be2640(void);
// @baa 0x00be80f0
undefined4 C_00be80f0::sub_00be80f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00be2640();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00be8110 {
    undefined4 sub_00be8110(byte);
};

int sub_00be6220(void);
// @baa 0x00be8110
undefined4 C_00be8110::sub_00be8110(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00be6220();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00be85f0
// @baa 0x00be8680
// @baa 0x00be8f10
// @baa 0x00be8f40

/* ShaderManager.h: TShaderMap::GetShader, the lookup of a shader by its type that a
 * TShaderMapRef<ShaderType> does. The containers and the shader classes are not in the headers;
 * they are declared here as far as the lookup uses them (UnSet.h, UnMap.h, RefCounting.h,
 * Shader.h). */
#define checkf(expr, ...) { if (!(expr)) appFailAssert(#expr, __FILE__, __LINE__, ##__VA_ARGS__); }
/* The index of an element of a set, INDEX_NONE for none. */
class FSetElementId
{
public:
	FSetElementId() : Index(INDEX_NONE) {}
	UBOOL IsValidId() const { return Index != INDEX_NONE; }
	operator INT() const { return Index; }

private:
	INT Index;
};

/* A set: its elements, each with the links of its hash bucket, and the buckets. */
template<typename ElementType, typename KeyInitType>
class TSet
{
public:
	FSetElementId FindId(KeyInitType Key) const;

	ElementType* Find(KeyInitType Key)
	{
		FSetElementId ElementId = FindId(Key);
		if (ElementId.IsValidId())
		{
			return &Elements[ElementId].Value;
		}
		else
		{
			return NULL;
		}
	}
	const ElementType* Find(KeyInitType Key) const
	{
		FSetElementId ElementId = FindId(Key);
		if (ElementId.IsValidId())
		{
			return &Elements[ElementId].Value;
		}
		else
		{
			return NULL;
		}
	}

private:
	class FElement
	{
	public:
		ElementType Value;
		mutable FSetElementId HashNextId;
		mutable INT HashIndex;
	};

	/* TSparseArray<FElement>: the elements, then the allocation flags and the free list. */
	FElement* Elements;
};

/* A map: a set of key and value pairs. */
template<typename KeyType, typename ValueType>
class TMap
{
public:
	ValueType* Find(KeyType Key)
	{
		FPair* Pair = Pairs.Find(Key);
		return Pair ? &Pair->Value : NULL;
	}
	const ValueType* Find(KeyType Key) const
	{
		const FPair* Pair = Pairs.Find(Key);
		return Pair ? &Pair->Value : NULL;
	}

private:
	class FPair
	{
	public:
		KeyType Key;
		ValueType Value;
	};

	TSet<FPair, KeyType> Pairs;
};

/* A counted reference to an object. */
template<typename ReferencedType>
class TRefCountPtr
{
public:
	FORCEINLINE operator ReferencedType*() const { return Reference; }

private:
	ReferencedType* Reference;
};

class FShaderType
{
public:
	virtual ~FShaderType();

	const TCHAR* GetName() const { return Name; }

private:
	DWORD HashIndex;
	const TCHAR* Name;
};

class FShader
{
};

/* The type of a shader that does not depend on a material. */
class FGlobalShaderType : public FShaderType
{
};

class FGlobalShader : public FShader
{
};

/* Gives a shader class its type: the description its shaders are compiled and looked up by. */
#define DECLARE_SHADER_TYPE(ShaderClass, ShaderMetaTypeShortcut) \
	public: \
	typedef F##ShaderMetaTypeShortcut##ShaderType ShaderMetaType; \
	static ShaderMetaType StaticType
/* The shaders of one platform, by type. */
template<typename ShaderMetaType>
class TShaderMap
{
public:
	/* Finds the shader of the given type; it is an error for the map not to have it. */
	template<typename ShaderType>
	ShaderType* GetShader() const
	{
#line 646 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\inc\\ShaderManager.h"
		const TRefCountPtr<FShader>* ShaderRef = Shaders.Find(&ShaderType::StaticType);
		checkf(ShaderRef != NULL && *ShaderRef != NULL, TEXT("Failed to find shader type %s"), ShaderType::StaticType.GetName());
		return (ShaderType*)(FShader*)*ShaderRef;
	}

private:
	TMap<FShaderType*, TRefCountPtr<FShader> > Shaders;
};

template<UINT NumSamples>
class TFilterPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TFilterPixelShader, Global);
};

// @baa 0x00add020
template TFilterPixelShader<1>* TShaderMap<FGlobalShaderType>::GetShader<TFilterPixelShader<1> >() const;

#line 1979 "candidate.cpp"

class LowQualityShaderName : public FGlobalShader
{
	DECLARE_SHADER_TYPE(LowQualityShaderName, Global);
};

// @baa 0x0068bc20
template LowQualityShaderName* TShaderMap<FGlobalShaderType>::GetShader<LowQualityShaderName >() const;

class HwPCFLowQualityShaderName : public FGlobalShader
{
	DECLARE_SHADER_TYPE(HwPCFLowQualityShaderName, Global);
};

// @baa 0x0068bb60
template HwPCFLowQualityShaderName* TShaderMap<FGlobalShaderType>::GetShader<HwPCFLowQualityShaderName >() const;

class HwPCFMediumQualityShaderName : public FGlobalShader
{
	DECLARE_SHADER_TYPE(HwPCFMediumQualityShaderName, Global);
};

// @baa 0x0068bc80
template HwPCFMediumQualityShaderName* TShaderMap<FGlobalShaderType>::GetShader<HwPCFMediumQualityShaderName >() const;

class Fetch4PCFMediumQualityShaderName : public FGlobalShader
{
	DECLARE_SHADER_TYPE(Fetch4PCFMediumQualityShaderName, Global);
};

// @baa 0x0068bce0
template Fetch4PCFMediumQualityShaderName* TShaderMap<FGlobalShaderType>::GetShader<Fetch4PCFMediumQualityShaderName >() const;

class Fetch4PCFLowQualityShaderName : public FGlobalShader
{
	DECLARE_SHADER_TYPE(Fetch4PCFLowQualityShaderName, Global);
};

// @baa 0x0068bbc0
template Fetch4PCFLowQualityShaderName* TShaderMap<FGlobalShaderType>::GetShader<Fetch4PCFLowQualityShaderName >() const;

class MediumQualityShaderName : public FGlobalShader
{
	DECLARE_SHADER_TYPE(MediumQualityShaderName, Global);
};

// @baa 0x0068bd40
template MediumQualityShaderName* TShaderMap<FGlobalShaderType>::GetShader<MediumQualityShaderName >() const;

class HwPCFHighQualityShaderName : public FGlobalShader
{
	DECLARE_SHADER_TYPE(HwPCFHighQualityShaderName, Global);
};

// @baa 0x0068bda0
template HwPCFHighQualityShaderName* TShaderMap<FGlobalShaderType>::GetShader<HwPCFHighQualityShaderName >() const;

class Fetch4PCFHighQualityShaderName : public FGlobalShader
{
	DECLARE_SHADER_TYPE(Fetch4PCFHighQualityShaderName, Global);
};

// @baa 0x0068be00
template Fetch4PCFHighQualityShaderName* TShaderMap<FGlobalShaderType>::GetShader<Fetch4PCFHighQualityShaderName >() const;

class HighQualityShaderName : public FGlobalShader
{
	DECLARE_SHADER_TYPE(HighQualityShaderName, Global);
};

// @baa 0x0068be60
template HighQualityShaderName* TShaderMap<FGlobalShaderType>::GetShader<HighQualityShaderName >() const;

class FDistortionApplyScreenPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FDistortionApplyScreenPixelShader, Global);
};

// @baa 0x0068bf80
template FDistortionApplyScreenPixelShader* TShaderMap<FGlobalShaderType>::GetShader<FDistortionApplyScreenPixelShader >() const;

class FScreenPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FScreenPixelShader, Global);
};

// @baa 0x0068bf20
template FScreenPixelShader* TShaderMap<FGlobalShaderType>::GetShader<FScreenPixelShader >() const;

class FDistortionApplyScreenVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FDistortionApplyScreenVertexShader, Global);
};

// @baa 0x0068bec0
template FDistortionApplyScreenVertexShader* TShaderMap<FGlobalShaderType>::GetShader<FDistortionApplyScreenVertexShader >() const;

/* The samples of the gather pass on floating-point targets. */
const UINT NumFPFilterSamples = 4;
template<UINT NumSamples>
class TDOFAndBloomGatherVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TDOFAndBloomGatherVertexShader, Global);
};

// @baa 0x0068c0a0
template TDOFAndBloomGatherVertexShader<NumFPFilterSamples>* TShaderMap<FGlobalShaderType>::GetShader<TDOFAndBloomGatherVertexShader<NumFPFilterSamples> >() const;

/* The most samples a filter shader takes. */
#define MAX_FILTER_SAMPLES 16
// @baa 0x0068bfe0
template TDOFAndBloomGatherVertexShader<MAX_FILTER_SAMPLES>* TShaderMap<FGlobalShaderType>::GetShader<TDOFAndBloomGatherVertexShader<MAX_FILTER_SAMPLES> >() const;

template<UINT NumSamples>
class TDOFAndBloomGatherPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TDOFAndBloomGatherPixelShader, Global);
};

// @baa 0x0068c040
template TDOFAndBloomGatherPixelShader<MAX_FILTER_SAMPLES>* TShaderMap<FGlobalShaderType>::GetShader<TDOFAndBloomGatherPixelShader<MAX_FILTER_SAMPLES> >() const;

// @baa 0x0068c160
template TDOFAndBloomGatherPixelShader<NumFPFilterSamples>* TShaderMap<FGlobalShaderType>::GetShader<TDOFAndBloomGatherPixelShader<NumFPFilterSamples> >() const;

class FDOFAndBloomBlendVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FDOFAndBloomBlendVertexShader, Global);
};

// @baa 0x0068c1c0
template FDOFAndBloomBlendVertexShader* TShaderMap<FGlobalShaderType>::GetShader<FDOFAndBloomBlendVertexShader >() const;

class FDOFAndBloomGatherFallbackPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FDOFAndBloomGatherFallbackPixelShader, Global);
};

// @baa 0x0068c100
template FDOFAndBloomGatherFallbackPixelShader* TShaderMap<FGlobalShaderType>::GetShader<FDOFAndBloomGatherFallbackPixelShader >() const;

class FDOFAndBloomBlendPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FDOFAndBloomBlendPixelShader, Global);
};

// @baa 0x0068c220
template FDOFAndBloomBlendPixelShader* TShaderMap<FGlobalShaderType>::GetShader<FDOFAndBloomBlendPixelShader >() const;

class TModShadowProjectionPixelShaderFDirectionalLightPolicyF4SampleHwPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TModShadowProjectionPixelShaderFDirectionalLightPolicyF4SampleHwPCF, Global);
};

// @baa 0x006a4a30
template TModShadowProjectionPixelShaderFDirectionalLightPolicyF4SampleHwPCF* TShaderMap<FGlobalShaderType>::GetShader<TModShadowProjectionPixelShaderFDirectionalLightPolicyF4SampleHwPCF >() const;

class TModShadowProjectionPixelShaderFDirectionalLightPolicyF16SampleHwPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TModShadowProjectionPixelShaderFDirectionalLightPolicyF16SampleHwPCF, Global);
};

// @baa 0x006a4af0
template TModShadowProjectionPixelShaderFDirectionalLightPolicyF16SampleHwPCF* TShaderMap<FGlobalShaderType>::GetShader<TModShadowProjectionPixelShaderFDirectionalLightPolicyF16SampleHwPCF >() const;

class TModShadowProjectionPixelShaderFDirectionalLightPolicyF16SampleFetch4PCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TModShadowProjectionPixelShaderFDirectionalLightPolicyF16SampleFetch4PCF, Global);
};

// @baa 0x006a4b50
template TModShadowProjectionPixelShaderFDirectionalLightPolicyF16SampleFetch4PCF* TShaderMap<FGlobalShaderType>::GetShader<TModShadowProjectionPixelShaderFDirectionalLightPolicyF16SampleFetch4PCF >() const;

class FShaderComplexityAccumulatePixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FShaderComplexityAccumulatePixelShader, Global);
};

// @baa 0x0068c280
template FShaderComplexityAccumulatePixelShader* TShaderMap<FGlobalShaderType>::GetShader<FShaderComplexityAccumulatePixelShader >() const;

class TModShadowProjectionPixelShaderFDirectionalLightPolicyF4SampleManualPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TModShadowProjectionPixelShaderFDirectionalLightPolicyF4SampleManualPCF, Global);
};

// @baa 0x006a4a90
template TModShadowProjectionPixelShaderFDirectionalLightPolicyF4SampleManualPCF* TShaderMap<FGlobalShaderType>::GetShader<TModShadowProjectionPixelShaderFDirectionalLightPolicyF4SampleManualPCF >() const;

class TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFLowQualityHwPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFLowQualityHwPCF, Global);
};

// @baa 0x006a4c10
template TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFLowQualityHwPCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFLowQualityHwPCF >() const;

class TModShadowProjectionPixelShaderFDirectionalLightPolicyF16SampleManualPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TModShadowProjectionPixelShaderFDirectionalLightPolicyF16SampleManualPCF, Global);
};

// @baa 0x006a4bb0
template TModShadowProjectionPixelShaderFDirectionalLightPolicyF16SampleManualPCF* TShaderMap<FGlobalShaderType>::GetShader<TModShadowProjectionPixelShaderFDirectionalLightPolicyF16SampleManualPCF >() const;

class TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFLowQualityFetch4PCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFLowQualityFetch4PCF, Global);
};

// @baa 0x006a4c70
template TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFLowQualityFetch4PCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFLowQualityFetch4PCF >() const;

class TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFMediumQualityHwPCF : public FGlobalShader
{
	DECLARE_SHADER_TYPE(TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFMediumQualityHwPCF, Global);
};

// @baa 0x006a4d30
template TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFMediumQualityHwPCF* TShaderMap<FGlobalShaderType>::GetShader<TBranchingPCFModProjectionPixelShaderFDirectionalLightPolicyFMediumQualityHwPCF >() const;

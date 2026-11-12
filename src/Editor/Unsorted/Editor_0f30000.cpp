// Editor_0f30000.cpp: 51 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

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

struct TConstSetBitIterator_00f31290 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f31290(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f31290& operator++();
};

TConstSetBitIterator_00f31290::TConstSetBitIterator_00f31290(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f31290
TConstSetBitIterator_00f31290& TConstSetBitIterator_00f31290::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f312e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f312e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f312e0& operator++();
};

TConstSetBitIterator_00f312e0::TConstSetBitIterator_00f312e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f312e0
TConstSetBitIterator_00f312e0& TConstSetBitIterator_00f312e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f31330 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f31330(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f31330& operator++();
};

TConstSetBitIterator_00f31330::TConstSetBitIterator_00f31330(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f31330
TConstSetBitIterator_00f31330& TConstSetBitIterator_00f31330::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f31380 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f31380(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f31380& operator++();
};

TConstSetBitIterator_00f31380::TConstSetBitIterator_00f31380(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f31380
TConstSetBitIterator_00f31380& TConstSetBitIterator_00f31380::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f313d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f313d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f313d0& operator++();
};

TConstSetBitIterator_00f313d0::TConstSetBitIterator_00f313d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f313d0
TConstSetBitIterator_00f313d0& TConstSetBitIterator_00f313d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f31420 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f31420(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f31420& operator++();
};

TConstSetBitIterator_00f31420::TConstSetBitIterator_00f31420(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f31420
TConstSetBitIterator_00f31420& TConstSetBitIterator_00f31420::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f31470 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f31470(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f31470& operator++();
};

TConstSetBitIterator_00f31470::TConstSetBitIterator_00f31470(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f31470
TConstSetBitIterator_00f31470& TConstSetBitIterator_00f31470::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f314c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f314c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f314c0& operator++();
};

TConstSetBitIterator_00f314c0::TConstSetBitIterator_00f314c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f314c0
TConstSetBitIterator_00f314c0& TConstSetBitIterator_00f314c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f31510 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f31510(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f31510& operator++();
};

TConstSetBitIterator_00f31510::TConstSetBitIterator_00f31510(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f31510
TConstSetBitIterator_00f31510& TConstSetBitIterator_00f31510::operator++()
{
    It.Advance();
    return *this;
}

int sub_0060b320(void);

// @baa 0x00f31580
IMPLEMENT_CLASS_AT(UTextureExporterPCX, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 6690);

// @baa 0x00f31620
IMPLEMENT_CLASS_AT(UTextureExporterBMP, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 6870);

// @baa 0x00f316c0
IMPLEMENT_CLASS_AT(UTextureExporterTGA, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 6919);

// @baa 0x00f31760
IMPLEMENT_CLASS_AT(URenderTargetExporterTGA, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 6987);

// @baa 0x00f31800
IMPLEMENT_CLASS_AT(URenderTargetCubeExporterTGA, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 7151);

// @baa 0x00f31860
extern undefined * g_0214cac0;
// @baa 0x00f31880
undefined4 * UExporter::sub_00f31880(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b320();
  *param_1 = (undefined4)(&g_0214cac0);
  return param_1;
}

// @baa 0x00f318a0
IMPLEMENT_CLASS_AT(UTerrainExporterT3D, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdExpTerrain.cpp", 637);

// @baa 0x00f31900
// @baa 0x00f331e0
IMPLEMENT_CLASS_AT(UTextureRenderTargetCubeFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4751);

struct C_00f3d920 {
    int sub_00f3d920(undefined4, undefined4);
    int sub_00f38cd0(int, int);
};

// @baa 0x00f3d920
int C_00f3d920::sub_00f3d920(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00f3d920 *)(this))->sub_00f38cd0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00f3d940 {
    int sub_00f3d940(undefined4, undefined4);
    int sub_00f38d50(int, int);
};

// @baa 0x00f3d940
int C_00f3d940::sub_00f3d940(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00f3d940 *)(this))->sub_00f38d50(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00f3d960 {
    int sub_00f3d960(undefined4, undefined4);
    int sub_00f38dd0(int, int);
};

// @baa 0x00f3d960
int C_00f3d960::sub_00f3d960(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00f3d960 *)(this))->sub_00f38dd0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00f3d980 {
    int sub_00f3d980(undefined4, undefined4);
    int sub_00f38e50(int, int);
};

// @baa 0x00f3d980
int C_00f3d980::sub_00f3d980(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00f3d980 *)(this))->sub_00f38e50(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00f3d9a0 {
    int sub_00f3d9a0(undefined4, undefined4);
    int sub_00f38ed0(int, int);
};

// @baa 0x00f3d9a0
int C_00f3d9a0::sub_00f3d9a0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00f3d9a0 *)(this))->sub_00f38ed0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00f3d9c0 {
    int sub_00f3d9c0(undefined4, undefined4);
    int sub_00f38f50(int, int);
};

// @baa 0x00f3d9c0
int C_00f3d9c0::sub_00f3d9c0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00f3d9c0 *)(this))->sub_00f38f50(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00f3d9e0 {
    int sub_00f3d9e0(undefined4, undefined4);
    int sub_00f38fd0(int, int);
};

// @baa 0x00f3d9e0
int C_00f3d9e0::sub_00f3d9e0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00f3d9e0 *)(this))->sub_00f38fd0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00f3da00 {
    int sub_00f3da00(undefined4, undefined4);
    int sub_00f39050(int, int);
};

// @baa 0x00f3da00
int C_00f3da00::sub_00f3da00(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00f3da00 *)(this))->sub_00f39050(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00f3da20 {
    int sub_00f3da20(undefined4, undefined4);
    int sub_00f390d0(int, int);
};

// @baa 0x00f3da20
int C_00f3da20::sub_00f3da20(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00f3da20 *)(this))->sub_00f390d0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00f3da40 {
    int sub_00f3da40(undefined4, undefined4);
    int sub_00f39150(int, int);
};

// @baa 0x00f3da40
int C_00f3da40::sub_00f3da40(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00f3da40 *)(this))->sub_00f39150(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00f3da60 {
    int sub_00f3da60();
};

int sub_00f30f30(void);
// @baa 0x00f3da60
int C_00f3da60::sub_00f3da60(void)
{
    int param_1 = (int)this;

  sub_00f30f30();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f3da80 {
    int sub_00f3da80();
};

int sub_00f30f90(void);
// @baa 0x00f3da80
int C_00f3da80::sub_00f3da80(void)
{
    int param_1 = (int)this;

  sub_00f30f90();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f3daa0 {
    int sub_00f3daa0();
};

int sub_00f30ff0(void);
// @baa 0x00f3daa0
int C_00f3daa0::sub_00f3daa0(void)
{
    int param_1 = (int)this;

  sub_00f30ff0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f3dac0 {
    int sub_00f3dac0();
};

int sub_00f31050(void);
// @baa 0x00f3dac0
int C_00f3dac0::sub_00f3dac0(void)
{
    int param_1 = (int)this;

  sub_00f31050();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f3dae0 {
    int sub_00f3dae0();
};

int sub_00f310b0(void);
// @baa 0x00f3dae0
int C_00f3dae0::sub_00f3dae0(void)
{
    int param_1 = (int)this;

  sub_00f310b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f3db00 {
    int sub_00f3db00();
};

int sub_00f31110(void);
// @baa 0x00f3db00
int C_00f3db00::sub_00f3db00(void)
{
    int param_1 = (int)this;

  sub_00f31110();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f3db20 {
    int sub_00f3db20();
};

int sub_00f31170(void);
// @baa 0x00f3db20
int C_00f3db20::sub_00f3db20(void)
{
    int param_1 = (int)this;

  sub_00f31170();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f3db40 {
    int sub_00f3db40();
};

int sub_00f311d0(void);
// @baa 0x00f3db40
int C_00f3db40::sub_00f3db40(void)
{
    int param_1 = (int)this;

  sub_00f311d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f3db60 {
    int sub_00f3db60();
};

int sub_00f31230(void);
// @baa 0x00f3db60
int C_00f3db60::sub_00f3db60(void)
{
    int param_1 = (int)this;

  sub_00f31230();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00f3cab0();
// @baa 0x00f3e6c0
void sub_00f3e6c0(void) { sub_00f3cab0(); }

void sub_00f3cb20();
// @baa 0x00f3e6d0
void sub_00f3e6d0(void) { sub_00f3cb20(); }

void sub_00f3cb90();
// @baa 0x00f3e6e0
void sub_00f3e6e0(void) { sub_00f3cb90(); }

void sub_00f3cc00();
// @baa 0x00f3e6f0
void sub_00f3e6f0(void) { sub_00f3cc00(); }

void sub_00f3cc70();
// @baa 0x00f3e700
void sub_00f3e700(void) { sub_00f3cc70(); }

void sub_00f3cce0();
// @baa 0x00f3e710
void sub_00f3e710(void) { sub_00f3cce0(); }

void sub_00f3cd50();
// @baa 0x00f3e720
void sub_00f3e720(void) { sub_00f3cd50(); }

void sub_00f3cdc0();
// @baa 0x00f3e730
void sub_00f3e730(void) { sub_00f3cdc0(); }

void sub_00f3ce30();
// @baa 0x00f3e740
void sub_00f3e740(void) { sub_00f3ce30(); }

// Engine_07f0000.cpp: 64 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

void sub_007ee610();
// @baa 0x007f07d0
void sub_007f07d0(void) { sub_007ee610(); }

struct C {
    void sub_007f21d0();
    int sub_007ef5a0(int);
};

// @baa 0x007f21d0
void C::sub_007f21d0(void)
{
    int param_1 = (int)this;
  ((C *)((*(char **)((char *)this + 0x10))))->sub_007ef5a0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

int sub_0053dfa0(...);
int sub_00796530(void);
// @baa 0x007f21f0
undefined4 UBrushComponent::sub_007f21f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00796530();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_007f2de0 {
    int sub_007f2de0();
};

int sub_007ec090(void);
// @baa 0x007f2de0
int C_007f2de0::sub_007f2de0(void)
{
    int param_1 = (int)this;

  sub_007ec090();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f2e00 {
    int sub_007f2e00();
};

int sub_007ec0f0(void);
// @baa 0x007f2e00
int C_007f2e00::sub_007f2e00(void)
{
    int param_1 = (int)this;

  sub_007ec0f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_007f1930();
// @baa 0x007f2e20
void sub_007f2e20(void) { sub_007f1930(); }

int sub_007d7430(void);
int sub_007f1130(...);
extern undefined4 g_026b53c8;
// @baa 0x007f2e30
int sub_007f2e30(void)
{
  if (g_026b53c8 == 0) {
    g_026b53c8 = sub_007f1130(L"Engine");
    sub_007d7430();
  }
  return g_026b53c8;
}

int sub_007d75a0(void);
int sub_007f1260(...);
extern undefined4 g_026b53cc;
// @baa 0x007f2e60
int sub_007f2e60(void)
{
  if (g_026b53cc == 0) {
    g_026b53cc = sub_007f1260(L"Engine");
    sub_007d75a0();
  }
  return g_026b53cc;
}

// @baa 0x007f5440
IMPLEMENT_CLASS_AT(ULevel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnLevel.cpp", 114);

// @baa 0x007f5550
bool ULevel::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_007f57d0 { C_007f57d0* sub_007f57d0(void); };

// @baa 0x007f57d0
C_007f57d0* C_007f57d0::sub_007f57d0(void) { return this; }

struct C_view {
    int sub_007f2210(int, int);
};

// @baa 0x007f5bc0
void UFracturedStaticMeshComponent::sub_007f5bc0(void)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_007f2210(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_007f5c30 {
    int sub_007f22d0(int, int);
};

// @baa 0x007f5c30
void UBrushComponent::sub_007f5c30(void)
{
    int param_1 = (int)this;
  ((C_view_007f5c30 *)(this))->sub_007f22d0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_007f6b10 {
    int sub_007f6b10(undefined4, undefined4, undefined4);
    int sub_007f2810(int, int);
};

// @baa 0x007f6b10
int C_007f6b10::sub_007f6b10(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_007f6b10 *)(this))->sub_007f2810(param_2, param_4);
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
    void sub_007f22d0(int, int);
};

struct C_007f6b40 {
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
    void sub_007f6b40(void);
};

// @baa 0x007f6b40
void C_007f6b40::sub_007f6b40(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_007f22d0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
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

struct TConstSetBitIterator_007f6ba0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007f6ba0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007f6ba0& operator++();
};

TConstSetBitIterator_007f6ba0::TConstSetBitIterator_007f6ba0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007f6ba0
TConstSetBitIterator_007f6ba0& TConstSetBitIterator_007f6ba0::operator++()
{
    It.Advance();
    return *this;
}

struct C_007f6bf0 {
    int sub_007f6bf0(undefined4, undefined4, undefined4);
    int sub_007f2980(int, int);
};

// @baa 0x007f6bf0
int C_007f6bf0::sub_007f6bf0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_007f6bf0 *)(this))->sub_007f2980(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_007f6c20 {
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
    void sub_007f2210(int, int);
};

struct C_007f6c20 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_007f6c20* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_007f6c20(void);
};

// @baa 0x007f6c20
void C_007f6c20::sub_007f6c20(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_007f2210(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_007f6c40 {
    int sub_007f6c40();
};

int sub_007ebe50(void);
// @baa 0x007f6c40
int C_007f6c40::sub_007f6c40(void)
{
    int param_1 = (int)this;

  sub_007ebe50();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f6c60 {
    int sub_007f6c60();
};

int sub_007ebeb0(void);
// @baa 0x007f6c60
int C_007f6c60::sub_007f6c60(void)
{
    int param_1 = (int)this;

  sub_007ebeb0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f6c80 {
    int sub_007f6c80();
};

int sub_007ebf10(void);
// @baa 0x007f6c80
int C_007f6c80::sub_007f6c80(void)
{
    int param_1 = (int)this;

  sub_007ebf10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f6d30 {
    int sub_007f6d30();
};

int sub_007ebf70(void);
// @baa 0x007f6d30
int C_007f6d30::sub_007f6d30(void)
{
    int param_1 = (int)this;

  sub_007ebf70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f6d50 {
    int sub_007f6d50();
};

int sub_007ebfd0(void);
// @baa 0x007f6d50
int C_007f6d50::sub_007f6d50(void)
{
    int param_1 = (int)this;

  sub_007ebfd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f6de0 {
    int sub_007f6de0();
};

int sub_007ec030(void);
// @baa 0x007f6de0
int C_007f6de0::sub_007f6de0(void)
{
    int param_1 = (int)this;

  sub_007ec030();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f6e00 {
    int sub_007f6e00();
};

// @baa 0x007f6e00
int C_007f6e00::sub_007f6e00(void)
{
    int param_1 = (int)this;

  sub_007ec090();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f6e20 {
    int sub_007f6e20();
};

// @baa 0x007f6e20
int C_007f6e20::sub_007f6e20(void)
{
    int param_1 = (int)this;

  sub_007ec0f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f6e40 {
    undefined4 sub_007f6e40(undefined4, undefined4);
    int sub_007f6690(int, int);
};

// @baa 0x007f6e40
undefined4 C_007f6e40::sub_007f6e40(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_007f6e40 *)(this))->sub_007f6690(param_2, param_3);
  return param_1;
}

struct C_007f6e60 {
    int sub_007f6e60(undefined4, undefined4);
    int sub_007f6710(int, int);
};

// @baa 0x007f6e60
int C_007f6e60::sub_007f6e60(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_007f6e60 *)(this))->sub_007f6710(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

// @baa 0x007f6e80
UEngine::UEngine()
{
}

void sub_00542030(void);
// @baa 0x007f7230
void UEngine::vf_11c(INT a, INT b) {
    sub_00542030();
}

// @baa 0x007f7240
FLOAT UEngine::vf_120(INT a, INT b) {
	return 0.0f;
}

// @baa 0x007f7250
void UEngine::vf_164(void) {  }

// @baa 0x007f7260
int UEngine::vf_16c(int a0) { return 1; }

// @baa 0x007f7270
int UEngine::vf_170(int a0, int a1) { return 1; }

// @baa 0x007f7280
void UEngine::vf_174(void) {  }

// @baa 0x007f7290
int UEngine::vf_178(void) { return 0; }

// @baa 0x007f72a0
void __stdcall sub_007f72a0(int a0) {  }

// @baa 0x007f72b0
void UEngine::vf_188(void) {  }

// @baa 0x007f72c0
void UEngine::vf_18c(void) {  }

int sub_005c7a70(...);
int sub_007f6e80(void);
// @baa 0x007f7310
undefined4 UEngine::sub_007f7310(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007f6e80();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x42c);
  }
  return param_1;
}

void sub_007f57e0();
// @baa 0x007f7340
void sub_007f7340(void) { sub_007f57e0(); }

void sub_007f5850();
// @baa 0x007f7350
void sub_007f7350(void) { sub_007f5850(); }

void sub_007f58c0();
// @baa 0x007f7360
void sub_007f7360(void) { sub_007f58c0(); }

void sub_007f5930();
// @baa 0x007f7370
void sub_007f7370(void) { sub_007f5930(); }

int sub_007f7400(void);
// @baa 0x007f7540
undefined4 UGameEngine::sub_007f7540(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007f7400();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x554);
  }
  return param_1;
}

void sub_007f59a0();
// @baa 0x007f7570
void sub_007f7570(void) { sub_007f59a0(); }

void sub_007f5a10();
// @baa 0x007f7580
void sub_007f7580(void) { sub_007f5a10(); }

void sub_007f5a80();
// @baa 0x007f7590
void sub_007f7590(void) { sub_007f5a80(); }

void sub_007f5af0();
// @baa 0x007f7880
void sub_007f7880(void) { sub_007f5af0(); }

struct C_007f8090 {
    int sub_007f8090();
};

// @baa 0x007f8090
int C_007f8090::sub_007f8090(void)
{
    int param_1 = (int)this;

  sub_007ebe50();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f80b0 {
    int sub_007f80b0();
};

// @baa 0x007f80b0
int C_007f80b0::sub_007f80b0(void)
{
    int param_1 = (int)this;

  sub_007ebeb0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f80d0 {
    int sub_007f80d0();
};

// @baa 0x007f80d0
int C_007f80d0::sub_007f80d0(void)
{
    int param_1 = (int)this;

  sub_007ebf10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f81f0 {
    int sub_007f81f0();
};

// @baa 0x007f81f0
int C_007f81f0::sub_007f81f0(void)
{
    int param_1 = (int)this;

  sub_007ebf70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f8210 {
    int sub_007f8210();
};

// @baa 0x007f8210
int C_007f8210::sub_007f8210(void)
{
    int param_1 = (int)this;

  sub_007ebfd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f85b0 {
    int sub_007f85b0();
};

// @baa 0x007f85b0
int C_007f85b0::sub_007f85b0(void)
{
    int param_1 = (int)this;

  sub_007ec0f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x007f85d0
void sub_007f85d0(void) { sub_007f57e0(); }

// @baa 0x007f85e0
void sub_007f85e0(void) { sub_007f5850(); }

// @baa 0x007f85f0
void sub_007f85f0(void) { sub_007f58c0(); }

// @baa 0x007f8600
void sub_007f8600(void) { sub_007f5930(); }

// @baa 0x007f8610
void sub_007f8610(void) { sub_007f59a0(); }

// @baa 0x007f8620
void sub_007f8620(void) { sub_007f5a10(); }

// @baa 0x007f8630
void sub_007f8630(void) { sub_007f5a80(); }

// @baa 0x007f88e0
void sub_007f88e0(void) { sub_007f5af0(); }

int sub_007f88f0(void);
// @baa 0x007f8b10
undefined4 ULevel::sub_007f8b10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007f88f0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x224);
  }
  return param_1;
}

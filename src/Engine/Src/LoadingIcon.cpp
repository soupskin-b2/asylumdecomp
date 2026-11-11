// LoadingIcon.cpp: 28 functions
// Placed here by: neighbours 25, callers 2, file 1.
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

struct TConstSetBitIterator_00735480 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00735480(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00735480& operator++();
};

TConstSetBitIterator_00735480::TConstSetBitIterator_00735480(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00735480
TConstSetBitIterator_00735480& TConstSetBitIterator_00735480::operator++()
{
    It.Advance();
    return *this;
}

struct C {
    void sub_00c1b920();
};

int sub_006311e0(...);
extern undefined4 g_0203328c;
extern undefined4 g_02033384;
extern undefined4 g_026c3cdc;
// @baa 0x00c1b920
void C::sub_00c1b920(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    if (((g_026c3cdc == 0) || (*(int *)(g_026c3cdc + 800) == 0)) ||
       (*(int *)(g_026c3cdc + 0x330) == 0)) {
      sub_006311e0("GEngine && GEngine->Client && GEngine->GameViewport",
                   "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\LoadingIcon.cpp"
                   ,0x181,&g_0203328c);
    }
    iVar1 = *(int *)(*(int *)(g_026c3cdc + 0x330) + 0x38);
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar1 == 0) {
      sub_006311e0("Viewport",
                   "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\LoadingIcon.cpp"
                   ,0x184,&g_02033384);
    }
  }
  return;
}

struct C_00c1b9a0 { void sub_00c1b9a0(void); };

// @baa 0x00c1b9a0
void C_00c1b9a0::sub_00c1b9a0(void) { *(int*)((char*)this + 24) = 0; }

int sub_0053dfa0(...);
int sub_00c21980(void);
// @baa 0x00c219f0
undefined4 ULensFlare::sub_00c219f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c21980();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_00c38040 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c38040(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c38040& operator++();
};

TConstSetBitIterator_00c38040::TConstSetBitIterator_00c38040(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c38040
TConstSetBitIterator_00c38040& TConstSetBitIterator_00c38040::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00c439a0
IMPLEMENT_CLASS_AT(UMaterialExpressionTextureSampleParameter2D, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialExpressions.cpp", 55);

// @baa 0x00c43ab0
bool UMaterialExpressionTextureSampleParameter2D::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c43af0
IMPLEMENT_CLASS_AT(UMaterialExpressionTextureSampleParameterCube, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialExpressions.cpp", 56);

// @baa 0x00c43c00
bool UMaterialExpressionTextureSampleParameterCube::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c43c40
IMPLEMENT_CLASS_AT(UMaterialExpressionTextureSampleParameterMovie, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialExpressions.cpp", 57);

// @baa 0x00c43d50
bool UMaterialExpressionTextureSampleParameterMovie::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_view {
    int sub_006139b0(int, int);
};

// @baa 0x00c44130
void USpeechRecognition::sub_00c44130(void)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_006139b0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00c44140 {
    int sub_00c43220(int, int);
};

// @baa 0x00c44140
undefined4 USpeechRecognition::sub_00c44140(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00c44140 *)(this))->sub_00c43220(param_2, param_3);
  return param_1;
}

struct C_view_00c44160 {
    int sub_00613a70(int, int);
};

// @baa 0x00c44160
void USpeechRecognition::sub_00c44160(void)
{
    int param_1 = (int)this;
  ((C_view_00c44160 *)(this))->sub_00613a70(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00c44170 {
    int sub_00c43280(int, int);
};

// @baa 0x00c44170
undefined4 USpeechRecognition::sub_00c44170(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00c44170 *)(this))->sub_00c43280(param_2, param_3);
  return param_1;
}

int sub_00c380e0(void);
// @baa 0x00c442c0
int USpeechRecognition::sub_00c442c0(void)
{
    int param_1 = (int)this;

  sub_00c380e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00c43e60();
// @baa 0x00c44460
void sub_00c44460(void) { sub_00c43e60(); }

// @baa 0x00c446e0
IMPLEMENT_CLASS_AT(UMaterialExpressionTextureSampleParameterSubUV, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialExpressions.cpp", 58);

// @baa 0x00c447f0
bool UMaterialExpressionTextureSampleParameterSubUV::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_view_00c44860 {
    int sub_00c43220(int, int);
};

// @baa 0x00c44860
int USpeechRecognition::sub_00c44860(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00c44860 *)(this))->sub_00c43220(param_2, param_4);
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
    void sub_006139b0(int, int);
};

struct C_00c44890 {
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
    void sub_00c44890(void);
};

// @baa 0x00c44890
void C_00c44890::sub_00c44890(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_006139b0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_view_00c448b0 {
    int sub_00c43280(int, int);
};

// @baa 0x00c448b0
int USpeechRecognition::sub_00c448b0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00c448b0 *)(this))->sub_00c43280(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_00c448e0 {
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
    void sub_00613a70(int, int);
};

struct C_00c448e0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_00c448e0* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00c448e0(void);
};

// @baa 0x00c448e0
void C_00c448e0::sub_00c448e0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00613a70(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

void sub_00c44190();
// @baa 0x00c44900
void sub_00c44900(void) { sub_00c44190(); }

struct C_00c44910 {
    int sub_00c44910();
};

// @baa 0x00c44910
int C_00c44910::sub_00c44910(void)
{
    int param_1 = (int)this;

  sub_00c380e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00c44230(void);
// @baa 0x00c449b0
undefined4 USpeechRecognition::sub_00c449b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c44230();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00c38140(void);
// @baa 0x00c449d0
int USpeechRecognition::sub_00c449d0(void)
{
    int param_1 = (int)this;

  sub_00c38140();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00c44a50
void sub_00c44a50(void) { sub_00c43e60(); }

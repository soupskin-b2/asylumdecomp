// Editor_0f60000.cpp: 88 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_view {
    int sub_00f61af0(int);
};

// @baa 0x00f61c50
int UObject::sub_00f61c50(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00f61af0(param_2);
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return param_1;
}

int sub_0053dfa0(...);
int sub_00f5e370(void);
// @baa 0x00f61d60
undefined4 UObject::sub_00f61d60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f5e370();
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

struct TConstSetBitIterator_00f620c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f620c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f620c0& operator++();
};

TConstSetBitIterator_00f620c0::TConstSetBitIterator_00f620c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f620c0
TConstSetBitIterator_00f620c0& TConstSetBitIterator_00f620c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f62110 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f62110(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f62110& operator++();
};

TConstSetBitIterator_00f62110::TConstSetBitIterator_00f62110(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f62110
TConstSetBitIterator_00f62110& TConstSetBitIterator_00f62110::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f62160 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f62160(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f62160& operator++();
};

TConstSetBitIterator_00f62160::TConstSetBitIterator_00f62160(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f62160
TConstSetBitIterator_00f62160& TConstSetBitIterator_00f62160::operator++()
{
    It.Advance();
    return *this;
}

void sub_00f651c0();
// @baa 0x00f65940
void sub_00f65940(void) { sub_00f651c0(); }

struct C {
    void sub_00f65a80();
    int sub_00f65250(int);
};

// @baa 0x00f65a80
void C::sub_00f65a80(void)
{
    int param_1 = (int)this;
  ((C *)((*(char **)((char *)this + 0x10))))->sub_00f65250(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

int sub_00f61fa0(void);
// @baa 0x00f65de0
int UEditorEngine::sub_00f65de0(void)
{
    int param_1 = (int)this;

  sub_00f61fa0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00f62000(void);
// @baa 0x00f65e00
int UEditorEngine::sub_00f65e00(void)
{
    int param_1 = (int)this;

  sub_00f62000();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f66020 {
    void sub_00f66020();
    int sub_00f65aa0(int, int);
};

// @baa 0x00f66020
void C_00f66020::sub_00f66020(void)
{
    int param_1 = (int)this;
  ((C_00f66020 *)(this))->sub_00f65aa0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00f66130 {
    int sub_00f65b60(int, int);
};

// @baa 0x00f66130
void UPackageMap::sub_00f66130(void)
{
    int param_1 = (int)this;
  ((C_view_00f66130 *)(this))->sub_00f65b60(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_00f66140 {
    undefined4 sub_00f66140(undefined4, undefined4);
    int sub_00f65c20(int, int);
};

// @baa 0x00f66140
undefined4 C_00f66140::sub_00f66140(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00f66140 *)(this))->sub_00f65c20(param_2, param_3);
  return param_1;
}

struct C_00f66160 {
    undefined4 sub_00f66160(undefined4, undefined4);
    int sub_00f65c80(int, int);
};

// @baa 0x00f66160
undefined4 C_00f66160::sub_00f66160(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00f66160 *)(this))->sub_00f65c80(param_2, param_3);
  return param_1;
}

struct C_00f66250 {
    int sub_00f66250(undefined4, undefined4);
    int sub_00f65ce0(int, int);
};

// @baa 0x00f66250
int C_00f66250::sub_00f66250(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00f66250 *)(this))->sub_00f65ce0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00f66270 {
    int sub_00f66270(undefined4, undefined4);
    int sub_00f65d60(int, int);
};

// @baa 0x00f66270
int C_00f66270::sub_00f66270(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00f66270 *)(this))->sub_00f65d60(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

// @baa 0x00f66290
int UEditorEngine::sub_00f66290(void)
{
    int param_1 = (int)this;

  sub_00f61fa0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00f662b0
int UEditorEngine::sub_00f662b0(void)
{
    int param_1 = (int)this;

  sub_00f62000();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00f65f40();
// @baa 0x00f66430
void sub_00f66430(void) { sub_00f65f40(); }

void sub_00f65fb0();
// @baa 0x00f677a0
void sub_00f677a0(void) { sub_00f65fb0(); }

struct C_00f67ab0 {
    int sub_00f67ab0(undefined4, undefined4, undefined4);
    int sub_00f65c20(int, int);
};

// @baa 0x00f67ab0
int C_00f67ab0::sub_00f67ab0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_00f67ab0 *)(this))->sub_00f65c20(param_2, param_4);
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
    void sub_00f65b60(int, int);
};

struct C_00f67ae0 {
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
    void sub_00f67ae0(void);
};

// @baa 0x00f67ae0
void C_00f67ae0::sub_00f67ae0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00f65b60(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_00f67b00 {
    int sub_00f67b00(undefined4, undefined4, undefined4);
    int sub_00f65c80(int, int);
};

// @baa 0x00f67b00
int C_00f67b00::sub_00f67b00(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_00f67b00 *)(this))->sub_00f65c80(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_00f67b30 {
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
    void sub_00f65aa0(int, int);
};

struct C_00f67b30 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_00f67b30* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00f67b30(void);
};

// @baa 0x00f67b30
void C_00f67b30::sub_00f67b30(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00f65aa0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_00f67c10 {
    FString sub_00f67c10();
};

// @baa 0x00f67c10
FString C_00f67c10::sub_00f67c10()
{
    return TEXT("ReplaceObjectRef");
}

struct C_00f67d80 {
    undefined4 sub_00f67d80(byte);
};

int sub_00f65ee0(void);
// @baa 0x00f67d80
undefined4 C_00f67d80::sub_00f67d80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f65ee0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00f67da0
int UEditorEngine::sub_00f67da0(void)
{
    int param_1 = (int)this;

  sub_00f61fa0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00f67dc0
int UEditorEngine::sub_00f67dc0(void)
{
    int param_1 = (int)this;

  sub_00f62000();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00f66360();
// @baa 0x00f67e40
void sub_00f67e40(void) { sub_00f66360(); }

// @baa 0x00f67ee0
void UEditorEngine::SetClientTravel(int a0, int a1) {  }

// @baa 0x00f67f10
int UEditorEngine::vf_178(void) { return 0; }

// @baa 0x00f67f20
void __stdcall sub_00f67f20(int a0) {  }

// @baa 0x00f67f30
void UEditorEngine::vf_194(int a0, int a1, int a2) {  }

// @baa 0x00f67f40
void UEditorEngine::vf_198(void) {  }

// @baa 0x00f67f70
void UEditorEngine::vf_1a4(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x00f67f80
void UEditorEngine::vf_1a8(void) {  }

// @baa 0x00f67f90
void UEditorEngine::vf_1b0(void) {  }

// @baa 0x00f67fa0
void __stdcall sub_00f67fa0(int a0) {  }

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
extern undefined2 g_01fa4458;
// @baa 0x00f67fb0
void sub_00f67fb0(void)
{
  sub_006311e0(&g_01fa4458,"Editor/Inc\\Editor.h",0x2a8,&g_01e3f3dc);
  return;
}

// @baa 0x00f67fd0
void UEditorEngine::vf_1c0(void) {
  sub_006311e0(&g_01fa4458,"Editor/Inc\\Editor.h",0x2b4,&g_01e3f3dc);
  return;
}

// @baa 0x00f67ff0
void UEditorEngine::vf_1c8(int a0, int a1) {  }

// @baa 0x00f68000
void UEditorEngine::vf_1cc(int a0, int a1, int a2) {  }

// @baa 0x00f68010
void UEditorEngine::vf_1d0(int a0) {  }

// @baa 0x00f68020
int UEditorEngine::vf_1d4(int a0, int a1) { return 1; }

// @baa 0x00f68030
int UEditorEngine::vf_1d8(int a0) { return 0; }

// @baa 0x00f68040
void UEditorEngine::vf_1dc(void) {  }

// @baa 0x00f68050
void UEditorEngine::vf_1e0(void) {  }

// @baa 0x00f68060
void UEditorEngine::vf_1e4(void) {  }

// @baa 0x00f68070
void UEditorEngine::vf_1e8(void) {  }

// @baa 0x00f68080
void UEditorEngine::vf_208(int a0, int a1, int a2, int a3, int a4) {  }

// @baa 0x00f68090
void UEditorEngine::vf_20c(int a0, int a1, int a2, int a3) {  }

// @baa 0x00f680a0
void UEditorEngine::vf_210(int a0, int a1) {  }

// @baa 0x00f680b0
void UEditorEngine::vf_2a8(void) {  }

// @baa 0x00f680c0
int UEditorEngine::vf_2cc(int a0, int a1) { return 0; }

// @baa 0x00f680d0
void UEditorEngine::vf_2d0(void) {  }

// @baa 0x00f680e0
void sub_00f680e0(void) {  }

// @baa 0x00f680f0
void sub_00f680f0(void) {  }

// @baa 0x00f68100
void UEditorEngine::vf_2dc(void) {  }

// @baa 0x00f68110
void UEditorEngine::vf_2e0(void) {  }

// @baa 0x00f68120
void UEditorEngine::vf_2e4(void) {  }

// @baa 0x00f68130
void UEditorEngine::vf_2e8(int a0, int a1) {  }

// @baa 0x00f68140
void UEditorEngine::vf_2ec(int a0, int a1) {  }

// @baa 0x00f68150
int UEditorEngine::vf_2f0(void) { return 0; }

// @baa 0x00f68160
void UEditorEngine::vf_2f4(int a0) {  }

// @baa 0x00f68170
void UEditorEngine::vf_300(void) {  }

// @baa 0x00f68180
void UEditorEngine::vf_304(int a0, int a1, int a2) {  }

// @baa 0x00f68190
void UEditorEngine::vf_308(int a0, int a1) {  }

// @baa 0x00f681a0
void UEditorEngine::vf_30c(int a0, int a1, int a2) {  }

// @baa 0x00f681b0
void UEditorEngine::vf_310(int a0, int a1, int a2, int a3) {  }

struct A_00f681c0 { virtual void sub_00f683a0(); char pad[1064]; };

struct B_00f681c0 { virtual void sub_00f683a0(); };

struct C_00f681c0 : A_00f681c0, B_00f681c0 { virtual void sub_00f683a0(); C_00f681c0(); };

C_00f681c0::C_00f681c0() {}

// @baa 0x00f681c0
void C_00f681c0::sub_00f683a0() {}

// @baa 0x00f68250
UEditorEngine::UEditorEngine()
{
    *(DWORD*)((BYTE*)this + 0x4bc) = 0;
    *(DWORD*)((BYTE*)this + 0x4c0) = 0;
    *(DWORD*)((BYTE*)this + 0x4c4) = 0;
    *(DWORD*)((BYTE*)this + 0x580) = 0;
    *(DWORD*)((BYTE*)this + 0x584) = 0;
    *(DWORD*)((BYTE*)this + 0x588) = 0;
    *(DWORD*)((BYTE*)this + 0x58c) = 0;
    *(DWORD*)((BYTE*)this + 0x590) = 0;
    *(DWORD*)((BYTE*)this + 0x594) = 0;
    *(DWORD*)((BYTE*)this + 0x5f0) = 0;
}

int sub_005c7a70(...);
int sub_00f68250(void);
// @baa 0x00f683a0
undefined4 UEditorEngine::sub_00f683a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f68250();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x620);
  }
  return param_1;
}

// @baa 0x00f68440
void sub_00f68440(void) { sub_00f65f40(); }

// @baa 0x00f68450
void sub_00f68450(void) { sub_00f65fb0(); }

// @baa 0x00f68460
int UEditorEngine::sub_00f68460(void)
{
    int param_1 = (int)this;

  sub_00f61fa0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00f68480
int UEditorEngine::sub_00f68480(void)
{
    int param_1 = (int)this;

  sub_00f62000();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f684a0 { void sub_00f67de0(int); C_00f684a0 *sub_00f684a0(int); };

// @baa 0x00f684a0
C_00f684a0 *C_00f684a0::sub_00f684a0(int a) { sub_00f67de0(a); return this; }

// @baa 0x00f685b0
void sub_00f685b0(void) { sub_00f65f40(); }

// @baa 0x00f685c0
void sub_00f685c0(void) { sub_00f65fb0(); }

struct M_00f6aa70 { void sub_00f65fb0(); };

struct C_00f6aa70 { char pad[4]; M_00f6aa70 m; void sub_00f6aa70(); };

// @baa 0x00f6aa70
void C_00f6aa70::sub_00f6aa70() { m.sub_00f65fb0(); }

struct M_00f6aa80 { void sub_00f65fb0(); };

struct C_00f6aa80 { char pad[4]; M_00f6aa80 m; void sub_00f6aa80(); };

// @baa 0x00f6aa80
void C_00f6aa80::sub_00f6aa80() { m.sub_00f65fb0(); }

struct C_00f6aa90 { void sub_00f67de0(int); C_00f6aa90 *sub_00f6aa90(int); };

// @baa 0x00f6aa90
C_00f6aa90 *C_00f6aa90::sub_00f6aa90(int a) { sub_00f67de0(a); return this; }

struct C_view_00f6aab0 {
    int sub_00f65fb0();
};

// @baa 0x00f6aab0
undefined4 UEditorEngine::sub_00f6aab0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00f6aab0 *)(((char *)this + 4)))->sub_00f65fb0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00f6d420 {
    undefined4 sub_00f6d420(byte);
    int sub_00f65fb0();
};

// @baa 0x00f6d420
undefined4 C_00f6d420::sub_00f6d420(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00f6d420 *)(((char *)this + 4)))->sub_00f65fb0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00f6d450 { void sub_00f67de0(int); C_00f6d450 *sub_00f6d450(int); };

// @baa 0x00f6d450
C_00f6d450 *C_00f6d450::sub_00f6d450(int a) { sub_00f67de0(a); return this; }

struct C_00f6d5b0 {
    undefined4 * sub_00f6d5b0(undefined4 *);
    int sub_00f67de0(int);
};

// @baa 0x00f6d5b0
undefined4 * C_00f6d5b0::sub_00f6d5b0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_00f6d5b0 *)(((char *)this + 4)))->sub_00f67de0((int)(param_2 + 1));
  return param_1;
}

struct C_00f6f760 {
    undefined4 * sub_00f6f760(undefined4 *);
    int sub_00f67de0(int);
};

// @baa 0x00f6f760
undefined4 * C_00f6f760::sub_00f6f760(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_00f6f760 *)(((char *)this + 4)))->sub_00f67de0(param_2[1]);
  return param_1;
}

struct C_00f6f830 {
    undefined4 * sub_00f6f830(undefined4 *);
    int sub_00f67de0(int);
};

// @baa 0x00f6f830
undefined4 * C_00f6f830::sub_00f6f830(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_00f6f830 *)(((char *)this + 4)))->sub_00f67de0(param_2[1]);
  param_1[0x10] = 0xffffffff;
  return param_1;
}

// @baa 0x00f67f50
void __stdcall sub_00f67f50(float* P)
{
	*P = 0.f;
	P[1] = 0.f;
	P[2] = 0.f;
}

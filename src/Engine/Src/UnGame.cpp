// UnGame.cpp (part 1 of 3): 81 functions
// Placed here by: neighbours 27, callers 21.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_00569f00(undefined4, undefined4, undefined4);
};

int sub_00630f20(...);
// @baa 0x00569f00
void C::sub_00569f00(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4);
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

struct TConstSetBitIterator_00612f10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00612f10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00612f10& operator++();
};

TConstSetBitIterator_00612f10::TConstSetBitIterator_00612f10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00612f10
TConstSetBitIterator_00612f10& TConstSetBitIterator_00612f10::operator++()
{
    It.Advance();
    return *this;
}

struct C_view {
    int sub_006138c0(int, int);
};

// @baa 0x006177e0
int UPackageMap::sub_006177e0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_006138c0(param_2, param_4);
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
    void sub_005dae80(int, int);
};

struct C_00617810 {
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
    void sub_00617810(void);
};

// @baa 0x00617810
void C_00617810::sub_00617810(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_005dae80(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

int sub_007590e0(void);
int sub_0075e600(...);
extern undefined4 g_026b3cc8;
// @baa 0x0064b500
int sub_0064b500(void)
{
  if (g_026b3cc8 == 0) {
    g_026b3cc8 = sub_0075e600(L"Engine");
    sub_007590e0();
  }
  return g_026b3cc8;
}

int sub_00787480(void);
int sub_0079ad90(...);
extern undefined4 g_026b43b0;
// @baa 0x007d5ac0
int sub_007d5ac0(void)
{
  if (g_026b43b0 == 0) {
    g_026b43b0 = sub_0079ad90(L"Engine");
    sub_00787480();
  }
  return g_026b43b0;
}

extern "C" int g_026c52cc;
extern "C" int g_026c52d0;
struct UObjectThunk {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_007d64e0();
};

// @baa 0x007d64e0
void UObjectThunk::sub_007d64e0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c52cc, g_026c52d0, 0), 0, 0);
}

int sub_00b51470(void);
int sub_00b6a780(...);
extern undefined4 g_026bf5ac;
// @baa 0x007d6a50
int sub_007d6a50(void)
{
  if (g_026bf5ac == 0) {
    g_026bf5ac = sub_00b6a780(L"Engine");
    sub_00b51470();
  }
  return g_026bf5ac;
}

int sub_00b9e040(...);
int sub_00ba4d80(void);
extern undefined4 g_026bf7cc;
// @baa 0x007d6a80
int sub_007d6a80(void)
{
  if (g_026bf7cc == 0) {
    g_026bf7cc = sub_00b9e040(L"Engine");
    sub_00ba4d80();
  }
  return g_026bf7cc;
}

int sub_00df4e80(void);
int sub_00e16aa0(...);
extern undefined4 g_026c5edc;
// @baa 0x007d6ab0
int sub_007d6ab0(void)
{
  if (g_026c5edc == 0) {
    g_026c5edc = sub_00e16aa0(L"Engine");
    sub_00df4e80();
  }
  return g_026c5edc;
}

int sub_00e1ea90(...);
int sub_00e200f0(void);
extern undefined4 g_026c63b8;
// @baa 0x007d6ae0
int sub_007d6ae0(void)
{
  if (g_026c63b8 == 0) {
    g_026c63b8 = sub_00e1ea90(L"Engine");
    sub_00e200f0();
  }
  return g_026c63b8;
}

int sub_005e1960(...);
extern undefined4 g_026667a8;
// @baa 0x007d6b10
void sub_007d6b10(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026c63b8 == 0) {
    g_026c63b8 = sub_00e1ea90(L"Engine");
    sub_00e200f0();
  }
  sub_005e1960(g_026c63b8,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

int sub_00bf9a40(void);
int sub_00c156d0(...);
extern undefined4 g_026c087c;
// @baa 0x007d6b70
int sub_007d6b70(void)
{
  if (g_026c087c == 0) {
    g_026c087c = sub_00c156d0(L"Engine");
    sub_00bf9a40();
  }
  return g_026c087c;
}

struct C_007d6bf0 { int sub_007d6bf0(void); };

// @baa 0x007d6bf0
int C_007d6bf0::sub_007d6bf0(void) { return *(int*)((char*)this + 36); }

struct C_007d6c00 { void sub_007d6c00(int a0); };

// @baa 0x007d6c00
void C_007d6c00::sub_007d6c00(int a0) { *(int*)((char*)this + 28) = a0; }

struct C_007d91f0 {
    void sub_007d91f0(undefined4, float);
};

// @baa 0x007d91f0
void C_007d91f0::sub_007d91f0(undefined4 param_2, float param_3)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,(double)param_3);
  return;
}

struct C_007d9210 {
    void sub_007d9210(undefined4, float, undefined4);
};

// @baa 0x007d9210
void C_007d9210::sub_007d9210(undefined4 param_2, float param_3, undefined4 param_4)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,(double)param_3,param_4);
  return;
}

int sub_005d8a20(...);
int sub_009b04f0(void);
int sub_009c7e30(...);
extern undefined4 g_026b62b4;
// @baa 0x007d9350
void sub_007d9350(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026b62b4 == 0) {
    g_026b62b4 = sub_009c7e30(L"Engine");
    sub_009b04f0();
  }
  sub_005d8a20(g_026b62b4,param_1,param_2,param_3);
  return;
}

struct C_007dbfb0 {
    void sub_007dbfb0(undefined4, undefined4);
};

// @baa 0x007dbfb0
void C_007dbfb0::sub_007dbfb0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3);
  return;
}

struct C_007dbfe0 {
    void sub_007dbfe0(undefined4, undefined4, undefined4);
};

// @baa 0x007dbfe0
void C_007dbfe0::sub_007dbfe0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 param_1 = (undefined4)this;
  sub_00630f20(param_1,param_2,param_3,param_4);
  return;
}

struct C_007dc000 {
    void sub_007dc000(undefined4, undefined4, undefined4);
};

// @baa 0x007dc000
void C_007dc000::sub_007dc000(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4);
  return;
}

struct M_007dcbb0 { void sub_0040fcc0(); };

struct C_007dcbb0 { char pad[4]; M_007dcbb0 m; void sub_007dcbb0(); };

// @baa 0x007dcbb0
void C_007dcbb0::sub_007dcbb0() { m.sub_0040fcc0(); }

struct C_007dccb0 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_007dccb0& sub_007dccb0(int Arg);
};

// @baa 0x007dccb0
C_007dccb0& C_007dccb0::sub_007dccb0(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

struct C_007dccd0 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_007dccd0& sub_007dccd0(int Arg);
};

// @baa 0x007dccd0
C_007dccd0& C_007dccd0::sub_007dccd0(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_007dfa50 { void* Data; int Num; int Max; void sub_007dfa50(); };

// @baa 0x007dfa50
void C_007dfa50::sub_007dfa50() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007e0ef0 {
    undefined4 sub_007e0ef0(byte);
    int sub_007df900();
};

int sub_0053dfa0(...);
// @baa 0x007e0ef0
undefined4 C_007e0ef0::sub_007e0ef0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_007e0ef0 *)(((char *)this + 4)))->sub_007df900();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_007e0f20 {
    undefined4 sub_007e0f20(byte);
    int sub_00602210();
};

// @baa 0x007e0f20
undefined4 C_007e0f20::sub_007e0f20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_007e0f20 *)(((char *)this + 0x18)))->sub_00602210();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_007e0f50 {
    undefined4 * sub_007e0f50(undefined4 *);
    int sub_007e0240(int);
};

// @baa 0x007e0f50
undefined4 * C_007e0f50::sub_007e0f50(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_007e0f50 *)(((char *)this + 4)))->sub_007e0240((int)(param_2 + 1));
  return param_1;
}

void sub_007def20();
// @baa 0x007e15a0
void sub_007e15a0(void) { sub_007def20(); }

void sub_007df310();
// @baa 0x007e15b0
void sub_007e15b0(void) { sub_007df310(); }

void sub_007df3b0();
// @baa 0x007e15c0
void sub_007e15c0(void) { sub_007df3b0(); }

void sub_007df410();
// @baa 0x007e15d0
void sub_007e15d0(void) { sub_007df410(); }

struct C_007e15f0 {
    undefined4 * sub_007e15f0(undefined4);
};

int sub_007dccf0(void);
// @baa 0x007e15f0
undefined4 * C_007e15f0::sub_007e15f0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = param_2;
  param_1[1] = 0xffffffff;
  sub_007dccf0();
  return param_1;
}

struct C_007ee7b0 {
    int sub_007ee7b0(int);
    int sub_007e4e60(int, int);
};

// @baa 0x007ee7b0
int C_007ee7b0::sub_007ee7b0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_007ee7b0 *)(this))->sub_007e4e60((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x44, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct TConstSetBitIterator_007f1b80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007f1b80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007f1b80& operator++();
};

TConstSetBitIterator_007f1b80::TConstSetBitIterator_007f1b80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007f1b80
TConstSetBitIterator_007f1b80& TConstSetBitIterator_007f1b80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007f1ba0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007f1ba0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007f1ba0& operator++();
};

TConstSetBitIterator_007f1ba0::TConstSetBitIterator_007f1ba0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007f1ba0
TConstSetBitIterator_007f1ba0& TConstSetBitIterator_007f1ba0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007f1bc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007f1bc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007f1bc0& operator++();
};

TConstSetBitIterator_007f1bc0::TConstSetBitIterator_007f1bc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007f1bc0
TConstSetBitIterator_007f1bc0& TConstSetBitIterator_007f1bc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007f1be0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007f1be0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007f1be0& operator++();
};

TConstSetBitIterator_007f1be0::TConstSetBitIterator_007f1be0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007f1be0
TConstSetBitIterator_007f1be0& TConstSetBitIterator_007f1be0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007f1c00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007f1c00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007f1c00& operator++();
};

TConstSetBitIterator_007f1c00::TConstSetBitIterator_007f1c00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007f1c00
TConstSetBitIterator_007f1c00& TConstSetBitIterator_007f1c00::operator++()
{
    It.Advance();
    return *this;
}

struct C_007f6a20 {
    int sub_007f6a20(undefined4, undefined4, undefined4);
    int sub_007f2690(int, int);
};

// @baa 0x007f6a20
int C_007f6a20::sub_007f6a20(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_007f6a20 *)(this))->sub_007f2690(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_007f6a50 {
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
    void sub_007f25d0(int, int);
};

struct C_007f6a50 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_007f6a50* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_007f6a50(void);
};

// @baa 0x007f6a50
void C_007f6a50::sub_007f6a50(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_007f25d0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_007f6ac0 {
    int sub_007f6ac0(undefined4, undefined4, undefined4);
    int sub_007f27b0(int, int);
};

// @baa 0x007f6ac0
int C_007f6ac0::sub_007f6ac0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_007f6ac0 *)(this))->sub_007f27b0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_007f6af0 {
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
    void sub_007f26f0(int, int);
};

struct C_007f6af0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_007f6af0* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_007f6af0(void);
};

// @baa 0x007f6af0
void C_007f6af0::sub_007f6af0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_007f26f0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_007f8230 {
    int sub_007f8230();
};

int sub_007ec030(void);
// @baa 0x007f8230
int C_007f8230::sub_007f8230(void)
{
    int param_1 = (int)this;

  sub_007ec030();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f8590 {
    int sub_007f8590();
};

int sub_007ec090(void);
// @baa 0x007f8590
int C_007f8590::sub_007f8590(void)
{
    int param_1 = (int)this;

  sub_007ec090();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007fbe90 { void sub_007f98e0(int); void sub_007fbe90(); };

// @baa 0x007fbe90
void C_007fbe90::sub_007fbe90() { sub_007f98e0(0); }

// @baa 0x00afa0f0
void __stdcall sub_00afa0f0(int a0) {  }

// @baa 0x00bf8e00
void __stdcall sub_00bf8e00(int a0) {  }

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

struct Block_007f6b40 {
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
    Block_007f6b40* Unk20;  // 0x20
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

int sub_007ec0f0(void);
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

// @baa 0x00cafe20
int UGameEngine::vf_000(void) { return 1; }

// The Win driver viewport client (WinDrv). UGameViewportClient stores the
// pointer to it right after its script header (0x38, the script field
// "Viewport"); the header's FPointer can't carry the C++ type, so a small
// view struct with the same bases reaches it.
struct FWinViewportClient_
{
	virtual void d00();
	virtual void d04();
	virtual void d08();
	virtual void d0c();
	virtual void d10();
	virtual void Render(); /* 0x14 */
};

struct UGameViewportClient_WindowViewport : public UObject, public FViewportClient, public FExec
{
	FWinViewportClient_* WindowViewport; /* 0x38 */
};

// @baa 0x007d6ff0
void UGameEngine::vf_188()
{
	if (GameViewport)
		((UGameViewportClient_WindowViewport*)GameViewport)->WindowViewport->Render();
}

/* Undeclared in the kit: this TU's out-of-line copy of FString::operator=(const TCHAR*) and FURL's option helpers. */
struct FString_ : public FString
{
	FString_& operator=(const TCHAR* Other); /* 0x006b1140 */
};

// @baa 0x007d9bc0
/* UnGame.cpp */
void UGameEngine::SetClientTravel(const TCHAR* NextURL, ETravelType InTravelType)
{
	(FString_&)TravelURL = NextURL;
	TravelType = InTravelType;

	// Prevent crashing the game by attempting to connect to own listen server
	if (((FURL&)LastURL).HasOption(TEXT("Listen")))
	{
		((FURL&)LastURL).RemoveOption(TEXT("Listen"), NULL, NULL);
	}
}

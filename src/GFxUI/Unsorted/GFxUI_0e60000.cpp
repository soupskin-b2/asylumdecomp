// GFxUI_0e60000.cpp (part 1 of 2): 39 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_00e61e90();
};

// @baa 0x00e61e90
undefined4 C::sub_00e61e90(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xdc);
  return 0;
}

struct C_00e61f20 { int sub_00e61f20(void); };

// @baa 0x00e61f20
int C_00e61f20::sub_00e61f20(void) { return *(int*)((char*)this + 68); }

struct C_00e61f30 { int sub_00e61f30(void); };

// @baa 0x00e61f30
int C_00e61f30::sub_00e61f30(void) { return *(int*)((char*)this + 72); }

extern undefined4*g_026b0d94;
// @baa 0x00e62180
void UTextureCube::sub_00e62180(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x22c))((int)(iVar1));
}
iVar1=*(int*)(param_1+0x18);
*(undefined4*)(param_1+0x18)=0;
if(iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x25c))((int)(iVar1));
}
iVar1=*(int*)(param_1+0x54);
*(undefined4*)(param_1+0x54)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x228))((int)(iVar1));
}
return;
}

int sub_0053dfa0(...);
int sub_00e61f40(void);
// @baa 0x00e621f0
undefined4 UTextureCube::sub_00e621f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e61f40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_0072ef30();
// @baa 0x00e62210
void sub_00e62210(void) { sub_0072ef30(); }

struct C_00e623c0 {
    int sub_00e623c0(int);
    int sub_00e5ca40(int, int);
};

// @baa 0x00e623c0
int C_00e623c0::sub_00e623c0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00e623c0 *)(this))->sub_00e5ca40((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
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

struct TConstSetBitIterator_00e626f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e626f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e626f0& operator++();
};

TConstSetBitIterator_00e626f0::TConstSetBitIterator_00e626f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e626f0
TConstSetBitIterator_00e626f0& TConstSetBitIterator_00e626f0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00e62710 {
    void sub_00e62710();
    int sub_00e5eb00(int);
};

// @baa 0x00e62710
void C_00e62710::sub_00e62710(void)
{
    int param_1 = (int)this;
  ((C_00e62710 *)((*(char **)((char *)this + 0x10))))->sub_00e5eb00(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00e62730 {
    void sub_00e62730();
    int sub_00e5ec70(int);
};

// @baa 0x00e62730
void C_00e62730::sub_00e62730(void)
{
    int param_1 = (int)this;
  ((C_00e62730 *)((*(char **)((char *)this + 0x10))))->sub_00e5ec70(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct TConstSetBitIterator_00e62b00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e62b00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e62b00& operator++();
};

TConstSetBitIterator_00e62b00::TConstSetBitIterator_00e62b00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e62b00
TConstSetBitIterator_00e62b00& TConstSetBitIterator_00e62b00::operator++()
{
    It.Advance();
    return *this;
}

int sub_00e43460(void);
int sub_00e5f7c0(...);
extern undefined4 g_026caee4;
// @baa 0x00e634f0
int sub_00e634f0(void)
{
  if (g_026caee4 == 0) {
    g_026caee4 = sub_00e5f7c0(L"GFxUI");
    sub_00e43460();
  }
  return g_026caee4;
}

void sub_00e62220();
// @baa 0x00e63520
void sub_00e63520(void) { sub_00e62220(); }

void sub_00e622f0();
// @baa 0x00e63530
void sub_00e63530(void) { sub_00e622f0(); }

struct C_00e66f90 {
    undefined4 sub_00e66f90(undefined4, undefined4);
    int sub_00e64ac0(int, int);
};

// @baa 0x00e66f90
undefined4 C_00e66f90::sub_00e66f90(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00e66f90 *)(this))->sub_00e64ac0(param_2, param_3);
  return param_1;
}

struct C_00e66fb0 {
    int sub_00e66fb0(undefined4, undefined4);
    int sub_00e64b20(int, int);
};

// @baa 0x00e66fb0
int C_00e66fb0::sub_00e66fb0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00e66fb0 *)(this))->sub_00e64b20(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00e66fd0 {
    int sub_00e66fd0(undefined4, undefined4);
    int sub_00e64ba0(int, int);
};

// @baa 0x00e66fd0
int C_00e66fd0::sub_00e66fd0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00e66fd0 *)(this))->sub_00e64ba0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00e66ff0 {
    int sub_00e66ff0();
};

int sub_00e5ee70(void);
// @baa 0x00e66ff0
int C_00e66ff0::sub_00e66ff0(void)
{
    int param_1 = (int)this;

  sub_00e5ee70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00e67030 {
    int sub_00e67030();
};

int sub_00e5eed0(void);
// @baa 0x00e67030
int C_00e67030::sub_00e67030(void)
{
    int param_1 = (int)this;

  sub_00e5eed0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00e66d00();
// @baa 0x00e67b70
void sub_00e67b70(void) { sub_00e66d00(); }

struct C_00e67b80 {
    void sub_00e67b80(undefined4, undefined4, undefined4, undefined4);
};

int sub_00e67050(...);
// @baa 0x00e67b80
void C_00e67b80::sub_00e67b80(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    int param_1 = (int)this;

  sub_00e67050(param_1,1,param_2,param_3,param_4,param_5,param_1 + 0x24);
  return;
}

struct C_00e67bb0 {
    void sub_00e67bb0(undefined4, undefined4, undefined4, undefined4);
};

int sub_00e67450(...);
// @baa 0x00e67bb0
void C_00e67bb0::sub_00e67bb0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    int param_1 = (int)this;

  sub_00e67450(param_1,2,param_2,param_3,param_4,param_5,param_1 + 0x28);
  return;
}

struct C_00e67c60 {
    int sub_00e67c60(undefined4, undefined4, undefined4);
    int sub_00e64ac0(int, int);
};

// @baa 0x00e67c60
int C_00e67c60::sub_00e67c60(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_00e67c60 *)(this))->sub_00e64ac0(param_2, param_4);
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
    void sub_0057f8b0(int, int);
};

struct C_00e67c90 {
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
    void sub_00e67c90(void);
};

// @baa 0x00e67c90
void C_00e67c90::sub_00e67c90(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_0057f8b0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_00e67cb0 {
    int sub_00e67cb0();
};

// @baa 0x00e67cb0
int C_00e67cb0::sub_00e67cb0(void)
{
    int param_1 = (int)this;

  sub_00e5ee70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00e67e70
IMPLEMENT_CLASS_AT(UGFxGameViewportClient, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIGameViewportClient.cpp", 14);

struct C_00e6a2b0 {
    int sub_00e6a2b0();
};

// @baa 0x00e6a2b0
int C_00e6a2b0::sub_00e6a2b0(void)
{
    int param_1 = (int)this;

  sub_00e5ee70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00e67cd0();
// @baa 0x00e6a2d0
void sub_00e6a2d0(void) { sub_00e67cd0(); }

struct C_00e6a310 {
    int sub_00e6a310();
};

// @baa 0x00e6a310
int C_00e6a310::sub_00e6a310(void)
{
    int param_1 = (int)this;

  sub_00e5eed0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00e66c90();
// @baa 0x00e6a600
void sub_00e6a600(void) { sub_00e66c90(); }

// @baa 0x00e6b540
void sub_00e6b540(void) { sub_00e66d00(); }

int sub_00e43e00(void);
int sub_00e6ac10(...);
extern undefined4 g_026caef0;
// @baa 0x00e6bc90
int sub_00e6bc90(void)
{
  if (g_026caef0 == 0) {
    g_026caef0 = sub_00e6ac10(L"GFxUI");
    sub_00e43e00();
  }
  return g_026caef0;
}

int sub_00e43f60(void);
int sub_00e6acd0(...);
extern undefined4 g_026caef4;
// @baa 0x00e6bcc0
int sub_00e6bcc0(void)
{
  if (g_026caef4 == 0) {
    g_026caef4 = sub_00e6acd0(L"GFxUI");
    sub_00e43f60();
  }
  return g_026caef4;
}

int sub_00e440c0(void);
int sub_00e6ad90(...);
extern undefined4 g_026caef8;
// @baa 0x00e6bcf0
int sub_00e6bcf0(void)
{
  if (g_026caef8 == 0) {
    g_026caef8 = sub_00e6ad90(L"GFxUI");
    sub_00e440c0();
  }
  return g_026caef8;
}

int sub_00e44220(void);
int sub_00e6ae50(...);
extern undefined4 g_026caefc;
// @baa 0x00e6bd20
int sub_00e6bd20(void)
{
  if (g_026caefc == 0) {
    g_026caefc = sub_00e6ae50(L"GFxUI");
    sub_00e44220();
  }
  return g_026caefc;
}

int sub_00e44380(void);
int sub_00e6af10(...);
extern undefined4 g_026caf00;
// @baa 0x00e6bd50
int sub_00e6bd50(void)
{
  if (g_026caf00 == 0) {
    g_026caf00 = sub_00e6af10(L"GFxUI");
    sub_00e44380();
  }
  return g_026caf00;
}

int sub_00e444e0(void);
int sub_00e6afd0(...);
extern undefined4 g_026caf04;
// @baa 0x00e6bd80
int sub_00e6bd80(void)
{
  if (g_026caf04 == 0) {
    g_026caf04 = sub_00e6afd0(L"GFxUI");
    sub_00e444e0();
  }
  return g_026caf04;
}

int sub_00e44640(void);
int sub_00e6b090(...);
extern undefined4 g_026caf08;
// @baa 0x00e6bdb0
int sub_00e6bdb0(void)
{
  if (g_026caf08 == 0) {
    g_026caf08 = sub_00e6b090(L"GFxUI");
    sub_00e44640();
  }
  return g_026caf08;
}

int sub_00e44910(void);
int sub_00e6b150(...);
extern undefined4 g_026caf14;
// @baa 0x00e6bde0
int sub_00e6bde0(void)
{
  if (g_026caf14 == 0) {
    g_026caf14 = sub_00e6b150(L"GFxUI");
    sub_00e44910();
  }
  return g_026caf14;
}

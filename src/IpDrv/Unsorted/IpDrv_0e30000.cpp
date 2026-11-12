// IpDrv_0e30000.cpp (part 1 of 2): 43 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct M_00e30930 { void sub_0040fcc0(); };

struct C { char pad[4]; M_00e30930 m; void sub_00e30930(); };

// @baa 0x00e30930
void C::sub_00e30930() { m.sub_0040fcc0(); }

void sub_00e32400();
// @baa 0x00e32580
void sub_00e32580(void) { sub_00e32400(); }

// @baa 0x00e32590
void sub_00e32590(void) { sub_00e32400(); }

struct A_00e34750 { virtual void sub_00e34760(); char pad[44]; };

struct B_00e34750 { virtual void sub_00e34760(); };

struct C_00e34750 : A_00e34750, B_00e34750 { virtual void sub_00e34760(); C_00e34750(); };

C_00e34750::C_00e34750() {}

// @baa 0x00e34750
void C_00e34750::sub_00e34760() {}

void sub_00e33450();
// @baa 0x00e34800
void sub_00e34800(void) { sub_00e33450(); }

struct A_00e348d0 { virtual void sub_00e348e0(); char pad[44]; };

struct B_00e348d0 { virtual void sub_00e348e0(); };

struct C_00e348d0 : A_00e348d0, B_00e348d0 { virtual void sub_00e348e0(); C_00e348d0(); };

C_00e348d0::C_00e348d0() {}

// @baa 0x00e348d0
void C_00e348d0::sub_00e348e0() {}

struct M_00e34ac0 { void sub_00e33450(); };

struct C_00e34ac0 { char pad[12]; M_00e34ac0 m; void sub_00e34ac0(); };

// @baa 0x00e34ac0
void C_00e34ac0::sub_00e34ac0() { m.sub_00e33450(); }

void sub_00e334b0();
// @baa 0x00e34ad0
void sub_00e34ad0(void) { sub_00e334b0(); }

void sub_00e33630();
// @baa 0x00e34ae0
void sub_00e34ae0(void) { sub_00e33630(); }

struct C_00e38130 { C_00e38130* sub_00e38130(void); };

// @baa 0x00e38130
C_00e38130* C_00e38130::sub_00e38130(void) { return this; }

// @baa 0x00e38170
int UPartyBeaconClient::vf_11c(int a0) { return 1; }

// @baa 0x00e38180
int UPartyBeaconClient::vf_120(int a0) { return 1; }

struct A_00e38190 { virtual void sub_00e38210(); char pad[44]; };

struct B_00e38190 { virtual void sub_00e38210(); };

struct C_00e38190 : A_00e38190, B_00e38190 { virtual void sub_00e38210(); C_00e38190(); };

C_00e38190::C_00e38190() {}

// @baa 0x00e38190
void C_00e38190::sub_00e38210() {}

// @baa 0x00e381a0
IMPLEMENT_CLASS_AT(UPartyBeaconClient, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\IpDrv\\Src\\UPartyBeacon.cpp", 9);

// @baa 0x00e38210
int sub_005c7a20(void);
extern undefined * g_020f4db8;
// @baa 0x00e38240
undefined4 * UObject::sub_00e38240(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020f4db8);
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

struct TConstSetBitIterator_00e39b00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e39b00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e39b00& operator++();
};

TConstSetBitIterator_00e39b00::TConstSetBitIterator_00e39b00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e39b00
TConstSetBitIterator_00e39b00& TConstSetBitIterator_00e39b00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e39b50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e39b50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e39b50& operator++();
};

TConstSetBitIterator_00e39b50::TConstSetBitIterator_00e39b50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e39b50
TConstSetBitIterator_00e39b50& TConstSetBitIterator_00e39b50::operator++()
{
    It.Advance();
    return *this;
}

int sub_00e2c830(void);
int sub_00e39110(...);
extern undefined4 g_026cad0c;
// @baa 0x00e39bd0
int sub_00e39bd0(void)
{
  if (g_026cad0c == 0) {
    g_026cad0c = sub_00e39110(L"IpDrv");
    sub_00e2c830();
  }
  return g_026cad0c;
}

int sub_00e2c9c0(void);
int sub_00e39270(...);
extern undefined4 g_026cad18;
// @baa 0x00e39c00
int sub_00e39c00(void)
{
  if (g_026cad18 == 0) {
    g_026cad18 = sub_00e39270(L"IpDrv");
    sub_00e2c9c0();
  }
  return g_026cad18;
}

void sub_00e39d80();
// @baa 0x00e3a530
void sub_00e3a530(void) { sub_00e39d80(); }

// @baa 0x00e3a650
bool UOnlineNewsInterfaceMcp::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e3a7a0
bool UOnlineTitleFileDownloadMcp::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e3a7e0
void sub_00e3a7e0(void) { sub_00e39d80(); }

struct TConstSetBitIterator_00e3b7f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e3b7f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e3b7f0& operator++();
};

TConstSetBitIterator_00e3b7f0::TConstSetBitIterator_00e3b7f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e3b7f0
TConstSetBitIterator_00e3b7f0& TConstSetBitIterator_00e3b7f0::operator++()
{
    It.Advance();
    return *this;
}

int sub_00e3a940(...);
int sub_00e3aa00(void);
extern undefined4 g_026cad20;
// @baa 0x00e3b840
int sub_00e3b840(void)
{
  if (g_026cad20 == 0) {
    g_026cad20 = sub_00e3a940(L"IpDrv");
    sub_00e3aa00();
  }
  return g_026cad20;
}

void sub_00e3ac60();
// @baa 0x00e3b870
void sub_00e3b870(void) { sub_00e3ac60(); }

void sub_00e3ae70();
// @baa 0x00e3b880
void sub_00e3b880(void) { sub_00e3ae70(); }

void sub_00e3af40();
// @baa 0x00e3b890
void sub_00e3b890(void) { sub_00e3af40(); }

void sub_00e3b010();
// @baa 0x00e3b8a0
void sub_00e3b8a0(void) { sub_00e3b010(); }

void sub_00e3e280();

struct C_00e3f4e0 {
    int sub_00e3f4e0(undefined4, undefined4, undefined4);
    int sub_00e3cc40(int, int);
};

// @baa 0x00e3f4e0
int C_00e3f4e0::sub_00e3f4e0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_00e3f4e0 *)(this))->sub_00e3cc40(param_2, param_4);
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
    void sub_00e3cb80(int, int);
};

struct C_00e3f510 {
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
    void sub_00e3f510(void);
};

// @baa 0x00e3f510
void C_00e3f510::sub_00e3f510(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00e3cb80(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_00e3f530 {
    int sub_00e3f530();
};

int sub_00e39aa0(void);
// @baa 0x00e3f530
int C_00e3f530::sub_00e3f530(void)
{
    int param_1 = (int)this;

  sub_00e39aa0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00e3e100();
// @baa 0x00e3f550
void sub_00e3f550(void) { sub_00e3e100(); }

int sub_00e3a7f0(void);
int sub_00e3f300(...);
extern undefined4 g_026cad1c;
// @baa 0x00e3f560
int sub_00e3f560(void)
{
  if (g_026cad1c == 0) {
    g_026cad1c = sub_00e3f300(L"IpDrv");
    sub_00e3a7f0();
  }
  return g_026cad1c;
}

int sub_00e3a3e0(void);
int sub_00e3e510(...);
extern undefined4 g_026cad08;
// @baa 0x00e3f590
int sub_00e3f590(void)
{
  if (g_026cad08 == 0) {
    g_026cad08 = sub_00e3e510(L"IpDrv");
    sub_00e3a3e0();
  }
  return g_026cad08;
}

int sub_00e3a540(void);
int sub_00e3ebc0(...);
extern undefined4 g_026cad10;
// @baa 0x00e3f5c0
int sub_00e3f5c0(void)
{
  if (g_026cad10 == 0) {
    g_026cad10 = sub_00e3ebc0(L"IpDrv");
    sub_00e3a540();
  }
  return g_026cad10;
}

int sub_00e3a690(void);
int sub_00e3eec0(...);
extern undefined4 g_026cad14;
// @baa 0x00e3f5f0
int sub_00e3f5f0(void)
{
  if (g_026cad14 == 0) {
    g_026cad14 = sub_00e3eec0(L"IpDrv");
    sub_00e3a690();
  }
  return g_026cad14;
}

int sub_00d88570(void);
extern undefined * g_020f5558;
extern undefined * g_020f5570;
// @baa 0x00e3f620
undefined4 * UOnlineSubsystem::sub_00e3f620(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00d88570();
  *param_1 = (undefined4)(&g_020f5570);
  param_1[0xc] = (undefined4)(&g_020f5558);
  return param_1;
}

struct A_00e3f640 { virtual void sub_00e3f6c0(); char pad[44]; };

struct B_00e3f640 { virtual void sub_00e3f6c0(); };

struct C_00e3f640 : A_00e3f640, B_00e3f640 { virtual void sub_00e3f6c0(); C_00e3f640(); };

C_00e3f640::C_00e3f640() {}

// @baa 0x00e3f640
void C_00e3f640::sub_00e3f6c0() {}

// @baa 0x00e3f650
IMPLEMENT_CLASS_AT(UOnlineSubsystemCommonImpl, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\IpDrv\\Src\\OnlineSubsystemCommonImpl.cpp", 9);

// @baa 0x00e3f6c0
struct Inner { void sub_00e3e280(int param_1); };

struct Outer {
    char _pad[4];
    Inner m;
    void sub_00e3f730();
};

// @baa 0x00e3f730
void Outer::sub_00e3f730() {
    m.sub_00e3e280(0);
}

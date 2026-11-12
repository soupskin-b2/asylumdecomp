// Engine_0bd0000.cpp (part 1 of 5): 122 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_006f7810(void);
extern undefined * g_0201b598;
// @baa 0x00bd0360
undefined4 * UPrimitiveComponent::sub_00bd0360(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_0201b598);
  return param_1;
}

// @baa 0x00bd0380
IMPLEMENT_CLASS_AT(UFoliageComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\FoliageComponent.cpp", 9);

// @baa 0x00bd0410
struct M_00bd0700 { void sub_00bcc6f0(); };

struct C { char pad[64]; M_00bd0700 m; void sub_00bd0700(); };

// @baa 0x00bd0700
void C::sub_00bd0700() { m.sub_00bcc6f0(); }

struct M_00bd1370 { void sub_00bcd450(); };

struct C_00bd1370 { char pad[64]; M_00bd1370 m; void sub_00bd1370(); };

// @baa 0x00bd1370
void C_00bd1370::sub_00bd1370() { m.sub_00bcd450(); }

struct C_00bd14b0 { C_00bd14b0* sub_00bd14b0(void); };

// @baa 0x00bd14b0
C_00bd14b0* C_00bd14b0::sub_00bd14b0(void) { return this; }

int sub_00baaa10(void);
int sub_00bcd950(...);
extern undefined4 g_026bf880;
// @baa 0x00bd14e0
int sub_00bd14e0(void)
{
  if (g_026bf880 == 0) {
    g_026bf880 = sub_00bcd950(L"Engine");
    sub_00baaa10();
  }
  return g_026bf880;
}

int sub_0053dfa0(...);
int sub_00bcfbc0(void);
// @baa 0x00bd1c50
undefined4 ULensFlare::sub_00bd1c50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00bcfbc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00bd0800();
// @baa 0x00bd1d50
void sub_00bd1d50(void) { sub_00bd0800(); }

struct M_00bd2180 { void sub_00bd0800(); };

struct C_00bd2180 { char pad[16]; M_00bd2180 m; void sub_00bd2180(); };

// @baa 0x00bd2180
void C_00bd2180::sub_00bd2180() { m.sub_00bd0800(); }

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

struct TConstSetBitIterator_00bd2d70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bd2d70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bd2d70& operator++();
};

TConstSetBitIterator_00bd2d70::TConstSetBitIterator_00bd2d70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bd2d70
TConstSetBitIterator_00bd2d70& TConstSetBitIterator_00bd2d70::operator++()
{
    It.Advance();
    return *this;
}

struct C_00bd2e30 {
    void sub_00bd2e30();
    int sub_00bccca0(int);
};

// @baa 0x00bd2e30
void C_00bd2e30::sub_00bd2e30(void)
{
    int param_1 = (int)this;
  ((C_00bd2e30 *)((*(char **)((char *)this + 0x1c))))->sub_00bccca0(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x24) = 1;
  return;
}

struct TConstSetBitIterator_00bd2e50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bd2e50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bd2e50& operator++();
};

TConstSetBitIterator_00bd2e50::TConstSetBitIterator_00bd2e50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bd2e50
TConstSetBitIterator_00bd2e50& TConstSetBitIterator_00bd2e50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00bd2e70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bd2e70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bd2e70& operator++();
};

TConstSetBitIterator_00bd2e70::TConstSetBitIterator_00bd2e70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bd2e70
TConstSetBitIterator_00bd2e70& TConstSetBitIterator_00bd2e70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00bd3120 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bd3120(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bd3120& operator++();
};

TConstSetBitIterator_00bd3120::TConstSetBitIterator_00bd3120(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bd3120
TConstSetBitIterator_00bd3120& TConstSetBitIterator_00bd3120::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00bd3290 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bd3290(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bd3290& operator++();
};

TConstSetBitIterator_00bd3290::TConstSetBitIterator_00bd3290(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bd3290
TConstSetBitIterator_00bd3290& TConstSetBitIterator_00bd3290::operator++()
{
    It.Advance();
    return *this;
}

struct C_00bd33e0 {
    int sub_00bd33e0();
};

int sub_00bccec0(void);
// @baa 0x00bd33e0
int C_00bd33e0::sub_00bd33e0(void)
{
    int param_1 = (int)this;

  sub_00bccec0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00bd3400 {
    int sub_00bd3400();
};

int sub_00bccf20(void);
// @baa 0x00bd3400
int C_00bd3400::sub_00bd3400(void)
{
    int param_1 = (int)this;

  sub_00bccf20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00bd3880
IMPLEMENT_CLASS_AT(ALensFlareSource, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\LensFlare.cpp", 12);

// @baa 0x00bd38e0
// @baa 0x00bd3940
IMPLEMENT_CLASS_AT(ASpeedTreeActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\SpeedTree.cpp", 39);

// @baa 0x00bd39a0
int sub_00bab9f0(void);
int sub_00bd1b90(...);
extern undefined4 g_026bf8a0;
// @baa 0x00bd39d0
int sub_00bd39d0(void)
{
  if (g_026bf8a0 == 0) {
    g_026bf8a0 = sub_00bd1b90(L"Engine");
    sub_00bab9f0();
  }
  return g_026bf8a0;
}

// @baa 0x00bd3a30
IMPLEMENT_CLASS_AT(AFoliageFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\FoliageFactory.cpp", 10);

// @baa 0x00bd3aa0
int sub_00bac160(void);
int sub_00bd1c90(...);
extern undefined4 g_026bf8a8;
// @baa 0x00bd3ad0
int sub_00bd3ad0(void)
{
  if (g_026bf8a8 == 0) {
    g_026bf8a8 = sub_00bd1c90(L"Engine");
    sub_00bac160();
  }
  return g_026bf8a8;
}

struct C_00bd3c90 {
    undefined4 sub_00bd3c90(byte);
};

int sub_00bd2d90(void);
// @baa 0x00bd3c90
undefined4 C_00bd3c90::sub_00bd3c90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00bd2d90();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00bd4290
int sub_00bd4290(void) { return 1; }

struct C_00bd42a0 {
    undefined4 sub_00bd42a0(byte);
};

int sub_00bd41e0(void);
// @baa 0x00bd42a0
undefined4 C_00bd42a0::sub_00bd42a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00bd41e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_00bd46a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bd46a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bd46a0& operator++();
};

TConstSetBitIterator_00bd46a0::TConstSetBitIterator_00bd46a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bd46a0
TConstSetBitIterator_00bd46a0& TConstSetBitIterator_00bd46a0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00bd4750 {
    void sub_00bd4750();
    int sub_00bd3170(int, int);
};

// @baa 0x00bd4750
void C_00bd4750::sub_00bd4750(void)
{
    int param_1 = (int)this;
  ((C_00bd4750 *)(this))->sub_00bd3170(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_00bd4820 {
    undefined4 sub_00bd4820(undefined4, undefined4);
    int sub_00bd3230(int, int);
};

// @baa 0x00bd4820
undefined4 C_00bd4820::sub_00bd4820(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00bd4820 *)(this))->sub_00bd3230(param_2, param_3);
  return param_1;
}

struct TConstSetBitIterator_00bd4840 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bd4840(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bd4840& operator++();
};

TConstSetBitIterator_00bd4840::TConstSetBitIterator_00bd4840(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bd4840
TConstSetBitIterator_00bd4840& TConstSetBitIterator_00bd4840::operator++()
{
    It.Advance();
    return *this;
}

struct C_00bd4890 {
    int sub_00bd4890(undefined4, undefined4);
    int sub_00bd32e0(int, int);
};

// @baa 0x00bd4890
int C_00bd4890::sub_00bd4890(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00bd4890 *)(this))->sub_00bd32e0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00bd48b0 {
    int sub_00bd48b0(undefined4, undefined4);
    int sub_00bd3360(int, int);
};

// @baa 0x00bd48b0
int C_00bd48b0::sub_00bd48b0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00bd48b0 *)(this))->sub_00bd3360(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00bd48d0 {
    int sub_00bd48d0();
};

// @baa 0x00bd48d0
int C_00bd48d0::sub_00bd48d0(void)
{
    int param_1 = (int)this;

  sub_00bccec0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00bd48f0 {
    int sub_00bd48f0();
};

// @baa 0x00bd48f0
int C_00bd48f0::sub_00bd48f0(void)
{
    int param_1 = (int)this;

  sub_00bccf20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00bd42c0();
// @baa 0x00bd4c70
void sub_00bd4c70(void) { sub_00bd42c0(); }

void sub_00bd44b0();
// @baa 0x00bd51b0
void sub_00bd51b0(void) { sub_00bd44b0(); }

void sub_00bd4390();
// @baa 0x00bd7140
void sub_00bd7140(void) { sub_00bd4390(); }

struct C_00bd7150 { C_00bd7150* sub_00bd7150(void); };

// @baa 0x00bd7150
C_00bd7150* C_00bd7150::sub_00bd7150(void) { return this; }

struct TConstSetBitIterator_00bd71a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bd71a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bd71a0& operator++();
};

TConstSetBitIterator_00bd71a0::TConstSetBitIterator_00bd71a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bd71a0
TConstSetBitIterator_00bd71a0& TConstSetBitIterator_00bd71a0::operator++()
{
    It.Advance();
    return *this;
}

void sub_00bd46f0();
// @baa 0x00bd71f0
void sub_00bd71f0(void) { sub_00bd46f0(); }

struct C_00bd7360 {
    int sub_00bd7360();
};

// @baa 0x00bd7360
int C_00bd7360::sub_00bd7360(void)
{
    int param_1 = (int)this;

  sub_00bccec0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00bd7380 {
    int sub_00bd7380();
};

// @baa 0x00bd7380
int C_00bd7380::sub_00bd7380(void)
{
    int param_1 = (int)this;

  sub_00bccf20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00bacb90(void);
int sub_00bd6df0(...);
extern undefined4 g_026bf8b8;
// @baa 0x00bd73a0
int sub_00bd73a0(void)
{
  if (g_026bf8b8 == 0) {
    g_026bf8b8 = sub_00bd6df0(L"Engine");
    sub_00bacb90();
  }
  return g_026bf8b8;
}

// @baa 0x00bd74e0
void sub_00bd74e0(void) { sub_00bd44b0(); }

// @baa 0x00bd82d0
void sub_00bd82d0(void) { sub_00bd4390(); }

struct C_00bd82e0 {
    int sub_00bd82e0();
};

// @baa 0x00bd82e0
int C_00bd82e0::sub_00bd82e0(void)
{
    int param_1 = (int)this;

  sub_00bccec0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00bd8300 {
    int sub_00bd8300();
};

// @baa 0x00bd8300
int C_00bd8300::sub_00bd8300(void)
{
    int param_1 = (int)this;

  sub_00bccf20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00bd8550
void sub_00bd8550(void) { sub_00bd44b0(); }

// @baa 0x00bd8f10
void sub_00bd8f10(void) { sub_00bd4390(); }

int sub_00bd9e00(void);
// @baa 0x00bd9f10
undefined4 ULensFlare::sub_00bd9f10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00bd9e00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00bdab70(void);
// @baa 0x00bdb250
undefined4 ULensFlare::sub_00bdb250(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00bdab70();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00bdb440 {
    int sub_00bdb440();
};

// @baa 0x00bdb440
int C_00bdb440::sub_00bdb440(void)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4);
}

struct C_00bdb7d0 { int sub_00bdb7d0(void); };

// @baa 0x00bdb7d0
int C_00bdb7d0::sub_00bdb7d0(void) { return *(int*)((char*)this + 24); }

// @baa 0x00bdb7e0
void sub_00bdb7e0(void) {  }

// @baa 0x00bdb820
int sub_00bdb820(int a0, int a1) { return a1; }

// @baa 0x00bdb830
int sub_00bdb830(int a0, int a1) { return a1; }

// @baa 0x00bdb840
int sub_00bdb840(int a0, int a1) { return a1; }

struct C_00bdb8b0 {
    int sub_00bdb8b0();
};

// @baa 0x00bdb8b0
int C_00bdb8b0::sub_00bdb8b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) + 2) % 3;
}

struct C_00bdb8d0 {
    int sub_00bdb8d0();
};

// @baa 0x00bdb8d0
int C_00bdb8d0::sub_00bdb8d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) + 1) % 3;
}

struct C_00bdb8f0 { float sub_00bdb8f0(void); };

// @baa 0x00bdb8f0
float C_00bdb8f0::sub_00bdb8f0(void) { return *(float*)((char*)this + 232); }

struct C_00bdb900 { float sub_00bdb900(void); };

// @baa 0x00bdb900
float C_00bdb900::sub_00bdb900(void) { return *(float*)((char*)this + 236); }

struct C_00bdb910 { int sub_00bdb910(void); };

// @baa 0x00bdb910
int C_00bdb910::sub_00bdb910(void) { return *(int*)((char*)this + 208); }

struct C_00bdb920 { int sub_00bdb920(void); };

// @baa 0x00bdb920
int C_00bdb920::sub_00bdb920(void) { return *(int*)((char*)this + 212); }

struct C_00bdb930 { char* sub_00bdb930(void); };

// @baa 0x00bdb930
char* C_00bdb930::sub_00bdb930(void) { return (char*)this + 316; }

struct C_00bdb940 {
    int sub_00bdb940();
};

// @baa 0x00bdb940
int C_00bdb940::sub_00bdb940(void)
{
    int param_1 = (int)this;

  return param_1 + 300 + *(int *)(param_1 + 0xd68) * 8;
}

struct C_00bdb950 { char* sub_00bdb950(void); };

// @baa 0x00bdb950
char* C_00bdb950::sub_00bdb950(void) { return (char*)this + 48; }

struct C_00bdb960 { char* sub_00bdb960(void); };

// @baa 0x00bdb960
char* C_00bdb960::sub_00bdb960(void) { return (char*)this + 336; }

// @baa 0x00bdb970
void sub_00bdb970(void) {  }

struct C_00bdba30 { C_00bdba30* sub_00bdba30(void); };

// @baa 0x00bdba30
C_00bdba30* C_00bdba30::sub_00bdba30(void) { return this; }

extern char g_0201c93c[];
// @baa 0x00bdba60
int sub_00bdba60(void) { return (int)g_0201c93c; }

extern char g_01ebb554[];
struct C_00bdba70 { void sub_00bdba70(void); };

// @baa 0x00bdba70
void C_00bdba70::sub_00bdba70(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00bdba80 {
    undefined4 * sub_00bdba80(byte);
};

// @baa 0x00bdba80
undefined4 * C_00bdba80::sub_00bdba80(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00bdbc20
int sub_00bdbc20(void) { return 0; }

extern char g_0201cfbc[];
// @baa 0x00bdbc60
int sub_00bdbc60(void) { return (int)g_0201cfbc; }

extern int g_0201ff18;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue
{
    FDecalValue* sub_00bdbc70(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00bdbc70
FDecalValue* FDecalValue::sub_00bdbc70(int* Src)
{
    Value = (int)&g_0201ff18;
    Unk04 = *Src;
    return this;
}

extern char g_0201cfec[];
// @baa 0x00bdbcb0
int sub_00bdbcb0(void) { return (int)g_0201cfec; }

extern int g_0201ff24;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_00bdbcc0
{
    FDecalValue_00bdbcc0* sub_00bdbcc0(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00bdbcc0
FDecalValue_00bdbcc0* FDecalValue_00bdbcc0::sub_00bdbcc0(int* Src)
{
    Value = (int)&g_0201ff24;
    Unk04 = *Src;
    return this;
}

extern char g_0201d018[];
// @baa 0x00bdbce0
int sub_00bdbce0(void) { return (int)g_0201d018; }

struct C_00bdbcf0 { void sub_00bdbcf0(void); };

// @baa 0x00bdbcf0
void C_00bdbcf0::sub_00bdbcf0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00bdbd00 { void sub_00bdbd00(void); };

// @baa 0x00bdbd00
void C_00bdbd00::sub_00bdbd00(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00bdbd10 { void sub_00bdbd10(void); };

// @baa 0x00bdbd10
void C_00bdbd10::sub_00bdbd10(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00bdbd20 {
    undefined4 * sub_00bdbd20(byte);
};

// @baa 0x00bdbd20
undefined4 * C_00bdbd20::sub_00bdbd20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00bdbd40 {
    undefined4 * sub_00bdbd40(byte);
};

// @baa 0x00bdbd40
undefined4 * C_00bdbd40::sub_00bdbd40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00bdbd60 {
    undefined4 * sub_00bdbd60(byte);
};

// @baa 0x00bdbd60
undefined4 * C_00bdbd60::sub_00bdbd60(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_0201ff30;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_00bdbd80
{
    FDecalValue_00bdbd80* sub_00bdbd80(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00bdbd80
FDecalValue_00bdbd80* FDecalValue_00bdbd80::sub_00bdbd80(int* Src)
{
    Value = (int)&g_0201ff30;
    Unk04 = *Src;
    return this;
}

extern char g_0201d274[];
// @baa 0x00bdbda0
int sub_00bdbda0(void) { return (int)g_0201d274; }

struct C_00bdbdb0 { void sub_00bdbdb0(void); };

// @baa 0x00bdbdb0
void C_00bdbdb0::sub_00bdbdb0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00bdbdc0 {
    undefined4 * sub_00bdbdc0(byte);
};

// @baa 0x00bdbdc0
undefined4 * C_00bdbdc0::sub_00bdbdc0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00bdddd0
int sub_00bdddd0(void) { return 1; }

struct C_00bddde0 {
    undefined4 * sub_00bddde0(undefined4);
    int sub_00739650(int);
};

extern undefined4 g_0201ff64;
extern undefined * g_0201ff6c;
// @baa 0x00bddde0
undefined4 * C_00bddde0::sub_00bddde0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00bddde0 *)(this))->sub_00739650(param_2);
  *param_1 = (undefined4)(&g_0201ff6c);
  param_1[5] = (undefined4)(&g_0201ff64);
  *(undefined2 *)(param_1 + 0x14) = 0;
  return param_1;
}

void sub_007249d0();
// @baa 0x00bdde20
void sub_00bdde20(void) { sub_007249d0(); }

// @baa 0x00bdde30
int sub_00bdde30(void) { return 1; }

struct C_00bddf00 {
    undefined4 sub_00bddf00(undefined4);
    int sub_0073f030(int);
};

int sub_00716170(...);
int sub_007161b0(...);
// @baa 0x00bddf00
undefined4 C_00bddf00::sub_00bddf00(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00bddf00 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x52);
  sub_00716170(param_2,param_1 + 0x58);
  sub_007161b0(param_2,param_1 + 0x5e);
  return uVar1;
}

// @baa 0x00bddf50
void sub_00bddf50(void) { sub_007249d0(); }

// @baa 0x00bddf60
int sub_00bddf60(void) { return 1; }

struct C_00bde070 {
    undefined4 sub_00bde070(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00bde070
undefined4 C_00bde070::sub_00bde070(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00bde070 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x52);
  sub_00716170(param_2,param_1 + 0x58);
  sub_00716170(param_2,param_1 + 0x5e);
  sub_00716170(param_2,param_1 + 100);
  sub_007161b0(param_2,param_1 + 0x6a);
  sub_007161b0(param_2,param_1 + 0x70);
  return uVar1;
}

// @baa 0x00bde0e0
void sub_00bde0e0(void) { sub_007249d0(); }

// @baa 0x00bde0f0
int sub_00bde0f0(void) { return 1; }

struct C_00bde1c0 {
    undefined4 sub_00bde1c0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00bde1c0
undefined4 C_00bde1c0::sub_00bde1c0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00bde1c0 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x52);
  sub_007161b0(param_2,param_1 + 0x5e);
  sub_00716170(param_2,param_1 + 0x58);
  return uVar1;
}

// @baa 0x00bde210
void sub_00bde210(void) { sub_007249d0(); }

// @baa 0x00bde220
int sub_00bde220(void) { return 1; }

struct C_00bde2c0 {
    undefined4 sub_00bde2c0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00bde2c0
undefined4 C_00bde2c0::sub_00bde2c0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00bde2c0 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x4c);
  sub_007161b0(param_2,param_1 + 0x52);
  return uVar1;
}

struct C_00bde300 {
    int sub_00bde300();
};

extern undefined4 g_025da968;
extern undefined4 g_025da9d4;
// @baa 0x00bde300
int C_00bde300::sub_00bde300(void)
{
    int param_1 = (int)this;

  return (g_025da9d4 + g_025da968 * 3) * *(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x18);
}

struct C_00bde4d0 {
    void sub_00bde4d0();
};

extern undefined4 g_01f3de50;
extern undefined4 g_01f3de54;
// @baa 0x00bde4d0
void C_00bde4d0::sub_00bde4d0(void)
{
    int param_1 = (int)this;

  *(undefined ***)(param_1 + -0x28) = (undefined **)(&g_01f3de54);
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x24) + 4) + -0x24 + param_1) = (undefined **)(&g_01f3de50);
  return;
}

struct C_00bdea00 {
    void sub_00bdea00(int, undefined4 *, undefined4 *, undefined4 *);
};

// @baa 0x00bdea00
void C_00bdea00::sub_00bdea00(int param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5)
{
    int param_1 = (int)this;

  *param_3 = *(undefined4 *)(param_1 + 0xd0 + param_2 * 0xc);
  *param_4 = *(undefined4 *)(param_1 + param_2 * 0xc + 0xd4);
  *param_5 = *(undefined4 *)(param_1 + (param_2 * 3 + 0x36) * 4);
  return;
}

// @baa 0x00bdea70
void sub_00bdea70(void) {  }

struct C_00bdeb10 {
    void sub_00bdeb10(undefined4);
    int sub_006adbc0(int);
};

// @baa 0x00bdeb10
void C_00bdeb10::sub_00bdeb10(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_00bdeb10 *)(this))->sub_006adbc0(param_2);
  sub_00716170(param_2,param_1 + 0x10);
  sub_00716170(param_2,param_1 + 0x16);
  sub_007161b0(param_2,param_1 + 0x34);
  sub_00716170(param_2,param_1 + 0x1c);
  sub_00716170(param_2,param_1 + 0x22);
  sub_00716170(param_2,param_1 + 0x28);
  sub_00716170(param_2,param_1 + 0x2e);
  return;
}

struct C_00bdeb90 {
    void sub_00bdeb90(undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00bdeb90
void C_00bdeb90::sub_00bdeb90(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  *(undefined4 *)(param_1 + 0x2c) = param_5;
  *(undefined4 *)(param_1 + 0x30) = param_6;
  return;
}

struct C_00bdebc0 { int sub_00bdebc0(void); };

// @baa 0x00bdebc0
int C_00bdebc0::sub_00bdebc0(void) { return *(int*)((char*)this + 32); }

struct C_00bdebd0 { int sub_00bdebd0(void); };

// @baa 0x00bdebd0
int C_00bdebd0::sub_00bdebd0(void) { return *(int*)((char*)this + 28); }

struct C_00bdebe0 { int sub_00bdebe0(void); };

// @baa 0x00bdebe0
int C_00bdebe0::sub_00bdebe0(void) { return *(int*)((char*)this + 44); }

struct C_00bdebf0 { int sub_00bdebf0(void); };

// @baa 0x00bdebf0
int C_00bdebf0::sub_00bdebf0(void) { return *(int*)((char*)this + 48); }

struct C_00bdec00 { int sub_00bdec00(void); };

// @baa 0x00bdec00
int C_00bdec00::sub_00bdec00(void) { return *(int*)((char*)this + 488); }

// @baa 0x00bded00
int ULensFlare::sub_00bded00(void) { return *(int*)((char*)this + 448); }

extern undefined4 g_026c0578;
// @baa 0x00bded10
void sub_00bded10(void)
{
  g_026c0578 = (uint)(g_026c0578 == 0);
  return;
}

extern undefined4 g_026c057c;
// @baa 0x00bded30
void sub_00bded30(void)
{
  g_026c057c = (uint)(g_026c057c == 0);
  return;
}

struct C_00bded60 { int a, b; C_00bded60(int, int); };

// @baa 0x00bded60
C_00bded60::C_00bded60(int x, int y) : a(x), b(y) {}

struct C_00bdef90 {
    C_00bdef90 *sub_00bdef90();
};

// @baa 0x00bdef90
C_00bdef90 *C_00bdef90::sub_00bdef90(void)
{
    *reinterpret_cast<DWORD *>(this) &= 0xfffffffe;
    return this;
}

// @baa 0x00bdf160
undefined4 ULensFlare::sub_00bdf160(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

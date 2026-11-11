// Engine_0c10000.cpp (part 1 of 5): 202 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0053dfa0(...);
int sub_006837e0(void);
// @baa 0x00c13720
undefined4 ULensFlare::sub_00c13720(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006837e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C { void sub_00672a40(int); C *sub_00c13740(int); };

// @baa 0x00c13740
C *C::sub_00c13740(int a) { sub_00672a40(a); return this; }

struct C_00c13760 { void sub_00c009d0(int); C_00c13760 *sub_00c13760(int); };

// @baa 0x00c13760
C_00c13760 *C_00c13760::sub_00c13760(int a) { sub_00c009d0(a); return this; }

struct C_00c13a50 {
    int sub_00c13a50();
};

// @baa 0x00c13a50
int C_00c13a50::sub_00c13a50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00c13a70 {
    int sub_00c13a70();
};

// @baa 0x00c13a70
int C_00c13a70::sub_00c13a70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00c13b90 {
    undefined4 sub_00c13b90(byte);
};

int sub_00c068c0(void);
// @baa 0x00c13b90
undefined4 C_00c13b90::sub_00c13b90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c068c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00c06920(void);
// @baa 0x00c13bb0
undefined4 UPrimitiveComponent::sub_00c13bb0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c06920();
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

struct TConstSetBitIterator_00c13c20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c13c20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c13c20& operator++();
};

TConstSetBitIterator_00c13c20::TConstSetBitIterator_00c13c20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c13c20
TConstSetBitIterator_00c13c20& TConstSetBitIterator_00c13c20::operator++()
{
    It.Advance();
    return *this;
}

int sub_005c7a20(void);
extern undefined * g_020312b8;
// @baa 0x00c13d10
undefined4 * UObject::sub_00c13d10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020312b8);
  return param_1;
}

int sub_00c13de0(...);
int sub_00c14150(...);
// @baa 0x00c144b0
void sub_00c144b0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  sub_00c13de0(param_1,param_3,param_4);
  sub_00c14150(param_2,param_3,param_4);
  return;
}

int sub_006f7810(void);
extern undefined * g_020313c8;
// @baa 0x00c147a0
undefined4 * UPrimitiveComponent::sub_00c147a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_020313c8);
  return param_1;
}

// @baa 0x00c147c0
IMPLEMENT_CLASS_AT(UCoverGroupRenderingComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\CoverGroupRenderingComponent.cpp", 12);

// @baa 0x00c14820
// @baa 0x00c14850
UPendingLevel::UPendingLevel()
{
    *(DWORD*)((BYTE*)this + 0x88) = 0;
    *(DWORD*)((BYTE*)this + 0x8c) = 0;
    *(DWORD*)((BYTE*)this + 0x90) = 0;
    *(DWORD*)((BYTE*)this + 0x94) = 0;
    *(DWORD*)((BYTE*)this + 0x98) = 0;
    *(DWORD*)((BYTE*)this + 0x9c) = 0;
    *(DWORD*)((BYTE*)this + 0xa0) = 0;
    *(DWORD*)((BYTE*)this + 0xa4) = 0;
    *(DWORD*)((BYTE*)this + 0xa8) = 0;
    *(DWORD*)((BYTE*)this + 0xac) = 0;
    *(DWORD*)((BYTE*)this + 0xb0) = 0;
}

int sub_005db340(void);
// @baa 0x00c148e0
void UPendingLevel::vf_02c(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  sub_005db340();
  return;
}

// @baa 0x00c14900
void __stdcall sub_00c14900(int a0, int a1, int a2) {  }

// @baa 0x00c14a50
int sub_00c14a50(void) { return 0; }

// @baa 0x00c14a60
void __stdcall sub_00c14a60(int a0) {  }

// @baa 0x00c14a70
int __stdcall sub_00c14a70(int a0) { return 1; }

// @baa 0x00c14a80
int sub_00c14a80(void) { return 0; }

// @baa 0x00c14a90
int __stdcall sub_00c14a90(int a0, int a1) { return 0; }

// @baa 0x00c14aa0
void __stdcall sub_00c14aa0(int a0, int a1, int a2, int a3) {  }

struct TConstSetBitIterator_00c14f00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c14f00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c14f00& operator++();
};

TConstSetBitIterator_00c14f00::TConstSetBitIterator_00c14f00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c14f00
TConstSetBitIterator_00c14f00& TConstSetBitIterator_00c14f00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c14f80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c14f80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c14f80& operator++();
};

TConstSetBitIterator_00c14f80::TConstSetBitIterator_00c14f80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c14f80
TConstSetBitIterator_00c14f80& TConstSetBitIterator_00c14f80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c15af0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c15af0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c15af0& operator++();
};

TConstSetBitIterator_00c15af0::TConstSetBitIterator_00c15af0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c15af0
TConstSetBitIterator_00c15af0& TConstSetBitIterator_00c15af0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view {
    int sub_0055a5d0(int, int);
};

// @baa 0x00c171a0
void UPackageMap::sub_00c171a0(void)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_0055a5d0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_00c171b0 {
    undefined4 sub_00c171b0(undefined4, undefined4);
    int sub_00c15bc0(int, int);
};

// @baa 0x00c171b0
undefined4 C_00c171b0::sub_00c171b0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00c171b0 *)(this))->sub_00c15bc0(param_2, param_3);
  return param_1;
}

void sub_00c17130();
// @baa 0x00c17a90
void sub_00c17a90(void) { sub_00c17130(); }

struct C_00c17aa0 {
    int sub_00c17aa0(undefined4, undefined4, undefined4);
    int sub_00c15bc0(int, int);
};

// @baa 0x00c17aa0
int C_00c17aa0::sub_00c17aa0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_00c17aa0 *)(this))->sub_00c15bc0(param_2, param_4);
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
    void sub_0055a5d0(int, int);
};

struct C_00c17ad0 {
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
    void sub_00c17ad0(void);
};

// @baa 0x00c17ad0
void C_00c17ad0::sub_00c17ad0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_0055a5d0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

int sub_00c17b80(void);
// @baa 0x00c19e50
undefined4 UTexture2D::sub_00c19e50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c17b80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00c19120(void);
// @baa 0x00c19e70
undefined4 UTexture2D::sub_00c19e70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c19120();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct S {
    void sub_00c19590();
    void sub_00c19fe0();
};

// @baa 0x00c19fe0
void S::sub_00c19fe0() {
    sub_00c19590();
}

struct A_00c1a2e0 { virtual void sub_00c1a360(); char pad[80]; };

struct B_00c1a2e0 { virtual void sub_00c1a360(); };

struct C_00c1a2e0 : A_00c1a2e0, B_00c1a2e0 { virtual void sub_00c1a360(); C_00c1a2e0(); };

C_00c1a2e0::C_00c1a2e0() {}

// @baa 0x00c1a2e0
void C_00c1a2e0::sub_00c1a360() {}

int sub_00bf9470(void);
int sub_00c1a3e0(...);
extern undefined4 g_026c0874;
// @baa 0x00c1a600
int sub_00c1a600(void)
{
  if (g_026c0874 == 0) {
    g_026c0874 = sub_00c1a3e0(L"Engine");
    sub_00bf9470();
  }
  return g_026c0874;
}

// @baa 0x00c1a6d0
int UDemoRecDriver::vf_144(void) { return 1; }

struct A_00c1a6e0 { virtual void sub_00c1a7a0(); char pad[48]; };

struct B_00c1a6e0 { virtual void sub_00c1a7a0(); };

struct C_00c1a6e0 : A_00c1a6e0, B_00c1a6e0 { virtual void sub_00c1a7a0(); C_00c1a6e0(); };

C_00c1a6e0::C_00c1a6e0() {}

// @baa 0x00c1a6e0
void C_00c1a6e0::sub_00c1a7a0() {}

int sub_005c7a70(...);
int sub_00c1a6f0(void);
// @baa 0x00c1a7a0
undefined4 UDemoRecDriver::sub_00c1a7a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c1a6f0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x214);
  }
  return param_1;
}

// @baa 0x00c1b0c0
void sub_00c1b0c0(void) {  }

// @baa 0x00c1b0d0
void sub_00c1b0d0(void) {  }

// @baa 0x00c1b0e0
float10 sub_00c1b0e0(double param_1)
{
  return (float10)param_1;
}

extern "C" int (__stdcall *InterlockedExchange)(int*, int);
struct C_00c1b0f0 {
    int sub_00c1b0f0();
};

// @baa 0x00c1b0f0
int C_00c1b0f0::sub_00c1b0f0()
{
    return InterlockedExchange((int*)this, 0);
}

struct C_00c1b100 { int sub_00c1b100(void); };

// @baa 0x00c1b100
int C_00c1b100::sub_00c1b100(void) { return *(int*)((char*)this + 0); }

struct C_00c1b110 { int a; C_00c1b110(int); };

// @baa 0x00c1b110
C_00c1b110::C_00c1b110(int x) : a(x) {}

extern char g_02044338[];
struct C_00c1b120 { void sub_00c1b120(void); };

// @baa 0x00c1b120
void C_00c1b120::sub_00c1b120(void) { *(int*)((char*)this + 0) = (int)g_02044338; }

struct C_00c1b130 {
    undefined4 * sub_00c1b130(byte);
};

// @baa 0x00c1b130
undefined4 * C_00c1b130::sub_00c1b130(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02044338);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0053de70(...);
// @baa 0x00c1b1e0
bool sub_00c1b1e0(undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  
  iVar1 = sub_0053de70(param_1,param_2,0x6c);
  return iVar1 == 0;
}

// @baa 0x00c1b200
bool sub_00c1b200(undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  
  iVar1 = sub_0053de70(param_1,param_2,0x6c);
  return iVar1 != 0;
}

// @baa 0x00c1b220
bool sub_00c1b220(undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  
  iVar1 = sub_0053de70(param_1,param_2,0x48);
  return iVar1 == 0;
}

// @baa 0x00c1b240
bool sub_00c1b240(undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  
  iVar1 = sub_0053de70(param_1,param_2,0x48);
  return iVar1 != 0;
}

// @baa 0x00c1b260
bool sub_00c1b260(undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  
  iVar1 = sub_0053de70(param_1,param_2,0x1b0);
  return iVar1 == 0;
}

// @baa 0x00c1b280
bool sub_00c1b280(undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  
  iVar1 = sub_0053de70(param_1,param_2,0x1b0);
  return iVar1 != 0;
}

// @baa 0x00c1b2a0
bool sub_00c1b2a0(int * param_1, int * param_2)
{
  return *param_1 == *param_2;
}

// @baa 0x00c1b2c0
bool sub_00c1b2c0(int * param_1, int * param_2)
{
  return *param_1 != *param_2;
}

// @baa 0x00c1b2e0
undefined4 sub_00c1b2e0(float * param_1, float * param_2)
{
  if (*param_1 == *param_2) {
    return 1;
  }
  return 0;
}

// @baa 0x00c1b330
undefined4 sub_00c1b330(int * param_1, int * param_2)
{
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 1;
  }
  return 0;
}

// @baa 0x00c1b3a0
bool sub_00c1b3a0(int * param_1, int * param_2)
{
  return *param_1 == *param_2;
}

// @baa 0x00c1b3c0
bool sub_00c1b3c0(int * param_1, int * param_2)
{
  return *param_1 != *param_2;
}

struct S_00c1b3e0 {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x00c1b3e0
void sub_00c1b3e0(S_00c1b3e0* p, INT Value)
{
    p->vf_18(Value);
}

struct S_00c1b400 {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x00c1b400
void sub_00c1b400(S_00c1b400* p, INT Value)
{
    p->vf_18(Value);
}

struct S_00c1b420 {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x00c1b420
void sub_00c1b420(S_00c1b420* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x00c1b440
int sub_00c1b440(int a0, int a1) { return a1; }

struct C_00c1b450 { int sub_00c1b450(void); };

// @baa 0x00c1b450
int C_00c1b450::sub_00c1b450(void) { return *(int*)((char*)this + 28); }

// @baa 0x00c1b470
int sub_00c1b470(int a0, int a1) { return a1; }

int sub_007684d0(...);
int sub_0076c7c0(void);
extern undefined4 g_026b3b4c;
// @baa 0x00c1b480
int sub_00c1b480(void)
{
  if (g_026b3b4c == 0) {
    g_026b3b4c = sub_007684d0(L"Engine");
    sub_0076c7c0();
  }
  return g_026b3b4c;
}

struct C_00c1b4b0 { int sub_00c1b4b0(void); };

// @baa 0x00c1b4b0
int C_00c1b4b0::sub_00c1b4b0(void) { return *(int*)((char*)this + 24); }

struct C_00c1b4c0 { int sub_00c1b4c0(void); };

// @baa 0x00c1b4c0
int C_00c1b4c0::sub_00c1b4c0(void) { return *(int*)((char*)this + 32); }

struct C_00c1b4d0 { C_00c1b4d0* sub_00c1b4d0(void); };

// @baa 0x00c1b4d0
C_00c1b4d0* C_00c1b4d0::sub_00c1b4d0(void) { *(int*)((char*)this + 8) = 0; return this; }

// @baa 0x00c1b4e0
void __stdcall sub_00c1b4e0(int a0) {  }

// @baa 0x00c1b4f0
void __stdcall sub_00c1b4f0(int a0, int a1) {  }

// @baa 0x00c1b500
void __stdcall sub_00c1b500(int a0, int a1) {  }

// @baa 0x00c1b510
int __stdcall sub_00c1b510(int a0) { return 1; }

// @baa 0x00c1b520
int __stdcall sub_00c1b520(int a0) { return 1; }

// @baa 0x00c1b530
int sub_00c1b530(void) { return 1; }

// @baa 0x00c1b540
void USpeechRecognition::vf_04c(UINT a0) {  }

// @baa 0x00c1b550
void sub_00c1b550(void) {  }

// @baa 0x00c1b560
int __stdcall sub_00c1b560(int a0) { return 1; }

// @baa 0x00c1b570
int __stdcall sub_00c1b570(int a0, int a1) { return 1; }

// @baa 0x00c1b580
int __stdcall sub_00c1b580(int a0, int a1, int a2) { return 0; }

// @baa 0x00c1b590
int __stdcall sub_00c1b590(int a0, int a1) { return 0; }

// @baa 0x00c1b5a0
IMPLEMENT_CLASS_AT(USpeechRecognition, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\Fonix.cpp", 800);

// @baa 0x00c1b6b0
int USpeechRecognition::vf_000(void) { return 1; }

// @baa 0x00c1b6c0
bool USpeechRecognition::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00c1b7a0 { int a, b; C_00c1b7a0(int, int); };

// @baa 0x00c1b7a0
C_00c1b7a0::C_00c1b7a0(int x, int y) : a(x), b(y) {}

struct C_00c1b7c0 {
    void sub_00c1b7c0(undefined4, undefined4, int, int);
};

// @baa 0x00c1b7c0
void C_00c1b7c0::sub_00c1b7c0(undefined4 param_2, undefined4 param_3, int param_4, int param_5)
{
    undefined4 * param_1 = (undefined4 *)this;
  if (param_5 == 0) {
    if (*(float *)(param_4 + 8) < *(float *)(param_1[1] + 4)) {
      *(float *)(param_1[1] + 4) = *(float *)(param_4 + 8);
      *(undefined4 *)param_1[1] = *param_1;
      *(undefined4 *)(param_1[1] + 8) = 1;
    }
  }
  return;
}

struct C_00c1b800 {
    undefined4 sub_00c1b800();
};

// @baa 0x00c1b800
undefined4 C_00c1b800::sub_00c1b800(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 4) + 0xc);
}

struct C_00c1b810 {
    undefined4 sub_00c1b810();
};

// @baa 0x00c1b810
undefined4 C_00c1b810::sub_00c1b810(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 4) + 0xc);
}

struct C_00c1b820 {
    undefined4 sub_00c1b820();
};

// @baa 0x00c1b820
undefined4 C_00c1b820::sub_00c1b820(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
}

struct C_00c1b830 {
    undefined4 sub_00c1b830();
};

// @baa 0x00c1b830
undefined4 C_00c1b830::sub_00c1b830(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
}

struct C_00c1b860 {
    undefined4 sub_00c1b860();
};

// @baa 0x00c1b860
undefined4 C_00c1b860::sub_00c1b860(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(*(int *)(param_1 + 8) + 0x20) = *(undefined4 *)(param_1 + 4);
  return 0xc;
}

extern char g_02032eec[];
// @baa 0x00c1b870
int sub_00c1b870(void) { return (int)g_02032eec; }

extern char g_01ebb554[];
struct C_00c1b880 { void sub_00c1b880(void); };

// @baa 0x00c1b880
void C_00c1b880::sub_00c1b880(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00c1b890 {
    undefined4 * sub_00c1b890(byte);
};

// @baa 0x00c1b890
undefined4 * C_00c1b890::sub_00c1b890(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c1b8e0 {
    bool sub_00c1b8e0();
};

// @baa 0x00c1b8e0
bool C_00c1b8e0::sub_00c1b8e0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x20) != 0;
}

extern char g_0204467c[];
struct C_00c1b910 { void sub_00c1b910(void); };

// @baa 0x00c1b910
void C_00c1b910::sub_00c1b910(void) { *(int*)((char*)this + 0) = (int)g_0204467c; }

// @baa 0x00c1bb80
void __stdcall sub_00c1bb80(int a0) {  }

// @baa 0x00c1bb90
int sub_00c1bb90(void) { return 1; }

struct C_view_00c1bc20 {
    int sub_0073f030(int);
};

int sub_007161b0(...);
// @baa 0x00c1bc20
undefined4 UMorphWeightSequence::sub_00c1bc20(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view_00c1bc20 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x4c);
  return uVar1;
}

void sub_007249d0();
// @baa 0x00c1bc50
void sub_00c1bc50(void) { sub_007249d0(); }

// @baa 0x00c1bc60
int sub_00c1bc60(void) { return 1; }

struct C_00c1bc70 {
    undefined4 * sub_00c1bc70(undefined4);
    int sub_00739650(int);
};

extern undefined4 g_020446b0;
extern undefined * g_020446b8;
// @baa 0x00c1bc70
undefined4 * C_00c1bc70::sub_00c1bc70(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00c1bc70 *)(this))->sub_00739650(param_2);
  *param_1 = (undefined4)(&g_020446b8);
  param_1[5] = (undefined4)(&g_020446b0);
  return param_1;
}

// @baa 0x00c1bca0
void sub_00c1bca0(void) { sub_007249d0(); }

struct C_00c1bcb0 { C_00c1bcb0* sub_00c1bcb0(void); };

// @baa 0x00c1bcb0
C_00c1bcb0* C_00c1bcb0::sub_00c1bcb0(void) { return this; }

// @baa 0x00c1bcf0
int sub_00c1bcf0(int a0, int a1) { return a1; }

// @baa 0x00c1bd00
int sub_00c1bd00(int a0, int a1) { return a1; }

// @baa 0x00c1bd10
int sub_00c1bd10(int a0, int a1) { return a1; }

// @baa 0x00c1bd20
int sub_00c1bd20(int a0, int a1) { return a1; }

// @baa 0x00c1bd30
int sub_00c1bd30(int a0, int a1) { return a1; }

// @baa 0x00c1bd40
int sub_00c1bd40(int a0, int a1) { return a1; }

// @baa 0x00c1bd50
int sub_00c1bd50(int a0, int a1) { return a1; }

// @baa 0x00c1bd60
int sub_00c1bd60(int a0, int a1) { return a1; }

// @baa 0x00c1bd70
int sub_00c1bd70(int a0, int a1) { return a1; }

// @baa 0x00c1bd80
int sub_00c1bd80(int a0, int a1) { return a1; }

// @baa 0x00c1bd90
int sub_00c1bd90(int a0, int a1) { return a1; }

// @baa 0x00c1bda0
int sub_00c1bda0(int a0, int a1) { return a1; }

// @baa 0x00c1bdb0
int sub_00c1bdb0(int a0, int a1) { return a1; }

// @baa 0x00c1bdc0
int sub_00c1bdc0(int a0, int a1) { return a1; }

// @baa 0x00c1bdd0
int sub_00c1bdd0(int a0, int a1) { return a1; }

// @baa 0x00c1bde0
int sub_00c1bde0(int a0, int a1) { return a1; }

// @baa 0x00c1bdf0
int sub_00c1bdf0(int a0, int a1) { return a1; }

// @baa 0x00c1be00
int sub_00c1be00(int a0, int a1) { return a1; }

// @baa 0x00c1be10
int sub_00c1be10(int a0, int a1) { return a1; }

// @baa 0x00c1be20
int sub_00c1be20(int a0, int a1) { return a1; }

// @baa 0x00c1be30
int sub_00c1be30(int a0, int a1) { return a1; }

// @baa 0x00c1be40
int sub_00c1be40(int a0, int a1) { return a1; }

// @baa 0x00c1be50
int sub_00c1be50(int a0, int a1) { return a1; }

// @baa 0x00c1be60
int sub_00c1be60(int a0, int a1) { return a1; }

// @baa 0x00c1be70
int sub_00c1be70(int a0, int a1) { return a1; }

// @baa 0x00c1be80
int sub_00c1be80(int a0, int a1) { return a1; }

// @baa 0x00c1be90
int sub_00c1be90(int a0, int a1) { return a1; }

// @baa 0x00c1bea0
int sub_00c1bea0(int a0, int a1) { return a1; }

// @baa 0x00c1beb0
int sub_00c1beb0(int a0, int a1) { return a1; }

// @baa 0x00c1bec0
int sub_00c1bec0(int a0, int a1) { return a1; }

// @baa 0x00c1bed0
int sub_00c1bed0(int a0, int a1) { return a1; }

// @baa 0x00c1bee0
int sub_00c1bee0(int a0, int a1) { return a1; }

// @baa 0x00c1bef0
int sub_00c1bef0(int a0, int a1) { return a1; }

// @baa 0x00c1bf00
int sub_00c1bf00(int a0, int a1) { return a1; }

// @baa 0x00c1bf10
int sub_00c1bf10(int a0, int a1) { return a1; }

// @baa 0x00c1bf20
int sub_00c1bf20(int a0, int a1) { return a1; }

// @baa 0x00c1bf30
int sub_00c1bf30(int a0, int a1) { return a1; }

// @baa 0x00c1bf40
int sub_00c1bf40(int a0, int a1) { return a1; }

// @baa 0x00c1bf50
int sub_00c1bf50(int a0, int a1) { return a1; }

// @baa 0x00c1bf60
int sub_00c1bf60(int a0, int a1) { return a1; }

// @baa 0x00c1bf70
int sub_00c1bf70(int a0, int a1) { return a1; }

// @baa 0x00c1bf80
int sub_00c1bf80(int a0, int a1) { return a1; }

// @baa 0x00c1bf90
int sub_00c1bf90(int a0, int a1) { return a1; }

// @baa 0x00c1bfa0
int sub_00c1bfa0(int a0, int a1) { return a1; }

// @baa 0x00c1bfb0
int sub_00c1bfb0(int a0, int a1) { return a1; }

// @baa 0x00c1bfc0
int sub_00c1bfc0(int a0, int a1) { return a1; }

// @baa 0x00c1bfd0
int sub_00c1bfd0(int a0, int a1) { return a1; }

// @baa 0x00c1bfe0
int sub_00c1bfe0(int a0, int a1) { return a1; }

// @baa 0x00c1bff0
int sub_00c1bff0(int a0, int a1) { return a1; }

// @baa 0x00c1c000
int sub_00c1c000(int a0, int a1) { return a1; }

// @baa 0x00c1c010
int sub_00c1c010(int a0, int a1) { return a1; }

// @baa 0x00c1c020
int sub_00c1c020(int a0, int a1) { return a1; }

// @baa 0x00c1c030
int sub_00c1c030(int a0, int a1) { return a1; }

// @baa 0x00c1c040
int sub_00c1c040(int a0, int a1) { return a1; }

// @baa 0x00c1c050
int sub_00c1c050(int a0, int a1) { return a1; }

// @baa 0x00c1c060
int sub_00c1c060(int a0, int a1) { return a1; }

// @baa 0x00c1c070
int sub_00c1c070(int a0, int a1) { return a1; }

// @baa 0x00c1c080
int sub_00c1c080(int a0, int a1) { return a1; }

// @baa 0x00c1c090
int sub_00c1c090(int a0, int a1) { return a1; }

// @baa 0x00c1c0a0
int sub_00c1c0a0(int a0, int a1) { return a1; }

// @baa 0x00c1c0b0
int sub_00c1c0b0(int a0, int a1) { return a1; }

// @baa 0x00c1c0c0
int sub_00c1c0c0(int a0, int a1) { return a1; }

// @baa 0x00c1c0d0
int sub_00c1c0d0(int a0, int a1) { return a1; }

// @baa 0x00c1c0e0
int sub_00c1c0e0(int a0, int a1) { return a1; }

// @baa 0x00c1c0f0
int sub_00c1c0f0(int a0, int a1) { return a1; }

// @baa 0x00c1c100
int sub_00c1c100(int a0, int a1) { return a1; }

// @baa 0x00c1c110
int sub_00c1c110(int a0, int a1) { return a1; }

// @baa 0x00c1c120
int sub_00c1c120(int a0, int a1) { return a1; }

// @baa 0x00c1c130
int sub_00c1c130(int a0, int a1) { return a1; }

// @baa 0x00c1c140
int sub_00c1c140(int a0, int a1) { return a1; }

// @baa 0x00c1c150
int sub_00c1c150(int a0, int a1) { return a1; }

// @baa 0x00c1c160
int sub_00c1c160(int a0, int a1) { return a1; }

// @baa 0x00c1c170
int sub_00c1c170(int a0, int a1) { return a1; }

// @baa 0x00c1c180
int sub_00c1c180(int a0, int a1) { return a1; }

// @baa 0x00c1c190
int sub_00c1c190(int a0, int a1) { return a1; }

// @baa 0x00c1c1a0
int sub_00c1c1a0(int a0, int a1) { return a1; }

// @baa 0x00c1c1b0
int sub_00c1c1b0(int a0, int a1) { return a1; }

// @baa 0x00c1c1c0
int sub_00c1c1c0(int a0, int a1) { return a1; }

// @baa 0x00c1c1d0
int sub_00c1c1d0(int a0, int a1) { return a1; }

// @baa 0x00c1c1e0
int sub_00c1c1e0(int a0, int a1) { return a1; }

// @baa 0x00c1c1f0
int sub_00c1c1f0(int a0, int a1) { return a1; }

// @baa 0x00c1c200
int sub_00c1c200(int a0, int a1) { return a1; }

// @baa 0x00c1c210
int sub_00c1c210(int a0, int a1) { return a1; }

// @baa 0x00c1c220
int sub_00c1c220(int a0, int a1) { return a1; }

// @baa 0x00c1c230
int sub_00c1c230(int a0, int a1) { return a1; }

// @baa 0x00c1c240
int sub_00c1c240(int a0, int a1) { return a1; }

struct FOO {
  int __thiscall sub_00cb02e0(void);
};

extern undefined4 g_026c3cdc;
// @baa 0x00c1ee70
void sub_00c1ee70(void)
{
  ((FOO *)g_026c3cdc)->sub_00cb02e0();
}

// @baa 0x00c1ee80
void __stdcall sub_00c1ee80(int a0) {  }

// @baa 0x00c1eea0
void UMaterialExpressionFontSampleParameter::vf_05c(void) {  }

// @baa 0x00c1eeb0
void UMaterialExpressionFontSampleParameter::vf_09c(void) {  }

// @baa 0x00c1eed0
void UMaterialExpressionWorldPosition::vf_10c(INT a0, UINT a1) {  }

// @baa 0x00c1ef00
void UMaterialExpressionNormal::vf_10c(INT a0, UINT a1) {  }

// @baa 0x00c1ef10
int UMaterialExpressionAddNormalMap::vf_118(void) { return 112; }

// @baa 0x00c1ef20
void UMaterialExpressionAddNormalMap::vf_10c(int param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x7c) == param_2) {
    *(undefined4 *)(param_1 + 0x7c) = param_3;
  }
  if (*(int *)(param_1 + 0x98) == param_2) {
    *(undefined4 *)(param_1 + 0x98) = param_3;
  }
  return;
}

// @baa 0x00c1f320
void UMaterialExpressionLightingDiffuseLambert::vf_10c(int param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x108) == param_2) {
    *(undefined4 *)(param_1 + 0x108) = param_3;
  }
  if (*(int *)(param_1 + 0x60) == param_2) {
    *(undefined4 *)(param_1 + 0x60) = param_3;
  }
  if (*(int *)(param_1 + 0x7c) == param_2) {
    *(undefined4 *)(param_1 + 0x7c) = param_3;
  }
  if (*(int *)(param_1 + 0x98) == param_2) {
    *(undefined4 *)(param_1 + 0x98) = param_3;
  }
  if (*(int *)(param_1 + 0xb4) == param_2) {
    *(undefined4 *)(param_1 + 0xb4) = param_3;
  }
  if (*(int *)(param_1 + 0xd0) == param_2) {
    *(undefined4 *)(param_1 + 0xd0) = param_3;
  }
  if (*(int *)(param_1 + 0xec) == param_2) {
    *(undefined4 *)(param_1 + 0xec) = param_3;
  }
  return;
}

// @baa 0x00c1f420
void UMaterialExpressionLightingSpecularPhong::vf_10c(int param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x15c) == param_2) {
    *(undefined4 *)(param_1 + 0x15c) = param_3;
  }
  if (*(int *)(param_1 + 0x60) == param_2) {
    *(undefined4 *)(param_1 + 0x60) = param_3;
  }
  if (*(int *)(param_1 + 0x7c) == param_2) {
    *(undefined4 *)(param_1 + 0x7c) = param_3;
  }
  if (*(int *)(param_1 + 0x98) == param_2) {
    *(undefined4 *)(param_1 + 0x98) = param_3;
  }
  if (*(int *)(param_1 + 0xb4) == param_2) {
    *(undefined4 *)(param_1 + 0xb4) = param_3;
  }
  if (*(int *)(param_1 + 0xd0) == param_2) {
    *(undefined4 *)(param_1 + 0xd0) = param_3;
  }
  if (*(int *)(param_1 + 0xec) == param_2) {
    *(undefined4 *)(param_1 + 0xec) = param_3;
  }
  if (*(int *)(param_1 + 0x108) == param_2) {
    *(undefined4 *)(param_1 + 0x108) = param_3;
  }
  if (*(int *)(param_1 + 0x124) == param_2) {
    *(undefined4 *)(param_1 + 0x124) = param_3;
  }
  if (*(int *)(param_1 + 0x140) == param_2) {
    *(undefined4 *)(param_1 + 0x140) = param_3;
  }
  return;
}

// @baa 0x00c1f580
void UMaterialExpressionLightingSpecularBlinnPhong::vf_10c(int param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x15c) == param_2) {
    *(undefined4 *)(param_1 + 0x15c) = param_3;
  }
  if (*(int *)(param_1 + 0x60) == param_2) {
    *(undefined4 *)(param_1 + 0x60) = param_3;
  }
  if (*(int *)(param_1 + 0x7c) == param_2) {
    *(undefined4 *)(param_1 + 0x7c) = param_3;
  }
  if (*(int *)(param_1 + 0x98) == param_2) {
    *(undefined4 *)(param_1 + 0x98) = param_3;
  }
  if (*(int *)(param_1 + 0xb4) == param_2) {
    *(undefined4 *)(param_1 + 0xb4) = param_3;
  }
  if (*(int *)(param_1 + 0xd0) == param_2) {
    *(undefined4 *)(param_1 + 0xd0) = param_3;
  }
  if (*(int *)(param_1 + 0xec) == param_2) {
    *(undefined4 *)(param_1 + 0xec) = param_3;
  }
  if (*(int *)(param_1 + 0x108) == param_2) {
    *(undefined4 *)(param_1 + 0x108) = param_3;
  }
  if (*(int *)(param_1 + 0x124) == param_2) {
    *(undefined4 *)(param_1 + 0x124) = param_3;
  }
  if (*(int *)(param_1 + 0x140) == param_2) {
    *(undefined4 *)(param_1 + 0x140) = param_3;
  }
  return;
}

// @baa 0x00c1ffa0
bool sub_00c1ffa0(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00c1ffb0
bool sub_00c1ffb0(int param_1)
{
  return param_1 != 3;
}

// DemoRecording.cpp (part 1 of 3): 97 functions
// Placed here by: neighbours 66, class 20, callers 3, file 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00bf9400
int UDemoRecConnection::vf_134(int a0) { return 1; }

int sub_00e0ddf0(void);
// @baa 0x00bf9410
void UDemoRecConnection::vf_12c(void)
{
    int param_1 = (int)this;

  if (*(int *)(*(int *)(param_1 + 100) + 0x44) == 0) {
    sub_00e0ddf0();
    return;
  }
  return;
}

// @baa 0x00bf9470
IMPLEMENT_CLASS_AT(UDemoRecConnection, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\DemoRecording.cpp", 88);

// @baa 0x00bf9580
int UDemoRecConnection::vf_000(void) { return 1; }

// @baa 0x00bf9590
bool UDemoRecConnection::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00bf9860
IMPLEMENT_CLASS_AT(UDemoRecDriver, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\DemoRecording.cpp", 1099);

// @baa 0x00bf9970
int UDemoRecDriver::vf_000(void) { return 1; }

// @baa 0x00bf9980
bool UDemoRecDriver::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00bf9a30
int UDemoPlayPendingLevel::GetDriver(void) { return *(int*)((char*)this + 140); }

// @baa 0x00bf9a40
IMPLEMENT_CLASS_AT(UDemoPlayPendingLevel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\DemoRecording.cpp", 1283);

// @baa 0x00bf9b50
int UDemoPlayPendingLevel::vf_000(void) { return 1; }

// @baa 0x00bf9b60
bool UDemoPlayPendingLevel::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C {
    void sub_00bf9ba0();
};

int sub_0053df70(...);
// @baa 0x00bf9ba0
void C::sub_00bf9ba0(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00bf9bd0 { int a, b, c; C_00bf9bd0(); };

// @baa 0x00bf9bd0
C_00bf9bd0::C_00bf9bd0() : a(0), b(0), c(0) {}

struct C_00bf9be0 {
    void sub_00bf9be0();
};

// @baa 0x00bf9be0
void C_00bf9be0::sub_00bf9be0(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 << 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00bf9d30 { int a, b, c; C_00bf9d30(); };

// @baa 0x00bf9d30
C_00bf9d30::C_00bf9d30() : a(0), b(0), c(0) {}

struct C_00bf9d40 { int sub_00bf9d40(void); };

// @baa 0x00bf9d40
int C_00bf9d40::sub_00bf9d40(void) { return *(int*)((char*)this + 4); }

struct C_00bf9d50 { int a, b, c; C_00bf9d50(); };

// @baa 0x00bf9d50
C_00bf9d50::C_00bf9d50() : a(0), b(0), c(0) {}

struct C_00bf9d60 { int sub_00bf9d60(void); };

// @baa 0x00bf9d60
int C_00bf9d60::sub_00bf9d60(void) { return *(int*)((char*)this + 4); }

struct C_00bf9d70 { int a, b, c; C_00bf9d70(); };

// @baa 0x00bf9d70
C_00bf9d70::C_00bf9d70() : a(0), b(0), c(0) {}

struct C_00bf9d80 { int sub_00bf9d80(void); };

// @baa 0x00bf9d80
int C_00bf9d80::sub_00bf9d80(void) { return *(int*)((char*)this + 4); }

struct C_00bf9d90 { int a, b, c; C_00bf9d90(); };

// @baa 0x00bf9d90
C_00bf9d90::C_00bf9d90() : a(0), b(0), c(0) {}

struct C_00bf9da0 { int sub_00bf9da0(void); };

// @baa 0x00bf9da0
int C_00bf9da0::sub_00bf9da0(void) { return *(int*)((char*)this + 4); }

struct C_00bf9db0 { int sub_00bf9db0(void); };

// @baa 0x00bf9db0
int C_00bf9db0::sub_00bf9db0(void) { return *(int*)((char*)this + 4); }

struct C_00bf9dc0 { int sub_00bf9dc0(void); };

// @baa 0x00bf9dc0
int C_00bf9dc0::sub_00bf9dc0(void) { return *(int*)((char*)this + 4); }

struct C_00bf9dd0 { int sub_00bf9dd0(void); };

// @baa 0x00bf9dd0
int C_00bf9dd0::sub_00bf9dd0(void) { return *(int*)((char*)this + 4); }

struct C_00bf9de0 { int sub_00bf9de0(void); };

// @baa 0x00bf9de0
int C_00bf9de0::sub_00bf9de0(void) { return *(int*)((char*)this + 4); }

struct C_00bf9df0 { int a, b, c; C_00bf9df0(); };

// @baa 0x00bf9df0
C_00bf9df0::C_00bf9df0() : a(0), b(0), c(0) {}

struct C_00bf9e00 { int a, b, c; C_00bf9e00(); };

// @baa 0x00bf9e00
C_00bf9e00::C_00bf9e00() : a(0), b(0), c(0) {}

struct C_00bf9e10 { int sub_00bf9e10(void); };

// @baa 0x00bf9e10
int C_00bf9e10::sub_00bf9e10(void) { return *(int*)((char*)this + 4); }

struct C_00bf9e90 { int sub_00bf9e90(void); };

// @baa 0x00bf9e90
int C_00bf9e90::sub_00bf9e90(void) { return *(int*)((char*)this + 0); }

struct C_00bf9ea0 { int sub_00bf9ea0(void); };

// @baa 0x00bf9ea0
int C_00bf9ea0::sub_00bf9ea0(void) { return *(int*)((char*)this + 0); }

struct C_00bf9f30 {
    int sub_00bf9f30(int);
};

// @baa 0x00bf9f30
int C_00bf9f30::sub_00bf9f30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00bf9f40 { int sub_00bf9f40(void); };

// @baa 0x00bf9f40
int C_00bf9f40::sub_00bf9f40(void) { return *(int*)((char*)this + 0); }

struct C_00bf9f50 { int sub_00bf9f50(void); };

// @baa 0x00bf9f50
int C_00bf9f50::sub_00bf9f50(void) { return *(int*)((char*)this + 0); }

struct C_00bf9fe0 {
    int sub_00bf9fe0(int);
};

// @baa 0x00bf9fe0
int C_00bf9fe0::sub_00bf9fe0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00bf9ff0 { int sub_00bf9ff0(void); };

// @baa 0x00bf9ff0
int C_00bf9ff0::sub_00bf9ff0(void) { return *(int*)((char*)this + 0); }

struct C_00bfa000 { int sub_00bfa000(void); };

// @baa 0x00bfa000
int C_00bfa000::sub_00bfa000(void) { return *(int*)((char*)this + 0); }

struct C_00bfa090 {
    int sub_00bfa090(int);
};

// @baa 0x00bfa090
int C_00bfa090::sub_00bfa090(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_00bfa0a0 { int sub_00bfa0a0(void); };

// @baa 0x00bfa0a0
int C_00bfa0a0::sub_00bfa0a0(void) { return *(int*)((char*)this + 0); }

struct C_00bfa1a0 { int sub_00bfa1a0(void); };

// @baa 0x00bfa1a0
int C_00bfa1a0::sub_00bfa1a0(void) { return *(int*)((char*)this + 0); }

struct C_00bfa1b0 { int sub_00bfa1b0(void); };

// @baa 0x00bfa1b0
int C_00bfa1b0::sub_00bfa1b0(void) { return *(int*)((char*)this + 0); }

struct C_00bfa1c0 { int sub_00bfa1c0(void); };

// @baa 0x00bfa1c0
int C_00bfa1c0::sub_00bfa1c0(void) { return *(int*)((char*)this + 0); }

struct C_00bfa1d0 { int sub_00bfa1d0(void); };

// @baa 0x00bfa1d0
int C_00bfa1d0::sub_00bfa1d0(void) { return *(int*)((char*)this + 0); }

struct C_00bfa1e0 { int sub_00bfa1e0(void); };

// @baa 0x00bfa1e0
int C_00bfa1e0::sub_00bfa1e0(void) { return *(int*)((char*)this + 0); }

struct C_00bfa1f0 { int sub_00bfa1f0(void); };

// @baa 0x00bfa1f0
int C_00bfa1f0::sub_00bfa1f0(void) { return *(int*)((char*)this + 0); }

struct C_00bfa200 { int sub_00bfa200(void); };

// @baa 0x00bfa200
int C_00bfa200::sub_00bfa200(void) { return *(int*)((char*)this + 0); }

struct C_00bfa210 { int sub_00bfa210(void); };

// @baa 0x00bfa210
int C_00bfa210::sub_00bfa210(void) { return *(int*)((char*)this + 0); }

struct C_00bfa220 { int sub_00bfa220(void); };

// @baa 0x00bfa220
int C_00bfa220::sub_00bfa220(void) { return *(int*)((char*)this + 0); }

struct C_00bfa230 { int sub_00bfa230(void); };

// @baa 0x00bfa230
int C_00bfa230::sub_00bfa230(void) { return *(int*)((char*)this + 0); }

struct C_00bfa240 { int sub_00bfa240(void); };

// @baa 0x00bfa240
int C_00bfa240::sub_00bfa240(void) { return *(int*)((char*)this + 0); }

struct C_00bfa250 { int sub_00bfa250(void); };

// @baa 0x00bfa250
int C_00bfa250::sub_00bfa250(void) { return *(int*)((char*)this + 0); }

struct C_00bfa260 { int sub_00bfa260(void); };

// @baa 0x00bfa260
int C_00bfa260::sub_00bfa260(void) { return *(int*)((char*)this + 0); }

struct C_00bfa270 { int sub_00bfa270(void); };

// @baa 0x00bfa270
int C_00bfa270::sub_00bfa270(void) { return *(int*)((char*)this + 0); }

struct C_00bfa280 { int sub_00bfa280(void); };

// @baa 0x00bfa280
int C_00bfa280::sub_00bfa280(void) { return *(int*)((char*)this + 20); }

struct C_00bfa290 { int sub_00bfa290(void); };

// @baa 0x00bfa290
int C_00bfa290::sub_00bfa290(void) { return *(int*)((char*)this + 20); }

struct C_00bfa320 {
    void sub_00bfa320(undefined4, undefined4, undefined4, float, float);
};

int sub_0056a2a0(...);
// @baa 0x00bfa320
void C_00bfa320::sub_00bfa320(undefined4 param_2, undefined4 param_3, undefined4 param_4, float param_5, float param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_0056a2a0(param_1,param_2,param_3,param_4,(double)param_5,(double)param_6);
  return;
}

struct C_00bfa350 {
    void sub_00bfa350(undefined4, undefined4, float, float, float, float);
};

// @baa 0x00bfa350
void C_00bfa350::sub_00bfa350(undefined4 param_2, undefined4 param_3, float param_4, float param_5, float param_6, float param_7)
{
    undefined4 param_1 = (undefined4)this;

  sub_0056a2a0(param_1,param_2,param_3,(double)param_4,(double)param_5,(double)param_6,
               (double)param_7);
  return;
}

struct C_00bfa390 {
    void sub_00bfa390(undefined4, float);
};

// @baa 0x00bfa390
void C_00bfa390::sub_00bfa390(undefined4 param_2, float param_3)
{
    undefined4 param_1 = (undefined4)this;

  sub_0056a2a0(param_1,param_2,(double)param_3);
  return;
}

struct C_00bfa410 {
    void sub_00bfa410(undefined4, undefined4, undefined4);
};

// @baa 0x00bfa410
void C_00bfa410::sub_00bfa410(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 param_1 = (undefined4)this;

  sub_0056a2a0(param_1,param_2,param_3,param_4);
  return;
}

struct C_00bfa430 {
    void sub_00bfa430(undefined4, undefined4, float);
};

// @baa 0x00bfa430
void C_00bfa430::sub_00bfa430(undefined4 param_2, undefined4 param_3, float param_4)
{
    undefined4 param_1 = (undefined4)this;

  sub_0056a2a0(param_1,param_2,param_3,(double)param_4);
  return;
}

struct T_00bfa4d0 { BYTE b[4]; };

// @baa 0x00bfa4d0
template T_00bfa4d0& TArray<T_00bfa4d0>::Last(INT);

struct T_00bfa570 { BYTE b[12]; };

// @baa 0x00bfa570
template T_00bfa570& TArray<T_00bfa570>::Last(INT);

struct T_00bfa5d0 { BYTE b[16]; };

// @baa 0x00bfa5d0
template T_00bfa5d0& TArray<T_00bfa5d0>::Last(INT);

struct S {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00bfa630(INT Index) const;
};

// @baa 0x00bfa630
const DWORD* S::sub_00bfa630(INT Index) const
{
    return &Items(Index);
}

struct C_00bfa6f0 { void sub_00bf7c80(int); C_00bfa6f0 *sub_00bfa6f0(int); };

// @baa 0x00bfa6f0
C_00bfa6f0 *C_00bfa6f0::sub_00bfa6f0(int a) { sub_00bf7c80(a); return this; }

struct C_00bfa9a0 { void sub_00bf7d60(int); C_00bfa9a0 *sub_00bfa9a0(int); };

// @baa 0x00bfa9a0
C_00bfa9a0 *C_00bfa9a0::sub_00bfa9a0(int a) { sub_00bf7d60(a); return this; }

struct C_00bfa9c0 { void sub_00bf7e90(int); C_00bfa9c0 *sub_00bfa9c0(int); };

// @baa 0x00bfa9c0
C_00bfa9c0 *C_00bfa9c0::sub_00bfa9c0(int a) { sub_00bf7e90(a); return this; }

struct C_00bfaad0 { int sub_00bfaad0(void); };

// @baa 0x00bfaad0
int C_00bfaad0::sub_00bfaad0(void) { return *(int*)((char*)this + 52); }

struct C_00bfaae0 {
    bool sub_00bfaae0();
};

// @baa 0x00bfaae0
bool C_00bfaae0::sub_00bfaae0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x28) == 0;
}

// @baa 0x00bfffb0
FString UDemoRecConnection::LowLevelGetRemoteAddress()
{
    return TEXT("");
}

// @baa 0x00bfffe0
FString UDemoRecConnection::LowLevelDescribe()
{
    return TEXT("Demo recording driver connection");
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

struct TConstSetBitIterator_00c13bd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c13bd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c13bd0& operator++();
};

TConstSetBitIterator_00c13bd0::TConstSetBitIterator_00c13bd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c13bd0
TConstSetBitIterator_00c13bd0& TConstSetBitIterator_00c13bd0::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00c14ab0
void UDemoPlayPendingLevel::SendJoin(void) { *(int*)((char*)this + 148) = 1; }

// @baa 0x00c14ac0
int UDemoPlayPendingLevel::TrySkipFile(void) { return 0; }

// @baa 0x00c14ad0
// @baa 0x00c14b40
// @baa 0x00c156a0
// @baa 0x00c156d0
void sub_00c17130();
// @baa 0x00c17b70
void sub_00c17b70(void) { sub_00c17130(); }

struct C_00c18c40 { void sub_00814440(int); C_00c18c40 *sub_00c18c40(int); };

// @baa 0x00c18c40
C_00c18c40 *C_00c18c40::sub_00c18c40(int a) { sub_00814440(a); return this; }

void sub_00c19590();
// @baa 0x00c19600
void sub_00c19600(void) { sub_00c19590(); }

// @baa 0x00c19610
void sub_00c19610(void) { sub_00c17130(); }

// @baa 0x00c1a2f0
// @baa 0x00c1a360
// @baa 0x00c1a390
void sub_00c1a390(void) { sub_00c19590(); }

// @baa 0x00c1a3a0
// @baa 0x00c1a3e0
struct A_00c1a560 { virtual void sub_00c1a5d0(); char pad[48]; };

struct B_00c1a560 { virtual void sub_00c1a5d0(); };

struct C_00c1a560 : A_00c1a560, B_00c1a560 { virtual void sub_00c1a5d0(); C_00c1a560(); };

C_00c1a560::C_00c1a560() {}

// @baa 0x00c1a560
void C_00c1a560::sub_00c1a5d0() {}

// @baa 0x00c1aab0
// @baa 0x00c1ae90
struct C_00df4110 {
    void sub_00df4110();
};

// @baa 0x00df4110
void C_00df4110::sub_00df4110(void)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = *(int *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x4f98) = *(undefined4 *)(iVar1 + 0x13c);
  *(undefined4 *)(param_1 + 0x4f9c) = *(undefined4 *)(iVar1 + 0x140);
  *(undefined4 *)(param_1 + 0x4fa0) = *(undefined4 *)(iVar1 + 0x144);
  *(undefined4 *)(param_1 + 0x4fa4) = *(undefined4 *)(iVar1 + 0x148);
  *(undefined4 *)(param_1 + 0x4fa8) = *(undefined4 *)(iVar1 + 0x14c);
  return;
}

// @baa 0x00c002c0
FString UDemoRecDriver::LowLevelGetNetworkNumber()
{
    return TEXT("");
}

int sub_0053dfa0(...);
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

// @baa 0x00c1a6d0
int UDemoRecDriver::vf_144(void) { return 1; }

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

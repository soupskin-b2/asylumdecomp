// Engine_0b40000.cpp: 80 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C { char* sub_00b403d0(void); };

// @baa 0x00b403d0
char* C::sub_00b403d0(void) { return (char*)this + 20; }

// @baa 0x00b403e0
void sub_00b403e0(void) {  }

struct C_00b40480 {
    undefined4 sub_00b40480(byte);
};

int sub_0053dfa0(...);
int sub_00b403f0(void);
// @baa 0x00b40480
undefined4 C_00b40480::sub_00b40480(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b403f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b40530 {
    undefined4 * sub_00b40530();
    int sub_00b404a0();
};

extern undefined * g_01fef10c;
// @baa 0x00b40530
undefined4 * C_00b40530::sub_00b40530(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[1] = param_1[1] & 0xfffffffe;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (undefined4)(&g_01fef10c);
  ((C_00b40530 *)(((char *)this + 0x14)))->sub_00b404a0();
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  return param_1;
}

struct C_00b40580 { char* sub_00b40580(void); };

// @baa 0x00b40580
char* C_00b40580::sub_00b40580(void) { return (char*)this + 20; }

// @baa 0x00b40590
void sub_00b40590(void) {  }

struct C_00b40630 {
    undefined4 sub_00b40630(byte);
};

int sub_00b405a0(void);
// @baa 0x00b40630
undefined4 C_00b40630::sub_00b40630(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b405a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b40890 {
    undefined4 * sub_00b40890();
    int sub_00b40710();
};

extern undefined * g_01fef13c;
// @baa 0x00b40890
undefined4 * C_00b40890::sub_00b40890(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[1] = param_1[1] & 0xfffffffe;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (undefined4)(&g_01fef13c);
  ((C_00b40890 *)(((char *)this + 0x14)))->sub_00b40710();
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0xffffffff;
  return param_1;
}

struct C_00b408f0 { char* sub_00b408f0(void); };

// @baa 0x00b408f0
char* C_00b408f0::sub_00b408f0(void) { return (char*)this + 20; }

// @baa 0x00b40900
void sub_00b40900(void) {  }

struct C_00b409b0 {
    undefined4 sub_00b409b0(byte);
};

int sub_00b40910(void);
// @baa 0x00b409b0
undefined4 C_00b409b0::sub_00b409b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b40910();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_00b409d0 { void sub_00765d90(); };

struct C_00b409d0 { char pad[4]; M_00b409d0 m; void sub_00b409d0(); };

// @baa 0x00b409d0
void C_00b409d0::sub_00b409d0() { m.sub_00765d90(); }

struct M_00b409e0 { void sub_00765d90(); };

struct C_00b409e0 { char pad[4]; M_00b409e0 m; void sub_00b409e0(); };

// @baa 0x00b409e0
void C_00b409e0::sub_00b409e0() { m.sub_00765d90(); }

struct C_00b409f0 { C_00b409f0* sub_00b409f0(void); };

// @baa 0x00b409f0
C_00b409f0* C_00b409f0::sub_00b409f0(void) { return this; }

struct A_00b40b70 { virtual void sub_00b436d0(); char pad[16]; };

struct B_00b40b70 { virtual void sub_00b436d0(); };

struct C_00b40b70 : A_00b40b70, B_00b40b70 { virtual void sub_00b436d0(); C_00b40b70(); };

C_00b40b70::C_00b40b70() {}

// @baa 0x00b40b70
void C_00b40b70::sub_00b436d0() {}

int sub_005c7a20(void);
extern undefined * g_01fef368;
// @baa 0x00b40e10
undefined4 * UObject::sub_00b40e10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fef368);
  return param_1;
}

// @baa 0x00b40e30
IMPLEMENT_CLASS_AT(UParticleModuleMaterialByParameter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Material.cpp", 70);

// @baa 0x00b40eb0
extern undefined * g_01fef4d0;
// @baa 0x00b40ed0
undefined4 * UObject::sub_00b40ed0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fef4d0);
  return param_1;
}

// @baa 0x00b40ef0
IMPLEMENT_CLASS_AT(UParticleModuleMeshMaterial, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Material.cpp", 17);

// @baa 0x00b40f60
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

struct TConstSetBitIterator_00b42b70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b42b70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b42b70& operator++();
};

TConstSetBitIterator_00b42b70::TConstSetBitIterator_00b42b70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b42b70
TConstSetBitIterator_00b42b70& TConstSetBitIterator_00b42b70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00b42bc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b42bc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b42bc0& operator++();
};

TConstSetBitIterator_00b42bc0::TConstSetBitIterator_00b42bc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b42bc0
TConstSetBitIterator_00b42bc0& TConstSetBitIterator_00b42bc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00b42c10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b42c10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b42c10& operator++();
};

TConstSetBitIterator_00b42c10::TConstSetBitIterator_00b42c10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b42c10
TConstSetBitIterator_00b42c10& TConstSetBitIterator_00b42c10::operator++()
{
    It.Advance();
    return *this;
}

struct C_00b43600 { C_00b43600* sub_00b43600(void); };

// @baa 0x00b43600
C_00b43600* C_00b43600::sub_00b43600(void) { return this; }

struct C_00b43610 { C_00b43610* sub_00b43610(void); };

// @baa 0x00b43610
C_00b43610* C_00b43610::sub_00b43610(void) { return this; }

struct C_00b436d0 {
    undefined4 sub_00b436d0(byte);
};

int sub_00b40c80(void);
// @baa 0x00b436d0
undefined4 C_00b436d0::sub_00b436d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b40c80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00b32b90(void);
int sub_00b41870(...);
extern undefined4 g_026bf2f0;
// @baa 0x00b436f0
int sub_00b436f0(void)
{
  if (g_026bf2f0 == 0) {
    g_026bf2f0 = sub_00b41870(L"Engine");
    sub_00b32b90();
  }
  return g_026bf2f0;
}

extern undefined * g_01fef638;
// @baa 0x00b43720
undefined4 * UObject::sub_00b43720(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fef638);
  return param_1;
}

int sub_00b32e10(void);
int sub_00b41930(...);
extern undefined4 g_026bf2f8;
// @baa 0x00b43820
int sub_00b43820(void)
{
  if (g_026bf2f8 == 0) {
    g_026bf2f8 = sub_00b41930(L"Engine");
    sub_00b32e10();
  }
  return g_026bf2f8;
}

extern undefined * g_01fef7a0;
// @baa 0x00b43870
undefined4 * UObject::sub_00b43870(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fef7a0);
  return param_1;
}

// @baa 0x00b43890
IMPLEMENT_CLASS_AT(UParticleModuleEventReceiverSpawn, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Event.cpp", 306);

// @baa 0x00b43910
int sub_00b33270(void);
int sub_00b41ab0(...);
extern undefined4 g_026bf308;
// @baa 0x00b43940
int sub_00b43940(void)
{
  if (g_026bf308 == 0) {
    g_026bf308 = sub_00b41ab0(L"Engine");
    sub_00b33270();
  }
  return g_026bf308;
}

int sub_00b33400(void);
int sub_00b41b70(...);
extern undefined4 g_026bf314;
// @baa 0x00b439b0
int sub_00b439b0(void)
{
  if (g_026bf314 == 0) {
    g_026bf314 = sub_00b41b70(L"Engine");
    sub_00b33400();
  }
  return g_026bf314;
}

extern undefined * g_01fef918;
// @baa 0x00b439e0
undefined4 * UObject::sub_00b439e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fef918);
  return param_1;
}

int sub_00b339e0(void);
int sub_00b41c30(...);
extern undefined4 g_026bf31c;
// @baa 0x00b43ac0
int sub_00b43ac0(void)
{
  if (g_026bf31c == 0) {
    g_026bf31c = sub_00b41c30(L"Engine");
    sub_00b339e0();
  }
  return g_026bf31c;
}

int sub_00b34100(void);
int sub_00b41e70(...);
extern undefined4 g_026bf32c;
// @baa 0x00b43af0
int sub_00b43af0(void)
{
  if (g_026bf32c == 0) {
    g_026bf32c = sub_00b41e70(L"Engine");
    sub_00b34100();
  }
  return g_026bf32c;
}

extern undefined * g_01fefa80;
// @baa 0x00b43b20
undefined4 * UObject::sub_00b43b20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fefa80);
  return param_1;
}

// @baa 0x00b43b40
IMPLEMENT_CLASS_AT(UParticleModuleSpawn, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Spawn.cpp", 16);

// @baa 0x00b43bd0
extern undefined * g_01fefbf0;
// @baa 0x00b43c00
undefined4 * UObject::sub_00b43c00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fefbf0);
  return param_1;
}

// @baa 0x00b43c20
IMPLEMENT_CLASS_AT(UParticleModuleSpawnPerUnit, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Spawn.cpp", 101);

// @baa 0x00b43c90
// @baa 0x00b48a60
IMPLEMENT_CLASS_AT(UParticleModuleEventReceiverBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Event.cpp", 301);

// @baa 0x00b48b70
bool UParticleModuleEventReceiverBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b48e80
// @baa 0x00b48f90
bool UParticleModuleMaterialByParameter::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b49270
// @baa 0x00b49380
bool UParticleModuleSpawn::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b493c0
// @baa 0x00b494d0
bool UParticleModuleSpawnPerUnit::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_00b419f0(...);
int sub_00b48a60(void);
extern undefined4 g_026bf300;
// @baa 0x00b4a850
int sub_00b4a850(void)
{
  if (g_026bf300 == 0) {
    g_026bf300 = sub_00b419f0(L"Engine");
    sub_00b48a60();
  }
  return g_026bf300;
}

// @baa 0x00b4b1f0
// @baa 0x00b4b300
bool UParticleModuleEventReceiverSpawn::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_00b49e80();
// @baa 0x00b4b580
void sub_00b4b580(void) { sub_00b49e80(); }

struct TConstSetBitIterator_00b4b590 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b4b590(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b4b590& operator++();
};

TConstSetBitIterator_00b4b590::TConstSetBitIterator_00b4b590(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b4b590
TConstSetBitIterator_00b4b590& TConstSetBitIterator_00b4b590::operator++()
{
    It.Advance();
    return *this;
}

void sub_00b4bc50();
// @baa 0x00b4c140
void sub_00b4c140(void) { sub_00b4bc50(); }

void sub_00b4bbe0();
// @baa 0x00b4c150
void sub_00b4c150(void) { sub_00b4bbe0(); }

struct C_00b4d1c0 {
    void sub_00b4d1c0(int *, int *);
};

// @baa 0x00b4d1c0
void C_00b4d1c0::sub_00b4d1c0(int * param_2, int * param_3)
{
    int param_1 = (int)this;

  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xd0);
  iVar2 = *(int *)(param_1 + 200) * iVar1;
  *param_2 = (*(int *)(param_1 + 200) + 2) * *(int *)(param_1 + 0xcc) + 0x184;
  *param_3 = iVar2 + 0x184 + iVar1 * 2;
  iVar1 = iVar2 + 0xe8 + iVar1 * 2;
  *param_2 = *param_2 + iVar1;
  *param_3 = *param_3 + iVar1;
  return;
}

// @baa 0x00b4d210
int sub_00b4d210(void) { return 1; }

extern char g_025ddff0[];
// @baa 0x00b4d220
int sub_00b4d220(void) { return (int)g_025ddff0; }

// @baa 0x00b4d230
void sub_00b4d230(void) {  }

// @baa 0x00b4d240
void sub_00b4d240(void) {  }

extern char g_025ddfc8[];
// @baa 0x00b4e0b0
int sub_00b4e0b0(void) { return (int)g_025ddfc8; }

struct C_00b4e3e0 {
    undefined4 sub_00b4e3e0(byte);
};

int sub_00b4cdd0(void);
// @baa 0x00b4e3e0
undefined4 C_00b4e3e0::sub_00b4e3e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b4cdd0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b4f630 {
    undefined4 sub_00b4f630(byte);
};

int sub_00b4d150(void);
// @baa 0x00b4f630
undefined4 C_00b4f630::sub_00b4f630(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b4d150();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b4fa40 {
    undefined4 sub_00b4fa40(byte);
};

int sub_00b4dd70(void);
// @baa 0x00b4fa40
undefined4 C_00b4fa40::sub_00b4fa40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b4dd70();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00b4fb40
void sub_00b4fb40(void) {  }

struct C_00b4fb80 {
    bool sub_00b4fb80();
};

// @baa 0x00b4fb80
bool C_00b4fb80::sub_00b4fb80(void)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + 2) == '\x02';
}

// @baa 0x00b4fb90
undefined2 sub_00b4fb90(void)
{
  return 0x69;
}

// @baa 0x00b4fba0
undefined2 sub_00b4fba0(void)
{
  return 0x73;
}

struct C_00b4fbb0 { int sub_00b4fbb0(void); };

// @baa 0x00b4fbb0
int C_00b4fbb0::sub_00b4fbb0(void) { return *(int*)((char*)this + 164); }

struct C_00b4fbc0 {
    void sub_00b4fbc0();
};

// @baa 0x00b4fbc0
void C_00b4fbc0::sub_00b4fbc0(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 8;
  return;
}

struct C_00b4fc70 { int sub_00b4fc70(void); };

// @baa 0x00b4fc70
int C_00b4fc70::sub_00b4fc70(void) { return *(int*)((char*)this + 168); }

struct C_00b4fc80 { void sub_00b4fc80(int a0); };

// @baa 0x00b4fc80
void C_00b4fc80::sub_00b4fc80(int a0) { *(int*)((char*)this + 172) = a0; }

struct C_00b4fc90 { float sub_00b4fc90(void); };

// @baa 0x00b4fc90
float C_00b4fc90::sub_00b4fc90(void) { return *(float*)((char*)this + 228); }

struct C_00b4fca0 {
    bool sub_00b4fca0();
};

// @baa 0x00b4fca0
bool C_00b4fca0::sub_00b4fca0(void)
{
    int param_1 = (int)this;

  return 0 < *(int *)(param_1 + 0xcc);
}

// @baa 0x00b4fcb0
int sub_00b4fcb0(int a0, int a1) { return a1; }

int sub_007a2220(void);
int sub_007c7d30(...);
extern undefined4 g_026b52e8;
// @baa 0x00b4fcc0
int sub_00b4fcc0(void)
{
  if (g_026b52e8 == 0) {
    g_026b52e8 = sub_007c7d30(L"Engine");
    sub_007a2220();
  }
  return g_026b52e8;
}

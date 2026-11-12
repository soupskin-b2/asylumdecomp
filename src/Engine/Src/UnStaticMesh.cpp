// UnStaticMesh.cpp (part 1 of 2): 64 functions
// Placed here by: neighbours 45, callers 7, file 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_005eae70(...);
int sub_00946350(void);
int sub_0097fae0(...);
extern undefined4 g_026b5f14;
// @baa 0x007896e0
void sub_007896e0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026b5f14 == 0) {
    g_026b5f14 = sub_0097fae0(L"Engine");
    sub_00946350();
  }
  sub_005eae70(g_026b5f14,param_1,param_2,param_3,param_4,param_5,1);
  return;
}

struct C { void sub_00946d20(int a0); };

// @baa 0x00946d20
void C::sub_00946d20(int a0) { *(int*)((char*)this + 28) = 0; }

// @baa 0x00946da0
void UUnrealEdEngine::sub_00946da0(int param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  return;
}

struct C_00946e30 { void sub_00946e30(int a0); };

// @baa 0x00946e30
void C_00946e30::sub_00946e30(int a0) { *(int*)((char*)this + 24) = 0; }

int sub_0056bf90(void);
extern undefined * g_01f86cbc;
// @baa 0x00946e40
undefined4 * UTexture2D::sub_00946e40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0056bf90();
  *param_1 = (undefined4)(&g_01f86cbc);
  return param_1;
}

int sub_0053dfa0(...);
int sub_00581450(void);
// @baa 0x00946e60
undefined4 UTexture2D::sub_00946e60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00581450();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01f8145c[];
// @baa 0x00946eb0
int sub_00946eb0(void) { return (int)g_01f8145c; }

struct C_0094aee0 { int a, b, c; C_0094aee0(); };

// @baa 0x0094aee0
C_0094aee0::C_0094aee0() : a(0), b(0), c(0) {}

struct C_0094af70 { int a, b, c; C_0094af70(); };

// @baa 0x0094af70
C_0094af70::C_0094af70() : a(0), b(0), c(0) {}

struct C_0094aff0 { int a, b, c; C_0094aff0(); };

// @baa 0x0094aff0
C_0094aff0::C_0094aff0() : a(0), b(0), c(0) {}

typedef uint size_t;

struct C_0094db10 {
    int sub_0094db10(int);
    int sub_007d99c0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x0094db10
int C_0094db10::sub_0094db10(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0094db10 *)(this))->sub_007d99c0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

int sub_0094d0f0(void);
// @baa 0x00955990
undefined4 ULensFlare::sub_00955990(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0094d0f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0094d180(void);
// @baa 0x00955aa0
undefined4 ULensFlare::sub_00955aa0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0094d180();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct S {
    void sub_009570d0();
    void sub_005c1a90();
    void sub_00957190();
};

// @baa 0x00957190
void S::sub_00957190() {
    sub_009570d0();
    sub_005c1a90();
}

struct S_009571a0 {
    void sub_006e4b10();
    void sub_009570d0();
    void sub_009571a0();
};

// @baa 0x009571a0
void S_009571a0::sub_009571a0() {
    sub_006e4b10();
    sub_009570d0();
}

// @baa 0x0096ad40
int sub_0096ad40(void) { return 16; }

struct C_0096ad50 {
    int sub_0096ad50();
};

// @baa 0x0096ad50
int C_0096ad50::sub_0096ad50(void)
{
    int param_1 = (int)this;

  if (param_1 != 0) {
    return param_1 + 4;
  }
  return 0;
}

struct C_0096add0 { int sub_0096add0(void); };

// @baa 0x0096add0
int C_0096add0::sub_0096add0(void) { return *(int*)((char*)this + 0); }

struct S_0096ae00 {
    INT Unk00;
    INT Unk04;
    S_0096ae00 *sub_0096ae00();
};

// @baa 0x0096ae00
S_0096ae00 *S_0096ae00::sub_0096ae00()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_0096af70 { char pad[8]; TArray<int> A; int* sub_0096af70(); };

// @baa 0x0096af70
int* C_0096af70::sub_0096af70() { return &A(0); }

// @baa 0x0096b330
int sub_0096b330(void) { return 20; }

struct C_0096b340 {
    int sub_0096b340();
};

// @baa 0x0096b340
int C_0096b340::sub_0096b340(void)
{
    int param_1 = (int)this;

  if (param_1 != 0) {
    return param_1 + 4;
  }
  return 0;
}

struct C_0096b3c0 { int sub_0096b3c0(void); };

// @baa 0x0096b3c0
int C_0096b3c0::sub_0096b3c0(void) { return *(int*)((char*)this + 0); }

struct C_0096b580 { char pad[8]; TArray<int> A; int* sub_0096b580(); };

// @baa 0x0096b580
int* C_0096b580::sub_0096b580() { return &A(0); }

// @baa 0x0096b940
int sub_0096b940(void) { return 24; }

struct C_0096b950 {
    int sub_0096b950();
};

// @baa 0x0096b950
int C_0096b950::sub_0096b950(void)
{
    int param_1 = (int)this;

  if (param_1 != 0) {
    return param_1 + 4;
  }
  return 0;
}

struct C_0096b9e0 { int sub_0096b9e0(void); };

// @baa 0x0096b9e0
int C_0096b9e0::sub_0096b9e0(void) { return *(int*)((char*)this + 0); }

struct C_0096bbb0 { char pad[8]; TArray<int> A; int* sub_0096bbb0(); };

// @baa 0x0096bbb0
int* C_0096bbb0::sub_0096bbb0() { return &A(0); }

// @baa 0x0096bf80
int sub_0096bf80(void) { return 28; }

struct C_0096bf90 {
    int sub_0096bf90();
};

// @baa 0x0096bf90
int C_0096bf90::sub_0096bf90(void)
{
    int param_1 = (int)this;

  if (param_1 != 0) {
    return param_1 + 4;
  }
  return 0;
}

struct C_0096c020 { int sub_0096c020(void); };

// @baa 0x0096c020
int C_0096c020::sub_0096c020(void) { return *(int*)((char*)this + 0); }

struct C_0096c200 { char pad[8]; TArray<int> A; int* sub_0096c200(); };

// @baa 0x0096c200
int* C_0096c200::sub_0096c200() { return &A(0); }

// @baa 0x0096c5f0
int sub_0096c5f0(void) { return 20; }

struct C_0096c600 {
    int sub_0096c600();
};

// @baa 0x0096c600
int C_0096c600::sub_0096c600(void)
{
    int param_1 = (int)this;

  if (param_1 != 0) {
    return param_1 + 4;
  }
  return 0;
}

struct C_0096c680 { int sub_0096c680(void); };

// @baa 0x0096c680
int C_0096c680::sub_0096c680(void) { return *(int*)((char*)this + 0); }

struct S_0096c760 {
    INT Unk00;
    INT Unk04;
    S_0096c760 *sub_0096c760();
};

// @baa 0x0096c760
S_0096c760 *S_0096c760::sub_0096c760()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_0096c820 { char pad[8]; TArray<int> A; int* sub_0096c820(); };

// @baa 0x0096c820
int* C_0096c820::sub_0096c820() { return &A(0); }

// @baa 0x0096cbd0
int sub_0096cbd0(void) { return 28; }

struct C_0096cbe0 {
    int sub_0096cbe0();
};

// @baa 0x0096cbe0
int C_0096cbe0::sub_0096cbe0(void)
{
    int param_1 = (int)this;

  if (param_1 != 0) {
    return param_1 + 4;
  }
  return 0;
}

struct C_0096cc70 { int sub_0096cc70(void); };

// @baa 0x0096cc70
int C_0096cc70::sub_0096cc70(void) { return *(int*)((char*)this + 0); }

struct S_0096cd70 {
    INT Unk00;
    INT Unk04;
    S_0096cd70 *sub_0096cd70();
};

// @baa 0x0096cd70
S_0096cd70 *S_0096cd70::sub_0096cd70()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_0096ce30 { char pad[8]; TArray<int> A; int* sub_0096ce30(); };

// @baa 0x0096ce30
int* C_0096ce30::sub_0096ce30() { return &A(0); }

// @baa 0x0096d200
int sub_0096d200(void) { return 36; }

struct C_0096d210 {
    int sub_0096d210();
};

// @baa 0x0096d210
int C_0096d210::sub_0096d210(void)
{
    int param_1 = (int)this;

  if (param_1 != 0) {
    return param_1 + 4;
  }
  return 0;
}

struct C_0096d290 { int sub_0096d290(void); };

// @baa 0x0096d290
int C_0096d290::sub_0096d290(void) { return *(int*)((char*)this + 0); }

struct S_0096d380 {
    INT Unk00;
    INT Unk04;
    S_0096d380 *sub_0096d380();
};

// @baa 0x0096d380
S_0096d380 *S_0096d380::sub_0096d380()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_0096d440 { char pad[8]; TArray<int> A; int* sub_0096d440(); };

// @baa 0x0096d440
int* C_0096d440::sub_0096d440() { return &A(0); }

// @baa 0x0097d660
IMPLEMENT_CLASS_AT(ADynamicSMActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnStaticMesh.cpp", 13);

// @baa 0x0097d690
IMPLEMENT_CLASS_AT(AStaticMeshActorBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnStaticMesh.cpp", 10);

// @baa 0x0097d6c0
IMPLEMENT_CLASS_AT(AStaticMeshActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnStaticMesh.cpp", 11);

// @baa 0x0097d6f0
IMPLEMENT_CLASS_AT(AStaticMeshCollectionActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnStaticMesh.cpp", 12);

// @baa 0x0097d720
IMPLEMENT_CLASS_AT(AStaticMeshActorBasedOnExtremeContent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnStaticMesh.cpp", 15);

// @baa 0x0097e220
// @baa 0x0097e2e0
// @baa 0x0097e3a0
// @baa 0x0097e460
// @baa 0x0097e520
// @baa 0x0097fae0
IMPLEMENT_CLASS_AT(UStaticMesh, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnStaticMesh.cpp", 14);

// @baa 0x00946060

// @baa 0x00946170
int AStaticMeshActorBase::vf_000(void) { return 1; }

// @baa 0x00946180
bool AStaticMeshActorBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009461c0
int AStaticMeshActor::vf_000(void) { return 1; }

// @baa 0x009461f0

// @baa 0x00946300
int ADynamicSMActor::vf_000(void) { return 1; }

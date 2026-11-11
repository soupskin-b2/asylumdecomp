// Engine_0c80000.cpp: 131 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00c80740
void sub_00c80740(void)
{
  return;
}

// @baa 0x00c80750
void sub_00c80750(void) {  }

// @baa 0x00c80760
float10 sub_00c80760(double param_1)
{
  return (float10)param_1;
}

// @baa 0x00c80770
void sub_00c80770(void) {  }

struct C { int sub_00c807a0(void); };

// @baa 0x00c807a0
int C::sub_00c807a0(void) { return *(int*)((char*)this + 48); }

struct C_00c807b0 { int sub_00c807b0(void); };

// @baa 0x00c807b0
int C_00c807b0::sub_00c807b0(void) { return *(int*)((char*)this + 60); }

struct C_00c807c0 { int sub_00c807c0(void); };

// @baa 0x00c807c0
int C_00c807c0::sub_00c807c0(void) { return *(int*)((char*)this + 32); }

struct C_00c807d0 { char* sub_00c807d0(void); };

// @baa 0x00c807d0
char* C_00c807d0::sub_00c807d0(void) { return (char*)this + 68; }

// @baa 0x00c807e0
int sub_00c807e0(int a0, int a1) { return a1; }

// @baa 0x00c80810
IMPLEMENT_CLASS_AT(UClient, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnClient.cpp", 10);

// @baa 0x00c80880
int sub_00ab2f70(void);
int sub_00abc130(...);
extern undefined4 g_026bb698;
// @baa 0x00c808d0
int sub_00c808d0(void)
{
  if (g_026bb698 == 0) {
    g_026bb698 = sub_00abc130(L"Engine");
    sub_00ab2f70();
  }
  return g_026bb698;
}

int sub_006fc9d0(...);
int sub_006fca90(void);
extern undefined4 g_026b12b8;
// @baa 0x00c80a40
int sub_00c80a40(void)
{
  if (g_026b12b8 == 0) {
    g_026b12b8 = sub_006fc9d0(L"Engine");
    sub_006fca90();
  }
  return g_026b12b8;
}

int sub_006fd4e0(...);
int sub_006fd5a0(void);
extern undefined4 g_026b12d0;
// @baa 0x00c80a70
int sub_00c80a70(void)
{
  if (g_026b12d0 == 0) {
    g_026b12d0 = sub_006fd4e0(L"Engine");
    sub_006fd5a0();
  }
  return g_026b12d0;
}

int sub_006fd6f0(...);
int sub_006fd7b0(void);
extern undefined4 g_026b12d4;
// @baa 0x00c80aa0
int sub_00c80aa0(void)
{
  if (g_026b12d4 == 0) {
    g_026b12d4 = sub_006fd6f0(L"Engine");
    sub_006fd7b0();
  }
  return g_026b12d4;
}

extern int g_026888a0;
extern void* g_026889a4;
extern int g_026667e8;
struct FFrame {
  void*    Vtbl;    // 0x00
  int      Unk04;   // 0x04
  int      Unk08;   // 0x08
  int      Unk0c;   // 0x0c
  int      Unk10;   // 0x10
  UObject* Object;  // 0x14
  BYTE*    Code;    // 0x18
};

struct SNative {
  void Step(FFrame& Stack, void* Result);
};

typedef void (SNative::*FNative)(FFrame&, void*);

#define STEP(dest) \
  { \
    int OpCode = *Stack.Code++; \
    FNative Func = *(FNative*)((int*)&g_026888a0 + OpCode); \
    (((SNative*)Stack.Object)->*Func)(Stack, &(dest)); \
  }
struct CExec {
  void* sub_007ac800(void*, float*, float*, FVector, FVector, float);
  void execPickTarget(FFrame& Stack, void* Result);
};

// @baa 0x00c84960
void CExec::execPickTarget(FFrame& Stack, void* Result)
{
  UObject* P1 = NULL;
  STEP(P1);

  g_026667e8 = 0;
  FLOAT T2 = 0.0f;
  STEP(T2);
  FLOAT* P2;
  if (g_026667e8 == 0) P2 = &T2; else P2 = (FLOAT*)g_026667e8;

  g_026667e8 = 0;
  FLOAT T3 = 0.0f;
  STEP(T3);
  FLOAT* P3 = g_026667e8 ? (FLOAT*)g_026667e8 : &T3;

  FVector V4;
  STEP(V4);

  FVector V5;
  STEP(V5);

  FLOAT F6 = 0.0f;
  STEP(F6);

  Stack.Code++;
  if (*Stack.Code == 0x41)
  {
    Stack.Code++;
    FNative Func = *(FNative*)&g_026889a4;
    (((SNative*)Stack.Object)->*Func)(Stack, NULL);
  }

  *(void**)Result = sub_007ac800(P1, P2, P3, V4, V5, F6);
}

struct C_00c85200 {
    undefined4 sub_00c85200();
};

// @baa 0x00c85200
undefined4 C_00c85200::sub_00c85200(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

int sub_00d679e0(void);
int sub_00d8af90(...);
extern undefined4 g_026c5978;
// @baa 0x00c86a20
int sub_00c86a20(void)
{
  if (g_026c5978 == 0) {
    g_026c5978 = sub_00d8af90(L"Engine");
    sub_00d679e0();
  }
  return g_026c5978;
}

struct C_00c86a50 { int a, b; C_00c86a50(const C_00c86a50 &); };

// @baa 0x00c86a50
C_00c86a50::C_00c86a50(const C_00c86a50 &o) : a(o.a), b(o.b) {}

int sub_00d8aed0(...);
int sub_00d8c130(void);
extern undefined4 g_026c5970;
// @baa 0x00c86ba0
int sub_00c86ba0(void)
{
  if (g_026c5970 == 0) {
    g_026c5970 = sub_00d8aed0(L"Engine");
    sub_00d8c130();
  }
  return g_026c5970;
}

int sub_00d8ae10(...);
int sub_00d8bfe0(void);
extern undefined4 g_026c596c;
// @baa 0x00c86bd0
int sub_00c86bd0(void)
{
  if (g_026c596c == 0) {
    g_026c596c = sub_00d8ae10(L"Engine");
    sub_00d8bfe0();
  }
  return g_026c596c;
}

int sub_0077fda0(...);
int sub_00782b50(void);
extern undefined4 g_026b3c24;
// @baa 0x00c87810
int sub_00c87810(void)
{
  if (g_026b3c24 == 0) {
    g_026b3c24 = sub_0077fda0(L"Engine");
    sub_00782b50();
  }
  return g_026b3c24;
}

// @baa 0x00c87840
int sub_00c87840(int a0, int a1) { return a1; }

int sub_0077a930(...);
int sub_0077db80(void);
extern undefined4 g_026b3c14;
// @baa 0x00c878b0
int sub_00c878b0(void)
{
  if (g_026b3c14 == 0) {
    g_026b3c14 = sub_0077a930(L"Engine");
    sub_0077db80();
  }
  return g_026b3c14;
}

int sub_0077bd70(...);
int sub_0077df70(void);
extern undefined4 g_026b3ca4;
// @baa 0x00c87bb0
int sub_00c87bb0(void)
{
  if (g_026b3ca4 == 0) {
    g_026b3ca4 = sub_0077bd70(L"Engine");
    sub_0077df70();
  }
  return g_026b3ca4;
}

int sub_0077a4b0(...);
int sub_0077d8e0(void);
extern undefined4 g_026b3bf8;
// @baa 0x00c87db0
int sub_00c87db0(void)
{
  if (g_026b3bf8 == 0) {
    g_026b3bf8 = sub_0077a4b0(L"Engine");
    sub_0077d8e0();
  }
  return g_026b3bf8;
}

int sub_0076fd80(...);
int sub_00771c10(void);
extern undefined4 g_026b3bc8;
// @baa 0x00c87e90
int sub_00c87e90(void)
{
  if (g_026b3bc8 == 0) {
    g_026b3bc8 = sub_0076fd80(L"Engine");
    sub_00771c10();
  }
  return g_026b3bc8;
}

int sub_0076fcc0(...);
int sub_00777090(void);
extern undefined4 g_026b3bc4;
// @baa 0x00c87ec0
int sub_00c87ec0(void)
{
  if (g_026b3bc4 == 0) {
    g_026b3bc4 = sub_0076fcc0(L"Engine");
    sub_00777090();
  }
  return g_026b3bc4;
}

int sub_0076fc00(...);
int sub_00776f40(void);
extern undefined4 g_026b3bc0;
// @baa 0x00c87ef0
int sub_00c87ef0(void)
{
  if (g_026b3bc0 == 0) {
    g_026b3bc0 = sub_0076fc00(L"Engine");
    sub_00776f40();
  }
  return g_026b3bc0;
}

int sub_0077b9b0(...);
int sub_00780790(void);
extern undefined4 g_026b3c88;
// @baa 0x00c88ec0
int sub_00c88ec0(void)
{
  if (g_026b3c88 == 0) {
    g_026b3c88 = sub_0077b9b0(L"Engine");
    sub_00780790();
  }
  return g_026b3c88;
}

int sub_0077b5f0(...);
int sub_007803a0(void);
extern undefined4 g_026b3c68;
// @baa 0x00c88ef0
int sub_00c88ef0(void)
{
  if (g_026b3c68 == 0) {
    g_026b3c68 = sub_0077b5f0(L"Engine");
    sub_007803a0();
  }
  return g_026b3c68;
}

int sub_00694450(...);
int sub_00697690(void);
extern undefined4 g_026aee94;
// @baa 0x00c890a0
int sub_00c890a0(void)
{
  if (g_026aee94 == 0) {
    g_026aee94 = sub_00694450(L"Engine");
    sub_00697690();
  }
  return g_026aee94;
}

int sub_00779a30(...);
int sub_0077cfb0(void);
extern undefined4 g_026b3b8c;
// @baa 0x00c8a610
int sub_00c8a610(void)
{
  if (g_026b3b8c == 0) {
    g_026b3b8c = sub_00779a30(L"Engine");
    sub_0077cfb0();
  }
  return g_026b3b8c;
}

int sub_006aca20(void);
int sub_006b44d0(...);
extern undefined4 g_026b0dd0;
// @baa 0x00c8b5c0
int sub_00c8b5c0(void)
{
  if (g_026b0dd0 == 0) {
    g_026b0dd0 = sub_006b44d0(L"Engine");
    sub_006aca20();
  }
  return g_026b0dd0;
}

int sub_0075e6c0(...);
int sub_00764ca0(void);
extern undefined4 g_026b3cd0;
// @baa 0x00c8b870
int sub_00c8b870(void)
{
  if (g_026b3cd0 == 0) {
    g_026b3cd0 = sub_0075e6c0(L"Engine");
    sub_00764ca0();
  }
  return g_026b3cd0;
}

int sub_008e0650(...);
int sub_008eede0(void);
extern undefined4 g_026b5aac;
// @baa 0x00c8b8a0
int sub_00c8b8a0(void)
{
  if (g_026b5aac == 0) {
    g_026b5aac = sub_008e0650(L"Engine");
    sub_008eede0();
  }
  return g_026b5aac;
}

int sub_008e0710(...);
int sub_008eef30(void);
extern undefined4 g_026b5ab0;
// @baa 0x00c8b8d0
int sub_00c8b8d0(void)
{
  if (g_026b5ab0 == 0) {
    g_026b5ab0 = sub_008e0710(L"Engine");
    sub_008eef30();
  }
  return g_026b5ab0;
}

int sub_009464b0(void);
int sub_0097e520(...);
extern undefined4 g_026b5f18;
// @baa 0x00c8bad0
int sub_00c8bad0(void)
{
  if (g_026b5f18 == 0) {
    g_026b5f18 = sub_0097e520(L"Engine");
    sub_009464b0();
  }
  return g_026b5f18;
}

int sub_00c662a0(...);
int sub_00c66360(void);
extern undefined4 g_026c2b24;
// @baa 0x00c8bb00
int sub_00c8bb00(void)
{
  if (g_026c2b24 == 0) {
    g_026c2b24 = sub_00c662a0(L"Engine");
    sub_00c66360();
  }
  return g_026c2b24;
}

int sub_00c5b310(...);
int sub_00c669f0(void);
extern undefined4 g_026c2b38;
// @baa 0x00c8bb30
int sub_00c8bb30(void)
{
  if (g_026c2b38 == 0) {
    g_026c2b38 = sub_00c5b310(L"Engine");
    sub_00c669f0();
  }
  return g_026c2b38;
}

int sub_00c5b3d0(...);
int sub_00c66b40(void);
extern undefined4 g_026c2b3c;
// @baa 0x00c8bb60
int sub_00c8bb60(void)
{
  if (g_026c2b3c == 0) {
    g_026c2b3c = sub_00c5b3d0(L"Engine");
    sub_00c66b40();
  }
  return g_026c2b3c;
}

int sub_00c5b490(...);
int sub_00c66c90(void);
extern undefined4 g_026c2b40;
// @baa 0x00c8bb90
int sub_00c8bb90(void)
{
  if (g_026c2b40 == 0) {
    g_026c2b40 = sub_00c5b490(L"Engine");
    sub_00c66c90();
  }
  return g_026c2b40;
}

int sub_00c5b6d0(...);
int sub_00c67080(void);
extern undefined4 g_026c2b4c;
// @baa 0x00c8bbc0
int sub_00c8bbc0(void)
{
  if (g_026c2b4c == 0) {
    g_026c2b4c = sub_00c5b6d0(L"Engine");
    sub_00c67080();
  }
  return g_026c2b4c;
}

int sub_00c5b610(...);
int sub_00c66f30(void);
extern undefined4 g_026c2b48;
// @baa 0x00c8bbf0
int sub_00c8bbf0(void)
{
  if (g_026c2b48 == 0) {
    g_026c2b48 = sub_00c5b610(L"Engine");
    sub_00c66f30();
  }
  return g_026c2b48;
}

int sub_00c5ae90(...);
int sub_00c6b400(void);
extern undefined4 g_026c2b1c;
// @baa 0x00c8bc20
int sub_00c8bc20(void)
{
  if (g_026c2b1c == 0) {
    g_026c2b1c = sub_00c5ae90(L"Engine");
    sub_00c6b400();
  }
  return g_026c2b1c;
}

int sub_00c5add0(...);
int sub_00c6b2b0(void);
extern undefined4 g_026c2b18;
// @baa 0x00c8bc50
int sub_00c8bc50(void)
{
  if (g_026c2b18 == 0) {
    g_026c2b18 = sub_00c5add0(L"Engine");
    sub_00c6b2b0();
  }
  return g_026c2b18;
}

int sub_00c5af50(...);
int sub_00c66150(void);
extern undefined4 g_026c2b20;
// @baa 0x00c8bc80
int sub_00c8bc80(void)
{
  if (g_026c2b20 == 0) {
    g_026c2b20 = sub_00c5af50(L"Engine");
    sub_00c66150();
  }
  return g_026c2b20;
}

int sub_00c5a950(...);
int sub_00c65820(void);
extern undefined4 g_026c2afc;
// @baa 0x00c8bcb0
int sub_00c8bcb0(void)
{
  if (g_026c2afc == 0) {
    g_026c2afc = sub_00c5a950(L"Engine");
    sub_00c65820();
  }
  return g_026c2afc;
}

int sub_00c5b790(...);
int sub_00c671d0(void);
extern undefined4 g_026c2b50;
// @baa 0x00c8bce0
int sub_00c8bce0(void)
{
  if (g_026c2b50 == 0) {
    g_026c2b50 = sub_00c5b790(L"Engine");
    sub_00c671d0();
  }
  return g_026c2b50;
}

int sub_00c5aa10(...);
int sub_00c65ac0(void);
extern undefined4 g_026c2b04;
// @baa 0x00c8bd10
int sub_00c8bd10(void)
{
  if (g_026c2b04 == 0) {
    g_026c2b04 = sub_00c5aa10(L"Engine");
    sub_00c65ac0();
  }
  return g_026c2b04;
}

int sub_00c5ac50(...);
int sub_00c65eb0(void);
extern undefined4 g_026c2b10;
// @baa 0x00c8bd40
int sub_00c8bd40(void)
{
  if (g_026c2b10 == 0) {
    g_026c2b10 = sub_00c5ac50(L"Engine");
    sub_00c65eb0();
  }
  return g_026c2b10;
}

int sub_00c5ad10(...);
int sub_00c66000(void);
extern undefined4 g_026c2b14;
// @baa 0x00c8bd70
int sub_00c8bd70(void)
{
  if (g_026c2b14 == 0) {
    g_026c2b14 = sub_00c5ad10(L"Engine");
    sub_00c66000();
  }
  return g_026c2b14;
}

int sub_00c5b190(...);
int sub_00c66750(void);
extern undefined4 g_026c2b30;
// @baa 0x00c8bda0
int sub_00c8bda0(void)
{
  if (g_026c2b30 == 0) {
    g_026c2b30 = sub_00c5b190(L"Engine");
    sub_00c66750();
  }
  return g_026c2b30;
}

int sub_00c5aad0(...);
int sub_00c65c10(void);
extern undefined4 g_026c2b08;
// @baa 0x00c8bdd0
int sub_00c8bdd0(void)
{
  if (g_026c2b08 == 0) {
    g_026c2b08 = sub_00c5aad0(L"Engine");
    sub_00c65c10();
  }
  return g_026c2b08;
}

int sub_00c5a890(...);
int sub_00c656d0(void);
extern undefined4 g_026c2af8;
// @baa 0x00c8be00
int sub_00c8be00(void)
{
  if (g_026c2af8 == 0) {
    g_026c2af8 = sub_00c5a890(L"Engine");
    sub_00c656d0();
  }
  return g_026c2af8;
}

int sub_00c65d60(void);
int sub_00c5ab90(...);
extern undefined4 g_026c2b0c;
// @baa 0x00c8be30
int sub_00c8be30(void)
{
  if (g_026c2b0c == 0) {
    g_026c2b0c = sub_00c5ab90(L"Engine");
    sub_00c65d60();
  }
  return g_026c2b0c;
}

int sub_00c5b010(...);
int sub_00c664b0(void);
extern undefined4 g_026c2b28;
// @baa 0x00c8be60
int sub_00c8be60(void)
{
  if (g_026c2b28 == 0) {
    g_026c2b28 = sub_00c5b010(L"Engine");
    sub_00c664b0();
  }
  return g_026c2b28;
}

int sub_007574e0(void);
int sub_0075d5d0(...);
extern undefined4 g_026b3c78;
// @baa 0x00c8be90
int sub_00c8be90(void)
{
  if (g_026b3c78 == 0) {
    g_026b3c78 = sub_0075d5d0(L"Engine");
    sub_007574e0();
  }
  return g_026b3c78;
}

int sub_007879c0(void);
int sub_0078a1c0(...);
extern undefined4 g_026b43c4;
// @baa 0x00c8bec0
int sub_00c8bec0(void)
{
  if (g_026b43c4 == 0) {
    g_026b43c4 = sub_0078a1c0(L"Engine");
    sub_007879c0();
  }
  return g_026b43c4;
}

int sub_00787b20(void);
int sub_0078a280(...);
extern undefined4 g_026b43c8;
// @baa 0x00c8c3a0
int sub_00c8c3a0(void)
{
  if (g_026b43c8 == 0) {
    g_026b43c8 = sub_0078a280(L"Engine");
    sub_00787b20();
  }
  return g_026b43c8;
}

int sub_00787c80(void);
int sub_0078a340(...);
extern undefined4 g_026b43cc;
// @baa 0x00c8c4f0
int sub_00c8c4f0(void)
{
  if (g_026b43cc == 0) {
    g_026b43cc = sub_0078a340(L"Engine");
    sub_00787c80();
  }
  return g_026b43cc;
}

int sub_0079fee0(void);
int sub_007ac450(...);
extern undefined4 g_026b52e0;
// @baa 0x00c8c520
int sub_00c8c520(void)
{
  if (g_026b52e0 == 0) {
    g_026b52e0 = sub_007ac450(L"Engine");
    sub_0079fee0();
  }
  return g_026b52e0;
}

int sub_00757640(void);
int sub_00769060(...);
extern undefined4 g_026b3c7c;
// @baa 0x00c8c550
int sub_00c8c550(void)
{
  if (g_026b3c7c == 0) {
    g_026b3c7c = sub_00769060(L"Engine");
    sub_00757640();
  }
  return g_026b3c7c;
}

// @baa 0x00c8c580
int sub_00c8c580(int a0, int a1) { return a1; }

// @baa 0x00c8c590
IMPLEMENT_CLASS_AT(UCodecMovie, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCodecs.cpp", 9);

// @baa 0x00c8c5f0
int UCodecMovie::vf_10c(void) { return 0; }

// @baa 0x00c8c600
UINT UCodecMovie::vf_110() { return 0; }

// @baa 0x00c8c610
UINT UCodecMovie::vf_114() { return 0; }

// @baa 0x00c8c620
FLOAT UCodecMovie::vf_11c() {
  return (float10)0;
}

// @baa 0x00c8c630
int UCodecMovie::vf_124(int a0, int a1, int a2) { return 0; }

// @baa 0x00c8c640
int UCodecMovie::vf_120(int a0, int a1) { return 0; }

// @baa 0x00c8c650
void UCodecMovie::vf_128(void) {  }

// @baa 0x00c8c660
void UCodecMovie::vf_12c(void) {  }

// @baa 0x00c8c670
void UCodecMovie::vf_130(int a0) {  }

// @baa 0x00c8c680
float UCodecMovie::vf_134(void) { return *(float*)((char*)this + 48); }

// @baa 0x00c8c690
void __stdcall sub_00c8c690(int a0, int a1) {  }

// @baa 0x00c8c6a0
void UCodecMovie::vf_13c(int a0) {  }

// @baa 0x00c8c6b0
void UCodecMovie::vf_140(void) {  }

// @baa 0x00c8c6c0
void UCodecMovie::vf_144(void) {  }

// @baa 0x00c8c6d0
int sub_005c7a20(void);
extern undefined * g_02085a70;
// @baa 0x00c8c6f0
undefined4 * UObject::sub_00c8c6f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02085a70);
  return param_1;
}

// @baa 0x00c8c710
int sub_00c8c710(int a0, int a1) { return a1; }

extern undefined * g_02085bb8;
// @baa 0x00c8c720
undefined4 * UObject::sub_00c8c720(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02085bb8);
  return param_1;
}

// @baa 0x00c8c740
IMPLEMENT_CLASS_AT(UCodecMovieFallback, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCodecs.cpp", 10);

// @baa 0x00c8c7a0
// @baa 0x00c8c7c0
undefined4 sub_00c8c7c0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

int sub_00768ee0(...);
int sub_0076cb40(void);
extern undefined4 g_026b3c38;
// @baa 0x00c8c7d0
int sub_00c8c7d0(void)
{
  if (g_026b3c38 == 0) {
    g_026b3c38 = sub_00768ee0(L"Engine");
    sub_0076cb40();
  }
  return g_026b3c38;
}

// @baa 0x00c8c800
int sub_00c8c800(int a0, int a1) { return a1; }

extern undefined * g_02085d00;
// @baa 0x00c8c810
undefined4 * UObject::sub_00c8c810(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02085d00);
  return param_1;
}

// @baa 0x00c8c830
IMPLEMENT_CLASS_AT(UDebugManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnEngine.cpp", 237);

// @baa 0x00c8c890
int sub_007579c0(void);
int sub_0075d750(...);
extern undefined4 g_026b3cb0;
// @baa 0x00c8c8b0
int sub_00c8c8b0(void)
{
  if (g_026b3cb0 == 0) {
    g_026b3cb0 = sub_0075d750(L"Engine");
    sub_007579c0();
  }
  return g_026b3cb0;
}

int sub_00757360(void);
int sub_00768fa0(...);
extern undefined4 g_026b3c6c;
// @baa 0x00c8c8e0
int sub_00c8c8e0(void)
{
  if (g_026b3c6c == 0) {
    g_026b3c6c = sub_00768fa0(L"Engine");
    sub_00757360();
  }
  return g_026b3c6c;
}

int sub_00ce8c00(void);
int sub_00cff3b0(...);
extern undefined4 g_026c5644;
// @baa 0x00c8c9d0
int sub_00c8c9d0(void)
{
  if (g_026c5644 == 0) {
    g_026c5644 = sub_00cff3b0(L"Engine");
    sub_00ce8c00();
  }
  return g_026c5644;
}

int sub_00ce8aa0(void);
int sub_00d194e0(...);
extern undefined4 g_026c5640;
// @baa 0x00c8cb90
int sub_00c8cb90(void)
{
  if (g_026c5640 == 0) {
    g_026c5640 = sub_00d194e0(L"Engine");
    sub_00ce8aa0();
  }
  return g_026c5640;
}

int sub_00d19740(...);
int sub_00d19800(void);
extern undefined4 g_026c5648;
// @baa 0x00c8cc30
int sub_00c8cc30(void)
{
  if (g_026c5648 == 0) {
    g_026c5648 = sub_00d19740(L"Engine");
    sub_00d19800();
  }
  return g_026c5648;
}

int sub_007a4b50(void);
int sub_007b0f90(...);
extern undefined4 g_026b5318;
// @baa 0x00c8cc60
int sub_00c8cc60(void)
{
  if (g_026b5318 == 0) {
    g_026b5318 = sub_007b0f90(L"Engine");
    sub_007a4b50();
  }
  return g_026b5318;
}

int sub_00c4a210(void);
int sub_00c78f00(...);
extern undefined4 g_026c2af0;
// @baa 0x00c8ce10
int sub_00c8ce10(void)
{
  if (g_026c2af0 == 0) {
    g_026c2af0 = sub_00c78f00(L"Engine");
    sub_00c4a210();
  }
  return g_026c2af0;
}

int sub_00da83a0(void);
int sub_00dacb80(...);
extern undefined4 g_026c5ce8;
// @baa 0x00c8ce40
int sub_00c8ce40(void)
{
  if (g_026c5ce8 == 0) {
    g_026c5ce8 = sub_00dacb80(L"Engine");
    sub_00da83a0();
  }
  return g_026c5ce8;
}

int sub_00d1f770(void);
int sub_00d3ae30(...);
extern undefined4 g_026c57b0;
// @baa 0x00c8cfa0
int sub_00c8cfa0(void)
{
  if (g_026c57b0 == 0) {
    g_026c57b0 = sub_00d3ae30(L"Engine");
    sub_00d1f770();
  }
  return g_026c57b0;
}

int sub_00d3c740(void);
int sub_00d41cf0(...);
extern undefined4 g_026c57b4;
// @baa 0x00c8d3c0
int sub_00c8d3c0(void)
{
  if (g_026c57b4 == 0) {
    g_026c57b4 = sub_00d41cf0(L"Engine");
    sub_00d3c740();
  }
  return g_026c57b4;
}

int sub_00d3aef0(...);
int sub_00d3c890(void);
extern undefined4 g_026c57b8;
// @baa 0x00c8d8d0
int sub_00c8d8d0(void)
{
  if (g_026c57b8 == 0) {
    g_026c57b8 = sub_00d3aef0(L"Engine");
    sub_00d3c890();
  }
  return g_026c57b8;
}

int sub_00ce9070(void);
int sub_00d195a0(...);
extern undefined4 g_026c5650;
// @baa 0x00c8d900
int sub_00c8d900(void)
{
  if (g_026c5650 == 0) {
    g_026c5650 = sub_00d195a0(L"Engine");
    sub_00ce9070();
  }
  return g_026c5650;
}

int sub_00757810(void);
int sub_0075d690(...);
extern undefined4 g_026b3c9c;
// @baa 0x00c8d930
int sub_00c8d930(void)
{
  if (g_026b3c9c == 0) {
    g_026b3c9c = sub_0075d690(L"Engine");
    sub_00757810();
  }
  return g_026b3c9c;
}

// @baa 0x00c8d960
int sub_00c8d960(int a0, int a1) { return a1; }

int sub_00d677b0(void);
int sub_00d87370(...);
extern undefined4 g_026c5974;
// @baa 0x00c8d970
int sub_00c8d970(void)
{
  if (g_026c5974 == 0) {
    g_026c5974 = sub_00d87370(L"Engine");
    sub_00d677b0();
  }
  return g_026c5974;
}

int sub_00d672b0(void);
int sub_00d6e0d0(...);
extern undefined4 g_026c5960;
// @baa 0x00c8d9a0
int sub_00c8d9a0(void)
{
  if (g_026c5960 == 0) {
    g_026c5960 = sub_00d6e0d0(L"Engine");
    sub_00d672b0();
  }
  return g_026c5960;
}

struct M_00c8d9d0 { void sub_00d67c50(); };

struct C_00c8d9d0 { char pad[4]; M_00c8d9d0 m; void sub_00c8d9d0(); };

// @baa 0x00c8d9d0
void C_00c8d9d0::sub_00c8d9d0() { m.sub_00d67c50(); }

int sub_00d67420(void);
int sub_00d8ac90(...);
extern undefined4 g_026c5964;
// @baa 0x00c8e8b0
int sub_00c8e8b0(void)
{
  if (g_026c5964 == 0) {
    g_026c5964 = sub_00d8ac90(L"Engine");
    sub_00d67420();
  }
  return g_026c5964;
}

int sub_00756d90(void);
int sub_0075d510(...);
extern undefined4 g_026b3bfc;
// @baa 0x00c8ed90
int sub_00c8ed90(void)
{
  if (g_026b3bfc == 0) {
    g_026b3bfc = sub_0075d510(L"Engine");
    sub_00756d90();
  }
  return g_026b3bfc;
}

// @baa 0x00c8edc0
int sub_00c8edc0(int a0, int a1) { return a1; }

int sub_00944330(void);
int sub_0094b940(...);
extern undefined4 g_026b5ef4;
// @baa 0x00c8edd0
int sub_00c8edd0(void)
{
  if (g_026b5ef4 == 0) {
    g_026b5ef4 = sub_0094b940(L"Engine");
    sub_00944330();
  }
  return g_026b5ef4;
}

struct C_00c8ee30 { C_00c8ee30* sub_00c8ee30(void); };

// @baa 0x00c8ee30
C_00c8ee30* C_00c8ee30::sub_00c8ee30(void) { return this; }

// @baa 0x00c8ef90
int sub_00c8ef90(int a0, int a1) { return a1; }

int sub_00c1b5a0(void);
int sub_00c46f60(...);
extern undefined4 g_026c0960;
// @baa 0x00c8efa0
int sub_00c8efa0(void)
{
  if (g_026c0960 == 0) {
    g_026c0960 = sub_00c46f60(L"Engine");
    sub_00c1b5a0();
  }
  return g_026c0960;
}

int sub_0072b0e0(void);
int sub_0072fc30(...);
extern undefined4 g_026b2260;
// @baa 0x00c8f5f0
int sub_00c8f5f0(void)
{
  if (g_026b2260 == 0) {
    g_026b2260 = sub_0072fc30(L"Engine");
    sub_0072b0e0();
  }
  return g_026b2260;
}

int sub_007683e0(...);
int sub_0076ee00(void);
extern undefined4 g_026b3b48;
// @baa 0x00c8f7e0
int sub_00c8f7e0(void)
{
  if (g_026b3b48 == 0) {
    g_026b3b48 = sub_007683e0(L"Engine");
    sub_0076ee00();
  }
  return g_026b3b48;
}

int sub_0090d9b0(void);
int sub_009135e0(...);
extern undefined4 g_026b5dd4;
// @baa 0x00c8f810
int sub_00c8f810(void)
{
  if (g_026b5dd4 == 0) {
    g_026b5dd4 = sub_009135e0(L"Engine");
    sub_0090d9b0();
  }
  return g_026b5dd4;
}

// @baa 0x00c8f840
int sub_00c8f840(int a0, int a1) { return a1; }

extern char g_01e3f3e0[];
// @baa 0x00c8f850
int sub_00c8f850(void) { return (int)g_01e3f3e0; }

// @baa 0x00c8f960
int sub_00c8f960(int a0, int a1) { return a1; }

int sub_00834290(void);
int sub_00857910(...);
extern undefined4 g_026b55c0;
// @baa 0x00c8f9e0
int sub_00c8f9e0(void)
{
  if (g_026b55c0 == 0) {
    g_026b55c0 = sub_00857910(L"Engine");
    sub_00834290();
  }
  return g_026b55c0;
}

int sub_00bed180(void);
int sub_00bee370(...);
extern undefined4 g_026c0590;
// @baa 0x00c8fa10
int sub_00c8fa10(void)
{
  if (g_026c0590 == 0) {
    g_026c0590 = sub_00bee370(L"Engine");
    sub_00bed180();
  }
  return g_026c0590;
}

int sub_00becf90(void);
int sub_00bee2b0(...);
extern undefined4 g_026c058c;
// @baa 0x00c8fa40
int sub_00c8fa40(void)
{
  if (g_026c058c == 0) {
    g_026c058c = sub_00bee2b0(L"Engine");
    sub_00becf90();
  }
  return g_026c058c;
}

int sub_00785ca0(void);
int sub_007974c0(...);
extern undefined4 g_026b43a0;
// @baa 0x00c8fa70
int sub_00c8fa70(void)
{
  if (g_026b43a0 == 0) {
    g_026b43a0 = sub_007974c0(L"Engine");
    sub_00785ca0();
  }
  return g_026b43a0;
}

int sub_00baca30(void);
int sub_00bd2190(...);
extern undefined4 g_026bf8b4;
// @baa 0x00c8fc60
int sub_00c8fc60(void)
{
  if (g_026bf8b4 == 0) {
    g_026bf8b4 = sub_00bd2190(L"Engine");
    sub_00baca30();
  }
  return g_026bf8b4;
}

int sub_00bec990(void);
int sub_00bee0e0(...);
extern undefined4 g_026c0560;
// @baa 0x00c8fc90
int sub_00c8fc90(void)
{
  if (g_026c0560 == 0) {
    g_026c0560 = sub_00bee0e0(L"Engine");
    sub_00bec990();
  }
  return g_026c0560;
}

struct C_00c8fcc0 { C_00c8fcc0* sub_00c8fcc0(int a0); };

// @baa 0x00c8fcc0
C_00c8fcc0* C_00c8fcc0::sub_00c8fcc0(int a0) { return this; }

// @baa 0x00c8fd50
int sub_00c8fd50(int a0, int a1) { return a1; }

// @baa 0x00c8fd60
int sub_00c8fd60(int a0, int a1) { return a1; }

int sub_0097d970(...);
int sub_0097ea40(void);
extern undefined4 g_026b5f00;
// @baa 0x00c8fd70
int sub_00c8fd70(void)
{
  if (g_026b5f00 == 0) {
    g_026b5f00 = sub_0097d970(L"Engine");
    sub_0097ea40();
  }
  return g_026b5f00;
}

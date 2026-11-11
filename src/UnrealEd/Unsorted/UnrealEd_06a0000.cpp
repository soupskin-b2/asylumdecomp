// UnrealEd_06a0000.cpp (part 1 of 2): 73 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_006a8d20 { int a, b; C_006a8d20(int, int); };

// @baa 0x006a8d20
C_006a8d20::C_006a8d20(int x, int y) : a(x), b(y) {}

// @baa 0x006a8e00
undefined4 sub_006a8e00(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

struct C {
    bool sub_006a8e40();
};

// @baa 0x006a8e40
bool C::sub_006a8e40(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x150) != 0;
}

struct C_006a8e50 {
    bool sub_006a8e50();
};

// @baa 0x006a8e50
bool C_006a8e50::sub_006a8e50(void)
{
    int param_1 = (int)this;

  return 0 < *(int *)(param_1 + 0x150);
}

struct C_006a8e60 {
    bool sub_006a8e60();
};

// @baa 0x006a8e60
bool C_006a8e60::sub_006a8e60(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x150) < 0;
}

struct C_006a8e70 {
    int sub_006a8e70();
};

// @baa 0x006a8e70
int C_006a8e70::sub_006a8e70(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x150);
  if (0 < iVar1) {
    return iVar1 + -1;
  }
  return -1 - iVar1;
}

struct C_006a8e90 {
    void sub_006a8e90(int);
};

// @baa 0x006a8e90
void C_006a8e90::sub_006a8e90(int param_2)
{
    int param_1 = (int)this;
  *(int *)(param_1 + 0x150) = param_2 + 1;
  return;
}

struct C_006a8ea0 {
    void sub_006a8ea0(int);
};

// @baa 0x006a8ea0
void C_006a8ea0::sub_006a8ea0(int param_2)
{
    int param_1 = (int)this;
  *(int *)(param_1 + 0x150) = -1 - param_2;
  return;
}

struct C_006a8eb0 {
    void sub_006a8eb0();
};

// @baa 0x006a8eb0
void C_006a8eb0::sub_006a8eb0(void)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x150) = 0;
  return;
}

int sub_006fc5b0(...);
int sub_006fc670(void);
extern undefined4 g_026b12ac;
// @baa 0x006a8ec0
int sub_006a8ec0(void)
{
  if (g_026b12ac == 0) {
    g_026b12ac = sub_006fc5b0(L"Engine");
    sub_006fc670();
  }
  return g_026b12ac;
}

int sub_006fcbe0(...);
int sub_006fcca0(void);
extern undefined4 g_026b12bc;
// @baa 0x006a8ef0
int sub_006a8ef0(void)
{
  if (g_026b12bc == 0) {
    g_026b12bc = sub_006fcbe0(L"Engine");
    sub_006fcca0();
  }
  return g_026b12bc;
}

// @baa 0x006a8f20
int sub_006a8f20(int a0, int a1) { return a1; }

// @baa 0x006a8f30
int sub_006a8f30(int a0, int a1) { return a1; }

struct C_006a8f40 { int a, b; C_006a8f40(int, int); };

// @baa 0x006a8f40
C_006a8f40::C_006a8f40(int x, int y) : a(x), b(y) {}

struct C_006a8f60 {
    undefined4 sub_006a8f60();
};

// @baa 0x006a8f60
undefined4 C_006a8f60::sub_006a8f60(void)
{
    int param_1 = (int)this;

  if (((*(uint *)(param_1 + 0x30) & 8) == 0) &&
     (((*(uint *)(param_1 + 0x30) & 0x20) == 0 || ((*(uint *)(param_1 + 0x34) & 0x200000) != 0)))) {
    return 0;
  }
  return 1;
}

int sub_00779130(...);
int sub_0077ce60(void);
extern undefined4 g_026b3b5c;
// @baa 0x006a8f80
int sub_006a8f80(void)
{
  if (g_026b3b5c == 0) {
    g_026b3b5c = sub_00779130(L"Engine");
    sub_0077ce60();
  }
  return g_026b3b5c;
}

// @baa 0x006a8fb0
int sub_006a8fb0(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_01ece0c8;
// @baa 0x006a8fc0
undefined4 * UObject::sub_006a8fc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ece0c8);
  return param_1;
}

// @baa 0x006a8fe0
IMPLEMENT_CLASS_AT(UHeightFogComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\HeightFogComponent.cpp", 8);

// @baa 0x006a9040
int sub_0064fec0(void);
int sub_00699b70(...);
extern undefined4 g_026aeec0;
// @baa 0x006a9060
int sub_006a9060(void)
{
  if (g_026aeec0 == 0) {
    g_026aeec0 = sub_00699b70(L"Engine");
    sub_0064fec0();
  }
  return g_026aeec0;
}

int sub_006da6e0(void);
int sub_007092b0(...);
extern undefined4 g_026b12a0;
// @baa 0x006a9090
int sub_006a9090(void)
{
  if (g_026b12a0 == 0) {
    g_026b12a0 = sub_007092b0(L"Engine");
    sub_006da6e0();
  }
  return g_026b12a0;
}

int sub_00716490(void);
int sub_0073e180(...);
extern undefined4 g_026b223c;
// @baa 0x006a90f0
int sub_006a90f0(void)
{
  if (g_026b223c == 0) {
    g_026b223c = sub_0073e180(L"Engine");
    sub_00716490();
  }
  return g_026b223c;
}

// @baa 0x006a9120
int sub_006a9120(int a0, int a1) { return a1; }

// @baa 0x006a9130
int sub_006a9130(int a0, int a1) { return a1; }

// @baa 0x006a9140
int sub_006a9140(int a0, int a1) { return a1; }

extern undefined * g_01ece218;
// @baa 0x006a9150
undefined4 * UObject::sub_006a9150(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ece218);
  return param_1;
}

// @baa 0x006a9170
IMPLEMENT_CLASS_AT(ULightFunction, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\LightComponent.cpp", 9);

// @baa 0x006a91d0
extern undefined * g_01ebbd08;
// @baa 0x006a91f0
undefined4 * UObject::sub_006a91f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ebbd08);
  return param_1;
}

int sub_006d8f70(void);
int sub_006ee740(...);
extern undefined4 g_026b1298;
// @baa 0x006a9210
int sub_006a9210(void)
{
  if (g_026b1298 == 0) {
    g_026b1298 = sub_006ee740(L"Engine");
    sub_006d8f70();
  }
  return g_026b1298;
}

// @baa 0x006a9240
int sub_006a9240(int a0, int a1) { return a1; }

int sub_0072a530(void);
int sub_00733250(...);
extern undefined4 g_026b2250;
// @baa 0x006a9250
int sub_006a9250(void)
{
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  return g_026b2250;
}

struct C_006a9280 {
    void * sub_006a9280();
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x006a9280
void * C_006a9280::sub_006a9280(void)
{
    void * param_1 = (void *)this;

  *(undefined4 *)((int)param_1 + 0x30) = 0;
  sub_01a37612(param_1,0,0x30);
  return param_1;
}

int sub_009b04f0(void);
int sub_009c7e30(...);
extern undefined4 g_026b62b4;
// @baa 0x006a92a0
int sub_006a92a0(void)
{
  if (g_026b62b4 == 0) {
    g_026b62b4 = sub_009c7e30(L"Engine");
    sub_009b04f0();
  }
  return g_026b62b4;
}

int sub_0090dfd0(void);
int sub_00939070(...);
extern undefined4 g_026b5ddc;
// @baa 0x006a92d0
int sub_006a92d0(void)
{
  if (g_026b5ddc == 0) {
    g_026b5ddc = sub_00939070(L"Engine");
    sub_0090dfd0();
  }
  return g_026b5ddc;
}

extern char g_01ece328[];
struct C_006a9300 { C_006a9300* sub_006a9300(void); };

// @baa 0x006a9300
C_006a9300* C_006a9300::sub_006a9300(void) { *(int*)((char*)this + 0) = (int)g_01ece328; return this; }

// @baa 0x006a9320
void __stdcall sub_006a9320(int a0, int a1) {  }

// @baa 0x006a93a0
void __stdcall sub_006a93a0(int a0, int a1, int a2) {  }

// @baa 0x006a93b0
int __stdcall sub_006a93b0(int a0, int a1, int a2) { return 2; }

// @baa 0x006a93c0
void sub_006a93c0(undefined4 * param_1, undefined4 param_2, undefined4 param_3)
{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// @baa 0x006a93e0
IMPLEMENT_CLASS_AT(UDrawFrustumComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\DrawFrustumComponent.cpp", 9);

// @baa 0x006a94f0
int UDrawFrustumComponent::vf_000(void) { return 1; }

// @baa 0x006a9500
bool UDrawFrustumComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_006afc50(INT Index);
};

// @baa 0x006afc50
DWORD* S::sub_006afc50(INT Index)
{
    return &Items(Index);
}

struct C_006afca0 { int sub_006afca0(void); };

// @baa 0x006afca0
int C_006afca0::sub_006afca0(void) { return *(int*)((char*)this + 0); }

struct C_006afcb0 { int sub_006afcb0(void); };

// @baa 0x006afcb0
int C_006afcb0::sub_006afcb0(void) { return *(int*)((char*)this + 0); }

struct C_006afcc0 { int sub_006afcc0(void); };

// @baa 0x006afcc0
int C_006afcc0::sub_006afcc0(void) { return *(int*)((char*)this + 0); }

struct C_006afcd0 { int sub_006afcd0(void); };

// @baa 0x006afcd0
int C_006afcd0::sub_006afcd0(void) { return *(int*)((char*)this + 0); }

struct C_006afce0 { int sub_006afce0(void); };

// @baa 0x006afce0
int C_006afce0::sub_006afce0(void) { return *(int*)((char*)this + 0); }

// @baa 0x006afcf0
int sub_006afcf0(int a0) { return *(int*)a0; }

// @baa 0x006afd00
undefined4 sub_006afd00(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_006afd40 {
    void sub_006afd40(int *);
};

// @baa 0x006afd40
void C_006afd40::sub_006afd40(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 8;
  return;
}

struct C_006afd50 { int sub_006afd50(void); };

// @baa 0x006afd50
int C_006afd50::sub_006afd50(void) { return *(int*)((char*)this + 0); }

struct C_006afd60 {
    int sub_006afd60(int);
};

// @baa 0x006afd60
int C_006afd60::sub_006afd60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_006afd70 { int sub_006afd70(void); };

// @baa 0x006afd70
int C_006afd70::sub_006afd70(void) { return *(int*)((char*)this + 0); }

struct C_006afd80 { int sub_006afd80(void); };

// @baa 0x006afd80
int C_006afd80::sub_006afd80(void) { return *(int*)((char*)this + 0); }

struct C_006afe30 { int sub_006afe30(void); };

// @baa 0x006afe30
int C_006afe30::sub_006afe30(void) { return *(int*)((char*)this + 0); }

struct C_006afe40 { char* sub_006afe40(void); };

// @baa 0x006afe40
char* C_006afe40::sub_006afe40(void) { return (char*)this + 16; }

struct C_006afe70 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_006afe70* sub_006afe70(INT value);
};

// @baa 0x006afe70
C_006afe70* C_006afe70::sub_006afe70(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_006afeb0 {
    int sub_006afeb0();
};

// @baa 0x006afeb0
int C_006afeb0::sub_006afeb0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_006afec0 { int a, b; C_006afec0(int, int); };

// @baa 0x006afec0
C_006afec0::C_006afec0(int x, int y) : a(x), b(y) {}

struct C_006afee0 {
    int sub_006afee0();
};

// @baa 0x006afee0
int C_006afee0::sub_006afee0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_006aff00 {
    void sub_006aff00();
};

int sub_0053dfa0(...);
// @baa 0x006aff00
void C_006aff00::sub_006aff00(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_0053dfa0(*param_1);
    *param_1 = 0;
  }
  return;
}

struct C_006aff30 { int sub_006aff30(void); };

// @baa 0x006aff30
int C_006aff30::sub_006aff30(void) { return *(int*)((char*)this + 0); }

struct C_006aff40 { int sub_006aff40(void); };

// @baa 0x006aff40
int C_006aff40::sub_006aff40(void) { return *(int*)((char*)this + 0); }

// @baa 0x006aff50
int sub_006aff50(int a0) { return *(int*)a0; }

void sub_005fa690();
// @baa 0x006aff60
void sub_006aff60(void) { sub_005fa690(); }

struct C_006aff90 {
    void sub_006aff90(int *);
};

// @baa 0x006aff90
void C_006aff90::sub_006aff90(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 4);
  return;
}

struct C_006affc0 { int sub_006affc0(void); };

// @baa 0x006affc0
int C_006affc0::sub_006affc0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_006affd0 { int sub_006affd0(void); };

// @baa 0x006affd0
int C_006affd0::sub_006affd0(void) { return *(int*)((char*)this + 0); }

// @baa 0x006affe0
undefined2 sub_006affe0(undefined2 * param_1)
{
  return *param_1;
}

// @baa 0x006afff0
bool sub_006afff0(short param_1, short param_2)
{
  return param_1 == param_2;
}

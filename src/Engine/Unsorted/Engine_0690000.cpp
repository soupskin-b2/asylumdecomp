// Engine_0690000.cpp (part 1 of 8): 180 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_009799d0(void);
extern undefined * g_01ebf840;
// @baa 0x00691790
undefined4 * UStaticMeshComponent::sub_00691790(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_009799d0();
  *param_1 = (undefined4)(&g_01ebf840);
  return param_1;
}

// @baa 0x006917b0
void UCoverMeshComponent::vf_278(void) {  }

// @baa 0x006917c0
IMPLEMENT_CLASS_AT(UCoverMeshComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\CoverMeshComponent.cpp", 10);

// @baa 0x00691830
// @baa 0x00691860
IMPLEMENT_CLASS_AT(ADecalActorBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\DecalActor.cpp", 8);

// @baa 0x006918c0
// @baa 0x00691950
IMPLEMENT_CLASS_AT(ADecalActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\DecalActor.cpp", 9);

// @baa 0x006919b0
// @baa 0x00691a10
IMPLEMENT_CLASS_AT(ADecalActorMovable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\DecalActor.cpp", 10);

// @baa 0x00691a70
// @baa 0x00691ad0
IMPLEMENT_CLASS_AT(ADecalManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\DecalManager.cpp", 8);

// @baa 0x00691b50
int sub_0064de30(void);
int sub_0068cec0(...);
extern undefined4 g_026aeeb0;
// @baa 0x00691b80
int sub_00691b80(void)
{
  if (g_026aeeb0 == 0) {
    g_026aeeb0 = sub_0068cec0(L"Engine");
    sub_0064de30();
  }
  return g_026aeeb0;
}

struct C {
    int sub_00693840();
};

int sub_00687630(void);
// @baa 0x00693840
int C::sub_00693840(void)
{
    int param_1 = (int)this;

  sub_00687630();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view {
    int sub_00651d20(int);
};

// @baa 0x006938d0
int UTexture2D::sub_006938d0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00651d20(param_3);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return param_1;
}

int sub_006877f0(void);
// @baa 0x00693ad0
int UTexture2D::sub_00693ad0(void)
{
    int param_1 = (int)this;

  sub_006877f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00693e70 {
    int sub_0068e210(int, int);
};

// @baa 0x00693e70
int UTexture2D::sub_00693e70(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00693e70 *)(this))->sub_0068e210(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00693e90 {
    int sub_0068e290(int, int);
};

// @baa 0x00693e90
int UTexture2D::sub_00693e90(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00693e90 *)(this))->sub_0068e290(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00693eb0 {
    int sub_0068b5f0();
};

int sub_0053dfa0(...);
// @baa 0x00693eb0
undefined4 UTexture2D::sub_00693eb0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00693eb0 *)(((char *)this + 8)))->sub_0068b5f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00689000(void);
// @baa 0x00693ee0
int UTexture2D::sub_00693ee0(void)
{
    int param_1 = (int)this;

  sub_00689000();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00689060(void);
// @baa 0x00693f00
int UTexture2D::sub_00693f00(void)
{
    int param_1 = (int)this;

  sub_00689060();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00693f20 {
    undefined4 sub_00693f20(byte);
};

int sub_0068b6f0(void);
// @baa 0x00693f20
undefined4 C_00693f20::sub_00693f20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0068b6f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00693f40 {
    undefined4 sub_00693f40(byte);
};

int sub_0068b770(void);
// @baa 0x00693f40
undefined4 C_00693f40::sub_00693f40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0068b770();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00693f60 {
    undefined4 sub_00693f60(byte);
};

int sub_0068b7f0(void);
// @baa 0x00693f60
undefined4 C_00693f60::sub_00693f60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0068b7f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_006937d0();
// @baa 0x00694220
void sub_00694220(void) { sub_006937d0(); }

int sub_005c7a70(...);
int sub_00694290(void);
// @baa 0x00694300
undefined4 UPolys::sub_00694300(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00694290();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x40);
  }
  return param_1;
}

void sub_00693a60();
// @baa 0x00694510
void sub_00694510(void) { sub_00693a60(); }

extern float g_01e4b7f4;
// @baa 0x00694700
float sub_00694700(void)
{
    return g_01e4b7f4;
}

// @baa 0x00694760
int __stdcall sub_00694760(int a0) { return 1; }

// @baa 0x00694770
void __stdcall sub_00694770(int a0) {  }

// @baa 0x00694780
void __stdcall sub_00694780(int a0) {  }

// @baa 0x00694790
int __stdcall sub_00694790(int a0) { return 0; }

// @baa 0x006947a0
int __stdcall sub_006947a0(int a0, int a1) { return 0; }

// @baa 0x006947b0
void __stdcall sub_006947b0(int a0) {  }

// @baa 0x006947c0
void __stdcall sub_006947c0(int a0) {  }

struct C_006947d0 {
    undefined4 sub_006947d0(byte);
};

int sub_00694520(void);
// @baa 0x006947d0
undefined4 C_006947d0::sub_006947d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00694520();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00695600 { void sub_00693c30(int); C_00695600 *sub_00695600(int); };

// @baa 0x00695600
C_00695600 *C_00695600::sub_00695600(int a) { sub_00693c30(a); return this; }

struct C_00695620 { C_00695620* sub_00695620(void); };

// @baa 0x00695620
C_00695620* C_00695620::sub_00695620(void) { return this; }

// @baa 0x00696aa0
int UTexture2D::sub_00696aa0(void)
{
    int param_1 = (int)this;

  sub_00689000();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00696ac0
int UTexture2D::sub_00696ac0(void)
{
    int param_1 = (int)this;

  sub_00689060();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00695c20();
// @baa 0x00697000
void sub_00697000(void) { sub_00695c20(); }

void sub_00695de0();
// @baa 0x00697010
void sub_00697010(void) { sub_00695de0(); }

void sub_00695fa0();
// @baa 0x00697020
void sub_00697020(void) { sub_00695fa0(); }

void sub_00696160();
// @baa 0x00697030
void sub_00697030(void) { sub_00696160(); }

void sub_00696320();
// @baa 0x00697040
void sub_00697040(void) { sub_00696320(); }

void sub_006964e0();
// @baa 0x00697050
void sub_00697050(void) { sub_006964e0(); }

void sub_006956e0();
// @baa 0x00697060
void sub_00697060(void) { sub_006956e0(); }

void sub_006958a0();
// @baa 0x00697070
void sub_00697070(void) { sub_006958a0(); }

void sub_00695a60();
// @baa 0x00697080
void sub_00697080(void) { sub_00695a60(); }

// @baa 0x006973a0
void sub_006973a0(void) { sub_006937d0(); }

int sub_0064be60(void);
int sub_00694390(...);
extern undefined4 g_026aee90;
// @baa 0x006975a0
int sub_006975a0(void)
{
  if (g_026aee90 == 0) {
    g_026aee90 = sub_00694390(L"Engine");
    sub_0064be60();
  }
  return g_026aee90;
}

// @baa 0x006975f0
IMPLEMENT_CLASS_AT(UDirectionalLightComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\DirectionalLightComponent.cpp", 10);

// @baa 0x00697650
void sub_00695630();
// @baa 0x00697680
void sub_00697680(void) { sub_00695630(); }

// @baa 0x006977e0
void sub_006977e0(void) { sub_00693a60(); }

int sub_0064dc20(void);
int sub_00695110(...);
extern undefined4 g_026aeea4;
// @baa 0x006983f0
int sub_006983f0(void)
{
  if (g_026aeea4 == 0) {
    g_026aeea4 = sub_00695110(L"Engine");
    sub_0064dc20();
  }
  return g_026aeea4;
}

// @baa 0x00698420
// @baa 0x00698530
bool ADecalActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00698570
// @baa 0x00698680
bool ADecalActorMovable::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_006986c0 {
    undefined4 sub_006986c0(byte);
};

int sub_00695410(void);
// @baa 0x006986c0
undefined4 C_006986c0::sub_006986c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00695410();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006989c0
int UTexture2D::sub_006989c0(void)
{
    int param_1 = (int)this;

  sub_00689000();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x006989e0
int UTexture2D::sub_006989e0(void)
{
    int param_1 = (int)this;

  sub_00689060();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_006987b0();
// @baa 0x00698ad0
void sub_00698ad0(void) { sub_006987b0(); }

int sub_00662920(...);
int sub_006987b0(...);
// @baa 0x00698ae0
void sub_00698ae0(int param_1, int param_2)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (param_1 == 2) {
    puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 3;
    }
  }
  sub_006987b0(param_1,param_2);
  return;
}

void sub_00698860();
// @baa 0x00698b30
void sub_00698b30(void) { sub_00698860(); }

int sub_00698860(...);
// @baa 0x00698b40
void sub_00698b40(int param_1, int param_2)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (param_1 == 2) {
    puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 3;
    }
  }
  sub_00698860(param_1,param_2);
  return;
}

void sub_00698910();
// @baa 0x00698b90
void sub_00698b90(void) { sub_00698910(); }

int sub_00696b50(...);
int sub_00698910(...);
// @baa 0x00698ba0
void sub_00698ba0(undefined4 param_1, undefined4 param_2)
{
  sub_00696b50(param_1,param_2);
  sub_00698910(param_1,param_2);
  return;
}

int sub_00696c40(...);
// @baa 0x00698bc0
void sub_00698bc0(undefined4 param_1, undefined4 param_2)
{
  sub_00696c40(param_1,param_2);
  sub_00698910(param_1,param_2);
  return;
}

int sub_00696d30(...);
// @baa 0x00698be0
void sub_00698be0(undefined4 param_1, undefined4 param_2)
{
  sub_00696d30(param_1,param_2);
  sub_00698910(param_1,param_2);
  return;
}

int sub_00696e20(...);
// @baa 0x00698c00
void sub_00698c00(undefined4 param_1, undefined4 param_2)
{
  sub_00696e20(param_1,param_2);
  sub_00698910(param_1,param_2);
  return;
}

int sub_00696f10(...);
// @baa 0x00698c20
void sub_00698c20(undefined4 param_1, undefined4 param_2)
{
  sub_00696f10(param_1,param_2);
  sub_00698910(param_1,param_2);
  return;
}

int sub_00695c20(...);
// @baa 0x00698c40
void sub_00698c40(undefined4 param_1, undefined4 param_2)
{
  sub_00695c20(param_1,param_2);
  sub_00698910(param_1,param_2);
  return;
}

int sub_00695de0(...);
// @baa 0x00698c60
void sub_00698c60(undefined4 param_1, undefined4 param_2)
{
  sub_00695de0(param_1,param_2);
  sub_00698910(param_1,param_2);
  return;
}

int sub_00695fa0(...);
// @baa 0x00698c80
void sub_00698c80(undefined4 param_1, undefined4 param_2)
{
  sub_00695fa0(param_1,param_2);
  sub_00698910(param_1,param_2);
  return;
}

int sub_00696160(...);
// @baa 0x00698ca0
void sub_00698ca0(undefined4 param_1, undefined4 param_2)
{
  sub_00696160(param_1,param_2);
  sub_00698910(param_1,param_2);
  return;
}

int sub_00696320(...);
// @baa 0x00698cc0
void sub_00698cc0(undefined4 param_1, undefined4 param_2)
{
  sub_00696320(param_1,param_2);
  sub_00698910(param_1,param_2);
  return;
}

int sub_006964e0(...);
// @baa 0x00698ce0
void sub_00698ce0(undefined4 param_1, undefined4 param_2)
{
  sub_006964e0(param_1,param_2);
  sub_00698910(param_1,param_2);
  return;
}

int sub_006956e0(...);
// @baa 0x00698d00
void sub_00698d00(undefined4 param_1, undefined4 param_2)
{
  sub_006956e0(param_1,param_2);
  sub_00698910(param_1,param_2);
  return;
}

int sub_006958a0(...);
// @baa 0x00698d20
void sub_00698d20(undefined4 param_1, undefined4 param_2)
{
  sub_006958a0(param_1,param_2);
  sub_00698910(param_1,param_2);
  return;
}

int sub_00695a60(...);
// @baa 0x00698d40
void sub_00698d40(undefined4 param_1, undefined4 param_2)
{
  sub_00695a60(param_1,param_2);
  sub_00698910(param_1,param_2);
  return;
}

struct C_00699100 { int sub_00699100(void); };

// @baa 0x00699100
int C_00699100::sub_00699100(void) { return *(int*)((char*)this + 0); }

struct C_00699110 {
    uint sub_00699110();
};

// @baa 0x00699110
uint C_00699110::sub_00699110(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18c) >> 2 & 1;
}

// @baa 0x00699120
void __stdcall sub_00699120(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x00699130
void __stdcall sub_00699130(int a0, int a1, int a2, int a3) {  }

// @baa 0x00699140
void __stdcall sub_00699140(int a0, int a1, int a2, int a3) {  }

// @baa 0x00699530
void sub_00699530(void) { sub_006937d0(); }

void sub_00699540();
// @baa 0x00699c30
void sub_00699c30(void) { sub_00699540(); }

int sub_00688270(void);
// @baa 0x00699c40
int UTexture2D::sub_00699c40(void)
{
    int param_1 = (int)this;

  sub_00688270();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_006882d0(void);
// @baa 0x00699cd0
int UTexture2D::sub_00699cd0(void)
{
    int param_1 = (int)this;

  sub_006882d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00688330(void);
// @baa 0x00699d60
int UTexture2D::sub_00699d60(void)
{
    int param_1 = (int)this;

  sub_00688330();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00699fe0
int sub_00699fe0(void) { return 0; }

// @baa 0x00699ff0
int sub_00699ff0(void) { return 0; }

// @baa 0x0069a000
int sub_0069a000(void) { return 0; }

struct C_0069a070 { C_0069a070* sub_0069a070(void); };

// @baa 0x0069a070
C_0069a070* C_0069a070::sub_0069a070(void) { return this; }

struct C_0069a0e0 { C_0069a0e0* sub_0069a0e0(void); };

// @baa 0x0069a0e0
C_0069a0e0* C_0069a0e0::sub_0069a0e0(void) { return this; }

// @baa 0x0069a0f0
void sub_0069a0f0(void) { sub_00695630(); }

struct C_0069bc60 {
    void sub_0069bc60();
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
extern undefined4 g_01ec1274;
// @baa 0x0069bc60
void C_0069bc60::sub_0069bc60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_0069bc90 {
    undefined4 * sub_0069bc90(byte);
};

// @baa 0x0069bc90
undefined4 * C_0069bc90::sub_0069bc90(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0069bcd0 { char* sub_0069bcd0(void); };

// @baa 0x0069bcd0
char* C_0069bcd0::sub_0069bcd0(void) { return (char*)this + 412; }

struct C_0069bce0 { char* sub_0069bce0(void); };

// @baa 0x0069bce0
char* C_0069bce0::sub_0069bce0(void) { return (char*)this + 420; }

struct C_0069bcf0 { int sub_0069bcf0(void); };

// @baa 0x0069bcf0
int C_0069bcf0::sub_0069bcf0(void) { return *(int*)((char*)this + 0); }

struct C_0069bd00 {
    int sub_0069bd00();
};

// @baa 0x0069bd00
int C_0069bd00::sub_0069bd00(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 2) {
    sub_006311e0("Type == LIT_CachedShadowMap1D",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\inc\\Scene.h"
                 ,0x10c,&g_01e3f3dc);
  }
  return param_1[1];
}

struct C_0069bd30 {
    int sub_0069bd30();
};

// @baa 0x0069bd30
int C_0069bd30::sub_0069bd30(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 3) {
    sub_006311e0("Type == LIT_CachedShadowMap2D",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\inc\\Scene.h"
                 ,0x111,&g_01e3f3dc);
  }
  return param_1[1];
}

struct C_0069bd60 {
    int * sub_0069bd60();
};

// @baa 0x0069bd60
int * C_0069bd60::sub_0069bd60(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 3) {
    sub_006311e0("Type == LIT_CachedShadowMap2D",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\inc\\Scene.h"
                 ,0x116,&g_01e3f3dc);
  }
  return param_1 + 2;
}

struct C_0069bd90 {
    int * sub_0069bd90();
};

// @baa 0x0069bd90
int * C_0069bd90::sub_0069bd90(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 3) {
    sub_006311e0("Type == LIT_CachedShadowMap2D",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\inc\\Scene.h"
                 ,0x11b,&g_01e3f3dc);
  }
  return param_1 + 4;
}

struct C_0069bdf0 { int a; C_0069bdf0(int); };

// @baa 0x0069bdf0
C_0069bdf0::C_0069bdf0(int x) : a(x) {}

struct C_0069be10 {
    int sub_0069be10();
};

extern undefined4 g_026b59d4;
// @baa 0x0069be10
int C_0069be10::sub_0069be10(void)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0x1c8) & 1) != 0) {
    return param_1 + 0xd4;
  }
  return g_026b59d4 + 0x14;
}

struct C_0069be90 {
    uint sub_0069be90();
};

// @baa 0x0069be90
uint C_0069be90::sub_0069be90(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0xc) >> 2 & 1;
}

// @baa 0x0069bed0
void __stdcall sub_0069bed0(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x0069bee0
int sub_0069bee0(void) { return 1; }

// @baa 0x0069bef0
int sub_0069bef0(void) { return 0; }

struct C_0069bf30 { int a; C_0069bf30(int); };

// @baa 0x0069bf30
C_0069bf30::C_0069bf30(int x) : a(x) {}

// @baa 0x0069bf40
bool sub_0069bf40(int param_1, int param_2)
{
  return param_1 == param_2;
}

// @baa 0x0069bf50
uint sub_0069bf50(uint * param_1, uint * param_2)
{
  if (*param_1 < *param_2) {
    return 0xffffffff;
  }
  return (uint)(*param_2 < *param_1);
}

struct C_0069bf70 { int a; C_0069bf70(int); };

// @baa 0x0069bf70
C_0069bf70::C_0069bf70(int x) : a(x) {}

// @baa 0x0069bfc0
void __stdcall sub_0069bfc0(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x0069bfd0
bool sub_0069bfd0(int param_1, int param_2)
{
  return param_1 == param_2;
}

// @baa 0x0069bfe0
uint sub_0069bfe0(uint * param_1, uint * param_2)
{
  if (*param_1 < *param_2) {
    return 0xffffffff;
  }
  return (uint)(*param_2 < *param_1);
}

// @baa 0x0069c000
bool sub_0069c000(int * param_1)
{
  return *param_1 != 0;
}

struct C_0069cec0 { int sub_0069cec0(void); };

// @baa 0x0069cec0
int C_0069cec0::sub_0069cec0(void) { return *(int*)((char*)this + 4); }

struct C_0069cfc0 { int sub_0069cfc0(void); };

// @baa 0x0069cfc0
int C_0069cfc0::sub_0069cfc0(void) { return *(int*)((char*)this + 4); }

struct C_0069d150 {
    void sub_0069d150();
};

int sub_0069c170(...);
// @baa 0x0069d150
void C_0069d150::sub_0069d150(void)
{
    int param_1 = (int)this;

  sub_0069c170(*(undefined4 *)(param_1 + 4),0);
  return;
}

struct C_view_0069d750 {
    int sub_0069c8d0(int, int);
};

// @baa 0x0069d750
int UObject::sub_0069d750(undefined4 * param_2, int param_3)
{
    int * param_1 = (int *)this;
  undefined4 *puVar1;
  ((C_view_0069d750 *)(this))->sub_0069c8d0(param_3, 1);
  puVar1 = (undefined4 *)(*param_1 + param_3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return param_3;
}

struct C_0069d880 {
    undefined4 * sub_0069d880(int);
    int sub_0069c7f0(int);
};

extern undefined4 g_01ec13e4;
// @baa 0x0069d880
undefined4 * C_0069d880::sub_0069d880(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_0069d880 *)(this))->sub_0069c7f0(param_2);
  *param_1 = (undefined4)(&g_01ec13e4);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  return param_1;
}

struct C_0069d8b0 {
    undefined4 * sub_0069d8b0(int);
    int sub_0069c7f0(int);
};

extern undefined4 g_01ec13e8;
// @baa 0x0069d8b0
undefined4 * C_0069d8b0::sub_0069d8b0(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_0069d8b0 *)(this))->sub_0069c7f0(param_2);
  *param_1 = (undefined4)(&g_01ec13e8);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  param_1[8] = *(undefined4 *)(param_2 + 0x20);
  return param_1;
}

struct C_0069d8f0 {
    undefined4 * sub_0069d8f0(int);
    int sub_0069c7f0(int);
};

extern undefined4 g_01ec13ec;
// @baa 0x0069d8f0
undefined4 * C_0069d8f0::sub_0069d8f0(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_0069d8f0 *)(this))->sub_0069c7f0(param_2);
  *param_1 = (undefined4)(&g_01ec13ec);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  param_1[8] = *(undefined4 *)(param_2 + 0x20);
  return param_1;
}

struct C_0069d960 { int sub_0069d960(void); };

// @baa 0x0069d960
int C_0069d960::sub_0069d960(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0069d9a0 { int sub_0069d9a0(void); };

// @baa 0x0069d9a0
int C_0069d9a0::sub_0069d9a0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0069d9e0 { int sub_0069d9e0(void); };

// @baa 0x0069d9e0
int C_0069d9e0::sub_0069d9e0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0069da20 { int sub_0069da20(void); };

// @baa 0x0069da20
int C_0069da20::sub_0069da20(void) { return *(int*)((char*)this + 0); }

struct C_0069da30 {
    void sub_0069da30();
};

// @baa 0x0069da30
void C_0069da30::sub_0069da30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_0069da90 { int sub_0069da90(void); };

// @baa 0x0069da90
int C_0069da90::sub_0069da90(void) { return *(int*)((char*)this + 0); }

struct C_0069daa0 {
    void sub_0069daa0();
};

// @baa 0x0069daa0
void C_0069daa0::sub_0069daa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_0069db00 { int sub_0069db00(void); };

// @baa 0x0069db00
int C_0069db00::sub_0069db00(void) { return *(int*)((char*)this + 0); }

struct C_0069db10 {
    void sub_0069db10();
};

// @baa 0x0069db10
void C_0069db10::sub_0069db10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_0069db40 {
    undefined4 * sub_0069db40(byte);
};

// @baa 0x0069db40
undefined4 * C_0069db40::sub_0069db40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0069db80 {
    undefined4 * sub_0069db80(byte);
};

// @baa 0x0069db80
undefined4 * C_0069db80::sub_0069db80(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0069dbc0 {
    undefined4 * sub_0069dbc0(byte);
};

// @baa 0x0069dbc0
undefined4 * C_0069dbc0::sub_0069dbc0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct S_0069dc00 { int sub_0069cc70(int); };

// @baa 0x0069dc00
int sub_0069dc00(S_0069dc00 *s, int a) { return s->sub_0069cc70(a); }

// @baa 0x0069dc10
void sub_0069dc10(int param_1)
{
  sub_0069c170(*(undefined4 *)(param_1 + 4),0);
  return;
}

struct C_0069dc30 {
    int sub_0069dc30(int);
};

// @baa 0x0069dc30
int C_0069dc30::sub_0069dc30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct S_0069dc40 { int sub_0069cce0(int); };

// @baa 0x0069dc40
int sub_0069dc40(S_0069dc40 *s, int a) { return s->sub_0069cce0(a); }

// @baa 0x0069dc50
void sub_0069dc50(int param_1)
{
  sub_0069c170(*(undefined4 *)(param_1 + 4),0);
  return;
}

struct C_0069dc70 {
    int sub_0069dc70(int);
};

// @baa 0x0069dc70
int C_0069dc70::sub_0069dc70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct S_0069dc80 { int sub_0069cd40(int); };

// @baa 0x0069dc80
int sub_0069dc80(S_0069dc80 *s, int a) { return s->sub_0069cd40(a); }

// @baa 0x0069dc90
void sub_0069dc90(int param_1)
{
  sub_0069c170(*(undefined4 *)(param_1 + 4),0);
  return;
}

struct C_0069dcb0 {
    int sub_0069dcb0(int);
};

// @baa 0x0069dcb0
int C_0069dcb0::sub_0069dcb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_0069dcc0 {
    int sub_0069dcc0();
};

// @baa 0x0069dcc0
int C_0069dcc0::sub_0069dcc0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0069dce0 {
    int sub_0069dce0();
};

// @baa 0x0069dce0
int C_0069dce0::sub_0069dce0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0069dd00 {
    int sub_0069dd00();
};

// @baa 0x0069dd00
int C_0069dd00::sub_0069dd00(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

int sub_0053df70(...);
// @baa 0x0069e700
void UTexture2D::sub_0069e700(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct T_0069e740;
// @baa 0x0069e740
template INT TArray<T_0069e740*>::RemoveItem(T_0069e740* const&);

// @baa 0x0069e7f0
int UTexture2D::sub_0069e7f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x0069e8f0
int UTexture2D::sub_0069e8f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x0069e9f0
int UTexture2D::sub_0069e9f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x0069ec70
int UTexture2D::sub_0069ec70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x0069ecf0
int UTexture2D::sub_0069ecf0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x0069ed70
int UTexture2D::sub_0069ed70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x0069ed80
int UTexture2D::sub_0069ed80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

// @baa 0x0069ed90
int UTexture2D::sub_0069ed90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

// @baa 0x0069eda0
int UTexture2D::sub_0069eda0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

// @baa 0x0069edb0
void UTexture2D::sub_0069edb0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x0069edf0
void UTexture2D::sub_0069edf0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x0069ee30
void UTexture2D::sub_0069ee30(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x0069ee70
int UTexture2D::sub_0069ee70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x0069efc0
int UTexture2D::sub_0069efc0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x0069f120
int UTexture2D::sub_0069f120(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
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

struct TConstSetBitIterator_0069f4d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0069f4d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0069f4d0& operator++();
};

TConstSetBitIterator_0069f4d0::TConstSetBitIterator_0069f4d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0069f4d0
TConstSetBitIterator_0069f4d0& TConstSetBitIterator_0069f4d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0069f4f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0069f4f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0069f4f0& operator++();
};

TConstSetBitIterator_0069f4f0::TConstSetBitIterator_0069f4f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0069f4f0
TConstSetBitIterator_0069f4f0& TConstSetBitIterator_0069f4f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0069f510 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0069f510(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0069f510& operator++();
};

TConstSetBitIterator_0069f510::TConstSetBitIterator_0069f510(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0069f510
TConstSetBitIterator_0069f510& TConstSetBitIterator_0069f510::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0069f530 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0069f530(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0069f530& operator++();
};

TConstSetBitIterator_0069f530::TConstSetBitIterator_0069f530(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0069f530
TConstSetBitIterator_0069f530& TConstSetBitIterator_0069f530::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0069f580 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0069f580(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0069f580& operator++();
};

TConstSetBitIterator_0069f580::TConstSetBitIterator_0069f580(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0069f580
TConstSetBitIterator_0069f580& TConstSetBitIterator_0069f580::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0069f5d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0069f5d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0069f5d0& operator++();
};

TConstSetBitIterator_0069f5d0::TConstSetBitIterator_0069f5d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0069f5d0
TConstSetBitIterator_0069f5d0& TConstSetBitIterator_0069f5d0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_0069fb00 {
    int sub_0069f270(int, int);
};

// @baa 0x0069fb00
int UTexture2D::sub_0069fb00(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_0069fb00 *)(this))->sub_0069f270((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x50 + *param_1;
  }
  return 0;
}

struct C_view_0069fb90 {
    int sub_0069f330(int, int);
};

// @baa 0x0069fb90
int UTexture2D::sub_0069fb90(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_0069fb90 *)(this))->sub_0069f330((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x50 + *param_1;
  }
  return 0;
}

struct C_view_0069fc20 {
    int sub_0069f400(int, int);
};

// @baa 0x0069fc20
int UTexture2D::sub_0069fc20(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_0069fc20 *)(this))->sub_0069f400((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x50 + *param_1;
  }
  return 0;
}

struct Inner {
    int* data;
    Inner();
    ~Inner();
};

struct Outer_0069ff80 : Inner {
    int num;
    int max;
    void sub_0069f620(int* p);
    Outer_0069ff80(int* p);
};

Inner::Inner()
{
    data = 0;
}

// @baa 0x0069ff80
Outer_0069ff80::Outer_0069ff80(int* p)
{
    num = 0;
    max = 0;
    sub_0069f620(p);
}

struct Outer_0069ffe0 : Inner {
    int num;
    int max;
    void sub_0069f730(int* p);
    Outer_0069ffe0(int* p);
};

// @baa 0x0069ffe0
Outer_0069ffe0::Outer_0069ffe0(int* p)
{
    num = 0;
    max = 0;
    sub_0069f730(p);
}

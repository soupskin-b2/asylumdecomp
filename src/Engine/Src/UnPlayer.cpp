// UnPlayer.cpp (part 1 of 3): 112 functions
// Placed here by: neighbours 67, class 23, callers 7, file 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

extern "C" int g_026c46e4;
extern "C" int g_026c46e8;
struct UObjectThunk {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_00888720();
};

// @baa 0x00888720
void UObjectThunk::sub_00888720()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c46e4, g_026c46e8, 0), 0, 0);
}

struct C { C* sub_00888750(int a0); };

// @baa 0x00888750
C* C::sub_00888750(int a0) { return this; }

int sub_008a5e30(void);
int sub_008e04d0(...);
extern undefined4 g_026b5a60;
// @baa 0x008887c0
int sub_008887c0(void)
{
  if (g_026b5a60 == 0) {
    g_026b5a60 = sub_008e04d0(L"Engine");
    sub_008a5e30();
  }
  return g_026b5a60;
}

extern "C" int g_026c4c20;
extern "C" int g_026c4c24;
struct UObjectThunk_008887f0 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_008887f0();
};

// @baa 0x008887f0
void UObjectThunk_008887f0::sub_008887f0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c4c20, g_026c4c24, 0), 0, 0);
}

// @baa 0x00888ad0
int sub_00888ad0(int a0, int a1) { return a1; }

struct C_00888ae0 { int sub_00888ae0(void); };

// @baa 0x00888ae0
int C_00888ae0::sub_00888ae0(void) { return *(int*)((char*)this + 28); }

// @baa 0x00888af0
int sub_00888af0(int a0, int a1) { return a1; }

// @baa 0x00888b00
IMPLEMENT_CLASS_AT(UPlayer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPlayer.cpp", 39);

extern char g_01e3f3e0[];
// @baa 0x00888b70
int sub_00888b70(void) { return (int)g_01e3f3e0; }

// @baa 0x00888b80
struct C_00888bc0 {
    undefined4 sub_00888bc0();
};

// @baa 0x00888bc0
undefined4 C_00888bc0::sub_00888bc0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

// @baa 0x00888bd0
int sub_00888bd0(int a0, int a1) { return a1; }

// @baa 0x00888be0
int sub_00888be0(int a0, int a1) { return a1; }

int sub_00bed450(void);
int sub_00bf4db0(...);
extern undefined4 g_026c0598;
// @baa 0x00888bf0
int sub_00888bf0(void)
{
  if (g_026c0598 == 0) {
    g_026c0598 = sub_00bf4db0(L"Engine");
    sub_00bed450();
  }
  return g_026c0598;
}

struct C_00888c20 { int sub_00888c20(void); };

// @baa 0x00888c20
int C_00888c20::sub_00888c20(void) { return *(int*)((char*)this + 4); }

// @baa 0x00888cf0
IMPLEMENT_CLASS_AT(UUIRoot, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUserInterface.cpp", 23);

// @baa 0x00888d50
struct C_00888d70 {
    C_00888d70 * sub_00888d70(int arg);
};

// @baa 0x00888d70
C_00888d70 * C_00888d70::sub_00888d70(int arg)
{
    return this;
}

struct C_00888d80 { C_00888d80* sub_00888d80(int a0); };

// @baa 0x00888d80
C_00888d80* C_00888d80::sub_00888d80(int a0) { return this; }

// @baa 0x008893d0
int ULocalPlayer::vf_000(void) { return 1; }

// @baa 0x008893e0
IMPLEMENT_CLASS_AT(UGameViewportClient, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPlayer.cpp", 97);

// @baa 0x008894f0
int UGameViewportClient::vf_000(void) { return 1; }

// @baa 0x00889500
bool UGameViewportClient::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00889540
int UPlayerManagerInteraction::vf_000(void) { return 1; }

// @baa 0x00889550
bool UPlayerManagerInteraction::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008895f0
int UGameViewportClient::vf_118(int a0) { return 0; }

// @baa 0x00889600
void UGameViewportClient::vf_11c(int a0, int a1) {  }

// @baa 0x00889610
void UGameViewportClient::vf_120(int a0, int a1) {  }

// @baa 0x00889620
void UGameViewportClient::vf_124(int a0, int a1) {  }

// @baa 0x00889630
void UGameViewportClient::vf_128(int a0, int a1) {  }

struct B {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual int f19();
};

struct C_008898e0 {
    char pad[0x38];
    B* b;
    int sub_008898e0();
};

// @baa 0x008898e0
int C_008898e0::sub_008898e0()
{
    return b->f19();
}

// @baa 0x00889a50
void __stdcall sub_00889a50(int a0) {  }

// @baa 0x0088e5c0
// @baa 0x0088e5f0
IMPLEMENT_CLASS_AT(UPlayerManagerInteraction, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPlayer.cpp", 98);

// @baa 0x0088e680
// @baa 0x0088e740
// @baa 0x00891ff0
IMPLEMENT_CLASS_AT(ULocalPlayer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPlayer.cpp", 40);

// @baa 0x00892100
bool ULocalPlayer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_view {
    int sub_0079f5e0(int);
};

int __stdcall sub_00892dc0(int);
// @baa 0x00893920
undefined4 UForcedReachSpec::vf_118(int param_2)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = sub_00892dc0(param_2);
  if (iVar1 == 0) {
    if (((param_2 == 0) || (*(int *)(param_2 + 0x1a8) == 0)) ||
       ((*(uint *)(*(int *)(param_1 + 0x48) + 0x1a8) & 0x8000) == 0)) {
      return 0;
    }
    ((C_view *)((*(char **)((char *)this + 0x48))))->sub_0079f5e0(*(int *)(param_2 + 0x1a8));
  }
  return 1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00895520 { void* Data; int Num; int Max; void sub_00895520(); };

// @baa 0x00895520
void C_00895520::sub_00895520() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00895580 { void* Data; int Num; int Max; void sub_00895580(); };

// @baa 0x00895580
void C_00895580::sub_00895580() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008956c0 {
    void sub_008956c0(int);
};

int sub_0053df70(...);
// @baa 0x008956c0
void C_008956c0::sub_008956c0(int param_2)
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

struct C_00895700 { void* Data; int Num; int Max; void sub_00895700(); };

// @baa 0x00895700
void C_00895700::sub_00895700() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00895760 { void* Data; int Num; int Max; void sub_00895760(); };

// @baa 0x00895760
void C_00895760::sub_00895760() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

int sub_0053dfa0(...);
int sub_00895880(void);
// @baa 0x00895a20
undefined4 UTextureCube::sub_00895a20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00895880();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_008959b0(void);
// @baa 0x00895a40
undefined4 UTextureCube::sub_00895a40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_008959b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00895a60
void __stdcall sub_00895a60(int a0, int a1) {  }

struct C_00895a70 { int sub_00895a70(void); };

// @baa 0x00895a70
int C_00895a70::sub_00895a70(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00895a80 {
    void sub_00895a80(int);
};

// @baa 0x00895a80
void C_00895a80::sub_00895a80(int param_2)
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

void sub_0040fcc0();
// @baa 0x00895ac0
void sub_00895ac0(void) { sub_0040fcc0(); }

struct C_00895ba0 {
    int sub_00895ba0(int);
};

// @baa 0x00895ba0
int C_00895ba0::sub_00895ba0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00895bb0 {
    int sub_00895bb0(int);
};

// @baa 0x00895bb0
int C_00895bb0::sub_00895bb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00895bc0 {
    int sub_00895bc0(int);
};

// @baa 0x00895bc0
int C_00895bc0::sub_00895bc0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00895c50 {
    int sub_00895c50(int);
};

// @baa 0x00895c50
int C_00895c50::sub_00895c50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00895cd0 {
    int sub_00895cd0(int);
};

// @baa 0x00895cd0
int C_00895cd0::sub_00895cd0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00895ce0 {
    int sub_00895ce0();
};

// @baa 0x00895ce0
int C_00895ce0::sub_00895ce0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00895cf0 {
    int sub_00895cf0();
};

// @baa 0x00895cf0
int C_00895cf0::sub_00895cf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00895d00 {
    int sub_00895d00();
};

// @baa 0x00895d00
int C_00895d00::sub_00895d00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

void sub_00895470();
// @baa 0x00895d90
void sub_00895d90(void) { sub_00895470(); }

void sub_00895520();
// @baa 0x00895e50
void sub_00895e50(void) { sub_00895520(); }

void sub_00895580();
// @baa 0x00895e60
void sub_00895e60(void) { sub_00895580(); }

void sub_00895700();
// @baa 0x00895e70
void sub_00895e70(void) { sub_00895700(); }

void sub_00897b80();
// @baa 0x00899ea0
void sub_00899ea0(void) { sub_00897b80(); }

void sub_00553720();
// @baa 0x00899eb0
void sub_00899eb0(void) { sub_00553720(); }

int sub_00889e50(void);
int sub_0089bac0(...);
extern undefined4 g_026b5970;
// @baa 0x0089c790
int sub_0089c790(void)
{
  if (g_026b5970 == 0) {
    g_026b5970 = sub_0089bac0(L"Engine");
    sub_00889e50();
  }
  return g_026b5970;
}

struct M_0089c7c0 { void sub_00899d70(); };

struct C_0089c7c0 { char pad[28]; M_0089c7c0 m; void sub_0089c7c0(); };

// @baa 0x0089c7c0
void C_0089c7c0::sub_0089c7c0() { m.sub_00899d70(); }

struct C_0089db70 {
    int sub_0089db70();
};

int sub_0089a1a0(void);
// @baa 0x0089db70
int C_0089db70::sub_0089db70(void)
{
    int param_1 = (int)this;

  sub_0089a1a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0089db90 {
    int sub_0089db90();
};

int sub_0089a200(void);
// @baa 0x0089db90
int C_0089db90::sub_0089db90(void)
{
    int param_1 = (int)this;

  sub_0089a200();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0089e430 {
    int sub_0089e430(undefined4, undefined4);
    int sub_0089da80(int, int);
};

// @baa 0x0089e430
int C_0089e430::sub_0089e430(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_0089e430 *)(this))->sub_0089da80(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_0089e450 {
    undefined4 sub_0089e450(undefined4, undefined4);
    int sub_0089daf0(int, int);
};

// @baa 0x0089e450
undefined4 C_0089e450::sub_0089e450(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0089e450 *)(this))->sub_0089daf0(param_2, param_3);
  return param_1;
}

struct C_0089e470 {
    int sub_0089e470();
};

// @baa 0x0089e470
int C_0089e470::sub_0089e470(void)
{
    int param_1 = (int)this;

  sub_0089a1a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0089e490 {
    int sub_0089e490();
};

// @baa 0x0089e490
int C_0089e490::sub_0089e490(void)
{
    int param_1 = (int)this;

  sub_0089a200();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0089e4b0
IMPLEMENT_CLASS_AT(APostProcessVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPostProcess.cpp", 9);

void sub_0089e0b0();
// @baa 0x0089e4e0
void sub_0089e4e0(void) { sub_0089e0b0(); }

void sub_0089e210();
// @baa 0x0089e4f0
void sub_0089e4f0(void) { sub_0089e210(); }

struct C_view_0089e5d0 {
    int sub_0089dea0();
};

// @baa 0x0089e5d0
undefined4 ULocalPlayer::vf_118(void)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(int *)(param_1 + 0x78) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x78),0,8);
      *(undefined4 *)(param_1 + 0x78) = uVar1;
    }
  }
  ((C_view_0089e5d0 *)(this))->sub_0089dea0();
  return 1;
}

struct C_0089f600 {
    int sub_0089f600();
};

// @baa 0x0089f600
int C_0089f600::sub_0089f600(void)
{
    int param_1 = (int)this;

  sub_0089a1a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0089f620 {
    int sub_0089f620();
};

// @baa 0x0089f620
int C_0089f620::sub_0089f620(void)
{
    int param_1 = (int)this;

  sub_0089a200();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0089f640
UGameViewportClient::UGameViewportClient()
{
    bDisplayingUIMouseCursor = 0;
    bUIMouseCaptureOverride = 0;
    bCollisionLight = 0;
    ShowFlags.A = 0x13003362;
    ShowFlags.B = 0x4023bc2;
}

// @baa 0x0089f690
void __stdcall sub_0089f690(int a0) {  }

// @baa 0x0089f6a0
void UGameViewportClient::vf_114(int a0, int a1) {  }

// @baa 0x0089f6b0
int sub_0089f6b0(void) { return 0; }

// @baa 0x0089f6c0
int URCapeStateBoneConfig::sub_0089f6c0(void)
{
    int param_1 = (int)this;

  return param_1 + -0x30;
}

// @baa 0x0089f6d0
int sub_005c7a70(...);
int sub_0089f6d0(void);
// @baa 0x0089f7b0
undefined4 UGameViewportClient::sub_0089f7b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0089f6d0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0xf8);
  }
  return param_1;
}

// @baa 0x0089f7e0
void sub_0089f7e0(void) { sub_0089e210(); }

int sub_0089f8b0(void);
// @baa 0x0089f930
undefined4 UGameViewportClient::sub_0089f930(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0089f8b0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x1ec);
  }
  return param_1;
}

void sub_0089e280();
// @baa 0x0089f960
void sub_0089f960(void) { sub_0089e280(); }

struct C_0089ff20 {
    int sub_0089ff20();
};

// @baa 0x0089ff20
int C_0089ff20::sub_0089ff20(void)
{
    int param_1 = (int)this;

  sub_0089a1a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0089ff40 {
    int sub_0089ff40();
};

// @baa 0x0089ff40
int C_0089ff40::sub_0089ff40(void)
{
    int param_1 = (int)this;

  sub_0089a200();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0089ff60
// @baa 0x0089ff70
// @baa 0x0089ff80
// @baa 0x008a0040
// @baa 0x008a0100
void sub_008a0100(void) { sub_0089e210(); }

// @baa 0x008a0110
void sub_008a0110(void) { sub_0089e280(); }

// @baa 0x008a0120
struct S {
    INT Unk00;
    INT Unk04;
    S *sub_00ab30d0();
};

// @baa 0x00ab30d0
S *S::sub_00ab30d0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

int sub_0089f640(void);
extern undefined4 g_02107540;
extern undefined * g_02107548;
extern undefined * g_021075a8;
// @baa 0x00e67de0
undefined4 * UGameViewportClient::sub_00e67de0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0089f640();
  *param_1 = (undefined4)(&g_021075a8);
  param_1[0xc] = (undefined4)(&g_02107548);
  param_1[0xd] = (undefined4)(&g_02107540);
  return param_1;
}

int sub_0089f7f0(void);
extern undefined4 g_02132370;
extern undefined * g_02132378;
// @baa 0x00ed7f30
undefined4 * ULocalPlayer::sub_00ed7f30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0089f7f0();
  *param_1 = (undefined4)(&g_02132378);
  param_1[0xc] = (undefined4)(&g_02132370);
  return param_1;
}

extern undefined4 g_023a5f84;
extern undefined * g_023a5f88;
extern undefined * g_023a5fe8;
// @baa 0x016e5820
undefined4 * UGameViewportClient::sub_016e5820(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0089f640();
  *param_1 = (undefined4)(&g_023a5fe8);
  param_1[0xc] = (undefined4)(&g_023a5f88);
  param_1[0xd] = (undefined4)(&g_023a5f84);
  return param_1;
}

// The event's FName (an ENGINE_ name; the packet does not say which event, nor the class).
extern FName g_026c3e5c;
struct UObject_ : public UObject {
    FLOAT sub_008886a0();
};

struct UObject_sub_008886a0_Parms {
    FLOAT ReturnValue;
};

// @baa 0x008886a0
// A script event returning a float, as UE3's generated code writes it.
FLOAT UObject_::sub_008886a0()
{
    UObject_sub_008886a0_Parms Parms;
    Parms.ReturnValue = 0;
    ProcessEvent(FindFunctionChecked(g_026c3e5c), &Parms);
    return Parms.ReturnValue;
}

struct C_00e6fba0_T
{
    void sub_00e5f880();
};

C_00e6fba0_T* sub_00e6fba0();
struct URCapeStateBoneConfig_ : public URCapeStateBoneConfig
{
    void sub_00889a60(int Param);
};

// @baa 0x00889a60
void URCapeStateBoneConfig_::sub_00889a60(int Param)
{
    if (sub_00e6fba0() != 0)
        sub_00e6fba0()->sub_00e5f880();
}

// @baa 0x00889060

// @baa 0x00889390
bool UPlayer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00889be0
void UPlayer::vf_10c(int param_2)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x34) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x330) = 0;
  }
  *(int *)(param_2 + 0x330) = param_1;
  *(int *)(param_1 + 0x34) = param_2;
  return;
}

static inline UBOOL operator==(const FName& A, const FName& B) { return A.Index == B.Index && A.Number == B.Number; }

// @baa 0x00892bb0
/* FindPostProcessEffect: the first effect in the chain with the given name (UE3 returns UPostProcessEffect*). */
void* UPostProcessChain::sub_00892bb0(FName EffectName)
{
    for (INT EffectIdx = 0; EffectIdx < Effects.Num(); EffectIdx++)
    {
        if (Effects(EffectIdx) && Effects(EffectIdx)->EffectName == EffectName)
        {
            return Effects(EffectIdx);
        }
    }
    return NULL;
}

extern FName g_026c51b8;
	/* HandleInputAxis */
/* Kit gap: the delegate's generated glue isn't declared. */
struct UGameViewportClient_ : public UGameViewportClient
{
	UBOOL delegateHandleInputAxis(INT ControllerId, FName Key, FLOAT Delta, FLOAT DeltaTime, UBOOL bGamepad);
};

// @baa 0x008889d0
/* The script delegate's generated glue, out of line here. */
UBOOL UGameViewportClient_::delegateHandleInputAxis(INT ControllerId, FName Key, FLOAT Delta, FLOAT DeltaTime, UBOOL bGamepad)
{
	struct GameViewportClient_eventHandleInputAxis_Parms
	{
		INT ControllerId;
		FName Key;
		FLOAT Delta;
		FLOAT DeltaTime;
		UBOOL bGamepad;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.ControllerId = ControllerId;
	Parms.Key = Key;
	Parms.Delta = Delta;
	Parms.DeltaTime = DeltaTime;
	Parms.bGamepad = bGamepad ? TRUE : FALSE;
	ProcessDelegate(g_026c51b8, &__HandleInputAxis__Delegate, &Parms, NULL);
	return Parms.ReturnValue;
}

extern FName g_026c55ac;
	/* HandleInputKey */
/* Kit gap: the delegate's generated glue isn't declared. */
struct UGameViewportClient__00888a50 : public UGameViewportClient
{
	UBOOL delegateHandleInputKey(INT ControllerId, FName Key, BYTE EventType, FLOAT AmountDepressed, UBOOL bGamepad);
};

// @baa 0x00888a50
/* The script delegate's generated glue, out of line here. */
UBOOL UGameViewportClient__00888a50::delegateHandleInputKey(INT ControllerId, FName Key, BYTE EventType, FLOAT AmountDepressed, UBOOL bGamepad)
{
	struct GameViewportClient_eventHandleInputKey_Parms
	{
		INT ControllerId;
		FName Key;
		BYTE EventType;
		FLOAT AmountDepressed;
		UBOOL bGamepad;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.ControllerId = ControllerId;
	Parms.Key = Key;
	Parms.EventType = EventType;
	Parms.AmountDepressed = AmountDepressed;
	Parms.bGamepad = bGamepad ? TRUE : FALSE;
	ProcessDelegate(g_026c55ac, &__HandleInputKey__Delegate, &Parms, NULL);
	return Parms.ReturnValue;
}

extern FName g_026c4064;
	/* OnReceivedNativeInputAxis */
/* Kit gap: the delegate's generated glue isn't declared. */
struct UInteraction_ : public UInteraction
{
	UBOOL delegateOnReceivedNativeInputAxis(INT ControllerId, FName Key, FLOAT Delta, FLOAT DeltaTime, UBOOL bGamepad);
};

// @baa 0x00888d90
/* The script delegate's generated glue, out of line here. */
UBOOL UInteraction_::delegateOnReceivedNativeInputAxis(INT ControllerId, FName Key, FLOAT Delta, FLOAT DeltaTime, UBOOL bGamepad)
{
	struct Interaction_eventOnReceivedNativeInputAxis_Parms
	{
		INT ControllerId;
		FName Key;
		FLOAT Delta;
		FLOAT DeltaTime;
		UBOOL bGamepad;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.ControllerId = ControllerId;
	Parms.Key = Key;
	Parms.Delta = Delta;
	Parms.DeltaTime = DeltaTime;
	Parms.bGamepad = bGamepad ? TRUE : FALSE;
	ProcessDelegate(g_026c4064, &__OnReceivedNativeInputAxis__Delegate, &Parms, NULL);
	return Parms.ReturnValue;
}

extern FName g_026c3e1c;
	/* OnReceivedNativeInputKey */
/* Kit gap: the delegate's generated glue isn't declared. */
struct UInteraction__00888e10 : public UInteraction
{
	UBOOL delegateOnReceivedNativeInputKey(INT ControllerId, FName Key, BYTE EventType, FLOAT AmountDepressed, UBOOL bGamepad);
};

// @baa 0x00888e10
/* The script delegate's generated glue, out of line here. */
UBOOL UInteraction__00888e10::delegateOnReceivedNativeInputKey(INT ControllerId, FName Key, BYTE EventType, FLOAT AmountDepressed, UBOOL bGamepad)
{
	struct Interaction_eventOnReceivedNativeInputKey_Parms
	{
		INT ControllerId;
		FName Key;
		BYTE EventType;
		FLOAT AmountDepressed;
		UBOOL bGamepad;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.ControllerId = ControllerId;
	Parms.Key = Key;
	Parms.EventType = EventType;
	Parms.AmountDepressed = AmountDepressed;
	Parms.bGamepad = bGamepad ? TRUE : FALSE;
	ProcessDelegate(g_026c3e1c, &__OnReceivedNativeInputKey__Delegate, &Parms, NULL);
	return Parms.ReturnValue;
}

/* Unnamed in the kit: UE3's ULocalPlayer::RemovePostProcessingChain(INT InIndex) and
 * ULocalPlayer::RebuildPlayerPostProcessChain() (0x0089dea0). */
struct ULocalPlayer_ : public ULocalPlayer
{
    void sub_0089dea0();
    UBOOL sub_0089e590(INT InIndex);
};

// @baa 0x0089e590
UBOOL ULocalPlayer_::sub_0089e590(INT InIndex)
{
    if (InIndex >= 0 && InIndex < PlayerPostProcessChains.Num())
    {
        PlayerPostProcessChains.Remove(InIndex, 1);
        sub_0089dea0();
        return TRUE;
    }
    return FALSE;
}

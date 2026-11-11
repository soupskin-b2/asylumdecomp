// UnrealEd_14c0000.cpp (part 1 of 2): 96 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C { void sub_014bc720(int); C *sub_014c36f0(int); };

// @baa 0x014c36f0
C *C::sub_014c36f0(int a) { sub_014bc720(a); return this; }

struct C_view {
    int sub_014bc720(int);
};

// @baa 0x014c3710
int UTexture2D::sub_014c3710(int param_2)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_014bc720(param_2);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  return param_1;
}

struct C_view_014c3740 {
    int sub_014bbb40();
};

int sub_0053dfa0(...);
// @baa 0x014c3740
undefined4 UTexture2D::sub_014c3740(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_014c3740 *)(((char *)this + 4)))->sub_014bbb40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_014c3fa0 {
    int sub_014c3be0(int);
};

// @baa 0x014c3fa0
void UTexture2D::sub_014c3fa0(void)
{
    int param_1 = (int)this;
  ((C_view_014c3fa0 *)((*(char **)((char *)this + 0x10))))->sub_014c3be0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

void sub_014c3e10();
// @baa 0x014c3fc0
void sub_014c3fc0(void) { sub_014c3e10(); }

struct C_014c5710 { C_014c5710* sub_014c5710(int a0); };

// @baa 0x014c5710
C_014c5710* C_014c5710::sub_014c5710(int a0) { return this; }

struct C_014c5720 { C_014c5720* sub_014c5720(int a0); };

// @baa 0x014c5720
C_014c5720* C_014c5720::sub_014c5720(int a0) { return this; }

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x014c57d0
void sub_014c57d0(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_014c57f0 { C_014c57f0* sub_014c57f0(void); };

// @baa 0x014c57f0
C_014c57f0* C_014c57f0::sub_014c57f0(void) { return this; }

struct C_view_014c5890 {
    int sub_011ac8c0(int, int);
};

extern undefined * g_022b8dd8;
// @baa 0x014c5890
undefined4 * UObject::sub_014c5890(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_014c5890 *)(this))->sub_011ac8c0(param_2, param_3);
  *param_1 = (undefined4)(&g_022b8dd8);
  return param_1;
}

extern "C" void sub_01190580();
// @baa 0x014c58b0
void sub_014c58b0() {
    sub_01190580();
}

// @baa 0x014c58c0
int sub_014c58c0(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_022b9138;
// @baa 0x014c58d0
undefined4 * UObject::sub_014c58d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022b9138);
  return param_1;
}

// @baa 0x014c58f0
IMPLEMENT_CLASS_AT(UUITexture_CustomDrawProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditorProperties.cpp", 19);

// @baa 0x014c5950
// @baa 0x014c5970
undefined4 sub_014c5970(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x014c5980
int sub_014c5980(int a0, int a1) { return a1; }

// @baa 0x014c5990
int sub_014c5990(int a0, int a1) { return a1; }

// @baa 0x014c59a0
int sub_014c59a0(int a0, int a1) { return a1; }

extern undefined * g_022b9258;
// @baa 0x014c59b0
undefined4 * UObject::sub_014c59b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022b9258);
  return param_1;
}

// @baa 0x014c59d0
IMPLEMENT_CLASS_AT(UPlayerInputMask_CustomDrawProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditorProperties.cpp", 20);

// @baa 0x014c5a30
// @baa 0x014c5a50
undefined4 sub_014c5a50(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x014c5a60
int sub_014c5a60(int a0, int a1) { return a1; }

extern char g_026dde74[];
// @baa 0x014c5a70
int sub_014c5a70(void) { return (int)g_026dde74; }

extern char g_025e9400[];
// @baa 0x014c5c70
int sub_014c5c70(void) { return (int)g_025e9400; }

extern char g_026dde8c[];
// @baa 0x014c5c80
int sub_014c5c80(void) { return (int)g_026dde8c; }

// @baa 0x014c5e80
int sub_014c5e80(int a0, int a1) { return a1; }

// @baa 0x014c5e90
void sub_014c5e90(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_014c5eb0 { int sub_014c5eb0(void); };

// @baa 0x014c5eb0
int C_014c5eb0::sub_014c5eb0(void) { return *(int*)((char*)this + 340); }

// @baa 0x014c5ee0
void UUIEvent_MetaObjectHelper::vf_110(int a0) {  }

extern char g_022b5294[];
// @baa 0x014c5f30
int sub_014c5f30(void) { return (int)g_022b5294; }

extern char g_026ddecc[];
// @baa 0x014c5f40
int sub_014c5f40(void) { return (int)g_026ddecc; }

struct C_014c6160 {
    uint sub_014c6160();
};

// @baa 0x014c6160
uint C_014c6160::sub_014c6160(void)
{
    int param_1 = (int)this;

  uint uVar1;
  
  uVar1 = 1;
  if (*(int *)(param_1 + 0x314) != 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x314) + 0x50) & 1;
  }
  return uVar1;
}

struct C_014c6180 {
    uint sub_014c6180();
};

// @baa 0x014c6180
uint C_014c6180::sub_014c6180(void)
{
    int param_1 = (int)this;

  uint uVar1;
  
  uVar1 = 1;
  if (*(int *)(param_1 + 0x314) != 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x314) + 0x50) >> 1 & 1;
  }
  return uVar1;
}

struct C_014c61a0 {
    uint sub_014c61a0();
};

// @baa 0x014c61a0
uint C_014c61a0::sub_014c61a0(void)
{
    int param_1 = (int)this;

  uint uVar1;
  
  uVar1 = 1;
  if (*(int *)(param_1 + 0x170) != 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x170) + 0x50) >> 3 & 1;
  }
  return uVar1;
}

// @baa 0x014c61c0
int sub_014c61c0(void) { return 1; }

// @baa 0x014c61d0
int __stdcall sub_014c61d0(int a0, int a1, int a2, int a3) { return 0; }

struct C_014c61e0 {
    undefined4 sub_014c61e0();
};

// @baa 0x014c61e0
undefined4 C_014c61e0::sub_014c61e0(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x314) + 0x58);
}

struct C_014c61f0 {
    uint sub_014c61f0();
};

// @baa 0x014c61f0
uint C_014c61f0::sub_014c61f0(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0x314) + 0x50) >> 9 & 1;
}

struct OuterNameObj;
struct GObj {
    OuterNameObj * GetOutermost();
};

struct C_014c6200 {
    char pad_0x16c[0x16c];
    GObj * gobj;
    OuterNameObj * sub_014c6200();
};

// @baa 0x014c6200
OuterNameObj * C_014c6200::sub_014c6200()
{
    return gobj->GetOutermost();
}

// @baa 0x014c62b0
void sub_014c62b0(void) {  }

struct T {
    char pad[0x318];
    void *sub;
    void sub_014c62d0();
};

struct O {
    void sub_014a8a30();
};

// @baa 0x014c62d0
void T::sub_014c62d0() { ((O *)sub)->sub_014a8a30(); }

struct FOO {
  int __thiscall sub_00f71ad0(void);
};

extern undefined4 g_026cce28;
// @baa 0x014c62e0
void sub_014c62e0(void)
{
  ((FOO *)g_026cce28)->sub_00f71ad0();
}

struct FOO_014c62f0 {
  int __thiscall sub_00f71ab0(void);
};

// @baa 0x014c62f0
void sub_014c62f0(void)
{
  ((FOO_014c62f0 *)g_026cce28)->sub_00f71ab0();
}

// @baa 0x014c7270
int sub_014c7270(int a0, int a1) { return a1; }

extern undefined * g_022b9d90;
// @baa 0x014c7280
undefined4 * UObject::sub_014c7280(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022b9d90);
  return param_1;
}

// @baa 0x014c72a0
IMPLEMENT_CLASS_AT(UUIEvent_MetaObjectHelper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditorWindows.cpp", 78);

// @baa 0x014c7300
// @baa 0x014c7320
undefined4 sub_014c7320(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_022b9ea8;
// @baa 0x014c7330
undefined4 * UObject::sub_014c7330(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022b9ea8);
  return param_1;
}

// @baa 0x014c7350
IMPLEMENT_CLASS_AT(UUISequenceHelper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditorWindows.cpp", 68);

// @baa 0x014c73b0
// @baa 0x014c73d0
undefined4 sub_014c73d0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_022b9fc0;
// @baa 0x014c73e0
undefined4 * UObject::sub_014c73e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022b9fc0);
  return param_1;
}

// @baa 0x014c7400
IMPLEMENT_CLASS_AT(UUISequenceObjectHelper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditorWindows.cpp", 103);

// @baa 0x014c7460
// @baa 0x014c7480
void sub_014c7480(S* p, INT Value)
{
    p->vf_18(Value);
}

int sub_005e1960(...);
int sub_014ba4d0(...);
int sub_014bb260(void);
extern undefined4 g_026667a8;
extern undefined4 g_026dd938;
// @baa 0x014c74a0
void sub_014c74a0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026dd938 == 0) {
    g_026dd938 = sub_014ba4d0(L"UnrealEd");
    sub_014bb260();
  }
  sub_005e1960(g_026dd938,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x014c79f0
// @baa 0x014c7b00
int UPlayerInputMask_CustomDrawProxy::vf_000(void) { return 1; }

// @baa 0x014c7b10
bool UPlayerInputMask_CustomDrawProxy::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x014c7b50
IMPLEMENT_CLASS_AT(UPlayerInputMask_CustomInputProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditorProperties.cpp", 21);

// @baa 0x014c7c60
int UPlayerInputMask_CustomInputProxy::vf_000(void) { return 1; }

// @baa 0x014c7c70
bool UPlayerInputMask_CustomInputProxy::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x014c7cb0
IMPLEMENT_CLASS_AT(UUIState_CustomInputProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditorProperties.cpp", 22);

// @baa 0x014c7dc0
int UUIState_CustomInputProxy::vf_000(void) { return 1; }

// @baa 0x014c7dd0
bool UUIState_CustomInputProxy::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x014c7e10
IMPLEMENT_CLASS_AT(UUIStateClass_CustomInputProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditorProperties.cpp", 23);

// @baa 0x014c7f20
int UUIStateClass_CustomInputProxy::vf_000(void) { return 1; }

// @baa 0x014c7f30
bool UUIStateClass_CustomInputProxy::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x014c7f70
IMPLEMENT_CLASS_AT(UCustomInputProxy_Base, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditorProperties.cpp", 25);

// @baa 0x014c8080
int UCustomInputProxy_Base::vf_000(void) { return 1; }

// @baa 0x014c8090
bool UCustomInputProxy_Base::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern undefined * g_022ba0d8;
// @baa 0x014c82b0
undefined4 * UObject::sub_014c82b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022ba0d8);
  return param_1;
}

// @baa 0x014c82d0
IMPLEMENT_CLASS_AT(USequenceOpHelper_CalloutInputProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditorWindows.cpp", 114);

// @baa 0x014c8330
// @baa 0x014c8350
// @baa 0x014c8460
int UUISequenceHelper::vf_000(void) { return 1; }

// @baa 0x014c8470
bool UUISequenceHelper::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x014c84b0
// @baa 0x014c85c0
int UUIEvent_MetaObjectHelper::vf_000(void) { return 1; }

// @baa 0x014c85d0
bool UUIEvent_MetaObjectHelper::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x014c8610
// @baa 0x014c8720
int UUISequenceObjectHelper::vf_000(void) { return 1; }

// @baa 0x014c8730
bool UUISequenceObjectHelper::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x014c8770
// @baa 0x014c8880
int USequenceOpHelper_CalloutInputProxy::vf_000(void) { return 1; }

// @baa 0x014c8890
bool USequenceOpHelper_CalloutInputProxy::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x014c88d0
void USequenceOpHelper_CalloutInputProxy::vf_10c(int a0, int a1) {  }

int sub_014c5f50(void);
// @baa 0x014c8a10
undefined4 USoundNodeWave::sub_014c8a10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014c5f50();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern "C" void sub_014c9fd0();
struct CNode {
    // 0x00
    void* Unk00;
    // 0x04
    void* Unk04;
    void sub_014cb810();
};

// @baa 0x014cb810
void CNode::sub_014cb810()
{
    Unk04 = *(void**)((char*)Unk04 + 0x34);
    sub_014c9fd0();
}

struct C_014cb820 { char pad[36]; TArray<int> A; const int* sub_014cb820() const; };

// @baa 0x014cb820
const int* C_014cb820::sub_014cb820() const { return &A(0); }

struct T_014ce460;
// @baa 0x014ce460
template INT TArray<T_014ce460*>::RemoveItem(T_014ce460* const&);

struct S16 {
    INT f00;
    INT f04;
    INT f08;
    INT f0c;
    S16* sub_014ce830();
};

// @baa 0x014ce830
S16* S16::sub_014ce830()
{
    f00 = 0;
    f04 = 0;
    f08 = 0;
    f0c = 0;
    return this;
}

struct sub_014c5ef0_sub {
    virtual void sub_00000000();
    virtual void sub_00000001();
};

struct sub_014c5ef0_owner {
    char _pad[0x1a4];
    sub_014c5ef0_sub _sub;
    void sub_014c5ef0(sub_014c5ef0_owner* arg);
};

// @baa 0x014c5ef0
void sub_014c5ef0_owner::sub_014c5ef0(sub_014c5ef0_owner* arg)
{
    arg->_sub.sub_00000001();
}

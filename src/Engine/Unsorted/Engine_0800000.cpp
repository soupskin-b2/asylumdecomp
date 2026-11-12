// Engine_0800000.cpp (part 1 of 6): 315 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00802290
void sub_00802290(void) {  }

struct C {
    int Unk0;
    int Unk4;
    int sub_008023e0();
};

// @baa 0x008023e0
int C::sub_008023e0()
{
    return Unk4 == 0 ? -1 : 0;
}

struct C_008023f0 { int sub_008023f0(void); };

// @baa 0x008023f0
int C_008023f0::sub_008023f0(void) { return *(int*)((char*)this + 4); }

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_00802590();
};

// @baa 0x00802590
S *S::sub_00802590()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct S_008025c0 {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x008025c0
void sub_008025c0(S_008025c0* p, INT Value)
{
    p->vf_18(Value);
}

struct C_008025e0 { C_008025e0* sub_008025e0(void); };

// @baa 0x008025e0
C_008025e0* C_008025e0::sub_008025e0(void) { return this; }

struct C_00802630 {
    undefined4 sub_00802630();
};

// @baa 0x00802630
undefined4 C_00802630::sub_00802630(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_00802730 {
    void sub_00802730();
};

extern undefined4 g_01f3de50;
extern undefined4 g_01f3de54;
// @baa 0x00802730
void C_00802730::sub_00802730(void)
{
    int param_1 = (int)this;

  *(undefined ***)(param_1 + -0x18) = (undefined **)(&g_01f3de54);
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x14) + 4) + -0x14 + param_1) = (undefined **)(&g_01f3de50);
  return;
}

// @baa 0x00802750
int sub_00802750(void) { return 0; }

// @baa 0x00802760
int sub_00802760(void) { return 0; }

struct C_00802770 {
    void sub_00802770();
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
extern undefined4 g_01ec1274;
// @baa 0x00802770
void C_00802770::sub_00802770(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01f3de54);
  *(undefined ***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = (undefined **)(&g_01f3de50);
  param_1[6] = (undefined4)(&g_01ec1274);
  if (param_1[7] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_00802840 { C_00802840* sub_00802840(void); };

// @baa 0x00802840
C_00802840* C_00802840::sub_00802840(void) { return this; }

struct C_00802850 {
    void sub_00802850();
};

// @baa 0x00802850
void C_00802850::sub_00802850(void)
{
    int param_1 = (int)this;

  *(undefined ***)(param_1 + -0x24) = (undefined **)(&g_01f3de54);
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x20) + 4) + -0x20 + param_1) = (undefined **)(&g_01f3de50);
  return;
}

struct C_00802870 {
    void sub_00802870();
};

// @baa 0x00802870
void C_00802870::sub_00802870(void)
{
    uint * param_1 = (uint *)this;

  *param_1 = *param_1 & 1;
  return;
}

int sub_00716880(void);
int sub_00732c70(...);
extern undefined4 g_026b2244;
// @baa 0x00802880
int sub_00802880(void)
{
  if (g_026b2244 == 0) {
    g_026b2244 = sub_00732c70(L"Engine");
    sub_00716880();
  }
  return g_026b2244;
}

int sub_006aa460(void);
int sub_006cc770(...);
extern undefined4 g_026b0d8c;
// @baa 0x008028b0
int sub_008028b0(void)
{
  if (g_026b0d8c == 0) {
    g_026b0d8c = sub_006cc770(L"Engine");
    sub_006aa460();
  }
  return g_026b0d8c;
}

struct C_008028e0 { C_008028e0* sub_008028e0(int a0); };

// @baa 0x008028e0
C_008028e0* C_008028e0::sub_008028e0(int a0) { return this; }

struct C_008028f0 { C_008028f0* sub_008028f0(int a0); };

// @baa 0x008028f0
C_008028f0* C_008028f0::sub_008028f0(int a0) { return this; }

struct S_008029b0 {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x008029b0
void sub_008029b0(S_008029b0* p, INT Value)
{
    p->vf_18(Value);
}

int sub_009b0b90(void);
int sub_009c3e00(...);
extern undefined4 g_026b62bc;
// @baa 0x008029d0
int sub_008029d0(void)
{
  if (g_026b62bc == 0) {
    g_026b62bc = sub_009c3e00(L"Engine");
    sub_009b0b90();
  }
  return g_026b62bc;
}

// @baa 0x00802a00
int sub_00802a00(int a0, int a1) { return a1; }

// @baa 0x00802a40
int sub_00802a40(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_01f3de80;
// @baa 0x00802a50
undefined4 * UObject::sub_00802a50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f3de80);
  return param_1;
}

// @baa 0x00802a70
IMPLEMENT_CLASS_AT(UMaterialEffect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnMaterialEffect.cpp", 11);

// @baa 0x00802ad0
struct C_00802af0 {
    void* sub_00802af0(int param1);
};

// @baa 0x00802af0
void* C_00802af0::sub_00802af0(int param1)
{
    return this;
}

struct C_00802b40 {
    struct C_00802b40* sub_00802b40(undefined4 param1);
};

// @baa 0x00802b40
struct C_00802b40* C_00802b40::sub_00802b40(undefined4 param1)
{
    return this;
}

struct C_00802bf0 { C_00802bf0* sub_00802bf0(int a0); };

// @baa 0x00802bf0
C_00802bf0* C_00802bf0::sub_00802bf0(int a0) { return this; }

struct C_00802c00 { C_00802c00* sub_00802c00(int a0); };

// @baa 0x00802c00
C_00802c00* C_00802c00::sub_00802c00(int a0) { return this; }

// @baa 0x008038a0
int sub_008038a0(void) { return 0; }

// @baa 0x008038f0
undefined4 AActor::vf_178(void)
{
    int param_1 = (int)this;
  if (((*(char *)(param_1 + 0x90) == '\0') || (*(char *)(param_1 + 0x90) == '\x05')) &&
     ((5.0 < *(float *)(*(int *)(param_1 + 0xb0) + 0x2dc) - *(float *)(param_1 + 0xbc) ||
      (*(char *)(*(int *)(param_1 + 0xb0) + 0x334) == '\x01')))) {
    return 1;
  }
  return 0;
}

// @baa 0x00803ae0
int __stdcall sub_00803ae0(int a0) { return 0; }

// @baa 0x00803b30
int __stdcall sub_00803b30(int a0) { return 1; }

struct C_00803c00 {
    void sub_00a497e0();
    void sub_00803c00();
};

// @baa 0x00803c00
void C_00803c00::sub_00803c00()
{
    this->sub_00a497e0();
}

struct C_00803c10 { int a, b, c; C_00803c10(); };

// @baa 0x00803c10
C_00803c10::C_00803c10() : a(0), b(0), c(0) {}

struct C_00803c40 {
    undefined4 sub_00803c40();
};

// @baa 0x00803c40
undefined4 C_00803c40::sub_00803c40(void)
{
    int * param_1 = (int *)this;

  if ((*param_1 != 0) && (param_1[1] != 0)) {
    return 1;
  }
  return 0;
}

struct C_00803c60 {
    undefined4 sub_00803c60(undefined4);
};

// @baa 0x00803c60
undefined4 C_00803c60::sub_00803c60(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  if (param_1[2] != 0) {
    return *param_1;
  }
  return param_2;
}

struct C_00803c80 { int sub_00803c80(void); };

// @baa 0x00803c80
int C_00803c80::sub_00803c80(void) { return *(int*)((char*)this + 4); }

// @baa 0x00803cf0
void ALight::vf_354(void) {  }

int sub_006d8820(void);
int sub_007116e0(...);
extern undefined4 g_026b1290;
// @baa 0x00804280
int sub_00804280(void)
{
  if (g_026b1290 == 0) {
    g_026b1290 = sub_007116e0(L"Engine");
    sub_006d8820();
  }
  return g_026b1290;
}

// @baa 0x008042b0
// @baa 0x008043c0
int UMaterialEffect::vf_000(void) { return 1; }

// @baa 0x008043d0
bool UMaterialEffect::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern char g_01f3a524[];
// @baa 0x00804920
int sub_00804920(void) { return (int)g_01f3a524; }

extern char g_01ebb554[];
struct C_00804930 { void sub_00804930(void); };

// @baa 0x00804930
void C_00804930::sub_00804930(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00804940 {
    undefined4 * sub_00804940(byte);
};

int sub_0053dfa0(...);
// @baa 0x00804940
undefined4 * C_00804940::sub_00804940(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined4 g_025e30f8;
// @baa 0x00804990
undefined4 UModelComponent::vf_24c(void)
{
    int param_1 = (int)this;

  if ((*(int *)(*(int *)(param_1 + 0x1a4) + 0xbb4) == 0) && (g_025e30f8 == 0)) {
    return 0;
  }
  return 1;
}

// @baa 0x00804b40
void sub_00804b40(void) {  }

// @baa 0x00804b50
void sub_00804b50(void) {  }

// @baa 0x00804e60
void sub_00804e60(void) {  }

// @baa 0x00804f80
int UModelComponent::vf_000(void) { return 1; }

// @baa 0x00804f90
bool UModelComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00804fd0 { C_00804fd0* sub_00804fd0(void); };

// @baa 0x00804fd0
C_00804fd0* C_00804fd0::sub_00804fd0(void) { return this; }

// @baa 0x00804fe0
int UModelComponent::sub_00804fe0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00804ff0
int UModelComponent::sub_00804ff0(void) { return *(int*)((char*)this + 4); }

// @baa 0x00805040
int sub_00805040(int param_1, int param_2)
{
  return *(int *)(param_2 + 0x18) * *(int *)(param_2 + 0x14) -
         *(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x14);
}

// @baa 0x008051a0
int UModelComponent::sub_008051a0(void) { return *(int*)((char*)this + 4); }

// @baa 0x008051b0
int UModelComponent::vf_200(void) { return 1; }

struct C_008051c0 {
    void sub_008051c0();
};

int sub_0053df70(...);
// @baa 0x008051c0
void C_008051c0::sub_008051c0(void)
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

struct C_008051f0 { int a, b, c; C_008051f0(); };

// @baa 0x008051f0
C_008051f0::C_008051f0() : a(0), b(0), c(0) {}

struct C_00805200 {
    void sub_00805200();
};

// @baa 0x00805200
void C_00805200::sub_00805200(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 0xc,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00805230 {
    void sub_00805230();
};

// @baa 0x00805230
void C_00805230::sub_00805230(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 2,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00805260 {
    void sub_00805260();
};

// @baa 0x00805260
void C_00805260::sub_00805260(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 0x124,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_008058e0 { C_008058e0* sub_008058e0(int a0); };

// @baa 0x008058e0
C_008058e0* C_008058e0::sub_008058e0(int a0) { return this; }

// @baa 0x008058f0
int UObject::sub_008058f0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00805970
int UObject::sub_00805970(void) { return *(int*)((char*)this + 0); }

// @baa 0x008059f0
int UObject::sub_008059f0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00805a00
int UObject::sub_00805a00(void) { return *(int*)((char*)this + 0); }

struct S_00805a10 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00805a10(INT Index) const;
};

// @baa 0x00805a10
const DWORD* S_00805a10::sub_00805a10(INT Index) const
{
    return &Items(Index);
}

struct T_00805a90 { int x; };

// @baa 0x00805a90
template T_00805a90& TIndirectArray<T_00805a90>::operator()(INT);

// @baa 0x00805ae0
int UObject::sub_00805ae0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00805af0
int UObject::sub_00805af0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00805b70
int UObject::sub_00805b70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x00805b80
int UObject::sub_00805b80(void) { return *(int*)((char*)this + 0); }

// @baa 0x00805c30
int UObject::sub_00805c30(void) { return *(int*)((char*)this + 0); }

// @baa 0x00805c60
int UObject::sub_00805c60(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x40 + *param_1;
}

struct C_00805cf0 { int sub_00805cf0(void); };

// @baa 0x00805cf0
int C_00805cf0::sub_00805cf0(void) { return *(int*)((char*)this + 0); }

struct C_00805e70 { int sub_00805e70(void); };

// @baa 0x00805e70
int C_00805e70::sub_00805e70(void) { return *(int*)((char*)this + 0); }

struct C_00805eb0 { int sub_00805eb0(void); };

// @baa 0x00805eb0
int C_00805eb0::sub_00805eb0(void) { return *(int*)((char*)this + 0); }

struct C_00805ef0 { int sub_00805ef0(void); };

// @baa 0x00805ef0
int C_00805ef0::sub_00805ef0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00805fa0
int sub_00805fa0(int a0) { return a0; }

// @baa 0x00805fb0
bool sub_00805fb0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00805fc0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_00805fc0* sub_00805fc0(INT value);
};

// @baa 0x00805fc0
C_00805fc0* C_00805fc0::sub_00805fc0(INT value)
{
    Unk00 = value;
    Unk04 = 4294967295;
    return this;
}

// @baa 0x00806050
void __stdcall sub_00806050(int a0, int a1) {  }

struct C_00806060 { int sub_00806060(void); };

// @baa 0x00806060
int C_00806060::sub_00806060(void) { return *(int*)((char*)this + 0); }

struct C_00806070 { int sub_00806070(void); };

// @baa 0x00806070
int C_00806070::sub_00806070(void) { return *(int*)((char*)this + 0); }

struct C_00806110 { int sub_00806110(void); };

// @baa 0x00806110
int C_00806110::sub_00806110(void) { return *(int*)((char*)this + 0); }

struct C_00806120 { int sub_00806120(void); };

// @baa 0x00806120
int C_00806120::sub_00806120(void) { return *(int*)((char*)this + 0); }

struct C_008061a0 { int sub_008061a0(void); };

// @baa 0x008061a0
int C_008061a0::sub_008061a0(void) { return *(int*)((char*)this + 0); }

struct C_008061b0 {
    int sub_008061b0(int);
};

// @baa 0x008061b0
int C_008061b0::sub_008061b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_00806200 {
    undefined4 sub_00806200();
};

// @baa 0x00806200
undefined4 C_00806200::sub_00806200(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

struct C_00806210 {
    int sub_00806210(int);
};

// @baa 0x00806210
int C_00806210::sub_00806210(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00806220 { int sub_00806220(void); };

// @baa 0x00806220
int C_00806220::sub_00806220(void) { return *(int*)((char*)this + 0); }

struct C_00806230 { int sub_00806230(void); };

// @baa 0x00806230
int C_00806230::sub_00806230(void) { return *(int*)((char*)this + 0); }

struct C_00806240 {
    int sub_00806240();
};

// @baa 0x00806240
int C_00806240::sub_00806240(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00806250 {
    int sub_00806250();
};

// @baa 0x00806250
int C_00806250::sub_00806250(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00806260 { int a, b; C_00806260(int, int); };

// @baa 0x00806260
C_00806260::C_00806260(int x, int y) : a(x), b(y) {}

struct C_00806280 {
    int sub_00806280();
};

// @baa 0x00806280
int C_00806280::sub_00806280(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00806290 { int a, b; C_00806290(int, int); };

// @baa 0x00806290
C_00806290::C_00806290(int x, int y) : a(x), b(y) {}

struct C_008062b0 {
    int sub_008062b0();
};

// @baa 0x008062b0
int C_008062b0::sub_008062b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_008062c0 { int a, b; C_008062c0(int, int); };

// @baa 0x008062c0
C_008062c0::C_008062c0(int x, int y) : a(x), b(y) {}

struct C_008062e0 {
    int sub_008062e0();
};

// @baa 0x008062e0
int C_008062e0::sub_008062e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_008062f0 { int a, b; C_008062f0(int, int); };

// @baa 0x008062f0
C_008062f0::C_008062f0(int x, int y) : a(x), b(y) {}

struct C_00806310 {
    int sub_00806310();
};

// @baa 0x00806310
int C_00806310::sub_00806310(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00806320 { int a, b; C_00806320(int, int); };

// @baa 0x00806320
C_00806320::C_00806320(int x, int y) : a(x), b(y) {}

struct C_00806340 {
    int sub_00806340();
};

// @baa 0x00806340
int C_00806340::sub_00806340(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00806350 {
    int sub_00806350();
};

// @baa 0x00806350
int C_00806350::sub_00806350(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00806360 { int a, b; C_00806360(int, int); };

// @baa 0x00806360
C_00806360::C_00806360(int x, int y) : a(x), b(y) {}

struct C_00806380 {
    int sub_00806380();
};

// @baa 0x00806380
int C_00806380::sub_00806380(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_008063b0 {
    int sub_008063b0();
};

// @baa 0x008063b0
int C_008063b0::sub_008063b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_008063c0 { int a, b; C_008063c0(int, int); };

// @baa 0x008063c0
C_008063c0::C_008063c0(int x, int y) : a(x), b(y) {}

struct C_008063e0 { C_008063e0* sub_008063e0(void); };

// @baa 0x008063e0
C_008063e0* C_008063e0::sub_008063e0(void) { return this; }

struct C_008063f0 { C_008063f0* sub_008063f0(void); };

// @baa 0x008063f0
C_008063f0* C_008063f0::sub_008063f0(void) { return this; }

struct C_00806400 { C_00806400* sub_00806400(void); };

// @baa 0x00806400
C_00806400* C_00806400::sub_00806400(void) { return this; }

struct C_00806410 {
    void sub_00806410();
};

// @baa 0x00806410
void C_00806410::sub_00806410(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_0053dfa0(*param_1);
    *param_1 = 0;
  }
  return;
}

struct C_00806430 { C_00806430* sub_00806430(void); };

// @baa 0x00806430
C_00806430* C_00806430::sub_00806430(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00806440 { int sub_00806440(void); };

// @baa 0x00806440
int C_00806440::sub_00806440(void) { return *(int*)((char*)this + 0); }

struct C_00806480 { int sub_00806480(void); };

// @baa 0x00806480
int C_00806480::sub_00806480(void) { return *(int*)((char*)this + 0); }

// @baa 0x008064b0
bool sub_008064b0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_008064c0 { int sub_008064c0(void); };

// @baa 0x008064c0
int C_008064c0::sub_008064c0(void) { return *(int*)((char*)this + 0); }

// @baa 0x008064d0
int sub_008064d0(int a0) { return *(int*)a0; }

// @baa 0x008064e0
bool sub_008064e0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00806520 {
    void sub_00806520(undefined4 *);
};

// @baa 0x00806520
void C_00806520::sub_00806520(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_00806570 { int sub_00806570(void); };

// @baa 0x00806570
int C_00806570::sub_00806570(void) { return *(int*)((char*)this + 0); }

// @baa 0x00806580
int sub_00806580(int a0) { return *(int*)a0; }

// @baa 0x00806590
bool sub_00806590(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_008065a0 { int a, b; C_008065a0(const C_008065a0 &); };

// @baa 0x008065a0
C_008065a0::C_008065a0(const C_008065a0 &o) : a(o.a), b(o.b) {}

// @baa 0x00806600
int sub_00806600(int a0) { return *(int*)a0; }

// @baa 0x00806610
bool sub_00806610(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00806650 {
    void sub_00806650(undefined4 *);
};

// @baa 0x00806650
void C_00806650::sub_00806650(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x008066a0
int sub_008066a0(int a0) { return *(int*)a0; }

// @baa 0x008066b0
bool sub_008066b0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_008066c0 { int a, b; C_008066c0(const C_008066c0 &); };

// @baa 0x008066c0
C_008066c0::C_008066c0(const C_008066c0 &o) : a(o.a), b(o.b) {}

struct C_00806720 { int sub_00806720(void); };

// @baa 0x00806720
int C_00806720::sub_00806720(void) { return *(int*)((char*)this + 0); }

// @baa 0x00806730
int sub_00806730(int a0) { return *(int*)a0; }

// @baa 0x00806740
bool sub_00806740(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00806750 { int a, b; C_00806750(const C_00806750 &); };

// @baa 0x00806750
C_00806750::C_00806750(const C_00806750 &o) : a(o.a), b(o.b) {}

// @baa 0x008067b0
int sub_008067b0(int a0) { return *(int*)a0; }

// @baa 0x008067c0
bool sub_008067c0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_008067d0 { int a, b; C_008067d0(const C_008067d0 &); };

// @baa 0x008067d0
C_008067d0::C_008067d0(const C_008067d0 &o) : a(o.a), b(o.b) {}

// @baa 0x00806830
undefined2 sub_00806830(undefined2 * param_1)
{
  return *param_1;
}

// @baa 0x00806840
bool sub_00806840(short param_1, short param_2)
{
  return param_1 == param_2;
}

struct C_008068b0 { int sub_008068b0(void); };

// @baa 0x008068b0
int C_008068b0::sub_008068b0(void) { return *(int*)((char*)this + 0); }

struct C_008068c0 { C_008068c0* sub_008068c0(void); };

// @baa 0x008068c0
C_008068c0* C_008068c0::sub_008068c0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_008068d0 { int sub_008068d0(void); };

// @baa 0x008068d0
int C_008068d0::sub_008068d0(void) { return *(int*)((char*)this + 0); }

// @baa 0x008068e0
int sub_008068e0(int a0) { return *(int*)a0; }

// @baa 0x008068f0
bool sub_008068f0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00806900 { int a, b; C_00806900(const C_00806900 &); };

// @baa 0x00806900
C_00806900::C_00806900(const C_00806900 &o) : a(o.a), b(o.b) {}

struct C_00806960 { int sub_00806960(void); };

// @baa 0x00806960
int C_00806960::sub_00806960(void) { return *(int*)((char*)this + 0); }

struct C_00806970 { int sub_00806970(void); };

// @baa 0x00806970
int C_00806970::sub_00806970(void) { return *(int*)((char*)this + 0); }

struct C_00806980 {
    char pad[12];
    int f1;
    int f2;
    C_00806980* sub_00806980();
};

// @baa 0x00806980
C_00806980* C_00806980::sub_00806980()
{
    f1 = 0;
    f2 = 0;
    return this;
}

struct C_00806990{
void sub_00806990();
};

extern undefined4*g_026b0d94;
// @baa 0x00806990
void C_00806990::sub_00806990(void)
{
int*param_1=(int*)this;

if(*param_1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x238))((int)(*param_1));
}
return;
}

struct C_008069b0 { int sub_008069b0(void); };

// @baa 0x008069b0
int C_008069b0::sub_008069b0(void) { return *(int*)((char*)this + 0); }

struct C_008069c0 { int a; C_008069c0(int); };

// @baa 0x008069c0
C_008069c0::C_008069c0(int x) : a(x) {}

struct C_008069d0 {
    int sub_008069d0(int);
};

// @baa 0x008069d0
int C_008069d0::sub_008069d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x008069e0
int sub_008069e0(int a0) { return a0; }

// @baa 0x008069f0
unsigned int sub_008069f0(unsigned short param_1)
{
    return param_1;
}

struct C_00806a00 { C_00806a00* sub_00806a00(void); };

// @baa 0x00806a00
C_00806a00* C_00806a00::sub_00806a00(void) { return this; }

struct C_00806a10 { int sub_00806a10(void); };

// @baa 0x00806a10
int C_00806a10::sub_00806a10(void) { return *(int*)((char*)this + 0); }

struct C_00806a20 { int sub_00806a20(void); };

// @baa 0x00806a20
int C_00806a20::sub_00806a20(void) { return *(int*)((char*)this + 0); }

struct C_00806a30 { int sub_00806a30(void); };

// @baa 0x00806a30
int C_00806a30::sub_00806a30(void) { return *(int*)((char*)this + 0); }

struct C_00806a40 {
    int sub_00806a40(int);
};

// @baa 0x00806a40
int C_00806a40::sub_00806a40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00806a50 {
    int sub_00806a50(int);
};

// @baa 0x00806a50
int C_00806a50::sub_00806a50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00806a60 {
    int sub_00806a60(int);
};

// @baa 0x00806a60
int C_00806a60::sub_00806a60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00806a70 {
    int sub_00806a70(int);
};

// @baa 0x00806a70
int C_00806a70::sub_00806a70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00806a80 {
    int sub_00806a80(int);
};

// @baa 0x00806a80
int C_00806a80::sub_00806a80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00806a90 { int sub_00806a90(void); };

// @baa 0x00806a90
int C_00806a90::sub_00806a90(void) { return *(int*)((char*)this + 20); }

struct C_00806aa0 { int sub_00806aa0(void); };

// @baa 0x00806aa0
int C_00806aa0::sub_00806aa0(void) { return *(int*)((char*)this + 20); }

struct C_00806ab0 { int sub_00806ab0(void); };

// @baa 0x00806ab0
int C_00806ab0::sub_00806ab0(void) { return *(int*)((char*)this + 20); }

struct C_00806ac0 { int sub_00806ac0(void); };

// @baa 0x00806ac0
int C_00806ac0::sub_00806ac0(void) { return *(int*)((char*)this + 20); }

struct C_00806ad0 { int sub_00806ad0(void); };

// @baa 0x00806ad0
int C_00806ad0::sub_00806ad0(void) { return *(int*)((char*)this + 20); }

struct C_00806ae0 { int sub_00806ae0(void); };

// @baa 0x00806ae0
int C_00806ae0::sub_00806ae0(void) { return *(int*)((char*)this + 20); }

struct C_00806af0 { int sub_00806af0(void); };

// @baa 0x00806af0
int C_00806af0::sub_00806af0(void) { return *(int*)((char*)this + 20); }

struct C_00806b00 { int sub_00806b00(void); };

// @baa 0x00806b00
int C_00806b00::sub_00806b00(void) { return *(int*)((char*)this + 20); }

struct C_00806b10 { int sub_00806b10(void); };

// @baa 0x00806b10
int C_00806b10::sub_00806b10(void) { return *(int*)((char*)this + 20); }

struct C_00806b20 { int sub_00806b20(void); };

// @baa 0x00806b20
int C_00806b20::sub_00806b20(void) { return *(int*)((char*)this + 20); }

struct C_00806b30 { int sub_00806b30(void); };

// @baa 0x00806b30
int C_00806b30::sub_00806b30(void) { return *(int*)((char*)this + 20); }

struct C_00806b40 { int sub_00806b40(void); };

// @baa 0x00806b40
int C_00806b40::sub_00806b40(void) { return *(int*)((char*)this + 20); }

struct C_00806b50 { int sub_00806b50(void); };

// @baa 0x00806b50
int C_00806b50::sub_00806b50(void) { return *(int*)((char*)this + 20); }

struct C_00806b60 { int sub_00806b60(void); };

// @baa 0x00806b60
int C_00806b60::sub_00806b60(void) { return *(int*)((char*)this + 20); }

struct C_00806b70 { int sub_00806b70(void); };

// @baa 0x00806b70
int C_00806b70::sub_00806b70(void) { return *(int*)((char*)this + 20); }

struct C_00806b80 {
    int sub_00806b80(int);
};

// @baa 0x00806b80
int C_00806b80::sub_00806b80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00806bf0 {
    undefined4 sub_00806bf0();
};

int sub_007795b0(...);
int sub_0077ea80(void);
int sub_00806c3f(...);
extern undefined4 g_026b3b74;
// @baa 0x00806bf0
undefined4 C_00806bf0::sub_00806bf0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (g_026b3b74 == 0) {
      g_026b3b74 = sub_007795b0(L"Engine");
      sub_0077ea80();
      if (g_026b3b74 == 0) {
sub_00806c3f:
        return *(undefined4 *)(param_1 + 0x2c);
      }
    }
    for (iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x28); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0x30)) {
      if (iVar1 == g_026b3b74) goto sub_00806c3f;
    }
  }
  return 0;
}

// @baa 0x00806e70
void sub_00806e70(undefined4 * param_1, undefined4 param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
  }
  return;
}

int sub_00627f00(...);
// @baa 0x00806e80
void sub_00806e80(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0xc);
  return;
}

// @baa 0x00806ea0
uint sub_00806ea0(uint param_1, uint param_2)
{
  return param_1 | -(uint)(param_1 == 0) & param_2;
}

struct C_00806ef0 {
    void sub_00806ef0();
};

// @baa 0x00806ef0
void C_00806ef0::sub_00806ef0(void)
{
    int * param_1 = (int *)this;

  *param_1 = *param_1 + 1;
  return;
}

struct C_00806f00 {
    void sub_00806f00();
};

// @baa 0x00806f00
void C_00806f00::sub_00806f00(void)
{
    int * param_1 = (int *)this;

  *param_1 = *param_1 + 1;
  return;
}

struct C_00806f10 { int a, b; C_00806f10(const C_00806f10 &); };

// @baa 0x00806f10
C_00806f10::C_00806f10(const C_00806f10 &o) : a(o.a), b(o.b) {}

struct C_00806f60 { int a, b; C_00806f60(const C_00806f60 &); };

// @baa 0x00806f60
C_00806f60::C_00806f60(const C_00806f60 &o) : a(o.a), b(o.b) {}

struct C_00806f80 { int a, b; C_00806f80(const C_00806f80 &); };

// @baa 0x00806f80
C_00806f80::C_00806f80(const C_00806f80 &o) : a(o.a), b(o.b) {}

struct C_00806fa0 { int a, b; C_00806fa0(const C_00806fa0 &); };

// @baa 0x00806fa0
C_00806fa0::C_00806fa0(const C_00806fa0 &o) : a(o.a), b(o.b) {}

struct C_008070c0 { int a, b; C_008070c0(const C_008070c0 &); };

// @baa 0x008070c0
C_008070c0::C_008070c0(const C_008070c0 &o) : a(o.a), b(o.b) {}

struct C_00807240 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00807240(INT Index);
};

// @baa 0x00807240
UBOOL C_00807240::sub_00807240(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00807260 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00807260(INT Index);
};

// @baa 0x00807260
UBOOL C_00807260::sub_00807260(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00807350{
int*sub_00807350(int*);
};

// @baa 0x00807350
int*C_00807350::sub_00807350(int*param_2)
{
int*param_1=(int*)this;

int iVar1;

iVar1=*param_2;
*param_1=iVar1;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1ec))((int)(iVar1));
}
return param_1;
}

// @baa 0x008073c0
void sub_008073c0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

extern "C" void sub_00802400();
struct CNode {
    // 0x00
    void* Unk00;
    // 0x04
    void* Unk04;
    void sub_00807670();
};

// @baa 0x00807670
void CNode::sub_00807670()
{
    Unk04 = *(void**)((char*)Unk04 + 0x34);
    sub_00802400();
}

// @baa 0x008076a0
void sub_008076a0(undefined4 * param_1)
{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  return;
}

extern char g_026b0e4c[];
// @baa 0x00807830
int sub_00807830(void) { return (int)g_026b0e4c; }

int sub_00656790(void);
// @baa 0x00807990
undefined4 ULensFlare::sub_00807990(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656790();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00807a10 {
    void sub_00807a10();
};

// @baa 0x00807a10
void C_00807a10::sub_00807a10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01f3de54);
  *(undefined ***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = (undefined **)(&g_01f3de50);
  param_1[9] = (undefined4)(&g_01ec1274);
  if (param_1[10] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_00807d90 {
    void sub_00807d90();
};

// @baa 0x00807d90
void C_00807d90::sub_00807d90(void)
{
    int param_1 = (int)this;

  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if (*(int *)(param_1 + 0x5c) != iVar1) {
    *(int *)(param_1 + 0x5c) = iVar1;
    if ((*(int *)(param_1 + 0x54) != 0) || (iVar1 != 0)) {
      uVar3 = sub_0053df70(*(int *)(param_1 + 0x54),iVar1 * 0xc,8);
      *(undefined4 *)(param_1 + 0x54) = uVar3;
    }
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if (*(int *)(param_1 + 0x6c) != iVar1) {
    *(int *)(param_1 + 0x6c) = iVar1;
    if ((*(int *)(param_1 + 100) != 0) || (iVar1 != 0)) {
      uVar3 = sub_0053df70(*(int *)(param_1 + 100),iVar1 * 0xc,8);
      *(undefined4 *)(param_1 + 100) = uVar3;
    }
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x4c) != iVar1) {
    *(int *)(param_1 + 0x4c) = iVar1;
    if ((*(int *)(param_1 + 0x44) != 0) || (iVar1 != 0)) {
      uVar3 = sub_0053df70(*(int *)(param_1 + 0x44),iVar1 * 0x18,8);
      *(undefined4 *)(param_1 + 0x44) = uVar3;
    }
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x3c) != iVar1) {
    *(int *)(param_1 + 0x3c) = iVar1;
    if ((*(int *)(param_1 + 0x34) != 0) || (iVar1 != 0)) {
      uVar3 = sub_0053df70(*(int *)(param_1 + 0x34),iVar1 << 6,8);
      *(undefined4 *)(param_1 + 0x34) = uVar3;
    }
  }
  iVar1 = *(int *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x7c) != iVar1) {
    *(int *)(param_1 + 0x7c) = iVar1;
    if ((*(int *)(param_1 + 0x74) != 0) || (iVar1 != 0)) {
      uVar3 = sub_0053df70(*(int *)(param_1 + 0x74),iVar1 << 6,8);
      *(undefined4 *)(param_1 + 0x74) = uVar3;
    }
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 0x34), *(int *)(iVar1 + 0x38) != iVar2)) {
    *(int *)(iVar1 + 0x38) = iVar2;
    if ((*(int *)(iVar1 + 0x30) != 0) || (iVar2 != 0)) {
      uVar3 = sub_0053df70(*(int *)(iVar1 + 0x30),iVar2 * 0x124,8);
      *(undefined4 *)(iVar1 + 0x30) = uVar3;
    }
  }
  iVar1 = *(int *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0x8c) != iVar1) {
    *(int *)(param_1 + 0x8c) = iVar1;
    if ((*(int *)(param_1 + 0x84) != 0) || (iVar1 != 0)) {
      uVar3 = sub_0053df70(*(int *)(param_1 + 0x84),iVar1 * 4,8);
      *(undefined4 *)(param_1 + 0x84) = uVar3;
    }
  }
  iVar1 = *(int *)(param_1 + 0xa0);
  if (*(int *)(param_1 + 0xa4) != iVar1) {
    *(int *)(param_1 + 0xa4) = iVar1;
    if ((*(int *)(param_1 + 0x9c) != 0) || (iVar1 != 0)) {
      uVar3 = sub_0053df70(*(int *)(param_1 + 0x9c),iVar1 * 4,8);
      *(undefined4 *)(param_1 + 0x9c) = uVar3;
    }
  }
  return;
}

struct C_008082f0 { char* sub_008082f0(void); };

// @baa 0x008082f0
char* C_008082f0::sub_008082f0(void) { return (char*)this + 68; }

struct C_00808300 {
    bool sub_00808300();
};

// @baa 0x00808300
bool C_00808300::sub_00808300(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x30) != 0;
}

// @baa 0x00808390
void sub_00808390(undefined4 * param_1, undefined4 param_2, undefined4 * param_3, undefined4 * param_4)
{
  undefined4 uVar1;
  undefined4 uVar2;
  param_1[1] = param_2;
  uVar1 = *param_3;
  param_1[3] = param_3[1];
  param_1[2] = uVar1;
  uVar1 = *param_4;
  uVar2 = param_4[1];
  *param_1 = 3;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  return;
}

struct C_00808410 {
    undefined4 sub_00808410();
};

// @baa 0x00808410
undefined4 C_00808410::sub_00808410(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x30) == 0) {
    sub_006311e0("IsValid()",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\inc\\UnShadowMap.h"
                 ,0x58,&g_01e3f3dc);
  }
  return *(undefined4 *)(param_1 + 0x30);
}

struct C_00808440 {
    int sub_00808440();
};

// @baa 0x00808440
int C_00808440::sub_00808440(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x30) == 0) {
    sub_006311e0("IsValid()",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\inc\\UnShadowMap.h"
                 ,0x59,&g_01e3f3dc);
  }
  return param_1 + 0x34;
}

struct C_00808470 {
    int sub_00808470();
};

// @baa 0x00808470
int C_00808470::sub_00808470(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x30) == 0) {
    sub_006311e0("IsValid()",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\inc\\UnShadowMap.h"
                 ,0x5a,&g_01e3f3dc);
  }
  return param_1 + 0x3c;
}

struct S_008086d0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_008086d0(INT Index);
};

// @baa 0x008086d0
DWORD* S_008086d0::sub_008086d0(INT Index)
{
    return &Items(Index);
}

struct C_00808be0 {
    void sub_00808be0(int);
};

// @baa 0x00808be0
void C_00808be0::sub_00808be0(int param_2)
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

struct S_00808c80 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00808c80(INT Index) const;
};

// @baa 0x00808c80
const DWORD* S_00808c80::sub_00808c80(INT Index) const
{
    return &Items(Index);
}

struct E { BYTE Bytes[16]; };

struct S_00808ed0 {
    TArray<E> Items; // 0x00
    E* sub_00808ed0(INT Index);
};

// @baa 0x00808ed0
E* S_00808ed0::sub_00808ed0(INT Index)
{
    return &Items(Index);
}

struct E_00808f20 { BYTE Bytes[48]; };

struct S_00808f20 {
    TArray<E_00808f20> Items; // 0x00
    E_00808f20* sub_00808f20(INT Index);
};

// @baa 0x00808f20
E_00808f20* S_00808f20::sub_00808f20(INT Index)
{
    return &Items(Index);
}

struct S_00808f70 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00808f70(INT Index);
};

// @baa 0x00808f70
DWORD* S_00808f70::sub_00808f70(INT Index)
{
    return &Items(Index);
}

struct E_00809020 { BYTE Bytes[80]; };

struct S_00809020 {
    TArray<E_00809020> Items; // 0x00
    const E_00809020* sub_00809020(INT Index) const;
};

// @baa 0x00809020
const E_00809020* S_00809020::sub_00809020(INT Index) const
{
    return &Items(Index);
}

struct E_00809070 { BYTE Bytes[12]; };

struct S_00809070 {
    TArray<E_00809070> Items; // 0x00
    const E_00809070* sub_00809070(INT Index) const;
};

// @baa 0x00809070
const E_00809070* S_00809070::sub_00809070(INT Index) const
{
    return &Items(Index);
}

struct E_008090c0 { BYTE Bytes[156]; };

struct S_008090c0 {
    TArray<E_008090c0> Items; // 0x00
    E_008090c0* sub_008090c0(INT Index);
};

// @baa 0x008090c0
E_008090c0* S_008090c0::sub_008090c0(INT Index)
{
    return &Items(Index);
}

struct E_00809110 { BYTE Bytes[44]; };

struct S_00809110 {
    TArray<E_00809110> Items; // 0x00
    E_00809110* sub_00809110(INT Index);
};

// @baa 0x00809110
E_00809110* S_00809110::sub_00809110(INT Index)
{
    return &Items(Index);
}

// @baa 0x00809190
void __stdcall sub_00809190(int a, int b) {}

struct C_008091a0 { int a, b, c; C_008091a0(); };

// @baa 0x008091a0
C_008091a0::C_008091a0() : a(0), b(0), c(0) {}

struct C_008091b0 {
    int sub_008091b0(int);
};

// @baa 0x008091b0
int C_008091b0::sub_008091b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_008091c0 {
    int sub_008091c0(int);
};

// @baa 0x008091c0
int C_008091c0::sub_008091c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_008091d0 {
    int sub_008091d0(int);
};

// @baa 0x008091d0
int C_008091d0::sub_008091d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

int sub_005413d0(...);
// @baa 0x00809210
void sub_00809210(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00809220 {
    int sub_00809220();
};

// @baa 0x00809220
int C_00809220::sub_00809220(void)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c);
}

struct C_00809230 {
    int sub_00809230(int);
};

// @baa 0x00809230
int C_00809230::sub_00809230(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00809240 {
    int sub_00809240(int);
};

// @baa 0x00809240
int C_00809240::sub_00809240(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00809250
void __stdcall sub_00809250(int a0, int a1) {  }

struct C_00809260 {
    int sub_00809260(int);
};

// @baa 0x00809260
int C_00809260::sub_00809260(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

// @baa 0x00809270
void __stdcall sub_00809270(int a0, int a1) {  }

struct C_00809280 { C_00809280* sub_00809280(void); };

// @baa 0x00809280
C_00809280* C_00809280::sub_00809280(void) { *(int*)((char*)this + 100) = 0; return this; }

struct C_00809290 {
    void sub_00809290();
};

// @baa 0x00809290
void C_00809290::sub_00809290(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 100) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 100));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return;
}

struct C_008092b0 {
    int sub_008092b0(int);
};

// @baa 0x008092b0
int C_008092b0::sub_008092b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x008092c0
void __stdcall sub_008092c0(int a0, int a1) {  }

struct C_008092d0 {
    int sub_008092d0(int);
};

// @baa 0x008092d0
int C_008092d0::sub_008092d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x9c + *param_1;
}

struct C_008092e0 {
    int sub_008092e0(int);
};

// @baa 0x008092e0
int C_008092e0::sub_008092e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

// @baa 0x008092f0
void __stdcall sub_008092f0(int a0, int a1) {  }

struct E_00809300 { BYTE Bytes[36]; };

struct S_00809300 {
    TArray<E_00809300> Items; // 0x00
    E_00809300* sub_00809300(INT Index);
};

// @baa 0x00809300
E_00809300* S_00809300::sub_00809300(INT Index)
{
    return &Items(Index);
}

struct C_00809350 { int a, b; C_00809350(const C_00809350 &); };

// @baa 0x00809350
C_00809350::C_00809350(const C_00809350 &o) : a(o.a), b(o.b) {}

struct C_008093c0 { int sub_008093c0(void); };

// @baa 0x008093c0
int C_008093c0::sub_008093c0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_008093d0 {
    int sub_008093d0(int);
};

// @baa 0x008093d0
int C_008093d0::sub_008093d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_008093e0 {
    int sub_008093e0(int);
};

// @baa 0x008093e0
int C_008093e0::sub_008093e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_008093f0 { int sub_008093f0(void); };

// @baa 0x008093f0
int C_008093f0::sub_008093f0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00809400 { int sub_00809400(void); };

// @baa 0x00809400
int C_00809400::sub_00809400(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00809410 { int sub_00809410(void); };

// @baa 0x00809410
int C_00809410::sub_00809410(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00809420 { int sub_00809420(void); };

// @baa 0x00809420
int C_00809420::sub_00809420(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00809430 { int sub_00809430(void); };

// @baa 0x00809430
int C_00809430::sub_00809430(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00809440 { int sub_00809440(void); };

// @baa 0x00809440
int C_00809440::sub_00809440(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00809450 {
    uint sub_00809450();
};

// @baa 0x00809450
uint C_00809450::sub_00809450(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 100) | -(uint)(*(uint *)(param_1 + 100) == 0) & param_1;
}

struct E_00809470 { BYTE Bytes[80]; };

struct S_00809470 {
    TArray<E_00809470> Items; // 0x00
    E_00809470* sub_00809470(INT Index);
};

// @baa 0x00809470
E_00809470* S_00809470::sub_00809470(INT Index)
{
    return &Items(Index);
}

struct C_008094f0 { int sub_008094f0(void); };

// @baa 0x008094f0
int C_008094f0::sub_008094f0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct E_00809500 { BYTE Bytes[12]; };

struct S_00809500 {
    TArray<E_00809500> Items; // 0x00
    E_00809500* sub_00809500(INT Index);
};

// @baa 0x00809500
E_00809500* S_00809500::sub_00809500(INT Index)
{
    return &Items(Index);
}

// @baa 0x00809570
void sub_00809570(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00809580 {
    int sub_00809580(int);
};

// @baa 0x00809580
int C_00809580::sub_00809580(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x1c;
}

struct C_008095a0 { int sub_008095a0(void); };

// @baa 0x008095a0
int C_008095a0::sub_008095a0(void) { return *(int*)((char*)this + 20); }

// @baa 0x008095e0
void sub_008095e0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_008095f0 {
    int sub_008095f0(int);
};

// @baa 0x008095f0
int C_008095f0::sub_008095f0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00809600 {
    int sub_00809600(int);
};

// @baa 0x00809600
int C_00809600::sub_00809600(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00809640
void sub_00809640(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00809650 {
    int sub_00809650(int);
};

// @baa 0x00809650
int C_00809650::sub_00809650(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct C_00809660 {
    int sub_00809660(int);
};

// @baa 0x00809660
int C_00809660::sub_00809660(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x008096a0
void sub_008096a0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_008096b0 {
    int sub_008096b0(int);
};

// @baa 0x008096b0
int C_008096b0::sub_008096b0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_008096c0 {
    int sub_008096c0(int);
};

// @baa 0x008096c0
int C_008096c0::sub_008096c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00809700 {
    int sub_00809700(int);
};

// @baa 0x00809700
int C_00809700::sub_00809700(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00809710 {
    int sub_00809710(int);
};

// @baa 0x00809710
int C_00809710::sub_00809710(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00809750
void sub_00809750(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00809760 {
    int sub_00809760(int);
};

// @baa 0x00809760
int C_00809760::sub_00809760(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00809770 {
    int sub_00809770(int);
};

// @baa 0x00809770
int C_00809770::sub_00809770(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_008097b0 {
    int sub_008097b0(int);
};

// @baa 0x008097b0
int C_008097b0::sub_008097b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_008097c0 {
    int sub_008097c0(int);
};

// @baa 0x008097c0
int C_008097c0::sub_008097c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_008097d0 { int sub_008097d0(void); };

// @baa 0x008097d0
int C_008097d0::sub_008097d0(void) { return *(int*)((char*)this + 20); }

// @baa 0x008097e0
void sub_008097e0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_008097f0 {
    int sub_008097f0(int);
};

// @baa 0x008097f0
int C_008097f0::sub_008097f0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00809800 {
    int sub_00809800(int);
};

// @baa 0x00809800
int C_00809800::sub_00809800(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00809810 { int sub_00809810(void); };

// @baa 0x00809810
int C_00809810::sub_00809810(void) { return *(int*)((char*)this + 20); }

struct C_00809820 {
    int sub_00809820();
};

// @baa 0x00809820
int C_00809820::sub_00809820(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00809840 { int sub_00809840(void); };

// @baa 0x00809840
int C_00809840::sub_00809840(void) { return *(int*)((char*)this + 20); }

struct C_00809850 {
    int sub_00809850();
};

// @baa 0x00809850
int C_00809850::sub_00809850(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00809870 {
    int sub_00809870();
};

// @baa 0x00809870
int C_00809870::sub_00809870(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

struct C_00809880 {
    int sub_00809880();
};

// @baa 0x00809880
int C_00809880::sub_00809880(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_008098a0 {
    int sub_008098a0();
};

// @baa 0x008098a0
int C_008098a0::sub_008098a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_008098c0 {
    int sub_008098c0();
};

// @baa 0x008098c0
int C_008098c0::sub_008098c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_008098e0 {
    int sub_008098e0();
};

// @baa 0x008098e0
int C_008098e0::sub_008098e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00809900 {
    int sub_00809900();
};

// @baa 0x00809900
int C_00809900::sub_00809900(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00809920 {
    int sub_00809920();
};

// @baa 0x00809920
int C_00809920::sub_00809920(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00809940 {
    int sub_00809940();
};

// @baa 0x00809940
int C_00809940::sub_00809940(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00809960 {
    int sub_00809960();
};

// @baa 0x00809960
int C_00809960::sub_00809960(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00809980 {
    int sub_00809980(int);
};

// @baa 0x00809980
int C_00809980::sub_00809980(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00809990 {
    int sub_00809990(int);
};

// @baa 0x00809990
int C_00809990::sub_00809990(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_008099b0 {
    int sub_008099b0();
};

// @baa 0x008099b0
int C_008099b0::sub_008099b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_008099c0 {
    int sub_008099c0();
};

// @baa 0x008099c0
int C_008099c0::sub_008099c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_008099e0 {
    int sub_008099e0();
};

// @baa 0x008099e0
int C_008099e0::sub_008099e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00809a00 {
    int sub_00809a00();
};

// @baa 0x00809a00
int C_00809a00::sub_00809a00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00809a10 {
    int sub_00809a10();
};

// @baa 0x00809a10
int C_00809a10::sub_00809a10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00809a30 {
    int sub_00809a30();
};

// @baa 0x00809a30
int C_00809a30::sub_00809a30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00809a40 {
    int sub_00809a40();
};

// @baa 0x00809a40
int C_00809a40::sub_00809a40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00809a60 {
    int sub_00809a60();
};

// @baa 0x00809a60
int C_00809a60::sub_00809a60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00809a70 {
    int sub_00809a70();
};

// @baa 0x00809a70
int C_00809a70::sub_00809a70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00809a90 {
    int sub_00809a90();
};

// @baa 0x00809a90
int C_00809a90::sub_00809a90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00809aa0 {
    int sub_00809aa0();
};

// @baa 0x00809aa0
int C_00809aa0::sub_00809aa0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x0080a460
void sub_0080a460(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x0080a4b0
void sub_0080a4b0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x0080a570
void sub_0080a570(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x0080a590
void sub_0080a590(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x0080a5b0
void sub_0080a5b0(undefined2 * param_1, undefined2 * param_2)
{
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  }
  return;
}

// @baa 0x0080a5d0
void sub_0080a5d0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct C_0080a6d0 { void sub_0080a6d0(void); };

// @baa 0x0080a6d0
void C_0080a6d0::sub_0080a6d0(void) { *(int*)((char*)this + 4) = 0; }

// @baa 0x0080a9f0
void sub_0080a9f0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_0080ace0 {
    FString sub_0080ace0();
};

// @baa 0x0080ace0
FString C_0080ace0::sub_0080ace0()
{
    return TEXT("Shadow volume vertices");
}

int sub_00807930(void);
// @baa 0x0080ad10
undefined4 ULensFlare::sub_0080ad10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00807930();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0080c7f0
void APointLight::vf_09c(void) {  }

struct C_0080cac0 { int sub_0080cac0(void); };

// @baa 0x0080cac0
int C_0080cac0::sub_0080cac0(void) { return *(int*)((char*)this + 160); }

// @baa 0x0080cad0
int sub_0080cad0(void) { return 1; }

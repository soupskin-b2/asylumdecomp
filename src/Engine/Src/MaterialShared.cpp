// MaterialShared.cpp (part 1 of 2): 81 functions
// Placed here by: neighbours 51, callers 6, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct T_006df5f0 { int x; };

// @baa 0x006df5f0
template T_006df5f0& TIndirectArray<T_006df5f0>::operator()(INT);

struct T_006df640 { int x; };

// @baa 0x006df640
template const T_006df640& TIndirectArray<T_006df640>::operator()(INT) const;

struct C{
int sub_006e61a0(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x006e61a0
int C::sub_006e61a0(undefined4*param_2)
{
int*param_1=(int*)this;

int iVar1;
int iVar2;
undefined4*puVar3;

iVar1=param_1[1];
iVar2=iVar1+1;
param_1[1]=iVar2;
if(iVar2>param_1[2]){
iVar2=sub_0053d240(iVar2,param_1[2],0x10);
param_1[2]=iVar2;
if((*param_1!=0)||(iVar2!=0)){
iVar2=sub_0053df70(*param_1,iVar2<<4,8);
*param_1=iVar2;
}
}
puVar3=(undefined4*)(iVar1*0x10+*param_1);
if(puVar3!=(undefined4*)0x0){
*puVar3=*param_2;
puVar3[1]=param_2[1];
puVar3[2]=param_2[2];
puVar3[3]=param_2[3];
}
return iVar1;
}

int sub_0053df40(...);
extern undefined * g_01ed9470;
// @baa 0x006e9790
undefined4 * sub_006e9790(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x1c,8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = (undefined4)(&g_01ed9470);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

extern undefined * g_01ed94d0;
// @baa 0x006e97c0
undefined4 * sub_006e97c0(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x10,8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = (undefined4)(&g_01ed94d0);
    puVar1[2] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_006e97f0 {
    undefined4 sub_006e97f0(byte);
};

int sub_0053dfa0(...);
int sub_006e25b0(void);
// @baa 0x006e97f0
undefined4 C_006e97f0::sub_006e97f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006e25b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01ed94f0;
// @baa 0x006e9810
undefined4 * sub_006e9810(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0xc,8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = (undefined4)(&g_01ed94f0);
    puVar1[2] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_006e9840 {
    undefined4 sub_006e9840(byte);
};

int sub_006e26f0(void);
// @baa 0x006e9840
undefined4 C_006e9840::sub_006e9840(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006e26f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01ed9510;
// @baa 0x006e9860
undefined4 * sub_006e9860(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x14,8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = (undefined4)(&g_01ed9510);
    puVar1[2] = 0;
    puVar1[3] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_006e9890 {
    undefined4 sub_006e9890(byte);
};

int sub_006e2ac0(void);
// @baa 0x006e9890
undefined4 C_006e9890::sub_006e9890(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006e2ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01ed9580;
// @baa 0x006e98b0
undefined4 * sub_006e98b0(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0xc,8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = (undefined4)(&g_01ed9580);
    puVar1[2] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_006e98e0 {
    undefined4 sub_006e98e0(byte);
};

int sub_006e2cd0(void);
// @baa 0x006e98e0
undefined4 C_006e98e0::sub_006e98e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006e2cd0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01ed95a0;
// @baa 0x006e9900
undefined4 * sub_006e9900(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x14,8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = (undefined4)(&g_01ed95a0);
    puVar1[2] = 0;
    puVar1[3] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_006e9930 {
    undefined4 sub_006e9930(byte);
};

int sub_006e2f00(void);
// @baa 0x006e9930
undefined4 C_006e9930::sub_006e9930(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006e2f00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01ed95c0;
// @baa 0x006e9950
undefined4 * sub_006e9950(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x10,8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = (undefined4)(&g_01ed95c0);
    puVar1[2] = 0;
    puVar1[3] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_006e9980 {
    undefined4 sub_006e9980(byte);
};

int sub_006e3120(void);
// @baa 0x006e9980
undefined4 C_006e9980::sub_006e9980(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006e3120();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01ed95e0;
// @baa 0x006e99a0
undefined4 * sub_006e99a0(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x10,8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = (undefined4)(&g_01ed95e0);
    puVar1[2] = 0;
    puVar1[3] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_006e99d0 {
    undefined4 sub_006e99d0(byte);
};

int sub_006e3340(void);
// @baa 0x006e99d0
undefined4 C_006e99d0::sub_006e99d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006e3340();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01ed9600;
// @baa 0x006e99f0
undefined4 * sub_006e99f0(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x14,8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = (undefined4)(&g_01ed9600);
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_006e9a20 {
    undefined4 sub_006e9a20(byte);
};

int sub_006e35c0(void);
// @baa 0x006e9a20
undefined4 C_006e9a20::sub_006e9a20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006e35c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01ed9620;
// @baa 0x006e9a40
undefined4 * sub_006e9a40(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0xc,8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = (undefined4)(&g_01ed9620);
    puVar1[2] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_006e9a70 {
    undefined4 sub_006e9a70(byte);
};

int sub_006e37d0(void);
// @baa 0x006e9a70
undefined4 C_006e9a70::sub_006e9a70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006e37d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01ed9640;
// @baa 0x006e9a90
undefined4 * sub_006e9a90(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0xc,8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = (undefined4)(&g_01ed9640);
    puVar1[2] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_006e9ac0 {
    undefined4 sub_006e9ac0(byte);
};

int sub_006e3970(void);
// @baa 0x006e9ac0
undefined4 C_006e9ac0::sub_006e9ac0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006e3970();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01ed9660;
// @baa 0x006e9ae0
undefined4 * sub_006e9ae0(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0xc,8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = (undefined4)(&g_01ed9660);
    puVar1[2] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_006e9b10 {
    undefined4 sub_006e9b10(byte);
};

int sub_006e3b60(void);
// @baa 0x006e9b10
undefined4 C_006e9b10::sub_006e9b10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006e3b60();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01ed9680;
// @baa 0x006e9b30
undefined4 * sub_006e9b30(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0xc,8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = (undefined4)(&g_01ed9680);
    puVar1[2] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_006e9b60 {
    undefined4 sub_006e9b60(byte);
};

int sub_006e3c90(void);
// @baa 0x006e9b60
undefined4 C_006e9b60::sub_006e9b60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006e3c90();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006edd60 {
    void sub_006edd60(int);
};

// @baa 0x006edd60
void C_006edd60::sub_006edd60(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x14,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_006edda0 {
    void sub_006edda0(int);
};

// @baa 0x006edda0
void C_006edda0::sub_006edda0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x2c,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x006edef0
IMPLEMENT_CLASS_AT(UMaterialInterface, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialShared.cpp", 10);

void sub_006ebd30();
// @baa 0x006edf10
void sub_006edf10(void) { sub_006ebd30(); }

void sub_006ebdd0();
// @baa 0x006edf20
void sub_006edf20(void) { sub_006ebdd0(); }

void sub_006ebe70();
// @baa 0x006edf30
void sub_006edf30(void) { sub_006ebe70(); }

void sub_006ebf10();
// @baa 0x006edf40
void sub_006edf40(void) { sub_006ebf10(); }

void sub_006ebfb0();
// @baa 0x006edf50
void sub_006edf50(void) { sub_006ebfb0(); }

void sub_006ec050();
// @baa 0x006edf60
void sub_006edf60(void) { sub_006ec050(); }

// @baa 0x006ee740
// @baa 0x006fed40
IMPLEMENT_CLASS_AT(AMaterialInstanceActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialShared.cpp", 11);

int sub_006fcdf0(...);
int sub_006fceb0(void);
extern undefined4 g_026b12c0;
// @baa 0x006fed70
int sub_006fed70(void)
{
  if (g_026b12c0 == 0) {
    g_026b12c0 = sub_006fcdf0(L"Engine");
    sub_006fceb0();
  }
  return g_026b12c0;
}

void sub_006fdb80();
// @baa 0x006feda0
void sub_006feda0(void) { sub_006fdb80(); }

void sub_006fdbf0();
// @baa 0x006fedb0
void sub_006fedb0(void) { sub_006fdbf0(); }

void sub_006fdc60();
// @baa 0x006fedc0
void sub_006fedc0(void) { sub_006fdc60(); }

// @baa 0x006fedd0
int sub_007551e0(void);
int sub_007713d0(...);
extern undefined4 g_026b3b38;
// @baa 0x00703060
int sub_00703060(void)
{
  if (g_026b3b38 == 0) {
    g_026b3b38 = sub_007713d0(L"Engine");
    sub_007551e0();
  }
  return g_026b3b38;
}

int sub_00754f50(void);
int sub_00767250(...);
extern undefined4 g_026b3b34;
// @baa 0x00703090
int sub_00703090(void)
{
  if (g_026b3b34 == 0) {
    g_026b3b34 = sub_00767250(L"Engine");
    sub_00754f50();
  }
  return g_026b3b34;
}

struct C_007031f0 {
    int sub_007031f0();
};

// @baa 0x007031f0
int C_007031f0::sub_007031f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

// @baa 0x00703200
bool sub_00703200(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00703210 { int a, b; C_00703210(const C_00703210 &); };

// @baa 0x00703210
C_00703210::C_00703210(const C_00703210 &o) : a(o.a), b(o.b) {}

// @baa 0x00703250
uint sub_00703250(uint param_1, uint param_2)
{
  if (param_1 < param_2) {
    param_1 = param_2;
  }
  return param_1;
}

struct C_007032c0 { int a, b; C_007032c0(const C_007032c0 &); };

// @baa 0x007032c0
C_007032c0::C_007032c0(const C_007032c0 &o) : a(o.a), b(o.b) {}

// @baa 0x00703810
void sub_00703810(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct C_view {
    int sub_00417ef0(int);
};

// @baa 0x00703830
int UObject::sub_00703830(int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00417ef0(param_3);
  *(int *)(param_1 + 0xc) = param_2;
  if (param_2 != 0) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  *(undefined4 *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 0x14) = param_5;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return param_1;
}

struct C_00707b10 {
    int sub_00707b10(int);
};

// @baa 0x00707b10
int C_00707b10::sub_00707b10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00707b20 {
    int sub_00707b20(int);
    int sub_007038b0(int, int);
};

// @baa 0x00707b20
int C_00707b20::sub_00707b20(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00707b20 *)(this))->sub_007038b0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_00707b50 {
    int sub_00707b50(int);
};

// @baa 0x00707b50
int C_00707b50::sub_00707b50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00707d80 {
    void sub_00707d80();
    int sub_00707d00(int);
};

// @baa 0x00707d80
void C_00707d80::sub_00707d80(void)
{
    int param_1 = (int)this;
  ((C_00707d80 *)((*(char **)((char *)this + 0x10))))->sub_00707d00(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00707ee0 {
    int sub_00707ee0(undefined4, undefined4);
    int sub_00707da0(int, int);
};

// @baa 0x00707ee0
int C_00707ee0::sub_00707ee0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00707ee0 *)(this))->sub_00707da0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct D { void sub_006fdcd0(); };

extern D g_026b1344;
// @baa 0x01e23660
void sub_01e23660() { g_026b1344.sub_006fdcd0(); }

extern int g_01ed92e0;
struct C_00703130 {
    int* p;
    int f4;
    int f8;
    C_00703130& sub_00703130(int x);
};

// @baa 0x00703130
C_00703130& C_00703130::sub_00703130(int x) {
    f4 = 0;
    p = &g_01ed92e0;
    f8 = x;
    return *this;
}

extern INT sub_006d9230();
// @baa 0x00663590
float sub_00663590()
{
    return (float)sub_006d9230();
}

// @baa 0x00663560
int UMaterialInterface::vf_134(int a0) { return 0; }

// @baa 0x00663570
int UMaterialInterface::vf_14c(int a0) { return 0; }

// @baa 0x00663580
UINT UMaterialInterface::vf_15c() { return 0; }

// @baa 0x006636d0

// @baa 0x006d8ef0
void UMaterialInstanceTimeVarying::SetParent(class UMaterialInterface* NewParent)
{
	sub_006c47c0(TEXT("MITV::SetParent"));
	UMaterialInstance::SetParent(NewParent);
	vf_180();
}

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x006d8f50
void sub_006d8f50(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x006d8f70

// @baa 0x006d9080
int UMaterialInterface::vf_000(void) { return 1; }

// @baa 0x006d9090
bool UMaterialInterface::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006d90d0

// @baa 0x006d91e0
int AMaterialInstanceActor::vf_000(void) { return 1; }

// @baa 0x006d91f0
bool AMaterialInstanceActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006d9240
int sub_006d9240(void) { return 290; }

// @baa 0x006d9310
UBOOL UMaterialInterface::GetVectorParameterValue(FName ParameterName, FLinearColor& OutValue) { return 0; }

// @baa 0x006d9320
UBOOL UMaterialInterface::GetScalarParameterValue(FName ParameterName, FLOAT& OutValue) { return 0; }

// @baa 0x006d9330
UBOOL UMaterialInterface::GetScalarCurveParameterValue(FName ParameterName, FInterpCurveFloat& OutValue) { return 0; }

// @baa 0x006d9340
int UMaterialInterface::vf_128(int a0, int a1, int a2) { return 0; }

// @baa 0x006d9350
UBOOL UMaterialInterface::GetTextureParameterValue(FName ParameterName, UTexture*& OutValue) { return 0; }

// @baa 0x006d9360
UINT UMaterialInterface::GetFontParameterValue(UINT a0, UINT a1, INT* a2, UINT* a3) { return 0; }

void sub_006fdcd0();
// @baa 0x00702e50
void sub_00702e50() {
	sub_006fdcd0();
}

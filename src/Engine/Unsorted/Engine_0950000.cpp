// Engine_0950000.cpp: 88 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    void sub_00950cc0(int);
};

int sub_0053df70(...);
// @baa 0x00950cc0
void C::sub_00950cc0(int param_2)
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

struct FFaceFXElement
{
	INT X;    // 0x00
	INT Y;    // 0x04
	INT Z;    // 0x08
	INT W;    // 0x0c
	INT Unk10;// 0x10
};

struct UFxRenderWidget
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_00950e40(INT Index);
};

// @baa 0x00950e40
FFaceFXElement* UFxRenderWidget::sub_00950e40(INT Index)
{
	return &BoneArray(Index);
}

struct E { BYTE Bytes[36]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_00950ee0(INT Index);
};

// @baa 0x00950ee0
E* S::sub_00950ee0(INT Index)
{
    return &Items(Index);
}

struct E_00950f30 { BYTE Bytes[44]; };

struct S_00950f30 {
    TArray<E_00950f30> Items; // 0x00
    E_00950f30* sub_00950f30(INT Index);
};

// @baa 0x00950f30
E_00950f30* S_00950f30::sub_00950f30(INT Index)
{
    return &Items(Index);
}

struct C_00950f80 {
    int sub_00950f80(int);
};

// @baa 0x00950f80
int C_00950f80::sub_00950f80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x00950f90
void __stdcall sub_00950f90(int a0, int a1) {  }

struct C_00950fa0 {
    int sub_00950fa0(int);
};

// @baa 0x00950fa0
int C_00950fa0::sub_00950fa0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x00950fc0
void __stdcall sub_00950fc0(int a0, int a1) {  }

struct C_00950fd0 {
    int sub_00950fd0(int);
};

// @baa 0x00950fd0
int C_00950fd0::sub_00950fd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

// @baa 0x00950fe0
void __stdcall sub_00950fe0(int a0, int a1) {  }

struct C_00950ff0 {
    int sub_00950ff0(int);
};

// @baa 0x00950ff0
int C_00950ff0::sub_00950ff0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

// @baa 0x00951000
void __stdcall sub_00951000(int a0, int a1) {  }

struct E_009514b0 { BYTE Bytes[32]; };

struct S_009514b0 {
    TArray<E_009514b0> Items; // 0x00
    const E_009514b0* sub_009514b0(INT Index) const;
};

// @baa 0x009514b0
const E_009514b0* S_009514b0::sub_009514b0(INT Index) const
{
    return &Items(Index);
}

struct C_009515e0 {
    FString sub_009515e0();
};

// @baa 0x009515e0
FString C_009515e0::sub_009515e0()
{
    return TEXT("PositionOnly Static-mesh vertices");
}

struct C_00951610 {
    FString sub_00951610();
};

// @baa 0x00951610
FString C_00951610::sub_00951610()
{
    return TEXT("Static-mesh vertices");
}

int sub_0053dfa0(...);
int sub_0094ba30(void);
// @baa 0x00951640
undefined4 ULensFlare::sub_00951640(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0094ba30();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00951660 {
    FString sub_00951660();
};

// @baa 0x00951660
FString C_00951660::sub_00951660()
{
    return TEXT("Skeletal-mesh vertex buffer");
}

struct C_00952af0 {
    FString sub_00952af0();
};

// @baa 0x00952af0
FString C_00952af0::sub_00952af0()
{
    return TEXT("CPU skinned mesh vertices");
}

int sub_00656490(void);
// @baa 0x00952b20
undefined4 ULensFlare::sub_00952b20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656490();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00952b40 {
    FString sub_00952b40();
};

// @baa 0x00952b40
FString C_00952b40::sub_00952b40()
{
    return TEXT("CPU skinned dynamic indices");
}

int sub_00656520(void);
// @baa 0x00952b70
undefined4 UTexture2DComposite::sub_00952b70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656520();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00953c60 {
    FString sub_00953c60();
};

// @baa 0x00953c60
FString C_00953c60::sub_00953c60()
{
    return TEXT("Morph target mesh vertices");
}

// @baa 0x00953c90
undefined4 ULensFlare::sub_00953c90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656490();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00953cb0 {
    FString sub_00953cb0();
};

// @baa 0x00953cb0
FString C_00953cb0::sub_00953cb0()
{
    return TEXT("Instance skel mesh weight vertices");
}

// @baa 0x00953ce0
undefined4 ULensFlare::sub_00953ce0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656490();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00953f30{
void sub_00953f30();
};

extern undefined4*g_026b0d94;
// @baa 0x00953f30
void C_00953f30::sub_00953f30(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x234))((int)(iVar1));
}
return;
}

struct C_00954120{
void sub_00954120();
};

// @baa 0x00954120
void C_00954120::sub_00954120(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(DWORD*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x234))((int)(iVar1));
}
return;
}

int sub_0094d050(void);
// @baa 0x00955880
undefined4 ULensFlare::sub_00955880(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0094d050();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00957930 { void* Data; int Num; int Max; void sub_00957930(); };

// @baa 0x00957930
void C_00957930::sub_00957930() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00957990 {
    void sub_00957990(int);
};

// @baa 0x00957990
void C_00957990::sub_00957990(int param_2)
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

struct C_00957ab0 { void* Data; int Num; int Max; void sub_00957ab0(); };

// @baa 0x00957ab0
void C_00957ab0::sub_00957ab0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00957b10 { void* Data; int Num; int Max; void sub_00957b10(); };

// @baa 0x00957b10
void C_00957b10::sub_00957b10() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00957c80 { void* Data; int Num; int Max; void sub_00957c80(); };

// @baa 0x00957c80
void C_00957c80::sub_00957c80() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00957ce0 { void* Data; int Num; int Max; void sub_00957ce0(); };

// @baa 0x00957ce0
void C_00957ce0::sub_00957ce0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00957d40 {
    void sub_00957d40(int);
};

// @baa 0x00957d40
void C_00957d40::sub_00957d40(int param_2)
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

struct C_00957d80 {
    void sub_00957d80(int);
};

// @baa 0x00957d80
void C_00957d80::sub_00957d80(int param_2)
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

struct C_00957e20 {
    void sub_00957e20(int);
};

// @baa 0x00957e20
void C_00957e20::sub_00957e20(int param_2)
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

struct C_00957e60 {
    void sub_00957e60(int);
};

// @baa 0x00957e60
void C_00957e60::sub_00957e60(int param_2)
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

struct C_00957ea0 { void* Data; int Num; int Max; void sub_00957ea0(); };

// @baa 0x00957ea0
void C_00957ea0::sub_00957ea0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00957f00 { void* Data; int Num; int Max; void sub_00957f00(); };

// @baa 0x00957f00
void C_00957f00::sub_00957f00() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00957f60 {
    void sub_00957f60(int);
};

// @baa 0x00957f60
void C_00957f60::sub_00957f60(int param_2)
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

struct C_00957fa0 { void sub_00957fa0(void); };

// @baa 0x00957fa0
void C_00957fa0::sub_00957fa0(void) { *(int*)((char*)this + 4) = 0; }

struct C_00957fb0 { void* Data; int Num; int Max; void sub_00957fb0(); };

// @baa 0x00957fb0
void C_00957fb0::sub_00957fb0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00958010 { void* Data; int Num; int Max; void sub_00958010(); };

// @baa 0x00958010
void C_00958010::sub_00958010() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00958070 { void* Data; int Num; int Max; void sub_00958070(); };

// @baa 0x00958070
void C_00958070::sub_00958070() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00958110 { void* Data; int Num; int Max; void sub_00958110(); };

// @baa 0x00958110
void C_00958110::sub_00958110() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00958170 {
    void sub_00958170(int);
};

// @baa 0x00958170
void C_00958170::sub_00958170(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_009581b0 { void* Data; int Num; int Max; void sub_009581b0(); };

// @baa 0x009581b0
void C_009581b0::sub_009581b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00958210 { void* Data; int Num; int Max; void sub_00958210(); };

// @baa 0x00958210
void C_00958210::sub_00958210() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x009582e0
void __stdcall sub_009582e0(int a, int b)
{
}

struct C_009582f0 {
    void sub_009582f0(int);
};

// @baa 0x009582f0
void C_009582f0::sub_009582f0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x48,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00958330 { void* Data; int Num; int Max; void sub_00958330(); };

// @baa 0x00958330
void C_00958330::sub_00958330() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00958390 {
    void sub_00958390(int);
};

// @baa 0x00958390
void C_00958390::sub_00958390(int param_2)
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

// @baa 0x009583d0
void UUnrealEdEngine::sub_009583d0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0xc,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x00958410
void __stdcall sub_00958410(int a0, int a1) {  }

struct C_00958420 {
    void sub_00958420(int);
};

// @baa 0x00958420
void C_00958420::sub_00958420(int param_2)
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

// @baa 0x00958460
void __stdcall sub_00958460(int a0, int a1) {  }

struct C_00958a40 {
    void sub_00958a40(int);
};

// @baa 0x00958a40
void C_00958a40::sub_00958a40(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 5,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x00958a80
void __stdcall sub_00958a80(int a0, int a1) {  }

struct C_00958a90 { void* Data; int Num; int Max; void sub_00958a90(); };

// @baa 0x00958a90
void C_00958a90::sub_00958a90() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00958af0 {
    void sub_00958af0(int);
};

// @baa 0x00958af0
void C_00958af0::sub_00958af0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 5,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00958b30 { void* Data; int Num; int Max; void sub_00958b30(); };

// @baa 0x00958b30
void C_00958b30::sub_00958b30() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00958b90 {
    void sub_00958b90(int);
};

// @baa 0x00958b90
void C_00958b90::sub_00958b90(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x24,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00958cc0 { void* Data; int Num; int Max; void sub_00958cc0(); };

// @baa 0x00958cc0
void C_00958cc0::sub_00958cc0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00958d20 { void* Data; int Num; int Max; void sub_00958d20(); };

// @baa 0x00958d20
void C_00958d20::sub_00958d20() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00958d80 { void* Data; int Num; int Max; void sub_00958d80(); };

// @baa 0x00958d80
void C_00958d80::sub_00958d80() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00958de0 { void* Data; int Num; int Max; void sub_00958de0(); };

// @baa 0x00958de0
void C_00958de0::sub_00958de0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00958e40 { void* Data; int Num; int Max; void sub_00958e40(); };

// @baa 0x00958e40
void C_00958e40::sub_00958e40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00958ea0 {
    void sub_00958ea0(int);
};

// @baa 0x00958ea0
void C_00958ea0::sub_00958ea0(int param_2)
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

struct C_00958ee0 { void* Data; int Num; int Max; void sub_00958ee0(); };

// @baa 0x00958ee0
void C_00958ee0::sub_00958ee0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00958f40 {
    void sub_00958f40(int);
};

// @baa 0x00958f40
void C_00958f40::sub_00958f40(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x1c,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00958f80 { void* Data; int Num; int Max; void sub_00958f80(); };

// @baa 0x00958f80
void C_00958f80::sub_00958f80() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00958fe0 {
    void sub_00958fe0(int);
};

// @baa 0x00958fe0
void C_00958fe0::sub_00958fe0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x24,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00959020 { void* Data; int Num; int Max; void sub_00959020(); };

// @baa 0x00959020
void C_00959020::sub_00959020() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00959080 {
    void sub_00959080(int);
};

// @baa 0x00959080
void C_00959080::sub_00959080(int param_2)
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

void sub_00958330();
// @baa 0x00959130
void sub_00959130(void) { sub_00958330(); }

struct M_009591a0 { void sub_00549160(); };

struct C_009591a0 { char pad[12]; M_009591a0 m; void sub_009591a0(); };

// @baa 0x009591a0
void C_009591a0::sub_009591a0() { m.sub_00549160(); }

struct M_009591b0 { void sub_00549160(); };

struct C_009591b0 { char pad[12]; M_009591b0 m; void sub_009591b0(); };

// @baa 0x009591b0
void C_009591b0::sub_009591b0() { m.sub_00549160(); }

void sub_0094f930();
// @baa 0x009591c0
void sub_009591c0(void) { sub_0094f930(); }

struct C_00959250 {
    int sub_00959250(int);
};

// @baa 0x00959250
int C_00959250::sub_00959250(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00959b80 {
    int sub_00959b80();
};

// @baa 0x00959b80
int C_00959b80::sub_00959b80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_0095ad50 { void* Data; int Num; int Max; void sub_0095ad50(); };

// @baa 0x0095ad50
void C_0095ad50::sub_0095ad50() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0095adb0 { void* Data; int Num; int Max; void sub_0095adb0(); };

// @baa 0x0095adb0
void C_0095adb0::sub_0095adb0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0095ae10 { void* Data; int Num; int Max; void sub_0095ae10(); };

// @baa 0x0095ae10
void C_0095ae10::sub_0095ae10() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0095ae70 { void* Data; int Num; int Max; void sub_0095ae70(); };

// @baa 0x0095ae70
void C_0095ae70::sub_0095ae70() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

void sub_00957f00();
// @baa 0x0095bbd0
void sub_0095bbd0(void) { sub_00957f00(); }

void sub_007c2810();
// @baa 0x0095bbe0
void sub_0095bbe0(void) { sub_007c2810(); }

struct C_0095f680 {
    undefined4 * sub_0095f680(undefined4);
    int sub_00664a20();
};

// @baa 0x0095f680
undefined4 * C_0095f680::sub_0095f680(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = param_2;
  ((C_0095f680 *)(((char *)this + 0x10)))->sub_00664a20();
  return param_1;
}

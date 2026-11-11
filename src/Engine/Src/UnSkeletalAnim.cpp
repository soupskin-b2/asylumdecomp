// UnSkeletalAnim.cpp (part 1 of 4): 214 functions
// Placed here by: neighbours 172, class 16, callers 14, file 12.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0090afe0
int sub_0090afe0(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_01f777f8;
// @baa 0x0090aff0
undefined4 * UObject::sub_0090aff0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f777f8);
  return param_1;
}

// @baa 0x0090b010
IMPLEMENT_CLASS_AT(UMusicTrackDataStructures, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequenceMusic.cpp", 10);

// @baa 0x0090b070
struct C {
    C* sub_0090b090(int);
};

// @baa 0x0090b090
C* C::sub_0090b090(int arg) {
    return this;
}

// @baa 0x0090b0e0
int sub_0090b0e0(int a0, int a1) { return a1; }

extern undefined * g_01f77908;
// @baa 0x0090b0f0
undefined4 * UObject::sub_0090b0f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f77908);
  return param_1;
}

// @baa 0x0090b110
IMPLEMENT_CLASS_AT(UWaveFormBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2435);

// @baa 0x0090b170
struct C_0090b190 {
    undefined4 sub_0090b190();
};

// @baa 0x0090b190
undefined4 C_0090b190::sub_0090b190(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x10);
}

struct C_0090b1a0 { int sub_0090b1a0(void); };

// @baa 0x0090b1a0
int C_0090b1a0::sub_0090b1a0(void) { return *(int*)((char*)this + 20); }

// @baa 0x0090b1b0
int sub_0090b1b0(int a0, int a1) { return a1; }

// @baa 0x0090b1c0
int sub_0090b1c0(int a0, int a1) { return a1; }

struct C_0090b1d0 {
    undefined4 * sub_0090b1d0();
};

extern undefined * g_01f77a18;
// @baa 0x0090b1d0
undefined4 * C_0090b1d0::sub_0090b1d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f77a18);
  param_1[0x11] = 0;
  return param_1;
}

// @baa 0x0090b1f0
IMPLEMENT_CLASS_AT(UShadowMap2D, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnShadowMap.cpp", 11);

// @baa 0x0090b250
// @baa 0x0090b270
undefined4 sub_0090b270(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

struct C_0090b2f0 { C_0090b2f0* sub_0090b2f0(void); };

// @baa 0x0090b2f0
C_0090b2f0* C_0090b2f0::sub_0090b2f0(void) { return this; }

struct C_0090b300 { C_0090b300* sub_0090b300(void); };

// @baa 0x0090b300
C_0090b300* C_0090b300::sub_0090b300(void) { return this; }

// @baa 0x0090d3b0
IMPLEMENT_CLASS_AT(UAnimSequence, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 20);

// @baa 0x0090d4c0
int UAnimSequence::vf_000(void) { return 1; }

// @baa 0x0090d4d0
bool UAnimSequence::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0090d510
IMPLEMENT_CLASS_AT(UAnimSet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 21);

// @baa 0x0090d620
int UAnimSet::vf_000(void) { return 1; }

// @baa 0x0090d630
bool UAnimSet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0090d670
IMPLEMENT_CLASS_AT(UAnimNotify, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 22);

// @baa 0x0090d780
int UAnimNotify::vf_000(void) { return 1; }

// @baa 0x0090d790
bool UAnimNotify::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_005d7270(void);
// @baa 0x0090d7d0
void UAnimSequence::vf_020(void)
{
    int param_1 = (int)this;

  sub_005d7270();
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  return;
}

// @baa 0x009125a0
// @baa 0x00912a30
// @baa 0x00912a50
IMPLEMENT_CLASS_AT(UAnimNotify_CameraEffect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2372);

// @baa 0x00912a70
IMPLEMENT_CLASS_AT(UAnimNotify_Footstep, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2346);

// @baa 0x00912a90
IMPLEMENT_CLASS_AT(UAnimNotify_ForceField, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2438);

// @baa 0x00912ab0
IMPLEMENT_CLASS_AT(UAnimNotify_PlayParticleEffect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2408);

// @baa 0x00912ad0
IMPLEMENT_CLASS_AT(UAnimNotify_Rumble, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2434);

// @baa 0x00912af0
IMPLEMENT_CLASS_AT(UAnimNotify_Script, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2294);

// @baa 0x00912b10
IMPLEMENT_CLASS_AT(UAnimNotify_Scripted, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2316);

// @baa 0x00912b30
IMPLEMENT_CLASS_AT(UAnimNotify_Sound, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2258);

// @baa 0x00912e90
struct C_00912f50 {
    int sub_00912f50();
};

// @baa 0x00912f50
int C_00912f50::sub_00912f50(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x70) * 4;
}

// @baa 0x00912fa0
// @baa 0x00913060
// @baa 0x00913120
// @baa 0x009131e0
// @baa 0x00913320
// @baa 0x009133e0
// @baa 0x00913520
// @baa 0x009135e0
// @baa 0x009136a0
struct C_00913810 {
    undefined4 * sub_00913810(byte);
};

int sub_0053dfa0(...);
extern undefined4 g_024088e4;
// @baa 0x00913810
undefined4 * C_00913810::sub_00913810(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_024088e4));
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00913d60 {
    undefined4 * sub_00913d60(byte);
};

// @baa 0x00913d60
undefined4 * C_00913d60::sub_00913d60(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_024088e4));
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00915560{
int sub_00915560(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00915560
int C_00915560::sub_00915560(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_009155c0(INT Index);
};

// @baa 0x009155c0
DWORD* S::sub_009155c0(INT Index)
{
    return &Items(Index);
}

struct S_00915610 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00915610(INT Index);
};

// @baa 0x00915610
DWORD* S_00915610::sub_00915610(INT Index)
{
    return &Items(Index);
}

struct S_00915660 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00915660(INT Index);
};

// @baa 0x00915660
QWORD* S_00915660::sub_00915660(INT Index)
{
    return &Items(Index);
}

struct C_009156b0 { int sub_009156b0(void); };

// @baa 0x009156b0
int C_009156b0::sub_009156b0(void) { return *(int*)((char*)this + 0); }

struct C_009156c0 {
    int sub_009156c0(int);
};

// @baa 0x009156c0
int C_009156c0::sub_009156c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_00915760 {
    int sub_00915760(int);
};

// @baa 0x00915760
int C_00915760::sub_00915760(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00915770
void __stdcall sub_00915770(int a0, int a1) {  }

struct C_00915780 {
    int sub_00915780(int);
};

// @baa 0x00915780
int C_00915780::sub_00915780(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00915790 { int a, b, c; C_00915790(); };

// @baa 0x00915790
C_00915790::C_00915790() : a(0), b(0), c(0) {}

struct C_009157a0 { int sub_009157a0(void); };

// @baa 0x009157a0
int C_009157a0::sub_009157a0(void) { return *(int*)((char*)this + 0); }

struct C_00915820 {
    int sub_00915820(int);
};

// @baa 0x00915820
int C_00915820::sub_00915820(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_009158a0 {
    int sub_009158a0(int);
};

// @baa 0x009158a0
int C_009158a0::sub_009158a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x009158b0
void __stdcall sub_009158b0(int a0, int a1) {  }

struct C_009158c0 {
    int sub_009158c0(int);
};

// @baa 0x009158c0
int C_009158c0::sub_009158c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x009158d0
void __stdcall sub_009158d0(int a0, int a1) {  }

// @baa 0x009158e0
void __stdcall sub_009158e0(int a0, int a1) {  }

struct C_009158f0 {
    int sub_009158f0(int);
};

// @baa 0x009158f0
int C_009158f0::sub_009158f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

// @baa 0x00915900
void __stdcall sub_00915900(int a0, int a1) {  }

// @baa 0x00915910
void __stdcall sub_00915910(int a0, int a1) {  }

struct C_00915920 {
    int sub_00915920(int);
};

// @baa 0x00915920
int C_00915920::sub_00915920(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 2;
}

// @baa 0x00915930
void __stdcall sub_00915930(int a0, int a1) {  }

struct C_00915940 {
    int sub_00915940(int);
};

// @baa 0x00915940
int C_00915940::sub_00915940(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00915950
void __stdcall sub_00915950(int a0, int a1) {  }

struct C_00915960 {
    int sub_00915960(int);
};

// @baa 0x00915960
int C_00915960::sub_00915960(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00915970 {
    int sub_00915970(int);
};

// @baa 0x00915970
int C_00915970::sub_00915970(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00915980
void __stdcall sub_00915980(int a0, int a1) {  }

struct E { BYTE Bytes[16]; };

struct S_00915990 {
    TArray<E> Items; // 0x00
    E* sub_00915990(INT Index);
};

// @baa 0x00915990
E* S_00915990::sub_00915990(INT Index)
{
    return &Items(Index);
}

// @baa 0x009159e0
void __stdcall sub_009159e0(int a0, int a1) {  }

struct C_009159f0 {
    int sub_009159f0(int);
};

// @baa 0x009159f0
int C_009159f0::sub_009159f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00915a00
void __stdcall sub_00915a00(int a0, int a1) {  }

// @baa 0x00915a10
void __stdcall sub_00915a10(int a0, int a1) {  }

struct C_00915a20 {
    int sub_00915a20(int);
};

// @baa 0x00915a20
int C_00915a20::sub_00915a20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_00915a30 {
    int sub_00915a30(int);
};

// @baa 0x00915a30
int C_00915a30::sub_00915a30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x00915a40
void __stdcall sub_00915a40(int a0, int a1) {  }

struct S_00915a50 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00915a50(INT Index);
};

// @baa 0x00915a50
DWORD* S_00915a50::sub_00915a50(INT Index)
{
    return &Items(Index);
}

struct C_00915aa0 { int sub_00915aa0(void); };

// @baa 0x00915aa0
int C_00915aa0::sub_00915aa0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct S_00915ab0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00915ab0(INT Index);
};

// @baa 0x00915ab0
DWORD* S_00915ab0::sub_00915ab0(INT Index)
{
    return &Items(Index);
}

struct S_00915b00 { int sub_00544d40(int); };

// @baa 0x00915b00
int sub_00915b00(S_00915b00 *s, int a) { return s->sub_00544d40(a); }

struct C_00915b10 { int sub_00915b10(void); };

// @baa 0x00915b10
int C_00915b10::sub_00915b10(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00915b20 { int sub_00915b20(void); };

// @baa 0x00915b20
int C_00915b20::sub_00915b20(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00915b60 {
    int sub_00915b60(int);
};

// @baa 0x00915b60
int C_00915b60::sub_00915b60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00915b70 {
    int sub_00915b70(int);
};

// @baa 0x00915b70
int C_00915b70::sub_00915b70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00915b80 { int sub_00915b80(void); };

// @baa 0x00915b80
int C_00915b80::sub_00915b80(void) { return *(int*)((char*)this + 20); }

struct C_00915c10 {
    int sub_00915c10(int);
};

// @baa 0x00915c10
int C_00915c10::sub_00915c10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x58 + *param_1;
}

struct C_00915c20 {
    int sub_00915c20(int);
};

// @baa 0x00915c20
int C_00915c20::sub_00915c20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x58 + *param_1;
}

struct C_00915c60 {
    int sub_00915c60(int);
};

// @baa 0x00915c60
int C_00915c60::sub_00915c60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00915c70 { int sub_00915c70(void); };

// @baa 0x00915c70
int C_00915c70::sub_00915c70(void) { return *(int*)((char*)this + 20); }

struct C_00915c80 {
    int sub_00915c80();
};

// @baa 0x00915c80
int C_00915c80::sub_00915c80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00915ca0 {
    int sub_00915ca0();
};

// @baa 0x00915ca0
int C_00915ca0::sub_00915ca0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00915cc0 {
    int sub_00915cc0();
};

// @baa 0x00915cc0
int C_00915cc0::sub_00915cc0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00915ce0 {
    int sub_00915ce0();
};

// @baa 0x00915ce0
int C_00915ce0::sub_00915ce0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00915cf0 {
    int sub_00915cf0(int);
};

// @baa 0x00915cf0
int C_00915cf0::sub_00915cf0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x58 + *param_1;
}

struct E_00915d00 { BYTE Bytes[88]; };

struct S_00915d00 {
    TArray<E_00915d00> Items; // 0x00
    E_00915d00* sub_00915d00(INT Index);
};

// @baa 0x00915d00
E_00915d00* S_00915d00::sub_00915d00(INT Index)
{
    return &Items(Index);
}

struct C_00915d50 {
    int sub_00915d50(int);
};

// @baa 0x00915d50
int C_00915d50::sub_00915d50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00915d60 { int sub_00915d60(void); };

// @baa 0x00915d60
int C_00915d60::sub_00915d60(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00915ed0 {
    void sub_00915ed0(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

int sub_00630f20(...);
// @baa 0x00915ed0
void C_00915ed0::sub_00915ed0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00920fd0 { void* Data; int Num; int Max; void sub_00920fd0(); };

// @baa 0x00920fd0
void C_00920fd0::sub_00920fd0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00921150 { void* Data; int Num; int Max; void sub_00921150(); };

// @baa 0x00921150
void C_00921150::sub_00921150() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_009211f0 { void* Data; int Num; int Max; void sub_009211f0(); };

// @baa 0x009211f0
void C_009211f0::sub_009211f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00921250 { void* Data; int Num; int Max; void sub_00921250(); };

// @baa 0x00921250
void C_00921250::sub_00921250() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_009212b0 {
    undefined4 sub_009212b0();
};

// @baa 0x009212b0
undefined4 C_009212b0::sub_009212b0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_009212c0 { void* Data; int Num; int Max; void sub_009212c0(); };

// @baa 0x009212c0
void C_009212c0::sub_009212c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00921440 { void* Data; int Num; int Max; void sub_00921440(); };

// @baa 0x00921440
void C_00921440::sub_00921440() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_009214a0 { void* Data; int Num; int Max; void sub_009214a0(); };

// @baa 0x009214a0
void C_009214a0::sub_009214a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00921540 { void* Data; int Num; int Max; void sub_00921540(); };

// @baa 0x00921540
void C_00921540::sub_00921540() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct M_009215a0 { void sub_00921150(); };

struct C_009215a0 { char pad[32]; M_009215a0 m; void sub_009215a0(); };

// @baa 0x009215a0
void C_009215a0::sub_009215a0() { m.sub_00921150(); }

// @baa 0x009215b0
void __stdcall sub_009215b0(int a0, int a1) {  }

// @baa 0x009215c0
void __stdcall sub_009215c0(int a0, int a1) {  }

// @baa 0x009215d0
void __stdcall sub_009215d0(int a0, int a1) {  }

struct C_009215e0 {
    undefined4 sub_009215e0(byte);
};

int sub_00921150(void);
// @baa 0x009215e0
undefined4 C_009215e0::sub_009215e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00921150();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x009216c0
int USkeletalMeshComponent::sub_009216c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x009216d0
int USkeletalMeshComponent::sub_009216d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x009216f0
int USkeletalMeshComponent::sub_009216f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x00921700
int USkeletalMeshComponent::sub_00921700(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x009217b0
int USkeletalMeshComponent::sub_009217b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x58 + *param_1;
}

// @baa 0x009217c0
int USkeletalMeshComponent::sub_009217c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00921840
int USkeletalMeshComponent::sub_00921840(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

// @baa 0x00921850
int USkeletalMeshComponent::sub_00921850(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00921870
int USkeletalMeshComponent::sub_00921870(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x58 + *param_1;
}

// @baa 0x00921880
void __stdcall sub_00921880(int a0, int a1) {  }

// @baa 0x00921890
int USkeletalMeshComponent::sub_00921890(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

// @baa 0x009218a0
int USkeletalMeshComponent::sub_009218a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x009218b0
int USkeletalMeshComponent::sub_009218b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x58 + *(int *)*param_1;
}

// @baa 0x009218c0
int USkeletalMeshComponent::sub_009218c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

// @baa 0x009218d0
int USkeletalMeshComponent::sub_009218d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x58 + *(int *)*param_1;
}

// @baa 0x009218e0
int USkeletalMeshComponent::sub_009218e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

// @baa 0x009218f0
int USkeletalMeshComponent::sub_009218f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

int sub_00917b10(void);
// @baa 0x0092a4f0
int UAnimSequence::vf_0d4(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0x70) == 0) {
    iVar1 = sub_00917b10();
    return iVar1;
  }
  return *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x70) * 4;
}

extern UBOOL g_02676094;
 /* GIsEditor? */
INT sub_015d56c0(UAnimSequence* Seq);
void sub_00921a00(FAnimNotifyEvent* First, INT Num);
 /* Sort<> */
struct UAnimSequence_ : public UAnimSequence {
    void sub_009324a0();
};

// @baa 0x009324a0
void UAnimSequence_::sub_009324a0()
{
    if (g_02676094)
    {
        CompressionScheme = NULL;
    }
    sub_015d56c0(this);
    sub_00921a00(&Notifies(0), Notifies.Num());
}

int sub_0092f170(void);
// @baa 0x00936370
undefined4 USkeletalMeshComponent::sub_00936370(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0092f170();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0092f1f0(void);
// @baa 0x00936390
undefined4 USkeletalMeshComponent::sub_00936390(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0092f1f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
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

struct TConstSetBitIterator_00936430 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00936430(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00936430& operator++();
};

TConstSetBitIterator_00936430::TConstSetBitIterator_00936430(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00936430
TConstSetBitIterator_00936430& TConstSetBitIterator_00936430::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00936450 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00936450(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00936450& operator++();
};

TConstSetBitIterator_00936450::TConstSetBitIterator_00936450(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00936450
TConstSetBitIterator_00936450& TConstSetBitIterator_00936450::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00936470 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00936470(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00936470& operator++();
};

TConstSetBitIterator_00936470::TConstSetBitIterator_00936470(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00936470
TConstSetBitIterator_00936470& TConstSetBitIterator_00936470::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00936490 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00936490(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00936490& operator++();
};

TConstSetBitIterator_00936490::TConstSetBitIterator_00936490(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00936490
TConstSetBitIterator_00936490& TConstSetBitIterator_00936490::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009364e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009364e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009364e0& operator++();
};

TConstSetBitIterator_009364e0::TConstSetBitIterator_009364e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009364e0
TConstSetBitIterator_009364e0& TConstSetBitIterator_009364e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00936530 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00936530(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00936530& operator++();
};

TConstSetBitIterator_00936530::TConstSetBitIterator_00936530(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00936530
TConstSetBitIterator_00936530& TConstSetBitIterator_00936530::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009365e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009365e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009365e0& operator++();
};

TConstSetBitIterator_009365e0::TConstSetBitIterator_009365e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009365e0
TConstSetBitIterator_009365e0& TConstSetBitIterator_009365e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00936690 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00936690(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00936690& operator++();
};

TConstSetBitIterator_00936690::TConstSetBitIterator_00936690(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00936690
TConstSetBitIterator_00936690& TConstSetBitIterator_00936690::operator++()
{
    It.Advance();
    return *this;
}

struct C_view {
    int sub_0092f360(int, int);
};

// @baa 0x00938100
int USkeletalMeshComponent::sub_00938100(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view *)(this))->sub_0092f360((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x24, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

// @baa 0x00938140
int USkeletalMeshComponent::sub_00938140(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x24;
}

struct TConstSetBitIterator_00938270 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00938270(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00938270& operator++();
};

TConstSetBitIterator_00938270::TConstSetBitIterator_00938270(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00938270
TConstSetBitIterator_00938270& TConstSetBitIterator_00938270::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00938290 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00938290(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00938290& operator++();
};

TConstSetBitIterator_00938290::TConstSetBitIterator_00938290(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00938290
TConstSetBitIterator_00938290& TConstSetBitIterator_00938290::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009382b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009382b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009382b0& operator++();
};

TConstSetBitIterator_009382b0::TConstSetBitIterator_009382b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009382b0
TConstSetBitIterator_009382b0& TConstSetBitIterator_009382b0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_009382d0 {
    int sub_009363b0(int);
};

// @baa 0x009382d0
void USkeletalMeshComponent::sub_009382d0(void)
{
    int param_1 = (int)this;
  ((C_view_009382d0 *)((*(char **)((char *)this + 0x10))))->sub_009363b0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct M_009382f0 { void sub_00938060(); };

struct C_009382f0 { char pad[4]; M_009382f0 m; void sub_009382f0(); };

// @baa 0x009382f0
void C_009382f0::sub_009382f0() { m.sub_00938060(); }

struct M_00938610 { void sub_00938060(); };

struct C_00938610 { char pad[4]; M_00938610 m; void sub_00938610(); };

// @baa 0x00938610
void C_00938610::sub_00938610() { m.sub_00938060(); }

struct TConstSetBitIterator_00938760 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00938760(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00938760& operator++();
};

TConstSetBitIterator_00938760::TConstSetBitIterator_00938760(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00938760
TConstSetBitIterator_00938760& TConstSetBitIterator_00938760::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009388b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009388b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009388b0& operator++();
};

TConstSetBitIterator_009388b0::TConstSetBitIterator_009388b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009388b0
TConstSetBitIterator_009388b0& TConstSetBitIterator_009388b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0093cbf0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0093cbf0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0093cbf0& operator++();
};

TConstSetBitIterator_0093cbf0::TConstSetBitIterator_0093cbf0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0093cbf0
TConstSetBitIterator_0093cbf0& TConstSetBitIterator_0093cbf0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0093cc10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0093cc10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0093cc10& operator++();
};

TConstSetBitIterator_0093cc10::TConstSetBitIterator_0093cc10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0093cc10
TConstSetBitIterator_0093cc10& TConstSetBitIterator_0093cc10::operator++()
{
    It.Advance();
    return *this;
}

int sub_00938150(void);
// @baa 0x0093cc30
undefined4 USkeletalMeshComponent::sub_0093cc30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00938150();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_0093cec0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0093cec0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0093cec0& operator++();
};

TConstSetBitIterator_0093cec0::TConstSetBitIterator_0093cec0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0093cec0
TConstSetBitIterator_0093cec0& TConstSetBitIterator_0093cec0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0093cfd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0093cfd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0093cfd0& operator++();
};

TConstSetBitIterator_0093cfd0::TConstSetBitIterator_0093cfd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0093cfd0
TConstSetBitIterator_0093cfd0& TConstSetBitIterator_0093cfd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0093d0e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0093d0e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0093d0e0& operator++();
};

TConstSetBitIterator_0093d0e0::TConstSetBitIterator_0093d0e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0093d0e0
TConstSetBitIterator_0093d0e0& TConstSetBitIterator_0093d0e0::operator++()
{
    It.Advance();
    return *this;
}

struct C_0093d310 {
    undefined4 sub_0093d310(byte);
    int sub_00938060();
};

// @baa 0x0093d310
undefined4 C_0093d310::sub_0093d310(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0093d310 *)(((char *)this + 4)))->sub_00938060();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00936580(void);
// @baa 0x0093d340
int USkeletalMeshComponent::sub_0093d340(void)
{
    int param_1 = (int)this;

  sub_00936580();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0093d540 {
    undefined4 * sub_0093d540(undefined4 *);
    int sub_0093d290(int);
};

// @baa 0x0093d540
undefined4 * C_0093d540::sub_0093d540(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_0093d540 *)(((char *)this + 4)))->sub_0093d290((int)(param_2 + 1));
  return param_1;
}

int sub_005e1960(...);
int sub_0090b7d0(void);
int sub_00938bb0(...);
extern undefined4 g_026667a8;
extern undefined4 g_026b5d7c;
// @baa 0x0093d560
void sub_0093d560(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026b5d7c == 0) {
    g_026b5d7c = sub_00938bb0(L"Engine");
    sub_0090b7d0();
  }
  sub_005e1960(g_026b5d7c,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

void sub_0093c930();
// @baa 0x0093d5c0
void sub_0093d5c0(void) { sub_0093c930(); }

void sub_0093ca90();
// @baa 0x0093d5d0
void sub_0093d5d0(void) { sub_0093ca90(); }

struct C_0093df30 { C_0093df30* sub_0093df30(void); };

// @baa 0x0093df30
C_0093df30* C_0093df30::sub_0093df30(void) { return this; }

struct C_0093df40 { C_0093df40* sub_0093df40(void); };

// @baa 0x0093df40
C_0093df40* C_0093df40::sub_0093df40(void) { return this; }

struct TConstSetBitIterator_0093e010 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0093e010(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0093e010& operator++();
};

TConstSetBitIterator_0093e010::TConstSetBitIterator_0093e010(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0093e010
TConstSetBitIterator_0093e010& TConstSetBitIterator_0093e010::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0093e060 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0093e060(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0093e060& operator++();
};

TConstSetBitIterator_0093e060::TConstSetBitIterator_0093e060(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0093e060
TConstSetBitIterator_0093e060& TConstSetBitIterator_0093e060::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_0093e0b0 {
    int sub_0093d130(int, int);
};

// @baa 0x0093e0b0
int USkeletalMeshComponent::sub_0093e0b0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_0093e0b0 *)(this))->sub_0093d130(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_0093e0d0 {
    int sub_0093d1a0(int, int);
};

// @baa 0x0093e0d0
int USkeletalMeshComponent::sub_0093e0d0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_0093e0d0 *)(this))->sub_0093d1a0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_0093e0f0 {
    int sub_0093d220(int, int);
};

// @baa 0x0093e0f0
int USkeletalMeshComponent::sub_0093e0f0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_0093e0f0 *)(this))->sub_0093d220(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

// @baa 0x0093e110
int USkeletalMeshComponent::sub_0093e110(void)
{
    int param_1 = (int)this;

  sub_00936580();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0093e1b0 {
    undefined4 * sub_0093e1b0(undefined4 *);
    int sub_0093d290(int);
};

// @baa 0x0093e1b0
undefined4 * C_0093e1b0::sub_0093e1b0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_0093e1b0 *)(((char *)this + 4)))->sub_0093d290(param_2[1]);
  return param_1;
}

struct C_0093e2c0 {
    undefined4 * sub_0093e2c0(undefined4 *);
    int sub_0093d290(int);
};

// @baa 0x0093e2c0
undefined4 * C_0093e2c0::sub_0093e2c0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_0093e2c0 *)(((char *)this + 4)))->sub_0093d290(param_2[1]);
  param_1[7] = 0xffffffff;
  return param_1;
}

int sub_005c7a70(...);
int sub_0093f900(void);
// @baa 0x0093f9b0
undefined4 UAnimSequence::sub_0093f9b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0093f900();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x178);
  }
  return param_1;
}

extern undefined * g_01f798b0;
// @baa 0x0093f9e0
undefined4 * UObject::sub_0093f9e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f798b0);
  return param_1;
}

// @baa 0x0093fa00
// @baa 0x0093faa0
void sub_0093dda0();
// @baa 0x0093fb90
void sub_0093fb90(void) { sub_0093dda0(); }

// @baa 0x009401a0
int USkeletalMeshComponent::vf_150(int a0) { return 0; }

struct TConstSetBitIterator_00940380 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00940380(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00940380& operator++();
};

TConstSetBitIterator_00940380::TConstSetBitIterator_00940380(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00940380
TConstSetBitIterator_00940380& TConstSetBitIterator_00940380::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009403d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009403d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009403d0& operator++();
};

TConstSetBitIterator_009403d0::TConstSetBitIterator_009403d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009403d0
TConstSetBitIterator_009403d0& TConstSetBitIterator_009403d0::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00940420
int USkeletalMeshComponent::sub_00940420(void)
{
    int param_1 = (int)this;

  sub_00936580();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_009405e0 {
    void sub_009405e0();
    int sub_0093e130(int);
};

// @baa 0x009405e0
void C_009405e0::sub_009405e0(void)
{
    int param_1 = (int)this;
  ((C_009405e0 *)((*(char **)((char *)this + 0x10))))->sub_0093e130(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

int sub_009366e0(void);
// @baa 0x00940600
int UAnimSequence::sub_00940600(void)
{
    int param_1 = (int)this;

  sub_009366e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

extern undefined * g_01f799c0;
// @baa 0x00940680
undefined4 * UObject::sub_00940680(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f799c0);
  return param_1;
}

// @baa 0x009406a0
IMPLEMENT_CLASS_AT(USeqAct_PlayMusicTrack, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequenceMusic.cpp", 11);

// @baa 0x00940700
// @baa 0x00940a20
// @baa 0x00940a30
// @baa 0x00940a50
// @baa 0x00940b10
// @baa 0x00940c40
void sub_00940c40(void) { sub_0093dda0(); }

// @baa 0x00940c50
int USkeletalMeshComponent::sub_00940c50(void)
{
    int param_1 = (int)this;

  sub_00936580();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00940d20
int UAnimSequence::sub_00940d20(void)
{
    int param_1 = (int)this;

  sub_009366e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00940d40 { void sub_00940620(int); C_00940d40 *sub_00940d40(int); };

// @baa 0x00940d40
C_00940d40 *C_00940d40::sub_00940d40(int a) { sub_00940620(a); return this; }

// @baa 0x00940f70
int UAnimSequence::sub_00940f70(void)
{
    int param_1 = (int)this;

  sub_009366e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00940f90 { void sub_00940620(int); C_00940f90 *sub_00940f90(int); };

// @baa 0x00940f90
C_00940f90 *C_00940f90::sub_00940f90(int a) { sub_00940620(a); return this; }

struct M_00941700 { void sub_0093dda0(); };

struct C_00941700 { char pad[8]; M_00941700 m; void sub_00941700(); };

// @baa 0x00941700
void C_00941700::sub_00941700() { m.sub_0093dda0(); }

void sub_00940cb0();
// @baa 0x00941710
void sub_00941710(void) { sub_00940cb0(); }

// @baa 0x00941720
int UAnimSequence::sub_00941720(void)
{
    int param_1 = (int)this;

  sub_009366e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00941740();
// @baa 0x009417a0
void sub_009417a0(void) { sub_00941740(); }

struct C_view_009417b0 {
    int sub_00940620(int);
};

// @baa 0x009417b0
undefined4 UAnimSequence::sub_009417b0(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_009417b0 *)(this))->sub_00940620(param_2);
  return param_1;
}

struct C_01abc7a0 {
    void sub_01abc7a0(undefined1);
};

// @baa 0x01abc7a0
void C_01abc7a0::sub_01abc7a0(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0xd) = param_2;
  return;
}

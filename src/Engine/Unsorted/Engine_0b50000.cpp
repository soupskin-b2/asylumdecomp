// Engine_0b50000.cpp (part 1 of 4): 106 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00b50150
int sub_00b50150(int a0, int a1) { return a1; }

struct C { int sub_00b50160(void); };

// @baa 0x00b50160
int C::sub_00b50160(void) { return *(int*)((char*)this + 16); }

void sub_00df7320();
// @baa 0x00b50170
void sub_00b50170(void) { sub_00df7320(); }

struct C_00b50470 {
    void sub_00b50470(int);
};

// @baa 0x00b50470
void C_00b50470::sub_00b50470(int param_2)
{
    int param_1 = (int)this;

  undefined2 uVar1;
  int iVar2;
  
  if (param_2 < *(int *)(param_1 + 0xcc)) {
    iVar2 = *(int *)(param_1 + 0x3c);
    uVar1 = *(undefined2 *)(iVar2 + param_2 * 2);
    *(undefined2 *)(iVar2 + param_2 * 2) =
         *(undefined2 *)(iVar2 + -2 + *(int *)(param_1 + 0xcc) * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x3c) + -2 + *(int *)(param_1 + 0xcc) * 2) = uVar1;
    *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + -1;
  }
  return;
}

// @baa 0x00b50f00
int UParticleModuleBeamSource::vf_000(void) { return 1; }

// @baa 0x00b50f10
void UParticleModuleBeamSource::vf_168(void) {  }

// @baa 0x00b50fd0
int UParticleModuleBeamTarget::vf_000(void) { return 1; }

// @baa 0x00b50fe0
int UParticleModuleBeamTarget::vf_114(int a0) { return 0; }

// @baa 0x00b50ff0
void UParticleModuleBeamTarget::vf_168(void) {  }

int sub_008f1600(...);
int sub_008f9c60(void);
extern undefined4 g_026b5b88;
// @baa 0x00b51000
int sub_00b51000(void)
{
  if (g_026b5b88 == 0) {
    g_026b5b88 = sub_008f1600(L"Engine");
    sub_008f9c60();
  }
  return g_026b5b88;
}

// @baa 0x00b51030
IMPLEMENT_CLASS_AT(AEmitter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleComponents.cpp", 17);

// @baa 0x00b51140
int AEmitter::vf_000(void) { return 1; }

// @baa 0x00b51150
bool AEmitter::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b51190
int AEmitterCameraLensEffectBase::vf_000(void) { return 1; }

// @baa 0x00b51c10
void __stdcall sub_00b51c10(int a0, int a1) {  }

typedef uint size_t;

struct C_00b51c20{
void sub_00b51c20(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
uint sub_0053df70(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x00b51c20
void C_00b51c20::sub_00b51c20(int param_2,int param_3)
{
int*param_1=(int*)this;
int iVar1;
INT iVar2;
if(param_3<0){
sub_006311e0("Count>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31a,&g_01e3f3dc);
}
if(param_1[1]<0){
sub_006311e0("ArrayNum>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31b,&g_01e3f3dc);
}
if(param_1[2]<param_1[1]){
sub_006311e0("ArrayMax>=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31c,&g_01e3f3dc);
}
if(param_2<0){
sub_006311e0("Index>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31d,&g_01e3f3dc);
}
if(param_2>param_1[1]){
sub_006311e0("Index<=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31e,&g_01e3f3dc);
}
iVar1=param_1[1];
iVar2=iVar1+param_3;
param_1[1]=iVar2;
if(iVar2>param_1[2]){
iVar2=sub_0053d240(iVar2,param_1[2],0xc);
param_1[2]=iVar2;
if((*param_1!=0)||(iVar2)){
iVar2=sub_0053df70(*param_1,iVar2*0xc,8);
*param_1=iVar2;
}
}
sub_0053df30((void*)(*param_1+(param_2+param_3)*0xc),(void*)(*param_1+param_2*0xc),
(iVar1-param_2)*0xc);
return;
}

struct C_00b51d40 {
    void sub_00b51d40(int, int);
    int sub_00b51c20(int, int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00b51d40
void C_00b51d40::sub_00b51d40(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_00b51d40 *)(this))->sub_00b51c20(param_2, param_3);
  sub_01a37612((void *)(*param_1 + param_2 * 0xc),0,param_3 * 0xc);
  return;
}

struct C_00b51d80 { int a, b, c; C_00b51d80(); };

// @baa 0x00b51d80
C_00b51d80::C_00b51d80() : a(0), b(0), c(0) {}

struct C_00b51d90 { int a, b, c; C_00b51d90(); };

// @baa 0x00b51d90
C_00b51d90::C_00b51d90() : a(0), b(0), c(0) {}

struct C_00b51da0 { int sub_00b51da0(void); };

// @baa 0x00b51da0
int C_00b51da0::sub_00b51da0(void) { return *(int*)((char*)this + 4); }

struct C_00b51ed0 { int sub_00b51ed0(void); };

// @baa 0x00b51ed0
int C_00b51ed0::sub_00b51ed0(void) { return *(int*)((char*)this + 4); }

struct C_00b51ee0 { int sub_00b51ee0(void); };

// @baa 0x00b51ee0
int C_00b51ee0::sub_00b51ee0(void) { return *(int*)((char*)this + 4); }

struct C_00b51ef0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00b51ef0(INT Index);
};

// @baa 0x00b51ef0
UBOOL C_00b51ef0::sub_00b51ef0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00b51f80 { int sub_00b51f80(void); };

// @baa 0x00b51f80
int C_00b51f80::sub_00b51f80(void) { return *(int*)((char*)this + 4); }

struct C_00b51f90 { int sub_00b51f90(void); };

// @baa 0x00b51f90
int C_00b51f90::sub_00b51f90(void) { return *(int*)((char*)this + 4); }

struct C_00b51fa0 { int a, b, c; C_00b51fa0(); };

// @baa 0x00b51fa0
C_00b51fa0::C_00b51fa0() : a(0), b(0), c(0) {}

struct C_00b51fb0 { int sub_00b51fb0(void); };

// @baa 0x00b51fb0
int C_00b51fb0::sub_00b51fb0(void) { return *(int*)((char*)this + 4); }

struct C_00b51fc0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00b51fc0(INT Index);
};

// @baa 0x00b51fc0
UBOOL C_00b51fc0::sub_00b51fc0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00b51fe0 { int sub_00b51fe0(void); };

// @baa 0x00b51fe0
int C_00b51fe0::sub_00b51fe0(void) { return *(int*)((char*)this + 4); }

struct C_00b51ff0 { int a, b, c; C_00b51ff0(); };

// @baa 0x00b51ff0
C_00b51ff0::C_00b51ff0() : a(0), b(0), c(0) {}

struct C_00b52000 { int sub_00b52000(void); };

// @baa 0x00b52000
int C_00b52000::sub_00b52000(void) { return *(int*)((char*)this + 4); }

struct C_00b52010 { int sub_00b52010(void); };

// @baa 0x00b52010
int C_00b52010::sub_00b52010(void) { return *(int*)((char*)this + 0); }

struct C_00b52090 { int sub_00b52090(void); };

// @baa 0x00b52090
int C_00b52090::sub_00b52090(void) { return *(int*)((char*)this + 0); }

struct C_00b520a0 { int sub_00b520a0(void); };

// @baa 0x00b520a0
int C_00b520a0::sub_00b520a0(void) { return *(int*)((char*)this + 0); }

struct C_00b520b0 { int sub_00b520b0(void); };

// @baa 0x00b520b0
int C_00b520b0::sub_00b520b0(void) { return *(int*)((char*)this + 0); }

struct C_00b520c0 { C_00b520c0* sub_00b520c0(int a0); };

// @baa 0x00b520c0
C_00b520c0* C_00b520c0::sub_00b520c0(int a0) { return this; }

struct C_00b520d0 { C_00b520d0* sub_00b520d0(int a0); };

// @baa 0x00b520d0
C_00b520d0* C_00b520d0::sub_00b520d0(int a0) { return this; }

struct C_00b520e0 { C_00b520e0* sub_00b520e0(int a0); };

// @baa 0x00b520e0
C_00b520e0* C_00b520e0::sub_00b520e0(int a0) { return this; }

struct C_00b52160 { C_00b52160* sub_00b52160(int a0); };

// @baa 0x00b52160
C_00b52160* C_00b52160::sub_00b52160(int a0) { return this; }

struct C_00b52170 { int sub_00b52170(void); };

// @baa 0x00b52170
int C_00b52170::sub_00b52170(void) { return *(int*)((char*)this + 0); }

struct C_00b521f0 { C_00b521f0* sub_00b521f0(int a0); };

// @baa 0x00b521f0
C_00b521f0* C_00b521f0::sub_00b521f0(int a0) { return this; }

struct C_00b52200 { int sub_00b52200(void); };

// @baa 0x00b52200
int C_00b52200::sub_00b52200(void) { return *(int*)((char*)this + 0); }

struct C_00b52280 { C_00b52280* sub_00b52280(int a0); };

// @baa 0x00b52280
C_00b52280* C_00b52280::sub_00b52280(int a0) { return this; }

struct C_00b52290 { C_00b52290* sub_00b52290(int a0); };

// @baa 0x00b52290
C_00b52290* C_00b52290::sub_00b52290(int a0) { return this; }

struct C_00b522a0 { C_00b522a0* sub_00b522a0(int a0); };

// @baa 0x00b522a0
C_00b522a0* C_00b522a0::sub_00b522a0(int a0) { return this; }

struct C_00b522b0 { C_00b522b0* sub_00b522b0(int a0); };

// @baa 0x00b522b0
C_00b522b0* C_00b522b0::sub_00b522b0(int a0) { return this; }

struct C_00b522c0 { C_00b522c0* sub_00b522c0(int a0); };

// @baa 0x00b522c0
C_00b522c0* C_00b522c0::sub_00b522c0(int a0) { return this; }

struct C_00b522d0 { int sub_00b522d0(void); };

// @baa 0x00b522d0
int C_00b522d0::sub_00b522d0(void) { return *(int*)((char*)this + 0); }

struct C_00b52470 {
    int sub_00b52470(int);
};

// @baa 0x00b52470
int C_00b52470::sub_00b52470(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00b52480 { C_00b52480* sub_00b52480(int a0); };

// @baa 0x00b52480
C_00b52480* C_00b52480::sub_00b52480(int a0) { return this; }

struct C_00b52500 { C_00b52500* sub_00b52500(int a0); };

// @baa 0x00b52500
C_00b52500* C_00b52500::sub_00b52500(int a0) { return this; }

struct C_00b52580 { C_00b52580* sub_00b52580(int a0); };

// @baa 0x00b52580
C_00b52580* C_00b52580::sub_00b52580(int a0) { return this; }

struct C_00b52670 { C_00b52670* sub_00b52670(int a0); };

// @baa 0x00b52670
C_00b52670* C_00b52670::sub_00b52670(int a0) { return this; }

struct C_00b52680 { int sub_00b52680(void); };

// @baa 0x00b52680
int C_00b52680::sub_00b52680(void) { return *(int*)((char*)this + 0); }

struct C_00b527b0 {
    int sub_00b527b0(int);
};

// @baa 0x00b527b0
int C_00b527b0::sub_00b527b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00b527c0 { C_00b527c0* sub_00b527c0(int a0); };

// @baa 0x00b527c0
C_00b527c0* C_00b527c0::sub_00b527c0(int a0) { return this; }

struct C_00b527d0 { int sub_00b527d0(void); };

// @baa 0x00b527d0
int C_00b527d0::sub_00b527d0(void) { return *(int*)((char*)this + 0); }

struct C_00b527e0 { int sub_00b527e0(void); };

// @baa 0x00b527e0
int C_00b527e0::sub_00b527e0(void) { return *(int*)((char*)this + 0); }

struct C_00b527f0 { int sub_00b527f0(void); };

// @baa 0x00b527f0
int C_00b527f0::sub_00b527f0(void) { return *(int*)((char*)this + 0); }

struct C_00b52830 {
    int sub_00b52830(int);
};

// @baa 0x00b52830
int C_00b52830::sub_00b52830(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00b52840 { C_00b52840* sub_00b52840(int a0); };

// @baa 0x00b52840
C_00b52840* C_00b52840::sub_00b52840(int a0) { return this; }

struct C_00b52850 { int sub_00b52850(void); };

// @baa 0x00b52850
int C_00b52850::sub_00b52850(void) { return *(int*)((char*)this + 0); }

struct C_00b52860 { int sub_00b52860(void); };

// @baa 0x00b52860
int C_00b52860::sub_00b52860(void) { return *(int*)((char*)this + 0); }

struct C_00b528a0 { int sub_00b528a0(void); };

// @baa 0x00b528a0
int C_00b528a0::sub_00b528a0(void) { return *(int*)((char*)this + 0); }

struct C_00b52920 { int sub_00b52920(void); };

// @baa 0x00b52920
int C_00b52920::sub_00b52920(void) { return *(int*)((char*)this + 0); }

struct C_00b529a0 {
    int sub_00b529a0();
};

// @baa 0x00b529a0
int C_00b529a0::sub_00b529a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00b529b0 { int a, b; C_00b529b0(int, int); };

// @baa 0x00b529b0
C_00b529b0::C_00b529b0(int x, int y) : a(x), b(y) {}

struct C_00b529d0 { int sub_00b529d0(void); };

// @baa 0x00b529d0
int C_00b529d0::sub_00b529d0(void) { return *(int*)((char*)this + 0); }

struct C_00b529e0 { int sub_00b529e0(void); };

// @baa 0x00b529e0
int C_00b529e0::sub_00b529e0(void) { return *(int*)((char*)this + 0); }

struct C_00b529f0 { int sub_00b529f0(void); };

// @baa 0x00b529f0
int C_00b529f0::sub_00b529f0(void) { return *(int*)((char*)this + 0); }

struct C_00b52a00 { int sub_00b52a00(void); };

// @baa 0x00b52a00
int C_00b52a00::sub_00b52a00(void) { return *(int*)((char*)this + 0); }

struct C_00b52a10 { int sub_00b52a10(void); };

// @baa 0x00b52a10
int C_00b52a10::sub_00b52a10(void) { return *(int*)((char*)this + 0); }

struct C_00b52a20 { int sub_00b52a20(void); };

// @baa 0x00b52a20
int C_00b52a20::sub_00b52a20(void) { return *(int*)((char*)this + 0); }

struct C_00b52a30 { int sub_00b52a30(void); };

// @baa 0x00b52a30
int C_00b52a30::sub_00b52a30(void) { return *(int*)((char*)this + 0); }

struct C_00b52a40 { int sub_00b52a40(void); };

// @baa 0x00b52a40
int C_00b52a40::sub_00b52a40(void) { return *(int*)((char*)this + 0); }

struct C_00b52a50 { int sub_00b52a50(void); };

// @baa 0x00b52a50
int C_00b52a50::sub_00b52a50(void) { return *(int*)((char*)this + 0); }

struct C_00b52a60 { int sub_00b52a60(void); };

// @baa 0x00b52a60
int C_00b52a60::sub_00b52a60(void) { return *(int*)((char*)this + 0); }

struct C_00b52a70 { int sub_00b52a70(void); };

// @baa 0x00b52a70
int C_00b52a70::sub_00b52a70(void) { return *(int*)((char*)this + 0); }

struct C_00b52a80 { int sub_00b52a80(void); };

// @baa 0x00b52a80
int C_00b52a80::sub_00b52a80(void) { return *(int*)((char*)this + 0); }

struct C_00b52a90 { int sub_00b52a90(void); };

// @baa 0x00b52a90
int C_00b52a90::sub_00b52a90(void) { return *(int*)((char*)this + 0); }

struct C_00b52aa0 { int sub_00b52aa0(void); };

// @baa 0x00b52aa0
int C_00b52aa0::sub_00b52aa0(void) { return *(int*)((char*)this + 0); }

struct C_00b52ab0 { int sub_00b52ab0(void); };

// @baa 0x00b52ab0
int C_00b52ab0::sub_00b52ab0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00b52ac0
int sub_00b52ac0(int a0) { return *(int*)a0; }

struct C_00b52ad0 {
    void sub_00b52ad0(int *);
};

// @baa 0x00b52ad0
void C_00b52ad0::sub_00b52ad0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

struct C_00b52ae0 { int sub_00b52ae0(void); };

// @baa 0x00b52ae0
int C_00b52ae0::sub_00b52ae0(void) { return *(int*)((char*)this + 0); }

struct C_00b52af0 { int sub_00b52af0(void); };

// @baa 0x00b52af0
int C_00b52af0::sub_00b52af0(void) { return *(int*)((char*)this + 20); }

int sub_0053dfa0(...);
int sub_00b53a00(void);
// @baa 0x00b53bf0
undefined4 ULensFlare::sub_00b53bf0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b53a00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01ff9364;
// @baa 0x00b53c10
void ULensFlare::sub_00b53c10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ff9364);
  sub_00b53a00();
  return;
}

// @baa 0x00b53c70
undefined4 * ULensFlare::sub_00b53c70(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ff9364);
  sub_00b53a00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00716170(...);
// @baa 0x00b53d60
void ULensFlare::sub_00b53d60(undefined4 param_2)
{
    int param_1 = (int)this;
  sub_00716170(param_2,param_1 + 4);
  sub_00716170(param_2,param_1 + 10);
  sub_00716170(param_2,param_1 + 0x10);
  sub_00716170(param_2,param_1 + 0x16);
  sub_00716170(param_2,param_1 + 0x1c);
  sub_00716170(param_2,param_1 + 0x22);
  sub_00716170(param_2,param_1 + 0x28);
  sub_00716170(param_2,param_1 + 0x2e);
  return;
}

extern undefined * g_01ecdfc8;
// @baa 0x00b53dc0
void ULensFlare::sub_00b53dc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(&g_01ecdfc8);
  return;
}

// @baa 0x00b53dd0
undefined4 * ULensFlare::sub_00b53dd0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ecdfc8);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0053df40(...);
extern undefined * g_01ff9388;
// @baa 0x00b53df0
undefined4 * sub_00b53df0(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x34,8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(&g_01ff9388);
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    *(undefined2 *)(puVar1 + 5) = 0;
    *(undefined2 *)((int)puVar1 + 0x1a) = 0;
    *(undefined2 *)(puVar1 + 8) = 0;
    *(undefined2 *)((int)puVar1 + 0x26) = 0;
    *(undefined2 *)(puVar1 + 0xb) = 0;
    *(undefined2 *)((int)puVar1 + 0x32) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

int sub_00b53e30(void);
// @baa 0x00b53ff0
undefined4 ULensFlare::sub_00b53ff0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b53e30();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01ff9460;
// @baa 0x00b54010
void ULensFlare::sub_00b54010(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ff9460);
  sub_00b53e30();
  return;
}

// @baa 0x00b54070
undefined4 * ULensFlare::sub_00b54070(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ff9460);
  sub_00b53e30();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00b548b0
undefined4 * sub_00b548b0(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x34,8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(&g_01ff9388);
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    *(undefined2 *)(puVar1 + 5) = 0;
    *(undefined2 *)((int)puVar1 + 0x1a) = 0;
    *(undefined2 *)(puVar1 + 8) = 0;
    *(undefined2 *)((int)puVar1 + 0x26) = 0;
    *(undefined2 *)(puVar1 + 0xb) = 0;
    *(undefined2 *)((int)puVar1 + 0x32) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// @baa 0x00b548f0
undefined4 * sub_00b548f0(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x34,8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(&g_01ff9388);
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    *(undefined2 *)(puVar1 + 5) = 0;
    *(undefined2 *)((int)puVar1 + 0x1a) = 0;
    *(undefined2 *)(puVar1 + 8) = 0;
    *(undefined2 *)((int)puVar1 + 0x26) = 0;
    *(undefined2 *)(puVar1 + 0xb) = 0;
    *(undefined2 *)((int)puVar1 + 0x32) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_00b591a0{
void sub_00b591a0();
};

extern undefined4*g_026b0d94;
// @baa 0x00b591a0
void C_00b591a0::sub_00b591a0(void)
{
int param_1=(undefined4)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x248))((int)(iVar1));
}
return;
}

struct C_00b591c0{
void sub_00b591c0();
};

extern undefined4*g_026bf70c;
// @baa 0x00b591c0
void C_00b591c0::sub_00b591c0(void)
{
int param_1=(int)this;

int iVar2;
int iVar1;

iVar2=(int)(g_026bf70c);
iVar1=*(int*)(param_1+0x19c);
if(0!=g_026bf70c){
(*(int(__stdcall**)(uint))(*g_026b0d94+0x1fc))((int)(g_026bf70c));
}
*(int*)(param_1+0x19c)=iVar2;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x248))((int)(iVar1));
}
return;
}

struct C_00b59210{
void sub_00b59210();
};

extern undefined4*g_026bf634;
// @baa 0x00b59210
void C_00b59210::sub_00b59210(void)
{
int param_1=(uint)this;

int iVar1;
int iVar2;

iVar2=(int)(g_026bf634);
iVar1=*(int*)(param_1+0x19c);
if(g_026bf634!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1fc))((int)(g_026bf634));
}
*(int*)(param_1+0x19c)=iVar2;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x248))((int)(iVar1));
}
return;
}

// @baa 0x00b59260
undefined4 * sub_00b59260(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x34,8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(&g_01ff9388);
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    *(undefined2 *)(puVar1 + 5) = 0;
    *(undefined2 *)((int)puVar1 + 0x1a) = 0;
    *(undefined2 *)(puVar1 + 8) = 0;
    *(undefined2 *)((int)puVar1 + 0x26) = 0;
    *(undefined2 *)(puVar1 + 0xb) = 0;
    *(undefined2 *)((int)puVar1 + 0x32) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_00b59dd0{
void sub_00b59dd0();
};

// @baa 0x00b59dd0
void C_00b59dd0::sub_00b59dd0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(0x14+param_1);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x248))((int)(iVar1));
}
return;
}

struct C_00b59df0{
void sub_00b59df0();
};

extern undefined4*g_026bf6c4;
// @baa 0x00b59df0
void C_00b59df0::sub_00b59df0(void)
{
undefined4 param_1=(int)this;

DWORD iVar1;
int iVar2;

iVar2=(int)(g_026bf6c4);
iVar1=*(int*)(param_1+0x19c);
if(0!=g_026bf6c4){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1fc))((int)(g_026bf6c4));
}
*(int*)(param_1+0x19c)=iVar2;
if(iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x248))((int)(iVar1));
}
return;
}

struct C_00b59e40{
void sub_00b59e40();
};

extern undefined4*g_026bf67c;
// @baa 0x00b59e40
void C_00b59e40::sub_00b59e40(void)
{
int param_1=(int)this;

int iVar1;
int iVar2;

iVar2=(int)(g_026bf67c);
iVar1=*(int*)(param_1+0x19c);
if(0!=g_026bf67c){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1fc))((int)(g_026bf67c));
}
*(int*)(param_1+0x19c)=iVar2;
if(iVar1){
(*(undefined4(__stdcall**)(int))(*g_026b0d94+0x248))((int)(iVar1));
}
return;
}

struct sub_00b50130_Class
{
    int Field0;
    int Field4;
    int Field8;

    sub_00b50130_Class* sub_00b50130(int Value);
};

// @baa 0x00b50130
sub_00b50130_Class* sub_00b50130_Class::sub_00b50130(int Value)
{
    Field0 = 0;
    Field4 = -1;
    Field8 = 0;
    return this;
}

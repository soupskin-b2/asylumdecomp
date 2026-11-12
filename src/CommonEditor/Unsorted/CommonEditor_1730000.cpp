// CommonEditor_1730000.cpp (part 1 of 5): 134 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C { C* sub_0173a450(void); };

// @baa 0x0173a450
C* C::sub_0173a450(void) { return this; }

// @baa 0x0173a460
int sub_0173a460(int a0, int a1) { return a1; }

// @baa 0x0173a480
int sub_0173a480(int a0, int a1) { return a1; }

// @baa 0x0173a4a0
int sub_0173a4a0(int a0, int a1) { return a1; }

// @baa 0x0173a4b0
int sub_0173a4b0(int a0, int a1) { return a1; }

// @baa 0x0173a4c0
int sub_0173a4c0(int a0, int a1) { return a1; }

// @baa 0x0173a4d0
int sub_0173a4d0(int a0, int a1) { return a1; }

// @baa 0x0173a4e0
int sub_0173a4e0(int a0, int a1) { return a1; }

// @baa 0x0173a4f0
int sub_0173a4f0(int a0, int a1) { return a1; }

// @baa 0x0173a500
int sub_0173a500(int a0, int a1) { return a1; }

// @baa 0x0173add0
int UFindUnusedCommandlet::vf_000(void) { return 1; }

// @baa 0x0173ade0
bool UFindUnusedCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_0173ae40 {
    void sub_0173ae40(undefined4);
};

// @baa 0x0173ae40
void C_0173ae40::sub_0173ae40(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = param_2;
  return;
}

struct C_0173ae90 { C_0173ae90* sub_0173ae90(void); };

// @baa 0x0173ae90
C_0173ae90* C_0173ae90::sub_0173ae90(void) { return this; }

extern char g_025f0764[];
// @baa 0x0173aea0
int sub_0173aea0(void) { return (int)g_025f0764; }

extern char g_026e59b0[];
// @baa 0x0173aeb0
int sub_0173aeb0(void) { return (int)g_026e59b0; }

extern char g_025f075c[];
// @baa 0x0173aec0
int sub_0173aec0(void) { return (int)g_025f075c; }

extern char g_026e5cfc[];
// @baa 0x0173aed0
int sub_0173aed0(void) { return (int)g_026e5cfc; }

extern char g_025f0754[];
// @baa 0x0173aee0
int sub_0173aee0(void) { return (int)g_025f0754; }

extern char g_026e5b98[];
// @baa 0x0173aef0
int sub_0173aef0(void) { return (int)g_026e5b98; }

int __stdcall sub_01bf8bec(int);
// @baa 0x0173afb0
void sub_0173afb0(undefined4 param_1)
{
  sub_01bf8bec(param_1);
  return;
}

int __stdcall sub_01bf8bf2(int);
// @baa 0x0173afc0
void sub_0173afc0(undefined4 param_1)
{
  sub_01bf8bf2(param_1);
  return;
}

extern char g_023d4a58[];
struct C_0173aff0 { C_0173aff0* sub_0173aff0(void); };

// @baa 0x0173aff0
C_0173aff0* C_0173aff0::sub_0173aff0(void) { *(int*)((char*)this + 0) = (int)g_023d4a58; return this; }

struct C_0173b000 {
    int sub_0173b000(int);
};

// @baa 0x0173b000
int C_0173b000::sub_0173b000(int param_2)
{
    int param_1 = (int)this;

  if (param_2 != 0) {
    *(int *)(param_1 + 8) = param_2;
    return param_2;
  }
  return 0;
}

struct C_0173b060 { void sub_0173b060(int a0); };

// @baa 0x0173b060
void C_0173b060::sub_0173b060(int a0) { *(int*)((char*)this + 4) = a0; }

// @baa 0x0173b5c0
undefined1 sub_0173b5c0(void)
{
  return 0;
}

extern char g_023d0ab8[];
// @baa 0x0173b5d0
int sub_0173b5d0(void) { return (int)g_023d0ab8; }

extern char g_026e5cc0[];
// @baa 0x0173b5e0
int sub_0173b5e0(void) { return (int)g_026e5cc0; }

extern char g_026e5ca8[];
// @baa 0x0173dc80
int sub_0173dc80(void) { return (int)g_026e5ca8; }

extern char g_026e5c90[];
// @baa 0x0173dc90
int sub_0173dc90(void) { return (int)g_026e5c90; }

extern char g_023d2274[];
// @baa 0x0173dea0
int sub_0173dea0(void) { return (int)g_023d2274; }

extern char g_01ebb554[];
struct C_0173deb0 { void sub_0173deb0(void); };

// @baa 0x0173deb0
void C_0173deb0::sub_0173deb0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_0173dec0 { void sub_0173dec0(void); };

// @baa 0x0173dec0
void C_0173dec0::sub_0173dec0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_0173ded0 {
    undefined4 * sub_0173ded0(byte);
};

int sub_0053dfa0(...);
// @baa 0x0173ded0
undefined4 * C_0173ded0::sub_0173ded0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0173def0 {
    undefined4 * sub_0173def0(byte);
};

// @baa 0x0173def0
undefined4 * C_0173def0::sub_0173def0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0173e070 { int sub_0173e070(void); };

// @baa 0x0173e070
int C_0173e070::sub_0173e070(void) { return *(int*)((char*)this + 4); }

struct C_0173e080 { int a, b, c; C_0173e080(); };

// @baa 0x0173e080
C_0173e080::C_0173e080() : a(0), b(0), c(0) {}

struct C_0173e090 { int sub_0173e090(void); };

// @baa 0x0173e090
int C_0173e090::sub_0173e090(void) { return *(int*)((char*)this + 4); }

struct C_0173e0a0 { int a, b, c; C_0173e0a0(); };

// @baa 0x0173e0a0
C_0173e0a0::C_0173e0a0() : a(0), b(0), c(0) {}

typedef uint size_t;

struct C_0173e0b0{
void sub_0173e0b0(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
undefined4 sub_0053df70(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x0173e0b0
void C_0173e0b0::sub_0173e0b0(int param_2,int param_3)
{
int*param_1=(int*)this;
undefined4 iVar1;
int iVar2;
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
iVar2=sub_0053d240(iVar2,param_1[2],0x14);
param_1[2]=iVar2;
if((*param_1)||(iVar2!=0)){
iVar2=sub_0053df70(*param_1,0x14*iVar2,8);
*param_1=iVar2;
}
}
sub_0053df30((void*)(*param_1+(param_2+param_3)*0x14),(void*)(*param_1+param_2*0x14),
(iVar1-param_2)*0x14);
return;
}

struct C_0173e1d0 { int a, b, c; C_0173e1d0(); };

// @baa 0x0173e1d0
C_0173e1d0::C_0173e1d0() : a(0), b(0), c(0) {}

struct C_0173e1e0 { int sub_0173e1e0(void); };

// @baa 0x0173e1e0
int C_0173e1e0::sub_0173e1e0(void) { return *(int*)((char*)this + 4); }

struct C_0173e1f0 { int sub_0173e1f0(void); };

// @baa 0x0173e1f0
int C_0173e1f0::sub_0173e1f0(void) { return *(int*)((char*)this + 4); }

struct C_0173e200 { int a, b, c; C_0173e200(); };

// @baa 0x0173e200
C_0173e200::C_0173e200() : a(0), b(0), c(0) {}

struct C_0173e210 { int sub_0173e210(void); };

// @baa 0x0173e210
int C_0173e210::sub_0173e210(void) { return *(int*)((char*)this + 4); }

struct C_0173e290 {
    void sub_0173e290(int, int);
};

int sub_00627f00(...);
// @baa 0x0173e290
void C_0173e290::sub_0173e290(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  sub_00627f00(param_2 * 0x2c + *param_1,param_3 * 0x2c + *param_1,0x2c);
  return;
}

struct C_0173e2c0 { int sub_0173e2c0(void); };

// @baa 0x0173e2c0
int C_0173e2c0::sub_0173e2c0(void) { return *(int*)((char*)this + 0); }

struct C_0173e340 {
    void sub_0173e340(int, int);
};

// @baa 0x0173e340
void C_0173e340::sub_0173e340(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  sub_00627f00(*param_1 + param_2 * 0x14,*param_1 + param_3 * 0x14,0x14);
  return;
}

struct C_0173e370 { int sub_0173e370(void); };

// @baa 0x0173e370
int C_0173e370::sub_0173e370(void) { return *(int*)((char*)this + 0); }

struct C_0173e380 { int sub_0173e380(void); };

// @baa 0x0173e380
int C_0173e380::sub_0173e380(void) { return *(int*)((char*)this + 0); }

struct C_0173e400 { int sub_0173e400(void); };

// @baa 0x0173e400
int C_0173e400::sub_0173e400(void) { return *(int*)((char*)this + 0); }

struct C_0173e490 {
    int sub_0173e490();
};

// @baa 0x0173e490
int C_0173e490::sub_0173e490(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0173e4a0 { int a, b; C_0173e4a0(int, int); };

// @baa 0x0173e4a0
C_0173e4a0::C_0173e4a0(int x, int y) : a(x), b(y) {}

struct C_0173e4c0 {
    int sub_0173e4c0();
};

// @baa 0x0173e4c0
int C_0173e4c0::sub_0173e4c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0173e4d0 { int a, b; C_0173e4d0(int, int); };

// @baa 0x0173e4d0
C_0173e4d0::C_0173e4d0(int x, int y) : a(x), b(y) {}

struct C_0173e4f0 {
    int sub_0173e4f0();
};

// @baa 0x0173e4f0
int C_0173e4f0::sub_0173e4f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0173e500 { int a, b; C_0173e500(int, int); };

// @baa 0x0173e500
C_0173e500::C_0173e500(int x, int y) : a(x), b(y) {}

struct C_0173e520 { int sub_0173e520(void); };

// @baa 0x0173e520
int C_0173e520::sub_0173e520(void) { return *(int*)((char*)this + 0); }

// @baa 0x0173e530
int sub_0173e530(int a0) { return *(int*)a0; }

// @baa 0x0173e540
bool sub_0173e540(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0173e550 {
    void sub_0173e550(undefined4 *);
};

// @baa 0x0173e550
void C_0173e550::sub_0173e550(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x0173e570
int sub_0173e570(int a0) { return *(int*)a0; }

// @baa 0x0173e580
bool sub_0173e580(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0173e590 { int a, b; C_0173e590(const C_0173e590 &); };

// @baa 0x0173e590
C_0173e590::C_0173e590(const C_0173e590 &o) : a(o.a), b(o.b) {}

// @baa 0x0173e5f0
int sub_0173e5f0(int a0) { return *(int*)a0; }

// @baa 0x0173e600
bool sub_0173e600(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0173e610 { int a, b; C_0173e610(const C_0173e610 &); };

// @baa 0x0173e610
C_0173e610::C_0173e610(const C_0173e610 &o) : a(o.a), b(o.b) {}

struct C_0173e670 { int sub_0173e670(void); };

// @baa 0x0173e670
int C_0173e670::sub_0173e670(void) { return *(int*)((char*)this + 0); }

struct C_0173e6f0 { int sub_0173e6f0(void); };

// @baa 0x0173e6f0
int C_0173e6f0::sub_0173e6f0(void) { return *(int*)((char*)this + 0); }

struct C_0173e700 {
    int sub_0173e700(int);
};

// @baa 0x0173e700
int C_0173e700::sub_0173e700(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0173e710 {
    int sub_0173e710(int);
};

// @baa 0x0173e710
int C_0173e710::sub_0173e710(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0173e720 { int sub_0173e720(void); };

// @baa 0x0173e720
int C_0173e720::sub_0173e720(void) { return *(int*)((char*)this + 0); }

struct C_0173e730 { int sub_0173e730(void); };

// @baa 0x0173e730
int C_0173e730::sub_0173e730(void) { return *(int*)((char*)this + 20); }

struct C_0173e740 { int sub_0173e740(void); };

// @baa 0x0173e740
int C_0173e740::sub_0173e740(void) { return *(int*)((char*)this + 20); }

struct C_0173e750 { int sub_0173e750(void); };

// @baa 0x0173e750
int C_0173e750::sub_0173e750(void) { return *(int*)((char*)this + 20); }

struct C_0173e760 { int sub_0173e760(void); };

// @baa 0x0173e760
int C_0173e760::sub_0173e760(void) { return *(int*)((char*)this + 20); }

struct C_0173e770 { int sub_0173e770(void); };

// @baa 0x0173e770
int C_0173e770::sub_0173e770(void) { return *(int*)((char*)this + 20); }

struct C_0173e7e0 { int a, b; C_0173e7e0(const C_0173e7e0 &); };

// @baa 0x0173e7e0
C_0173e7e0::C_0173e7e0(const C_0173e7e0 &o) : a(o.a), b(o.b) {}

struct C_0173e800 { int a, b; C_0173e800(const C_0173e800 &); };

// @baa 0x0173e800
C_0173e800::C_0173e800(const C_0173e800 &o) : a(o.a), b(o.b) {}

struct E { BYTE Bytes[20]; };

struct S {
    TArray<E> Items; // 0x00
    const E* sub_0173e820(INT Index) const;
};

// @baa 0x0173e820
const E* S::sub_0173e820(INT Index) const
{
    return &Items(Index);
}

// @baa 0x0173e870
int sub_0173e870(int a0) { return *(int*)a0; }

// @baa 0x0173e880
int sub_0173e880(int a0) { return *(int*)a0; }

// @baa 0x0173e8d0
int sub_0173e8d0(void) { return 0; }

// @baa 0x0173e8e0
int sub_0173e8e0(void) { return 0; }

// @baa 0x0173e8f0
int sub_0173e8f0(void) { return 0; }

// @baa 0x0173e900
int sub_0173e900(void) { return 0; }

// @baa 0x0173e910
int sub_0173e910(int a0) { return a0; }

// @baa 0x0173e920
int sub_0173e920(int a0) { return a0; }

struct E_0173e930 { BYTE Bytes[16]; };

struct S_0173e930 {
    TArray<E_0173e930> Items; // 0x00
    const E_0173e930* sub_0173e930(INT Index) const;
};

// @baa 0x0173e930
const E_0173e930* S_0173e930::sub_0173e930(INT Index) const
{
    return &Items(Index);
}

// @baa 0x0173ed70
void __stdcall sub_0173ed70(int a0, int a1) {  }

struct T_0173eeb0;
// @baa 0x0173eeb0
template INT TArray<T_0173eeb0*>::RemoveItem(T_0173eeb0* const&);

struct C_0173ef90 {
    void sub_0173ef90(int, int);
};

// @baa 0x0173ef90
void C_0173ef90::sub_0173ef90(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  if ((param_2 < 0) || (param_3 < 0)) {
    sub_006311e0("(A >= 0) && (B >= 0)",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,0x41f,&g_01e3f3dc);
  }
  if ((param_1[1] <= param_2) || (param_1[1] <= param_3)) {
    sub_006311e0("(ArrayNum > A) && (ArrayNum > B)",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,0x420,&g_01e3f3dc);
  }
  if (param_2 != param_3) {
    sub_00627f00(param_2 * 0x2c + *param_1,param_3 * 0x2c + *param_1,0x2c);
  }
  return;
}

struct S_0173f010 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0173f010(INT Index);
};

// @baa 0x0173f010
DWORD* S_0173f010::sub_0173f010(INT Index)
{
    return &Items(Index);
}

struct C_0173f0c0 {
    void sub_0173f0c0(int, int);
};

// @baa 0x0173f0c0
void C_0173f0c0::sub_0173f0c0(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  if ((param_2 < 0) || (param_3 < 0)) {
    sub_006311e0("(A >= 0) && (B >= 0)",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,0x41f,&g_01e3f3dc);
  }
  if ((param_1[1] <= param_2) || (param_1[1] <= param_3)) {
    sub_006311e0("(ArrayNum > A) && (ArrayNum > B)",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,0x420,&g_01e3f3dc);
  }
  if (param_2 != param_3) {
    sub_00627f00(*param_1 + param_2 * 0x14,*param_1 + param_3 * 0x14,0x14);
  }
  return;
}

struct S_0173f140 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0173f140(INT Index);
};

// @baa 0x0173f140
DWORD* S_0173f140::sub_0173f140(INT Index)
{
    return &Items(Index);
}

struct E_0173f190 { BYTE Bytes[16]; };

struct S_0173f190 {
    TArray<E_0173f190> Items; // 0x00
    E_0173f190* sub_0173f190(INT Index);
};

// @baa 0x0173f190
E_0173f190* S_0173f190::sub_0173f190(INT Index)
{
    return &Items(Index);
}

struct C_0173f1e0 {
    int sub_0173f1e0(int);
    int sub_0173e390(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x0173f1e0
int C_0173f1e0::sub_0173f1e0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0173f1e0 *)(this))->sub_0173e390(param_2);
  sub_01a37612((void *)(iVar1 * 0x10 + *param_1),0,param_2 << 4);
  return iVar1;
}

struct E_0173f210 { BYTE Bytes[24]; };

struct S_0173f210 {
    TArray<E_0173f210> Items; // 0x00
    E_0173f210* sub_0173f210(INT Index);
};

// @baa 0x0173f210
E_0173f210* S_0173f210::sub_0173f210(INT Index)
{
    return &Items(Index);
}

struct C_0173f260 {
    int sub_0173f260(int);
    int sub_0173e410(int);
};

// @baa 0x0173f260
int C_0173f260::sub_0173f260(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0173f260 *)(this))->sub_0173e410(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x18),0,param_2 * 0x18);
  return iVar1;
}

struct C_0173f2a0 {
    int sub_0173f2a0(int);
};

// @baa 0x0173f2a0
int C_0173f2a0::sub_0173f2a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0173f2b0
void __stdcall sub_0173f2b0(int a0, int a1) {  }

struct C_0173f320 {
    int sub_0173f320(int);
};

// @baa 0x0173f320
int C_0173f320::sub_0173f320(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0173f330
void __stdcall sub_0173f330(int a0, int a1) {  }

struct C_0173f340 {
    int sub_0173f340(int);
};

// @baa 0x0173f340
int C_0173f340::sub_0173f340(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0173f350 { int sub_0173f350(void); };

// @baa 0x0173f350
int C_0173f350::sub_0173f350(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0173f360 { int sub_0173f360(void); };

// @baa 0x0173f360
int C_0173f360::sub_0173f360(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0173f370 { int sub_0173f370(void); };

// @baa 0x0173f370
int C_0173f370::sub_0173f370(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

int sub_005413d0(...);
// @baa 0x0173f3b0
void sub_0173f3b0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0173f3c0 {
    int sub_0173f3c0(int);
};

// @baa 0x0173f3c0
int C_0173f3c0::sub_0173f3c0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x48;
}

// @baa 0x0173f400
void sub_0173f400(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0173f410 {
    int sub_0173f410(int);
};

// @baa 0x0173f410
int C_0173f410::sub_0173f410(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_0173f420 {
    int sub_0173f420(int);
};

// @baa 0x0173f420
int C_0173f420::sub_0173f420(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x0173f460
void sub_0173f460(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0173f470 {
    int sub_0173f470(int);
};

// @baa 0x0173f470
int C_0173f470::sub_0173f470(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_0173f480 {
    int sub_0173f480(int);
};

// @baa 0x0173f480
int C_0173f480::sub_0173f480(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0173f490 { int sub_0173f490(void); };

// @baa 0x0173f490
int C_0173f490::sub_0173f490(void) { return *(int*)((char*)this + 20); }

struct C_0173f4a0 {
    int sub_0173f4a0(int);
};

// @baa 0x0173f4a0
int C_0173f4a0::sub_0173f4a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0173f4b0 {
    int sub_0173f4b0();
};

// @baa 0x0173f4b0
int C_0173f4b0::sub_0173f4b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0173f4d0 {
    int sub_0173f4d0();
};

// @baa 0x0173f4d0
int C_0173f4d0::sub_0173f4d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0173f4f0 {
    int sub_0173f4f0(int);
};

// @baa 0x0173f4f0
int C_0173f4f0::sub_0173f4f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_0173f500 {
    int sub_0173f500();
};

// @baa 0x0173f500
int C_0173f500::sub_0173f500(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0173f520 {
    int sub_0173f520();
};

// @baa 0x0173f520
int C_0173f520::sub_0173f520(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0173f540 {
    int sub_0173f540();
};

// @baa 0x0173f540
int C_0173f540::sub_0173f540(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0173f550 {
    int sub_0173f550();
};

// @baa 0x0173f550
int C_0173f550::sub_0173f550(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0173f570 {
    int sub_0173f570();
};

// @baa 0x0173f570
int C_0173f570::sub_0173f570(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0173f580 { int sub_0173f580(void); };

// @baa 0x0173f580
int C_0173f580::sub_0173f580(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0173f590 {
    int sub_0173f590();
};

// @baa 0x0173f590
int C_0173f590::sub_0173f590(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x0173f5b0
void sub_0173f5b0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x0173f5d0
void sub_0173f5d0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x0173f630
int sub_0173f630(int a0) { return *(int*)a0; }

// @baa 0x0173f640
int sub_0173f640(int a0) { return *(int*)a0; }

int sub_005c7a20(void);
extern undefined * g_023d4ef0;
// @baa 0x0173f650
undefined4 * UObject::sub_0173f650(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023d4ef0);
  return param_1;
}

// @baa 0x0173f670
IMPLEMENT_CLASS_AT(URActorFactoryStaticMeshNoCL, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonEditor\\Src\\CommonEditorClasses.cpp", 5);


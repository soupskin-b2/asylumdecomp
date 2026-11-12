// Core_0590000.cpp (part 1 of 4): 179 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00590620
void __stdcall sub_00590620(int a0, int a1) {  }

// @baa 0x00590690
void __stdcall sub_00590690(int a0, int a1) {  }

extern unsigned int g_026667f0;
// @baa 0x005906a0
void __stdcall sub_005906a0(int a, int b)
{
    g_026667f0 |= 2;
}

struct C {
    void sub_00590850(undefined4, undefined4 *);
};

// @baa 0x00590850
void C::sub_00590850(undefined4 param_2, undefined4 * param_3)
{
    undefined4 param_1 = (undefined4)this;

  *param_3 = param_1;
  return;
}

struct C_00590900 {
    void sub_00590900(int, undefined4 *);
};

// @baa 0x00590900
void C_00590900::sub_00590900(int param_2, undefined4 * param_3)
{
    undefined4 param_1 = (undefined4)this;

  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_2 + 0x18);
  iVar2 = *piVar1;
  iVar3 = piVar1[1];
  *(int **)(param_2 + 0x18) = piVar1 + 2;
  param_3[1] = iVar2;
  param_3[2] = iVar3;
  if ((iVar2 == 0) && (iVar3 == 0)) {
    *param_3 = 0;
    return;
  }
  *param_3 = param_1;
  return;
}

struct C_00590df0 {
    void sub_00590df0(int, undefined4 *);
};

// @baa 0x00590df0
void C_00590df0::sub_00590df0(int param_2, undefined4 * param_3)
{
    undefined4 param_1 = (undefined4)this;

  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = *(undefined4 **)(param_2 + 0x18);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *(undefined4 **)(param_2 + 0x18) = puVar1 + 2;
  param_3[2] = uVar3;
  param_3[1] = uVar2;
  *param_3 = param_1;
  return;
}

struct FCallContext
{
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    INT Unk0C; // 0x0c
    INT Unk10; // 0x10
    void* volatile Receiver; // 0x14
};

typedef INT (__cdecl *FIndirectCall)(FCallContext* Context);

extern FIndirectCall g_026885b8;
// @baa 0x00590f10
INT sub_00590f10(FCallContext* Context)
{
    (void)Context->Receiver;
    *(FCallContext* volatile*)&Context = Context;
    return g_026885b8(Context);
}

// @baa 0x00598610
void sub_00598610(void) {  }

// @baa 0x00599e70
void __stdcall sub_00599e70(int a0, int a1) {  }

// @baa 0x0059a060
void UObject::vf_0f4(int a0) {  }

// @baa 0x0059a070
int UObject::vf_0f8(int a0, int a1, int a2) { return 0; }

// @baa 0x0059a080
uint sub_0059a080(int * param_1)
{
  return param_1[1] << 0xc ^ *(uint *)(*param_1 + 4);
}

struct C_0059a100 {
    undefined4 sub_0059a100(undefined4, undefined4);
};

extern undefined4 g_025d53f8;
extern undefined4 g_026667e4;
// @baa 0x0059a100
undefined4 C_0059a100::sub_0059a100(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;

  g_026667e4 = param_2;
  g_025d53f8 = param_3;
  return param_1;
}

// @baa 0x0059a120
void sub_0059a120(void)
{
  g_026667e4 = 0;
  g_025d53f8 = 0xffffffff;
  return;
}

struct C_0059a140 { C_0059a140* sub_0059a140(void); };

// @baa 0x0059a140
C_0059a140* C_0059a140::sub_0059a140(void) { return this; }

struct C_0059a1d0 { C_0059a1d0* sub_0059a1d0(void); };

// @baa 0x0059a1d0
C_0059a1d0* C_0059a1d0::sub_0059a1d0(void) { return this; }

struct C_0059a7f0 { int sub_0059a7f0(void); };

// @baa 0x0059a7f0
int C_0059a7f0::sub_0059a7f0(void) { return *(int*)((char*)this + 4); }

struct T_0059a800 { BYTE b[4]; };

// @baa 0x0059a800
template T_0059a800& TArray<T_0059a800>::Last(INT);

typedef uint size_t;

struct C_view {
    int sub_00540c80(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x0059a860
int UObject::sub_0059a860(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_view *)(this))->sub_00540c80(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 4),0,param_2 * 4);
  return iVar1;
}

struct C_0059a8a0 { int a, b, c; C_0059a8a0(); };

// @baa 0x0059a8a0
C_0059a8a0::C_0059a8a0() : a(0), b(0), c(0) {}

struct C_0059a8b0 { int a, b, c; C_0059a8b0(); };

// @baa 0x0059a8b0
C_0059a8b0::C_0059a8b0() : a(0), b(0), c(0) {}

struct C_0059a8c0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_0059a8c0(INT Index);
};

// @baa 0x0059a8c0
UBOOL C_0059a8c0::sub_0059a8c0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_0059a950 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_0059a950(INT Index);
};

// @baa 0x0059a950
UBOOL C_0059a950::sub_0059a950(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_0059a970 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_0059a970(INT Index);
};

// @baa 0x0059a970
UBOOL C_0059a970::sub_0059a970(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_0059a990 { int sub_0059a990(void); };

// @baa 0x0059a990
int C_0059a990::sub_0059a990(void) { return *(int*)((char*)this + 4); }

struct C_0059a9d0 {
    undefined4 sub_0059a9d0();
};

// @baa 0x0059a9d0
undefined4 C_0059a9d0::sub_0059a9d0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 4);
}

struct C_0059a9e0 { int sub_0059a9e0(void); };

// @baa 0x0059a9e0
int C_0059a9e0::sub_0059a9e0(void) { return *(int*)((char*)this + 4); }

struct C_0059a9f0 { int sub_0059a9f0(void); };

// @baa 0x0059a9f0
int C_0059a9f0::sub_0059a9f0(void) { return *(int*)((char*)this + 4); }

struct C_0059aa00 {
    int Unk0;
    int Unk4;
    int sub_0059aa00();
};

// @baa 0x0059aa00
int C_0059aa00::sub_0059aa00()
{
    return Unk4 == 0 ? -1 : 0;
}

struct C_0059aa10 { int sub_0059aa10(void); };

// @baa 0x0059aa10
int C_0059aa10::sub_0059aa10(void) { return *(int*)((char*)this + 4); }

struct C_0059aa20 { int sub_0059aa20(void); };

// @baa 0x0059aa20
int C_0059aa20::sub_0059aa20(void) { return *(int*)((char*)this + 4); }

struct C_0059aa30 { int a, b, c; C_0059aa30(); };

// @baa 0x0059aa30
C_0059aa30::C_0059aa30() : a(0), b(0), c(0) {}

struct C_0059aa40 { int sub_0059aa40(void); };

// @baa 0x0059aa40
int C_0059aa40::sub_0059aa40(void) { return *(int*)((char*)this + 4); }

struct C_0059aa50 { int sub_0059aa50(void); };

// @baa 0x0059aa50
int C_0059aa50::sub_0059aa50(void) { return *(int*)((char*)this + 0); }

struct C_0059ab00{
void sub_0059ab00(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
int sub_0053df70(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x0059ab00
void C_0059ab00::sub_0059ab00(int param_2,int param_3)
{
int*param_1=(int*)this;
int iVar1;
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
iVar2=sub_0053d240(iVar2,param_1[2],4);
param_1[2]=iVar2;
if((*param_1!=0)||(iVar2!=0)){
iVar2=sub_0053df70(*param_1,iVar2*4,8);
*param_1=iVar2;
}
}
sub_0053df30((void*)(*param_1+(param_2+param_3)*4),(void*)(*param_1+param_2*4),
(iVar1-param_2)*4);
return;
}

struct C_0059ac20 { int sub_0059ac20(void); };

// @baa 0x0059ac20
int C_0059ac20::sub_0059ac20(void) { return *(int*)((char*)this + 0); }

struct C_0059aca0 { int sub_0059aca0(void); };

// @baa 0x0059aca0
int C_0059aca0::sub_0059aca0(void) { return *(int*)((char*)this + 0); }

struct C_0059acb0 { int sub_0059acb0(void); };

// @baa 0x0059acb0
int C_0059acb0::sub_0059acb0(void) { return *(int*)((char*)this + 0); }

struct C_0059ace0 {
    undefined4 sub_0059ace0();
};

// @baa 0x0059ace0
undefined4 C_0059ace0::sub_0059ace0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

struct C_0059ad20 { int sub_0059ad20(void); };

// @baa 0x0059ad20
int C_0059ad20::sub_0059ad20(void) { return *(int*)((char*)this + 0); }

struct C_0059ad60 { int sub_0059ad60(void); };

// @baa 0x0059ad60
int C_0059ad60::sub_0059ad60(void) { return *(int*)((char*)this + 0); }

struct C_0059ae10 { int sub_0059ae10(void); };

// @baa 0x0059ae10
int C_0059ae10::sub_0059ae10(void) { return *(int*)((char*)this + 0); }

struct C_0059ae20 { int sub_0059ae20(void); };

// @baa 0x0059ae20
int C_0059ae20::sub_0059ae20(void) { return *(int*)((char*)this + 0); }

struct C_0059ae30 { int sub_0059ae30(void); };

// @baa 0x0059ae30
int C_0059ae30::sub_0059ae30(void) { return *(int*)((char*)this + 0); }

struct C_0059ae40 { int sub_0059ae40(void); };

// @baa 0x0059ae40
int C_0059ae40::sub_0059ae40(void) { return *(int*)((char*)this + 0); }

struct C_0059aeb0 { int sub_0059aeb0(void); };

// @baa 0x0059aeb0
int C_0059aeb0::sub_0059aeb0(void) { return *(int*)((char*)this + 0); }

// @baa 0x0059af30
int sub_0059af30(int a0) { return a0; }

struct C_0059af40 { int sub_0059af40(void); };

// @baa 0x0059af40
int C_0059af40::sub_0059af40(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct S {
    INT Unk0; // 0x00
    INT Unk4; // 0x04
    INT Unk8; // 0x08
    S *sub_0059af50(const S &Other);
};

// @baa 0x0059af50
S *S::sub_0059af50(const S &Other)
{
    Unk0 = Other.Unk0;
    Unk4 = Other.Unk4;
    Unk8 = -1;
    return this;
}

struct C_0059af70 {
    int sub_0059af70();
};

// @baa 0x0059af70
int C_0059af70::sub_0059af70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0059af80 { int a, b; C_0059af80(int, int); };

// @baa 0x0059af80
C_0059af80::C_0059af80(int x, int y) : a(x), b(y) {}

struct C_0059afa0 {
    int sub_0059afa0();
};

// @baa 0x0059afa0
int C_0059afa0::sub_0059afa0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0059afb0 { int a, b; C_0059afb0(int, int); };

// @baa 0x0059afb0
C_0059afb0::C_0059afb0(int x, int y) : a(x), b(y) {}

struct C_0059afd0 {
    int sub_0059afd0();
};

// @baa 0x0059afd0
int C_0059afd0::sub_0059afd0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0059afe0 { int a, b; C_0059afe0(int, int); };

// @baa 0x0059afe0
C_0059afe0::C_0059afe0(int x, int y) : a(x), b(y) {}

struct C_0059b000 {
    int sub_0059b000();
};

// @baa 0x0059b000
int C_0059b000::sub_0059b000(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0059b010 { int a, b; C_0059b010(int, int); };

// @baa 0x0059b010
C_0059b010::C_0059b010(int x, int y) : a(x), b(y) {}

struct C_0059b030 {
    int sub_0059b030();
};

// @baa 0x0059b030
int C_0059b030::sub_0059b030(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0059b040 { int a, b; C_0059b040(int, int); };

// @baa 0x0059b040
C_0059b040::C_0059b040(int x, int y) : a(x), b(y) {}

struct C_0059b060 {
    int sub_0059b060();
};

// @baa 0x0059b060
int C_0059b060::sub_0059b060(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0059b070 { int a, b; C_0059b070(int, int); };

// @baa 0x0059b070
C_0059b070::C_0059b070(int x, int y) : a(x), b(y) {}

struct C_0059b090 {
    int sub_0059b090();
};

// @baa 0x0059b090
int C_0059b090::sub_0059b090(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0059b0a0 { int a, b; C_0059b0a0(int, int); };

// @baa 0x0059b0a0
C_0059b0a0::C_0059b0a0(int x, int y) : a(x), b(y) {}

struct C_0059b0c0 {
    int sub_0059b0c0();
};

// @baa 0x0059b0c0
int C_0059b0c0::sub_0059b0c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0059b0d0 { int a, b; C_0059b0d0(int, int); };

// @baa 0x0059b0d0
C_0059b0d0::C_0059b0d0(int x, int y) : a(x), b(y) {}

struct S_0059b0f0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0059b0f0(INT Index);
};

// @baa 0x0059b0f0
DWORD* S_0059b0f0::sub_0059b0f0(INT Index)
{
    return &Items(Index);
}

// @baa 0x0059b140
int sub_0059b140(int a0) { return *(int*)a0; }

// @baa 0x0059b150
bool sub_0059b150(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0059b160 { int a, b; C_0059b160(const C_0059b160 &); };

// @baa 0x0059b160
C_0059b160::C_0059b160(const C_0059b160 &o) : a(o.a), b(o.b) {}

struct C_0059b1a0 { int sub_0059b1a0(void); };

// @baa 0x0059b1a0
int C_0059b1a0::sub_0059b1a0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct S_0059b1b0 {
    INT Unk0; // 0x00
    INT Unk4; // 0x04
    INT Unk8; // 0x08
    S_0059b1b0 *sub_0059b1b0(const S_0059b1b0 &Other);
};

// @baa 0x0059b1b0
S_0059b1b0 *S_0059b1b0::sub_0059b1b0(const S_0059b1b0 &Other)
{
    Unk0 = Other.Unk0;
    Unk4 = Other.Unk4;
    Unk8 = -1;
    return this;
}

// @baa 0x0059b1d0
int sub_0059b1d0(int a0) { return *(int*)a0; }

// @baa 0x0059b1e0
undefined4 sub_0059b1e0(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_0059b220 {
    void sub_0059b220(int *);
};

// @baa 0x0059b220
void C_0059b220::sub_0059b220(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 8);
  return;
}

struct C_0059b230 { int sub_0059b230(void); };

// @baa 0x0059b230
int C_0059b230::sub_0059b230(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0059b270 { int sub_0059b270(void); };

// @baa 0x0059b270
int C_0059b270::sub_0059b270(void) { return *(int*)((char*)this + 0); }

struct C_0059b280 { int sub_0059b280(void); };

// @baa 0x0059b280
int C_0059b280::sub_0059b280(void) { return *(int*)((char*)this + 0); }

struct S_0059b290 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0059b290(INT Index);
};

// @baa 0x0059b290
DWORD* S_0059b290::sub_0059b290(INT Index)
{
    return &Items(Index);
}

// @baa 0x0059b2e0
int sub_0059b2e0(int a0) { return *(int*)a0; }

// @baa 0x0059b2f0
undefined4 sub_0059b2f0(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_0059b310 {
    void sub_0059b310(int *);
};

// @baa 0x0059b310
void C_0059b310::sub_0059b310(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 8;
  return;
}

struct C_0059b320 { int sub_0059b320(void); };

// @baa 0x0059b320
int C_0059b320::sub_0059b320(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x0059b330
int sub_0059b330(int a0) { return *(int*)a0; }

// @baa 0x0059b340
bool sub_0059b340(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0059b350 {
    void sub_0059b350(undefined4 *);
};

// @baa 0x0059b350
void C_0059b350::sub_0059b350(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x0059b370
int sub_0059b370(int a0) { return *(int*)a0; }

// @baa 0x0059b380
bool sub_0059b380(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0059b390 { int a, b; C_0059b390(const C_0059b390 &); };

// @baa 0x0059b390
C_0059b390::C_0059b390(const C_0059b390 &o) : a(o.a), b(o.b) {}

struct C_0059b3d0 { int sub_0059b3d0(void); };

// @baa 0x0059b3d0
int C_0059b3d0::sub_0059b3d0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct S_0059b3e0 {
    INT Unk0; // 0x00
    INT Unk4; // 0x04
    INT Unk8; // 0x08
    S_0059b3e0 *sub_0059b3e0(const S_0059b3e0 &Other);
};

// @baa 0x0059b3e0
S_0059b3e0 *S_0059b3e0::sub_0059b3e0(const S_0059b3e0 &Other)
{
    Unk0 = Other.Unk0;
    Unk4 = Other.Unk4;
    Unk8 = -1;
    return this;
}

// @baa 0x0059b400
int sub_0059b400(int a0) { return *(int*)a0; }

// @baa 0x0059b410
bool sub_0059b410(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0059b420 { int a, b; C_0059b420(const C_0059b420 &); };

// @baa 0x0059b420
C_0059b420::C_0059b420(const C_0059b420 &o) : a(o.a), b(o.b) {}

struct C_0059b460 { int sub_0059b460(void); };

// @baa 0x0059b460
int C_0059b460::sub_0059b460(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x0059b490
int sub_0059b490(int a0) { return *(int*)a0; }

// @baa 0x0059b4a0
bool sub_0059b4a0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0059b4b0 { int a, b; C_0059b4b0(const C_0059b4b0 &); };

// @baa 0x0059b4b0
C_0059b4b0::C_0059b4b0(const C_0059b4b0 &o) : a(o.a), b(o.b) {}

struct C_0059b4f0 { int sub_0059b4f0(void); };

// @baa 0x0059b4f0
int C_0059b4f0::sub_0059b4f0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x0059b520
int sub_0059b520(int a0) { return *(int*)a0; }

struct C_0059b530 {
    void sub_0059b530(int *);
};

// @baa 0x0059b530
void C_0059b530::sub_0059b530(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

struct C_0059b540 { int sub_0059b540(void); };

// @baa 0x0059b540
int C_0059b540::sub_0059b540(void) { return *(int*)((char*)this + 0); }

// @baa 0x0059b550
undefined4 sub_0059b550(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

// @baa 0x0059b570
uint sub_0059b570(int * param_1)
{
  return param_1[1] << 0xc ^ *(uint *)(*param_1 + 4);
}

struct C_0059b580 {
    int sub_0059b580(int);
};

// @baa 0x0059b580
int C_0059b580::sub_0059b580(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_0059b590 {
    int sub_0059b590(int);
};

// @baa 0x0059b590
int C_0059b590::sub_0059b590(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0059b5c0 { int sub_0059b5c0(void); };

// @baa 0x0059b5c0
int C_0059b5c0::sub_0059b5c0(void) { return *(int*)((char*)this + 0); }

struct C_0059b5f0 { int sub_0059b5f0(void); };

// @baa 0x0059b5f0
int C_0059b5f0::sub_0059b5f0(void) { return *(int*)((char*)this + 4); }

// @baa 0x0059b680
int sub_0059b680(int a0) { return a0; }

struct C_0059b690 {
    int sub_0059b690(int);
};

// @baa 0x0059b690
int C_0059b690::sub_0059b690(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x0059b6a0
int sub_0059b6a0(int a0) { return a0; }

struct C_0059b6b0 {
    int sub_0059b6b0(int);
};

// @baa 0x0059b6b0
int C_0059b6b0::sub_0059b6b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x0059b6c0
int sub_0059b6c0(int a0) { return a0; }

struct C_0059b6d0 {
    int sub_0059b6d0(int);
};

// @baa 0x0059b6d0
int C_0059b6d0::sub_0059b6d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0059b6e0 {
    int sub_0059b6e0(int);
};

// @baa 0x0059b6e0
int C_0059b6e0::sub_0059b6e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0059b6f0 { int sub_0059b6f0(void); };

// @baa 0x0059b6f0
int C_0059b6f0::sub_0059b6f0(void) { return *(int*)((char*)this + 20); }

struct C_0059b700 {
    int sub_0059b700(int);
};

// @baa 0x0059b700
int C_0059b700::sub_0059b700(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0059b710 { int sub_0059b710(void); };

// @baa 0x0059b710
int C_0059b710::sub_0059b710(void) { return *(int*)((char*)this + 20); }

struct C_0059b720 { int sub_0059b720(void); };

// @baa 0x0059b720
int C_0059b720::sub_0059b720(void) { return *(int*)((char*)this + 20); }

struct C_0059b730 { C_0059b730* sub_0059b730(void); };

// @baa 0x0059b730
C_0059b730* C_0059b730::sub_0059b730(void) { return this; }

struct C_0059b770 {
    int sub_0059b770(int);
};

// @baa 0x0059b770
int C_0059b770::sub_0059b770(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0059b780 {
    int sub_0059b780(int);
};

// @baa 0x0059b780
int C_0059b780::sub_0059b780(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_0059b7d0 { int sub_0059b7d0(void); };

// @baa 0x0059b7d0
int C_0059b7d0::sub_0059b7d0(void) { return *(int*)((char*)this + 20); }

struct C_0059b7e0 { int sub_0059b7e0(void); };

// @baa 0x0059b7e0
int C_0059b7e0::sub_0059b7e0(void) { return *(int*)((char*)this + 20); }

struct C_0059b7f0 { int sub_0059b7f0(void); };

// @baa 0x0059b7f0
int C_0059b7f0::sub_0059b7f0(void) { return *(int*)((char*)this + 20); }

struct C_0059b800 { int sub_0059b800(void); };

// @baa 0x0059b800
int C_0059b800::sub_0059b800(void) { return *(int*)((char*)this + 20); }

struct C_0059b810 { int sub_0059b810(void); };

// @baa 0x0059b810
int C_0059b810::sub_0059b810(void) { return *(int*)((char*)this + 20); }

struct C_0059b820 { int sub_0059b820(void); };

// @baa 0x0059b820
int C_0059b820::sub_0059b820(void) { return *(int*)((char*)this + 20); }

struct C_0059b830 { int sub_0059b830(void); };

// @baa 0x0059b830
int C_0059b830::sub_0059b830(void) { return *(int*)((char*)this + 20); }

struct C_0059b840 { int sub_0059b840(void); };

// @baa 0x0059b840
int C_0059b840::sub_0059b840(void) { return *(int*)((char*)this + 20); }

struct C_0059b850 { int sub_0059b850(void); };

// @baa 0x0059b850
int C_0059b850::sub_0059b850(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0059b860 { int sub_0059b860(void); };

// @baa 0x0059b860
int C_0059b860::sub_0059b860(void) { return *(int*)((char*)this + 0); }

// @baa 0x0059b870
int sub_0059b870(int a0) { return *(int*)a0; }

struct C_0059b8e0 { int a, b; C_0059b8e0(int, int); };

// @baa 0x0059b8e0
C_0059b8e0::C_0059b8e0(int x, int y) : a(x), b(y) {}

// @baa 0x0059b900
undefined4 sub_0059b900(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_0059b940 { int sub_0059b940(void); };

// @baa 0x0059b940
int C_0059b940::sub_0059b940(void) { return *(int*)((char*)this + 20); }

struct C_0059b950 {
    int sub_0059b950(int);
};

// @baa 0x0059b950
int C_0059b950::sub_0059b950(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0059b9c0 {
    void sub_0059b9c0(undefined4, undefined4, undefined4, undefined4, undefined4);
};

int sub_00630f20(...);
// @baa 0x0059b9c0
void C_0059b9c0::sub_0059b9c0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

struct C_0059b9f0 {
    void sub_0059b9f0(undefined4, undefined4, undefined1);
};

int sub_00630ea0(...);
// @baa 0x0059b9f0
void C_0059b9f0::sub_0059b9f0(undefined4 param_2, undefined4 param_3, undefined1 param_4)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630ea0(param_1,param_2,param_3,param_4);
  return;
}

struct C_0059ba10 {
    void sub_0059ba10(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x0059ba10
void C_0059ba10::sub_0059ba10(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630ea0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

struct C_0059ba40 {
    void sub_0059ba40(undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x0059ba40
void C_0059ba40::sub_0059ba40(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630ea0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

struct C_0059ba70 {
    void sub_0059ba70(undefined4, undefined4, undefined4);
};

// @baa 0x0059ba70
void C_0059ba70::sub_0059ba70(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630ea0(param_1,param_2,param_3,param_4);
  return;
}

int sub_00631c40(...);
int sub_00633750(void);
extern undefined4 g_026acbe0;
// @baa 0x0059ba90
int sub_0059ba90(int param_1)
{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (g_026acbe0 == 0) {
      g_026acbe0 = sub_00631c40(L"Core");
      sub_00633750();
    }
    if (iVar1 == g_026acbe0) {
      return param_1;
    }
  }
  return 0;
}

int sub_00632550(...);
int sub_00634160(void);
extern undefined4 g_026acc00;
// @baa 0x0059bad0
int sub_0059bad0(int param_1)
{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (g_026acc00 == 0) {
      g_026acc00 = sub_00632550(L"Core");
      sub_00634160();
    }
    if (iVar1 == g_026acc00) {
      return param_1;
    }
  }
  return 0;
}

struct C_0059bbb0 {
    void sub_0059bbb0(undefined4, undefined4, undefined4);
};

// @baa 0x0059bbb0
void C_0059bbb0::sub_0059bbb0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4);
  return;
}

int sub_00588dd0(...);
int sub_00589470(void);
int sub_005d88c0(...);
extern undefined4 g_02688448;
// @baa 0x0059bdd0
void sub_0059bdd0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_02688448 == 0) {
    g_02688448 = sub_00588dd0(L"Core");
    sub_00589470();
  }
  sub_005d88c0(g_02688448,param_1,param_2,param_3);
  return;
}

struct C_0059be10 {
    void sub_0059be10(undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x0059be10
void C_0059be10::sub_0059be10(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    undefined4 param_1 = (undefined4)this;
  sub_00630f20(param_1,param_2,param_3,param_4,param_5);
  return;
}

// @baa 0x0059bfa0
void sub_0059bfa0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct C_0059bfc0 { int a, b; C_0059bfc0(const C_0059bfc0 &); };

// @baa 0x0059bfc0
C_0059bfc0::C_0059bfc0(const C_0059bfc0 &o) : a(o.a), b(o.b) {}

struct C_0059c000 { int a, b; C_0059c000(const C_0059c000 &); };

// @baa 0x0059c000
C_0059c000::C_0059c000(const C_0059c000 &o) : a(o.a), b(o.b) {}

struct C_0059c020 { int a, b; C_0059c020(const C_0059c020 &); };

// @baa 0x0059c020
C_0059c020::C_0059c020(const C_0059c020 &o) : a(o.a), b(o.b) {}

struct C_0059c040 { int a, b; C_0059c040(const C_0059c040 &); };

// @baa 0x0059c040
C_0059c040::C_0059c040(const C_0059c040 &o) : a(o.a), b(o.b) {}

// @baa 0x0059d6a0
IMPLEMENT_CLASS_AT(USubsystem, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnCoreNative.cpp", 1858);

// @baa 0x0059d710
void USubsystem::Tick(int a0) {  }

// @baa 0x0059d730
// @baa 0x0059d820
int USubsystem::sub_0059d820(void) { return *(int*)((char*)this + 128); }

// @baa 0x0059d830
int USubsystem::sub_0059d830(void) { return *(int*)((char*)this + 132); }

int sub_0053dfa0(...);
int sub_0059d8c0(void);
// @baa 0x0059d930
undefined4 USubsystem::sub_0059d930(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0059d8c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct S_0059d950 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0059d950(INT Index);
};

// @baa 0x0059d950
DWORD* S_0059d950::sub_0059d950(INT Index)
{
    return &Items(Index);
}

struct C_0059da00 {
    int sub_0059da00(int);
};

// @baa 0x0059da00
int C_0059da00::sub_0059da00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0059da10
void __stdcall sub_0059da10(int a0, int a1) {  }

struct C_0059da20 {
    int sub_0059da20(int);
};

// @baa 0x0059da20
int C_0059da20::sub_0059da20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_0059da30 {
    int sub_0059da30(int);
};

// @baa 0x0059da30
int C_0059da30::sub_0059da30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct E { BYTE Bytes[12]; };

struct S_0059da40 {
    TArray<E> Items; // 0x00
    E* sub_0059da40(INT Index);
};

// @baa 0x0059da40
E* S_0059da40::sub_0059da40(INT Index)
{
    return &Items(Index);
}

struct S_0059da90 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0059da90(INT Index);
};

// @baa 0x0059da90
DWORD* S_0059da90::sub_0059da90(INT Index)
{
    return &Items(Index);
}

struct C_0059dae0 {
    int sub_0059dae0(int);
};

// @baa 0x0059dae0
int C_0059dae0::sub_0059dae0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0059daf0 {
    int sub_0059daf0(int);
};

// @baa 0x0059daf0
int C_0059daf0::sub_0059daf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_0059db00 {
    int sub_0059db00();
};

// @baa 0x0059db00
int C_0059db00::sub_0059db00(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0059db20 {
    int sub_0059db20();
};

// @baa 0x0059db20
int C_0059db20::sub_0059db20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0059db40 {
    int sub_0059db40();
};

// @baa 0x0059db40
int C_0059db40::sub_0059db40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0059db60 {
    int sub_0059db60();
};

// @baa 0x0059db60
int C_0059db60::sub_0059db60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0059db80 {
    int sub_0059db80();
};

// @baa 0x0059db80
int C_0059db80::sub_0059db80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0059dba0 {
    int sub_0059dba0(int);
};

// @baa 0x0059dba0
int C_0059dba0::sub_0059dba0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct E_0059dbb0 { BYTE Bytes[72]; };

struct S_0059dbb0 {
    TArray<E_0059dbb0> Items; // 0x00
    E_0059dbb0* sub_0059dbb0(INT Index);
};

// @baa 0x0059dbb0
E_0059dbb0* S_0059dbb0::sub_0059dbb0(INT Index)
{
    return &Items(Index);
}

struct C_0059dc00 {
    int sub_0059dc00(int);
};

// @baa 0x0059dc00
int C_0059dc00::sub_0059dc00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0059dc10 {
    int sub_0059dc10(int);
};

// @baa 0x0059dc10
int C_0059dc10::sub_0059dc10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0059dc20 {
    int sub_0059dc20(int);
};

// @baa 0x0059dc20
int C_0059dc20::sub_0059dc20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0059dc30 {
    int sub_0059dc30(int);
};

// @baa 0x0059dc30
int C_0059dc30::sub_0059dc30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_0059dc40 {
    int sub_0059dc40();
};

// @baa 0x0059dc40
int C_0059dc40::sub_0059dc40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0059dc60 {
    int sub_0059dc60(int);
};

// @baa 0x0059dc60
int C_0059dc60::sub_0059dc60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}


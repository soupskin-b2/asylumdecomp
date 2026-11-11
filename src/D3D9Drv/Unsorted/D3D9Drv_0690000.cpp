// D3D9Drv_0690000.cpp (part 1 of 2): 52 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern char g_026b038c[];
struct C { void sub_006fa300(int, int); void sub_0069c1f0(int); };

// @baa 0x0069c1f0
void C::sub_0069c1f0(int a) { sub_006fa300((int)g_026b038c, a); }

extern char g_026af90c[];
struct C_0069c210 { void sub_006fa300(int, int); void sub_0069c210(int); };

// @baa 0x0069c210
void C_0069c210::sub_0069c210(int a) { sub_006fa300((int)g_026af90c, a); }

extern char g_026afbac[];
struct C_0069c230 { void sub_006fa300(int, int); void sub_0069c230(int); };

// @baa 0x0069c230
void C_0069c230::sub_0069c230(int a) { sub_006fa300((int)g_026afbac, a); }

extern char g_026afb04[];
struct C_0069c250 { void sub_006fa300(int, int); void sub_0069c250(int); };

// @baa 0x0069c250
void C_0069c250::sub_0069c250(int a) { sub_006fa300((int)g_026afb04, a); }

extern char g_026b0974[];
struct C_0069c270 { void sub_006fa300(int, int); void sub_0069c270(int); };

// @baa 0x0069c270
void C_0069c270::sub_0069c270(int a) { sub_006fa300((int)g_026b0974, a); }

extern char g_026af9b4[];
struct C_0069c290 { void sub_006fa300(int, int); void sub_0069c290(int); };

// @baa 0x0069c290
void C_0069c290::sub_0069c290(int a) { sub_006fa300((int)g_026af9b4, a); }

struct C_0069c2b0 { int sub_0069c2b0(void); };

// @baa 0x0069c2b0
int C_0069c2b0::sub_0069c2b0(void) { return *(int*)((char*)this + 4); }

struct S {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_0069c310(INT Index) const;
};

// @baa 0x0069c310
const QWORD* S::sub_0069c310(INT Index) const
{
    return &Items(Index);
}

struct C_0069c360 { int sub_0069c360(void); };

// @baa 0x0069c360
int C_0069c360::sub_0069c360(void) { return *(int*)((char*)this + 4); }

struct E { BYTE Bytes[12]; };

struct S_0069c370 {
    TArray<E> Items; // 0x00
    const E* sub_0069c370(INT Index) const;
};

// @baa 0x0069c370
const E* S_0069c370::sub_0069c370(INT Index) const
{
    return &Items(Index);
}

struct S_0069c420 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_0069c420(INT Index) const;
};

// @baa 0x0069c420
const QWORD* S_0069c420::sub_0069c420(INT Index) const
{
    return &Items(Index);
}

struct C_0069c470 { int sub_0069c470(void); };

// @baa 0x0069c470
int C_0069c470::sub_0069c470(void) { return *(int*)((char*)this + 4); }

struct E_0069c480 { BYTE Bytes[24]; };

struct S_0069c480 {
    TArray<E_0069c480> Items; // 0x00
    const E_0069c480* sub_0069c480(INT Index) const;
};

// @baa 0x0069c480
const E_0069c480* S_0069c480::sub_0069c480(INT Index) const
{
    return &Items(Index);
}

struct S_0069c530 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_0069c530(INT Index) const;
};

// @baa 0x0069c530
const QWORD* S_0069c530::sub_0069c530(INT Index) const
{
    return &Items(Index);
}

struct C_0069c580 { int sub_0069c580(void); };

// @baa 0x0069c580
int C_0069c580::sub_0069c580(void) { return *(int*)((char*)this + 4); }

struct S_0069c590 {
    TArray<E> Items; // 0x00
    const E* sub_0069c590(INT Index) const;
};

// @baa 0x0069c590
const E* S_0069c590::sub_0069c590(INT Index) const
{
    return &Items(Index);
}

struct C_0069c5e0 {
    void sub_0069c5e0(int);
};

// @baa 0x0069c5e0
void C_0069c5e0::sub_0069c5e0(int param_2)
{
    int * param_1 = (int *)this;

  *param_1 = param_2 >> 5;
  param_1[1] = 1 << ((byte)param_2 & 0x1f);
  return;
}

struct C_0069c600 {
    void sub_0069c600(int);
};

// @baa 0x0069c600
void C_0069c600::sub_0069c600(int param_2)
{
    int * param_1 = (int *)this;

  *param_1 = param_2 >> 5;
  param_1[1] = 1 << ((byte)param_2 & 0x1f);
  return;
}

struct C_0069c620 {
    void sub_0069c620(int);
};

// @baa 0x0069c620
void C_0069c620::sub_0069c620(int param_2)
{
    int * param_1 = (int *)this;

  *param_1 = param_2 >> 5;
  param_1[1] = 1 << ((byte)param_2 & 0x1f);
  return;
}

struct C_0069c640 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_0069c640* sub_0069c640(INT value);
};

// @baa 0x0069c640
C_0069c640* C_0069c640::sub_0069c640(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_0069c660 {
    char pad[4];
    int count;
    C_0069c660* sub_0069c660();
};

// @baa 0x0069c660
C_0069c660* C_0069c660::sub_0069c660()
{
    count++;
    return this;
}

struct C_0069c670 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_0069c670* sub_0069c670(INT value);
};

// @baa 0x0069c670
C_0069c670* C_0069c670::sub_0069c670(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_0069c690 {
    char pad[4];
    int count;
    C_0069c690* sub_0069c690();
};

// @baa 0x0069c690
C_0069c690* C_0069c690::sub_0069c690()
{
    C_0069c690* p = this;
    ++((int*)p)[1];
    return p;
}

struct C_0069c6f0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_0069c6f0* sub_0069c6f0(INT value);
};

// @baa 0x0069c6f0
C_0069c6f0* C_0069c6f0::sub_0069c6f0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_0069c710 {
    C_0069c710* sub_0069c710();
};

// @baa 0x0069c710
C_0069c710* C_0069c710::sub_0069c710()
{
    *(int *)((char *)this + 4) = *(int *)((char *)this + 4) + 1;
    return this;
}

struct C_0069c770 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_0069c770* sub_0069c770(INT value);
};

// @baa 0x0069c770
C_0069c770* C_0069c770::sub_0069c770(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_0069c790 {
    C_0069c790* sub_0069c790();
};

// @baa 0x0069c790
C_0069c790* C_0069c790::sub_0069c790()
{
    int *p = (int *)this;
    ++p[1];
    return this;
}

struct C_0069c860 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_0069c860(INT Index);
};

// @baa 0x0069c860
UBOOL C_0069c860::sub_0069c860(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct S_0069c880 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_0069c880(INT Index) const;
};

// @baa 0x0069c880
const DWORD* S_0069c880::sub_0069c880(INT Index) const
{
    return &Items(Index);
}

typedef uint size_t;

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
int sub_0053df70(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x0069c8d0
void UObject::sub_0069c8d0(int param_2,int param_3)
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

// @baa 0x0069c9f0
int sub_0069c9f0(int param_1)
{
  return param_1 + 0x18;
}

struct C_0069ca00 { int a, b, c; C_0069ca00(); };

// @baa 0x0069ca00
C_0069ca00::C_0069ca00() : a(0), b(0), c(0) {}

struct C_0069ca10 { int a, b, c; C_0069ca10(); };

// @baa 0x0069ca10
C_0069ca10::C_0069ca10() : a(0), b(0), c(0) {}

struct C_0069ca20 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_0069ca20(INT Index);
};

// @baa 0x0069ca20
UBOOL C_0069ca20::sub_0069ca20(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

// @baa 0x0069ca40
int sub_0069ca40(int param_1)
{
  return param_1 + 0x18;
}

struct C_0069ca50 { int a, b, c; C_0069ca50(); };

// @baa 0x0069ca50
C_0069ca50::C_0069ca50() : a(0), b(0), c(0) {}

struct C_0069ca60 { int a, b, c; C_0069ca60(); };

// @baa 0x0069ca60
C_0069ca60::C_0069ca60() : a(0), b(0), c(0) {}

struct C_0069ca70 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_0069ca70(INT Index);
};

// @baa 0x0069ca70
UBOOL C_0069ca70::sub_0069ca70(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

// @baa 0x0069ca90
int sub_0069ca90(int param_1)
{
  return param_1 + 0x18;
}

struct C_0069caa0 { int a, b, c; C_0069caa0(); };

// @baa 0x0069caa0
C_0069caa0::C_0069caa0() : a(0), b(0), c(0) {}

struct C_0069cab0 { int a, b, c; C_0069cab0(); };

// @baa 0x0069cab0
C_0069cab0::C_0069cab0() : a(0), b(0), c(0) {}

struct C_0069cac0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_0069cac0(INT Index);
};

// @baa 0x0069cac0
UBOOL C_0069cac0::sub_0069cac0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_0069cb40 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_0069cb40* sub_0069cb40();
};

extern INT g_01ec13dc;
// @baa 0x0069cb40
C_0069cb40* C_0069cb40::sub_0069cb40()
{
    Value04 = 0;
    Unk00 = &g_01ec13dc;
    return this;
}

struct C_0069cb50 {
    void sub_0069cb50();
};

extern undefined4 g_01ec1274;
// @baa 0x0069cb50
void C_0069cb50::sub_0069cb50(void)
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

struct C_0069cb80 {
    undefined4 * sub_0069cb80(byte);
};

int sub_0053dfa0(...);
// @baa 0x0069cb80
undefined4 * C_0069cb80::sub_0069cb80(byte param_2)
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

struct C_0069cbc0{
int*sub_0069cbc0(int*);
};

extern undefined4*g_026b0d94;
// @baa 0x0069cbc0
int*C_0069cbc0::sub_0069cbc0(int*param_2)
{
int*param_1=(int*)this;

int iVar1;

iVar1=*param_2;
*param_1=iVar1;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1f0))((int)(iVar1));
}
return param_1;
}

struct C_0069cbf0 { int sub_0069cbf0(void); };

// @baa 0x0069cbf0
int C_0069cbf0::sub_0069cbf0(void) { return *(int*)((char*)this + 4); }

struct C_0069ccd0 { int sub_0069ccd0(void); };

// @baa 0x0069ccd0
int C_0069ccd0::sub_0069ccd0(void) { return *(int*)((char*)this + 0); }

struct C_0069cda0 { int sub_0069cda0(void); };

// @baa 0x0069cda0
int C_0069cda0::sub_0069cda0(void) { return *(int*)((char*)this + 20); }

struct C_0069cdb0 { int sub_0069cdb0(void); };

// @baa 0x0069cdb0
int C_0069cdb0::sub_0069cdb0(void) { return *(int*)((char*)this + 20); }

struct C_0069cdc0 { int sub_0069cdc0(void); };

// @baa 0x0069cdc0
int C_0069cdc0::sub_0069cdc0(void) { return *(int*)((char*)this + 20); }

struct C_0069cdd0 { int sub_0069cdd0(void); };

// @baa 0x0069cdd0
int C_0069cdd0::sub_0069cdd0(void) { return *(int*)((char*)this + 4); }

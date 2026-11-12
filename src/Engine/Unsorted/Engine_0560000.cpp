// Engine_0560000.cpp (part 1 of 2): 168 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_00565f10 { int a, b; C_00565f10(int, int); };

// @baa 0x00565f10
C_00565f10::C_00565f10(int x, int y) : a(x), b(y) {}

struct C {
    bool sub_00565f30();
};

// @baa 0x00565f30
bool C::sub_00565f30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return (param_1[1] & *(uint *)*param_1) != 0;
}

extern char g_01e7cf60[];
struct C_00565f40 { void sub_00565f40(void); };

// @baa 0x00565f40
void C_00565f40::sub_00565f40(void) { *(int*)((char*)this + 0) = (int)g_01e7cf60; }

struct C_00565f50 {
    undefined4 * sub_00565f50(byte);
};

int sub_0053dfa0(...);
// @baa 0x00565f50
undefined4 * C_00565f50::sub_00565f50(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e7cf60);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00565f90 { C_00565f90* sub_00565f90(void); };

// @baa 0x00565f90
C_00565f90* C_00565f90::sub_00565f90(void) { *(int*)((char*)this + 0) = 0; return this; }

extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(volatile long*);
struct C_00565fa0 {
    long sub_00565fa0();
};

// @baa 0x00565fa0
long C_00565fa0::sub_00565fa0() {
    return InterlockedIncrement((volatile long*)this);
}

typedef long LONG;

extern "C" __declspec(dllimport) int __stdcall InterlockedDecrement(LONG *);
struct C_00565fb0 {
    void sub_00565fb0();
};

// @baa 0x00565fb0
void C_00565fb0::sub_00565fb0()
{
    InterlockedDecrement((LONG *)this);
}

struct C_00565fc0 { int sub_00565fc0(void); };

// @baa 0x00565fc0
int C_00565fc0::sub_00565fc0(void) { return *(int*)((char*)this + 0); }

struct C_00565fd0 { int a, b; C_00565fd0(int, int); };

// @baa 0x00565fd0
C_00565fd0::C_00565fd0(int x, int y) : a(x), b(y) {}

// @baa 0x00565ff0
int sub_00565ff0(int a0) { return a0; }

struct C_00566000 { C_00566000* sub_00566000(void); };

// @baa 0x00566000
C_00566000* C_00566000::sub_00566000(void) { return this; }

int sub_00627f70(...);
// @baa 0x00566080
void sub_00566080(undefined4 param_1)
{
  sub_00627f70(param_1,0x10,0);
  return;
}

struct C_005660c0 { int a, b; C_005660c0(int, int); };

// @baa 0x005660c0
C_005660c0::C_005660c0(int x, int y) : a(x), b(y) {}

struct C_005660e0 {
    undefined4 sub_005660e0(int *);
};

// @baa 0x005660e0
undefined4 C_005660e0::sub_005660e0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_00566100 {
    undefined8 sub_00566100();
};

// @baa 0x00566100
undefined8 C_00566100::sub_00566100(void)
{
    int param_1 = (int)this;

  return *(undefined8 *)(param_1 + 8);
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

// @baa 0x00566170
void sub_00566170(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_005661a0 { void sub_005661a0(void); };

// @baa 0x005661a0
void C_005661a0::sub_005661a0(void) { *(int*)((char*)this + 60) = 1; }

// @baa 0x005661b0
void sub_005661b0(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x005661d0
int sub_005661d0(int a0, int a1) { return a1; }

// @baa 0x005661e0
void sub_005661e0(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x00566200
IMPLEMENT_CLASS_AT(UField, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnClass.cpp", 86);

int sub_005c7a20(void);
extern undefined * g_01e7cf70;
// @baa 0x00566260
undefined4 * UField::sub_00566260(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01e7cf70);
  return param_1;
}

// @baa 0x00566280
// @baa 0x005662a0
undefined4 sub_005662a0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x005662b0
void sub_005662b0(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_005662d0 { int sub_005662d0(void); };

// @baa 0x005662d0
int C_005662d0::sub_005662d0(void) { return *(int*)((char*)this + 92); }

// @baa 0x005662e0
int sub_005662e0(int a0, int a1) { return a1; }

struct C_005662f0 {
    undefined4 sub_005662f0(int);
};

// @baa 0x005662f0
undefined4 C_005662f0::sub_005662f0(int param_2)
{
    int param_1 = (int)this;

  if (((*(uint *)(param_1 + 0x90) & 0x10) == 0) &&
     (((*(uint *)(param_1 + 0x90) & 0x100) == 0 || (*(int *)(param_2 + 0x3c) == 0)))) {
    return 0;
  }
  return 1;
}

// @baa 0x00566320
int sub_00566320(int a0, int a1) { return a1; }

// @baa 0x00566330
void sub_00566330(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_00566350 {
    undefined4 sub_00566350(uint);
};

// @baa 0x00566350
undefined4 C_00566350::sub_00566350(uint param_2)
{
    int param_1 = (int)this;

  if (((*(uint *)(param_1 + 0x84) & param_2) == 0) && (param_2 != 0xffffffff)) {
    return 0;
  }
  return 1;
}

// @baa 0x00566370
int sub_00566370(int a0, int a1) { return a1; }

// @baa 0x00566380
int sub_00566380(int a0, int a1) { return a1; }

struct C_00566390 { int sub_00566390(void); };

// @baa 0x00566390
int C_00566390::sub_00566390(void) { return *(int*)((char*)this + 28); }

// @baa 0x005663e0
int sub_005663e0(int a0, int a1) { return a1; }

struct C_005663f0 { int sub_005663f0(void); };

// @baa 0x005663f0
int C_005663f0::sub_005663f0(void) { return *(int*)((char*)this + 4); }

struct C_00566400 { void sub_00566400(int a0); };

// @baa 0x00566400
void C_00566400::sub_00566400(int a0) { *(int*)((char*)this + 20) = a0; }

struct C_00566410 { void sub_00566410(int a0); };

// @baa 0x00566410
void C_00566410::sub_00566410(int a0) { *(int*)((char*)this + 24) = a0; }

struct C_00566420 {
    int Unk0;
    int Unk4;
    int sub_00566420();
};

// @baa 0x00566420
int C_00566420::sub_00566420()
{
    return Unk4 == 0 ? -1 : 0;
}

struct C_00566430 { int sub_00566430(void); };

// @baa 0x00566430
int C_00566430::sub_00566430(void) { return *(int*)((char*)this + 4); }

struct C_00566440 { int sub_00566440(void); };

// @baa 0x00566440
int C_00566440::sub_00566440(void) { return *(int*)((char*)this + 4); }

struct C_005664b0 {
    int Unk0;
    int Unk4;
    int sub_005664b0();
};

// @baa 0x005664b0
int C_005664b0::sub_005664b0()
{
    return Unk4 == 0 ? -1 : 0;
}

struct C_005664c0 { int sub_005664c0(void); };

// @baa 0x005664c0
int C_005664c0::sub_005664c0(void) { return *(int*)((char*)this + 4); }

struct C_005664d0 { int sub_005664d0(void); };

// @baa 0x005664d0
int C_005664d0::sub_005664d0(void) { return *(int*)((char*)this + 4); }

// @baa 0x00566540
int sub_00566540(int param_1)
{
  if ((param_1 == 0) || ((*(byte *)(*(int *)(param_1 + 0x28) + 0xdc) & 1) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

// @baa 0x00566560
int sub_00566560(int param_1)
{
  if ((param_1 == 0) || ((*(byte *)(*(int *)(param_1 + 0x28) + 0xdc) & 0x10) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

// @baa 0x00566580
int sub_00566580(int param_1)
{
  if ((param_1 == 0) || ((*(uint *)(*(int *)(param_1 + 0x28) + 0xdc) & 0x8000) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

// @baa 0x005665a0
int sub_005665a0(int param_1)
{
  if ((param_1 == 0) || ((*(uint *)(*(int *)(param_1 + 0x28) + 0xdc) & 0x20000) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

// @baa 0x005665c0
int sub_005665c0(int param_1)
{
  if ((param_1 == 0) || ((*(uint *)(*(int *)(param_1 + 0x28) + 0xdc) & 0x100000) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

// @baa 0x005665e0
int sub_005665e0(int param_1)
{
  if ((param_1 == 0) || ((*(uint *)(*(int *)(param_1 + 0x28) + 0xdc) & 0x2000) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

// @baa 0x00566600
void sub_00566600(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_00566670 {
    int sub_00566670();
};

// @baa 0x00566670
int C_00566670::sub_00566670(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0x38);
}

struct C_00566760 { C_00566760* sub_00566760(void); };

// @baa 0x00566760
C_00566760* C_00566760::sub_00566760(void) { *(int*)((char*)this + 0) = (int)g_01e7cf60; return this; }

extern char g_01e72a60[];
struct C_00566770 { void sub_00566770(void); };

// @baa 0x00566770
void C_00566770::sub_00566770(void) { *(int*)((char*)this + 0) = (int)g_01e72a60; }

struct C_00566780 {
    void sub_00566780();
};

// @baa 0x00566780
void C_00566780::sub_00566780(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

struct C_00566790 { int a, b; C_00566790(int, int); };

// @baa 0x00566790
C_00566790::C_00566790(int x, int y) : a(x), b(y) {}

struct C_005667b0 { int a, b; C_005667b0(int, int); };

// @baa 0x005667b0
C_005667b0::C_005667b0(int x, int y) : a(x), b(y) {}

struct C_005667d0 {
    undefined4 sub_005667d0(uint);
};

// @baa 0x005667d0
undefined4 C_005667d0::sub_005667d0(uint param_2)
{
    int param_1 = (int)this;

  if (((*(uint *)(param_1 + 0x38) & param_2) == 0) && (param_2 != 0xffffffff)) {
    return 0;
  }
  return 1;
}

struct C_005667f0 { int sub_005667f0(void); };

// @baa 0x005667f0
int C_005667f0::sub_005667f0(void) { return *(int*)((char*)this + 1436); }

struct C_00566800 { int sub_00566800(void); };

// @baa 0x00566800
int C_00566800::sub_00566800(void) { return *(int*)((char*)this + 1496); }

struct C_00566810 { char* sub_00566810(void); };

// @baa 0x00566810
char* C_00566810::sub_00566810(void) { return (char*)this + 4; }

struct C_00566820 { C_00566820* sub_00566820(int a0, int a1, int a2); };

// @baa 0x00566820
C_00566820* C_00566820::sub_00566820(int a0, int a1, int a2) { return this; }

// @baa 0x00566830
void __stdcall sub_00566830(int a0) {  }

struct C_00566840 { int a, b, c; C_00566840(); };

// @baa 0x00566840
C_00566840::C_00566840() : a(0), b(0), c(0) {}

struct C_00566850 { int a, b, c; C_00566850(); };

// @baa 0x00566850
C_00566850::C_00566850() : a(0), b(0), c(0) {}

struct C_00566860 {
    int Unk0;
    int Unk4;
    int sub_00566860();
};

// @baa 0x00566860
int C_00566860::sub_00566860()
{
    return Unk4 == 0 ? -1 : 0;
}

struct C_00566870 { int sub_00566870(void); };

// @baa 0x00566870
int C_00566870::sub_00566870(void) { return *(int*)((char*)this + 4); }

struct C_00566880 { int a, b, c; C_00566880(); };

// @baa 0x00566880
C_00566880::C_00566880() : a(0), b(0), c(0) {}

struct C_00566890 { int sub_00566890(void); };

// @baa 0x00566890
int C_00566890::sub_00566890(void) { return *(int*)((char*)this + 0); }

struct C_005668a0 { int sub_005668a0(void); };

// @baa 0x005668a0
int C_005668a0::sub_005668a0(void) { return *(int*)((char*)this + 0); }

struct C_005668b0 {
    int sub_005668b0(int);
};

// @baa 0x005668b0
int C_005668b0::sub_005668b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00567830
undefined4 UTexture2D::sub_00567830(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x34) == 0) && (*(int *)(param_1 + 0x8c) != *(int *)(param_1 + 0x88))) {
    return 0;
  }
  return 1;
}

// @baa 0x00567850
void UTexture2D::sub_00567850(void) { *(int*)((char*)this + 52) = 1; }

// @baa 0x00567870
int UTexture2D::sub_00567870(void) { return *(int*)((char*)this + 136); }

struct C_00567890 { int a, b; C_00567890(int, int); };

// @baa 0x00567890
C_00567890::C_00567890(int x, int y) : a(x), b(y) {}

// @baa 0x005678b0
int sub_005678b0(int param_1, int param_2)
{
  return *(int *)(param_2 + 4) - *(int *)(param_1 + 4);
}

// @baa 0x005678c0
int UTexture2D::sub_005678c0(void) { return *(int*)((char*)this + 8); }

// @baa 0x00567930
uint UTexture2D::sub_00567930(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 4) & 1;
}

typedef uint size_t;

struct C_00568d70{
void sub_00568d70(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
int sub_0053df70(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x00568d70
void C_00568d70::sub_00568d70(int param_2,int param_3)
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

struct C_00568f30 {
    int sub_00568f30();
};

// @baa 0x00568f30
int C_00568f30::sub_00568f30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00568f40 { int a, b; C_00568f40(int, int); };

// @baa 0x00568f40
C_00568f40::C_00568f40(int x, int y) : a(x), b(y) {}

struct C_00568f60 {
    int sub_00568f60();
};

// @baa 0x00568f60
int C_00568f60::sub_00568f60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00568f70 { int a, b; C_00568f70(int, int); };

// @baa 0x00568f70
C_00568f70::C_00568f70(int x, int y) : a(x), b(y) {}

struct C_00568f90 {
    int sub_00568f90();
};

// @baa 0x00568f90
int C_00568f90::sub_00568f90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00568fa0 { int a, b; C_00568fa0(int, int); };

// @baa 0x00568fa0
C_00568fa0::C_00568fa0(int x, int y) : a(x), b(y) {}

struct C_00568fc0 {
    int sub_00568fc0();
};

// @baa 0x00568fc0
int C_00568fc0::sub_00568fc0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00568fd0 {
    int sub_00568fd0();
};

// @baa 0x00568fd0
int C_00568fd0::sub_00568fd0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00568fe0 { int a, b; C_00568fe0(int, int); };

// @baa 0x00568fe0
C_00568fe0::C_00568fe0(int x, int y) : a(x), b(y) {}

struct C_00569000 {
    int sub_00569000();
};

// @baa 0x00569000
int C_00569000::sub_00569000(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00569010 { int a, b; C_00569010(int, int); };

// @baa 0x00569010
C_00569010::C_00569010(int x, int y) : a(x), b(y) {}

struct C_00569030 {
    int sub_00569030();
};

// @baa 0x00569030
int C_00569030::sub_00569030(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00569040 { int a, b; C_00569040(int, int); };

// @baa 0x00569040
C_00569040::C_00569040(int x, int y) : a(x), b(y) {}

struct C_00569060 {
    int sub_00569060();
};

// @baa 0x00569060
int C_00569060::sub_00569060(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00569070 { int a, b; C_00569070(int, int); };

// @baa 0x00569070
C_00569070::C_00569070(int x, int y) : a(x), b(y) {}

struct C_005690b0 { C_005690b0* sub_005690b0(void); };

// @baa 0x005690b0
C_005690b0* C_005690b0::sub_005690b0(void) { return this; }

struct C_005690c0 {
    int sub_005690c0();
};

// @baa 0x005690c0
int C_005690c0::sub_005690c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_005690d0 { int a, b; C_005690d0(int, int); };

// @baa 0x005690d0
C_005690d0::C_005690d0(int x, int y) : a(x), b(y) {}

struct C_005690f0 {
    int sub_005690f0();
};

// @baa 0x005690f0
int C_005690f0::sub_005690f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00569100 { int a, b; C_00569100(int, int); };

// @baa 0x00569100
C_00569100::C_00569100(int x, int y) : a(x), b(y) {}

// @baa 0x00569120
int sub_00569120(int a0) { return *(int*)a0; }

// @baa 0x00569130
undefined4 sub_00569130(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_00569170 {
    void sub_00569170(int *);
};

// @baa 0x00569170
void C_00569170::sub_00569170(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 8);
  return;
}

struct C_00569180 { int sub_00569180(void); };

// @baa 0x00569180
int C_00569180::sub_00569180(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_005691c0 { int sub_005691c0(void); };

// @baa 0x005691c0
int C_005691c0::sub_005691c0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_005691d0 { int sub_005691d0(void); };

// @baa 0x005691d0
int C_005691d0::sub_005691d0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x005691e0
int sub_005691e0(int a0) { return *(int*)a0; }

// @baa 0x005691f0
bool sub_005691f0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00569200 { int a, b; C_00569200(const C_00569200 &); };

// @baa 0x00569200
C_00569200::C_00569200(const C_00569200 &o) : a(o.a), b(o.b) {}

struct C_00569240 { int sub_00569240(void); };

// @baa 0x00569240
int C_00569240::sub_00569240(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct S_00569250 {
    INT Unk0; // 0x00
    INT Unk4; // 0x04
    INT Unk8; // 0x08
    S_00569250 *sub_00569250(const S_00569250 &Other);
};

// @baa 0x00569250
S_00569250 *S_00569250::sub_00569250(const S_00569250 &Other)
{
    Unk0 = Other.Unk0;
    Unk4 = Other.Unk4;
    Unk8 = -1;
    return this;
}

// @baa 0x00569270
int sub_00569270(int a0) { return *(int*)a0; }

// @baa 0x00569280
bool sub_00569280(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00569290 { int a, b; C_00569290(const C_00569290 &); };

// @baa 0x00569290
C_00569290::C_00569290(const C_00569290 &o) : a(o.a), b(o.b) {}

struct C_005692d0 { int sub_005692d0(void); };

// @baa 0x005692d0
int C_005692d0::sub_005692d0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct S_005692e0 {
    INT Unk0; // 0x00
    INT Unk4; // 0x04
    INT Unk8; // 0x08
    S_005692e0 *sub_005692e0(const S_005692e0 &Other);
};

// @baa 0x005692e0
S_005692e0 *S_005692e0::sub_005692e0(const S_005692e0 &Other)
{
    Unk0 = Other.Unk0;
    Unk4 = Other.Unk4;
    Unk8 = -1;
    return this;
}

// @baa 0x00569300
int sub_00569300(int a0) { return *(int*)a0; }

// @baa 0x00569310
bool sub_00569310(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00569340 {
    void sub_00569340(undefined4 *);
};

// @baa 0x00569340
void C_00569340::sub_00569340(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_00569360 { int sub_00569360(void); };

// @baa 0x00569360
int C_00569360::sub_00569360(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x005693a0
int sub_005693a0(int a0) { return *(int*)a0; }

// @baa 0x005693b0
bool sub_005693b0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_005693c0 { int a, b; C_005693c0(const C_005693c0 &); };

// @baa 0x005693c0
C_005693c0::C_005693c0(const C_005693c0 &o) : a(o.a), b(o.b) {}

struct C_00569400 { int sub_00569400(void); };

// @baa 0x00569400
int C_00569400::sub_00569400(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct S_00569410 {
    INT Unk0; // 0x00
    INT Unk4; // 0x04
    INT Unk8; // 0x08
    S_00569410 *sub_00569410(const S_00569410 &Other);
};

// @baa 0x00569410
S_00569410 *S_00569410::sub_00569410(const S_00569410 &Other)
{
    Unk0 = Other.Unk0;
    Unk4 = Other.Unk4;
    Unk8 = -1;
    return this;
}

// @baa 0x00569430
int sub_00569430(int a0) { return *(int*)a0; }

struct C_00569440 {
    void sub_00569440(int *);
};

// @baa 0x00569440
void C_00569440::sub_00569440(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x00569450
int sub_00569450(int a0) { return *(int*)a0; }

// @baa 0x00569460
bool sub_00569460(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00569470 { int a, b; C_00569470(const C_00569470 &); };

// @baa 0x00569470
C_00569470::C_00569470(const C_00569470 &o) : a(o.a), b(o.b) {}

struct C_005694b0 { int sub_005694b0(void); };

// @baa 0x005694b0
int C_005694b0::sub_005694b0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct S_005694c0 {
    INT Unk0; // 0x00
    INT Unk4; // 0x04
    INT Unk8; // 0x08
    S_005694c0 *sub_005694c0(const S_005694c0 &Other);
};

// @baa 0x005694c0
S_005694c0 *S_005694c0::sub_005694c0(const S_005694c0 &Other)
{
    Unk0 = Other.Unk0;
    Unk4 = Other.Unk4;
    Unk8 = -1;
    return this;
}

struct C_005694e0 { int sub_005694e0(void); };

// @baa 0x005694e0
int C_005694e0::sub_005694e0(void) { return *(int*)((char*)this + 0); }

struct C_005694f0 { int sub_005694f0(void); };

// @baa 0x005694f0
int C_005694f0::sub_005694f0(void) { return *(int*)((char*)this + 0); }

struct C_00569ea0 {
    void sub_00569ea0(undefined4, undefined4, undefined4);
};

int sub_00630f20(...);
// @baa 0x00569ea0
void C_00569ea0::sub_00569ea0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4);
  return;
}

// @baa 0x00569ec0
int sub_00569ec0(int param_1)
{
  if ((param_1 == 0) || ((*(uint *)(*(int *)(param_1 + 0x28) + 0xdc) & 0x100000) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

// @baa 0x00569ee0
int sub_00569ee0(int param_1)
{
  if ((param_1 == 0) || ((*(uint *)(*(int *)(param_1 + 0x28) + 0xdc) & 0x20000) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

struct C_00569f20 {
    void sub_00569f20(undefined4, undefined1);
};

// @baa 0x00569f20
void C_00569f20::sub_00569f20(undefined4 param_2, undefined1 param_3)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3);
  return;
}

int sub_00627f00(...);
// @baa 0x0056a010
void sub_0056a010(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0xc);
  return;
}

struct C_0056a050 { int a, b; C_0056a050(const C_0056a050 &); };

// @baa 0x0056a050
C_0056a050::C_0056a050(const C_0056a050 &o) : a(o.a), b(o.b) {}

struct C_0056a070 { int a, b; C_0056a070(const C_0056a070 &); };

// @baa 0x0056a070
C_0056a070::C_0056a070(const C_0056a070 &o) : a(o.a), b(o.b) {}

struct C_0056a0b0 { int a, b; C_0056a0b0(const C_0056a0b0 &); };

// @baa 0x0056a0b0
C_0056a0b0::C_0056a0b0(const C_0056a0b0 &o) : a(o.a), b(o.b) {}

struct S_0056a0d0 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_0056a0d0(INT Index) const;
};

// @baa 0x0056a0d0
const QWORD* S_0056a0d0::sub_0056a0d0(INT Index) const
{
    return &Items(Index);
}

struct C_0056a120 {
    void sub_0056a120(int);
};

// @baa 0x0056a120
void C_0056a120::sub_0056a120(int param_2)
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

struct C_0056a160 { int a, b; C_0056a160(const C_0056a160 &); };

// @baa 0x0056a160
C_0056a160::C_0056a160(const C_0056a160 &o) : a(o.a), b(o.b) {}

struct C_0056a1f0 { int a, b; C_0056a1f0(const C_0056a1f0 &); };

// @baa 0x0056a1f0
C_0056a1f0::C_0056a1f0(const C_0056a1f0 &o) : a(o.a), b(o.b) {}

struct C_0056a210 { int a, b; C_0056a210(const C_0056a210 &); };

// @baa 0x0056a210
C_0056a210::C_0056a210(const C_0056a210 &o) : a(o.a), b(o.b) {}

// @baa 0x0056a230
void sub_0056a230(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}

struct C_0056a5b0 { int sub_0056a5b0(void); };

// @baa 0x0056a5b0
int C_0056a5b0::sub_0056a5b0(void) { return *(int*)((char*)this + 152); }

extern "C" void sub_00566450();
struct CNode {
    // 0x00
    void* Unk00;
    // 0x04
    void* Unk04;
    void sub_0056a5f0();
};

// @baa 0x0056a5f0
void CNode::sub_0056a5f0()
{
    Unk04 = *(void**)((char*)Unk04 + 0x34);
    sub_00566450();
}

int sub_00567290(void);
// @baa 0x0056b700
undefined4 UTexture2D::sub_0056b700(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00567290();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0056b720
undefined4 UTexture2D::sub_0056b720(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00567290();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0056b740
undefined4 UTexture2D::sub_0056b740(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00567290();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00569e20(...);
// @baa 0x0056bf80
void sub_0056bf80(undefined4 param_1)
{
  sub_00569e20(param_1,0);
  return;
}

struct C_0056ed90 {
    int sub_0056ed90();
};

// @baa 0x0056ed90
int C_0056ed90::sub_0056ed90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0056edb0 {
    int sub_0056edb0(int);
};

// @baa 0x0056edb0
int C_0056edb0::sub_0056edb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_0056edc0 {
    int sub_0056edc0(int);
};

// @baa 0x0056edc0
int C_0056edc0::sub_0056edc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0056edd0
void __stdcall sub_0056edd0(int a0, int a1) {  }

struct C_0056ede0 {
    int sub_0056ede0();
};

// @baa 0x0056ede0
int C_0056ede0::sub_0056ede0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0056ee00 {
    int sub_0056ee00();
};

// @baa 0x0056ee00
int C_0056ee00::sub_0056ee00(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0056ee20 {
    int sub_0056ee20(int);
};

// @baa 0x0056ee20
int C_0056ee20::sub_0056ee20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0056ee30 {
    int sub_0056ee30(int);
};

// @baa 0x0056ee30
int C_0056ee30::sub_0056ee30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0056ee70 {
    int sub_0056ee70(int);
};

// @baa 0x0056ee70
int C_0056ee70::sub_0056ee70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0056ee80 {
    int sub_0056ee80(int);
};

// @baa 0x0056ee80
int C_0056ee80::sub_0056ee80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0056eec0 {
    int sub_0056eec0(int);
};

// @baa 0x0056eec0
int C_0056eec0::sub_0056eec0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0056eed0 {
    int sub_0056eed0(int);
};

// @baa 0x0056eed0
int C_0056eed0::sub_0056eed0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct S_0056ef10 { int sub_00544d40(int); };

// @baa 0x0056ef10
int sub_0056ef10(S_0056ef10 *s, int a) { return s->sub_00544d40(a); }

struct Sub005663c0 {
    unsigned int sub_005663c0(unsigned int Mask);
};

// @baa 0x005663c0
unsigned int Sub005663c0::sub_005663c0(unsigned int Mask)
{
    return (*(unsigned int*)((char*)this + 0xdc) & Mask) == Mask;
}

// 0x005677f0: a small non-UObject resource object's accessor. It forwards to the object's
// third virtual (vtable + 0x8; the first two slots belong to its base class) with a zeroed
// out param and an index, then returns the out param.
struct S_005677f0 {
    virtual void vf_000();
    virtual void vf_004();
    virtual BYTE sub_005677d0(BYTE* Result, INT Index);
    BYTE sub_005677f0();
};

// @baa 0x005677f0
BYTE S_005677f0::sub_005677f0()
{
    BYTE Result = 0;
    sub_005677d0(&Result, 1);
    return Result;
}

// GFxUI_06a0000.cpp (part 1 of 2): 84 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { int sub_006af0d0(void); };

// @baa 0x006af0d0
int C::sub_006af0d0(void) { return *(int*)((char*)this + 0); }

struct C_006af0e0 { int a, b, c; C_006af0e0(); };

// @baa 0x006af0e0
C_006af0e0::C_006af0e0() : a(0), b(0), c(0) {}

struct C_006af0f0 { int sub_006af0f0(void); };

// @baa 0x006af0f0
int C_006af0f0::sub_006af0f0(void) { return *(int*)((char*)this + 4); }

struct C_006af100 { int a, b, c; C_006af100(); };

// @baa 0x006af100
C_006af100::C_006af100() : a(0), b(0), c(0) {}

struct C_006af110 { int a, b, c; C_006af110(); };

// @baa 0x006af110
C_006af110::C_006af110() : a(0), b(0), c(0) {}

struct C_006af120 { int sub_006af120(void); };

// @baa 0x006af120
int C_006af120::sub_006af120(void) { return *(int*)((char*)this + 4); }

struct C_006af130 { int a, b, c; C_006af130(); };

// @baa 0x006af130
C_006af130::C_006af130() : a(0), b(0), c(0) {}

struct C_006af140 { int sub_006af140(void); };

// @baa 0x006af140
int C_006af140::sub_006af140(void) { return *(int*)((char*)this + 4); }

struct C_006af150 {
    int sub_006af150(int);
};

// @baa 0x006af150
int C_006af150::sub_006af150(int param_2)
{
    int param_1 = (int)this;

  return param_1 + param_2 * 0xc;
}

struct C_006af160 { int sub_006af160(void); };

// @baa 0x006af160
int C_006af160::sub_006af160(void) { return *(int*)((char*)this + 48); }

struct C_006af170 { C_006af170* sub_006af170(void); };

// @baa 0x006af170
C_006af170* C_006af170::sub_006af170(void) { *(int*)((char*)this + 256) = 0; return this; }

struct C_006af1e0 { int sub_006af1e0(void); };

// @baa 0x006af1e0
int C_006af1e0::sub_006af1e0(void) { return *(int*)((char*)this + 4); }

struct C_006af1f0 { int sub_006af1f0(void); };

// @baa 0x006af1f0
int C_006af1f0::sub_006af1f0(void) { return *(int*)((char*)this + 4); }

struct C_006af200 { int sub_006af200(void); };

// @baa 0x006af200
int C_006af200::sub_006af200(void) { return *(int*)((char*)this + 4); }

struct C_006af210 { int sub_006af210(void); };

// @baa 0x006af210
int C_006af210::sub_006af210(void) { return *(int*)((char*)this + 4); }

struct C_006af220 { int sub_006af220(void); };

// @baa 0x006af220
int C_006af220::sub_006af220(void) { return *(int*)((char*)this + 4); }

struct C_006af230 { int sub_006af230(void); };

// @baa 0x006af230
int C_006af230::sub_006af230(void) { return *(int*)((char*)this + 4); }

struct C_006af240 { int sub_006af240(void); };

// @baa 0x006af240
int C_006af240::sub_006af240(void) { return *(int*)((char*)this + 4); }

struct C_006af250 { int a, b, c; C_006af250(); };

// @baa 0x006af250
C_006af250::C_006af250() : a(0), b(0), c(0) {}

struct C_006af260 { int sub_006af260(void); };

// @baa 0x006af260
int C_006af260::sub_006af260(void) { return *(int*)((char*)this + 4); }

struct C_006af270 {
    void sub_006af270();
};

int sub_0053df70(...);
// @baa 0x006af270
void C_006af270::sub_006af270(void)
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

struct C_006af2a0 { int a, b, c; C_006af2a0(); };

// @baa 0x006af2a0
C_006af2a0::C_006af2a0() : a(0), b(0), c(0) {}

struct C_006af2b0 { int sub_006af2b0(void); };

// @baa 0x006af2b0
int C_006af2b0::sub_006af2b0(void) { return *(int*)((char*)this + 4); }

struct C_006af2c0 { int sub_006af2c0(void); };

// @baa 0x006af2c0
int C_006af2c0::sub_006af2c0(void) { return *(int*)((char*)this + 4); }

struct C_006af2d0 { int a, b, c; C_006af2d0(); };

// @baa 0x006af2d0
C_006af2d0::C_006af2d0() : a(0), b(0), c(0) {}

struct C_006af2e0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_006af2e0(INT Index);
};

// @baa 0x006af2e0
UBOOL C_006af2e0::sub_006af2e0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_006af300 { int sub_006af300(void); };

// @baa 0x006af300
int C_006af300::sub_006af300(void) { return *(int*)((char*)this + 4); }

struct C_006af310 { int a, b, c; C_006af310(); };

// @baa 0x006af310
C_006af310::C_006af310() : a(0), b(0), c(0) {}

struct C_006af320 { int sub_006af320(void); };

// @baa 0x006af320
int C_006af320::sub_006af320(void) { return *(int*)((char*)this + 4); }

struct C_006af330 { int a; C_006af330(int); };

// @baa 0x006af330
C_006af330::C_006af330(int x) : a(x) {}

struct C_006af340 {
    void sub_006af340();
};

// @baa 0x006af340
void C_006af340::sub_006af340(void)
{
    int * param_1 = (int *)this;

  *param_1 = *(int *)(*param_1 + 4);
  return;
}

struct C_006af360 { int sub_006af360(void); };

// @baa 0x006af360
int C_006af360::sub_006af360(void) { return *(int*)((char*)this + 0); }

struct C_006af370 { int a; C_006af370(int); };

// @baa 0x006af370
C_006af370::C_006af370(int x) : a(x) {}

struct C_006af380 {
    void sub_006af380();
};

// @baa 0x006af380
void C_006af380::sub_006af380(void)
{
    int * param_1 = (int *)this;

  *param_1 = *(int *)(*param_1 + 4);
  return;
}

struct C_006af3a0 { int sub_006af3a0(void); };

// @baa 0x006af3a0
int C_006af3a0::sub_006af3a0(void) { return *(int*)((char*)this + 0); }

struct C_006af3b0 { int sub_006af3b0(void); };

// @baa 0x006af3b0
int C_006af3b0::sub_006af3b0(void) { return *(int*)((char*)this + 4); }

struct C_006af3c0 { int sub_006af3c0(void); };

// @baa 0x006af3c0
int C_006af3c0::sub_006af3c0(void) { return *(int*)((char*)this + 0); }

struct C_006af3d0 { int sub_006af3d0(void); };

// @baa 0x006af3d0
int C_006af3d0::sub_006af3d0(void) { return *(int*)((char*)this + 4); }

struct C_006af3e0 {
    undefined4 sub_006af3e0(byte);
};

int sub_0053dfa0(...);
int sub_006cd050(void);
// @baa 0x006af3e0
undefined4 C_006af3e0::sub_006af3e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006cd050();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006af400 { int sub_006af400(void); };

// @baa 0x006af400
int C_006af400::sub_006af400(void) { return *(int*)((char*)this + 0); }

struct C_006af440 { int sub_006af440(void); };

// @baa 0x006af440
int C_006af440::sub_006af440(void) { return *(int*)((char*)this + 0); }

struct C_006af450 { int sub_006af450(void); };

// @baa 0x006af450
int C_006af450::sub_006af450(void) { return *(int*)((char*)this + 0); }

struct C_006af4d0 { int sub_006af4d0(void); };

// @baa 0x006af4d0
int C_006af4d0::sub_006af4d0(void) { return *(int*)((char*)this + 0); }

struct C_006af4e0 { int sub_006af4e0(void); };

// @baa 0x006af4e0
int C_006af4e0::sub_006af4e0(void) { return *(int*)((char*)this + 0); }

struct C_006af4f0 { int sub_006af4f0(void); };

// @baa 0x006af4f0
int C_006af4f0::sub_006af4f0(void) { return *(int*)((char*)this + 0); }

struct C_006af500 {
    int sub_006af500(int);
};

// @baa 0x006af500
int C_006af500::sub_006af500(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_006af510 { int sub_006af510(void); };

// @baa 0x006af510
int C_006af510::sub_006af510(void) { return *(int*)((char*)this + 0); }

struct C_006af520 { int sub_006af520(void); };

// @baa 0x006af520
int C_006af520::sub_006af520(void) { return *(int*)((char*)this + 0); }

struct C_006af530 { int sub_006af530(void); };

// @baa 0x006af530
int C_006af530::sub_006af530(void) { return *(int*)((char*)this + 0); }

struct C_006af5e0 {
    int sub_006af5e0(int);
};

// @baa 0x006af5e0
int C_006af5e0::sub_006af5e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_006af5f0 { int sub_006af5f0(void); };

// @baa 0x006af5f0
int C_006af5f0::sub_006af5f0(void) { return *(int*)((char*)this + 0); }

struct C_006af600 { int sub_006af600(void); };

// @baa 0x006af600
int C_006af600::sub_006af600(void) { return *(int*)((char*)this + 0); }

struct C_006af610 { int sub_006af610(void); };

// @baa 0x006af610
int C_006af610::sub_006af610(void) { return *(int*)((char*)this + 0); }

struct C_006af6b0 {
    int sub_006af6b0(int);
};

// @baa 0x006af6b0
int C_006af6b0::sub_006af6b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct Object;
struct ObjectRef {
    Object* ObjectPtr; // 0x00
    void sub_006af6e0();
};

struct Object {
    void sub_007361a0();
};

// @baa 0x006af6e0
void ObjectRef::sub_006af6e0()
{
    if (ObjectPtr != 0)
        ObjectPtr->sub_007361a0();
}

struct C_006af6f0 { int sub_006af6f0(void); };

// @baa 0x006af6f0
int C_006af6f0::sub_006af6f0(void) { return *(int*)((char*)this + 0); }

struct C_006af700 { int sub_006af700(void); };

// @baa 0x006af700
int C_006af700::sub_006af700(void) { return *(int*)((char*)this + 0); }

struct C_006af740 { int sub_006af740(void); };

// @baa 0x006af740
int C_006af740::sub_006af740(void) { return *(int*)((char*)this + 0); }

struct C_006af750 { int sub_006af750(void); };

// @baa 0x006af750
int C_006af750::sub_006af750(void) { return *(int*)((char*)this + 0); }

struct C_006af760 { int sub_006af760(void); };

// @baa 0x006af760
int C_006af760::sub_006af760(void) { return *(int*)((char*)this + 0); }

struct C_006af770 { C_006af770* sub_006af770(int a0); };

// @baa 0x006af770
C_006af770* C_006af770::sub_006af770(int a0) { return this; }

struct C_006af7f0 { C_006af7f0* sub_006af7f0(int a0); };

// @baa 0x006af7f0
C_006af7f0* C_006af7f0::sub_006af7f0(int a0) { return this; }

struct C_006af800 { C_006af800* sub_006af800(int a0); };

// @baa 0x006af800
C_006af800* C_006af800::sub_006af800(int a0) { return this; }

struct C_006af810 { C_006af810* sub_006af810(int a0); };

// @baa 0x006af810
C_006af810* C_006af810::sub_006af810(int a0) { return this; }

typedef uint size_t;

struct C_006af900{
void sub_006af900(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x006af900
void C_006af900::sub_006af900(int param_2,int param_3)
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

struct C_006afa20 { int sub_006afa20(void); };

// @baa 0x006afa20
int C_006afa20::sub_006afa20(void) { return *(int*)((char*)this + 0); }

struct C_006afa30 { int sub_006afa30(void); };

// @baa 0x006afa30
int C_006afa30::sub_006afa30(void) { return *(int*)((char*)this + 0); }

struct C_006afa40 { int sub_006afa40(void); };

// @baa 0x006afa40
int C_006afa40::sub_006afa40(void) { return *(int*)((char*)this + 20); }

struct C_006afa50 { int sub_006afa50(void); };

// @baa 0x006afa50
int C_006afa50::sub_006afa50(void) { return *(int*)((char*)this + 0); }

struct C_006afa60 { int sub_006afa60(void); };

// @baa 0x006afa60
int C_006afa60::sub_006afa60(void) { return *(int*)((char*)this + 0); }

struct C_006afa70 { int sub_006afa70(void); };

// @baa 0x006afa70
int C_006afa70::sub_006afa70(void) { return *(int*)((char*)this + 0); }

struct C_006afb00 {
    int sub_006afb00(int);
};

// @baa 0x006afb00
int C_006afb00::sub_006afb00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x3c;
}

struct C_006afb20 { int sub_006afb20(void); };

// @baa 0x006afb20
int C_006afb20::sub_006afb20(void) { return *(int*)((char*)this + 0); }

struct C_006afb30 { int sub_006afb30(void); };

// @baa 0x006afb30
int C_006afb30::sub_006afb30(void) { return *(int*)((char*)this + 0); }

struct C_006afb40 { int sub_006afb40(void); };

// @baa 0x006afb40
int C_006afb40::sub_006afb40(void) { return *(int*)((char*)this + 20); }

struct C_006afb50 {
    bool sub_006afb50();
};

// @baa 0x006afb50
bool C_006afb50::sub_006afb50(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

struct CCtr {
    int a;
    int b;
    CCtr* sub_006afb60() { b++; return this; }
};

// @baa 0x006afb60
void g_use(CCtr* p, int x) { if (x) p->sub_006afb60(); }

struct C_006afb70 { int sub_006afb70(void); };

// @baa 0x006afb70
int C_006afb70::sub_006afb70(void) { return *(int*)((char*)this + 0); }

struct C_006afb80 {
    int sub_006afb80();
};

// @baa 0x006afb80
int C_006afb80::sub_006afb80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_006afb90 { int a, b; C_006afb90(int, int); };

// @baa 0x006afb90
C_006afb90::C_006afb90(int x, int y) : a(x), b(y) {}

struct C_006afbb0 {
    int sub_006afbb0();
};

// @baa 0x006afbb0
int C_006afbb0::sub_006afbb0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_006afbc0 {
    void sub_006afbc0();
};

// @baa 0x006afbc0
void C_006afbc0::sub_006afbc0(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_0053dfa0(*param_1);
    *param_1 = 0;
  }
  return;
}

// GFxUI: 0 when the handle is set, -1 when it is empty.
struct FGFxHandle
{
    void* Handle;

    int sub_006af350() const;
};

// @baa 0x006af350
int FGFxHandle::sub_006af350() const
{
    return Handle ? 0 : -1;
}

// GFxUI: 0 when the handle is set, -1 when it is empty.
struct FGFxHandle_006af390
{
    void* Handle;

    int sub_006af390() const;
};

// @baa 0x006af390
int FGFxHandle_006af390::sub_006af390() const
{
    return Handle ? 0 : -1;
}

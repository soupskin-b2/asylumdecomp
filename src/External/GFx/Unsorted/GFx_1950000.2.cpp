// GFx_1950000.cpp (part 2 of 3): 66 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C { void sub_0194f130(int); void sub_01951a30(); };

// @baa 0x01951a30
void C::sub_01951a30() { sub_0194f130(0); }

struct C_01951a90 { void sub_0194f2c0(int); void sub_01951a90(); };

// @baa 0x01951a90
void C_01951a90::sub_01951a90() { sub_0194f2c0(0); }

struct C_01951c40 {
    undefined4 sub_01951c40(int *);
    int sub_01950080(int, int);
};

// @baa 0x01951c40
undefined4 C_01951c40::sub_01951c40(int * param_2)
{
    int * param_1 = (int *)this;
  undefined4 uVar1;
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = ((C_01951c40 *)(this))->sub_01950080((int)(param_2), *(uint *)(*param_2 + 0x10) & *(uint *)(*param_1 + 4));
  return uVar1;
}

struct C_01951c70 {
    undefined4 sub_01951c70(int *);
    int sub_019500f0(int, int);
};

// @baa 0x01951c70
undefined4 C_01951c70::sub_01951c70(int * param_2)
{
    int * param_1 = (int *)this;
  undefined4 uVar1;
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = ((C_01951c70 *)(this))->sub_019500f0((int)(param_2), *(uint *)(*param_2 + 0x10) & *(uint *)(*param_1 + 4));
  return uVar1;
}

struct C_01951ec0 {
    void sub_01951ec0();
    int sub_0194f2c0(int);
};

// @baa 0x01951ec0
void C_01951ec0::sub_01951ec0(void)
{
    int param_1 = (int)this;
  if (*(char *)(param_1 + 0xab5) != '\0') {
    ((C_01951ec0 *)(((char *)this + 0xab8)))->sub_0194f2c0(0);
    *(undefined1 *)(param_1 + 0xab5) = 0;
  }
  return;
}

struct C_01953770 { void sub_0194f390(int); void sub_01953770(); };

// @baa 0x01953770
void C_01953770::sub_01953770() { sub_0194f390(0); }

struct S018d4a70 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0194f130(int NewNum);
    void sub_01953980();
};

void __stdcall sub_018d7170(int A);
// @baa 0x01953980
void S018d4a70::sub_01953980()
{
    S018d4a70* Self = this;
    sub_0194f130(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S018d4a70_01953aa0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0194f390(int NewNum);
    void sub_01953aa0();
};

// @baa 0x01953aa0
void S018d4a70_01953aa0::sub_01953aa0()
{
    S018d4a70_01953aa0* Self = this;
    sub_0194f390(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_01953ac0 { void sub_0194f460(int); void sub_01953ac0(); };

// @baa 0x01953ac0
void C_01953ac0::sub_01953ac0() { sub_0194f460(0); }

struct S018d4a70_01953b30 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0194f2c0(int NewNum);
    void sub_01953b30();
};

// @baa 0x01953b30
void S018d4a70_01953b30::sub_01953b30()
{
    S018d4a70_01953b30* Self = this;
    sub_0194f2c0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_01953b70 { void sub_0194f620(int); void sub_01953b70(); };

// @baa 0x01953b70
void C_01953b70::sub_01953b70() { sub_0194f620(0); }

struct C_01953b80 { void sub_0194f6f0(int); void sub_01953b80(); };

// @baa 0x01953b80
void C_01953b80::sub_01953b80() { sub_0194f6f0(0); }

struct C_01954810 { int a, b, c; C_01954810(); };

// @baa 0x01954810
C_01954810::C_01954810() : a(0), b(0), c(0) {}

struct C_01954850 { int a, b, c; C_01954850(); };

// @baa 0x01954850
C_01954850::C_01954850() : a(0), b(0), c(0) {}

struct S018d4a70_01954860 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0194f390(int NewNum);
    void sub_01954860();
};

// @baa 0x01954860
void S018d4a70_01954860::sub_01954860()
{
    S018d4a70_01954860* Self = this;
    sub_0194f390(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_01954940 { int a, b, c; C_01954940(); };

// @baa 0x01954940
C_01954940::C_01954940() : a(0), b(0), c(0) {}

struct C_01954960 { int a, b, c; C_01954960(); };

// @baa 0x01954960
C_01954960::C_01954960() : a(0), b(0), c(0) {}

struct S018d4a70_01954970 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0194f2c0(int NewNum);
    void sub_01954970();
};

// @baa 0x01954970
void S018d4a70_01954970::sub_01954970()
{
    S018d4a70_01954970* Self = this;
    sub_0194f2c0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S018d4a70_019549f0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0194f460(int NewNum);
    void sub_019549f0();
};

// @baa 0x019549f0
void S018d4a70_019549f0::sub_019549f0()
{
    S018d4a70_019549f0* Self = this;
    sub_0194f460(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S018d4a70_01954a10 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0194f620(int NewNum);
    void sub_01954a10();
};

// @baa 0x01954a10
void S018d4a70_01954a10::sub_01954a10()
{
    S018d4a70_01954a10* Self = this;
    sub_0194f620(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S018d4a70_01954a30 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0194f6f0(int NewNum);
    void sub_01954a30();
};

// @baa 0x01954a30
void S018d4a70_01954a30::sub_01954a30()
{
    S018d4a70_01954a30* Self = this;
    sub_0194f6f0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct M_01954df0 { void sub_019547d0(); };

struct C_01954df0 { char pad[8]; M_01954df0 m; void sub_01954df0(); };

// @baa 0x01954df0
void C_01954df0::sub_01954df0() { m.sub_019547d0(); }

struct C_01955390 {
    virtual void v0(void*);
    virtual void v1(void*);
    void sub_01955390(void* a);
};

// @baa 0x01955390
void C_01955390::sub_01955390(void* a)
{
    v1(a);
}

struct C_019553a0 {
    void sub_019553a0(undefined4);
    int sub_019482e0(int, int, int);
};

// @baa 0x019553a0
void C_019553a0::sub_019553a0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_019553a0 *)(this))->sub_019482e0(param_1 + 0xc, param_2, 0xffffffff);
  return;
}

struct C_01955540 { int a, b, c; C_01955540(); };

// @baa 0x01955540
C_01955540::C_01955540() : a(0), b(0), c(0) {}

struct S018d4a70_01955550 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0194f460(int NewNum);
    void sub_01955550();
};

// @baa 0x01955550
void S018d4a70_01955550::sub_01955550()
{
    S018d4a70_01955550* Self = this;
    sub_0194f460(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_01955570 { int a, b, c; C_01955570(); };

// @baa 0x01955570
C_01955570::C_01955570() : a(0), b(0), c(0) {}

struct S018d4a70_01955580 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0194f620(int NewNum);
    void sub_01955580();
};

// @baa 0x01955580
void S018d4a70_01955580::sub_01955580()
{
    S018d4a70_01955580* Self = this;
    sub_0194f620(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_019555a0 { int a, b, c; C_019555a0(); };

// @baa 0x019555a0
C_019555a0::C_019555a0() : a(0), b(0), c(0) {}

struct S018d4a70_019555b0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0194f6f0(int NewNum);
    void sub_019555b0();
};

// @baa 0x019555b0
void S018d4a70_019555b0::sub_019555b0()
{
    S018d4a70_019555b0* Self = this;
    sub_0194f6f0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct M_01955910 { void sub_019554c0(); };

struct C_01955910 { char pad[8]; M_01955910 m; void sub_01955910(); };

// @baa 0x01955910
void C_01955910::sub_01955910() { m.sub_019554c0(); }

struct C_01955bc0 {
    void sub_01955bc0();
    int sub_01955b30(int);
};

// @baa 0x01955bc0
void C_01955bc0::sub_01955bc0(void)
{
    int param_1 = (int)this;
  if (*(int *)(param_1 + 8) != 0) {
    ((C_01955bc0 *)((*(char **)((char *)this + 4))))->sub_01955b30(*(int *)(param_1 + 8));
  }
  return;
}

struct A_0195a5f0 { virtual void sub_0195af50(); char pad[12]; };

struct B_0195a5f0 { virtual void sub_0195af50(); };

struct C_0195a5f0 : A_0195a5f0, B_0195a5f0 { virtual void sub_0195af50(); C_0195a5f0(); };

C_0195a5f0::C_0195a5f0() {}

// @baa 0x0195a5f0
void C_0195a5f0::sub_0195af50() {}

struct C_0195b050 {
    char pad4[4];
    BYTE f;
    unsigned int sub_0195b050();
};

// @baa 0x0195b050
unsigned int C_0195b050::sub_0195b050(void)
{
    return f;
}

struct C_0195b1b0 {
    void sub_0195b1b0(float f);
};

// @baa 0x0195b1b0
void C_0195b1b0::sub_0195b1b0(float f)
{
    *(float *)((char *)this + 0x18) = f;
}

struct C_0195b320 {
    int sub_0195b320();
};

// @baa 0x0195b320
int C_0195b320::sub_0195b320(void)
{
    return *(unsigned char *)(this + 0x7c);
}

struct M_0195b5a0 { void sub_019e6200(); };

struct C_0195b5a0 { char pad[164]; M_0195b5a0 m; void sub_0195b5a0(); };

// @baa 0x0195b5a0
void C_0195b5a0::sub_0195b5a0() { m.sub_019e6200(); }

struct GFxSpriteDef {
    BYTE sub_0195b660(INT a1, INT a2, INT a3);
};

// @baa 0x0195b660
BYTE GFxSpriteDef::sub_0195b660(INT a1, INT a2, INT a3)
{
    return 0;
}

struct SBase
{
    void sub_0194a9f0();
};

struct S9c
{
    char pad[0x9c];
    SBase *p9c;
    void sub_0195b750();
};

// @baa 0x0195b750
void S9c::sub_0195b750()
{
    p9c->sub_0194a9f0();
}

struct C_0195bd40 {
    void sub_0195bd40(int);
    int sub_0195bd10();
    int sub_0195dc40(int);
};

// @baa 0x0195bd40
void C_0195bd40::sub_0195bd40(int param_2)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_0195bd40 *)(this))->sub_0195bd10();
  if (iVar1 != 0) {
    ((C_0195bd40 *)(this))->sub_0195dc40(0);
  }
  *(int *)(param_1 + 0x1b8) = param_2;
  if (param_2 != 0) {
    *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) | 0x8000;
    return;
  }
  *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) & 0x7fff;
  return;
}

struct C_0195c550 {
    int sub_0195c550(int);
};

// @baa 0x0195c550
int C_0195c550::sub_0195c550(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 4;
}

struct C_0195c580 { int a; C_0195c580(int); };

// @baa 0x0195c580
C_0195c580::C_0195c580(int x) : a(x) {}

struct Object;
struct ObjectRef {
    Object* ObjectPtr; // 0x00
    void sub_0195c670();
};

struct Object {
    void sub_018dd090();
};

// @baa 0x0195c670
void ObjectRef::sub_0195c670()
{
    if (ObjectPtr != 0)
        ObjectPtr->sub_018dd090();
}

struct C_0195c8b0 { int a; C_0195c8b0(int); };

// @baa 0x0195c8b0
C_0195c8b0::C_0195c8b0(int x) : a(x) {}

struct C_0195c8f0 { int a; C_0195c8f0(int); };

// @baa 0x0195c8f0
C_0195c8f0::C_0195c8f0(int x) : a(x) {}

struct C_0195c980 {
    int sub_0195c980(int);
};

// @baa 0x0195c980
int C_0195c980::sub_0195c980(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0x18;
}

struct C_0195c990 { int a, b, c; C_0195c990(); };

// @baa 0x0195c990
C_0195c990::C_0195c990() : a(0), b(0), c(0) {}

struct C_0195c9f0 { int a, b, c; C_0195c9f0(); };

// @baa 0x0195c9f0
C_0195c9f0::C_0195c9f0() : a(0), b(0), c(0) {}

struct C_0195ca00 { int a, b, c; C_0195ca00(); };

// @baa 0x0195ca00
C_0195ca00::C_0195ca00() : a(0), b(0), c(0) {}

struct C_0195ca10 { int a, b, c; C_0195ca10(); };

// @baa 0x0195ca10
C_0195ca10::C_0195ca10() : a(0), b(0), c(0) {}

struct C_0195ca20 { int a, b, c; C_0195ca20(); };

// @baa 0x0195ca20
C_0195ca20::C_0195ca20() : a(0), b(0), c(0) {}

struct C_0195cb50 { int a, b, c; C_0195cb50(); };

// @baa 0x0195cb50
C_0195cb50::C_0195cb50() : a(0), b(0), c(0) {}

struct C_0195cb60 { int a, b, c; C_0195cb60(); };

// @baa 0x0195cb60
C_0195cb60::C_0195cb60() : a(0), b(0), c(0) {}

struct C_0195cc00 { int a, b; C_0195cc00(int, int); };

// @baa 0x0195cc00
C_0195cc00::C_0195cc00(int x, int y) : a(x), b(y) {}

struct C_0195cdf0 {
    int sub_0195cdf0(int);
};

// @baa 0x0195cdf0
int C_0195cdf0::sub_0195cdf0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + 8 + *param_1;
}

struct C_0195ce00 {
    bool sub_0195ce00();
};

// @baa 0x0195ce00
bool C_0195ce00::sub_0195ce00(void)
{
    int * param_1 = (int *)this;
  return *param_1 == -2;
}

struct Inner {
    bool sub_018f7490(uint arg1);
};

struct C_0195d0a0 {
    char _pad[0x1c];
    Inner* p;
    bool sub_0195d0a0(uint arg1);
};

// @baa 0x0195d0a0
bool C_0195d0a0::sub_0195d0a0(uint arg1)
{
    return p->sub_018f7490(arg1);
}

struct V_0195d160 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void g();
};

struct O_0195d160 { char pad[152]; V_0195d160* p; void sub_0195d160(); };

// @baa 0x0195d160
void O_0195d160::sub_0195d160() { p->g(); }

struct C_0195d870 {
    undefined4 sub_0195d870(undefined4);
    int sub_019e61a0(int);
};

// @baa 0x0195d870
undefined4 C_0195d870::sub_0195d870(undefined4 param_2)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_0195d870 *)(((char *)this + 0xa4)))->sub_019e61a0(param_2);
  if (iVar1 == -1) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0xa4) + 4 + iVar1 * 8);
}

struct C_0195e210{
void sub_0195e210(undefined4);
};

// @baa 0x0195e210
void C_0195e210::sub_0195e210(undefined4 param_2)
{
int param_1=(int)this;

int iVar1;
int iVar2;

iVar1=*(int*)(param_1+0xa8);
iVar2=0;
*(char*)(param_1+0x8e)=(char)param_2;
if(iVar1>0){
do{
(*(int(__stdcall**)(int))(**(int**)(*(int*)(param_1+0xa4)+4+iVar2*8)+0x9c))((int)(param_2));
iVar2=iVar2+1;
}while(iVar2<iVar1);
}
return;
}

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_0195e590();
};

// @baa 0x0195e590
S *S::sub_0195e590()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_0195e660 {
    int sub_0195e660();
};

// @baa 0x0195e660
int C_0195e660::sub_0195e660(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *(int *)*param_1 + 0xc + param_1[1] * 0x18;
}

struct C_0195e770 { int a, b; C_0195e770(int, int); };

// @baa 0x0195e770
C_0195e770::C_0195e770(int x, int y) : a(x), b(y) {}

struct C_0195edc0 {
    undefined4 sub_0195edc0(undefined4);
    int sub_01915410(int);
};

// @baa 0x0195edc0
undefined4 C_0195edc0::sub_0195edc0(undefined4 param_2)
{
    int param_1 = (int)this;
  char cVar1;
  cVar1 = ((C_0195edc0 *)(this))->sub_01915410(param_2);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0xab4) != '\0')) {
    return 1;
  }
  return 0;
}

// GFxSprite's vtable: slot 19 (offset 0x4c) is this method. GFxSprite is not in the shared
// headers, so the 19 preceding virtuals are declared here in its own order.
struct GFxSprite_0195d300_T {
    virtual int sub_0195d300_v00();
    virtual int sub_0195d300_v04();
    virtual int sub_0195d300_v08();
    virtual int sub_0195d300_v0c();
    virtual int sub_0195d300_v10();
    virtual int sub_0195d300_v14();
    virtual int sub_0195d300_v18();
    virtual int sub_0195d300_v1c();
    virtual int sub_0195d300_v20();
    virtual int sub_0195d300_v24();
    virtual int sub_0195d300_v28();
    virtual int sub_0195d300_v2c();
    virtual int sub_0195d300_v30();
    virtual int sub_0195d300_v34();
    virtual int sub_0195d300_v38();
    virtual int sub_0195d300_v3c();
    virtual int sub_0195d300_v40();
    virtual int sub_0195d300_v44();
    virtual int sub_0195d300_v48();
    virtual int sub_0195d300_v4c();
};

struct GFxSprite_0195d300_Value {
    char Reserved[0x1c];
    int Value;
};

struct GFxSprite_0195d300 {
    char Reserved1[0x24];
    GFxSprite_0195d300_T *Sprite;
    char Reserved2[0x1ac - 0x28];
    GFxSprite_0195d300_Value *ValueSlot;
    int sub_0195d300();
};

// @baa 0x0195d300
int GFxSprite_0195d300::sub_0195d300()
{
    if (ValueSlot != 0)
        return ValueSlot->Value;
    return Sprite->sub_0195d300_v4c();
}

// Local visitor used by GFx_InitObjectMembers (External/GFx).
// sub_0195d7a0 is its constructor; its vtable holds one (empty) visitor op.
struct sub_0195d7a0_InitVisitor
{
    virtual void sub_0195d7c0() = 0;
    INT A;
    INT B;

    sub_0195d7a0_InitVisitor(INT A, INT B);
};

// @baa 0x0195d7a0
sub_0195d7a0_InitVisitor::sub_0195d7a0_InitVisitor(INT A, INT B)
    : A(A)
    , B(B)
{
}

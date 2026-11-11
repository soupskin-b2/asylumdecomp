// GFx_18d0000.cpp (part 2 of 3): 111 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_018d3f20();
};

// @baa 0x018d3f20
S *S::sub_018d3f20()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_018d3f30 { int a, b; C_018d3f30(int, int); };

// @baa 0x018d3f30
C_018d3f30::C_018d3f30(int x, int y) : a(x), b(y) {}

struct C_018d3f50 { int a, b; C_018d3f50(const C_018d3f50 &); };

// @baa 0x018d3f50
C_018d3f50::C_018d3f50(const C_018d3f50 &o) : a(o.a), b(o.b) {}

struct C_018d3f70 { int a, b; C_018d3f70(const C_018d3f70 &); };

// @baa 0x018d3f70
C_018d3f70::C_018d3f70(const C_018d3f70 &o) : a(o.a), b(o.b) {}

struct I {
    void sub_018d6af0();
};

struct C {
    void sub_018d3fd0();
};

// @baa 0x018d3fd0
void C::sub_018d3fd0(void)
{
    ((I *)((I **)this)[0])->sub_018d6af0();
}

struct C_018d4000 { int a, b; C_018d4000(int, int); };

// @baa 0x018d4000
C_018d4000::C_018d4000(int x, int y) : a(x), b(y) {}

#pragma pack(push, 1)
struct GEvent { char _pad0[0x18]; byte bSignaled; };

#pragma pack(pop)
struct GEventExt : GEvent {
    byte sub_018d42c0();
};

// @baa 0x018d42c0
byte GEventExt::sub_018d42c0()
{
    return bSignaled;
}

struct A {
    virtual void a0();
    virtual void a1();
};

struct D : A {
    void sub_018d42f0();
};

// @baa 0x018d42f0
void D::sub_018d42f0()
{
    A* a = (A*)((char*)this - 0x14);
    a->a1();
}

struct C_018d4360 {
    int sub_018d4360();
};

// @baa 0x018d4360
int C_018d4360::sub_018d4360(void)
{
    int edx = *(volatile int*)(this + 0x1c);
    int eax = *(volatile int*)(this + 0x18) - edx;
    return eax;
}

struct S_018d45a0 {
    char _pad[4];
    DWORD b;
    BYTE sub_018d45a0();
};

// @baa 0x018d45a0
BYTE S_018d45a0::sub_018d45a0()
{
    return b != 0;
}

struct C_018d45e0 {
    undefined4 * sub_018d45e0();
};

int sub_018d3d50(void);
extern undefined * g_023f4c2c;
// @baa 0x018d45e0
undefined4 * C_018d45e0::sub_018d45e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f4c2c);
  return param_1;
}

struct C_018d4600 {
    undefined4 * sub_018d4600(undefined4, undefined4);
    int sub_018d3d90(int, int);
};

// @baa 0x018d4600
undefined4 * C_018d4600::sub_018d4600(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_018d4600 *)(this))->sub_018d3d90(param_2, param_3);
  *param_1 = (undefined4)(&g_023f4c2c);
  return param_1;
}

struct C_018d4620 {
    void sub_018d4620(int);
};

// @baa 0x018d4620
void C_018d4620::sub_018d4620(int param_2)
{
    int param_1 = (int)this;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0x3fffffff | param_2 << 0x1e;
  return;
}

struct C_018d46b0 { int a, b, c; C_018d46b0(); };

// @baa 0x018d46b0
C_018d46b0::C_018d46b0() : a(0), b(0), c(0) {}

typedef long LONG;

extern "C" __declspec(dllimport) int __stdcall InterlockedExchangeAdd(LONG *, LONG);
struct C_018d4960 {
    void sub_018d4960();
};

// @baa 0x018d4960
void C_018d4960::sub_018d4960(void)
{
    InterlockedExchangeAdd((LONG *)this, 1);
}

struct C_018d49a0 {
    undefined4 * sub_018d49a0(undefined4);
    int sub_018d4910(int);
};

// @baa 0x018d49a0
undefined4 * C_018d49a0::sub_018d49a0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((C_018d49a0 *)(this))->sub_018d4910(param_2);
  return param_1;
}

struct C_018d49c0 { void sub_018d4850(int); void sub_018d49c0(); };

// @baa 0x018d49c0
void C_018d49c0::sub_018d49c0() { sub_018d4850(0); }

struct C_018d4a30 {
    void sub_018d4a30(int);
    int sub_018d4850(int);
};

extern "C" __declspec(dllimport) void *__cdecl memmove(void *, const void *, unsigned int);
// @baa 0x018d4a30
void C_018d4a30::sub_018d4a30(int param_2)
{
    int * param_1 = (int *)this;
  void *_Dst;
  if (param_1[1] == 1) {
    ((C_018d4a30 *)(this))->sub_018d4850(0);
    return;
  }
  _Dst = (void *)(*param_1 + param_2 * 8);
  memmove(_Dst,(void *)((int)_Dst + 8),(param_1[1] - param_2) * 8 - 8);
  param_1[1] = param_1[1] + -1;
  return;
}

struct S018d4a70 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_018d4850(int NewNum);
    void sub_018d4a70();
};

void __stdcall sub_018d7170(int A);
// @baa 0x018d4a70
void S018d4a70::sub_018d4a70()
{
    S018d4a70* Self = this;
    sub_018d4850(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_018d4bd0 { int a, b, c; C_018d4bd0(); };

// @baa 0x018d4bd0
C_018d4bd0::C_018d4bd0() : a(0), b(0), c(0) {}

struct C_018d4be0 {
    undefined4 * sub_018d4be0(undefined4);
    int sub_018d4910(int);
};

// @baa 0x018d4be0
undefined4 * C_018d4be0::sub_018d4be0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((C_018d4be0 *)(this))->sub_018d4910(param_2);
  return param_1;
}

struct S018d4a70_018d4c00 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_018d4850(int NewNum);
    void sub_018d4c00();
};

// @baa 0x018d4c00
void S018d4a70_018d4c00::sub_018d4c00()
{
    S018d4a70_018d4c00* Self = this;
    sub_018d4850(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_018d4c20 {
    undefined4 * sub_018d4c20();
    int sub_018da830(int);
};

// @baa 0x018d4c20
undefined4 * C_018d4c20::sub_018d4c20(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  ((C_018d4c20 *)(((char *)this + 0x10)))->sub_018da830(0);
  *param_1 = 1;
  return param_1;
}

struct C_018d4e60 { void sub_018d4e50(void); };

// @baa 0x018d4e60
void sub_018d4e60(C_018d4e60 *param_1)
{
  param_1->sub_018d4e50();
}

struct Object;
struct ObjectRef {
    Object* ObjectPtr; // 0x00
    void sub_018d4e70();
};

struct Object {
    void sub_018d4d90();
};

// @baa 0x018d4e70
void ObjectRef::sub_018d4e70()
{
    if (ObjectPtr != 0)
        ObjectPtr->sub_018d4d90();
}

struct Object_018d4f00;
struct ObjectRef_018d4f00 {
    Object_018d4f00* ObjectPtr; // 0x00
    void sub_018d4f00();
};

struct Object_018d4f00 {
    void sub_018d4ec0();
};

// @baa 0x018d4f00
void ObjectRef_018d4f00::sub_018d4f00()
{
    if (ObjectPtr != 0)
        ObjectPtr->sub_018d4ec0();
}

struct Object_018d5020;
struct ObjectRef_018d5020 {
    Object_018d5020* ObjectPtr; // 0x00
    void sub_018d5020();
};

struct Object_018d5020 {
    void sub_018d4ec0();
};

// @baa 0x018d5020
void ObjectRef_018d5020::sub_018d5020()
{
    if (ObjectPtr != 0)
        ObjectPtr->sub_018d4ec0();
}

struct GSemaphore {
    bool sub_018d5110(int);
    virtual bool sub_018d5260();
};

// @baa 0x018d5260
bool GSemaphore::sub_018d5260() {
    return ((GSemaphore *)((char *)this - 0x14))->sub_018d5110(1);
}

struct GSemaphoreWaitableIncrement {
    unsigned char sub_018d52d0(int param1);
};

// @baa 0x018d52d0
unsigned char GSemaphoreWaitableIncrement::sub_018d52d0(int param1)
{
    return 1;
}

struct A_018d52e0 { virtual void sub_018d5990(); char pad[16]; };

struct B_018d52e0 { virtual void sub_018d5990(); };

struct C_018d52e0 : A_018d52e0, B_018d52e0 { virtual void sub_018d5990(); C_018d52e0(); };

C_018d52e0::C_018d52e0() {}

// @baa 0x018d52e0
void C_018d52e0::sub_018d5990() {}

struct A_018d59b0 { virtual void sub_018d5380(); char pad[16]; };

struct B_018d59b0 { virtual void sub_018d5380(); };

struct C_018d59b0 : A_018d59b0, B_018d59b0 { virtual void sub_018d5380(); C_018d59b0(); };

C_018d59b0::C_018d59b0() {}

// @baa 0x018d59b0
void C_018d59b0::sub_018d5380() {}

struct A_018d59c0 { virtual void sub_018d53f0(); char pad[16]; };

struct B_018d59c0 { virtual void sub_018d53f0(); };

struct C_018d59c0 : A_018d59c0, B_018d59c0 { virtual void sub_018d53f0(); C_018d59c0(); };

C_018d59c0::C_018d59c0() {}

// @baa 0x018d59c0
void C_018d59c0::sub_018d53f0() {}

struct GMutex_AreadyLockedAcquireInterface {
    BYTE sub_018d5a60(void *arg);
};

// @baa 0x018d5a60
BYTE GMutex_AreadyLockedAcquireInterface::sub_018d5a60(void *arg) { return 1; }

struct S_018d5bf0 {
    char _pad[0x18];
    S_018d5bf0* p;
    void sub_018d5b30();
    void sub_018d5bf0();
};

// @baa 0x018d5bf0
void S_018d5bf0::sub_018d5bf0() {
    p->sub_018d5b30();
}

struct S_018d5c00 { int sub_018d5b50(); };

struct C_018d5c00 { char _pad[0x18]; S_018d5c00* _ptr; int sub_018d5c00(); };

// @baa 0x018d5c00
int C_018d5c00::sub_018d5c00() { return _ptr->sub_018d5b50(); }

struct GMutex {
    bool sub_018d5b70();
};

struct C_018d5c10 {
    char _pad[0x18];
    GMutex *m_base;
    bool sub_018d5c10();
};

// @baa 0x018d5c10
bool C_018d5c10::sub_018d5c10()
{
    return m_base->sub_018d5b70();
}

struct C_018d5c20 {
    bool sub_018d5c00();
    bool sub_018d5c20();
};

// @baa 0x018d5c20
bool C_018d5c20::sub_018d5c20()
{
    return ((C_018d5c20 *)((char *)this - 0x14))->sub_018d5c00();
}

struct C_018d5c40 {
    int sub_018d5c40();
    int sub_018da830(int);
};

// @baa 0x018d5c40
int C_018d5c40::sub_018d5c40(void)
{
    int param_1 = (int)this;
  ((C_018d5c40 *)(this))->sub_018da830(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return param_1;
}

struct GWaitable;
struct GWaitCondition;
struct GWaitCondition {
    bool sub_018d5de0(GWaitable*, unsigned);
};

struct C_018d5f90 {
    GWaitCondition* m_p;
    bool sub_018d5f90(GWaitable* arg1, unsigned arg2);
};

// @baa 0x018d5f90
bool C_018d5f90::sub_018d5f90(GWaitable* arg1, unsigned arg2) {
    return m_p->sub_018d5de0(arg1, arg2);
}

struct GWaitCondition_018d5fa0 {
    void sub_018d5ed0();
};

struct C_018d5fa0 {
    GWaitCondition_018d5fa0 *m_pCond;
    void sub_018d5fa0();
};

// @baa 0x018d5fa0
void C_018d5fa0::sub_018d5fa0()
{
    m_pCond->sub_018d5ed0();
}

struct Real {
    void sub_018d5f00();
};

struct C_018d5fb0 {
    Real* p;
    void sub_018d5fb0();
};

// @baa 0x018d5fb0
void C_018d5fb0::sub_018d5fb0() {
    p->sub_018d5f00();
}

struct C_018d60c0 {
    int sub_018d60c0(int);
};

// @baa 0x018d60c0
int C_018d60c0::sub_018d60c0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_018d60d0 {
    bool sub_018d60d0();
};

// @baa 0x018d60d0
bool C_018d60d0::sub_018d60d0(void)
{
    int * param_1 = (int *)this;
  return *param_1 == -2;
}

struct D_018d6290 : A {
    void sub_018d6290();
};

// @baa 0x018d6290
void D_018d6290::sub_018d6290()
{
    A* a = (A*)((char*)this - 0x14);
    a->a1();
}

struct D_018d62a0 : A {
    void sub_018d62a0();
};

// @baa 0x018d62a0
void D_018d62a0::sub_018d62a0()
{
    A* a = (A*)((char*)this - 0x14);
    a->a1();
}

struct A_018d6810 { virtual void sub_018d6540(); char pad[16]; };

struct B_018d6810 { virtual void sub_018d6540(); };

struct C_018d6810 : A_018d6810, B_018d6810 { virtual void sub_018d6540(); C_018d6810(); };

C_018d6810::C_018d6810() {}

// @baa 0x018d6810
void C_018d6810::sub_018d6540() {}

struct A_018d6820 { virtual void sub_018d65b0(); char pad[16]; };

struct B_018d6820 { virtual void sub_018d65b0(); };

struct C_018d6820 : A_018d6820, B_018d6820 { virtual void sub_018d65b0(); C_018d6820(); };

C_018d6820::C_018d6820() {}

// @baa 0x018d6820
void C_018d6820::sub_018d65b0() {}

struct C_018d6af0;
struct B { void sub_018d6a10(C_018d6af0 *arg); };

struct C_018d6af0 { char _pad[0x18]; B *b; void sub_018d6af0(); };

// @baa 0x018d6af0
void C_018d6af0::sub_018d6af0()
{
    this->b->sub_018d6a10(this);
}

struct C_018d6b00;
struct B_018d6b00 { void sub_018d6a80(C_018d6b00 *arg); };

struct C_018d6b00 { char _pad[0x18]; B_018d6b00 *b; void sub_018d6b00(); };

// @baa 0x018d6b00
void C_018d6b00::sub_018d6b00()
{
    this->b->sub_018d6a80(this);
}

struct C_018d6b10;
struct B_018d6b10 { void sub_018d6ab0(C_018d6b10 *arg); };

struct C_018d6b10 { char _pad[0x18]; B_018d6b10 *b; void sub_018d6b10(); };

// @baa 0x018d6b10
void C_018d6b10::sub_018d6b10()
{
    this->b->sub_018d6ab0(this);
}

struct C_018d7080 {
    void sub_018d7080();
    int sub_018da6d0();
};

extern undefined4 g_023f4d60;
// @baa 0x018d7080
void C_018d7080::sub_018d7080(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_018d7080 *)(((char *)this + 0x550)))->sub_018da6d0();
  *param_1 = (undefined4)((&g_023f4d60));
  return;
}

struct C_018d80b0 { int a; C_018d80b0(int); };

// @baa 0x018d80b0
C_018d80b0::C_018d80b0(int x) : a(x) {}

struct C_018d8100 { int a, b, c; C_018d8100(); };

// @baa 0x018d8100
C_018d8100::C_018d8100() : a(0), b(0), c(0) {}

struct C_018d8770 { int a, b, c; C_018d8770(); };

// @baa 0x018d8770
C_018d8770::C_018d8770() : a(0), b(0), c(0) {}

struct C_018d9570 {
    void sub_018d9570(byte, char);
};

// @baa 0x018d9570
void C_018d9570::sub_018d9570(byte param_2, char param_3)
{
    byte * param_1 = (byte *)this;
  *param_1 = param_3 << 7 | param_2;
  return;
}

struct C_018d9580 {
    int sub_018d9580();
};

// @baa 0x018d9580
int C_018d9580::sub_018d9580(void)
{
    int param_1 = (int)this;
  return param_1 + 2;
}

struct C_018d9e50 {
    int sub_018d9e50();
    int sub_018da830(int);
};

// @baa 0x018d9e50
int C_018d9e50::sub_018d9e50(void)
{
    int param_1 = (int)this;
  ((C_018d9e50 *)(this))->sub_018da830(0);
  *(undefined1 *)(param_1 + 0x14) = 1;
  return param_1;
}

void sub_018da6d0();
struct C_018d9e70 {
    void sub_018d9e70();
};

// @baa 0x018d9e70
void C_018d9e70::sub_018d9e70()
{
    *(BYTE *)((char *)this + 0x14) = 0;
    sub_018da6d0();
}

typedef uint size_t;

struct C_018da1d0 {
    undefined4 * sub_018da1d0();
    int sub_018da830(int);
    int sub_018d9750();
};

void * sub_01a37612(void *, int, size_t);
extern undefined4 g_023f4dd4;
// @baa 0x018da1d0
undefined4 * C_018da1d0::sub_018da1d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f4dd4));
  ((C_018da1d0 *)(((char *)this + 0x550)))->sub_018da830(400);
  sub_01a37612(param_1 + 0x144,0,0x40);
  ((C_018da1d0 *)(this))->sub_018d9750();
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  return param_1;
}

struct C_018da230 {
    undefined4 * sub_018da230(byte);
    int sub_018da6d0();
};

int sub_00402660(...);
// @baa 0x018da230
undefined4 * C_018da230::sub_018da230(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_018da230 *)(((char *)this + 0x550)))->sub_018da6d0();
  *param_1 = (undefined4)((&g_023f4d60));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018da320 {
    void sub_018da320(int *, int, int, int, int, int);
    int sub_018da2c0();
};

// @baa 0x018da320
void C_018da320::sub_018da320(int * param_2, int param_3, int param_4, int param_5, int param_6, int param_7)
{
    int param_1 = (int)this;
  int *piVar1;
  if (param_2 != (int *)0x0) {
    if (param_4 == 0) {
      *param_2 = 0;
      return;
    }
    param_2[1] = -0x33333334;
    *(undefined4 *)((int)param_2 + param_3 + 8) = 0xcccccccc;
    piVar1 = (int *)((C_018da320 *)(this))->sub_018da2c0();
    piVar1[5] = param_6;
    piVar1[3] = param_3;
    piVar1[4] = param_4;
    piVar1[1] = 0;
    piVar1[2] = (int)param_2;
    piVar1[6] = param_5;
    piVar1[7] = param_7;
    *param_2 = (int)piVar1;
    piVar1[1] = *(int *)(param_1 + 4);
    *piVar1 = param_1;
    **(int **)(param_1 + 4) = (int)piVar1;
    *(int **)(param_1 + 4) = piVar1;
  }
  return;
}

struct C_018da830 {
    undefined4 * sub_018da830(undefined4);
    int sub_018da6f0(int);
};

// @baa 0x018da830
undefined4 * C_018da830::sub_018da830(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((C_018da830 *)(this))->sub_018da6f0(param_2);
  return param_1;
}

#pragma pack(push, 1)
struct GMatrix2D { char _pad0[1]; };

#pragma pack(pop)
struct C_018dab50 {
    void sub_018dab50(char *);
};

int sub_018da9a0(...);
// @baa 0x018dab50
void C_018dab50::sub_018dab50(char * param_1)
{
    GMatrix2D * this_ = (GMatrix2D *)this;

                    
  sub_018da9a0(param_1,0x200,"| %4.4f %4.4f %4.4f |\n| %4.4f %4.4f %4.4f |\n",(double)*(float *)this_
               ,(double)*(float *)(this_ + 4),(double)(*(float *)(this_ + 8) / 20.0),
               (double)*(float *)(this_ + 0xc),(double)*(float *)(this_ + 0x10),
               (double)(*(float *)(this_ + 0x14) / 20.0));
  return;
}

#pragma pack(push, 1)
#pragma pack(pop)
struct GPoint_float_T { char _unknown; };

struct C_018daba0 {
    void sub_018daba0(GPoint_float_T *, GPoint_float_T *);
};

// @baa 0x018daba0
void C_018daba0::sub_018daba0(GPoint_float_T * param_1, GPoint_float_T * param_2)
{
    GMatrix2D * this_ = (GMatrix2D *)this;
  *(float *)param_1 =
       *(float *)param_2 * *(float *)this_ + *(float *)(this_ + 4) * *(float *)(param_2 + 4) +
       *(float *)(this_ + 8);
  *(float *)(param_1 + 4) =
       *(float *)(this_ + 0x10) * *(float *)(param_2 + 4) +
       *(float *)(this_ + 0xc) * *(float *)param_2 + *(float *)(this_ + 0x14);
  return;
}

#pragma pack(push, 1)
#pragma pack(pop)
struct C_018dabd0 {
    void sub_018dabd0(GPoint_float_T *, GPoint_float_T *);
};

// @baa 0x018dabd0
void C_018dabd0::sub_018dabd0(GPoint_float_T * param_1, GPoint_float_T * param_2)
{
    GMatrix2D * this_ = (GMatrix2D *)this;
  *(float *)param_1 =
       *(float *)param_2 * *(float *)this_ + *(float *)(this_ + 4) * *(float *)(param_2 + 4);
  *(float *)(param_1 + 4) =
       *(float *)(this_ + 0x10) * *(float *)(param_2 + 4) +
       *(float *)(this_ + 0xc) * *(float *)param_2;
  return;
}

#pragma pack(push, 1)
#pragma pack(pop)
struct C_018dacd0 {
    float sub_018dacd0();
};

// @baa 0x018dacd0
float C_018dacd0::sub_018dacd0(void)
{
    GMatrix2D * this_ = (GMatrix2D *)this;

                    
  return *(float *)(this_ + 0x10) * *(float *)this_ - *(float *)(this_ + 0xc) * *(float *)(this_ + 4);
}

struct C_018dbc60 {
    int sub_018dbc60();
};

// @baa 0x018dbc60
int C_018dbc60::sub_018dbc60(void)
{
    int param_1 = (int)this;
  return param_1 + 0x1c;
}

struct C_018dbe70 {
    undefined4 * sub_018dbe70();
};

extern undefined * g_023f4e80;
// @baa 0x018dbe70
undefined4 * C_018dbe70::sub_018dbe70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f4e80);
  return param_1;
}

struct C_018dbe90 {
    undefined4 * sub_018dbe90();
};

extern undefined * g_023f4e88;
// @baa 0x018dbe90
undefined4 * C_018dbe90::sub_018dbe90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f4e88);
  return param_1;
}

struct C_018dbeb0 {
    undefined4 * sub_018dbeb0();
};

extern undefined * g_023f4e90;
// @baa 0x018dbeb0
undefined4 * C_018dbeb0::sub_018dbeb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f4e90);
  return param_1;
}

struct C_018dc020 {
    int sub_018dc020(int);
};

// @baa 0x018dc020
int C_018dc020::sub_018dc020(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + 8 + *param_1;
}

struct C_018dc030 {
    int sub_018dc030(int);
};

// @baa 0x018dc030
int C_018dc030::sub_018dc030(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + 8 + *param_1;
}

struct C_018dc040 {
    int sub_018dc040();
};

// @baa 0x018dc040
int C_018dc040::sub_018dc040(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return (param_1[1] + 1) * 0x10 + *(int *)*param_1;
}

struct C_018dc050 { int a, b; C_018dc050(int, int); };

// @baa 0x018dc050
C_018dc050::C_018dc050(int x, int y) : a(x), b(y) {}

struct C_018dc0e0 { int a, b; C_018dc0e0(int, int); };

// @baa 0x018dc0e0
C_018dc0e0::C_018dc0e0(int x, int y) : a(x), b(y) {}

struct C_018dc190 { int a, b; C_018dc190(const C_018dc190 &); };

// @baa 0x018dc190
C_018dc190::C_018dc190(const C_018dc190 &o) : a(o.a), b(o.b) {}

struct C_018dc340 {
    undefined4 sub_018dc340();
};

// @baa 0x018dc340
undefined4 C_018dc340::sub_018dc340(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 4);
}

struct C_018dc420 {
    undefined4 * sub_018dc420();
};

extern undefined * g_023f4ea0;
// @baa 0x018dc420
undefined4 * C_018dc420::sub_018dc420(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f4ea0);
  return param_1;
}

struct S_018dc4e0 {
    INT Unk00;
    INT Unk04;
    S_018dc4e0 *sub_018dc4e0();
};

// @baa 0x018dc4e0
S_018dc4e0 *S_018dc4e0::sub_018dc4e0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_018dc5e0 { int a, b; C_018dc5e0(int, int); };

// @baa 0x018dc5e0
C_018dc5e0::C_018dc5e0(int x, int y) : a(x), b(y) {}

struct C_018dc660 { int a, b; C_018dc660(int, int); };

// @baa 0x018dc660
C_018dc660::C_018dc660(int x, int y) : a(x), b(y) {}

struct C_018dc930 {
    undefined4 sub_018dc930(uint *);
    int sub_018dc2e0(int, int);
};

// @baa 0x018dc930
undefined4 C_018dc930::sub_018dc930(uint * param_2)
{
    int * param_1 = (int *)this;
  undefined4 uVar1;
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = ((C_018dc930 *)(this))->sub_018dc2e0((int)(param_2), (*param_2 >> 6 ^ *param_2) & *(uint *)(*param_1 + 4));
  return uVar1;
}

struct S_018dd970 {
    INT Unk00;
    INT Unk04;
    S_018dd970 *sub_018dd970();
};

// @baa 0x018dd970
S_018dd970 *S_018dd970::sub_018dd970()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct ObjB {
    int sub_018dd170();
};

struct ObjA {
    int f0;
    ObjB* p4;
    int sub_018dd9d0();
};

// @baa 0x018dd9d0
int ObjA::sub_018dd9d0() { return p4->sub_018dd170(); }

struct ObjB_018dd9e0 {
    int sub_018dd210();
};

struct ObjA_018dd9e0 {
    int f0;
    ObjB_018dd9e0* p4;
    int sub_018dd9e0();
};

// @baa 0x018dd9e0
int ObjA_018dd9e0::sub_018dd9e0() { return p4->sub_018dd210(); }

struct C_018ddc80 {
    int sub_018ddc80();
};

// @baa 0x018ddc80
int C_018ddc80::sub_018ddc80(void)
{
    int x = *(int *)this;
    return x != 0 ? (int)this : 0;
}

struct C_018ddce0 {
    void sub_018ddce0(undefined2, undefined4, undefined1 *, undefined1 *, undefined4);
    int sub_018e45b0(int);
};

extern undefined1 g_01e66a54;
// @baa 0x018ddce0
void C_018ddce0::sub_018ddce0(undefined2 param_2, undefined4 param_3, undefined1 * param_4, undefined1 * param_5, undefined4 param_6)
{
    undefined4 * param_1 = (undefined4 *)this;
  *(undefined2 *)(param_1 + 3) = param_2;
  *param_1 = param_3;
  if (param_5 == (undefined1 *)0x0) {
    param_5 = &g_01e66a54;
  }
  ((C_018ddce0 *)(((char *)this + 0x14)))->sub_018e45b0((int)(param_5));
  if (param_4 == (undefined1 *)0x0) {
    param_4 = &g_01e66a54;
  }
  ((C_018ddce0 *)(((char *)this + 0x18)))->sub_018e45b0((int)(param_4));
  param_1[2] = param_1[6] + 0xc;
  param_1[1] = param_1[5] + 0xc;
  param_1[4] = param_6;
  return;
}

struct C_018de180 { int a; C_018de180(int); };

// @baa 0x018de180
C_018de180::C_018de180(int x) : a(x) {}

struct C_018de230 { int a; C_018de230(int); };

// @baa 0x018de230
C_018de230::C_018de230(int x) : a(x) {}

struct C_018de2a0 { int a; C_018de2a0(int); };

// @baa 0x018de2a0
C_018de2a0::C_018de2a0(int x) : a(x) {}

struct C_018de2e0 { int a; C_018de2e0(int); };

// @baa 0x018de2e0
C_018de2e0::C_018de2e0(int x) : a(x) {}

struct Object_018de340;
struct ObjectRef_018de340 {
    Object_018de340* ObjectPtr; // 0x00
    void sub_018de340();
};

struct Object_018de340 {
    void sub_018dd090();
};

// @baa 0x018de340
void ObjectRef_018de340::sub_018de340()
{
    if (ObjectPtr != 0)
        ObjectPtr->sub_018dd090();
}

struct C_018de3e0 {
    undefined4 * sub_018de3e0();
};

extern undefined * g_023f4f2c;
// @baa 0x018de3e0
undefined4 * C_018de3e0::sub_018de3e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f4f2c);
  return param_1;
}

struct C_018de400 { int a; C_018de400(int); };

// @baa 0x018de400
C_018de400::C_018de400(int x) : a(x) {}

struct C_018de450 {
    undefined4 * sub_018de450();
};

extern undefined * g_023f4f34;
// @baa 0x018de450
undefined4 * C_018de450::sub_018de450(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f4f34);
  return param_1;
}

struct C_018de5b0 { int a; C_018de5b0(int); };

// @baa 0x018de5b0
C_018de5b0::C_018de5b0(int x) : a(x) {}

struct C_018de620 {
    undefined4 * sub_018de620();
};

extern undefined * g_023f4f3c;
// @baa 0x018de620
undefined4 * C_018de620::sub_018de620(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f4f3c);
  return param_1;
}

struct C_018de660 {
    void *field0;
    void *field4;
    C_018de660 *sub_018de660();
};

// @baa 0x018de660
C_018de660 *C_018de660::sub_018de660()
{
    field0 = this;
    field4 = this;
    return this;
}

struct Object_018de7f0;
struct ObjectRef_018de7f0 {
    Object_018de7f0* ObjectPtr; // 0x00
    void sub_018de7f0();
};

struct Object_018de7f0 {
    void sub_018dd090();
};

// @baa 0x018de7f0
void ObjectRef_018de7f0::sub_018de7f0()
{
    if (ObjectPtr != 0)
        ObjectPtr->sub_018dd090();
}

struct Object_018de950;
struct ObjectRef_018de950 {
    Object_018de950* ObjectPtr; // 0x00
    void sub_018de950();
};

struct Object_018de950 {
    void sub_018dd090();
};

// @baa 0x018de950
void ObjectRef_018de950::sub_018de950()
{
    if (ObjectPtr != 0)
        ObjectPtr->sub_018dd090();
}

struct Object_018de970;
struct ObjectRef_018de970 {
    Object_018de970* ObjectPtr; // 0x00
    void sub_018de970();
};

struct Object_018de970 {
    void sub_018dd090();
};

// @baa 0x018de970
void ObjectRef_018de970::sub_018de970()
{
    if (ObjectPtr != 0)
        ObjectPtr->sub_018dd090();
}

struct C_018dea40 { int a; C_018dea40(int); };

// @baa 0x018dea40
C_018dea40::C_018dea40(int x) : a(x) {}

struct C_018deb20 {
    int sub_018deb20(int);
};

// @baa 0x018deb20
int C_018deb20::sub_018deb20(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_018deb30 {
    int sub_018deb30(int);
};

// @baa 0x018deb30
int C_018deb30::sub_018deb30(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_018deb40 {
    bool sub_018deb40();
};

// @baa 0x018deb40
bool C_018deb40::sub_018deb40(void)
{
    int * param_1 = (int *)this;
  return *param_1 == -2;
}

struct C_018deb70 { int a, b; C_018deb70(int, int); };

// @baa 0x018deb70
C_018deb70::C_018deb70(int x, int y) : a(x), b(y) {}

struct C_018dec40 {
    int sub_018dec40(int);
};

// @baa 0x018dec40
int C_018dec40::sub_018dec40(int)
{
    return *(int *)(this + 4);
}

struct C_018dec70 {
    undefined4 * sub_018dec70(undefined4, undefined4);
    int sub_018e4170(int);
    int sub_018e4150();
};

// @baa 0x018dec70
undefined4 * C_018dec70::sub_018dec70(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = param_2;
  ((C_018dec70 *)(((char *)this + 4)))->sub_018e4170(param_3);
  ((C_018dec70 *)(((char *)this + 8)))->sub_018e4150();
  return param_1;
}

struct C_018dece0 {
    void sub_018dece0();
};

int sub_018d3de0(void);
extern undefined * g_023f4f70;
// @baa 0x018dece0
void C_018dece0::sub_018dece0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023f4f70);
  sub_018d3de0();
  return;
}

int sub_018de110(...);
// @baa 0x018df7f0
void sub_018df7f0(undefined4 param_1, undefined4 param_2)
{
  sub_018de110(param_1,param_2,1);
  return;
}

struct C_018dfb60 { int a, b; C_018dfb60(int, int); };

// @baa 0x018dfb60
C_018dfb60::C_018dfb60(int x, int y) : a(x), b(y) {}

// GFx_19b0000.cpp (part 2 of 14): 67 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct A_019b0640 { virtual void sub_019b12f0(); char pad[12]; };

struct B_019b0640 { virtual void sub_019b12f0(); };

struct C_019b0640 : A_019b0640, B_019b0640 { virtual void sub_019b12f0(); C_019b0640(); };

C_019b0640::C_019b0640() {}

// @baa 0x019b0640
void C_019b0640::sub_019b12f0() {}

struct A_019b0880 { virtual void sub_019b0c80(); char pad[12]; };

struct B_019b0880 { virtual void sub_019b0c80(); };

struct C_019b0880 : A_019b0880, B_019b0880 { virtual void sub_019b0c80(); C_019b0880(); };

C_019b0880::C_019b0880() {}

// @baa 0x019b0880
void C_019b0880::sub_019b0c80() {}

struct A_019b1360 { virtual void sub_019b16a0(); char pad[12]; };

struct B_019b1360 { virtual void sub_019b16a0(); };

struct C_019b1360 : A_019b1360, B_019b1360 { virtual void sub_019b16a0(); C_019b1360(); };

C_019b1360::C_019b1360() {}

// @baa 0x019b1360
void C_019b1360::sub_019b16a0() {}

struct A_019b1490 { virtual void sub_019b14a0(); char pad[12]; };

struct B_019b1490 { virtual void sub_019b14a0(); };

struct C_019b1490 : A_019b1490, B_019b1490 { virtual void sub_019b14a0(); C_019b1490(); };

C_019b1490::C_019b1490() {}

// @baa 0x019b1490
void C_019b1490::sub_019b14a0() {}

struct C_019b18e0 { int a; C_019b18e0(int); };

// @baa 0x019b18e0
C_019b18e0::C_019b18e0(int x) : a(x) {}

struct C {
    undefined4 * sub_019b3860(undefined4, undefined4);
    int sub_019924d0(int);
    int sub_019068e0(int, int);
};

extern undefined4 g_023fda94;
extern undefined4 g_023fdaec;
// @baa 0x019b3860
undefined4 * C::sub_019b3860(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C *)(this))->sub_019924d0(0);
  *param_1 = (undefined4)((&g_023fdaec));
  param_1[4] = (undefined4)((&g_023fda94));
  ((C *)(((char *)this + 0x10)))->sub_019068e0(param_2, param_3);
  return param_1;
}

struct A_019b38a0 { virtual void sub_019b4620(); char pad[12]; };

struct B_019b38a0 { virtual void sub_019b4620(); };

struct C_019b38a0 : A_019b38a0, B_019b38a0 { virtual void sub_019b4620(); C_019b38a0(); };

C_019b38a0::C_019b38a0() {}

// @baa 0x019b38a0
void C_019b38a0::sub_019b4620() {}

struct A_019b41c0 { virtual void sub_019b4600(); char pad[12]; };

struct B_019b41c0 { virtual void sub_019b4600(); };

struct C_019b41c0 : A_019b41c0, B_019b41c0 { virtual void sub_019b4600(); C_019b41c0(); };

C_019b41c0::C_019b41c0() {}

// @baa 0x019b41c0
void C_019b41c0::sub_019b4600() {}

struct C_019b46a0 {
    void sub_01973ce0();
    void sub_019b46a0();
};

// @baa 0x019b46a0
void C_019b46a0::sub_019b46a0() { sub_01973ce0(); }

struct A_019b46b0 { virtual void sub_019b46c0(); char pad[12]; };

struct B_019b46b0 { virtual void sub_019b46c0(); };

struct C_019b46b0 : A_019b46b0, B_019b46b0 { virtual void sub_019b46c0(); C_019b46b0(); };

C_019b46b0::C_019b46b0() {}

// @baa 0x019b46b0
void C_019b46b0::sub_019b46c0() {}

struct A_019b4bd0 { virtual void sub_019b4d60(); char pad[12]; };

struct B_019b4bd0 { virtual void sub_019b4d60(); };

struct C_019b4bd0 : A_019b4bd0, B_019b4bd0 { virtual void sub_019b4d60(); C_019b4bd0(); };

C_019b4bd0::C_019b4bd0() {}

// @baa 0x019b4bd0
void C_019b4bd0::sub_019b4d60() {}

struct C_019b4ef0 { int a; C_019b4ef0(int); };

// @baa 0x019b4ef0
C_019b4ef0::C_019b4ef0(int x) : a(x) {}

struct C_019b4f70 {
    int sub_019b4f70(int);
};

// @baa 0x019b4f70
int C_019b4f70::sub_019b4f70(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0x14;
}

struct C_019b4f80 { int a, b; C_019b4f80(int, int); };

// @baa 0x019b4f80
C_019b4f80::C_019b4f80(int x, int y) : a(x), b(y) {}

struct C_019b4fc0 {
    int sub_019b4fc0(int);
};

// @baa 0x019b4fc0
int C_019b4fc0::sub_019b4fc0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0x14;
}

struct C_019b4ff0 { int a, b; C_019b4ff0(int, int); };

// @baa 0x019b4ff0
C_019b4ff0::C_019b4ff0(int x, int y) : a(x), b(y) {}

struct C_019b5080 { int a, b, c; C_019b5080(); };

// @baa 0x019b5080
C_019b5080::C_019b5080() : a(0), b(0), c(0) {}

struct C_019b5090 { int a, b, c; C_019b5090(); };

// @baa 0x019b5090
C_019b5090::C_019b5090() : a(0), b(0), c(0) {}

struct C_019b50a0 { int a, b, c; C_019b50a0(); };

// @baa 0x019b50a0
C_019b50a0::C_019b50a0() : a(0), b(0), c(0) {}

struct C_019b52b0 {
    undefined4 * sub_019b52b0(undefined4 *);
    int sub_018e4700(int);
};

// @baa 0x019b52b0
undefined4 * C_019b52b0::sub_019b52b0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_019b52b0 *)(((char *)this + 4)))->sub_018e4700((int)(param_2 + 1));
  param_1[2] = param_2[2];
  return param_1;
}

// @baa 0x019b5340
INT __stdcall sub_019b5340(INT *param_1)
{
    return param_1[2];
}

// @baa 0x019b5960
undefined4 sub_019b5960(int param_1)
{
  return *(undefined4 *)(param_1 + 8);
}

struct C_019b5970 {
    undefined4 * sub_019b5970(undefined4 *);
    int sub_018e4700(int);
};

// @baa 0x019b5970
undefined4 * C_019b5970::sub_019b5970(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_019b5970 *)(((char *)this + 4)))->sub_018e4700((int)(param_2 + 1));
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}

struct C_019b5b00 { int a, b; C_019b5b00(int, int); };

// @baa 0x019b5b00
C_019b5b00::C_019b5b00(int x, int y) : a(x), b(y) {}

// @baa 0x019b6860
INT __stdcall sub_019b6860(INT *param_1)
{
    return param_1[2];
}

struct C_019b68b0 {
    void sub_019b68b0(int *);
    int sub_018e4700(int);
};

// @baa 0x019b68b0
void C_019b68b0::sub_019b68b0(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  *param_1 = *puVar1;
  ((C_019b68b0 *)(((char *)this + 4)))->sub_018e4700((int)(puVar1 + 1));
  param_1[2] = puVar1[2];
  param_1[3] = *(undefined4 *)param_2[1];
  return;
}

// @baa 0x019b6e20
INT __stdcall sub_019b6e20(INT *param_1)
{
    return param_1[2];
}

struct C_019b83e0 { void sub_019b6c50(int); void sub_019b83e0(); };

// @baa 0x019b83e0
void C_019b83e0::sub_019b83e0() { sub_019b6c50(0); }

struct C_019b83f0 { void sub_019b6d00(int); void sub_019b83f0(); };

// @baa 0x019b83f0
void C_019b83f0::sub_019b83f0() { sub_019b6d00(0); }

struct C_019b8ea0 { int a, b, c; C_019b8ea0(); };

// @baa 0x019b8ea0
C_019b8ea0::C_019b8ea0() : a(0), b(0), c(0) {}

struct S018d4a70 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_019b6c50(int NewNum);
    void sub_019b8ec0();
};

void __stdcall sub_018d7170(int A);
// @baa 0x019b8ec0
void S018d4a70::sub_019b8ec0()
{
    S018d4a70* Self = this;
    sub_019b6c50(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S018d4a70_019b8ee0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_019b6d00(int NewNum);
    void sub_019b8ee0();
};

// @baa 0x019b8ee0
void S018d4a70_019b8ee0::sub_019b8ee0()
{
    S018d4a70_019b8ee0* Self = this;
    sub_019b6d00(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S {
    void sub_019b7cc0();
    void sub_019b9120();
};

// @baa 0x019b9120
void S::sub_019b9120() {
    sub_019b7cc0();
}

struct S018d4a70_019b91b0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_019b6c50(int NewNum);
    void sub_019b91b0();
};

// @baa 0x019b91b0
void S018d4a70_019b91b0::sub_019b91b0()
{
    S018d4a70_019b91b0* Self = this;
    sub_019b6c50(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S018d4a70_019b91d0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_019b6d00(int NewNum);
    void sub_019b91d0();
};

// @baa 0x019b91d0
void S018d4a70_019b91d0::sub_019b91d0()
{
    S018d4a70_019b91d0* Self = this;
    sub_019b6d00(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_019b91f0 { int a, b, c; C_019b91f0(); };

// @baa 0x019b91f0
C_019b91f0::C_019b91f0() : a(0), b(0), c(0) {}

struct C_019b9200 { int a, b, c; C_019b9200(); };

// @baa 0x019b9200
C_019b9200::C_019b9200() : a(0), b(0), c(0) {}

struct S_019b93e0 {
    void sub_019b9070();
    void sub_019b7cc0();
    void sub_019b93e0();
};

// @baa 0x019b93e0
void S_019b93e0::sub_019b93e0() {
    sub_019b9070();
    sub_019b7cc0();
}

struct C_019b9d70 {
    undefined4 * sub_019b9d70();
};

int sub_018d3d50(void);
extern undefined * g_023fde0c;
// @baa 0x019b9d70
undefined4 * C_019b9d70::sub_019b9d70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023fde0c);
  return param_1;
}

struct C_019b9ea0 { int a; C_019b9ea0(int); };

// @baa 0x019b9ea0
C_019b9ea0::C_019b9ea0(int x) : a(x) {}

struct C_019b9f90 {
    void sub_019b9f90();
};

int sub_018d3de0(void);
extern undefined * g_023fde14;
// @baa 0x019b9f90
void C_019b9f90::sub_019b9f90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023fde14);
  sub_018d3de0();
  return;
}

struct A_019bbc10 { virtual void sub_019bc340(); char pad[12]; };

struct B_019bbc10 { virtual void sub_019bc340(); };

struct C_019bbc10 : A_019bbc10, B_019bbc10 { virtual void sub_019bc340(); C_019bbc10(); };

C_019bbc10::C_019bbc10() {}

// @baa 0x019bbc10
void C_019bbc10::sub_019bc340() {}

struct A_019bbee0 { virtual void sub_019bc2e0(); char pad[12]; };

struct B_019bbee0 { virtual void sub_019bc2e0(); };

struct C_019bbee0 : A_019bbee0, B_019bbee0 { virtual void sub_019bc2e0(); C_019bbee0(); };

C_019bbee0::C_019bbee0() {}

// @baa 0x019bbee0
void C_019bbee0::sub_019bc2e0() {}

struct A_019bc3a0 { virtual void sub_019bc630(); char pad[12]; };

struct B_019bc3a0 { virtual void sub_019bc630(); };

struct C_019bc3a0 : A_019bc3a0, B_019bc3a0 { virtual void sub_019bc630(); C_019bc3a0(); };

C_019bc3a0::C_019bc3a0() {}

// @baa 0x019bc3a0
void C_019bc3a0::sub_019bc630() {}

void sub_01973ce0(void);
// @baa 0x019bc420
void sub_019bc420(void) {
	sub_01973ce0();
}

struct A_019bc430 { virtual void sub_019bc440(); char pad[12]; };

struct B_019bc430 { virtual void sub_019bc440(); };

struct C_019bc430 : A_019bc430, B_019bc430 { virtual void sub_019bc440(); C_019bc430(); };

C_019bc430::C_019bc430() {}

// @baa 0x019bc430
void C_019bc430::sub_019bc440() {}

struct C_019bcb40 { int a; C_019bcb40(int); };

// @baa 0x019bcb40
C_019bcb40::C_019bcb40(int x) : a(x) {}

struct C_019bcb80 {
    int sub_019bcb80(int);
};

// @baa 0x019bcb80
int C_019bcb80::sub_019bcb80(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + 8 + *param_1;
}

struct C_019bcb90 {
    bool sub_019bcb90();
};

// @baa 0x019bcb90
bool C_019bcb90::sub_019bcb90(void)
{
    int * param_1 = (int *)this;
  return *param_1 == -2;
}

struct GFxIMEManager {
    virtual BYTE sub_019bcca0(UINT arg1);
};

// @baa 0x019bcca0
BYTE GFxIMEManager::sub_019bcca0(UINT arg1)
{
    return 0;
}

// @baa 0x019bcd10
BYTE __stdcall sub_019bcd10(UINT u)
{
    return 0;
}

struct C_019be590 {
    undefined4 * sub_019be590(undefined4, undefined4, undefined4);
    int sub_019f2b40(int);
};

extern undefined4 g_023fe194;
extern undefined4 g_023fe1ec;
// @baa 0x019be590
undefined4 * C_019be590::sub_019be590(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_019be590 *)(this))->sub_019f2b40(param_4);
  *param_1 = (undefined4)((&g_023fe1ec));
  param_1[4] = (undefined4)((&g_023fe194));
  param_1[0xd] = param_2;
  param_1[0xe] = param_3;
  return param_1;
}

struct A_019be5d0 { virtual void sub_019be910(); char pad[12]; };

struct B_019be5d0 { virtual void sub_019be910(); };

struct C_019be5d0 : A_019be5d0, B_019be5d0 { virtual void sub_019be910(); C_019be5d0(); };

C_019be5d0::C_019be5d0() {}

// @baa 0x019be5d0
void C_019be5d0::sub_019be910() {}

struct C_019bea30 { int a; C_019bea30(int); };

// @baa 0x019bea30
C_019bea30::C_019bea30(int x) : a(x) {}

struct Object;
struct ObjectRef {
    Object* ObjectPtr; // 0x00
    void sub_019bea40();
};

struct Object {
    void sub_018dd090();
};

// @baa 0x019bea40
void ObjectRef::sub_019bea40()
{
    if (ObjectPtr != 0)
        ObjectPtr->sub_018dd090();
}

struct C_019bea70 { int a, b, c; C_019bea70(); };

// @baa 0x019bea70
C_019bea70::C_019bea70() : a(0), b(0), c(0) {}

struct C_019bea80 { int a, b, c; C_019bea80(); };

// @baa 0x019bea80
C_019bea80::C_019bea80() : a(0), b(0), c(0) {}

struct C_019bef50 { void sub_019bedc0(int); void sub_019bef50(); };

// @baa 0x019bef50
void C_019bef50::sub_019bef50() { sub_019bedc0(0); }

struct A_019bf5d0 { virtual void sub_019bf5f0(); char pad[12]; };

struct B_019bf5d0 { virtual void sub_019bf5f0(); };

struct C_019bf5d0 : A_019bf5d0, B_019bf5d0 { virtual void sub_019bf5f0(); C_019bf5d0(); };

C_019bf5d0::C_019bf5d0() {}

// @baa 0x019bf5d0
void C_019bf5d0::sub_019bf5f0() {}

struct M_019bf5e0 { void sub_01914590(); };

struct C_019bf5e0 { char pad[320]; M_019bf5e0 m; void sub_019bf5e0(); };

// @baa 0x019bf5e0
void C_019bf5e0::sub_019bf5e0() { m.sub_01914590(); }

struct S018d4a70_019bf860 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_019bedc0(int NewNum);
    void sub_019bf860();
};

// @baa 0x019bf860
void S018d4a70_019bf860::sub_019bf860()
{
    S018d4a70_019bf860* Self = this;
    sub_019bedc0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_019bf8e0 { int a, b, c; C_019bf8e0(); };

// @baa 0x019bf8e0
C_019bf8e0::C_019bf8e0() : a(0), b(0), c(0) {}

struct S018d4a70_019bf8f0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_019bedc0(int NewNum);
    void sub_019bf8f0();
};

// @baa 0x019bf8f0
void S018d4a70_019bf8f0::sub_019bf8f0()
{
    S018d4a70_019bf8f0* Self = this;
    sub_019bedc0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_019bf910 { int a, b, c; C_019bf910(); };

// @baa 0x019bf910
C_019bf910::C_019bf910() : a(0), b(0), c(0) {}

struct C_019bf930 { int a, b, c; C_019bf930(); };

// @baa 0x019bf930
C_019bf930::C_019bf930() : a(0), b(0), c(0) {}

struct S_019bff30 {
    void sub_019bfe90();
    void sub_019bf880();
    void sub_019bff30();
};

// @baa 0x019bff30
void S_019bff30::sub_019bff30() {
    sub_019bfe90();
    sub_019bf880();
}

struct C_019bffb0 {
    void sub_019bffb0();
    int sub_019bfe90();
    int sub_019bf880();
};

extern undefined4 g_023f4ed0;
// @baa 0x019bffb0
void C_019bffb0::sub_019bffb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_019bffb0 *)(((char *)this + 0x38)))->sub_019bfe90();
  ((C_019bffb0 *)(((char *)this + 0x38)))->sub_019bf880();
  *param_1 = (undefined4)((&g_023f4ed0));
  return;
}

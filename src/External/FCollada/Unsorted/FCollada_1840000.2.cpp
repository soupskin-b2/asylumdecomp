// FCollada_1840000.cpp (part 2 of 21): 44 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct FCDSceneNode {
    virtual int dummy0();
    virtual int dummy1();
    virtual int dummy2();
    virtual int dummy3();
    virtual int dummy4();
    virtual int dummy5();
    virtual int sub_0183f3d0(byte);
    virtual int sub_018410f0(byte);
};

// @baa 0x018410f0
int FCDSceneNode::sub_018410f0(byte a) { return sub_0183f3d0(a); }

struct C_018415c0 { int a, b; C_018415c0(int, int); };

// @baa 0x018415c0
C_018415c0::C_018415c0(int x, int y) : a(x), b(y) {}

struct C {
    void sub_018423b0(undefined4);
    int sub_01852f10(int);
};

// @baa 0x018423b0
void C::sub_018423b0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C *)((*(char **)((char *)this + 0x6c))))->sub_01852f10(param_2);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10;
  return;
}

struct C_01842860 { int a, b, c; C_01842860(); };

// @baa 0x01842860
C_01842860::C_01842860() : a(0), b(0), c(0) {}

struct C_01842b20 { void sub_01842a40(int); void sub_01842b20(); };

// @baa 0x01842b20
void C_01842b20::sub_01842b20() { sub_01842a40(0); }

struct C_018431e0 {
    undefined4 sub_018431e0(byte);
};

int sub_01842bf0(void);
int sub_00402660(...);
// @baa 0x018431e0
undefined4 C_018431e0::sub_018431e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01842bf0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct A_01845250 { virtual void sub_01845340(); char pad[32]; };

struct B_01845250 { virtual void sub_01845340(); };

struct C_01845250 : A_01845250, B_01845250 { virtual void sub_01845340(); C_01845250(); };

C_01845250::C_01845250() {}

// @baa 0x01845250
void C_01845250::sub_01845340() {}

struct C_01845340 {
    undefined4 sub_01845340(byte);
};

int sub_018447c0(void);
// @baa 0x01845340
undefined4 C_01845340::sub_01845340(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018447c0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern undefined4 g_027b7ec0;
// @baa 0x01845480
undefined * sub_01845480(void)
{
  return (undefined *)(&g_027b7ec0);
}

struct C_018454b0 {
    undefined4 * sub_018454b0(undefined4, undefined4);
    int sub_0181bba0(int, int);
};

extern undefined4 g_023e5fb8;
// @baa 0x018454b0
undefined4 * C_018454b0::sub_018454b0(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_018454b0 *)(this))->sub_0181bba0(param_2, param_3);
  *param_1 = (undefined4)((&g_023e5fb8));
  return param_1;
}

struct C_018454d0 {
    void sub_018454d0();
};

int sub_0181b5f0(void);
// @baa 0x018454d0
void C_018454d0::sub_018454d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023e5fb8);
  sub_0181b5f0();
  return;
}

struct C_01845520 {
    undefined4 * sub_01845520(undefined4, undefined4);
    int sub_0181bba0(int, int);
};

extern undefined4 g_023e5fc8;
// @baa 0x01845520
undefined4 * C_01845520::sub_01845520(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01845520 *)(this))->sub_0181bba0(param_2, param_3);
  *param_1 = (undefined4)((&g_023e5fc8));
  return param_1;
}

struct C_01845540 {
    void sub_01845540();
};

// @baa 0x01845540
void C_01845540::sub_01845540(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023e5fc8);
  sub_0181b5f0();
  return;
}

struct C_018455b0 {
    undefined4 * sub_018455b0(undefined4, undefined4);
    int sub_0181bd50(int, int);
};

extern undefined4 g_023e5fd8;
// @baa 0x018455b0
undefined4 * C_018455b0::sub_018455b0(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_018455b0 *)(this))->sub_0181bd50(param_2, param_3);
  *param_1 = (undefined4)((&g_023e5fd8));
  return param_1;
}

struct C_018455d0 {
    void sub_018455d0();
};

int sub_0181b640(void);
// @baa 0x018455d0
void C_018455d0::sub_018455d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023e5fd8);
  sub_0181b640();
  return;
}

struct C_01845620 {
    undefined4 * sub_01845620(undefined4, undefined4);
    int sub_0181bd00(int, int);
};

extern undefined4 g_023e5fe8;
// @baa 0x01845620
undefined4 * C_01845620::sub_01845620(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01845620 *)(this))->sub_0181bd00(param_2, param_3);
  *param_1 = (undefined4)((&g_023e5fe8));
  return param_1;
}

struct C_01845640 {
    void sub_01845640();
};

int sub_0181b630(void);
// @baa 0x01845640
void C_01845640::sub_01845640(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023e5fe8);
  sub_0181b630();
  return;
}

struct C_01845650 { void sub_01819000(int); C_01845650 *sub_01845650(int); };

// @baa 0x01845650
C_01845650 *C_01845650::sub_01845650(int a) { sub_01819000(a); return this; }

struct C_018456c0 {
    undefined4 * sub_018456c0(undefined4, undefined4);
    int sub_0181bdf0(int, int);
};

extern undefined4 g_023e5ff8;
// @baa 0x018456c0
undefined4 * C_018456c0::sub_018456c0(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_018456c0 *)(this))->sub_0181bdf0(param_2, param_3);
  *param_1 = (undefined4)((&g_023e5ff8));
  return param_1;
}

struct C_018456e0 {
    void sub_018456e0();
};

int sub_0181b650(void);
// @baa 0x018456e0
void C_018456e0::sub_018456e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023e5ff8);
  sub_0181b650();
  return;
}

struct C_018456f0 { void sub_0181a770(int); C_018456f0 *sub_018456f0(int); };

// @baa 0x018456f0
C_018456f0 *C_018456f0::sub_018456f0(int a) { sub_0181a770(a); return this; }

struct C_01845780 {
    undefined4 * sub_01845780(undefined4, undefined4);
    int sub_0181bea0(int, int);
};

extern undefined4 g_023e6008;
// @baa 0x01845780
undefined4 * C_01845780::sub_01845780(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01845780 *)(this))->sub_0181bea0(param_2, param_3);
  *param_1 = (undefined4)((&g_023e6008));
  return param_1;
}

struct C_018457a0 {
    void sub_018457a0();
};

int sub_0181b660(void);
// @baa 0x018457a0
void C_018457a0::sub_018457a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023e6008);
  sub_0181b660();
  return;
}

struct C_018457b0 { void sub_0181a7d0(int); C_018457b0 *sub_018457b0(int); };

// @baa 0x018457b0
C_018457b0 *C_018457b0::sub_018457b0(int a) { sub_0181a7d0(a); return this; }

struct FCDTransform {
    BYTE sub_01845820(int arg1);
};

// @baa 0x01845820
BYTE FCDTransform::sub_01845820(int arg1) {
    return 0;
}

struct M_01845870 { void sub_01817f00(); };

struct C_01845870 { char pad[56]; M_01845870 m; void sub_01845870(); };

// @baa 0x01845870
void C_01845870::sub_01845870() { m.sub_01817f00(); }

struct M_01845880 { void sub_01817860(); };

struct C_01845880 { char pad[56]; M_01845880 m; void sub_01845880(); };

// @baa 0x01845880
void C_01845880::sub_01845880() { m.sub_01817860(); }

struct M_018458b0 { void sub_01817f00(); };

struct C_018458b0 { char pad[56]; M_018458b0 m; void sub_018458b0(); };

// @baa 0x018458b0
void C_018458b0::sub_018458b0() { m.sub_01817f00(); }

struct M_018458c0 { void sub_01817860(); };

struct C_018458c0 { char pad[56]; M_018458c0 m; void sub_018458c0(); };

// @baa 0x018458c0
void C_018458c0::sub_018458c0() { m.sub_01817860(); }

struct M_018458f0 { void sub_01817f00(); };

struct C_018458f0 { char pad[56]; M_018458f0 m; void sub_018458f0(); };

// @baa 0x018458f0
void C_018458f0::sub_018458f0() { m.sub_01817f00(); }

struct M_01845900 { void sub_01817860(); };

struct C_01845900 { char pad[56]; M_01845900 m; void sub_01845900(); };

// @baa 0x01845900
void C_01845900::sub_01845900() { m.sub_01817860(); }

struct M_01845930 { void sub_01817f00(); };

struct C_01845930 { char pad[56]; M_01845930 m; void sub_01845930(); };

// @baa 0x01845930
void C_01845930::sub_01845930() { m.sub_01817f00(); }

struct M_01845940 { void sub_01817860(); };

struct C_01845940 { char pad[56]; M_01845940 m; void sub_01845940(); };

// @baa 0x01845940
void C_01845940::sub_01845940() { m.sub_01817860(); }

struct M_01845970 { void sub_01817f00(); };

struct C_01845970 { char pad[56]; M_01845970 m; void sub_01845970(); };

// @baa 0x01845970
void C_01845970::sub_01845970() { m.sub_01817f00(); }

struct M_01845980 { void sub_01817860(); };

struct C_01845980 { char pad[56]; M_01845980 m; void sub_01845980(); };

// @baa 0x01845980
void C_01845980::sub_01845980() { m.sub_01817860(); }

struct M_018459b0 { void sub_01817f00(); };

struct C_018459b0 { char pad[56]; M_018459b0 m; void sub_018459b0(); };

// @baa 0x018459b0
void C_018459b0::sub_018459b0() { m.sub_01817f00(); }

struct M_018459c0 { void sub_01817860(); };

struct C_018459c0 { char pad[56]; M_018459c0 m; void sub_018459c0(); };

// @baa 0x018459c0
void C_018459c0::sub_018459c0() { m.sub_01817860(); }

struct A_01847280 { virtual void sub_018472d0(); char pad[32]; };

struct B_01847280 { virtual void sub_018472d0(); };

struct C_01847280 : A_01847280, B_01847280 { virtual void sub_018472d0(); C_01847280(); };

C_01847280::C_01847280() {}

// @baa 0x01847280
void C_01847280::sub_018472d0() {}

struct T {
    unsigned int sub_018529d0();
};

struct S {
    char pad[0x34];
    T* member;
    unsigned int sub_0184a940();
};

// @baa 0x0184a940
unsigned int S::sub_0184a940()
{
    return member->sub_018529d0();
}

struct C_0184a950 {
    char pad[0x34];
    C_0184a950 *field_34;
    void sub_01852f10(int arg1);
    void sub_0184a950(int arg1);
};

// @baa 0x0184a950
void C_0184a950::sub_0184a950(int arg1)
{
    ((C_0184a950 *)this->field_34)->sub_01852f10(arg1);
}

struct S_0184a960 {
    void sub_01852d50(int a);
};

struct C_0184a960 {
    char pad[0x34];
    S_0184a960* f;
    void sub_0184a960(int a);
};

// @baa 0x0184a960
void C_0184a960::sub_0184a960(int a) {
    f->sub_01852d50(a);
}

struct C_0184b270 {
    void sub_0184b270();
    int sub_018158b0(int);
};

// @baa 0x0184b270
void C_0184b270::sub_0184b270(void)
{
    int param_1 = (int)this;
  ((C_0184b270 *)(this))->sub_018158b0(*(undefined4 *)(param_1 + 8));
  return;
}

struct A_0184b2c0 { virtual void sub_0184b320(); char pad[32]; };

struct B_0184b2c0 { virtual void sub_0184b320(); };

struct C_0184b2c0 : A_0184b2c0, B_0184b2c0 { virtual void sub_0184b320(); C_0184b2c0(); };

C_0184b2c0::C_0184b2c0() {}

// @baa 0x0184b2c0
void C_0184b2c0::sub_0184b320() {}

struct C_0184f140 {
    undefined4 sub_0184f140();
};

// @baa 0x0184f140
undefined4 C_0184f140::sub_0184f140(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

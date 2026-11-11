// PrimitiveSceneInfo.cpp: 38 functions
// Placed here by: neighbours 38.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_00aca3f0(); };

// @baa 0x00aca3f0
void C::sub_00aca3f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00ad1ce0 {
    void sub_00ad1ce0(int);
    int sub_00abaeb0(int, int, int);
};

// @baa 0x00ad1ce0
void C_00ad1ce0::sub_00ad1ce0(int param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x3c4) = 0;
  if (*(int *)(param_1 + 0x3c8) != param_2) {
    *(int *)(param_1 + 0x3c8) = param_2;
    ((C_00ad1ce0 *)(this))->sub_00abaeb0(0, param_2, 0x3c);
  }
  return;
}

struct C_00adeee0 {
    void sub_00adeee0();
};

// @baa 0x00adeee0
void C_00adeee0::sub_00adeee0(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  return;
}

struct S_00adfbc0 { int sub_00add020(); };

struct C_00adfbc0 { int a; C_00adfbc0(S_00adfbc0 *); };

// @baa 0x00adfbc0
C_00adfbc0::C_00adfbc0(S_00adfbc0 *s) : a(s->sub_00add020()) {}

struct S_00adfbe0 { int sub_00add080(); };

struct C_00adfbe0 { int a; C_00adfbe0(S_00adfbe0 *); };

// @baa 0x00adfbe0
C_00adfbe0::C_00adfbe0(S_00adfbe0 *s) : a(s->sub_00add080()) {}

struct S_00adfc00 { int sub_00add0e0(); };

struct C_00adfc00 { int a; C_00adfc00(S_00adfc00 *); };

// @baa 0x00adfc00
C_00adfc00::C_00adfc00(S_00adfc00 *s) : a(s->sub_00add0e0()) {}

struct S_00adfc20 { int sub_00add140(); };

struct C_00adfc20 { int a; C_00adfc20(S_00adfc20 *); };

// @baa 0x00adfc20
C_00adfc20::C_00adfc20(S_00adfc20 *s) : a(s->sub_00add140()) {}

struct S_00adfc40 { int sub_00add1a0(); };

struct C_00adfc40 { int a; C_00adfc40(S_00adfc40 *); };

// @baa 0x00adfc40
C_00adfc40::C_00adfc40(S_00adfc40 *s) : a(s->sub_00add1a0()) {}

struct S_00adfc60 { int sub_00add200(); };

struct C_00adfc60 { int a; C_00adfc60(S_00adfc60 *); };

// @baa 0x00adfc60
C_00adfc60::C_00adfc60(S_00adfc60 *s) : a(s->sub_00add200()) {}

struct S_00adfc80 { int sub_00add260(); };

struct C_00adfc80 { int a; C_00adfc80(S_00adfc80 *); };

// @baa 0x00adfc80
C_00adfc80::C_00adfc80(S_00adfc80 *s) : a(s->sub_00add260()) {}

struct S_00adfca0 { int sub_00add2c0(); };

struct C_00adfca0 { int a; C_00adfca0(S_00adfca0 *); };

// @baa 0x00adfca0
C_00adfca0::C_00adfca0(S_00adfca0 *s) : a(s->sub_00add2c0()) {}

struct S_00adfcc0 { int sub_00add320(); };

struct C_00adfcc0 { int a; C_00adfcc0(S_00adfcc0 *); };

// @baa 0x00adfcc0
C_00adfcc0::C_00adfcc0(S_00adfcc0 *s) : a(s->sub_00add320()) {}

struct S_00adfce0 { int sub_00add380(); };

struct C_00adfce0 { int a; C_00adfce0(S_00adfce0 *); };

// @baa 0x00adfce0
C_00adfce0::C_00adfce0(S_00adfce0 *s) : a(s->sub_00add380()) {}

struct S_00adfd00 { int sub_00add3e0(); };

struct C_00adfd00 { int a; C_00adfd00(S_00adfd00 *); };

// @baa 0x00adfd00
C_00adfd00::C_00adfd00(S_00adfd00 *s) : a(s->sub_00add3e0()) {}

struct S_00adfd20 { int sub_00add440(); };

struct C_00adfd20 { int a; C_00adfd20(S_00adfd20 *); };

// @baa 0x00adfd20
C_00adfd20::C_00adfd20(S_00adfd20 *s) : a(s->sub_00add440()) {}

struct S_00adfd40 { int sub_00add4a0(); };

struct C_00adfd40 { int a; C_00adfd40(S_00adfd40 *); };

// @baa 0x00adfd40
C_00adfd40::C_00adfd40(S_00adfd40 *s) : a(s->sub_00add4a0()) {}

struct S_00adfd60 { int sub_00add500(); };

struct C_00adfd60 { int a; C_00adfd60(S_00adfd60 *); };

// @baa 0x00adfd60
C_00adfd60::C_00adfd60(S_00adfd60 *s) : a(s->sub_00add500()) {}

struct S_00adfd80 { int sub_00add560(); };

struct C_00adfd80 { int a; C_00adfd80(S_00adfd80 *); };

// @baa 0x00adfd80
C_00adfd80::C_00adfd80(S_00adfd80 *s) : a(s->sub_00add560()) {}

struct S_00adfda0 { int sub_00add5c0(); };

struct C_00adfda0 { int a; C_00adfda0(S_00adfda0 *); };

// @baa 0x00adfda0
C_00adfda0::C_00adfda0(S_00adfda0 *s) : a(s->sub_00add5c0()) {}

struct S_00adfdc0 { int sub_00add620(); };

struct C_00adfdc0 { int a; C_00adfdc0(S_00adfdc0 *); };

// @baa 0x00adfdc0
C_00adfdc0::C_00adfdc0(S_00adfdc0 *s) : a(s->sub_00add620()) {}

struct S_00adfde0 { int sub_00add680(); };

struct C_00adfde0 { int a; C_00adfde0(S_00adfde0 *); };

// @baa 0x00adfde0
C_00adfde0::C_00adfde0(S_00adfde0 *s) : a(s->sub_00add680()) {}

struct S_00adfe00 { int sub_00add6e0(); };

struct C_00adfe00 { int a; C_00adfe00(S_00adfe00 *); };

// @baa 0x00adfe00
C_00adfe00::C_00adfe00(S_00adfe00 *s) : a(s->sub_00add6e0()) {}

struct S_00adfe20 { int sub_00add740(); };

struct C_00adfe20 { int a; C_00adfe20(S_00adfe20 *); };

// @baa 0x00adfe20
C_00adfe20::C_00adfe20(S_00adfe20 *s) : a(s->sub_00add740()) {}

struct S_00adfe40 { int sub_00add7a0(); };

struct C_00adfe40 { int a; C_00adfe40(S_00adfe40 *); };

// @baa 0x00adfe40
C_00adfe40::C_00adfe40(S_00adfe40 *s) : a(s->sub_00add7a0()) {}

struct S_00adfe60 { int sub_00add800(); };

struct C_00adfe60 { int a; C_00adfe60(S_00adfe60 *); };

// @baa 0x00adfe60
C_00adfe60::C_00adfe60(S_00adfe60 *s) : a(s->sub_00add800()) {}

struct S_00adfe80 { int sub_00add860(); };

struct C_00adfe80 { int a; C_00adfe80(S_00adfe80 *); };

// @baa 0x00adfe80
C_00adfe80::C_00adfe80(S_00adfe80 *s) : a(s->sub_00add860()) {}

struct S_00adfea0 { int sub_00add8c0(); };

struct C_00adfea0 { int a; C_00adfea0(S_00adfea0 *); };

// @baa 0x00adfea0
C_00adfea0::C_00adfea0(S_00adfea0 *s) : a(s->sub_00add8c0()) {}

struct S_00adfec0 { int sub_00add920(); };

struct C_00adfec0 { int a; C_00adfec0(S_00adfec0 *); };

// @baa 0x00adfec0
C_00adfec0::C_00adfec0(S_00adfec0 *s) : a(s->sub_00add920()) {}

struct S_00adfee0 { int sub_00add980(); };

struct C_00adfee0 { int a; C_00adfee0(S_00adfee0 *); };

// @baa 0x00adfee0
C_00adfee0::C_00adfee0(S_00adfee0 *s) : a(s->sub_00add980()) {}

struct S_00adff00 { int sub_00add9e0(); };

struct C_00adff00 { int a; C_00adff00(S_00adff00 *); };

// @baa 0x00adff00
C_00adff00::C_00adff00(S_00adff00 *s) : a(s->sub_00add9e0()) {}

struct S_00adff20 { int sub_00adda40(); };

struct C_00adff20 { int a; C_00adff20(S_00adff20 *); };

// @baa 0x00adff20
C_00adff20::C_00adff20(S_00adff20 *s) : a(s->sub_00adda40()) {}

struct S_00adff40 { int sub_00addaa0(); };

struct C_00adff40 { int a; C_00adff40(S_00adff40 *); };

// @baa 0x00adff40
C_00adff40::C_00adff40(S_00adff40 *s) : a(s->sub_00addaa0()) {}

struct S_00adff60 { int sub_00addb00(); };

struct C_00adff60 { int a; C_00adff60(S_00adff60 *); };

// @baa 0x00adff60
C_00adff60::C_00adff60(S_00adff60 *s) : a(s->sub_00addb00()) {}

struct S_00adff80 { int sub_00addb60(); };

struct C_00adff80 { int a; C_00adff80(S_00adff80 *); };

// @baa 0x00adff80
C_00adff80::C_00adff80(S_00adff80 *s) : a(s->sub_00addb60()) {}

struct S_00adffa0 { int sub_00addbc0(); };

struct C_00adffa0 { int a; C_00adffa0(S_00adffa0 *); };

// @baa 0x00adffa0
C_00adffa0::C_00adffa0(S_00adffa0 *s) : a(s->sub_00addbc0()) {}

struct S_00ae0020 { int sub_00addc20(); };

struct C_00ae0020 { int a; C_00ae0020(S_00ae0020 *); };

// @baa 0x00ae0020
C_00ae0020::C_00ae0020(S_00ae0020 *s) : a(s->sub_00addc20()) {}

struct S_00ae0040 { int sub_00addc80(); };

struct C_00ae0040 { int a; C_00ae0040(S_00ae0040 *); };

// @baa 0x00ae0040
C_00ae0040::C_00ae0040(S_00ae0040 *s) : a(s->sub_00addc80()) {}

struct S_00ae0060 { int sub_00addce0(); };

struct C_00ae0060 { int a; C_00ae0060(S_00ae0060 *); };

// @baa 0x00ae0060
C_00ae0060::C_00ae0060(S_00ae0060 *s) : a(s->sub_00addce0()) {}

// FArchiveXML.cpp (part 1 of 4): 79 functions
// Placed here by: neighbours 77, class 1, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x0188ec30
BYTE __stdcall sub_0188ec30(void *arg)
{
    (void)arg;
    return 0;
}

struct C {
    bool sub_0188ed20();
};

// @baa 0x0188ed20
bool C::sub_0188ed20(void)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 4) == 0;
}

struct C_0188ed90 {
    bool sub_0188ed90(int *);
};

// @baa 0x0188ed90
bool C_0188ed90::sub_0188ed90(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 != *param_1;
}

struct C_0188eda0 {
    int sub_0188eda0();
};

// @baa 0x0188eda0
int C_0188eda0::sub_0188eda0(void)
{
    int * param_1 = (int *)this;
  return *param_1 + 0x10;
}

struct C_0188edb0 {
    bool sub_0188edb0(int *);
};

// @baa 0x0188edb0
bool C_0188edb0::sub_0188edb0(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 != *param_1;
}

struct C_0188edc0 {
    int sub_0188edc0();
};

// @baa 0x0188edc0
int C_0188edc0::sub_0188edc0(void)
{
    int * param_1 = (int *)this;
  return *param_1 + 0x10;
}

struct C_0188ee00 { int a, b, c; C_0188ee00(); };

// @baa 0x0188ee00
C_0188ee00::C_0188ee00() : a(0), b(0), c(0) {}

struct C_0188ef60 { int a; C_0188ef60(int); };

// @baa 0x0188ef60
C_0188ef60::C_0188ef60(int x) : a(x) {}

struct C_0188ef70 { int a; C_0188ef70(int); };

// @baa 0x0188ef70
C_0188ef70::C_0188ef70(int x) : a(x) {}

struct C_0188efe0 { int a; C_0188efe0(int); };

// @baa 0x0188efe0
C_0188efe0::C_0188efe0(int x) : a(x) {}

struct C_0188f170 {
    bool sub_0188f170(int *);
};

// @baa 0x0188f170
bool C_0188f170::sub_0188f170(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 != *param_1;
}

struct C_0188f180 {
    int sub_0188f180();
};

// @baa 0x0188f180
int C_0188f180::sub_0188f180(void)
{
    int * param_1 = (int *)this;
  return *param_1 + 0x10;
}

struct C_0188f380 { int a; C_0188f380(int); };

// @baa 0x0188f380
C_0188f380::C_0188f380(int x) : a(x) {}

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_0188f580();
};

// @baa 0x0188f580
S *S::sub_0188f580()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_0188f590 { int a, b; C_0188f590(const C_0188f590 &); };

// @baa 0x0188f590
C_0188f590::C_0188f590(const C_0188f590 &o) : a(o.a), b(o.b) {}

struct S_0188f5e0 {
    INT Unk00;
    INT Unk04;
    S_0188f5e0 *sub_0188f5e0();
};

// @baa 0x0188f5e0
S_0188f5e0 *S_0188f5e0::sub_0188f5e0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct S_0188f5f0 {
    INT Unk00;
    INT Unk04;
    S_0188f5f0 *sub_0188f5f0();
};

// @baa 0x0188f5f0
S_0188f5f0 *S_0188f5f0::sub_0188f5f0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct S_0188f610 {
    INT Unk00;
    INT Unk04;
    S_0188f610 *sub_0188f610();
};

// @baa 0x0188f610
S_0188f610 *S_0188f610::sub_0188f610()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_0188f620 { int a, b, c; C_0188f620(); };

// @baa 0x0188f620
C_0188f620::C_0188f620() : a(0), b(0), c(0) {}

struct FCPArchive {
    unsigned char __thiscall sub_0188f6e0(uint arg1);
};

// @baa 0x0188f6e0
unsigned char FCPArchive::sub_0188f6e0(uint arg1) { return 0; }

struct C_0188f820 {
    int v;
    int *sub_0188f820(int *a);
};

// @baa 0x0188f820
int *C_0188f820::sub_0188f820(int *a) {
    *a = v;
    return a;
}

struct C_0188f890 {
    int v;
    int *sub_0188f890(int *a);
};

// @baa 0x0188f890
int *C_0188f890::sub_0188f890(int *a) {
    *a = v;
    return a;
}

struct C_0188f940 {
    int v;
    int *sub_0188f940(int *a);
};

// @baa 0x0188f940
int *C_0188f940::sub_0188f940(int *a) {
    *a = v;
    return a;
}

struct C_0188f990 {
    int v;
    int *sub_0188f990(int *a);
};

// @baa 0x0188f990
int *C_0188f990::sub_0188f990(int *a) {
    *a = v;
    return a;
}

struct M_0188ff50 { void sub_0188fb40(); };

struct C_0188ff50 { char pad[4]; M_0188ff50 m; void sub_0188ff50(); };

// @baa 0x0188ff50
void C_0188ff50::sub_0188ff50() { m.sub_0188fb40(); }

struct C_0188ffc0 { int a, b, c; C_0188ffc0(); };

// @baa 0x0188ffc0
C_0188ffc0::C_0188ffc0() : a(0), b(0), c(0) {}

struct C_0188ffd0 { int a, b, c; C_0188ffd0(); };

// @baa 0x0188ffd0
C_0188ffd0::C_0188ffd0() : a(0), b(0), c(0) {}

struct C_0188ffe0 { int a, b, c; C_0188ffe0(); };

// @baa 0x0188ffe0
C_0188ffe0::C_0188ffe0() : a(0), b(0), c(0) {}

struct C_0188fff0 { int a, b, c; C_0188fff0(); };

// @baa 0x0188fff0
C_0188fff0::C_0188fff0() : a(0), b(0), c(0) {}

struct C_01890000 { int a, b, c; C_01890000(); };

// @baa 0x01890000
C_01890000::C_01890000() : a(0), b(0), c(0) {}

struct C_01890010 { int a, b, c; C_01890010(); };

// @baa 0x01890010
C_01890010::C_01890010() : a(0), b(0), c(0) {}

struct C_018909c0 {
    void sub_018909c0(undefined4);
    int sub_0188fda0(int, int);
};

// @baa 0x018909c0
void C_018909c0::sub_018909c0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_018909c0 *)(this))->sub_0188fda0(*(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 8, param_2);
  return;
}

struct M_01891720 { void sub_01816150(); };

struct C_01891720 { char pad[4]; M_01891720 m; void sub_01891720(); };

// @baa 0x01891720
void C_01891720::sub_01891720() { m.sub_01816150(); }

struct S16 {
    INT f00;
    INT f04;
    INT f08;
    INT f0c;
    S16* sub_01891730();
};

// @baa 0x01891730
S16* S16::sub_01891730()
{
    f00 = 0;
    f04 = 0;
    f08 = 0;
    f0c = 0;
    return this;
}

struct S16_01891780 {
    INT f00;
    INT f04;
    INT f08;
    INT f0c;
    S16_01891780* sub_01891780();
};

// @baa 0x01891780
S16_01891780* S16_01891780::sub_01891780()
{
    f00 = 0;
    f04 = 0;
    f08 = 0;
    f0c = 0;
    return this;
}

struct S16_018917b0 {
    INT f00;
    INT f04;
    INT f08;
    INT f0c;
    S16_018917b0* sub_018917b0();
};

// @baa 0x018917b0
S16_018917b0* S16_018917b0::sub_018917b0()
{
    f00 = 0;
    f04 = 0;
    f08 = 0;
    f0c = 0;
    return this;
}

struct S16_018917c0 {
    INT f00;
    INT f04;
    INT f08;
    INT f0c;
    S16_018917c0* sub_018917c0();
};

// @baa 0x018917c0
S16_018917c0* S16_018917c0::sub_018917c0()
{
    f00 = 0;
    f04 = 0;
    f08 = 0;
    f0c = 0;
    return this;
}

struct S16_018917d0 {
    INT f00;
    INT f04;
    INT f08;
    INT f0c;
    S16_018917d0* sub_018917d0();
};

// @baa 0x018917d0
S16_018917d0* S16_018917d0::sub_018917d0()
{
    f00 = 0;
    f04 = 0;
    f08 = 0;
    f0c = 0;
    return this;
}

struct S16_018917e0 {
    INT f00;
    INT f04;
    INT f08;
    INT f0c;
    S16_018917e0* sub_018917e0();
};

// @baa 0x018917e0
S16_018917e0* S16_018917e0::sub_018917e0()
{
    f00 = 0;
    f04 = 0;
    f08 = 0;
    f0c = 0;
    return this;
}

struct C_018917f0 { int a, b, c; C_018917f0(); };

// @baa 0x018917f0
C_018917f0::C_018917f0() : a(0), b(0), c(0) {}

struct C_018923a0 {
    void sub_018923a0(undefined4);
    int sub_01890a80(int, int);
};

// @baa 0x018923a0
void C_018923a0::sub_018923a0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_018923a0 *)(this))->sub_01890a80(*(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 8, param_2);
  return;
}

struct S16_018935d0 {
    INT f00;
    INT f04;
    INT f08;
    INT f0c;
    S16_018935d0* sub_018935d0();
};

// @baa 0x018935d0
S16_018935d0* S16_018935d0::sub_018935d0()
{
    f00 = 0;
    f04 = 0;
    f08 = 0;
    f0c = 0;
    return this;
}

struct C_018954e0 { void sub_01892150(int); C_018954e0 *sub_018954e0(int); };

// @baa 0x018954e0
C_018954e0 *C_018954e0::sub_018954e0(int a) { sub_01892150(a); return this; }

struct C_01895500 { void sub_01892240(int); C_01895500 *sub_01895500(int); };

// @baa 0x01895500
C_01895500 *C_01895500::sub_01895500(int a) { sub_01892240(a); return this; }

typedef uint size_t;

struct C_01895520 {
    undefined4 * sub_01895520(undefined4 *);
    int sub_00ec79a0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x01895520
undefined4 * C_01895520::sub_01895520(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  if (param_1 != param_2) {
    ((C_01895520 *)(this))->sub_00ec79a0(param_2[1]);
    param_1[1] = *param_1;
    sub_01a375f0((void *)param_1[2],(void *)param_2[2],param_2[1]);
  }
  return param_1;
}

struct C_01895610 {
    undefined4 * sub_01895610(undefined4 *);
    int sub_00ec79a0(int);
};

// @baa 0x01895610
undefined4 * C_01895610::sub_01895610(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  if (param_1 != param_2) {
    ((C_01895610 *)(this))->sub_00ec79a0(param_2[1]);
    param_1[1] = *param_1;
    sub_01a375f0((void *)param_1[2],(void *)param_2[2],param_2[1]);
  }
  return param_1;
}

struct C_018956a0 {
    undefined4 * sub_018956a0(undefined4 *);
    int sub_00ec79a0(int);
};

// @baa 0x018956a0
undefined4 * C_018956a0::sub_018956a0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  if (param_1 != param_2) {
    ((C_018956a0 *)(this))->sub_00ec79a0(param_2[1]);
    param_1[1] = *param_1;
    sub_01a375f0((void *)param_1[2],(void *)param_2[2],param_2[1]);
  }
  return param_1;
}

struct C_018956e0 {
    undefined4 * sub_018956e0(undefined4 *);
    int sub_00ec79a0(int);
};

// @baa 0x018956e0
undefined4 * C_018956e0::sub_018956e0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  if (param_1 != param_2) {
    ((C_018956e0 *)(this))->sub_00ec79a0(param_2[1]);
    param_1[1] = *param_1;
    sub_01a375f0((void *)param_1[2],(void *)param_2[2],param_2[1]);
  }
  return param_1;
}

struct C_01895720 {
    undefined4 * sub_01895720(undefined4 *);
    int sub_00ec79a0(int);
};

// @baa 0x01895720
undefined4 * C_01895720::sub_01895720(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  if (param_1 != param_2) {
    ((C_01895720 *)(this))->sub_00ec79a0(param_2[1]);
    param_1[1] = *param_1;
    sub_01a375f0((void *)param_1[2],(void *)param_2[2],param_2[1]);
  }
  return param_1;
}

struct C_01895db0 {
    undefined4 * sub_01895db0(undefined4 *);
    int sub_01895560(int);
};

// @baa 0x01895db0
undefined4 * C_01895db0::sub_01895db0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_01895db0 *)(((char *)this + 4)))->sub_01895560((int)(param_2 + 1));
  return param_1;
}

struct C_01895f60 { void sub_01895760(int); C_01895f60 *sub_01895f60(int); };

// @baa 0x01895f60
C_01895f60 *C_01895f60::sub_01895f60(int a) { sub_01895760(a); return this; }

struct C_01896d70 {
    undefined4 * sub_01896d70(undefined4 *);
    int sub_01895760(int);
};

// @baa 0x01896d70
undefined4 * C_01896d70::sub_01896d70(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_01896d70 *)(((char *)this + 4)))->sub_01895760((int)(param_2 + 1));
  return param_1;
}

struct C_01896d90 { void sub_0187feb0(int); C_01896d90 *sub_01896d90(int); };

// @baa 0x01896d90
C_01896d90 *C_01896d90::sub_01896d90(int a) { sub_0187feb0(a); return this; }

struct C_01896fe0 { void sub_018962f0(int); C_01896fe0 *sub_01896fe0(int); };

// @baa 0x01896fe0
C_01896fe0 *C_01896fe0::sub_01896fe0(int a) { sub_018962f0(a); return this; }

struct C_01897000 { void sub_01896470(int); C_01897000 *sub_01897000(int); };

// @baa 0x01897000
C_01897000 *C_01897000::sub_01897000(int a) { sub_01896470(a); return this; }

struct C_01897020 { void sub_018965d0(int); C_01897020 *sub_01897020(int); };

// @baa 0x01897020
C_01897020 *C_01897020::sub_01897020(int a) { sub_018965d0(a); return this; }

struct C_01897040 { void sub_01896750(int); C_01897040 *sub_01897040(int); };

// @baa 0x01897040
C_01897040 *C_01897040::sub_01897040(int a) { sub_01896750(a); return this; }

struct C_01897060 { void sub_018968f0(int); C_01897060 *sub_01897060(int); };

// @baa 0x01897060
C_01897060 *C_01897060::sub_01897060(int a) { sub_018968f0(a); return this; }

struct C_01897080 { void sub_01896a70(int); C_01897080 *sub_01897080(int); };

// @baa 0x01897080
C_01897080 *C_01897080::sub_01897080(int a) { sub_01896a70(a); return this; }

struct C_018970a0 { void sub_01896bf0(int); C_018970a0 *sub_018970a0(int); };

// @baa 0x018970a0
C_018970a0 *C_018970a0::sub_018970a0(int a) { sub_01896bf0(a); return this; }

struct C_018971d0 {
    undefined4 * sub_018971d0(undefined4 *);
    int sub_0187feb0(int);
};

// @baa 0x018971d0
undefined4 * C_018971d0::sub_018971d0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_018971d0 *)(((char *)this + 4)))->sub_0187feb0((int)(param_2 + 1));
  return param_1;
}

struct C_018971f0 { void sub_01896db0(int); C_018971f0 *sub_018971f0(int); };

// @baa 0x018971f0
C_018971f0 *C_018971f0::sub_018971f0(int a) { sub_01896db0(a); return this; }

struct C_018974d0 { void sub_018970c0(int); C_018974d0 *sub_018974d0(int); };

// @baa 0x018974d0
C_018974d0 *C_018974d0::sub_018974d0(int a) { sub_018970c0(a); return this; }

struct C_01897600 { void sub_01896db0(int); C_01897600 *sub_01897600(int); };

// @baa 0x01897600
C_01897600 *C_01897600::sub_01897600(int a) { sub_01896db0(a); return this; }

struct M_01897690 { void sub_01897240(); };

struct C_01897690 { char pad[4]; M_01897690 m; void sub_01897690(); };

// @baa 0x01897690
void C_01897690::sub_01897690() { m.sub_01897240(); }

struct C_018976f0 { void sub_018974f0(int); C_018976f0 *sub_018976f0(int); };

// @baa 0x018976f0
C_018976f0 *C_018976f0::sub_018976f0(int a) { sub_018974f0(a); return this; }

struct C_01897710 {
    undefined4 * sub_01897710(undefined4 *);
    int sub_01896db0(int);
};

// @baa 0x01897710
undefined4 * C_01897710::sub_01897710(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_01897710 *)(((char *)this + 4)))->sub_01896db0((int)(param_2 + 1));
  return param_1;
}

struct C_01898370 { void sub_018977d0(int); C_01898370 *sub_01898370(int); };

// @baa 0x01898370
C_01898370 *C_01898370::sub_01898370(int a) { sub_018977d0(a); return this; }

struct C_01898390 {
    undefined4 * sub_01898390();
    int sub_01898110();
};

// @baa 0x01898390
undefined4 * C_01898390::sub_01898390(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  ((C_01898390 *)(((char *)this + 4)))->sub_01898110();
  return param_1;
}

struct C_018984d0 {
    undefined4 sub_018984d0(int);
    int sub_018974f0(int);
    int sub_018962f0(int);
    int sub_01896470(int);
    int sub_018965d0(int);
    int sub_01896750(int);
    int sub_018970c0(int);
    int sub_018977d0(int);
    int sub_018968f0(int);
    int sub_01896a70(int);
    int sub_01892150(int);
    int sub_01896bf0(int);
    int sub_01892240(int);
};

// @baa 0x018984d0
undefined4 C_018984d0::sub_018984d0(int param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_018984d0 *)(this))->sub_018974f0(param_2);
  ((C_018984d0 *)(((char *)this + 8)))->sub_018962f0(param_2 + 8);
  ((C_018984d0 *)(((char *)this + 0x10)))->sub_01896470(param_2 + 0x10);
  ((C_018984d0 *)(((char *)this + 0x18)))->sub_018965d0(param_2 + 0x18);
  ((C_018984d0 *)(((char *)this + 0x20)))->sub_01896750(param_2 + 0x20);
  ((C_018984d0 *)(((char *)this + 0x28)))->sub_018970c0(param_2 + 0x28);
  ((C_018984d0 *)(((char *)this + 0x30)))->sub_018977d0(param_2 + 0x30);
  ((C_018984d0 *)(((char *)this + 0x38)))->sub_018968f0(param_2 + 0x38);
  ((C_018984d0 *)(((char *)this + 0x40)))->sub_01896a70(param_2 + 0x40);
  ((C_018984d0 *)(((char *)this + 0x48)))->sub_01892150(param_2 + 0x48);
  ((C_018984d0 *)(((char *)this + 0x50)))->sub_01896bf0(param_2 + 0x50);
  ((C_018984d0 *)(((char *)this + 0x58)))->sub_01892240(param_2 + 0x58);
  return param_1;
}

struct C_018be2a0 { int a; C_018be2a0(int); };

// @baa 0x018be2a0
C_018be2a0::C_018be2a0(int x) : a(x) {}

struct C_018be370 {
    int v;
    int *sub_018be370(int *a);
};

// @baa 0x018be370
int *C_018be370::sub_018be370(int *a) {
    *a = v;
    return a;
}

struct C_018bfa80 {
    undefined4 sub_018bfa80(undefined4);
    int sub_0184b340(int);
};

// @baa 0x018bfa80
undefined4 C_018bfa80::sub_018bfa80(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_018bfa80 *)(((char *)this + 4)))->sub_0184b340(param_2);
  return param_1;
}

struct C_018bfb70 {
    bool sub_018bfb70(int *);
};

// @baa 0x018bfb70
bool C_018bfb70::sub_018bfb70(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 != *param_1;
}

struct C_018bfb80 {
    int sub_018bfb80();
};

// @baa 0x018bfb80
int C_018bfb80::sub_018bfb80(void)
{
    int * param_1 = (int *)this;
  return *param_1 + 0x10;
}

struct C_018bfb90 { int a; C_018bfb90(int); };

// @baa 0x018bfb90
C_018bfb90::C_018bfb90(int x) : a(x) {}

struct C_018bfd10 {
    undefined4 sub_018bfd10(undefined4);
    int sub_0184b340(int);
};

// @baa 0x018bfd10
undefined4 C_018bfd10::sub_018bfd10(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_018bfd10 *)(((char *)this + 4)))->sub_0184b340(param_2);
  return param_1;
}

struct C_018bfd30 {
    void sub_018bfd30(undefined4);
    int sub_0184b340(int);
};

// @baa 0x018bfd30
void C_018bfd30::sub_018bfd30(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_018bfd30 *)(((char *)this + 0x34)))->sub_0184b340(param_2);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  return;
}

struct C_01bf93b0 {
    void sub_01bf93b0();
    int sub_01bf91f0();
};

void sub_01826080(void *);
int sub_01c005d0(void);
// @baa 0x01bf93b0
void C_01bf93b0::sub_01bf93b0(void)
{
    int param_1 = (int)this;
  ((C_01bf93b0 *)(this))->sub_01bf91f0();
  sub_01c005d0();
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 0xc));
  }
  return;
}

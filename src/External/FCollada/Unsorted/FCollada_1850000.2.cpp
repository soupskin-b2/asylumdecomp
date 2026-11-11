// FCollada_1850000.cpp (part 2 of 19): 55 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_018517f0(undefined4);
    int sub_01851720(int, int);
};

// @baa 0x018517f0
void C::sub_018517f0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C *)(this))->sub_01851720(*(int *)(param_1 + 4) * 0x5c + *(int *)(param_1 + 8), param_2);
  return;
}

struct M_01851850 { void sub_0184b340(); };

struct C_01851850 { char pad[12]; M_01851850 m; void sub_01851850(); };

// @baa 0x01851850
void C_01851850::sub_01851850() { m.sub_0184b340(); }

struct Inner {
    int sub_01852d50(int arg1);
};

struct Outer {
    char pad[0x2c];
    Inner* field;
    int sub_01851880(int arg1);
};

// @baa 0x01851880
int Outer::sub_01851880(int arg1)
{
    return field->sub_01852d50(arg1);
}

struct Inner_01851890 {
    int sub_018529d0(int arg1);
};

struct Outer_01851890 {
    char pad[0x2c];
    Inner_01851890* field;
    int sub_01851890(int arg1);
};

// @baa 0x01851890
int Outer_01851890::sub_01851890(int arg1)
{
    return field->sub_018529d0(arg1);
}

struct Inner_018518a0 {
    int sub_018529d0(int arg1);
};

struct Outer_018518a0 {
    char pad[0x2c];
    Inner_018518a0* field;
    int sub_018518a0(int arg1);
};

// @baa 0x018518a0
int Outer_018518a0::sub_018518a0(int arg1)
{
    return field->sub_018529d0(arg1);
}

struct C_01851ab0 {
    void sub_01851ab0(undefined4);
    int sub_018526b0(int);
};

// @baa 0x01851ab0
void C_01851ab0::sub_01851ab0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_01851ab0 *)(((char *)this + 0x80)))->sub_018526b0(param_2);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  return;
}

typedef uint size_t;

struct C_01851d70 {
    void sub_01851d70(undefined4 *);
    int sub_00ec79a0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x01851d70
void C_01851d70::sub_01851d70(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  if (param_1 != param_2) {
    ((C_01851d70 *)(this))->sub_00ec79a0(param_2[1]);
    param_1[1] = *param_1;
    sub_01a375f0((void *)param_1[2],(void *)param_2[2],param_2[1]);
  }
  return;
}

struct C_01851e60 {
    void sub_01851e60(undefined4);
    int sub_018527c0(int);
};

// @baa 0x01851e60
void C_01851e60::sub_01851e60(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_01851e60 *)(((char *)this + 0x74)))->sub_018527c0(param_2);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  return;
}

struct C_01851f30 { int a, b, c; C_01851f30(); };

// @baa 0x01851f30
C_01851f30::C_01851f30() : a(0), b(0), c(0) {}

struct C_01852000 { int a, b, c; C_01852000(); };

// @baa 0x01852000
C_01852000::C_01852000() : a(0), b(0), c(0) {}

struct C_01852040 { int a, b, c; C_01852040(); };

// @baa 0x01852040
C_01852040::C_01852040() : a(0), b(0), c(0) {}

struct C_01852120 { int a, b, c; C_01852120(); };

// @baa 0x01852120
C_01852120::C_01852120() : a(0), b(0), c(0) {}

struct C_01852320 {
    void sub_01852320(undefined4);
    int sub_01852280(int, int);
};

// @baa 0x01852320
void C_01852320::sub_01852320(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_01852320 *)(this))->sub_01852280(*(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 8, param_2);
  return;
}

struct C_018523e0 { int a, b, c; C_018523e0(); };

// @baa 0x018523e0
C_018523e0::C_018523e0() : a(0), b(0), c(0) {}

struct C_01853230 {
    void sub_01853230(undefined4);
    int sub_01853180(int);
};

// @baa 0x01853230
void C_01853230::sub_01853230(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_01853230 *)(((char *)this + 0x2c)))->sub_01853180(param_2);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10;
  return;
}

struct C_01856d30 { int a, b, c; C_01856d30(); };

// @baa 0x01856d30
C_01856d30::C_01856d30() : a(0), b(0), c(0) {}

struct C_01857da0 { int a, b, c; C_01857da0(); };

// @baa 0x01857da0
C_01857da0::C_01857da0() : a(0), b(0), c(0) {}

struct C_01857f20 { void sub_01857e80(int); C_01857f20 *sub_01857f20(int); };

// @baa 0x01857f20
C_01857f20 *C_01857f20::sub_01857f20(int a) { sub_01857e80(a); return this; }

struct C_018584f0 {
    bool sub_018584f0(int *);
};

// @baa 0x018584f0
bool C_018584f0::sub_018584f0(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 == *param_1;
}

struct C_01858500 {
    bool sub_01858500(int *);
};

// @baa 0x01858500
bool C_01858500::sub_01858500(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 != *param_1;
}

struct C_01858510 {
    int sub_01858510();
};

// @baa 0x01858510
int C_01858510::sub_01858510(void)
{
    int * param_1 = (int *)this;
  return *param_1 + 0x10;
}

struct C_01858520 {
    bool sub_01858520(int *);
};

// @baa 0x01858520
bool C_01858520::sub_01858520(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 == *param_1;
}

struct C_01858530 {
    int sub_01858530();
};

// @baa 0x01858530
int C_01858530::sub_01858530(void)
{
    int * param_1 = (int *)this;
  return *param_1 + 0x10;
}

struct C_01858550 {
    bool sub_01858550(int *);
};

// @baa 0x01858550
bool C_01858550::sub_01858550(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 == *param_1;
}

struct C_01858560 {
    bool sub_01858560(int *);
};

// @baa 0x01858560
bool C_01858560::sub_01858560(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 != *param_1;
}

struct C_018585b0 {
    int sub_018585b0();
};

// @baa 0x018585b0
int C_018585b0::sub_018585b0(void)
{
    int * param_1 = (int *)this;
  return *param_1 + 0x10;
}

struct C_018585c0 {
    bool sub_018585c0(int *);
};

// @baa 0x018585c0
bool C_018585c0::sub_018585c0(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 != *param_1;
}

struct C_018585e0 {
    bool sub_018585e0(int *);
};

// @baa 0x018585e0
bool C_018585e0::sub_018585e0(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 == *param_1;
}

struct C_018585f0 {
    bool sub_018585f0(int *);
};

// @baa 0x018585f0
bool C_018585f0::sub_018585f0(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 != *param_1;
}

struct C_01858600 {
    int sub_01858600();
};

// @baa 0x01858600
int C_01858600::sub_01858600(void)
{
    int * param_1 = (int *)this;
  return *param_1 + 0x10;
}

struct C_01858610 {
    bool sub_01858610(int *);
};

// @baa 0x01858610
bool C_01858610::sub_01858610(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 == *param_1;
}

struct C_01858620 {
    int sub_01858620();
};

// @baa 0x01858620
int C_01858620::sub_01858620(void)
{
    int * param_1 = (int *)this;
  return *param_1 + 0x10;
}

struct C_01858870 { int a; C_01858870(int); };

// @baa 0x01858870
C_01858870::C_01858870(int x) : a(x) {}

struct C_01858890 { int a; C_01858890(int); };

// @baa 0x01858890
C_01858890::C_01858890(int x) : a(x) {}

struct C_018588a0 { int a; C_018588a0(int); };

// @baa 0x018588a0
C_018588a0::C_018588a0(int x) : a(x) {}

struct C_018588c0 { int a; C_018588c0(int); };

// @baa 0x018588c0
C_018588c0::C_018588c0(int x) : a(x) {}

struct C_018588d0 { int a; C_018588d0(int); };

// @baa 0x018588d0
C_018588d0::C_018588d0(int x) : a(x) {}

struct C_018588f0 { int a; C_018588f0(int); };

// @baa 0x018588f0
C_018588f0::C_018588f0(int x) : a(x) {}

struct C_01858900 {
    int v;
    int *sub_01858900(int *a);
};

// @baa 0x01858900
int *C_01858900::sub_01858900(int *a) {
    *a = v;
    return a;
}

struct C_01858910 {
    int v;
    int *sub_01858910(int *a);
};

// @baa 0x01858910
int *C_01858910::sub_01858910(int *a) {
    *a = v;
    return a;
}

struct C_01858920 {
    int v;
    int *sub_01858920(int *a);
};

// @baa 0x01858920
int *C_01858920::sub_01858920(int *a) {
    *a = v;
    return a;
}

struct C_01858930 {
    int v;
    int *sub_01858930(int *a);
};

// @baa 0x01858930
int *C_01858930::sub_01858930(int *a) {
    *a = v;
    return a;
}

struct C_01858940 {
    int v;
    int *sub_01858940(int *a);
};

// @baa 0x01858940
int *C_01858940::sub_01858940(int *a) {
    *a = v;
    return a;
}

struct C_01858950 {
    int v;
    int *sub_01858950(int *a);
};

// @baa 0x01858950
int *C_01858950::sub_01858950(int *a) {
    *a = v;
    return a;
}

struct C_018590c0 { void sub_01858f80(int); C_018590c0 *sub_018590c0(int); };

// @baa 0x018590c0
C_018590c0 *C_018590c0::sub_018590c0(int a) { sub_01858f80(a); return this; }

struct C_01859790 {
    undefined4 * sub_01859790();
    int sub_018590e0();
};

// @baa 0x01859790
undefined4 * C_01859790::sub_01859790(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  ((C_01859790 *)(((char *)this + 0x10)))->sub_018590e0();
  return param_1;
}

struct C_0185a6c0 {
    undefined4 * sub_0185a6c0(undefined4);
    int sub_01842cc0(int, int);
};

extern undefined4 g_023e8b04;
// @baa 0x0185a6c0
undefined4 * C_0185a6c0::sub_0185a6c0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_0185a6c0 *)(this))->sub_01842cc0(param_2, (int)("Emitter"));
  *param_1 = (undefined4)((&g_023e8b04));
  return param_1;
}

struct C_0185bb80 { int a; C_0185bb80(int); };

// @baa 0x0185bb80
C_0185bb80::C_0185bb80(int x) : a(x) {}

struct M_0185c030 { void sub_0184b1a0(); };

struct C_0185c030 { char pad[4]; M_0185c030 m; void sub_0185c030(); };

// @baa 0x0185c030
void C_0185c030::sub_0185c030() { m.sub_0184b1a0(); }

struct C_0185c040 {
    undefined4 * sub_0185c040();
    int sub_01854cd0();
};

// @baa 0x0185c040
undefined4 * C_0185c040::sub_0185c040(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  ((C_0185c040 *)(((char *)this + 4)))->sub_01854cd0();
  return param_1;
}

struct C_0185c740 {
    undefined4 * sub_0185c740(undefined4 *);
    int sub_01851560(int);
};

// @baa 0x0185c740
undefined4 * C_0185c740::sub_0185c740(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_0185c740 *)(((char *)this + 4)))->sub_01851560((int)(param_2 + 1));
  return param_1;
}

struct C_0185d6b0 {
    bool sub_0185d6b0(int *);
};

// @baa 0x0185d6b0
bool C_0185d6b0::sub_0185d6b0(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 != *param_1;
}

struct C_0185d6c0 {
    int sub_0185d6c0();
};

// @baa 0x0185d6c0
int C_0185d6c0::sub_0185d6c0(void)
{
    int * param_1 = (int *)this;
  return *param_1 + 0x10;
}

struct C_0185d810 { int a; C_0185d810(int); };

// @baa 0x0185d810
C_0185d810::C_0185d810(int x) : a(x) {}

struct C_0185e610 {
    void sub_0185e610(float);
};

// @baa 0x0185e610
void C_0185e610::sub_0185e610(float f) {
    *(float *)(this + 0x10) = f;
}

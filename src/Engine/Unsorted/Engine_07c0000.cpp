// Engine_07c0000.cpp: 21 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_007bcef0();
// @baa 0x007c2680
void sub_007c2680(void) { sub_007bcef0(); }

void sub_007bd190();
// @baa 0x007c2690
void sub_007c2690(void) { sub_007bd190(); }

void sub_007bd120();
// @baa 0x007c26a0
void sub_007c26a0(void) { sub_007bd120(); }

void sub_007bd360();
// @baa 0x007c2750
void sub_007c2750(void) { sub_007bd360(); }

void sub_007bd2f0();
// @baa 0x007c2760
void sub_007c2760(void) { sub_007bd2f0(); }

void sub_007bd4c0();
// @baa 0x007c2770
void sub_007c2770(void) { sub_007bd4c0(); }

void sub_007bd520();
// @baa 0x007c2800
void sub_007c2800(void) { sub_007bd520(); }

struct C {
    undefined4 sub_007c3370();
};

int sub_007c2df0(...);
// @baa 0x007c3370
undefined4 C::sub_007c3370(void)
{
    int param_1 = (int)this;

  sub_007c2df0(*(undefined4 *)(param_1 + 4),param_1 + 8);
  return 0x14;
}

struct C_007c3700 { void sub_007beb80(int); C_007c3700 *sub_007c3700(int); };

// @baa 0x007c3700
C_007c3700 *C_007c3700::sub_007c3700(int a) { sub_007beb80(a); return this; }

struct C_007c4060 { C_007c4060* sub_007c4060(void); };

// @baa 0x007c4060
C_007c4060* C_007c4060::sub_007c4060(void) { return this; }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_007c4070 { void* Data; int Num; int Max; void sub_007c4070(); };

// @baa 0x007c4070
void C_007c4070::sub_007c4070() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007c41b0 { int a, b, c; C_007c41b0(); };

// @baa 0x007c41b0
C_007c41b0::C_007c41b0() : a(0), b(0), c(0) {}

struct C_007c5460 { C_007c5460* sub_007c5460(void); };

// @baa 0x007c5460
C_007c5460* C_007c5460::sub_007c5460(void) { return this; }

extern char g_026b1030[];
// @baa 0x007c5800
int sub_007c5800(void) { return (int)g_026b1030; }

// @baa 0x007c5810
int sub_007c5810(void) { return 1; }

struct C_007c5820 {
    undefined4 sub_007c5820(byte);
};

int sub_0053dfa0(...);
int sub_007c2810(void);
// @baa 0x007c5820
undefined4 C_007c5820::sub_007c5820(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007c2810();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_007c5b40 {
    undefined4 sub_007c5b40(byte);
};

int sub_007c3390(void);
// @baa 0x007c5b40
undefined4 C_007c5b40::sub_007c5b40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007c3390();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_007c71c0 { void sub_0076d2d0(); };

struct C_007c71c0 { char pad[4]; M_007c71c0 m; void sub_007c71c0(); };

// @baa 0x007c71c0
void C_007c71c0::sub_007c71c0() { m.sub_0076d2d0(); }

void sub_007c7360();
// @baa 0x007c8120
void sub_007c8120(void) { sub_007c7360(); }

struct C_007cb2a0 {
    undefined4 sub_007cb2a0(byte);
    int sub_007c92c0();
};

// @baa 0x007cb2a0
undefined4 C_007cb2a0::sub_007cb2a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_007cb2a0 *)(((char *)this + 0x1c)))->sub_007c92c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_007a5870(void);
int sub_007cae60(...);
extern undefined4 g_026b531c;
// @baa 0x007cb2d0
int sub_007cb2d0(void)
{
  if (g_026b531c == 0) {
    g_026b531c = sub_007cae60(L"Engine");
    sub_007a5870();
  }
  return g_026b531c;
}

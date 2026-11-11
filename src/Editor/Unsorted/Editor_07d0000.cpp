// Editor_07d0000.cpp: 9 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { C* sub_007d60c0(int a0); };

// @baa 0x007d60c0
C* C::sub_007d60c0(int a0) { return this; }

struct C_007d60d0 { C_007d60d0* sub_007d60d0(int a0); };

// @baa 0x007d60d0
C_007d60d0* C_007d60d0::sub_007d60d0(int a0) { return this; }

struct C_007d60e0 { C_007d60e0* sub_007d60e0(int a0); };

// @baa 0x007d60e0
C_007d60e0* C_007d60e0::sub_007d60e0(int a0) { return this; }

int sub_008e0950(...);
int sub_008f8010(void);
extern undefined4 g_026b5abc;
// @baa 0x007d65a0
int sub_007d65a0(void)
{
  if (g_026b5abc == 0) {
    g_026b5abc = sub_008e0950(L"Engine");
    sub_008f8010();
  }
  return g_026b5abc;
}

int sub_00889260(void);
int sub_0088e680(...);
extern undefined4 g_026b58d0;
// @baa 0x007d6690
int sub_007d6690(void)
{
  if (g_026b58d0 == 0) {
    g_026b58d0 = sub_0088e680(L"Engine");
    sub_00889260();
  }
  return g_026b58d0;
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

// @baa 0x007d66c0
void sub_007d66c0(S* p, INT Value)
{
    p->vf_18(Value);
}

int sub_00755620(void);
int sub_007677f0(...);
extern undefined4 g_026b3b3c;
// @baa 0x007d66e0
int sub_007d66e0(void)
{
  if (g_026b3b3c == 0) {
    g_026b3b3c = sub_007677f0(L"Engine");
    sub_00755620();
  }
  return g_026b3b3c;
}

int sub_00d1f2f0(void);
int sub_00d3c640(...);
extern undefined4 g_026c57a8;
// @baa 0x007d6710
int sub_007d6710(void)
{
  if (g_026c57a8 == 0) {
    g_026c57a8 = sub_00d3c640(L"Engine");
    sub_00d1f2f0();
  }
  return g_026c57a8;
}

int sub_0090b7d0(void);
int sub_00938bb0(...);
extern undefined4 g_026b5d7c;
// @baa 0x007d6740
int sub_007d6740(void)
{
  if (g_026b5d7c == 0) {
    g_026b5d7c = sub_00938bb0(L"Engine");
    sub_0090b7d0();
  }
  return g_026b5d7c;
}

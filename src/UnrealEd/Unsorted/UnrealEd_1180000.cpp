// UnrealEd_1180000.cpp: 10 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01180e40();
    int sub_0117cf40(int);
};

// @baa 0x01180e40
void C::sub_01180e40(void)
{
    int param_1 = (int)this;
  ((C *)((*(char **)((char *)this + 0x10))))->sub_0117cf40(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0118c790 {
    int sub_0118c790();
};

int sub_0117d120(void);
// @baa 0x0118c790
int C_0118c790::sub_0118c790(void)
{
    int param_1 = (int)this;

  sub_0117d120();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_01189a20();
// @baa 0x0118c810
void sub_0118c810(void) { sub_01189a20(); }

struct C_0118fe20 { C_0118fe20* sub_0118fe20(void); };

// @baa 0x0118fe20
C_0118fe20* C_0118fe20::sub_0118fe20(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_0118fe30 { int a, b; C_0118fe30(int, int); };

// @baa 0x0118fe30
C_0118fe30::C_0118fe30(int x, int y) : a(x), b(y) {}

struct C_0118feb0 {
    void sub_0118feb0();
};

// @baa 0x0118feb0
void C_0118feb0::sub_0118feb0(void)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  return;
}

struct C_0118fec0 { char* sub_0118fec0(void); };

// @baa 0x0118fec0
char* C_0118fec0::sub_0118fec0(void) { return (char*)this + 452; }

struct C_0118fed0 { char* sub_0118fed0(void); };

// @baa 0x0118fed0
char* C_0118fed0::sub_0118fed0(void) { return (char*)this + 464; }

struct C_0118fee0 { char* sub_0118fee0(void); };

// @baa 0x0118fee0
char* C_0118fee0::sub_0118fee0(void) { return (char*)this + 476; }

struct C_0118fef0 {
    void sub_00724620(int);
    void sub_0118fef0();
};

// @baa 0x0118fef0
void C_0118fef0::sub_0118fef0()
{
    this->sub_00724620(1);
}

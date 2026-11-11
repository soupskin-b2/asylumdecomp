// FaceFX_0470000.cpp (part 1 of 2): 12 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_0047d6d0();
};

int sub_00478a20(...);
int sub_01ab3290(...);
// @baa 0x0047d6d0
void C::sub_0047d6d0(void)
{
    int * param_1 = (int *)this;

  sub_00478a20(*param_1,*param_1 + param_1[2] * 0xc);
  sub_01ab3290(*param_1,param_1[1] * 0xc);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

// @baa 0x0047da40
void sub_0047da40(int param_1, int param_2)
{
  int *piVar1;
  
  if (param_1 != param_2) {
    piVar1 = (int *)(param_1 + 8);
    do {
      if (param_1 != 0) {
        sub_01ab3290(piVar1[-1],*piVar1 * 0x24);
        piVar1[-1] = 0;
        piVar1[1] = 0;
        *piVar1 = 0;
      }
      param_1 = param_1 + 0x18;
      piVar1 = piVar1 + 6;
    } while (param_1 != param_2);
  }
  return;
}

struct S_0047dcf0 { void sub_004765e0(); };

// @baa 0x0047dcf0
void sub_0047dcf0(S_0047dcf0 *p) { if (p) p->sub_004765e0(); }

extern int g_02618848;
int sub_0047ce20();
// @baa 0x0047dd00
int sub_0047dd00() { if (!g_02618848) g_02618848 = sub_0047ce20(); return g_02618848; }

struct C_0047dd40 {
    void sub_0047dd40();
};

// @baa 0x0047dd40
void C_0047dd40::sub_0047dd40(void)
{
    int * param_1 = (int *)this;

  sub_00478a20(*param_1,*param_1 + param_1[2] * 0xc);
  sub_01ab3290(*param_1,param_1[1] * 0xc);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

extern int g_02618844;
int sub_00479480();
// @baa 0x0047dd80
int sub_0047dd80() { if (!g_02618844) g_02618844 = sub_00479480(); return g_02618844; }

extern int g_02618834;
int sub_00478d40();
// @baa 0x0047ddc0
int sub_0047ddc0() { if (!g_02618834) g_02618834 = sub_00478d40(); return g_02618834; }

struct M_0047de00 { void sub_004246d0(); };

struct C_0047de00 { char pad[40]; M_0047de00 m; void sub_0047de00(); };

// @baa 0x0047de00
void C_0047de00::sub_0047de00() { m.sub_004246d0(); }

struct M_0047e500 { void sub_0047df00(); };

struct C_0047e500 { char pad[56]; M_0047e500 m; void sub_0047e500(); };

// @baa 0x0047e500
void C_0047e500::sub_0047e500() { m.sub_0047df00(); }

struct M_0047e510 { void sub_0047dfc0(); };

struct C_0047e510 { char pad[56]; M_0047e510 m; void sub_0047e510(); };

// @baa 0x0047e510
void C_0047e510::sub_0047e510() { m.sub_0047dfc0(); }

struct C_0047ef50 {
    void sub_0047ef50();
};

int sub_0047d9e0(...);
// @baa 0x0047ef50
void C_0047ef50::sub_0047ef50(void)
{
    int * param_1 = (int *)this;

  sub_0047d9e0(*param_1,param_1[2] * 0x10 + *param_1);
  sub_01ab3290(*param_1,param_1[1] << 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

void sub_0047efd0();
// @baa 0x0047f9b0
void sub_0047f9b0(void) { sub_0047efd0(); }

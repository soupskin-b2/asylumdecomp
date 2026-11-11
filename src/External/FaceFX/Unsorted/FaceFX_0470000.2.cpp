// FaceFX_0470000.cpp (part 2 of 2): 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    short sub_01ab5e50();
};

extern C* g_02618848;
extern "C" C* __cdecl sub_0047ce20(void);
// @baa 0x0047dd20
short __cdecl sub_0047dd20(void)
{
    if (g_02618848 == 0)
        g_02618848 = sub_0047ce20();
    return g_02618848->sub_01ab5e50();
}

extern C* g_02618844;
extern "C" C* __cdecl sub_00479480(void);
// @baa 0x0047dda0
short __cdecl sub_0047dda0(void)
{
    if (g_02618844 == 0)
        g_02618844 = sub_00479480();
    return g_02618844->sub_01ab5e50();
}

extern C* g_02618834;
extern "C" C* __cdecl sub_00478d40(void);
// @baa 0x0047dde0
short __cdecl sub_0047dde0(void)
{
    if (g_02618834 == 0)
        g_02618834 = sub_00478d40();
    return g_02618834->sub_01ab5e50();
}

struct C_0047ef90 {
    void sub_0047ef90();
};

int sub_0047da40(...);
int sub_01ab3290(...);
// @baa 0x0047ef90
void C_0047ef90::sub_0047ef90(void)
{
    int * param_1 = (int *)this;

  sub_0047da40(*param_1,*param_1 + param_1[2] * 0x18);
  sub_01ab3290(*param_1,param_1[1] * 0x18);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_0047f890 {
    void sub_0047f890();
};

// @baa 0x0047f890
void C_0047f890::sub_0047f890(void)
{
    int * param_1 = (int *)this;

  sub_0047da40(*param_1,*param_1 + param_1[2] * 0x18);
  sub_01ab3290(*param_1,param_1[1] * 0x18);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

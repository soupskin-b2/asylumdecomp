// UnrealEd_0460000.cpp (part 2 of 2): 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_004651f0(int);
};

extern "C" __declspec(dllimport) int memmove(...);
// @baa 0x004651f0
void C::sub_004651f0(int param_2)
{
    int * param_1 = (int *)this;

  void *_Dst;
  
  _Dst = (void *)(*param_1 + param_2 * 4);
  memmove(_Dst,(void *)((int)_Dst + 4),(param_1[2] - param_2) * 4 - 4);
  param_1[2] = param_1[2] + -1;
  *(undefined4 *)(*param_1 + param_1[2] * 4) = 0;
  return;
}

struct C_00465230 {
    void sub_00465230(int);
};

// @baa 0x00465230
void C_00465230::sub_00465230(int param_2)
{
    int * param_1 = (int *)this;

  void *_Dst;
  
  _Dst = (void *)(*param_1 + param_2 * 4);
  memmove(_Dst,(void *)((int)_Dst + 4),(param_1[2] - param_2) * 4 - 4);
  param_1[2] = param_1[2] + -1;
  *(undefined4 *)(*param_1 + param_1[2] * 4) = 0;
  return;
}

struct C_004666b0 {
    short sub_01ab5e50();
};

extern C_004666b0* g_02618840;
extern "C" C_004666b0* __cdecl sub_00463ad0(void);
// @baa 0x004666b0
short __cdecl sub_004666b0(void)
{
    if (g_02618840 == 0)
        g_02618840 = sub_00463ad0();
    return g_02618840->sub_01ab5e50();
}

struct C_00468140 {
    short sub_01ab5e50();
};

extern C_00468140* g_02663860;
extern "C" C_00468140* __cdecl sub_00464ee0(void);
// @baa 0x00468140
short __cdecl sub_00468140(void)
{
    if (g_02663860 == 0)
        g_02663860 = sub_00464ee0();
    return g_02663860->sub_01ab5e50();
}

struct C_0046edd0 {
    short sub_01ab5e50();
};

extern C_0046edd0* g_027d3448;
extern "C" C_0046edd0* __cdecl sub_01b8f2c0(void);
// @baa 0x0046edd0
short __cdecl sub_0046edd0(void)
{
    if (g_027d3448 == 0)
        g_027d3448 = sub_01b8f2c0();
    return g_027d3448->sub_01ab5e50();
}

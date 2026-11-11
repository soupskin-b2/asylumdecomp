// UnrealEd_0420000.cpp (part 2 of 2): 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    short sub_01ab5e50();
};

extern C* g_02616f0c;
extern "C" C* __cdecl sub_00421fc0(void);
// @baa 0x00422790
short __cdecl sub_00422790(void)
{
    if (g_02616f0c == 0)
        g_02616f0c = sub_00421fc0();
    return g_02616f0c->sub_01ab5e50();
}

struct C_00423b20 {
    void sub_00423b20();
};

int sub_004225b0(...);
int sub_01ab3290(...);
// @baa 0x00423b20
void C_00423b20::sub_00423b20(void)
{
    int * param_1 = (int *)this;

  sub_004225b0(*param_1,*param_1 + param_1[2] * 0xc);
  sub_01ab3290(*param_1,param_1[1] * 0xc);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_00423bd0 {
    void sub_00423bd0();
};

int sub_00422620(...);
// @baa 0x00423bd0
void C_00423bd0::sub_00423bd0(void)
{
    int * param_1 = (int *)this;

  sub_00422620(*param_1,*param_1 + param_1[2] * 0x14);
  sub_01ab3290(*param_1,param_1[1] * 0x14);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

extern C* g_02616f00;
extern "C" C* __cdecl sub_00422d10(void);
// @baa 0x004247b0
short __cdecl sub_004247b0(void)
{
    if (g_02616f00 == 0)
        g_02616f00 = sub_00422d10();
    return g_02616f00->sub_01ab5e50();
}

struct C_00427680 {
    void sub_00427680();
};

// @baa 0x00427680
void C_00427680::sub_00427680(void)
{
    int * param_1 = (int *)this;

  sub_004225b0(*param_1,*param_1 + param_1[2] * 0xc);
  sub_01ab3290(*param_1,param_1[1] * 0xc);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_004276c0 {
    void sub_004276c0();
};

// @baa 0x004276c0
void C_004276c0::sub_004276c0(void)
{
    int * param_1 = (int *)this;

  sub_00422620(*param_1,*param_1 + param_1[2] * 0x14);
  sub_01ab3290(*param_1,param_1[1] * 0x14);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

class wxString;
class wxString {
    public:
    public: __declspec(dllimport) int Cmp(wchar_t const *) const;
    friend bool sub_0042ea90(wchar_t * param_1, wxString * param_2);
};

// @baa 0x0042ea90
bool sub_0042ea90(wchar_t * param_1, wxString * param_2)
{
  int iVar1;
  
  iVar1 = ((wxString *)(param_2))->wxString::Cmp(param_1);
  return iVar1 != 0;
}

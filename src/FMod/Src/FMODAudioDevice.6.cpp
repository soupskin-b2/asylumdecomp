// FMODAudioDevice.cpp (part 6 of 6): 6 functions
// Placed here by: neighbours 1, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_00e85480(int);
};

int sub_0053df70(...);
// @baa 0x00e85480
void C::sub_00e85480(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

int sub_00e84ae0(...);
int sub_00e84c70(...);
int __stdcall sub_00e855a0(int, int, int, int, int);
int sub_00e85970(...);
int __stdcall sub_017623ea(int, int, int, int, int, int);
extern undefined4 g_026cc250;
extern undefined4 g_026cc254;
extern undefined4 g_026cc258;
// @baa 0x00e85a80
bool sub_00e85a80(undefined4 param_1)
{
  int iVar1;
  g_026cc254 = 0;
  if (g_026cc258 != 0) {
    g_026cc258 = 0;
    if (g_026cc250 != 0) {
      g_026cc250 = sub_0053df70(g_026cc250,0,8);
    }
  }
  iVar1 = sub_017623ea(param_1, (int)(sub_00e855a0), (int)(sub_00e85970), (int)(sub_00e84ae0), (int)(sub_00e84c70), 0xffffffff);
  return iVar1 == 0;
}

void __stdcall sub_00e85970(INT A, INT B);
// @baa 0x00e85a70
void sub_00e85a70(INT A)
{
    sub_00e85970(A, 0);
}

void sub_0053dfa0(INT Value);
// @baa 0x00e70bc0
void __stdcall sub_00e70bc0(INT A, INT B)
{
    sub_0053dfa0(A);
}

struct C_00e73ee0
{
    char pad_0[0x14];
    INT Value_14;
    INT Value_18;
    INT Value_1c;

    C_00e73ee0* sub_00e73ee0();
};

// @baa 0x00e73ee0
C_00e73ee0* C_00e73ee0::sub_00e73ee0()
{
    Value_14 = 0;
    Value_18 = 0;
    Value_1c = 0;
    return this;
}

struct Sub
{
    void sub_00e7f750(INT Value);
};

struct C_00e80ac0
{
    char pad_00[0x2f8];
    Sub Marker;

    void sub_00e80ac0();
};

// @baa 0x00e80ac0
void C_00e80ac0::sub_00e80ac0()
{
    ((Sub*)((char*)this + 0x2f8))->sub_00e7f750(0);
}

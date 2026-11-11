// UnrealEd_0470000.cpp (part 1 of 2): 32 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct A_004706a0 { virtual void sub_00476840(); char pad[4]; };

struct B_004706a0 { virtual void sub_00476840(); };

struct C_004706a0 : A_004706a0, B_004706a0 { virtual void sub_00476840(); C_004706a0(); };

C_004706a0::C_004706a0() {}

// @baa 0x004706a0
void C_004706a0::sub_00476840() {}

struct C {
    void sub_00470dc0();
};

int sub_004697f0(...);
int sub_01ab3290(...);
// @baa 0x00470dc0
void C::sub_00470dc0(void)
{
    int * param_1 = (int *)this;

  sub_004697f0(*param_1,*param_1 + param_1[2] * 8);
  sub_01ab3290(*param_1,param_1[1] * 8);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_004726e0 {
    void sub_004726e0();
};

int sub_00469890(...);
// @baa 0x004726e0
void C_004726e0::sub_004726e0(void)
{
    int * param_1 = (int *)this;

  sub_00469890(*param_1,*param_1 + param_1[2] * 0xc);
  sub_01ab3290(*param_1,param_1[1] * 0xc);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_00472720 {
    void sub_00472720();
};

int sub_00469700(...);
// @baa 0x00472720
void C_00472720::sub_00472720(void)
{
    int * param_1 = (int *)this;

  sub_00469700(*param_1,*param_1 + param_1[2] * 0xc);
  sub_01ab3290(*param_1,param_1[1] * 0xc);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

int sub_00472f80(void);
extern undefined1 g_02618831;
extern undefined4 g_0261884c;
// @baa 0x00473010
void sub_00473010(void)
{
  g_02618831 = 0;
  g_0261884c = 0;
  sub_00472f80();
  return;
}

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_004730f0();
};

// @baa 0x004730f0
S *S::sub_004730f0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_00473100 {
    void sub_00473100();
};

int sub_00469fe0(void);
// @baa 0x00473100
void C_00473100::sub_00473100(void)
{
    int * param_1 = (int *)this;

  sub_00469fe0();
  if (*param_1 != 0) {
    sub_01ab3290(*param_1,0x10);
    *param_1 = 0;
  }
  return;
}

struct C_00473bf0 {
    undefined4 sub_00473bf0(byte);
};

int sub_0046bf00(void);
int sub_0053dfa0(...);
// @baa 0x00473bf0
undefined4 C_00473bf0::sub_00473bf0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0046bf00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_004755d0 {
    void sub_004755d0();
};

int sub_0046a2d0(...);
// @baa 0x004755d0
void C_004755d0::sub_004755d0(void)
{
    int * param_1 = (int *)this;

  sub_0046a2d0(*param_1,*param_1 + param_1[2] * 0xc);
  sub_01ab3290(*param_1,param_1[1] * 0xc);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

// @baa 0x00475910
void sub_00475910(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    sub_01ab3290(*param_1,param_1[1] * 4);
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}

struct C_00475a20 {
    undefined4 sub_00475a20(byte);
};

int sub_00470e00(void);
// @baa 0x00475a20
undefined4 C_00475a20::sub_00475a20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00470e00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00475a40 {
    int * sub_00475a40(byte);
};

// @baa 0x00475a40
int * C_00475a40::sub_00475a40(byte param_2)
{
    int * param_1 = (int *)this;

  sub_00469fe0();
  if (*param_1 != 0) {
    sub_01ab3290(*param_1,0x10);
    *param_1 = 0;
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00475a80 {
    int sub_00475a80(byte);
};

// @baa 0x00475a80
int C_00475a80::sub_00475a80(byte param_2)
{
    int param_1 = (int)this;

  sub_01ab3290(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 8) * 0x24);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00475ac0 {
    undefined4 sub_00475ac0(byte);
};

int sub_00470c70(void);
// @baa 0x00475ac0
undefined4 C_00475ac0::sub_00475ac0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00470c70();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x48);
  }
  return param_1;
}

void sub_00474710();
// @baa 0x00475ba0
void sub_00475ba0(void) { sub_00474710(); }

struct C_00475d00 {
    undefined4 sub_00475d00(byte);
};

int sub_0046f7a0(void);
// @baa 0x00475d00
undefined4 C_00475d00::sub_00475d00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0046f7a0();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x74);
  }
  return param_1;
}

struct M_00475d20 { void sub_00475490(); };

struct C_00475d20 { char pad[104]; M_00475d20 m; void sub_00475d20(); };

// @baa 0x00475d20
void C_00475d20::sub_00475d20() { m.sub_00475490(); }

struct C_00475d30 {
    void sub_00475d30(int, undefined4);
};

int sub_00470f50(...);
// @baa 0x00475d30
void C_00475d30::sub_00475d30(int param_2, undefined4 param_3)
{
    int * param_1 = (int *)this;

  if ((*param_1 != 0) && (param_2 != -1)) {
    sub_00470f50(*(int *)(*param_1 + 0xc) + 4 + param_2 * 0x20,param_3);
  }
  return;
}

struct C_00475d60 {
    void sub_00475d60(undefined4, undefined4);
};

// @baa 0x00475d60
void C_00475d60::sub_00475d60(undefined4 param_2, undefined4 param_3)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_00470f50(param_2,param_3);
  }
  return;
}

struct M_00476680 { void sub_00475f00(); };

struct C_00476680 { char pad[56]; M_00476680 m; void sub_00476680(); };

// @baa 0x00476680
void C_00476680::sub_00476680() { m.sub_00475f00(); }

struct M_00476690 { void sub_00476150(); };

struct C_00476690 { char pad[56]; M_00476690 m; void sub_00476690(); };

// @baa 0x00476690
void C_00476690::sub_00476690() { m.sub_00476150(); }

struct M_004766a0 { void sub_004762d0(); };

struct C_004766a0 { char pad[56]; M_004766a0 m; void sub_004766a0(); };

// @baa 0x004766a0
void C_004766a0::sub_004766a0() { m.sub_004762d0(); }

struct C_00476840 {
    undefined4 sub_00476840(byte);
};

int sub_00470560(void);
// @baa 0x00476840
undefined4 C_00476840::sub_00476840(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00470560();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x80);
  }
  return param_1;
}

int sub_00469770(...);
extern undefined4 g_026638e4;
extern undefined4 g_026638e8;
extern undefined4 g_026638ec;
// @baa 0x00476990
void sub_00476990(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = g_026638ec;
  iVar2 = g_026638e8;
  iVar1 = g_026638e4;
  g_026638e4 = 0;
  g_026638e8 = 0;
  g_026638ec = 0;
  sub_00469770(iVar1,iVar1 + iVar3 * 0x18);
  sub_01ab3290(iVar1,iVar2 * 0x18);
  return;
}

struct C_00476a60 {
    undefined4 sub_00476a60(byte);
};

int sub_00471020(void);
// @baa 0x00476a60
undefined4 C_00476a60::sub_00476a60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00471020();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x14);
  }
  return param_1;
}

struct C_00476b20 {
    undefined4 sub_00476b20(byte);
};

int sub_004727f0(void);
// @baa 0x00476b20
undefined4 C_00476b20::sub_00476b20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004727f0();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x2c);
  }
  return param_1;
}

// @baa 0x00478a20
void sub_00478a20(undefined4 * param_1, undefined4 * param_2)
{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    if (param_1 != (undefined4 *)0x0) {
      sub_01ab3290(*param_1,param_1[1] * 4);
      *param_1 = 0;
      param_1[2] = 0;
      param_1[1] = 0;
    }
  }
  return;
}

struct S_00478b00 { void sub_00470e00(); };

// @baa 0x00478b00
void sub_00478b00(S_00478b00 *p) { if (p) p->sub_00470e00(); }

// @baa 0x00478b40
void sub_00478b40(int param_1)
{
  if (param_1 != 0) {
    sub_01ab3290(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 8) * 0x24);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

struct C_00478bd0 {
    undefined4 sub_00478bd0(byte);
};

int sub_004765e0(void);
// @baa 0x00478bd0
undefined4 C_00478bd0::sub_00478bd0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004765e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_02618838;
int sub_00475df0();
// @baa 0x00478dd0
int sub_00478dd0() { if (!g_02618838) g_02618838 = sub_00475df0(); return g_02618838; }

struct C_00478e10 {
    undefined4 sub_00478e10(byte);
};

int sub_00475e80(void);
// @baa 0x00478e10
undefined4 C_00478e10::sub_00478e10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00475e80();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x10);
  }
  return param_1;
}

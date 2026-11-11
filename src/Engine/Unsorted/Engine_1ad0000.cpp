// Engine_1ad0000.cpp (part 1 of 3): 29 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01ad6f40(undefined4 *);
};

// @baa 0x01ad6f40
void C::sub_01ad6f40(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x24) = *param_2;
  *(undefined4 *)(param_1 + 0x28) = param_2[1];
  *(undefined4 *)(param_1 + 0x2c) = param_2[2];
  return;
}

struct C_01ad70c0 {
    void sub_01ad70c0(undefined4);
};

// @baa 0x01ad70c0
void C_01ad70c0::sub_01ad70c0(undefined4 param_2)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
  }
  return;
}

struct C_01ad70d0 {
    void sub_01ad70d0(char);
};

// @baa 0x01ad70d0
void C_01ad70d0::sub_01ad70d0(char param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0xc) = (uint)(param_2 != '\0');
  return;
}

struct C_01ad75f0 {
    undefined4 sub_01ad75f0(byte);
};

int sub_01ab3290(...);
int sub_01ad7490(void);
// @baa 0x01ad75f0
undefined4 C_01ad75f0::sub_01ad75f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01ad7490();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x20);
  }
  return param_1;
}

struct C_01ad77f0 { void sub_01ad77f0(int a0); };

// @baa 0x01ad77f0
void C_01ad77f0::sub_01ad77f0(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_01ad7800 { int sub_01ad7800(void); };

// @baa 0x01ad7800
int C_01ad7800::sub_01ad7800(void) { return *(int*)((char*)this + 4); }

struct C_01ad7840 { char* sub_01ad7840(void); };

// @baa 0x01ad7840
char* C_01ad7840::sub_01ad7840(void) { return (char*)this + 8; }

struct C_01ad7850 { char* sub_01ad7850(void); };

// @baa 0x01ad7850
char* C_01ad7850::sub_01ad7850(void) { return (char*)this + 12; }

struct C_01ad78a0 { int sub_01ad78a0(void); };

// @baa 0x01ad78a0
int C_01ad78a0::sub_01ad78a0(void) { return *(int*)((char*)this + 24); }

struct C_01ad78b0 {
    int sub_01ad78b0(int);
};

// @baa 0x01ad78b0
int C_01ad78b0::sub_01ad78b0(int param_2)
{
    int param_1 = (int)this;

  return param_2 * 0x20 + *(int *)(param_1 + 0x10);
}

struct C_01ad7af0 {
    undefined4 sub_01ad7af0(byte);
};

int sub_00402660(...);
int sub_01ad79e0(void);
// @baa 0x01ad7af0
undefined4 C_01ad7af0::sub_01ad7af0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01ad79e0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01ad9a10 { void sub_01ad9a10(int a0); };

// @baa 0x01ad9a10
void C_01ad9a10::sub_01ad9a10(int a0) { *(int*)((char*)this + 0) = a0; }

extern undefined4 g_027ca560;
// @baa 0x01ad9a80
void sub_01ad9a80(undefined4 param_1)
{
  g_027ca560 = param_1;
  return;
}

// @baa 0x01ad9fa0
void __stdcall sub_01ad9fa0(int a0) {  }

struct C_01ada1d0 {
    undefined4 sub_01ada1d0(byte);
};

int sub_01ada060(void);
// @baa 0x01ada1d0
undefined4 C_01ada1d0::sub_01ada1d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01ada060();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x14);
  }
  return param_1;
}

struct C_01ada240 {
    undefined4 * sub_01ada240();
};

int sub_01ab7780(void);
extern undefined4 g_0240dddc;
// @baa 0x01ada240
undefined4 * C_01ada240::sub_01ada240(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_01ab7780();
  *param_1 = (undefined4)((&g_0240dddc));
  return param_1;
}

struct C_01ada3c0 {
    undefined4 * sub_01ada3c0(byte);
};

int sub_01ab7640(void);
// @baa 0x01ada3c0
undefined4 * C_01ada3c0::sub_01ada3c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240dddc));
  sub_01ab7640();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x44);
  }
  return param_1;
}

struct C_01ada470 {
    undefined4 * sub_01ada470();
};

extern undefined4 g_0240de00;
// @baa 0x01ada470
undefined4 * C_01ada470::sub_01ada470(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_01ab7780();
  *param_1 = (undefined4)((&g_0240de00));
  *(undefined1 *)(param_1 + 0xd) = 0;
  return param_1;
}

struct C_01ada490 {
    void sub_01ada490();
};

// @baa 0x01ada490
void C_01ada490::sub_01ada490(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240de00));
  sub_01ab7640();
  return;
}

struct C_01ada5b0 {
    undefined4 * sub_01ada5b0(byte);
};

// @baa 0x01ada5b0
undefined4 * C_01ada5b0::sub_01ada5b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240de00));
  sub_01ab7640();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x44);
  }
  return param_1;
}

struct C_01ada620 {
    undefined4 * sub_01ada620();
};

extern undefined4 g_0240de24;
// @baa 0x01ada620
undefined4 * C_01ada620::sub_01ada620(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_01ab7780();
  *param_1 = (undefined4)((&g_0240de24));
  return param_1;
}

struct C_01ada7a0 {
    undefined4 * sub_01ada7a0(byte);
};

// @baa 0x01ada7a0
undefined4 * C_01ada7a0::sub_01ada7a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240de24));
  sub_01ab7640();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x44);
  }
  return param_1;
}

struct C_01ada870 {
    undefined4 * sub_01ada870();
};

int sub_01ab5c90(void);
extern undefined4 g_0240de44;
// @baa 0x01ada870
undefined4 * C_01ada870::sub_01ada870(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_01ab5c90();
  *param_1 = (undefined4)((&g_0240de44));
  param_1[1] = 0;
  return param_1;
}

struct C_01ada890 {
    void sub_01ada890();
};

int sub_01ab5ca0(void);
// @baa 0x01ada890
void C_01ada890::sub_01ada890(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240de44));
  sub_01ab5ca0();
  return;
}

// @baa 0x01ada8a0
void __stdcall sub_01ada8a0(int a0) {  }

struct C_01ada9c0 {
    undefined4 * sub_01ada9c0(byte);
};

// @baa 0x01ada9c0
undefined4 * C_01ada9c0::sub_01ada9c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240de44));
  sub_01ab5ca0();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,8);
  }
  return param_1;
}

struct C_01adaa70 {
    undefined4 * sub_01adaa70(byte);
};

int sub_01ada490(void);
extern undefined4 g_0240de68;
// @baa 0x01adaa70
undefined4 * C_01adaa70::sub_01adaa70(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240de68));
  sub_01ada490();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x44);
  }
  return param_1;
}

struct C_01adacd0 {
    undefined4 * sub_01adacd0();
};

extern undefined4 g_0240dea0;
// @baa 0x01adacd0
undefined4 * C_01adacd0::sub_01adacd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_01ab7780();
  *param_1 = (undefined4)((&g_0240dea0));
  return param_1;
}

struct C_01adae60 {
    undefined4 * sub_01adae60(byte);
};

// @baa 0x01adae60
undefined4 * C_01adae60::sub_01adae60(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240dea0));
  sub_01ab7640();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x44);
  }
  return param_1;
}

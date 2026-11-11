// UnrealEd_04d0000.cpp: 27 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_0266420c[];
// @baa 0x004d0c50
int sub_004d0c50(void) { return (int)g_0266420c; }

struct A_004d0c60 { virtual void sub_004da320(); char pad[340]; };

struct B_004d0c60 { virtual void sub_004da320(); };

struct C_004d0c60 : A_004d0c60, B_004d0c60 { virtual void sub_004da320(); C_004d0c60(); };

C_004d0c60::C_004d0c60() {}

// @baa 0x004d0c60
void C_004d0c60::sub_004da320() {}

extern char g_026644c8[];
// @baa 0x004d17d0
int sub_004d17d0(void) { return (int)g_026644c8; }

struct A_004d17e0 { virtual void sub_004db1b0(); char pad[340]; };

struct B_004d17e0 { virtual void sub_004db1b0(); };

struct C_004d17e0 : A_004d17e0, B_004d17e0 { virtual void sub_004db1b0(); C_004d17e0(); };

C_004d17e0::C_004d17e0() {}

// @baa 0x004d17e0
void C_004d17e0::sub_004db1b0() {}

extern char g_02664bcc[];
// @baa 0x004d4180
int sub_004d4180(void) { return (int)g_02664bcc; }

struct A_004d4190 { virtual void sub_004dc1c0(); char pad[320]; };

struct B_004d4190 { virtual void sub_004dc1c0(); };

struct C_004d4190 : A_004d4190, B_004d4190 { virtual void sub_004dc1c0(); C_004d4190(); };

C_004d4190::C_004d4190() {}

// @baa 0x004d4190
void C_004d4190::sub_004dc1c0() {}

extern char g_026648e0[];
// @baa 0x004d6c70
int sub_004d6c70(void) { return (int)g_026648e0; }

struct A_004d6ca0 { virtual void sub_004df1b0(); char pad[900]; };

struct B_004d6ca0 { virtual void sub_004df1b0(); };

struct C_004d6ca0 : A_004d6ca0, B_004d6ca0 { virtual void sub_004df1b0(); C_004d6ca0(); };

C_004d6ca0::C_004d6ca0() {}

// @baa 0x004d6ca0
void C_004d6ca0::sub_004df1b0() {}

struct A_004d6cb0 { virtual void sub_004df1b0(); char pad[332]; };

struct B_004d6cb0 { virtual void sub_004df1b0(); };

struct C_004d6cb0 : A_004d6cb0, B_004d6cb0 { virtual void sub_004df1b0(); C_004d6cb0(); };

C_004d6cb0::C_004d6cb0() {}

// @baa 0x004d6cb0
void C_004d6cb0::sub_004df1b0() {}

extern char g_026641dc[];
// @baa 0x004d8c80
int sub_004d8c80(void) { return (int)g_026641dc; }

struct A_004d8c90 { virtual void sub_004df300(); char pad[332]; };

struct B_004d8c90 { virtual void sub_004df300(); };

struct C_004d8c90 : A_004d8c90, B_004d8c90 { virtual void sub_004df300(); C_004d8c90(); };

C_004d8c90::C_004d8c90() {}

// @baa 0x004d8c90
void C_004d8c90::sub_004df300() {}

struct A_004d8ca0 { virtual void sub_004df300(); char pad[900]; };

struct B_004d8ca0 { virtual void sub_004df300(); };

struct C_004d8ca0 : A_004d8ca0, B_004d8ca0 { virtual void sub_004df300(); C_004d8ca0(); };

C_004d8ca0::C_004d8ca0() {}

// @baa 0x004d8ca0
void C_004d8ca0::sub_004df300() {}

int sub_01ab3290(...);
// @baa 0x004da150
void sub_004da150(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    sub_01ab3290(*param_1,param_1[1] * 8);
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}

// @baa 0x004da190
void sub_004da190(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    sub_01ab3290(*param_1,param_1[1] * 2);
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}

struct C {
    undefined4 sub_004da1c0(byte);
};

int sub_00402660(...);
int sub_004cfa50(void);
// @baa 0x004da1c0
undefined4 C::sub_004da1c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004cfa50();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_004da1e0 {
    undefined4 sub_004da1e0(byte);
};

int sub_004cfec0(void);
// @baa 0x004da1e0
undefined4 C_004da1e0::sub_004da1e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004cfec0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_004da320 {
    undefined4 sub_004da320(byte);
};

int sub_004d0bc0(void);
// @baa 0x004da320
undefined4 C_004da320::sub_004da320(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004d0bc0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_004db1b0 {
    undefined4 sub_004db1b0(byte);
};

int sub_004d17f0(void);
// @baa 0x004db1b0
undefined4 C_004db1b0::sub_004db1b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004d17f0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_004dc1c0 {
    undefined4 sub_004dc1c0(byte);
};

int sub_004d4100(void);
// @baa 0x004dc1c0
undefined4 C_004dc1c0::sub_004dc1c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004d4100();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_02663e7c[];
// @baa 0x004de6c0
int sub_004de6c0(void) { return (int)g_02663e7c; }

struct A_004de6d0 { virtual void sub_004e0b90(); char pad[328]; };

struct B_004de6d0 { virtual void sub_004e0b90(); };

struct C_004de6d0 : A_004de6d0, B_004de6d0 { virtual void sub_004e0b90(); C_004de6d0(); };

C_004de6d0::C_004de6d0() {}

// @baa 0x004de6d0
void C_004de6d0::sub_004e0b90() {}

struct C_004df1b0 {
    undefined4 sub_004df1b0(byte);
};

int sub_004d6cc0(void);
// @baa 0x004df1b0
undefined4 C_004df1b0::sub_004df1b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004d6cc0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_004df300 {
    undefined4 sub_004df300(byte);
};

int sub_004d8cb0(void);
// @baa 0x004df300
undefined4 C_004df300::sub_004df300(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004d8cb0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x004df630
void sub_004df630(undefined4 * param_1, undefined4 * param_2)
{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    if (param_1 != (undefined4 *)0x0) {
      sub_01ab3290(*param_1,param_1[1] * 8);
      *param_1 = 0;
      param_1[2] = 0;
      param_1[1] = 0;
    }
  }
  return;
}

// @baa 0x004df670
void sub_004df670(undefined4 * param_1, undefined4 * param_2)
{
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    if (param_1 != (undefined4 *)0x0) {
      sub_01ab3290(*param_1,param_1[1] * 2);
      *param_1 = 0;
      param_1[2] = 0;
      param_1[1] = 0;
    }
  }
  return;
}

struct S_004df6b0 { void sub_004cfa50(); };

// @baa 0x004df6b0
void sub_004df6b0(S_004df6b0 *p) { if (p) p->sub_004cfa50(); }

struct S_004df6c0 { void sub_004cfec0(); };

// @baa 0x004df6c0
void sub_004df6c0(S_004df6c0 *p) { if (p) p->sub_004cfec0(); }

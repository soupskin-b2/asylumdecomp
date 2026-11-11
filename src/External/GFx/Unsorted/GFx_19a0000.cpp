// GFx_19a0000.cpp (part 1 of 2): 44 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { C* sub_019a0120(void); };

// @baa 0x019a0120
C* C::sub_019a0120(void) { *(int*)((char*)this + 0) = 0; return this; }

void sub_0190c410();
// @baa 0x019a0130
void sub_019a0130(void) { sub_0190c410(); }

struct C_019a0780 { C_019a0780* sub_019a0780(void); };

// @baa 0x019a0780
C_019a0780* C_019a0780::sub_019a0780(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x019a0790
void sub_019a0790(void) { sub_0190c410(); }

void sub_019a0400();
// @baa 0x019a07d0
void sub_019a07d0(void) { sub_019a0400(); }

// @baa 0x019a1070
int sub_019a1070(void) { return 22; }

struct C_019a1730 {
    void sub_019a1730(undefined1);
};

// @baa 0x019a1730
void C_019a1730::sub_019a1730(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x9cb) = param_2;
  return;
}

struct C_019aa420 {
    void sub_019aa420();
};

// @baa 0x019aa420
void C_019aa420::sub_019aa420(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0xff000000;
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfbff;
  return;
}

struct C_019aa430 {
    void sub_019aa430(undefined2);
};

// @baa 0x019aa430
void C_019aa430::sub_019aa430(undefined2 param_2)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 2;
  *(undefined2 *)(param_1 + 0x24) = param_2;
  return;
}

struct C_019aa450 {
    undefined2 sub_019aa450();
};

// @baa 0x019aa450
undefined2 C_019aa450::sub_019aa450(void)
{
    int param_1 = (int)this;

  return *(undefined2 *)(param_1 + 0x24);
}

struct C_019aa460 {
    void sub_019aa460();
};

// @baa 0x019aa460
void C_019aa460::sub_019aa460(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfffd;
  *(undefined2 *)(param_1 + 0x24) = 0;
  return;
}

struct C_019aa4a0 {
    byte sub_019aa4a0();
};

// @baa 0x019aa4a0
byte C_019aa4a0::sub_019aa4a0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x2a) >> 4 & 1;
}

struct C_019aa4b0 {
    byte sub_019aa4b0();
};

// @baa 0x019aa4b0
byte C_019aa4b0::sub_019aa4b0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x2a) >> 5 & 1;
}

struct C_019aa4c0 {
    byte sub_019aa4c0();
};

// @baa 0x019aa4c0
byte C_019aa4c0::sub_019aa4c0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x2a) >> 6 & 1;
}

struct C_019aa500 {
    void sub_019aa500();
};

// @baa 0x019aa500
void C_019aa500::sub_019aa500(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xff7f;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}

struct C_019aa510 {
    void sub_019aa510();
};

// @baa 0x019aa510
void C_019aa510::sub_019aa510(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfffd;
  *(undefined2 *)(param_1 + 0x14) = 0;
  return;
}

struct C_019aa520 {
    void sub_019aa520();
};

// @baa 0x019aa520
void C_019aa520::sub_019aa520(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfffb;
  *(undefined2 *)(param_1 + 0x16) = 0;
  return;
}

struct C_019aa530 {
    void sub_019aa530();
};

// @baa 0x019aa530
void C_019aa530::sub_019aa530(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfff7;
  *(undefined2 *)(param_1 + 0x18) = 0;
  return;
}

struct C_019aa540 {
    void sub_019aa540();
};

// @baa 0x019aa540
void C_019aa540::sub_019aa540(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xffef;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  return;
}

struct C_019aa550 {
    void sub_019aa550();
};

// @baa 0x019aa550
void C_019aa550::sub_019aa550(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xffdf;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  return;
}

struct C_019aa560 { int sub_019aa560(void); };

// @baa 0x019aa560
int C_019aa560::sub_019aa560(void) { return *(int*)((char*)this + 16); }

struct C_019aa570 {
    void sub_019aa570(undefined4);
};

// @baa 0x019aa570
void C_019aa570::sub_019aa570(undefined4 param_2)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 0x100;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}

struct C_019aa7d0 { int sub_019aa7d0(void); };

// @baa 0x019aa7d0
int C_019aa7d0::sub_019aa7d0(void) { return *(int*)((char*)this + 0); }

struct C_019aa810 {
    void sub_019aa810();
};

int sub_019aa6d0(void);
// @baa 0x019aa810
void C_019aa810::sub_019aa810(void)
{
    int param_1 = (int)this;

  sub_019aa6d0();
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xffbf;
  return;
}

struct C_019aaa50 {
    void sub_019aaa50();
};

// @baa 0x019aaa50
void C_019aaa50::sub_019aaa50(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xff41 | 1;
  sub_019aa6d0();
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xffbf;
  return;
}

void sub_019ab010();
// @baa 0x019ab260
void sub_019ab260(void) { sub_019ab010(); }

struct C_019aba80 { C_019aba80* sub_019aba80(void); };

// @baa 0x019aba80
C_019aba80* C_019aba80::sub_019aba80(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019abaf0 { int sub_019abaf0(void); };

// @baa 0x019abaf0
int C_019abaf0::sub_019abaf0(void) { return *(int*)((char*)this + 0); }

// @baa 0x019ad2f0
int sub_019ad2f0(void) { return 30; }

// @baa 0x019ae1a0
undefined1 sub_019ae1a0(void)
{
  return 1;
}

void sub_019ae5a0();
// @baa 0x019ae690
void sub_019ae690(void) { sub_019ae5a0(); }

struct C_019ae9e0 { int sub_019ae9e0(void); };

// @baa 0x019ae9e0
int C_019ae9e0::sub_019ae9e0(void) { return *(int*)((char*)this + 0); }

struct C_019aea30 { int sub_019aea30(void); };

// @baa 0x019aea30
int C_019aea30::sub_019aea30(void) { return *(int*)((char*)this + 0); }

struct C_019aeaf0 {
    uint sub_019aeaf0();
};

// @baa 0x019aeaf0
uint C_019aeaf0::sub_019aeaf0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019aeb00 { unsigned sub_019aeb00(void); };

// @baa 0x019aeb00
unsigned C_019aeb00::sub_019aeb00(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_019aeb10 { unsigned sub_019aeb10(void); };

// @baa 0x019aeb10
unsigned C_019aeb10::sub_019aeb10(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_019aeb20 {
    uint sub_019aeb20();
};

// @baa 0x019aeb20
uint C_019aeb20::sub_019aeb20(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_019aeb30 {
    void sub_019aeb30(uint);
};

// @baa 0x019aeb30
void C_019aeb30::sub_019aeb30(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

// @baa 0x019af270
undefined4 * sub_019af270(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

void sub_01973ce0();
// @baa 0x019af460
void sub_019af460(void) { sub_01973ce0(); }

int sub_019aebb0(...);
int sub_019aec40(...);
// @baa 0x019af4a0
void sub_019af4a0(undefined4 param_1, undefined4 param_2)
{
  sub_019aebb0(param_1,param_2);
  sub_019aec40(param_1,param_2);
  return;
}

void sub_019af4c0();
// @baa 0x019af5f0
void sub_019af5f0(void) { sub_019af4c0(); }

// @baa 0x019af6b0
int sub_019af6b0(void) { return 35; }

// @baa 0x019af8a0
undefined1 sub_019af8a0(void)
{
  return 1;
}

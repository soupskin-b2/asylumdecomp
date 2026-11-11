// GFx_1a00000.cpp (part 1 of 2): 38 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01a02200();
};

int sub_019fec80(...);
int sub_01a017b0(...);
// @baa 0x01a02200
void C::sub_01a02200(void)
{
    int param_1 = (int)this;

  sub_01a017b0(param_1 + 0x178,&sub_019fec80,0);
  return;
}

struct C_01a05860 {
    void sub_01a05860();
};

int sub_01a04b90(void);
int sub_01a05050(void);
// @baa 0x01a05860
void C_01a05860::sub_01a05860(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x208);
  if ((iVar1 != 3) && (iVar1 != 4)) {
    if (iVar1 == 2) {
      sub_01a05050();
      return;
    }
    return;
  }
  sub_01a04b90();
  return;
}

struct C_01a07b70 { int sub_01a07b70(void); };

// @baa 0x01a07b70
int C_01a07b70::sub_01a07b70(void) { return *(int*)((char*)this + 0); }

struct C_01a07b80 {
    int sub_01a07b80(uint);
};

// @baa 0x01a07b80
int C_01a07b80::sub_01a07b80(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0xc;
}

struct C_01a07c20 { int sub_01a07c20(void); };

// @baa 0x01a07c20
int C_01a07c20::sub_01a07c20(void) { return *(int*)((char*)this + 0); }

struct C_01a07c30 {
    int sub_01a07c30(uint);
};

// @baa 0x01a07c30
int C_01a07c30::sub_01a07c30(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0xc;
}

struct C_01a07d00 { int sub_01a07d00(void); };

// @baa 0x01a07d00
int C_01a07d00::sub_01a07d00(void) { return *(int*)((char*)this + 0); }

struct C_01a07d10 {
    int sub_01a07d10(uint);
};

// @baa 0x01a07d10
int C_01a07d10::sub_01a07d10(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0xc;
}

struct C_01a07d30 { int sub_01a07d30(void); };

// @baa 0x01a07d30
int C_01a07d30::sub_01a07d30(void) { return *(int*)((char*)this + 112); }

struct C_01a07d40 {
    int sub_01a07d40(uint);
};

// @baa 0x01a07d40
int C_01a07d40::sub_01a07d40(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0x7c) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0xc;
}

struct C_01a07d90 { int sub_01a07d90(void); };

// @baa 0x01a07d90
int C_01a07d90::sub_01a07d90(void) { return *(int*)((char*)this + 0); }

struct C_01a09bd0 { C_01a09bd0* sub_01a09bd0(void); };

// @baa 0x01a09bd0
C_01a09bd0* C_01a09bd0::sub_01a09bd0(void) { return this; }

struct C_01a0a0a0 { void sub_01a0a0a0(void); };

// @baa 0x01a0a0a0
void C_01a0a0a0::sub_01a0a0a0(void) { *(int*)((char*)this + 0) = 0; }

struct C_01a0a0b0 { void sub_01a0a0b0(void); };

// @baa 0x01a0a0b0
void C_01a0a0b0::sub_01a0a0b0(void) { *(int*)((char*)this + 0) = 0; }

struct C_01a0a0c0 {
    int sub_01a0a0c0(uint);
};

// @baa 0x01a0a0c0
int C_01a0a0c0::sub_01a0a0c0(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0xc;
}

struct C_01a0a190 {
    void sub_01a0a190();
};

// @baa 0x01a0a190
void C_01a0a190::sub_01a0a190(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}

struct C_01a0e390 { C_01a0e390* sub_01a0e390(void); };

// @baa 0x01a0e390
C_01a0e390* C_01a0e390::sub_01a0e390(void) { return this; }

struct C_01a0e430 { void sub_01a0e430(void); };

// @baa 0x01a0e430
void C_01a0e430::sub_01a0e430(void) { *(int*)((char*)this + 0) = 0; }

struct C_01a0e440 {
    int sub_01a0e440(uint);
};

// @baa 0x01a0e440
int C_01a0e440::sub_01a0e440(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0xc;
}

struct C_01a0e480 { void sub_01a0e480(void); };

// @baa 0x01a0e480
void C_01a0e480::sub_01a0e480(void) { *(int*)((char*)this + 0) = 0; }

struct C_01a0e490 { int sub_01a0e490(void); };

// @baa 0x01a0e490
int C_01a0e490::sub_01a0e490(void) { return *(int*)((char*)this + 0); }

struct C_01a0e4a0 {
    int sub_01a0e4a0(uint);
};

// @baa 0x01a0e4a0
int C_01a0e4a0::sub_01a0e4a0(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0xc;
}

struct C_01a0e4c0 { void sub_01a0e4c0(void); };

// @baa 0x01a0e4c0
void C_01a0e4c0::sub_01a0e4c0(void) { *(int*)((char*)this + 0) = 0; }

struct C_01a0e4d0 { int sub_01a0e4d0(void); };

// @baa 0x01a0e4d0
int C_01a0e4d0::sub_01a0e4d0(void) { return *(int*)((char*)this + 0); }

struct C_01a0e4e0 {
    int sub_01a0e4e0(uint);
};

// @baa 0x01a0e4e0
int C_01a0e4e0::sub_01a0e4e0(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0x3c;
}

struct C_01a0e510 {
    int sub_01a0e510(uint);
};

// @baa 0x01a0e510
int C_01a0e510::sub_01a0e510(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0x3c;
}

struct C_01a0e540 { void sub_01a0e540(void); };

// @baa 0x01a0e540
void C_01a0e540::sub_01a0e540(void) { *(int*)((char*)this + 0) = 0; }

struct C_01a0e550 { int sub_01a0e550(void); };

// @baa 0x01a0e550
int C_01a0e550::sub_01a0e550(void) { return *(int*)((char*)this + 0); }

struct C_01a0e560 {
    int sub_01a0e560(uint);
};

// @baa 0x01a0e560
int C_01a0e560::sub_01a0e560(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 4;
}

struct C_01a0e580 {
    int sub_01a0e580(uint);
};

// @baa 0x01a0e580
int C_01a0e580::sub_01a0e580(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 4;
}

struct C_01a0e5c0 { int sub_01a0e5c0(void); };

// @baa 0x01a0e5c0
int C_01a0e5c0::sub_01a0e5c0(void) { return *(int*)((char*)this + 0); }

struct C_01a0e5d0 {
    int sub_01a0e5d0(uint);
};

// @baa 0x01a0e5d0
int C_01a0e5d0::sub_01a0e5d0(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 4;
}

struct C_01a0e5f0 { void sub_01a0e5f0(void); };

// @baa 0x01a0e5f0
void C_01a0e5f0::sub_01a0e5f0(void) { *(int*)((char*)this + 0) = 0; }

struct C_01a0e600 {
    int sub_01a0e600(uint);
};

// @baa 0x01a0e600
int C_01a0e600::sub_01a0e600(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0xc;
}

struct C_01a0e620 {
    int sub_01a0e620(uint);
};

// @baa 0x01a0e620
int C_01a0e620::sub_01a0e620(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 4;
}

// @baa 0x01a0e910
void sub_01a0e910(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_01a0eb70 {
    undefined4 sub_01a0eb70(uint);
};

// @baa 0x01a0eb70
undefined4 C_01a0eb70::sub_01a0eb70(uint param_2)
{
    int param_1 = (int)this;

  return *(undefined4 *)
          (*(int *)(*(int *)(param_1 + 0x34) + ((uint)((int)param_2 >> 2) >> 6) * 4) + 0x1c +
          (((int)param_2 >> 2 & 0x3fU) * 0xf + (param_2 & 3)) * 4);
}

struct C_01a0ec60 {
    void sub_01a0ec60();
};

// @baa 0x01a0ec60
void C_01a0ec60::sub_01a0ec60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  return;
}

// GFx_19d0000.cpp (part 1 of 2): 123 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_019d0c70();
// @baa 0x019d0d40
void sub_019d0d40(void) { sub_019d0c70(); }

struct C {
    void sub_019d14b0(undefined2);
};

// @baa 0x019d14b0
void C::sub_019d14b0(undefined2 param_2)
{
    int param_1 = (int)this;

  *(undefined2 *)(param_1 + 4) = param_2;
  return;
}

struct C_019d14c0 { void sub_019d14c0(int a0); };

// @baa 0x019d14c0
void C_019d14c0::sub_019d14c0(int a0) { *(int*)((char*)this + 8) = a0; }

struct C_019d1580 {
    void sub_019d1580(char);
};

// @baa 0x019d1580
void C_019d1580::sub_019d1580(char param_2)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0xfffe;
  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) | 1;
  }
  return;
}

struct C_019d15b0 {
    byte sub_019d15b0();
};

// @baa 0x019d15b0
byte C_019d15b0::sub_019d15b0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x10) & 1;
}

struct C_019d15c0 { int sub_019d15c0(void); };

// @baa 0x019d15c0
int C_019d15c0::sub_019d15c0(void) { return *(int*)((char*)this + 0); }

struct C_019d15d0 { int sub_019d15d0(void); };

// @baa 0x019d15d0
int C_019d15d0::sub_019d15d0(void) { return *(int*)((char*)this + 8); }

struct C_019d1600 {
    void sub_019d1600();
};

// @baa 0x019d1600
void C_019d1600::sub_019d1600(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x8d) = 0;
  return;
}

struct C_019d1610 {
    void sub_019d1610();
};

// @baa 0x019d1610
void C_019d1610::sub_019d1610(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

struct C_019d1620 {
    void sub_019d1620();
};

// @baa 0x019d1620
void C_019d1620::sub_019d1620(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

struct C_019d1710 {
    int sub_019d1710();
};

// @baa 0x019d1710
int C_019d1710::sub_019d1710(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x5c) + -0x28 + *(int *)(param_1 + 0x60) * 0x28;
}

struct C_019d1720 {
    int sub_019d1720();
};

// @baa 0x019d1720
int C_019d1720::sub_019d1720(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x68) + -0x18 + *(int *)(param_1 + 0x6c) * 0x18;
}

// @baa 0x019d1e20
bool sub_019d1e20(int * param_1, int * param_2)
{
  return *param_1 < *param_2;
}

struct C_019d1eb0 { void sub_019d1eb0(void); };

// @baa 0x019d1eb0
void C_019d1eb0::sub_019d1eb0(void) { *(int*)((char*)this + 0) = 0; }

struct C_019d1ec0 { int sub_019d1ec0(void); };

// @baa 0x019d1ec0
int C_019d1ec0::sub_019d1ec0(void) { return *(int*)((char*)this + 0); }

struct C_019d1ed0 {
    int sub_019d1ed0(int);
};

// @baa 0x019d1ed0
int C_019d1ed0::sub_019d1ed0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + param_2 * 4;
}

struct C_019d1ee0 {
    int sub_019d1ee0(int);
};

// @baa 0x019d1ee0
int C_019d1ee0::sub_019d1ee0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + param_2 * 4;
}

struct C_019d1f10 { void sub_019d1f10(void); };

// @baa 0x019d1f10
void C_019d1f10::sub_019d1f10(void) { *(int*)((char*)this + 0) = 0; }

struct C_019d1f20 { int sub_019d1f20(void); };

// @baa 0x019d1f20
int C_019d1f20::sub_019d1f20(void) { return *(int*)((char*)this + 0); }

struct C_019d1f30 {
    int sub_019d1f30(uint);
};

// @baa 0x019d1f30
int C_019d1f30::sub_019d1f30(uint param_2)
{
    int param_1 = (int)this;

  return (param_2 & 0x3ff) * 0x10 + *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 10) * 4);
}

struct C_019d1f60 { void sub_019d1f60(void); };

// @baa 0x019d1f60
void C_019d1f60::sub_019d1f60(void) { *(int*)((char*)this + 0) = 0; }

struct C_019d1f70 {
    int sub_019d1f70(int);
};

// @baa 0x019d1f70
int C_019d1f70::sub_019d1f70(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + param_2 * 4;
}

struct C_019d1f80 {
    int sub_019d1f80(int);
};

// @baa 0x019d1f80
int C_019d1f80::sub_019d1f80(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + param_2 * 4;
}

struct C_019d1f90 { int sub_019d1f90(void); };

// @baa 0x019d1f90
int C_019d1f90::sub_019d1f90(void) { return *(int*)((char*)this + 8); }

struct C_019d1fb0 { void sub_019d1fb0(void); };

// @baa 0x019d1fb0
void C_019d1fb0::sub_019d1fb0(void) { *(int*)((char*)this + 0) = 0; }

struct C_019d1fc0 {
    void sub_019d1fc0();
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x019d1fc0
void C_019d1fc0::sub_019d1fc0(void)
{
    int * param_1 = (int *)this;

  sub_01a37612((void *)param_1[2],0,*param_1 * 8);
  return;
}

struct C_019d1fe0 {
    int sub_019d1fe0(int);
};

// @baa 0x019d1fe0
int C_019d1fe0::sub_019d1fe0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + param_2 * 8;
}

struct C_019d1ff0 {
    int sub_019d1ff0(int);
};

// @baa 0x019d1ff0
int C_019d1ff0::sub_019d1ff0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + param_2 * 8;
}

struct C_019d2070 { int sub_019d2070(void); };

// @baa 0x019d2070
int C_019d2070::sub_019d2070(void) { return *(int*)((char*)this + 4); }

struct C_019d2080 {
    int sub_019d2080(int);
};

// @baa 0x019d2080
int C_019d2080::sub_019d2080(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x019d2090
void sub_019d2090(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_019d34d0 {
    int sub_019d34d0(int, int);
};

// @baa 0x019d34d0
int C_019d34d0::sub_019d34d0(int param_2, int param_3)
{
    int param_1 = (int)this;

  return ((param_2 + *(int *)(param_1 + 0x78)) / param_3) * param_3 - *(int *)(param_1 + 0x78);
}

struct C_019d34f0 { void sub_019d34f0(void); };

// @baa 0x019d34f0
void C_019d34f0::sub_019d34f0(void) { *(int*)((char*)this + 0) = 0; }

struct C_019d3500 {
    int sub_019d3500(uint);
};

// @baa 0x019d3500
int C_019d3500::sub_019d3500(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 8;
}

struct C_019d3540 { void sub_019d3540(void); };

// @baa 0x019d3540
void C_019d3540::sub_019d3540(void) { *(int*)((char*)this + 0) = 0; }

struct C_019d3550 {
    void sub_019d3550();
};

// @baa 0x019d3550
void C_019d3550::sub_019d3550(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    *param_1 = *param_1 + -1;
  }
  return;
}

struct C_019d3560 { int sub_019d3560(void); };

// @baa 0x019d3560
int C_019d3560::sub_019d3560(void) { return *(int*)((char*)this + 0); }

struct C_019d3570 {
    int sub_019d3570(uint);
};

// @baa 0x019d3570
int C_019d3570::sub_019d3570(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 4;
}

typedef uint size_t;

struct C_019d35b0 {
    void sub_019d35b0();
};

// @baa 0x019d35b0
void C_019d35b0::sub_019d35b0(void)
{
    size_t * param_1 = (size_t *)this;

  sub_01a37612((void *)param_1[2],0,*param_1);
  return;
}

struct C_019d35d0 { void sub_019d35d0(void); };

// @baa 0x019d35d0
void C_019d35d0::sub_019d35d0(void) { *(int*)((char*)this + 0) = 0; }

struct C_019d3660 {
    void sub_019d3660();
};

// @baa 0x019d3660
void C_019d3660::sub_019d3660(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}

void sub_018d3de0();
// @baa 0x019d42f0
void sub_019d42f0(void) { sub_018d3de0(); }

struct C_019d4360 { C_019d4360* sub_019d4360(void); };

// @baa 0x019d4360
C_019d4360* C_019d4360::sub_019d4360(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019d4370 { C_019d4370* sub_019d4370(void); };

// @baa 0x019d4370
C_019d4370* C_019d4370::sub_019d4370(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019d43a0 { void sub_019d43a0(void); };

// @baa 0x019d43a0
void C_019d43a0::sub_019d43a0(void) { *(int*)((char*)this + 0) = 0; }

struct C_019d43b0 {
    void sub_019d43b0();
};

// @baa 0x019d43b0
void C_019d43b0::sub_019d43b0(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    *param_1 = *param_1 + -1;
  }
  return;
}

struct C_019d43c0 {
    void sub_019d43c0(uint);
};

// @baa 0x019d43c0
void C_019d43c0::sub_019d43c0(uint param_2)
{
    uint * param_1 = (uint *)this;

  if (param_2 < *param_1) {
    *param_1 = param_2;
  }
  return;
}

struct C_019d43d0 { int sub_019d43d0(void); };

// @baa 0x019d43d0
int C_019d43d0::sub_019d43d0(void) { return *(int*)((char*)this + 0); }

struct C_019d43e0 {
    int sub_019d43e0(uint);
};

// @baa 0x019d43e0
int C_019d43e0::sub_019d43e0(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 4;
}

struct C_019d4400 {
    int sub_019d4400(uint);
};

// @baa 0x019d4400
int C_019d4400::sub_019d4400(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 4;
}

struct C_019d4460 { void sub_019d4460(void); };

// @baa 0x019d4460
void C_019d4460::sub_019d4460(void) { *(int*)((char*)this + 0) = 0; }

struct C_019d4470 {
    void sub_019d4470();
};

// @baa 0x019d4470
void C_019d4470::sub_019d4470(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    *param_1 = *param_1 + -1;
  }
  return;
}

struct C_019d4480 { int sub_019d4480(void); };

// @baa 0x019d4480
int C_019d4480::sub_019d4480(void) { return *(int*)((char*)this + 0); }

struct C_019d4490 {
    int sub_019d4490(uint);
};

// @baa 0x019d4490
int C_019d4490::sub_019d4490(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 8;
}

struct C_019d44b0 {
    int sub_019d44b0(uint);
};

// @baa 0x019d44b0
int C_019d44b0::sub_019d44b0(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 8;
}

struct C_019d44f0 { C_019d44f0* sub_019d44f0(void); };

// @baa 0x019d44f0
C_019d44f0* C_019d44f0::sub_019d44f0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019d4520 { void sub_019d4520(void); };

// @baa 0x019d4520
void C_019d4520::sub_019d4520(void) { *(int*)((char*)this + 0) = 0; }

struct C_019d4530 { int sub_019d4530(void); };

// @baa 0x019d4530
int C_019d4530::sub_019d4530(void) { return *(int*)((char*)this + 0); }

struct C_019d4540 {
    int sub_019d4540(uint);
};

// @baa 0x019d4540
int C_019d4540::sub_019d4540(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 8;
}

struct C_019d4580 { void sub_019d4580(void); };

// @baa 0x019d4580
void C_019d4580::sub_019d4580(void) { *(int*)((char*)this + 0) = 0; }

struct C_019d4590 { int sub_019d4590(void); };

// @baa 0x019d4590
int C_019d4590::sub_019d4590(void) { return *(int*)((char*)this + 0); }

struct C_019d45a0 {
    int sub_019d45a0(uint);
};

// @baa 0x019d45a0
int C_019d45a0::sub_019d45a0(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 8;
}

struct C_019d4640 {
    bool sub_019d4640();
};

// @baa 0x019d4640
bool C_019d4640::sub_019d4640(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_019d4650 { void sub_019d4650(void); };

// @baa 0x019d4650
void C_019d4650::sub_019d4650(void) { *(int*)((char*)this + 0) = -2; }

struct C_019d46d0 { void sub_019d46d0(void); };

// @baa 0x019d46d0
void C_019d46d0::sub_019d46d0(void) { *(int*)((char*)this + 0) = -2; }

struct C_019d46e0 {
    bool sub_019d46e0();
};

// @baa 0x019d46e0
bool C_019d46e0::sub_019d46e0(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_019d46f0 { void sub_019d46f0(void); };

// @baa 0x019d46f0
void C_019d46f0::sub_019d46f0(void) { *(int*)((char*)this + 0) = -2; }

struct C_019d4830 { void sub_019d4830(void); };

// @baa 0x019d4830
void C_019d4830::sub_019d4830(void) { *(int*)((char*)this + 0) = 0; }

struct C_019d4840 {
    int sub_019d4840(uint);
};

// @baa 0x019d4840
int C_019d4840::sub_019d4840(uint param_2)
{
    int param_1 = (int)this;

  return (param_2 & 0xfff) + *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 0xc) * 4);
}

// @baa 0x019d4890
void sub_019d4890(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}

struct C_019d49c0 { int sub_019d49c0(int a0); };

// @baa 0x019d49c0
int C_019d49c0::sub_019d49c0(int a0) { return *(int*)((char*)this + 4); }

struct C_019d49d0 { void sub_019d49d0(int a0); };

// @baa 0x019d49d0
void C_019d49d0::sub_019d49d0(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_019d4a40 { void sub_019d4a40(int a0); };

// @baa 0x019d4a40
void C_019d4a40::sub_019d4a40(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_019d4ab0 { void sub_019d4ab0(int a0); };

// @baa 0x019d4ab0
void C_019d4ab0::sub_019d4ab0(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_019d4f40 {
    void sub_019d4f40();
};

// @baa 0x019d4f40
void C_019d4f40::sub_019d4f40(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}

struct C_019d5270 {
    void sub_019d5270(uint, undefined2);
};

// @baa 0x019d5270
void C_019d5270::sub_019d5270(uint param_2, undefined2 param_3)
{
    int param_1 = (int)this;

  if (param_2 < *(uint *)(param_1 + 0x60)) {
    *(undefined2 *)
     (*(int *)(*(int *)(param_1 + 0x6c) + (param_2 >> 6) * 4) + 2 + (param_2 & 0x3f) * 8) = param_3;
  }
  return;
}

struct C_019d52a0 {
    void sub_019d52a0(uint);
};

// @baa 0x019d52a0
void C_019d52a0::sub_019d52a0(uint param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  if (param_2 < *(uint *)*param_1) {
    *(uint *)*param_1 = param_2;
  }
  return;
}

struct C_019d52b0 {
    undefined4 sub_019d52b0();
};

// @baa 0x019d52b0
undefined4 C_019d52b0::sub_019d52b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(undefined4 *)*param_1;
}

struct C_019d56b0 {
    void sub_019d56b0();
};

// @baa 0x019d56b0
void C_019d56b0::sub_019d56b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *(undefined4 *)*param_1 = 0;
  return;
}

struct C_019d56c0 {
    void sub_019d56c0(uint, undefined4);
};

// @baa 0x019d56c0
void C_019d56c0::sub_019d56c0(uint param_2, undefined4 param_3)
{
    int * param_1 = (int *)this;

  *(char *)((param_2 & 0xfff) + *(int *)(*(int *)(*param_1 + 0xc) + (param_2 >> 0xc) * 4)) =
       (char)param_3;
  *(char *)((param_2 + 1 & 0xfff) + *(int *)(*(int *)(*param_1 + 0xc) + (param_2 + 1 >> 0xc) * 4)) =
       (char)((uint)param_3 >> 8);
  *(char *)((param_2 + 2 & 0xfff) + *(int *)(*(int *)(*param_1 + 0xc) + (param_2 + 2 >> 0xc) * 4)) =
       (char)((uint)param_3 >> 0x10);
  *(char *)((param_2 + 3 & 0xfff) + *(int *)(*(int *)(*param_1 + 0xc) + (param_2 + 3 >> 0xc) * 4)) =
       (char)((uint)param_3 >> 0x18);
  return;
}

void sub_019d5400();
// @baa 0x019d62b0
void sub_019d62b0(void) { sub_019d5400(); }

void sub_019d5440();
// @baa 0x019d62c0
void sub_019d62c0(void) { sub_019d5440(); }

void sub_019d5340();
// @baa 0x019d62d0
void sub_019d62d0(void) { sub_019d5340(); }

extern char g_023f8ae4[];
struct C_019d9050 { void sub_019d9050(void); };

// @baa 0x019d9050
void C_019d9050::sub_019d9050(void) { *(int*)((char*)this + 0) = (int)g_023f8ae4; }

extern char g_023f8b14[];
struct C_019d9060 { void sub_019d9060(void); };

// @baa 0x019d9060
void C_019d9060::sub_019d9060(void) { *(int*)((char*)this + 0) = (int)g_023f8b14; }

struct C_019d9130 {
    void sub_019d9130();
};

// @baa 0x019d9130
void C_019d9130::sub_019d9130(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x3c) = 0;
  return;
}

struct C_019d9b10 {
    void sub_019d9b10();
};

// @baa 0x019d9b10
void C_019d9b10::sub_019d9b10(void)
{
    void * param_1 = (void *)this;

  *(undefined4 *)((int)param_1 + 0x640) = 0;
  *(undefined4 *)((int)param_1 + 0x644) = 0;
  *(undefined4 *)((int)param_1 + 0x648) = 0;
  sub_01a37612(param_1,0,0x640);
  return;
}

// @baa 0x019d9c70
void sub_019d9c70(void) { sub_018d3de0(); }

struct C_019d9e80 {
    int sub_019d9e80(int);
};

// @baa 0x019d9e80
int C_019d9e80::sub_019d9e80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_019d9e90 { int sub_019d9e90(void); };

// @baa 0x019d9e90
int C_019d9e90::sub_019d9e90(void) { return *(int*)((char*)this + 4); }

struct C_019d9ee0 { int sub_019d9ee0(void); };

// @baa 0x019d9ee0
int C_019d9ee0::sub_019d9ee0(void) { return *(int*)((char*)this + 0); }

struct C_019d9ef0 { int sub_019d9ef0(void); };

// @baa 0x019d9ef0
int C_019d9ef0::sub_019d9ef0(void) { return *(int*)((char*)this + 0); }

struct C_019d9f50 {
    uint sub_019d9f50();
};

// @baa 0x019d9f50
uint C_019d9f50::sub_019d9f50(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019d9f60 { unsigned sub_019d9f60(void); };

// @baa 0x019d9f60
unsigned C_019d9f60::sub_019d9f60(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_019d9f70 { unsigned sub_019d9f70(void); };

// @baa 0x019d9f70
unsigned C_019d9f70::sub_019d9f70(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_019d9f80 {
    uint sub_019d9f80();
};

// @baa 0x019d9f80
uint C_019d9f80::sub_019d9f80(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_019d9f90 {
    void sub_019d9f90(uint);
};

// @baa 0x019d9f90
void C_019d9f90::sub_019d9f90(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

// @baa 0x019da150
undefined4 * sub_019da150(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

struct C_019da960 {
    bool sub_019da960();
};

// @baa 0x019da960
bool C_019da960::sub_019da960(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x1c) != 0;
}

struct C_019da970 { int sub_019da970(void); };

// @baa 0x019da970
int C_019da970::sub_019da970(void) { return *(int*)((char*)this + 32); }

struct C_019da980 { void sub_019da980(void); };

// @baa 0x019da980
void C_019da980::sub_019da980(void) { *(int*)((char*)this + 32) = 0; }

struct C_019dad30 {
    void sub_019dad30(char);
};

// @baa 0x019dad30
void C_019dad30::sub_019dad30(char param_2)
{
    byte * param_1 = (byte *)this;

  if (param_2 != '\0') {
    *param_1 = *param_1 | 1;
    return;
  }
  *param_1 = *param_1 & 0xfe;
  return;
}

// @baa 0x019db200
int __stdcall sub_019db200(int a0) { return 0; }

void sub_01973ce0();
// @baa 0x019db210
void sub_019db210(void) { sub_01973ce0(); }

// @baa 0x019dc090
undefined1 sub_019dc090(void)
{
  return 1;
}

void sub_019dc470();
// @baa 0x019dc5d0
void sub_019dc5d0(void) { sub_019dc470(); }

struct C_019dca10 {
    void sub_019dca10();
};

// @baa 0x019dca10
void C_019dca10::sub_019dca10(void)
{
    int * param_1 = (int *)this;

  int *piVar1;
  
  piVar1 = param_1 + 0x11;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)(**(int **)(*param_1 + 0x14) + 0x70))();
    param_1[0x10] = 0;
  }
  return;
}

extern char g_023f9644[];
struct C_019dcc90 { void sub_019dcc90(void); };

// @baa 0x019dcc90
void C_019dcc90::sub_019dcc90(void) { *(int*)((char*)this + 0) = (int)g_023f9644; }

struct C_019dcea0 {
    undefined4 * sub_019dcea0(byte);
};

int sub_00402660(...);
// @baa 0x019dcea0
undefined4 * C_019dcea0::sub_019dcea0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f9644));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x019dd920
int sub_019dd920(void) { return 27; }

// @baa 0x019ddc30
undefined1 sub_019ddc30(void)
{
  return 1;
}

void sub_019de010();
// @baa 0x019de1e0
void sub_019de1e0(void) { sub_019de010(); }

struct C_019de370 { int sub_019de370(void); };

// @baa 0x019de370
int C_019de370::sub_019de370(void) { return *(int*)((char*)this + 636); }

struct C_019de5e0 { int sub_019de5e0(void); };

// @baa 0x019de5e0
int C_019de5e0::sub_019de5e0(void) { return *(int*)((char*)this + 0); }

// @baa 0x019de800
int __stdcall sub_019de800(int a0) { return 0; }

// @baa 0x019df230
int sub_019df230(void) { return 24; }

// @baa 0x019df410
undefined1 sub_019df410(void)
{
  return 1;
}

void sub_019df7f0();
// @baa 0x019df950
void sub_019df950(void) { sub_019df7f0(); }

extern char g_023ff660[];
struct C_019dfae0 { void sub_019dfae0(void); };

// @baa 0x019dfae0
void C_019dfae0::sub_019dfae0(void) { *(int*)((char*)this + 0) = (int)g_023ff660; }

struct C_019dfaf0 {
    undefined4 * sub_019dfaf0(byte);
};

// @baa 0x019dfaf0
undefined4 * C_019dfaf0::sub_019dfaf0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ff660));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_019dfb30 { C_019dfb30* sub_019dfb30(void); };

// @baa 0x019dfb30
C_019dfb30* C_019dfb30::sub_019dfb30(void) { *(int*)((char*)this + 0) = (int)g_023ff660; return this; }

struct C_019dfd30 { int sub_019dfd30(void); };

// @baa 0x019dfd30
int C_019dfd30::sub_019dfd30(void) { return *(int*)((char*)this + 0); }

struct C_019dfd40 { int sub_019dfd40(void); };

// @baa 0x019dfd40
int C_019dfd40::sub_019dfd40(void) { return *(int*)((char*)this + 0); }

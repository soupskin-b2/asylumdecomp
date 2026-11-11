// GFx_1920000.cpp (part 1 of 5): 160 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01920200(undefined2);
};

// @baa 0x01920200
void C::sub_01920200(undefined2 param_2)
{
    int * param_1 = (int *)this;

  if (*param_1 == 0) {
    *(undefined2 *)((int)param_1 + 10) = param_2;
  }
  return;
}

struct C_01920220 {
    void sub_01920220();
};

// @baa 0x01920220
void C_01920220::sub_01920220(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0x35) = 0;
  return;
}

struct C_01921680 {
    void sub_01921680(undefined4 *, undefined4 *);
};

// @baa 0x01921680
void C_01921680::sub_01921680(undefined4 * param_2, undefined4 * param_3)
{
    int param_1 = (int)this;

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x44);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x40);
  }
  return;
}

struct C_01921aa0 {
    int sub_01921aa0(int);
};

// @baa 0x01921aa0
int C_01921aa0::sub_01921aa0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_01921ab0 { int sub_01921ab0(void); };

// @baa 0x01921ab0
int C_01921ab0::sub_01921ab0(void) { return *(int*)((char*)this + 4); }

struct C_01921ac0 {
    int sub_01921ac0(int);
};

// @baa 0x01921ac0
int C_01921ac0::sub_01921ac0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01921ad0 { int sub_01921ad0(void); };

// @baa 0x01921ad0
int C_01921ad0::sub_01921ad0(void) { return *(int*)((char*)this + 4); }

struct C_01921ae0 {
    int sub_01921ae0(int);
};

// @baa 0x01921ae0
int C_01921ae0::sub_01921ae0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_01921af0 { int sub_01921af0(void); };

// @baa 0x01921af0
int C_01921af0::sub_01921af0(void) { return *(int*)((char*)this + 4); }

struct C_01921b20 { int sub_01921b20(void); };

// @baa 0x01921b20
int C_01921b20::sub_01921b20(void) { return *(int*)((char*)this + 0); }

struct C_01921b30 { int sub_01921b30(void); };

// @baa 0x01921b30
int C_01921b30::sub_01921b30(void) { return *(int*)((char*)this + 4); }

struct C_01921b40 { int sub_01921b40(void); };

// @baa 0x01921b40
int C_01921b40::sub_01921b40(void) { return *(int*)((char*)this + 0); }

struct C_01921b90 {
    int sub_01921b90(int);
};

// @baa 0x01921b90
int C_01921b90::sub_01921b90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01921ba0 { int sub_01921ba0(void); };

// @baa 0x01921ba0
int C_01921ba0::sub_01921ba0(void) { return *(int*)((char*)this + 4); }

struct C_01921bb0 { C_01921bb0* sub_01921bb0(void); };

// @baa 0x01921bb0
C_01921bb0* C_01921bb0::sub_01921bb0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01921c10 { int sub_01921c10(void); };

// @baa 0x01921c10
int C_01921c10::sub_01921c10(void) { return *(int*)((char*)this + 0); }

struct C_01921c20 { int sub_01921c20(void); };

// @baa 0x01921c20
int C_01921c20::sub_01921c20(void) { return *(int*)((char*)this + 0); }

struct C_01921c30 { int sub_01921c30(void); };

// @baa 0x01921c30
int C_01921c30::sub_01921c30(void) { return *(int*)((char*)this + 0); }

void sub_018d3de0();
// @baa 0x01921c40
void sub_01921c40(void) { sub_018d3de0(); }

// @baa 0x01921f80
byte sub_01921f80(byte param_1, byte param_2)
{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}

void sub_018f3d40();
// @baa 0x01922030
void sub_01922030(void) { sub_018f3d40(); }

struct C_01922e80 {
    void sub_01922e80(undefined4, undefined4);
};

int sub_01921620(...);
// @baa 0x01922e80
void C_01922e80::sub_01922e80(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_01921620(*(undefined4 *)(param_1 + 0x30),param_2,param_3);
  return;
}

// @baa 0x01923470
void sub_01923470(void) { sub_018d3de0(); }

struct C_01923800 { C_01923800* sub_01923800(void); };

// @baa 0x01923800
C_01923800* C_01923800::sub_01923800(void) { return this; }

// @baa 0x01923d40
void sub_01923d40(void) { sub_018d3de0(); }

// @baa 0x01924fb0
void __stdcall sub_01924fb0(int a0) {  }

// @baa 0x01924fc0
int sub_01924fc0(void) { return 0; }

// @baa 0x01924fd0
void __stdcall sub_01924fd0(int a0) {  }

void sub_019248c0();
// @baa 0x01925330
void sub_01925330(void) { sub_019248c0(); }

void sub_01923ec0();
// @baa 0x019253e0
void sub_019253e0(void) { sub_01923ec0(); }

void sub_01923f90();
// @baa 0x019253f0
void sub_019253f0(void) { sub_01923f90(); }

// @baa 0x019254f0
void sub_019254f0(void) { sub_018d3de0(); }

void sub_019240a0();
// @baa 0x019256d0
void sub_019256d0(void) { sub_019240a0(); }

void sub_01924f90();
// @baa 0x01925c60
void sub_01925c60(void) { sub_01924f90(); }

struct C_01926d60 {
    void sub_01926d60(int);
};

int sub_01926d10(void);
extern "C" __declspec(dllimport) int memmove(...);
// @baa 0x01926d60
void C_01926d60::sub_01926d60(int param_2)
{
    int * param_1 = (int *)this;

  void *_Dst;
  
  if (param_1[1] == 1) {
    sub_01926d10();
    return;
  }
  _Dst = (void *)(*param_1 + param_2 * 4);
  memmove(_Dst,(void *)((int)_Dst + 4),(param_1[1] - param_2) * 4 - 4);
  param_1[1] = param_1[1] + -1;
  return;
}

struct C_01928d70 { char* sub_01928d70(void); };

// @baa 0x01928d70
char* C_01928d70::sub_01928d70(void) { return (char*)this + 60; }

// @baa 0x01928d80
int sub_01928d80(void) { return 1; }

void sub_01926de0();
// @baa 0x01928f90
void sub_01928f90(void) { sub_01926de0(); }

void sub_01928fa0();
// @baa 0x01929550
void sub_01929550(void) { sub_01928fa0(); }

void sub_01929180();
// @baa 0x01929560
void sub_01929560(void) { sub_01929180(); }

struct C_019295c0 {
    undefined4 sub_019295c0(undefined4 *);
};

// @baa 0x019295c0
undefined4 C_019295c0::sub_019295c0(undefined4 * param_2)
{
    int param_1 = (int)this;

  *param_2 = *(undefined4 *)(param_1 + 0x40);
  return *(undefined4 *)(param_1 + 0x38);
}

struct C_019295d0 {
    undefined4 sub_019295d0(undefined4 *);
};

// @baa 0x019295d0
undefined4 C_019295d0::sub_019295d0(undefined4 * param_2)
{
    int param_1 = (int)this;

  *param_2 = *(undefined4 *)(param_1 + 0x44);
  return *(undefined4 *)(param_1 + 0x3c);
}

struct C_019295e0 {
    void sub_019295e0(undefined4 *, undefined4 *, undefined4 *, undefined4 *);
};

// @baa 0x019295e0
void C_019295e0::sub_019295e0(undefined4 * param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5)
{
    int param_1 = (int)this;

  *param_2 = *(undefined4 *)(param_1 + 0x38);
  *param_3 = *(undefined4 *)(param_1 + 0x40);
  *param_4 = *(undefined4 *)(param_1 + 0x3c);
  *param_5 = *(undefined4 *)(param_1 + 0x44);
  return;
}

struct C_01929610 {
    void sub_01929610(int);
};

// @baa 0x01929610
void C_01929610::sub_01929610(int param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_1 + 0x44);
  return;
}

struct C_01929640 { float sub_01929640(void); };

// @baa 0x01929640
float C_01929640::sub_01929640(void) { return *(float*)((char*)this + 72); }

struct C_01929880 { float sub_01929880(void); };

// @baa 0x01929880
float C_01929880::sub_01929880(void) { return *(float*)((char*)this + 116); }

struct C_01929890 {
    int sub_01929890(int);
};

// @baa 0x01929890
int C_01929890::sub_01929890(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_019298a0 {
    int sub_019298a0(int);
};

// @baa 0x019298a0
int C_019298a0::sub_019298a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01929db0 {
    bool sub_01929db0(int);
};

// @baa 0x01929db0
bool C_01929db0::sub_01929db0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 == param_2;
}

struct C_01929e30 {
    undefined1 sub_01929e30();
};

// @baa 0x01929e30
undefined1 C_01929e30::sub_01929e30(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x30);
}

struct C_01929e40 { float sub_01929e40(void); };

// @baa 0x01929e40
float C_01929e40::sub_01929e40(void) { return *(float*)((char*)this + 52); }

struct C_01929e50 { int sub_01929e50(void); };

// @baa 0x01929e50
int C_01929e50::sub_01929e50(void) { return *(int*)((char*)this + 56); }

struct C_01929e60 { int sub_01929e60(void); };

// @baa 0x01929e60
int C_01929e60::sub_01929e60(void) { return *(int*)((char*)this + 76); }

struct C_01929e70 {
    uint sub_01929e70();
};

// @baa 0x01929e70
uint C_01929e70::sub_01929e70(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x1c) >> 0xc & 1;
}

struct C_01929e80 { void sub_01929e80(int a0); };

// @baa 0x01929e80
void C_01929e80::sub_01929e80(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_01929e90 {
    void sub_01929e90(char);
};

// @baa 0x01929e90
void C_01929e90::sub_01929e90(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 1;
    return;
  }
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfe;
  return;
}

struct C_01929eb0 { char* sub_01929eb0(void); };

// @baa 0x01929eb0
char* C_01929eb0::sub_01929eb0(void) { return (char*)this + 12; }

struct C_01929ec0 {
    undefined1 sub_01929ec0();
};

// @baa 0x01929ec0
undefined1 C_01929ec0::sub_01929ec0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x18);
}

struct C_01929ef0 {
    void sub_01929ef0();
};

// @baa 0x01929ef0
void C_01929ef0::sub_01929ef0(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 1;
  return;
}

struct C_01929f00 {
    void sub_01929f00();
};

// @baa 0x01929f00
void C_01929f00::sub_01929f00(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xfe;
  return;
}

struct C_01929f10 {
    byte sub_01929f10();
};

// @baa 0x01929f10
byte C_01929f10::sub_01929f10(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x60) & 1;
}

struct C_01929f20 {
    void sub_01929f20();
};

// @baa 0x01929f20
void C_01929f20::sub_01929f20(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 2;
  return;
}

struct C_01929f30 {
    void sub_01929f30();
};

// @baa 0x01929f30
void C_01929f30::sub_01929f30(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xfd;
  return;
}

struct C_01929f40 {
    byte sub_01929f40();
};

// @baa 0x01929f40
byte C_01929f40::sub_01929f40(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x60) >> 1 & 1;
}

struct C_01929f50 {
    byte sub_01929f50();
};

// @baa 0x01929f50
byte C_01929f50::sub_01929f50(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x60) >> 2 & 1;
}

struct C_01929f60 {
    void sub_01929f60();
};

// @baa 0x01929f60
void C_01929f60::sub_01929f60(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 8;
  return;
}

struct C_01929f70 {
    void sub_01929f70();
};

// @baa 0x01929f70
void C_01929f70::sub_01929f70(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xf7;
  return;
}

struct C_01929f80 {
    byte sub_01929f80();
};

// @baa 0x01929f80
byte C_01929f80::sub_01929f80(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x60) >> 3 & 1;
}

struct C_01929f90 {
    void sub_01929f90();
};

// @baa 0x01929f90
void C_01929f90::sub_01929f90(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xef;
  return;
}

struct C_01929fa0 {
    byte sub_01929fa0();
};

// @baa 0x01929fa0
byte C_01929fa0::sub_01929fa0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x60) >> 4 & 1;
}

struct C_01929fb0 {
    void sub_01929fb0();
};

// @baa 0x01929fb0
void C_01929fb0::sub_01929fb0(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) | 0x40;
  return;
}

struct C_01929fc0 {
    void sub_01929fc0();
};

// @baa 0x01929fc0
void C_01929fc0::sub_01929fc0(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xffbf;
  return;
}

struct C_0192a090 {
    void sub_0192a090();
};

// @baa 0x0192a090
void C_0192a090::sub_0192a090(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) | 0x8000;
  return;
}

struct C_0192a0a0 {
    ushort sub_0192a0a0();
};

// @baa 0x0192a0a0
ushort C_0192a0a0::sub_0192a0a0(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 6) >> 0xe & 1;
}

struct C_0192a0b0 {
    ushort sub_0192a0b0();
};

// @baa 0x0192a0b0
ushort C_0192a0b0::sub_0192a0b0(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 6) >> 0xd & 1;
}

struct C_0192a0c0 {
    ushort sub_0192a0c0();
};

// @baa 0x0192a0c0
ushort C_0192a0c0::sub_0192a0c0(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 6) >> 0xc & 1;
}

struct C_0192a0d0 {
    ushort sub_0192a0d0();
};

// @baa 0x0192a0d0
ushort C_0192a0d0::sub_0192a0d0(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 6) >> 0xb & 1;
}

struct C_0192a0e0 {
    ushort sub_0192a0e0();
};

// @baa 0x0192a0e0
ushort C_0192a0e0::sub_0192a0e0(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 6) >> 10 & 1;
}

struct C_0192a0f0 {
    ushort sub_0192a0f0();
};

// @baa 0x0192a0f0
ushort C_0192a0f0::sub_0192a0f0(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 6) >> 8 & 1;
}

struct C_0192a100 {
    undefined4 sub_0192a100();
};

// @baa 0x0192a100
undefined4 C_0192a100::sub_0192a100(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  uVar1 = 1;
  if (((*(byte *)(param_1 + 7) & 1) == 0) || ((*(ushort *)(param_1 + 4) & 0xf000) != 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

struct C_0192a120 {
    byte sub_0192a120();
};

// @baa 0x0192a120
byte C_0192a120::sub_0192a120(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 6) >> 3 & 1;
}

struct C_0192a130 {
    bool sub_0192a130();
};

// @baa 0x0192a130
bool C_0192a130::sub_0192a130(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x54) != 0;
}

struct C_0192a140 { int sub_0192a140(void); };

// @baa 0x0192a140
int C_0192a140::sub_0192a140(void) { return *(int*)((char*)this + 84); }

struct C_0192a180 {
    void sub_0192a180();
};

// @baa 0x0192a180
void C_0192a180::sub_0192a180(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)((int)param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  return;
}

struct C_0192a1a0 { void sub_0192a1a0(int a0); };

// @baa 0x0192a1a0
void C_0192a1a0::sub_0192a1a0(int a0) { *(int*)((char*)this + 0) = a0; }

struct C_0192a1b0 { int sub_0192a1b0(void); };

// @baa 0x0192a1b0
int C_0192a1b0::sub_0192a1b0(void) { return *(int*)((char*)this + 28); }

struct C_0192a1f0 {
    void sub_0192a1f0(undefined2);
};

// @baa 0x0192a1f0
void C_0192a1f0::sub_0192a1f0(undefined2 param_2)
{
    int param_1 = (int)this;

  *(undefined2 *)(param_1 + 0x24) = param_2;
  return;
}

struct C_0192a200 {
    int sub_0192a200();
};

// @baa 0x0192a200
int C_0192a200::sub_0192a200(void)
{
    int param_1 = (int)this;

  return (int)*(short *)(param_1 + 0x24);
}

struct C_0192a210 {
    void sub_0192a210(undefined4, undefined4);
};

// @baa 0x0192a210
void C_0192a210::sub_0192a210(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  return;
}

struct C_0192a230 { int sub_0192a230(void); };

// @baa 0x0192a230
int C_0192a230::sub_0192a230(void) { return *(int*)((char*)this + 16); }

struct C_0192a240 { int sub_0192a240(void); };

// @baa 0x0192a240
int C_0192a240::sub_0192a240(void) { return *(int*)((char*)this + 20); }

struct C_0192a250 {
    float10 sub_0192a250();
};

// @baa 0x0192a250
float10 C_0192a250::sub_0192a250(void)
{
    int param_1 = (int)this;

  return (float10)*(int *)(param_1 + 8);
}

struct C_0192a260 {
    float10 sub_0192a260();
};

// @baa 0x0192a260
float10 C_0192a260::sub_0192a260(void)
{
    int param_1 = (int)this;

  return (float10)*(int *)(param_1 + 0xc);
}

struct C_0192a2b0 {
    void sub_0192a2b0();
};

// @baa 0x0192a2b0
void C_0192a2b0::sub_0192a2b0(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  return;
}

struct C_0192a2d0 {
    void sub_0192a2d0(undefined1);
};

// @baa 0x0192a2d0
void C_0192a2d0::sub_0192a2d0(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x18) = param_2;
  return;
}

struct C_0192a320 {
    void sub_0192a320(undefined1);
};

// @baa 0x0192a320
void C_0192a320::sub_0192a320(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x19) = param_2;
  return;
}

struct C_0192a330 {
    int sub_0192a330();
};

// @baa 0x0192a330
int C_0192a330::sub_0192a330(void)
{
    int param_1 = (int)this;

  return (int)*(char *)(param_1 + 0x19);
}

struct C_0192a340 {
    void sub_0192a340(undefined2, undefined2);
};

// @baa 0x0192a340
void C_0192a340::sub_0192a340(undefined2 param_2, undefined2 param_3)
{
    int param_1 = (int)this;

  *(undefined2 *)(param_1 + 0x10) = param_2;
  *(undefined2 *)(param_1 + 0x12) = param_3;
  return;
}

struct C_0192a380 {
    float10 sub_0192a380();
};

// @baa 0x0192a380
float10 C_0192a380::sub_0192a380(void)
{
    int param_1 = (int)this;

  return (float10)*(int *)(param_1 + 8);
}

struct C_0192a390 {
    float10 sub_0192a390();
};

// @baa 0x0192a390
float10 C_0192a390::sub_0192a390(void)
{
    int param_1 = (int)this;

  return (float10)*(int *)(param_1 + 0xc);
}

struct C_0192a3e0 {
    void sub_0192a3e0();
};

// @baa 0x0192a3e0
void C_0192a3e0::sub_0192a3e0(void)
{
    uint * param_1 = (uint *)this;

  *param_1 = *param_1 & 0xfffffff | 0xc0000000;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  *(undefined2 *)((int)param_1 + 0x1a) = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined2 *)((int)param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  return;
}

struct C_0192a410 {
    void sub_0192a410();
};

// @baa 0x0192a410
void C_0192a410::sub_0192a410(void)
{
    uint * param_1 = (uint *)this;

  *param_1 = *param_1 & 0xfffffff | 0x40000000;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  return;
}

struct C_0192a440 {
    uint sub_0192a440();
};

// @baa 0x0192a440
uint C_0192a440::sub_0192a440(void)
{
    uint * param_1 = (uint *)this;

  return *param_1 >> 0x1e & 1;
}

struct C_0192a700 { void sub_0192a700(int a0); };

// @baa 0x0192a700
void C_0192a700::sub_0192a700(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_0192a710 {
    void sub_0192a710();
};

// @baa 0x0192a710
void C_0192a710::sub_0192a710(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 1;
  return;
}

struct C_0192a720 {
    void sub_0192a720();
};

// @baa 0x0192a720
void C_0192a720::sub_0192a720(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) & 0xfe;
  return;
}

struct C_0192a730 {
    byte sub_0192a730();
};

// @baa 0x0192a730
byte C_0192a730::sub_0192a730(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x74) & 1;
}

struct C_0192a740 {
    void sub_0192a740();
};

// @baa 0x0192a740
void C_0192a740::sub_0192a740(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 2;
  return;
}

struct C_0192a750 {
    void sub_0192a750();
};

// @baa 0x0192a750
void C_0192a750::sub_0192a750(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) & 0xfd;
  return;
}

struct C_0192a760 {
    byte sub_0192a760();
};

// @baa 0x0192a760
byte C_0192a760::sub_0192a760(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x74) >> 1 & 1;
}

struct C_0192a770 {
    byte sub_0192a770();
};

// @baa 0x0192a770
byte C_0192a770::sub_0192a770(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x74) >> 2 & 1;
}

struct C_0192aa50 { void sub_0192aa50(int a0); };

// @baa 0x0192aa50
void C_0192aa50::sub_0192aa50(int a0) { *(int*)((char*)this + 40) = a0; }

struct C_0192aad0 {
    int sub_0192aad0(int);
};

// @baa 0x0192aad0
int C_0192aad0::sub_0192aad0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0192aae0 { C_0192aae0* sub_0192aae0(void); };

// @baa 0x0192aae0
C_0192aae0* C_0192aae0::sub_0192aae0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_0192ab70 { int sub_0192ab70(void); };

// @baa 0x0192ab70
int C_0192ab70::sub_0192ab70(void) { return *(int*)((char*)this + 0); }

struct C_0192ab80 { int sub_0192ab80(void); };

// @baa 0x0192ab80
int C_0192ab80::sub_0192ab80(void) { return *(int*)((char*)this + 0); }

struct C_0192aba0 {
    uint sub_0192aba0();
};

// @baa 0x0192aba0
uint C_0192aba0::sub_0192aba0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_0192abb0 { unsigned sub_0192abb0(void); };

// @baa 0x0192abb0
unsigned C_0192abb0::sub_0192abb0(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_0192abc0 { unsigned sub_0192abc0(void); };

// @baa 0x0192abc0
unsigned C_0192abc0::sub_0192abc0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_0192abd0 {
    uint sub_0192abd0();
};

// @baa 0x0192abd0
uint C_0192abd0::sub_0192abd0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_0192abe0 {
    void sub_0192abe0(uint);
};

// @baa 0x0192abe0
void C_0192abe0::sub_0192abe0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

// @baa 0x0192ac00
int sub_0192ac00(int a0) { return a0; }

struct C_0192ad90 {
    uint sub_0192ad90();
};

// @baa 0x0192ad90
uint C_0192ad90::sub_0192ad90(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xc) + 0x1c) >> 0xc & 1;
}

struct C_0192ada0 {
    void sub_0192ada0();
};

// @baa 0x0192ada0
void C_0192ada0::sub_0192ada0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  *(undefined1 *)((int)param_1 + 0x17) = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined2 *)((int)param_1 + 0x1e) = 0;
  return;
}

struct C_0192aed0 { int sub_0192aed0(void); };

// @baa 0x0192aed0
int C_0192aed0::sub_0192aed0(void) { return *(int*)((char*)this + 80); }

struct C_0192aee0 {
    bool sub_0192aee0();
};

// @baa 0x0192aee0
bool C_0192aee0::sub_0192aee0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x50) != 0;
}

struct C_0192af00 {
    undefined4 sub_0192af00(int);
};

// @baa 0x0192af00
undefined4 C_0192af00::sub_0192af00(int param_2)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + param_2 * 4);
}

struct C_0192af10 { int sub_0192af10(void); };

// @baa 0x0192af10
int C_0192af10::sub_0192af10(void) { return *(int*)((char*)this + 4); }

struct C_0192afc0 {
    undefined4 sub_0192afc0();
};

// @baa 0x0192afc0
undefined4 C_0192afc0::sub_0192afc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(undefined4 *)(*(int *)*param_1 + param_1[2] * 4);
}

struct C_0192afd0 {
    undefined4 sub_0192afd0();
};

// @baa 0x0192afd0
undefined4 C_0192afd0::sub_0192afd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(undefined4 *)(*(int *)*param_1 + param_1[2] * 4);
}

struct C_0192b040 {
    undefined4 sub_0192b040();
};

// @baa 0x0192b040
undefined4 C_0192b040::sub_0192b040(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(undefined4 *)(*(int *)*param_1 + param_1[2] * 4);
}

int sub_0192b6e0(...);
// @baa 0x0192c210
void sub_0192c210(int param_1, undefined4 param_2, undefined4 param_3)
{
  sub_0192b6e0(param_1,param_2,param_3,*(int *)(param_1 + 0x44) != 0);
  return;
}

// @baa 0x0192c240
void sub_0192c240(int * param_1, undefined4 param_2, undefined4 param_3)
{
  if (param_1[0x11] == 0) {
                    
                    
    (**(code **)(**(int **)(*param_1 + 0x14) + 0x70))();
    return;
  }
  sub_0192b6e0(param_1,param_2,param_3,2);
  return;
}

void sub_0192c060();
// @baa 0x0192c430
void sub_0192c430(void) { sub_0192c060(); }

struct C_0192e750 {
    void sub_0192e750(int, int);
};

int sub_0192c630(void);
// @baa 0x0192e750
void C_0192e750::sub_0192e750(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  if (param_1[1] == param_3) {
    sub_0192c630();
    return;
  }
  memmove((void *)(*param_1 + param_2 * 4),(void *)(*param_1 + (param_2 + param_3) * 4),
          ((param_1[1] - param_2) - param_3) * 4);
  param_1[1] = param_1[1] - param_3;
  return;
}

void sub_0192e7a0();
// @baa 0x0192e8d0
void sub_0192e8d0(void) { sub_0192e7a0(); }

struct C_0192ea70 {
    bool sub_0192ea70();
};

// @baa 0x0192ea70
bool C_0192ea70::sub_0192ea70(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == 0;
}

struct C_0192ea80 {
    void sub_0192ea80();
};

// @baa 0x0192ea80
void C_0192ea80::sub_0192ea80(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  return;
}

struct C_0192eab0 {
    int sub_0192eab0(int);
};

// @baa 0x0192eab0
int C_0192eab0::sub_0192eab0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_0192eac0 {
    int sub_0192eac0(int);
};

// @baa 0x0192eac0
int C_0192eac0::sub_0192eac0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_0192ead0 { int sub_0192ead0(void); };

// @baa 0x0192ead0
int C_0192ead0::sub_0192ead0(void) { return *(int*)((char*)this + 4); }

struct C_0192eaf0 {
    uint sub_0192eaf0();
};

// @baa 0x0192eaf0
uint C_0192eaf0::sub_0192eaf0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_0192eb00 { unsigned sub_0192eb00(void); };

// @baa 0x0192eb00
unsigned C_0192eb00::sub_0192eb00(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_0192eb10 { unsigned sub_0192eb10(void); };

// @baa 0x0192eb10
unsigned C_0192eb10::sub_0192eb10(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_0192eb20 {
    uint sub_0192eb20();
};

// @baa 0x0192eb20
uint C_0192eb20::sub_0192eb20(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_0192eb30 {
    void sub_0192eb30(uint);
};

// @baa 0x0192eb30
void C_0192eb30::sub_0192eb30(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_0192ed50 {
    undefined4 sub_0192ed50();
};

// @baa 0x0192ed50
undefined4 C_0192ed50::sub_0192ed50(void)
{
    int * param_1 = (int *)this;

  if (((uint)param_1[2] < *(uint *)(*param_1 + 4)) && (param_1[7] != 0)) {
    return 0;
  }
  return 1;
}

int sub_0192eb50(...);
// @baa 0x0192ee10
void sub_0192ee10(int param_1, undefined4 param_2, undefined4 param_3)
{
  sub_0192eb50(param_1,*(undefined4 *)(param_1 + 4),param_2,param_3);
  return;
}

// @baa 0x0192ee30
undefined4 * sub_0192ee30(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    param_1[2] = 0xffffffff;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *(undefined1 *)(param_1 + 9) = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

void sub_0192f3f0();
// @baa 0x0192f5d0
void sub_0192f5d0(void) { sub_0192f3f0(); }

struct C_0192f9f0 {
    undefined1 sub_0192f9f0();
};

// @baa 0x0192f9f0
undefined1 C_0192f9f0::sub_0192f9f0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x14);
}

struct C_0192fa00 { void sub_0192fa00(void); };

// @baa 0x0192fa00
void C_0192fa00::sub_0192fa00(void) { *(int*)((char*)this + 0) = 0; }

struct C_0192fa10 {
    void sub_0192fa10();
};

// @baa 0x0192fa10
void C_0192fa10::sub_0192fa10(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    *param_1 = *param_1 + -1;
  }
  return;
}

struct C_0192fa20 { int sub_0192fa20(void); };

// @baa 0x0192fa20
int C_0192fa20::sub_0192fa20(void) { return *(int*)((char*)this + 0); }

struct C_0192fa30 {
    int sub_0192fa30(uint);
};

// @baa 0x0192fa30
int C_0192fa30::sub_0192fa30(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0xc;
}

struct C_0192fa50 {
    int sub_0192fa50(uint);
};

// @baa 0x0192fa50
int C_0192fa50::sub_0192fa50(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0xc;
}

struct C_0192fbd0 {
    void sub_0192fbd0();
};

// @baa 0x0192fbd0
void C_0192fbd0::sub_0192fbd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}

struct C_0192fbe0 { int sub_0192fbe0(void); };

// @baa 0x0192fbe0
int C_0192fbe0::sub_0192fbe0(void) { return *(int*)((char*)this + 0); }

struct C_0192fbf0 {
    int sub_0192fbf0(int);
};

// @baa 0x0192fbf0
int C_0192fbf0::sub_0192fbf0(int param_2)
{
    int * param_1 = (int *)this;

  if (param_2 == 0) {
    param_2 = *param_1;
  }
  return *(int *)(param_1[3] + (param_2 - 1U >> 6) * 4) + (param_2 - 1U & 0x3f) * 0xc;
}

struct C_0192fc20 {
    int sub_0192fc20(uint);
};

// @baa 0x0192fc20
int C_0192fc20::sub_0192fc20(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0xc;
}

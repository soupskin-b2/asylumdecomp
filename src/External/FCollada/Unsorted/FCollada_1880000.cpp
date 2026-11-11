// FCollada_1880000.cpp (part 1 of 35): 386 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01880020
void __stdcall sub_01880020(int a0) {  }

// @baa 0x018800b0
int sub_018800b0(void) { return 1; }

// @baa 0x018800c0
int sub_018800c0(void) { return 8; }

// @baa 0x018800d0
int sub_018800d0(void) { return 2; }

// @baa 0x018801c0
int sub_018801c0(void) { return 3; }

// @baa 0x018801d0
int sub_018801d0(void) { return 4; }

// @baa 0x018801e0
int sub_018801e0(void) { return 5; }

// @baa 0x018801f0
int sub_018801f0(void) { return 5; }

// @baa 0x01880200
int sub_01880200(void) { return 6; }

// @baa 0x01880210
int sub_01880210(void) { return 6; }

// @baa 0x01880220
int sub_01880220(void) { return 7; }

struct C { int sub_01880b90(void); };

// @baa 0x01880b90
int C::sub_01880b90(void) { return *(int*)((char*)this + 8); }

struct C_01880bc0 {
    void sub_01880bc0();
};

void sub_01826080(void *);
// @baa 0x01880bc0
void C_01880bc0::sub_01880bc0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01880d20 {
    undefined4 * sub_01880d20(byte);
};

int sub_00402660(...);
int sub_0181b5d0(void);
extern undefined4 g_023ee874;
// @baa 0x01880d20
undefined4 * C_01880d20::sub_01880d20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ee874));
  sub_0181b5d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01880d50 {
    undefined4 * sub_01880d50(byte);
};

int sub_0181b5e0(void);
extern undefined4 g_023ee884;
// @baa 0x01880d50
undefined4 * C_01880d50::sub_01880d50(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ee884));
  sub_0181b5e0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01880d80 {
    undefined4 * sub_01880d80(byte);
};

int sub_0181b5f0(void);
extern undefined4 g_023ee894;
// @baa 0x01880d80
undefined4 * C_01880d80::sub_01880d80(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ee894));
  sub_0181b5f0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01880db0 {
    undefined4 * sub_01880db0(byte);
};

int sub_0181b600(void);
extern undefined4 g_023ee8a4;
// @baa 0x01880db0
undefined4 * C_01880db0::sub_01880db0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ee8a4));
  sub_0181b600();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01880de0 {
    undefined4 * sub_01880de0(byte);
};

int sub_0181b610(void);
extern undefined4 g_023ee8b4;
// @baa 0x01880de0
undefined4 * C_01880de0::sub_01880de0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ee8b4));
  sub_0181b610();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01880e10 {
    undefined4 * sub_01880e10(byte);
};

int sub_0181b620(void);
extern undefined4 g_023ee8c4;
// @baa 0x01880e10
undefined4 * C_01880e10::sub_01880e10(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ee8c4));
  sub_0181b620();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01880e40 {
    undefined4 * sub_01880e40(byte);
};

int sub_0181b630(void);
extern undefined4 g_023ee8d4;
// @baa 0x01880e40
undefined4 * C_01880e40::sub_01880e40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ee8d4));
  sub_0181b630();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b825c[];
// @baa 0x01880ea0
int sub_01880ea0(void) { return (int)g_027b825c; }

struct C_01880eb0 { char* sub_01880eb0(void); };

// @baa 0x01880eb0
char* C_01880eb0::sub_01880eb0(void) { return (char*)this + 4; }

extern char g_027b8254[];
// @baa 0x01880ec0
int sub_01880ec0(void) { return (int)g_027b8254; }

struct C_01880ed0 { char* sub_01880ed0(void); };

// @baa 0x01880ed0
char* C_01880ed0::sub_01880ed0(void) { return (char*)this + 100; }

extern char g_027b824c[];
// @baa 0x01880ee0
int sub_01880ee0(void) { return (int)g_027b824c; }

struct C_01880ef0 { char* sub_01880ef0(void); };

// @baa 0x01880ef0
char* C_01880ef0::sub_01880ef0(void) { return (char*)this + 4; }

struct C_01880f00 { char* sub_01880f00(void); };

// @baa 0x01880f00
char* C_01880f00::sub_01880f00(void) { return (char*)this + 4; }

extern char g_027b8244[];
// @baa 0x01880f10
int sub_01880f10(void) { return (int)g_027b8244; }

struct C_01880f20 { int sub_01880f20(void); };

// @baa 0x01880f20
int C_01880f20::sub_01880f20(void) { return *(int*)((char*)this + 96); }

struct C_01880f30 {
    void sub_01880f30(undefined4);
};

// @baa 0x01880f30
void C_01880f30::sub_01880f30(undefined4 param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return;
}

extern char g_027b823c[];
// @baa 0x01880f40
int sub_01880f40(void) { return (int)g_027b823c; }

struct C_01880f50 { int sub_01880f50(void); };

// @baa 0x01880f50
int C_01880f50::sub_01880f50(void) { return *(int*)((char*)this + 96); }

struct C_01880f60 {
    void sub_01880f60(undefined4);
};

// @baa 0x01880f60
void C_01880f60::sub_01880f60(undefined4 param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return;
}

struct C_01880f70 { char* sub_01880f70(void); };

// @baa 0x01880f70
char* C_01880f70::sub_01880f70(void) { return (char*)this + 100; }

extern char g_027b8234[];
// @baa 0x01880fa0
int sub_01880fa0(void) { return (int)g_027b8234; }

struct C_01880fb0 { int sub_01880fb0(void); };

// @baa 0x01880fb0
int C_01880fb0::sub_01880fb0(void) { return *(int*)((char*)this + 96); }

struct C_01880fc0 {
    void sub_01880fc0(undefined4);
};

// @baa 0x01880fc0
void C_01880fc0::sub_01880fc0(undefined4 param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return;
}

struct C_01880fd0 { char* sub_01880fd0(void); };

// @baa 0x01880fd0
char* C_01880fd0::sub_01880fd0(void) { return (char*)this + 100; }

extern char g_027b822c[];
// @baa 0x01881000
int sub_01881000(void) { return (int)g_027b822c; }

struct C_01881010 { int sub_01881010(void); };

// @baa 0x01881010
int C_01881010::sub_01881010(void) { return *(int*)((char*)this + 96); }

struct C_01881020 {
    void sub_01881020(undefined4);
};

// @baa 0x01881020
void C_01881020::sub_01881020(undefined4 param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return;
}

struct C_01881030 { char* sub_01881030(void); };

// @baa 0x01881030
char* C_01881030::sub_01881030(void) { return (char*)this + 100; }

extern char g_027b8214[];
// @baa 0x01881060
int sub_01881060(void) { return (int)g_027b8214; }

struct C_01881070 { int sub_01881070(void); };

// @baa 0x01881070
int C_01881070::sub_01881070(void) { return *(int*)((char*)this + 96); }

struct C_01881080 {
    void sub_01881080(undefined4);
};

// @baa 0x01881080
void C_01881080::sub_01881080(undefined4 param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return;
}

struct C_01881090 { char* sub_01881090(void); };

// @baa 0x01881090
char* C_01881090::sub_01881090(void) { return (char*)this + 100; }

extern char g_023e4520[];
struct C_018810f0 { void sub_018810f0(void); };

// @baa 0x018810f0
void C_018810f0::sub_018810f0(void) { *(int*)((char*)this + 0) = (int)g_023e4520; }

struct C_01881100 {
    undefined4 * sub_01881100(byte);
};

// @baa 0x01881100
undefined4 * C_01881100::sub_01881100(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4520));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01881140 { void sub_01881140(void); };

// @baa 0x01881140
void C_01881140::sub_01881140(void) { *(int*)((char*)this + 0) = (int)g_023e4520; }

struct C_01881160 {
    undefined4 * sub_01881160(byte);
};

// @baa 0x01881160
undefined4 * C_01881160::sub_01881160(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4520));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018811a0 {
    void sub_018811a0(int *);
};

// @baa 0x018811a0
void C_018811a0::sub_018811a0(int * param_2)
{
    int param_1 = (int)this;

  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  piVar1 = piVar2 + *(int *)(param_1 + 4);
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == *param_2) {
        return;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
  }
  return;
}

extern char g_023e61ac[];
struct C_01881210 { void sub_01881210(void); };

// @baa 0x01881210
void C_01881210::sub_01881210(void) { *(int*)((char*)this + 0) = (int)g_023e61ac; }

struct C_01881220 {
    void sub_01881220();
};

extern undefined4 g_023e4d30;
// @baa 0x01881220
void C_01881220::sub_01881220(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d30));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

extern char g_023ecd6c[];
struct C_01881260 { void sub_01881260(void); };

// @baa 0x01881260
void C_01881260::sub_01881260(void) { *(int*)((char*)this + 0) = (int)g_023ecd6c; }

struct C_01881270 {
    undefined4 * sub_01881270(byte);
};

// @baa 0x01881270
undefined4 * C_01881270::sub_01881270(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e61ac));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01881290 {
    undefined4 * sub_01881290(byte);
};

// @baa 0x01881290
undefined4 * C_01881290::sub_01881290(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ecd6c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018814f0 { char* sub_018814f0(void); };

// @baa 0x018814f0
char* C_018814f0::sub_018814f0(void) { return (char*)this + 100; }

struct C_01881510 { char* sub_01881510(void); };

// @baa 0x01881510
char* C_01881510::sub_01881510(void) { return (char*)this + 100; }

struct C_018815b0 {
    void sub_018815b0();
};

// @baa 0x018815b0
void C_018815b0::sub_018815b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d30));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_018815d0 {
    void sub_018815d0();
};

// @baa 0x018815d0
void C_018815d0::sub_018815d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d30));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_018815f0 {
    void sub_018815f0();
};

extern undefined4 g_023e4d38;
// @baa 0x018815f0
void C_018815f0::sub_018815f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d38));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_01881610 {
    void sub_01881610();
};

// @baa 0x01881610
void C_01881610::sub_01881610(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d38));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

extern char g_027b826c[];
// @baa 0x01881630
int sub_01881630(void) { return (int)g_027b826c; }

extern char g_027b8264[];
// @baa 0x018819a0
int sub_018819a0(void) { return (int)g_027b8264; }

struct C_018819b0 {
    undefined4 sub_018819b0(byte);
};

int sub_01881640(void);
// @baa 0x018819b0
undefined4 C_018819b0::sub_018819b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01881640();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018819d0 {
    undefined4 sub_018819d0(byte);
};

int sub_01880230(void);
// @baa 0x018819d0
undefined4 C_018819d0::sub_018819d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01880230();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x018819f0
int sub_018819f0(void) { return (int)g_027b825c; }

// @baa 0x01881a60
int sub_01881a60(void) { return (int)g_027b8254; }

// @baa 0x01881a70
int sub_01881a70(void) { return (int)g_027b824c; }

// @baa 0x01881ad0
int sub_01881ad0(void) { return (int)g_027b8244; }

// @baa 0x01881b20
int sub_01881b20(void) { return (int)g_027b823c; }

// @baa 0x01881b70
int sub_01881b70(void) { return (int)g_027b8234; }

// @baa 0x01881bc0
int sub_01881bc0(void) { return (int)g_027b822c; }

extern char g_027b8224[];
// @baa 0x01881cf0
int sub_01881cf0(void) { return (int)g_027b8224; }

// @baa 0x01881d00
int sub_01881d00(void) { return (int)g_027b8224; }

struct C_01881d10 { int sub_01881d10(void); };

// @baa 0x01881d10
int C_01881d10::sub_01881d10(void) { return *(int*)((char*)this + 96); }

struct C_01881d20 { char* sub_01881d20(void); };

// @baa 0x01881d20
char* C_01881d20::sub_01881d20(void) { return (char*)this + 100; }

extern char g_027b821c[];
// @baa 0x01881dd0
int sub_01881dd0(void) { return (int)g_027b821c; }

// @baa 0x01881de0
int sub_01881de0(void) { return (int)g_027b821c; }

struct C_01881df0 { int sub_01881df0(void); };

// @baa 0x01881df0
int C_01881df0::sub_01881df0(void) { return *(int*)((char*)this + 96); }

// @baa 0x01881e80
int sub_01881e80(void) { return (int)g_027b8214; }

struct C_01881f90 {
    void sub_01881f90();
};

int sub_01880320(void);
extern undefined4 g_023ee970;
// @baa 0x01881f90
void C_01881f90::sub_01881f90(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ee970));
  param_1[0x18] = (undefined4)((&g_023e61ac));
  sub_01880320();
  return;
}

struct C_01882020 {
    void sub_01882020();
};

extern undefined4 g_023ee9b8;
// @baa 0x01882020
void C_01882020::sub_01882020(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ee9b8));
  param_1[0x18] = (undefined4)((&g_023ecd6c));
  sub_01880320();
  return;
}

struct C_018822e0 {
    undefined4 sub_018822e0(byte);
};

// @baa 0x018822e0
undefined4 C_018822e0::sub_018822e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01880320();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01882300 {
    undefined4 sub_01882300(byte);
};

int sub_01881f90(void);
// @baa 0x01882300
undefined4 C_01882300::sub_01882300(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01881f90();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01882320 {
    undefined4 sub_01882320(byte);
};

int sub_01881fb0(void);
// @baa 0x01882320
undefined4 C_01882320::sub_01882320(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01881fb0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01882340 {
    undefined4 sub_01882340(byte);
};

int sub_01882020(void);
// @baa 0x01882340
undefined4 C_01882340::sub_01882340(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01882020();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01882360 {
    undefined4 sub_01882360(byte);
};

int sub_01882040(void);
// @baa 0x01882360
undefined4 C_01882360::sub_01882360(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01882040();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01882380 {
    undefined4 sub_01882380(byte);
};

int sub_018820a0(void);
// @baa 0x01882380
undefined4 C_01882380::sub_01882380(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018820a0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018823a0 {
    undefined4 sub_018823a0(byte);
};

int sub_01882100(void);
// @baa 0x018823a0
undefined4 C_018823a0::sub_018823a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01882100();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018823c0 {
    undefined4 sub_018823c0(byte);
};

int sub_01882160(void);
// @baa 0x018823c0
undefined4 C_018823c0::sub_018823c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01882160();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018823e0 {
    undefined4 sub_018823e0(byte);
};

int sub_018821c0(void);
// @baa 0x018823e0
undefined4 C_018823e0::sub_018823e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018821c0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01882400 {
    undefined4 sub_01882400(byte);
};

int sub_01882220(void);
// @baa 0x01882400
undefined4 C_01882400::sub_01882400(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01882220();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01882420 {
    undefined4 sub_01882420(byte);
};

int sub_01882280(void);
// @baa 0x01882420
undefined4 C_01882420::sub_01882420(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01882280();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b8274[];
// @baa 0x01883360
int sub_01883360(void) { return (int)g_027b8274; }

struct C_01883370 {
    bool sub_01883370(int);
};

// @baa 0x01883370
bool C_01883370::sub_01883370(int param_2)
{
    int param_1 = (int)this;

  return param_2 != param_1;
}

struct C_01883760 {
    bool sub_01883760(int);
};

// @baa 0x01883760
bool C_01883760::sub_01883760(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == param_2;
}

struct C_01883770 { int sub_01883770(void); };

// @baa 0x01883770
int C_01883770::sub_01883770(void) { return *(int*)((char*)this + 4); }

struct C_01883780 { int sub_01883780(void); };

// @baa 0x01883780
int C_01883780::sub_01883780(void) { return *(int*)((char*)this + 4); }

struct C_01883790 { int sub_01883790(void); };

// @baa 0x01883790
int C_01883790::sub_01883790(void) { return *(int*)((char*)this + 4); }

struct C_018837e0 {
    undefined4 sub_018837e0(byte);
};

int sub_018836a0(void);
// @baa 0x018837e0
undefined4 C_018837e0::sub_018837e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018836a0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01883800 { char* sub_01883800(void); };

// @baa 0x01883800
char* C_01883800::sub_01883800(void) { return (char*)this + 48; }

struct C_01883830 { void sub_01883830(void); };

// @baa 0x01883830
void C_01883830::sub_01883830(void) { *(int*)((char*)this + 0) = (int)g_023e4520; }

struct C_01883860 { void sub_01883860(void); };

// @baa 0x01883860
void C_01883860::sub_01883860(void) { *(int*)((char*)this + 0) = (int)g_023e4520; }

struct C_01883890 { void sub_01883890(void); };

// @baa 0x01883890
void C_01883890::sub_01883890(void) { *(int*)((char*)this + 0) = (int)g_023e4520; }

struct C_018838c0 { void sub_018838c0(void); };

// @baa 0x018838c0
void C_018838c0::sub_018838c0(void) { *(int*)((char*)this + 0) = (int)g_023e4520; }

struct C_018838f0 { void sub_018838f0(void); };

// @baa 0x018838f0
void C_018838f0::sub_018838f0(void) { *(int*)((char*)this + 0) = (int)g_023e4520; }

struct C_01883920 { void sub_01883920(void); };

// @baa 0x01883920
void C_01883920::sub_01883920(void) { *(int*)((char*)this + 0) = (int)g_023e4520; }

struct C_01883950 { void sub_01883950(void); };

// @baa 0x01883950
void C_01883950::sub_01883950(void) { *(int*)((char*)this + 0) = (int)g_023e4520; }

struct C_01883960 { int sub_01883960(void); };

// @baa 0x01883960
int C_01883960::sub_01883960(void) { return *(int*)((char*)this + 108); }

struct C_01883970 { int sub_01883970(void); };

// @baa 0x01883970
int C_01883970::sub_01883970(void) { return *(int*)((char*)this + 100); }

struct C_01883980 {
    undefined4 * sub_01883980(byte);
};

// @baa 0x01883980
undefined4 * C_01883980::sub_01883980(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4520));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018839a0 {
    undefined4 * sub_018839a0(byte);
};

// @baa 0x018839a0
undefined4 * C_018839a0::sub_018839a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4520));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018839c0 {
    undefined4 * sub_018839c0(byte);
};

// @baa 0x018839c0
undefined4 * C_018839c0::sub_018839c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4520));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018839e0 {
    undefined4 * sub_018839e0(byte);
};

// @baa 0x018839e0
undefined4 * C_018839e0::sub_018839e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4520));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01883a00 {
    undefined4 * sub_01883a00(byte);
};

// @baa 0x01883a00
undefined4 * C_01883a00::sub_01883a00(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4520));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01883a20 {
    undefined4 * sub_01883a20(byte);
};

// @baa 0x01883a20
undefined4 * C_01883a20::sub_01883a20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4520));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01883a40 {
    undefined4 * sub_01883a40(byte);
};

// @baa 0x01883a40
undefined4 * C_01883a40::sub_01883a40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4520));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01883a60
int sub_01883a60(void) { return (int)g_027b8274; }

// @baa 0x01883a70
int sub_01883a70(void) { return 0; }

struct C_01883ae0 {
    undefined4 sub_01883ae0(byte);
};

int sub_018833a0(void);
// @baa 0x01883ae0
undefined4 C_01883ae0::sub_01883ae0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018833a0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b827c[];
// @baa 0x01883d40
int sub_01883d40(void) { return (int)g_027b827c; }

struct C_01883d50 {
    undefined4 sub_01883d50(byte);
};

int sub_01883bd0(void);
// @baa 0x01883d50
undefined4 C_01883d50::sub_01883d50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01883bd0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01884330 { int sub_01884330(void); };

// @baa 0x01884330
int C_01884330::sub_01884330(void) { return *(int*)((char*)this + 8); }

struct C_01884360 {
    void sub_01884360();
};

// @baa 0x01884360
void C_01884360::sub_01884360(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_018843c0 {
    void sub_018843c0(int *);
};

// @baa 0x018843c0
void C_018843c0::sub_018843c0(int * param_2)
{
    int param_1 = (int)this;

  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  piVar1 = piVar2 + *(int *)(param_1 + 4);
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == *param_2) {
        return;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
  }
  return;
}

struct C_01884530 {
    void sub_01884530();
};

// @baa 0x01884530
void C_01884530::sub_01884530(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d38));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

extern char g_027b8284[];
// @baa 0x018846c0
int sub_018846c0(void) { return (int)g_027b8284; }

struct C_018846d0 {
    undefined4 sub_018846d0(byte);
};

int sub_01884550(void);
// @baa 0x018846d0
undefined4 C_018846d0::sub_018846d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01884550();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018847b0 {
    undefined4 sub_018847b0(byte);
};

int sub_01883e10(void);
// @baa 0x018847b0
undefined4 C_018847b0::sub_018847b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01883e10();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b828c[];
// @baa 0x01884b80
int sub_01884b80(void) { return (int)g_027b828c; }

struct C_01884b90 {
    undefined4 sub_01884b90(byte);
};

int sub_01884880(void);
// @baa 0x01884b90
undefined4 C_01884b90::sub_01884b90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01884880();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

void sub_0188a430();
// @baa 0x01884bb0
void sub_01884bb0(void) { sub_0188a430(); }

struct C_01885140 {
    bool sub_01885140(int);
};

// @baa 0x01885140
bool C_01885140::sub_01885140(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == param_2;
}

struct C_01885150 { int sub_01885150(void); };

// @baa 0x01885150
int C_01885150::sub_01885150(void) { return *(int*)((char*)this + 4); }

struct C_01885160 { int sub_01885160(void); };

// @baa 0x01885160
int C_01885160::sub_01885160(void) { return *(int*)((char*)this + 4); }

struct C_01885170 { int sub_01885170(void); };

// @baa 0x01885170
int C_01885170::sub_01885170(void) { return *(int*)((char*)this + 4); }

struct C_01885180 { int sub_01885180(void); };

// @baa 0x01885180
int C_01885180::sub_01885180(void) { return *(int*)((char*)this + 4); }

struct C_018852a0 { int sub_018852a0(void); };

// @baa 0x018852a0
int C_018852a0::sub_018852a0(void) { return *(int*)((char*)this + 4); }

struct C_018852b0 { int sub_018852b0(void); };

// @baa 0x018852b0
int C_018852b0::sub_018852b0(void) { return *(int*)((char*)this + 4); }

struct C_018852c0 { int sub_018852c0(void); };

// @baa 0x018852c0
int C_018852c0::sub_018852c0(void) { return *(int*)((char*)this + 4); }

struct C_018852d0 {
    void sub_018852d0(int);
};

int sub_018260a0(...);
// @baa 0x018852d0
void C_018852d0::sub_018852d0(int param_2)
{
    int param_1 = (int)this;

  if (param_2 != *(int *)(param_1 + 4)) {
    sub_018260a0("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUObject.h"
                 ,0xdd);
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

struct C_01885300 {
    undefined4 sub_01885300(byte);
};

int sub_018850b0(void);
// @baa 0x01885300
undefined4 C_01885300::sub_01885300(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018850b0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01885320 {
    undefined4 sub_01885320(byte);
};

int sub_018851d0(void);
// @baa 0x01885320
undefined4 C_01885320::sub_01885320(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018851d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01885350 { int sub_01885350(void); };

// @baa 0x01885350
int C_01885350::sub_01885350(void) { return *(int*)((char*)this + 108); }

extern char g_027b8294[];
// @baa 0x01885360
int sub_01885360(void) { return (int)g_027b8294; }

struct C_018854a0 {
    undefined4 sub_018854a0(byte);
};

int sub_01884be0(void);
// @baa 0x018854a0
undefined4 C_018854a0::sub_018854a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01884be0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01885760 {
    undefined4 sub_01885760(byte);
};

int sub_01885500(void);
// @baa 0x01885760
undefined4 C_01885760::sub_01885760(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01885500();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01885780 {
    undefined4 sub_01885780(byte);
};

int sub_01885530(void);
// @baa 0x01885780
undefined4 C_01885780::sub_01885780(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01885530();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018857a0 {
    undefined4 sub_018857a0(byte);
};

int sub_01885650(void);
// @baa 0x018857a0
undefined4 C_018857a0::sub_018857a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01885650();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023eec78[];
struct C_018857c0 { C_018857c0* sub_018857c0(void); };

// @baa 0x018857c0
C_018857c0* C_018857c0::sub_018857c0(void) { *(int*)((char*)this + 0) = (int)g_023eec78; return this; }

struct C_018857d0 { void sub_018857d0(void); };

// @baa 0x018857d0
void C_018857d0::sub_018857d0(void) { *(int*)((char*)this + 0) = (int)g_023eec78; }

// @baa 0x018857e0
void sub_018857e0(void) {  }

// @baa 0x018857f0
void sub_018857f0(void) {  }

struct C_01885b40 {
    undefined4 sub_01885b40(byte);
};

int sub_018857d0(void);
// @baa 0x01885b40
undefined4 C_01885b40::sub_01885b40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018857d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b829c[];
// @baa 0x01885b60
int sub_01885b60(void) { return (int)g_027b829c; }

struct C_01885b90 {
    void sub_01885b90();
};

extern undefined4 g_023eece0;
// @baa 0x01885b90
void C_01885b90::sub_01885b90(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eece0));
  sub_0181b5f0();
  return;
}

struct C_01885be0 {
    void sub_01885be0();
};

extern undefined4 g_023eecf0;
// @baa 0x01885be0
void C_01885be0::sub_01885be0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eecf0));
  sub_0181b5f0();
  return;
}

struct C_01885c10 {
    undefined4 * sub_01885c10(byte);
};

// @baa 0x01885c10
undefined4 * C_01885c10::sub_01885c10(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eece0));
  sub_0181b5f0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01885c40 {
    undefined4 * sub_01885c40(byte);
};

// @baa 0x01885c40
undefined4 * C_01885c40::sub_01885c40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eecf0));
  sub_0181b5f0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01885cd0 { char* sub_01885cd0(void); };

// @baa 0x01885cd0
char* C_01885cd0::sub_01885cd0(void) { return (char*)this + 120; }

struct C_01885ce0 { char* sub_01885ce0(void); };

// @baa 0x01885ce0
char* C_01885ce0::sub_01885ce0(void) { return (char*)this + 100; }

struct C_01885d10 { char* sub_01885d10(void); };

// @baa 0x01885d10
char* C_01885d10::sub_01885d10(void) { return (char*)this + 128; }

struct C_01885d20 { char* sub_01885d20(void); };

// @baa 0x01885d20
char* C_01885d20::sub_01885d20(void) { return (char*)this + 160; }

struct C_018861b0 { char* sub_018861b0(void); };

// @baa 0x018861b0
char* C_018861b0::sub_018861b0(void) { return (char*)this + 4; }

struct C_018861d0 { int sub_018861d0(void); };

// @baa 0x018861d0
int C_018861d0::sub_018861d0(void) { return *(int*)((char*)this + 4); }

struct C_01886200 {
    void sub_01886200();
};

// @baa 0x01886200
void C_01886200::sub_01886200(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01886270 { int sub_01886270(void); };

// @baa 0x01886270
int C_01886270::sub_01886270(void) { return *(int*)((char*)this + 168); }

struct C_018862d0 {
    undefined1 sub_018862d0();
};

// @baa 0x018862d0
undefined1 C_018862d0::sub_018862d0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0xf8);
}

struct C_018862e0 {
    void sub_018862e0(undefined1);
};

// @baa 0x018862e0
void C_018862e0::sub_018862e0(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0xf8) = param_2;
  return;
}

struct C_01886300 {
    undefined1 sub_01886300();
};

// @baa 0x01886300
undefined1 C_01886300::sub_01886300(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x100);
}

struct C_01886310 {
    void sub_01886310(undefined1);
};

// @baa 0x01886310
void C_01886310::sub_01886310(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x100) = param_2;
  return;
}

struct C_01886350 { char* sub_01886350(void); };

// @baa 0x01886350
char* C_01886350::sub_01886350(void) { return (char*)this + 208; }

struct C_01886390 { char* sub_01886390(void); };

// @baa 0x01886390
char* C_01886390::sub_01886390(void) { return (char*)this + 224; }

// @baa 0x018863e0
int sub_018863e0(void) { return (int)g_027b829c; }

// @baa 0x018863f0
int sub_018863f0(void) { return 5; }

struct C_01886530 {
    undefined4 sub_01886530(byte);
};

int sub_01886410(void);
// @baa 0x01886530
undefined4 C_01886530::sub_01886530(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01886410();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01886550 {
    undefined4 sub_01886550(byte);
};

int sub_018860e0(void);
// @baa 0x01886550
undefined4 C_01886550::sub_01886550(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018860e0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b82a4[];
// @baa 0x01886570
int sub_01886570(void) { return (int)g_027b82a4; }

struct C_018865a0 {
    void sub_018865a0();
};

int sub_0184aa60(void);
extern undefined4 g_023eed98;
extern undefined4 g_023eeda8;
// @baa 0x018865a0
void C_018865a0::sub_018865a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eeda8));
  param_1[9] = (undefined4)((&g_023eed98));
  param_1[0x17] = 0;
  sub_0184aa60();
  return;
}

// @baa 0x018866f0
int sub_018866f0(void) { return (int)g_027b82a4; }

// @baa 0x01886700
int sub_01886700(void) { return 6; }

struct C_01886720 {
    undefined4 sub_01886720(byte);
};

int sub_018865a0(void);
// @baa 0x01886720
undefined4 C_01886720::sub_01886720(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018865a0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01886780 {
    void sub_01886780();
};

extern undefined4 g_023eedf8;
// @baa 0x01886780
void C_01886780::sub_01886780(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eedf8));
  sub_0181b5d0();
  return;
}

struct C_018867d0 {
    void sub_018867d0();
};

extern undefined4 g_023eee08;
// @baa 0x018867d0
void C_018867d0::sub_018867d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eee08));
  sub_0181b5d0();
  return;
}

struct C_01886800 {
    void sub_01886800();
};

extern undefined4 g_023eee18;
// @baa 0x01886800
void C_01886800::sub_01886800(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eee18));
  sub_0181b5f0();
  return;
}

struct C_01886830 {
    void sub_01886830();
};

extern undefined4 g_023eee28;
// @baa 0x01886830
void C_01886830::sub_01886830(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eee28));
  sub_0181b5f0();
  return;
}

struct C_01886860 {
    void sub_01886860();
};

int sub_0181b640(void);
extern undefined4 g_023eee38;
// @baa 0x01886860
void C_01886860::sub_01886860(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eee38));
  sub_0181b640();
  return;
}

struct C_01886890 {
    undefined4 * sub_01886890(byte);
};

// @baa 0x01886890
undefined4 * C_01886890::sub_01886890(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eedf8));
  sub_0181b5d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018868c0 {
    undefined4 * sub_018868c0(byte);
};

// @baa 0x018868c0
undefined4 * C_018868c0::sub_018868c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eee08));
  sub_0181b5d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018868f0 {
    undefined4 * sub_018868f0(byte);
};

// @baa 0x018868f0
undefined4 * C_018868f0::sub_018868f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eee18));
  sub_0181b5f0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01886920 {
    undefined4 * sub_01886920(byte);
};

// @baa 0x01886920
undefined4 * C_01886920::sub_01886920(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eee28));
  sub_0181b5f0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01886950 {
    undefined4 * sub_01886950(byte);
};

// @baa 0x01886950
undefined4 * C_01886950::sub_01886950(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eee38));
  sub_0181b640();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018871f0 {
    bool sub_018871f0(int);
};

// @baa 0x018871f0
bool C_018871f0::sub_018871f0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == param_2;
}

struct C_01887200 { int sub_01887200(void); };

// @baa 0x01887200
int C_01887200::sub_01887200(void) { return *(int*)((char*)this + 4); }

struct C_01887210 { int sub_01887210(void); };

// @baa 0x01887210
int C_01887210::sub_01887210(void) { return *(int*)((char*)this + 4); }

struct C_01887220 { int sub_01887220(void); };

// @baa 0x01887220
int C_01887220::sub_01887220(void) { return *(int*)((char*)this + 4); }

struct C_01887230 { int sub_01887230(void); };

// @baa 0x01887230
int C_01887230::sub_01887230(void) { return *(int*)((char*)this + 4); }

struct C_01887310 {
    bool sub_01887310(int);
};

// @baa 0x01887310
bool C_01887310::sub_01887310(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == param_2;
}

struct C_01887320 { int sub_01887320(void); };

// @baa 0x01887320
int C_01887320::sub_01887320(void) { return *(int*)((char*)this + 4); }

struct C_01887330 { int sub_01887330(void); };

// @baa 0x01887330
int C_01887330::sub_01887330(void) { return *(int*)((char*)this + 4); }

struct C_01887340 { int sub_01887340(void); };

// @baa 0x01887340
int C_01887340::sub_01887340(void) { return *(int*)((char*)this + 4); }

struct C_01887350 { int sub_01887350(void); };

// @baa 0x01887350
int C_01887350::sub_01887350(void) { return *(int*)((char*)this + 4); }

struct C_018873c0 {
    void sub_018873c0();
};

// @baa 0x018873c0
void C_018873c0::sub_018873c0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01887430 {
    bool sub_01887430(int);
};

// @baa 0x01887430
bool C_01887430::sub_01887430(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == param_2;
}

struct C_01887480 {
    undefined4 sub_01887480(byte);
};

int sub_01887160(void);
// @baa 0x01887480
undefined4 C_01887480::sub_01887480(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01887160();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018874a0 {
    undefined4 sub_018874a0(byte);
};

int sub_01887280(void);
// @baa 0x018874a0
undefined4 C_018874a0::sub_018874a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01887280();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018874c0 {
    undefined4 sub_018874c0(byte);
};

int sub_018873d0(void);
// @baa 0x018874c0
undefined4 C_018874c0::sub_018874c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018873d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023e4370[];
struct C_01887530 { void sub_01887530(void); };

// @baa 0x01887530
void C_01887530::sub_01887530(void) { *(int*)((char*)this + 0) = (int)g_023e4370; }

struct C_01887560 { void sub_01887560(void); };

// @baa 0x01887560
void C_01887560::sub_01887560(void) { *(int*)((char*)this + 0) = (int)g_023ecd6c; }

struct C_01887590 { void sub_01887590(void); };

// @baa 0x01887590
void C_01887590::sub_01887590(void) { *(int*)((char*)this + 0) = (int)g_023ecd6c; }

struct C_018875a0 {
    undefined4 * sub_018875a0(byte);
};

// @baa 0x018875a0
undefined4 * C_018875a0::sub_018875a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4370));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018875c0 {
    undefined4 * sub_018875c0(byte);
};

// @baa 0x018875c0
undefined4 * C_018875c0::sub_018875c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ecd6c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018875e0 {
    undefined4 * sub_018875e0(byte);
};

// @baa 0x018875e0
undefined4 * C_018875e0::sub_018875e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ecd6c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01887620 {
    void sub_01887620(int *);
};

// @baa 0x01887620
void C_01887620::sub_01887620(int * param_2)
{
    int param_1 = (int)this;

  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  piVar1 = piVar2 + *(int *)(param_1 + 4);
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == *param_2) {
        return;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
  }
  return;
}

extern char g_027b82ac[];
// @baa 0x01887960
int sub_01887960(void) { return (int)g_027b82ac; }

struct C_01887970 {
    undefined4 sub_01887970(byte);
};

int sub_01887840(void);
// @baa 0x01887970
undefined4 C_01887970::sub_01887970(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01887840();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01887a50 {
    undefined4 sub_01887a50(byte);
};

int sub_01886df0(void);
// @baa 0x01887a50
undefined4 C_01887a50::sub_01887a50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01886df0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01887a70 {
    void sub_01887a70(undefined1);
};

// @baa 0x01887a70
void C_01887a70::sub_01887a70(undefined1 param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  *(undefined1 *)(param_1 + 0x70) = param_2;
  return;
}

struct C_01887a80 {
    void sub_01887a80(undefined1);
};

// @baa 0x01887a80
void C_01887a80::sub_01887a80(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x24) = param_2;
  return;
}

struct C_01887ab0 {
    float10 sub_01887ab0();
};

// @baa 0x01887ab0
float10 C_01887ab0::sub_01887ab0(void)
{
    int param_1 = (int)this;

  if (*(float **)(param_1 + 0x44) != (float *)0x0) {
    return (float10)**(float **)(param_1 + 0x44);
  }
  return (float10)0;
}

struct C_01887b00 {
    float10 sub_01887b00();
};

// @baa 0x01887b00
float10 C_01887b00::sub_01887b00(void)
{
    int param_1 = (int)this;

  if (*(float **)(param_1 + 0x48) != (float *)0x0) {
    return (float10)**(float **)(param_1 + 0x48);
  }
  return (float10)0;
}

struct C_01888510 {
    bool sub_01888510(int);
};

// @baa 0x01888510
bool C_01888510::sub_01888510(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == param_2;
}

struct C_01888520 { int sub_01888520(void); };

// @baa 0x01888520
int C_01888520::sub_01888520(void) { return *(int*)((char*)this + 4); }

struct C_01888530 { int sub_01888530(void); };

// @baa 0x01888530
int C_01888530::sub_01888530(void) { return *(int*)((char*)this + 4); }

struct C_01888540 { int sub_01888540(void); };

// @baa 0x01888540
int C_01888540::sub_01888540(void) { return *(int*)((char*)this + 4); }

struct C_01888550 { int sub_01888550(void); };

// @baa 0x01888550
int C_01888550::sub_01888550(void) { return *(int*)((char*)this + 4); }

struct C_018886f0 { int sub_018886f0(void); };

// @baa 0x018886f0
int C_018886f0::sub_018886f0(void) { return *(int*)((char*)this + 4); }

struct C_01888700 { int sub_01888700(void); };

// @baa 0x01888700
int C_01888700::sub_01888700(void) { return *(int*)((char*)this + 4); }

struct C_01888710 { int sub_01888710(void); };

// @baa 0x01888710
int C_01888710::sub_01888710(void) { return *(int*)((char*)this + 4); }

struct C_01888720 {
    void sub_01888720(int);
};

// @baa 0x01888720
void C_01888720::sub_01888720(int param_2)
{
    int param_1 = (int)this;

  if (param_2 != *(int *)(param_1 + 4)) {
    sub_018260a0("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUObject.h"
                 ,0xdd);
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

struct C_01888750 {
    undefined4 sub_01888750(byte);
};

int sub_01888480(void);
// @baa 0x01888750
undefined4 C_01888750::sub_01888750(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01888480();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01888770 {
    undefined4 sub_01888770(byte);
};

int sub_01888620(void);
// @baa 0x01888770
undefined4 C_01888770::sub_01888770(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01888620();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018887c0 {
    bool sub_018887c0();
};

// @baa 0x018887c0
bool C_018887c0::sub_018887c0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x40) != 0;
}

struct C_018887d0 {
    bool sub_018887d0();
};

// @baa 0x018887d0
bool C_018887d0::sub_018887d0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x38) != 0;
}

struct C_018888a0 { int sub_018888a0(void); };

// @baa 0x018888a0
int C_018888a0::sub_018888a0(void) { return *(int*)((char*)this + 100); }

extern char g_027b82b4[];
// @baa 0x018888f0
int sub_018888f0(void) { return (int)g_027b82b4; }

struct C_01888900 {
    undefined4 sub_01888900(byte);
};

int sub_01887fa0(void);
// @baa 0x01888900
undefined4 C_01888900::sub_01888900(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01887fa0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern "C" __declspec(dllimport) int srand(...);
extern "C" __declspec(dllimport) int rand(...);
// @baa 0x01888920
void sub_01888920(uint param_1)
{
  srand(param_1);
                    
                    
  rand();
  return;
}

// @baa 0x01888940
uint sub_01888940(void)
{
  uint uVar1;
  
  uVar1 = rand();
  return uVar1 & 0x7fff;
}

// @baa 0x01888950
int sub_01888950(void)
{
  uint uVar1;
  
  uVar1 = rand();
  return (uVar1 & 0x7fff) - 0x3fff;
}

struct C_01888fc0 { int sub_01888fc0(void); };

// @baa 0x01888fc0
int C_01888fc0::sub_01888fc0(void) { return *(int*)((char*)this + 8); }

struct C_01888ff0 {
    void sub_01888ff0();
};

// @baa 0x01888ff0
void C_01888ff0::sub_01888ff0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01889000 { int sub_01889000(void); };

// @baa 0x01889000
int C_01889000::sub_01889000(void) { return *(int*)((char*)this + 8); }

struct C_01889030 {
    void sub_01889030();
};

// @baa 0x01889030
void C_01889030::sub_01889030(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01889040 { char* sub_01889040(void); };

// @baa 0x01889040
char* C_01889040::sub_01889040(void) { return (char*)this + 4; }

struct C_01889130 {
    undefined1 sub_01889130();
};

// @baa 0x01889130
undefined1 C_01889130::sub_01889130(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x78);
}

struct C_01889140 {
    bool sub_01889140();
};

// @baa 0x01889140
bool C_01889140::sub_01889140(void)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + 0x78) == '\0';
}

struct C_01889150 { int sub_01889150(void); };

// @baa 0x01889150
int C_01889150::sub_01889150(void) { return *(int*)((char*)this + 40); }

struct C_01889180 {
    void sub_01889180(int *);
};

// @baa 0x01889180
void C_01889180::sub_01889180(int * param_2)
{
    int param_1 = (int)this;

  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  piVar1 = piVar2 + *(int *)(param_1 + 4);
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == *param_2) {
        return;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
  }
  return;
}

struct C_018891d0 {
    void sub_018891d0(int *);
};

// @baa 0x018891d0
void C_018891d0::sub_018891d0(int * param_2)
{
    int param_1 = (int)this;

  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  piVar1 = piVar2 + *(int *)(param_1 + 4);
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == *param_2) {
        return;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
  }
  return;
}

struct C_018897f0 {
    void sub_018897f0();
};

// @baa 0x018897f0
void C_018897f0::sub_018897f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d38));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

extern char g_027b82bc[];
// @baa 0x01889840
int sub_01889840(void) { return (int)g_027b82bc; }

struct C_01889850 {
    undefined4 sub_01889850(byte);
};

int sub_01889560(void);
// @baa 0x01889850
undefined4 C_01889850::sub_01889850(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01889560();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01889870 {
    undefined4 sub_01889870(byte);
};

int sub_01889620(void);
// @baa 0x01889870
undefined4 C_01889870::sub_01889870(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01889620();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01889a80 {
    undefined4 sub_01889a80(byte);
};

int sub_01888a10(void);
// @baa 0x01889a80
undefined4 C_01889a80::sub_01889a80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01888a10();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

void sub_01888b50();
// @baa 0x01889aa0
void sub_01889aa0(void) { sub_01888b50(); }

void sub_01888bc0();
// @baa 0x01889ab0
void sub_01889ab0(void) { sub_01888bc0(); }

void sub_01841830();
// @baa 0x01889b10
void sub_01889b10(void) { sub_01841830(); }

struct C_01889ba0 { int sub_01889ba0(void); };

// @baa 0x01889ba0
int C_01889ba0::sub_01889ba0(void) { return *(int*)((char*)this + 92); }

void sub_0184a940();
// @baa 0x01889bb0
void sub_01889bb0(void) { sub_0184a940(); }

void sub_01842360();
// @baa 0x01889bc0
void sub_01889bc0(void) { sub_01842360(); }

struct C_01889c30 { int sub_01889c30(void); };

// @baa 0x01889c30
int C_01889c30::sub_01889c30(void) { return *(int*)((char*)this + 108); }

struct C_01889c40 { int sub_01889c40(void); };

// @baa 0x01889c40
int C_01889c40::sub_01889c40(void) { return *(int*)((char*)this + 128); }

struct C_01889c50 { int sub_01889c50(void); };

// @baa 0x01889c50
int C_01889c50::sub_01889c50(void) { return *(int*)((char*)this + 48); }

struct C_01889c60 { char* sub_01889c60(void); };

// @baa 0x01889c60
char* C_01889c60::sub_01889c60(void) { return (char*)this + 64; }

struct C_01889c70 {
    bool sub_01889c70();
};

// @baa 0x01889c70
bool C_01889c70::sub_01889c70(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x28) == 3;
}

struct C_01889c80 { int sub_01889c80(void); };

// @baa 0x01889c80
int C_01889c80::sub_01889c80(void) { return *(int*)((char*)this + 224); }

struct C_01889c90 { int sub_01889c90(void); };

// @baa 0x01889c90
int C_01889c90::sub_01889c90(void) { return *(int*)((char*)this + 232); }

struct C_01889ca0 { int sub_01889ca0(void); };

// @baa 0x01889ca0
int C_01889ca0::sub_01889ca0(void) { return *(int*)((char*)this + 100); }

struct C_01889cb0 { int sub_01889cb0(void); };

// @baa 0x01889cb0
int C_01889cb0::sub_01889cb0(void) { return *(int*)((char*)this + 108); }

struct C_01889cc0 { int sub_01889cc0(void); };

// @baa 0x01889cc0
int C_01889cc0::sub_01889cc0(void) { return *(int*)((char*)this + 268); }

struct C_01889cd0 { int sub_01889cd0(void); };

// @baa 0x01889cd0
int C_01889cd0::sub_01889cd0(void) { return *(int*)((char*)this + 296); }

struct C_01889ce0 { int sub_01889ce0(void); };

// @baa 0x01889ce0
int C_01889ce0::sub_01889ce0(void) { return *(int*)((char*)this + 324); }

struct C_01889cf0 { int sub_01889cf0(void); };

// @baa 0x01889cf0
int C_01889cf0::sub_01889cf0(void) { return *(int*)((char*)this + 352); }

struct C_01889d00 { int sub_01889d00(void); };

// @baa 0x01889d00
int C_01889d00::sub_01889d00(void) { return *(int*)((char*)this + 380); }

struct C_01889d10 { int sub_01889d10(void); };

// @baa 0x01889d10
int C_01889d10::sub_01889d10(void) { return *(int*)((char*)this + 144); }

struct C_01889d20 { int sub_01889d20(void); };

// @baa 0x01889d20
int C_01889d20::sub_01889d20(void) { return *(int*)((char*)this + 152); }

struct C_01889d30 { int sub_01889d30(void); };

// @baa 0x01889d30
int C_01889d30::sub_01889d30(void) { return *(int*)((char*)this + 188); }

struct C_01889d40 { int sub_01889d40(void); };

// @baa 0x01889d40
int C_01889d40::sub_01889d40(void) { return *(int*)((char*)this + 120); }

struct C_01889d50 { int sub_01889d50(void); };

// @baa 0x01889d50
int C_01889d50::sub_01889d50(void) { return *(int*)((char*)this + 104); }

struct C_01889d60 { int sub_01889d60(void); };

// @baa 0x01889d60
int C_01889d60::sub_01889d60(void) { return *(int*)((char*)this + 120); }

struct C_01889d70 { int sub_01889d70(void); };

// @baa 0x01889d70
int C_01889d70::sub_01889d70(void) { return *(int*)((char*)this + 120); }

struct C_01889d80 { int sub_01889d80(void); };

// @baa 0x01889d80
int C_01889d80::sub_01889d80(void) { return *(int*)((char*)this + 52); }

void sub_01889f80();
// @baa 0x0188bf20
void sub_0188bf20(void) { sub_01889f80(); }

void sub_01889ff0();
// @baa 0x0188bf30
void sub_0188bf30(void) { sub_01889ff0(); }

void sub_0188a0e0();
// @baa 0x0188bf40
void sub_0188bf40(void) { sub_0188a0e0(); }

void sub_0188a160();
// @baa 0x0188bf50
void sub_0188bf50(void) { sub_0188a160(); }

void sub_0188a1f0();
// @baa 0x0188bf60
void sub_0188bf60(void) { sub_0188a1f0(); }

void sub_0188aa70();
// @baa 0x0188bf70
void sub_0188bf70(void) { sub_0188aa70(); }

void sub_0188ada0();
// @baa 0x0188bf80
void sub_0188bf80(void) { sub_0188ada0(); }

extern char g_027b82c4[];
// @baa 0x0188bf90
int sub_0188bf90(void) { return (int)g_027b82c4; }

extern char g_027b82cc[];
// @baa 0x0188bfa0
int sub_0188bfa0(void) { return (int)g_027b82cc; }

extern char g_027b82d4[];
// @baa 0x0188bfb0
int sub_0188bfb0(void) { return (int)g_027b82d4; }

extern char g_027b82dc[];
// @baa 0x0188bfc0
int sub_0188bfc0(void) { return (int)g_027b82dc; }

extern char g_027b82e4[];
// @baa 0x0188bfd0
int sub_0188bfd0(void) { return (int)g_027b82e4; }

extern char g_027b82ec[];
// @baa 0x0188bfe0
int sub_0188bfe0(void) { return (int)g_027b82ec; }

extern char g_027b82f4[];
// @baa 0x0188bff0
int sub_0188bff0(void) { return (int)g_027b82f4; }

extern char g_027b82fc[];
// @baa 0x0188c000
int sub_0188c000(void) { return (int)g_027b82fc; }

struct C_0188c050 {
    void sub_0188c050();
};

int sub_01842bf0(void);
extern undefined4 g_023ef2ec;
// @baa 0x0188c050
void C_0188c050::sub_0188c050(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ef2ec));
  sub_01842bf0();
  return;
}

// @baa 0x0188c0c0
float10 sub_0188c0c0(void)
{
  return (float10)1;
}

// @baa 0x0188cad0
int sub_0188cad0(void) { return (int)g_027b82c4; }

// @baa 0x0188cae0
int sub_0188cae0(void) { return 15; }

// @baa 0x0188caf0
int sub_0188caf0(void) { return (int)g_027b82dc; }

// @baa 0x0188cb00
int sub_0188cb00(void) { return 2; }

// @baa 0x0188cb10
int sub_0188cb10(void) { return (int)g_027b82e4; }

// @baa 0x0188cb20
int sub_0188cb20(void) { return 3; }

// @baa 0x0188cb30
int sub_0188cb30(void) { return (int)g_027b82ec; }

// @baa 0x0188cb40
int sub_0188cb40(void) { return 4; }

struct C_0188cb60 {
    undefined4 * sub_0188cb60(byte);
};

int sub_0188c050(void);
extern undefined4 g_023ef31c;
// @baa 0x0188cb60
undefined4 * C_0188cb60::sub_0188cb60(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ef31c));
  sub_0188c050();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0188cba0 {
    undefined4 * sub_0188cba0(byte);
};

extern undefined4 g_023ef34c;
// @baa 0x0188cba0
undefined4 * C_0188cba0::sub_0188cba0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ef34c));
  sub_0188c050();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0188cbe0 {
    undefined4 * sub_0188cbe0(byte);
};

extern undefined4 g_023ef37c;
// @baa 0x0188cbe0
undefined4 * C_0188cbe0::sub_0188cbe0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ef37c));
  sub_0188c050();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0188cc10 {
    undefined4 sub_0188cc10(byte);
};

// @baa 0x0188cc10
undefined4 C_0188cc10::sub_0188cc10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0188c050();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x0188cc30
int sub_0188cc30(void) { return (int)g_027b82cc; }

// @baa 0x0188cc40
int sub_0188cc40(void) { return 0; }

struct C_0188cc60 {
    undefined4 * sub_0188cc60(byte);
};

extern undefined4 g_023ef3ac;
// @baa 0x0188cc60
undefined4 * C_0188cc60::sub_0188cc60(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ef3ac));
  sub_0188c050();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x0188cc90
int sub_0188cc90(void) { return (int)g_027b82d4; }

// @baa 0x0188cca0
int sub_0188cca0(void) { return 1; }

struct C_0188ccc0 {
    undefined4 * sub_0188ccc0(byte);
};

extern undefined4 g_023ef3dc;
// @baa 0x0188ccc0
undefined4 * C_0188ccc0::sub_0188ccc0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ef3dc));
  sub_0188c050();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x0188ccf0
int sub_0188ccf0(void) { return (int)g_027b82f4; }

// @baa 0x0188cd00
int sub_0188cd00(void) { return 6; }

struct C_0188cd20 {
    undefined4 * sub_0188cd20(byte);
};

// @baa 0x0188cd20
undefined4 * C_0188cd20::sub_0188cd20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ef37c));
  sub_0188c050();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x0188cd50
int sub_0188cd50(void) { return (int)g_027b82fc; }

// @baa 0x0188cd60
int sub_0188cd60(void) { return 5; }

struct C_0188cd80 {
    undefined4 * sub_0188cd80(byte);
};

// @baa 0x0188cd80
undefined4 * C_0188cd80::sub_0188cd80(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ef34c));
  sub_0188c050();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0188cdb0 { int sub_0188cdb0(void); };

// @baa 0x0188cdb0
int C_0188cdb0::sub_0188cdb0(void) { return *(int*)((char*)this + 36); }

void sub_0186dfa0();
// @baa 0x0188cdc0
void sub_0188cdc0(void) { sub_0186dfa0(); }

struct C_0188cdd0 { int sub_0188cdd0(void); };

// @baa 0x0188cdd0
int C_0188cdd0::sub_0188cdd0(void) { return *(int*)((char*)this + 36); }

void sub_01884080();
// @baa 0x0188cde0
void sub_0188cde0(void) { sub_01884080(); }

struct C_0188d4c0 { int sub_0188d4c0(void); };

// @baa 0x0188d4c0
int C_0188d4c0::sub_0188d4c0(void) { return *(int*)((char*)this + 8); }

struct C_0188d4f0 {
    void sub_0188d4f0();
};

// @baa 0x0188d4f0
void C_0188d4f0::sub_0188d4f0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_0188d590 {
    bool sub_0188d590(int);
};

// @baa 0x0188d590
bool C_0188d590::sub_0188d590(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == param_2;
}

struct C_0188d5a0 { int sub_0188d5a0(void); };

// @baa 0x0188d5a0
int C_0188d5a0::sub_0188d5a0(void) { return *(int*)((char*)this + 4); }

struct C_0188d5b0 { int sub_0188d5b0(void); };

// @baa 0x0188d5b0
int C_0188d5b0::sub_0188d5b0(void) { return *(int*)((char*)this + 4); }

struct C_0188d5c0 { int sub_0188d5c0(void); };

// @baa 0x0188d5c0
int C_0188d5c0::sub_0188d5c0(void) { return *(int*)((char*)this + 4); }

struct C_0188d610 {
    undefined4 sub_0188d610(byte);
};

int sub_0188d500(void);
// @baa 0x0188d610
undefined4 C_0188d610::sub_0188d610(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0188d500();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0188d6b0 { void sub_0188d6b0(void); };

// @baa 0x0188d6b0
void C_0188d6b0::sub_0188d6b0(void) { *(int*)((char*)this + 0) = (int)g_023ecd6c; }

struct C_0188d6c0 {
    undefined4 * sub_0188d6c0(byte);
};

// @baa 0x0188d6c0
undefined4 * C_0188d6c0::sub_0188d6c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ecd6c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0188d700 {
    void sub_0188d700(int *);
};

// @baa 0x0188d700
void C_0188d700::sub_0188d700(int * param_2)
{
    int param_1 = (int)this;

  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  piVar1 = piVar2 + *(int *)(param_1 + 4);
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == *param_2) {
        return;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
  }
  return;
}

struct C_0188d940 {
    void sub_0188d940();
};

// @baa 0x0188d940
void C_0188d940::sub_0188d940(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d30));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_0188d960 {
    void sub_0188d960();
};

// @baa 0x0188d960
void C_0188d960::sub_0188d960(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d30));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_0188d980 {
    void sub_0188d980();
};

// @baa 0x0188d980
void C_0188d980::sub_0188d980(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d30));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_0188d9a0 {
    void sub_0188d9a0();
};

// @baa 0x0188d9a0
void C_0188d9a0::sub_0188d9a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d38));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_0188d9c0 {
    void sub_0188d9c0();
};

// @baa 0x0188d9c0
void C_0188d9c0::sub_0188d9c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d38));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

extern char g_027b8304[];
// @baa 0x0188dc90
int sub_0188dc90(void) { return (int)g_027b8304; }

struct C_0188dd20 {
    undefined4 sub_0188dd20(byte);
};

int sub_0188dca0(void);
// @baa 0x0188dd20
undefined4 C_0188dd20::sub_0188dd20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0188dca0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b830c[];
// @baa 0x0188dd40
int sub_0188dd40(void) { return (int)g_027b830c; }

struct C_0188dd50 {
    undefined4 sub_0188dd50(byte);
};

int sub_0188d9e0(void);
// @baa 0x0188dd50
undefined4 C_0188dd50::sub_0188dd50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0188d9e0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0188de30 {
    undefined4 sub_0188de30(byte);
};

int sub_0188cf20(void);
// @baa 0x0188de30
undefined4 C_0188de30::sub_0188de30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0188cf20();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0188e720 { void sub_0188e720(void); };

// @baa 0x0188e720
void C_0188e720::sub_0188e720(void) { *(int*)((char*)this + 0) = (int)g_023e4520; }

struct C_0188e740 {
    undefined4 * sub_0188e740(byte);
};

// @baa 0x0188e740
undefined4 * C_0188e740::sub_0188e740(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4520));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b8314[];
// @baa 0x0188e760
int sub_0188e760(void) { return (int)g_027b8314; }

struct C_0188e770 {
    undefined4 sub_0188e770(byte);
};

int sub_0188e570(void);
// @baa 0x0188e770
undefined4 C_0188e770::sub_0188e770(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0188e570();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b81c0[];
// @baa 0x0188e930
int sub_0188e930(void) { return (int)g_027b81c0; }

struct C_0188e940 {
    undefined4 * sub_0188e940(byte);
};

int sub_01854460(void);
extern undefined4 g_023ef780;
// @baa 0x0188e940
undefined4 * C_0188e940::sub_0188e940(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ef780));
  sub_01854460();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0188e970 {
    void sub_0188e970();
};

// @baa 0x0188e970
void C_0188e970::sub_0188e970(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ef780));
  sub_01854460();
  return;
}

struct C_0188e980 {
    uint sub_0188e980();
};

// @baa 0x0188e980
uint C_0188e980::sub_0188e980(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18) >> 3 & 1;
}

extern char g_027b8320[];
// @baa 0x0188e990
int sub_0188e990(void) { return (int)g_027b8320; }

extern char g_027b7dac[];
// @baa 0x0188e9a0
int sub_0188e9a0(void) { return (int)g_027b7dac; }

extern char g_027b7d90[];
// @baa 0x0188e9b0
int sub_0188e9b0(void) { return (int)g_027b7d90; }

extern char g_027b8170[];
// @baa 0x0188ea00
int sub_0188ea00(void) { return (int)g_027b8170; }

extern char g_027b7ea8[];
// @baa 0x0188ea20
int sub_0188ea20(void) { return (int)g_027b7ea8; }

struct C_0188ea40 {
    void sub_0188ea40();
};

// @baa 0x0188ea40
void C_0188ea40::sub_0188ea40(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

extern char g_027b7eb0[];
// @baa 0x0188ea50
int sub_0188ea50(void) { return (int)g_027b7eb0; }

// @baa 0x0188ea60
int sub_0188ea60(void) { return (int)g_027b828c; }

// @baa 0x0188ea70
int sub_0188ea70(void) { return (int)g_027b82bc; }

// @baa 0x0188ea80
int sub_0188ea80(void) { return (int)g_027b830c; }

// @baa 0x0188ea90
int sub_0188ea90(void) { return (int)g_027b8314; }

// @baa 0x0188eaa0
int sub_0188eaa0(void) { return (int)g_027b8284; }

extern char g_027b7d3c[];
// @baa 0x0188eab0
int sub_0188eab0(void) { return (int)g_027b7d3c; }

extern char g_027b7d44[];
// @baa 0x0188eac0
int sub_0188eac0(void) { return (int)g_027b7d44; }

extern char g_027b7fac[];
// @baa 0x0188ead0
int sub_0188ead0(void) { return (int)g_027b7fac; }

struct C_0188eae0 {
    bool sub_0188eae0();
};

// @baa 0x0188eae0
bool C_0188eae0::sub_0188eae0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x2c) == 0;
}

extern char g_027b8180[];
// @baa 0x0188eaf0
int sub_0188eaf0(void) { return (int)g_027b8180; }

extern char g_027b7fc4[];
// @baa 0x0188eb00
int sub_0188eb00(void) { return (int)g_027b7fc4; }

extern char g_027b7f00[];
// @baa 0x0188eb10
int sub_0188eb10(void) { return (int)g_027b7f00; }

extern char g_027b7d5c[];
// @baa 0x0188eb20
int sub_0188eb20(void) { return (int)g_027b7d5c; }

extern char g_027b8150[];
// @baa 0x0188eb30
int sub_0188eb30(void) { return (int)g_027b8150; }

extern char g_027b8158[];
// @baa 0x0188eb40
int sub_0188eb40(void) { return (int)g_027b8158; }

extern char g_027b8168[];
// @baa 0x0188eb50
int sub_0188eb50(void) { return (int)g_027b8168; }

extern char g_027b8190[];
// @baa 0x0188eb60
int sub_0188eb60(void) { return (int)g_027b8190; }

extern char g_027b7d88[];
// @baa 0x0188eb70
int sub_0188eb70(void) { return (int)g_027b7d88; }

// @baa 0x0188eb80
int sub_0188eb80(void) { return (int)g_027b82b4; }

extern char g_027b7f9c[];
// @baa 0x0188eb90
int sub_0188eb90(void) { return (int)g_027b7f9c; }

// @baa 0x0188eba0
int sub_0188eba0(void) { return (int)g_027b8294; }

struct C_0188ebd0 {
    undefined4 * sub_0188ebd0();
};

int sub_01854260(void);
// @baa 0x0188ebd0
undefined4 * C_0188ebd0::sub_0188ebd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_01854260();
  *param_1 = (undefined4)((&g_023ef780));
  return param_1;
}

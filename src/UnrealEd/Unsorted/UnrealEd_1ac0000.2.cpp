// UnrealEd_1ac0000.cpp (part 2 of 4): 103 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_01ac9b40(byte);
};

int sub_01ab3290(...);
int sub_01ac97a0(void);
// @baa 0x01ac9b40
undefined4 C::sub_01ac9b40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01ac97a0();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x1c);
  }
  return param_1;
}

struct C_01acb480 {
    undefined1 sub_01acb480();
};

// @baa 0x01acb480
undefined1 C_01acb480::sub_01acb480(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 4) != 0)) {
    return 1;
  }
  return 0;
}

struct C_01acb5c0 { int sub_01acb5c0(void); };

// @baa 0x01acb5c0
int C_01acb5c0::sub_01acb5c0(void) { return *(int*)((char*)this + 16); }

struct C_01acb5d0 { void sub_01acb5d0(int a0); };

// @baa 0x01acb5d0
void C_01acb5d0::sub_01acb5d0(int a0) { *(int*)((char*)this + 16) = a0; }

struct C_01acb5e0 { int sub_01acb5e0(void); };

// @baa 0x01acb5e0
int C_01acb5e0::sub_01acb5e0(void) { return *(int*)((char*)this + 4); }

struct C_01acb5f0 { int sub_01acb5f0(void); };

// @baa 0x01acb5f0
int C_01acb5f0::sub_01acb5f0(void) { return *(int*)((char*)this + 12); }

struct C_01acb600 { int sub_01acb600(void); };

// @baa 0x01acb600
int C_01acb600::sub_01acb600(void) { return *(int*)((char*)this + 8); }

// @baa 0x01acb720
int sub_01acb720(void) { return 20; }

struct C_01acb7e0 {
    undefined4 * sub_01acb7e0(byte);
};

extern undefined4 g_0240d37c;
// @baa 0x01acb7e0
undefined4 * C_01acb7e0::sub_01acb7e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240d37c));
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,8);
  }
  return param_1;
}

int sub_01ab3960(...);
extern undefined4 g_0240d47c;
// @baa 0x01acb810
undefined4 * sub_01acb810(void)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)sub_01ab3960(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)((&g_0240d47c));
    puVar1[1] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// @baa 0x01acb830
undefined1 sub_01acb830(void)
{
  return 1;
}

// @baa 0x01acb840
undefined1 sub_01acb840(void)
{
  return 1;
}

// @baa 0x01acb850
undefined1 sub_01acb850(void)
{
  return 1;
}

// @baa 0x01acb860
undefined1 sub_01acb860(void)
{
  return 1;
}

// @baa 0x01acb890
int sub_01acb890(void) { return 0; }

// @baa 0x01acb8a0
void __stdcall sub_01acb8a0(int a0) {  }

// @baa 0x01acb8b0
int sub_01acb8b0(void) { return 0; }

struct C_01acb8c0 { int sub_01acb8c0(void); };

// @baa 0x01acb8c0
int C_01acb8c0::sub_01acb8c0(void) { return *(int*)((char*)this + 4); }

// @baa 0x01acb8e0
int sub_01acb8e0(void) { return 8; }

struct C_01acbb10 {
    undefined4 * sub_01acbb10();
};

int sub_01ada470(void);
extern undefined4 g_0240d4b4;
// @baa 0x01acbb10
undefined4 * C_01acbb10::sub_01acbb10(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_01ada470();
  *param_1 = (undefined4)((&g_0240d4b4));
  *(undefined1 *)(param_1 + 0x11) = 0;
  return param_1;
}

struct C_01acbb30 {
    void sub_01acbb30();
};

int sub_01ada490(void);
// @baa 0x01acbb30
void C_01acbb30::sub_01acbb30(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240d4b4));
  sub_01ada490();
  return;
}

struct C_01acbbd0 {
    undefined1 sub_01acbbd0();
};

// @baa 0x01acbbd0
undefined1 C_01acbbd0::sub_01acbbd0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x44);
}

struct C_01acbbe0 {
    void sub_01acbbe0(undefined1);
};

// @baa 0x01acbbe0
void C_01acbbe0::sub_01acbbe0(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x44) = param_2;
  return;
}

int sub_01ab31a0(void);
int sub_01ab5a10(void);
int sub_01ab6540(void);
int sub_01abc4e0(void);
int sub_01ac6170(void);
int sub_01ad1380(void);
// @baa 0x01acbcd0
void sub_01acbcd0(void)
{
  sub_01ac6170();
  sub_01abc4e0();
  sub_01ad1380();
  sub_01ab5a10();
  sub_01ab6540();
  sub_01ab31a0();
  return;
}

// @baa 0x01acbcf0
int sub_01acbcf0(void) { return 1720; }

// @baa 0x01acbd00
int sub_01acbd00(void) { return 1000; }

struct C_01acbe20 {
    undefined4 * sub_01acbe20(byte);
};

// @baa 0x01acbe20
undefined4 * C_01acbe20::sub_01acbe20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240d4b4));
  sub_01ada490();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x48);
  }
  return param_1;
}

struct C_01acc000 {
    undefined4 * sub_01acc000(byte);
};

// @baa 0x01acc000
undefined4 * C_01acc000::sub_01acc000(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240d4b4));
  sub_01ada490();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x48);
  }
  return param_1;
}

struct C_01acc190 {
    undefined4 * sub_01acc190(byte);
};

// @baa 0x01acc190
undefined4 * C_01acc190::sub_01acc190(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240d4b4));
  sub_01ada490();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x48);
  }
  return param_1;
}

int sub_01ab3410(...);
int sub_01ab59b0(void);
int sub_01ab5d40(void);
int sub_01ab6400(void);
int sub_01ab6860(void);
int sub_01ab69a0(void);
int sub_01ab8200(void);
int sub_01aba090(void);
int sub_01abc6a0(void);
int sub_01abee40(void);
int sub_01abf860(void);
int sub_01ac22b0(void);
int sub_01ac3d10(void);
int sub_01ac60b0(void);
int sub_01acb390(void);
int sub_01acbd90(void);
int sub_01acc3a0(void);
int sub_01acc430(void);
int sub_01acd670(void);
int sub_01acdce0(void);
int sub_01ad0e70(void);
int sub_01ad2b30(void);
int sub_01ad7030(void);
int sub_01ad7720(void);
int sub_01ada140(void);
int sub_01ada330(void);
int sub_01ada4a0(void);
int sub_01ada710(void);
int sub_01ada930(void);
int sub_01adac00(void);
int sub_01adadd0(void);
extern undefined4 g_027ca4d0;
extern undefined4 g_027ca4d8;
extern undefined4 g_027ca4dc;
extern undefined4 g_027ca4e0;
extern undefined4 g_027ca4e8;
extern undefined4 g_027ca4ec;
extern undefined4 g_027ca4f0;
extern undefined4 g_027ca4f8;
extern undefined4 g_027ca500;
extern undefined4 g_027ca508;
extern undefined4 g_027ca50c;
extern undefined4 g_027ca510;
extern undefined4 g_027ca514;
extern undefined4 g_027ca518;
extern undefined4 g_027ca51c;
extern undefined4 g_027ca554;
extern undefined4 g_027ca558;
extern undefined4 g_027ca55c;
extern undefined4 g_027ca564;
extern undefined4 g_027ca568;
extern undefined4 g_027ca56c;
extern undefined4 g_027ca570;
extern undefined4 g_027ca574;
extern undefined4 g_027ca578;
extern undefined4 g_027ca57c;
// @baa 0x01acc6f0
void sub_01acc6f0(undefined4 param_1)
{
  sub_01ab3410(param_1);
  sub_01ab6400();
  sub_01ab59b0();
  if (g_027ca4d0 == 0) {
    g_027ca4d0 = sub_01ab5d40();
  }
  if (g_027ca574 == 0) {
    g_027ca574 = sub_01ada930();
  }
  if (g_027ca564 == 0) {
    g_027ca564 = sub_01ada140();
  }
  if (g_027ca4d8 == 0) {
    g_027ca4d8 = sub_01ab6860();
  }
  if (g_027ca558 == 0) {
    g_027ca558 = sub_01ad7030();
  }
  if (g_027ca4dc == 0) {
    g_027ca4dc = sub_01ab69a0();
  }
  if (g_027ca55c == 0) {
    g_027ca55c = sub_01ad7720();
  }
  if (g_027ca51c == 0) {
    g_027ca51c = sub_01acdce0();
  }
  if (g_027ca4e0 == 0) {
    g_027ca4e0 = sub_01ab8200();
  }
  if (g_027ca568 == 0) {
    g_027ca568 = sub_01ada330();
  }
  if (g_027ca57c == 0) {
    g_027ca57c = sub_01adadd0();
  }
  if (g_027ca570 == 0) {
    g_027ca570 = sub_01ada710();
  }
  if (g_027ca56c == 0) {
    g_027ca56c = sub_01ada4a0();
  }
  if (g_027ca578 == 0) {
    g_027ca578 = sub_01adac00();
  }
  if (g_027ca4f8 == 0) {
    g_027ca4f8 = sub_01ac22b0();
  }
  if (g_027ca554 == 0) {
    g_027ca554 = sub_01ad2b30();
  }
  if (g_027ca4f0 == 0) {
    g_027ca4f0 = sub_01abee40();
  }
  if (g_027ca518 == 0) {
    g_027ca518 = sub_01acd670();
  }
  if (g_027ca4ec == 0) {
    g_027ca4ec = sub_01abf860();
  }
  if (g_027ca500 == 0) {
    g_027ca500 = sub_01ac60b0();
  }
  if (g_027ca4e8 == 0) {
    g_027ca4e8 = sub_01abc6a0();
  }
  if (g_027ca508 == 0) {
    g_027ca508 = sub_01acb390();
  }
  if (g_027ca50c == 0) {
    g_027ca50c = sub_01acbd90();
  }
  if (g_027ca510 == 0) {
    g_027ca510 = sub_01acc3a0();
  }
  if (g_027ca514 == 0) {
    g_027ca514 = sub_01acc430();
  }
  sub_01ad0e70();
  sub_01aba090();
  sub_01ac3d10();
  return;
}

// @baa 0x01acca10
int sub_01acca10(void) { return 24; }

struct C_01accbe0 {
    undefined4 sub_01accbe0(byte);
};

int sub_01acca20(void);
// @baa 0x01accbe0
undefined4 C_01accbe0::sub_01accbe0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01acca20();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x18);
  }
  return param_1;
}

// @baa 0x01accd00
undefined1 sub_01accd00(void)
{
  return 0;
}

// @baa 0x01acce90
int sub_01acce90(void) { return 36; }

struct C_01acd0f0 { char* sub_01acd0f0(void); };

// @baa 0x01acd0f0
char* C_01acd0f0::sub_01acd0f0(void) { return (char*)this + 8; }

struct C_01acd110 { char* sub_01acd110(void); };

// @baa 0x01acd110
char* C_01acd110::sub_01acd110(void) { return (char*)this + 12; }

struct C_01acd700 {
    undefined4 sub_01acd700(byte);
};

int sub_01acd070(void);
// @baa 0x01acd700
undefined4 C_01acd700::sub_01acd700(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01acd070();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x20);
  }
  return param_1;
}

struct C_01acd720 {
    int sub_01acd720(int);
};

// @baa 0x01acd720
int C_01acd720::sub_01acd720(int param_2)
{
    int param_1 = (int)this;

  return param_2 * 0x54 + *(int *)(param_1 + 0x14);
}

struct C_01acd850 {
    float10 sub_01acd850();
};

// @baa 0x01acd850
float10 C_01acd850::sub_01acd850(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x20) != 0) {
    return (float10)**(float **)(param_1 + 0x18);
  }
  return (float10)1;
}

struct C_01acdbc0 {
    undefined4 sub_01acdbc0(byte);
};

int sub_01acd9d0(void);
// @baa 0x01acdbc0
undefined4 C_01acdbc0::sub_01acdbc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01acd9d0();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x24);
  }
  return param_1;
}

// @baa 0x01acddb0
int sub_01acddb0(void) { return 0; }

// @baa 0x01acddc0
int sub_01acddc0(void) { return 0; }

// @baa 0x01acddd0
int sub_01acddd0(void) { return 0; }

// @baa 0x01acdde0
int sub_01acdde0(void) { return 0; }

// @baa 0x01acddf0
int sub_01acddf0(void) { return 0; }

// @baa 0x01acde00
int sub_01acde00(void) { return 0; }

// @baa 0x01acde10
int sub_01acde10(void) { return 0; }

// @baa 0x01acde20
int sub_01acde20(void) { return 0; }

// @baa 0x01acde30
int sub_01acde30(void) { return 0; }

// @baa 0x01acde40
int sub_01acde40(void) { return 0; }

// @baa 0x01acde50
int sub_01acde50(void) { return 0; }

// @baa 0x01acde60
int sub_01acde60(void) { return 0; }

struct C_01acdf50 { int sub_01acdf50(void); };

// @baa 0x01acdf50
int C_01acdf50::sub_01acdf50(void) { return *(int*)((char*)this + 8); }

struct C_01acdf60 {
    int sub_01acdf60(int);
};

// @baa 0x01acdf60
int C_01acdf60::sub_01acdf60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x01ace020
void sub_01ace020(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01ace040
void sub_01ace040(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_01ace080 {
    undefined4 sub_01ace080(byte);
};

int sub_00402660(...);
int sub_01ab58f0(void);
// @baa 0x01ace080
undefined4 C_01ace080::sub_01ace080(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01ab58f0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01ace0a0
void sub_01ace0a0(void) {  }

extern undefined4 g_027ca524;
// @baa 0x01ace0d0
undefined4 sub_01ace0d0(void)
{
  if (g_027ca524 != 0) {
    return *(undefined4 *)(g_027ca524 + 8);
  }
  return 0;
}

// @baa 0x01ace920
void sub_01ace920(void) {  }

struct C_01aceac0 {
    void sub_01aceac0();
};

// @baa 0x01aceac0
void C_01aceac0::sub_01aceac0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01acef60 {
    void sub_01acef60();
};

// @baa 0x01acef60
void C_01acef60::sub_01acef60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01acf0a0 {
    undefined4 * sub_01acf0a0(byte);
};

// @baa 0x01acf0a0
undefined4 * C_01acf0a0::sub_01acf0a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01acf170
void __stdcall sub_01acf170(int a0) {  }

struct C_01acf180 { char* sub_01acf180(void); };

// @baa 0x01acf180
char* C_01acf180::sub_01acf180(void) { return (char*)this + 8; }

struct C_01acf190 { int sub_01acf190(void); };

// @baa 0x01acf190
int C_01acf190::sub_01acf190(void) { return *(int*)((char*)this + 8); }

struct C_01acf1a0 {
    int sub_01acf1a0(int);
};

// @baa 0x01acf1a0
int C_01acf1a0::sub_01acf1a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_01acf1f0 { int sub_01acf1f0(void); };

// @baa 0x01acf1f0
int C_01acf1f0::sub_01acf1f0(void) { return *(int*)((char*)this + 28); }

struct C_01acf220 {
    float10 sub_01acf220(int);
};

// @baa 0x01acf220
float10 C_01acf220::sub_01acf220(int param_2)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(param_1 + 0x14) + 4 + param_2 * 8);
}

// @baa 0x01acf2e0
void __stdcall sub_01acf2e0(int a0) {  }

struct C_01acf2f0 { char* sub_01acf2f0(void); };

// @baa 0x01acf2f0
char* C_01acf2f0::sub_01acf2f0(void) { return (char*)this + 36; }

// @baa 0x01acf300
int sub_01acf300(void) { return 0; }

struct C_01acf310 { int sub_01acf310(void); };

// @baa 0x01acf310
int C_01acf310::sub_01acf310(void) { return *(int*)((char*)this + 56); }

struct C_01acf340 {
    float10 sub_01acf340(int);
};

// @baa 0x01acf340
float10 C_01acf340::sub_01acf340(int param_2)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(param_1 + 0x30) + 4 + param_2 * 8);
}

// @baa 0x01acf410
void __stdcall sub_01acf410(int a0) {  }

struct C_01acf420 { char* sub_01acf420(void); };

// @baa 0x01acf420
char* C_01acf420::sub_01acf420(void) { return (char*)this + 36; }

// @baa 0x01acf430
int sub_01acf430(void) { return 1; }

struct C_01acf440 { int sub_01acf440(void); };

// @baa 0x01acf440
int C_01acf440::sub_01acf440(void) { return *(int*)((char*)this + 56); }

struct C_01acf470 {
    float10 sub_01acf470(int);
};

// @baa 0x01acf470
float10 C_01acf470::sub_01acf470(int param_2)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(param_1 + 0x30) + 4 + param_2 * 8);
}

// @baa 0x01acf540
void __stdcall sub_01acf540(int a0) {  }

struct C_01acf550 { char* sub_01acf550(void); };

// @baa 0x01acf550
char* C_01acf550::sub_01acf550(void) { return (char*)this + 36; }

// @baa 0x01acf560
int sub_01acf560(void) { return 2; }

struct C_01acf570 { int sub_01acf570(void); };

// @baa 0x01acf570
int C_01acf570::sub_01acf570(void) { return *(int*)((char*)this + 56); }

struct C_01acf5a0 {
    float10 sub_01acf5a0(int);
};

// @baa 0x01acf5a0
float10 C_01acf5a0::sub_01acf5a0(int param_2)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(param_1 + 0x30) + 4 + param_2 * 8);
}

// @baa 0x01acf670
void __stdcall sub_01acf670(int a0) {  }

struct C_01acf680 { char* sub_01acf680(void); };

// @baa 0x01acf680
char* C_01acf680::sub_01acf680(void) { return (char*)this + 36; }

// @baa 0x01acf690
int sub_01acf690(void) { return 3; }

struct C_01acf6a0 { int sub_01acf6a0(void); };

// @baa 0x01acf6a0
int C_01acf6a0::sub_01acf6a0(void) { return *(int*)((char*)this + 56); }

struct C_01acf6d0 {
    float10 sub_01acf6d0(int);
};

// @baa 0x01acf6d0
float10 C_01acf6d0::sub_01acf6d0(int param_2)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(param_1 + 0x30) + 4 + param_2 * 8);
}

// @baa 0x01acf7a0
void __stdcall sub_01acf7a0(int a0) {  }

struct C_01acf7b0 { char* sub_01acf7b0(void); };

// @baa 0x01acf7b0
char* C_01acf7b0::sub_01acf7b0(void) { return (char*)this + 36; }

// @baa 0x01acf7c0
int sub_01acf7c0(void) { return 4; }

struct C_01acf7d0 { int sub_01acf7d0(void); };

// @baa 0x01acf7d0
int C_01acf7d0::sub_01acf7d0(void) { return *(int*)((char*)this + 56); }

struct C_01acf800 {
    float10 sub_01acf800(int);
};

// @baa 0x01acf800
float10 C_01acf800::sub_01acf800(int param_2)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(param_1 + 0x30) + 4 + param_2 * 8);
}

// @baa 0x01acf8d0
void __stdcall sub_01acf8d0(int a0) {  }

struct C_01acf8e0 { char* sub_01acf8e0(void); };

// @baa 0x01acf8e0
char* C_01acf8e0::sub_01acf8e0(void) { return (char*)this + 36; }

// @baa 0x01acf8f0
int sub_01acf8f0(void) { return 5; }

struct C_01acf900 { int sub_01acf900(void); };

// @baa 0x01acf900
int C_01acf900::sub_01acf900(void) { return *(int*)((char*)this + 56); }

struct C_01acf930 {
    float10 sub_01acf930(int);
};

// @baa 0x01acf930
float10 C_01acf930::sub_01acf930(int param_2)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(param_1 + 0x30) + 4 + param_2 * 8);
}

// @baa 0x01acfa00
void __stdcall sub_01acfa00(int a0) {  }

struct C_01acfa10 { char* sub_01acfa10(void); };

// @baa 0x01acfa10
char* C_01acfa10::sub_01acfa10(void) { return (char*)this + 36; }

// @baa 0x01acfa20
int sub_01acfa20(void) { return 6; }

struct C_01acfa30 { int sub_01acfa30(void); };

// @baa 0x01acfa30
int C_01acfa30::sub_01acfa30(void) { return *(int*)((char*)this + 56); }

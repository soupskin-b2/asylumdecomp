// GFx_19f0000.cpp (part 1 of 3): 128 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x019f0890
int sub_019f0890(void) { return 21; }

// @baa 0x019f0b90
undefined1 sub_019f0b90(void)
{
  return 1;
}

struct C { C* sub_019f14e0(void); };

// @baa 0x019f14e0
C* C::sub_019f14e0(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x019f15e0
void __stdcall sub_019f15e0(int a0) {  }

struct C_019f24a0 { C_019f24a0* sub_019f24a0(void); };

// @baa 0x019f24a0
C_019f24a0* C_019f24a0::sub_019f24a0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019f2680 { C_019f2680* sub_019f2680(void); };

// @baa 0x019f2680
C_019f2680* C_019f2680::sub_019f2680(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x019f2df0
undefined1 sub_019f2df0(void)
{
  return 1;
}

extern char g_023ffe70[];
// @baa 0x019f3540
int __stdcall sub_019f3540(int a0) { return (int)g_023ffe70; }

struct C_019f52f0 { C_019f52f0* sub_019f52f0(void); };

// @baa 0x019f52f0
C_019f52f0* C_019f52f0::sub_019f52f0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019f5380 { int sub_019f5380(void); };

// @baa 0x019f5380
int C_019f5380::sub_019f5380(void) { return *(int*)((char*)this + 0); }

struct C_019f5390 { int sub_019f5390(void); };

// @baa 0x019f5390
int C_019f5390::sub_019f5390(void) { return *(int*)((char*)this + 0); }

// @baa 0x019f5a50
int sub_019f5a50(void) { return 34; }

// @baa 0x019f5f60
undefined1 sub_019f5f60(void)
{
  return 1;
}

void sub_019f6340();
// @baa 0x019f64a0
void sub_019f64a0(void) { sub_019f6340(); }

void sub_01973ce0();
// @baa 0x019f6560
void sub_019f6560(void) { sub_01973ce0(); }

struct C_019f6b60 { C_019f6b60* sub_019f6b60(void); };

// @baa 0x019f6b60
C_019f6b60* C_019f6b60::sub_019f6b60(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019f6c80 {
    float10 sub_019f6c80(double, double);
};

// @baa 0x019f6c80
float10 C_019f6c80::sub_019f6c80(double param_2, double param_3)
{
    double * param_1 = (double *)this;

  return (float10)*param_1 * (float10)param_2 + (float10)param_1[1] * (float10)param_3;
}

struct C_019f7160 {
    float10 sub_019f7160(double *);
};

// @baa 0x019f7160
float10 C_019f7160::sub_019f7160(double * param_2)
{
    double * param_1 = (double *)this;

  return (float10)*param_2 * (float10)*param_1 + (float10)param_2[1] * (float10)param_1[1];
}

struct C_019f7180 {
    float10 sub_019f7180();
};

// @baa 0x019f7180
float10 C_019f7180::sub_019f7180(void)
{
    double * param_1 = (double *)this;

  return (float10)*param_1 * (float10)*param_1 + (float10)param_1[1] * (float10)param_1[1];
}

// @baa 0x019f7340
int sub_019f7340(void) { return 16; }

// @baa 0x019f7c80
undefined1 sub_019f7c80(void)
{
  return 1;
}

void sub_019f8060();
// @baa 0x019f8340
void sub_019f8340(void) { sub_019f8060(); }

// @baa 0x019f8400
void sub_019f8400(void) { sub_01973ce0(); }

// @baa 0x019f9290
int sub_019f9290(void) { return 18; }

// @baa 0x019f9480
undefined1 sub_019f9480(void)
{
  return 1;
}

void sub_019f9860();
// @baa 0x019f9f70
void sub_019f9f70(void) { sub_019f9860(); }

// @baa 0x019facd0
int __stdcall sub_019facd0(int a0) { return 0; }

// @baa 0x019face0
void sub_019face0(void) { sub_01973ce0(); }

// @baa 0x019fb640
void sub_019fb640(void) {  }

struct C_019fb790 { int sub_019fb790(void); };

// @baa 0x019fb790
int C_019fb790::sub_019fb790(void) { return *(int*)((char*)this + 0); }

// @baa 0x019fb9e0
int __stdcall sub_019fb9e0(int a0) { return 0; }

// @baa 0x019fb9f0
void sub_019fb9f0(void) { sub_01973ce0(); }

// @baa 0x019fccd0
undefined1 sub_019fccd0(void)
{
  return 1;
}

void sub_019fd0b0();
// @baa 0x019fd210
void sub_019fd210(void) { sub_019fd0b0(); }

struct C_019fd3c0 { int sub_019fd3c0(void); };

// @baa 0x019fd3c0
int C_019fd3c0::sub_019fd3c0(void) { return *(int*)((char*)this + 0); }

struct C_019fd3d0 { int sub_019fd3d0(void); };

// @baa 0x019fd3d0
int C_019fd3d0::sub_019fd3d0(void) { return *(int*)((char*)this + 0); }

// @baa 0x019fd560
undefined4 * sub_019fd560(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

// @baa 0x019fd660
void sub_019fd660(void) { sub_01973ce0(); }

// @baa 0x019fda70
int sub_019fda70(void) { return 24; }

// @baa 0x019fdc50
undefined1 sub_019fdc50(void)
{
  return 1;
}

void sub_019fe030();
// @baa 0x019fe1c0
void sub_019fe1c0(void) { sub_019fe030(); }

extern char g_024029e0[];
struct C_019fe350 { void sub_019fe350(void); };

// @baa 0x019fe350
void C_019fe350::sub_019fe350(void) { *(int*)((char*)this + 0) = (int)g_024029e0; }

struct C_019fe360 {
    undefined4 * sub_019fe360(byte);
};

int sub_00402660(...);
// @baa 0x019fe360
undefined4 * C_019fe360::sub_019fe360(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_024029e0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_019fe380 {
    undefined4 sub_019fe380();
};

// @baa 0x019fe380
undefined4 C_019fe380::sub_019fe380(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
}

// @baa 0x019fe390
void __stdcall sub_019fe390(int a0, int a1, int a2, int a3) {  }

// @baa 0x019fe3a0
void __stdcall sub_019fe3a0(int a0, int a1, int a2) {  }

// @baa 0x019fe3d0
void __stdcall sub_019fe3d0(int a0, int a1) {  }

// @baa 0x019fe3e0
void __stdcall sub_019fe3e0(int a0, int a1) {  }

// @baa 0x019fe3f0
int __stdcall sub_019fe3f0(int a0) { return 0; }

// @baa 0x019fe400
int __stdcall sub_019fe400(int a0) { return 0; }

struct C_019fe410 { C_019fe410* sub_019fe410(void); };

// @baa 0x019fe410
C_019fe410* C_019fe410::sub_019fe410(void) { *(int*)((char*)this + 0) = (int)g_024029e0; return this; }

extern char g_02402a04[];
struct C_019fe420 { C_019fe420* sub_019fe420(void); };

// @baa 0x019fe420
C_019fe420* C_019fe420::sub_019fe420(void) { *(int*)((char*)this + 0) = (int)g_02402a04; return this; }

struct C_019fe4c0 { void sub_019fe4c0(void); };

// @baa 0x019fe4c0
void C_019fe4c0::sub_019fe4c0(void) { *(int*)((char*)this + 0) = (int)g_024029e0; }

extern char g_02402a28[];
struct C_019fe4d0 { C_019fe4d0* sub_019fe4d0(void); };

// @baa 0x019fe4d0
C_019fe4d0* C_019fe4d0::sub_019fe4d0(void) { *(int*)((char*)this + 0) = (int)g_02402a28; return this; }

struct C_019fe540 { void sub_019fe540(void); };

// @baa 0x019fe540
void C_019fe540::sub_019fe540(void) { *(int*)((char*)this + 0) = (int)g_024029e0; }

extern char g_02402a4c[];
struct C_019fe550 { C_019fe550* sub_019fe550(void); };

// @baa 0x019fe550
C_019fe550* C_019fe550::sub_019fe550(void) { *(int*)((char*)this + 0) = (int)g_02402a4c; return this; }

struct C_019fe610 { void sub_019fe610(void); };

// @baa 0x019fe610
void C_019fe610::sub_019fe610(void) { *(int*)((char*)this + 0) = (int)g_024029e0; }

extern char g_02402a70[];
struct C_019fe620 { C_019fe620* sub_019fe620(void); };

// @baa 0x019fe620
C_019fe620* C_019fe620::sub_019fe620(void) { *(int*)((char*)this + 0) = (int)g_02402a70; return this; }

struct C_019fe700 { void sub_019fe700(void); };

// @baa 0x019fe700
void C_019fe700::sub_019fe700(void) { *(int*)((char*)this + 0) = (int)g_024029e0; }

struct C_019fe710 {
    undefined4 * sub_019fe710(byte);
};

// @baa 0x019fe710
undefined4 * C_019fe710::sub_019fe710(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_024029e0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_019fe730 {
    undefined4 * sub_019fe730(byte);
};

// @baa 0x019fe730
undefined4 * C_019fe730::sub_019fe730(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_024029e0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_019fe750 {
    undefined4 * sub_019fe750(byte);
};

// @baa 0x019fe750
undefined4 * C_019fe750::sub_019fe750(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_024029e0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_019fe770 {
    undefined4 * sub_019fe770(byte);
};

// @baa 0x019fe770
undefined4 * C_019fe770::sub_019fe770(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_024029e0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x019fec10
uint sub_019fec10(uint param_1)
{
  return param_1 >> 0x1e & 1;
}

// @baa 0x019fec30
undefined4 sub_019fec30(int param_1)
{
  if (*(int *)(param_1 + 4) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
  }
  return 0;
}

// @baa 0x019fec50
undefined4 sub_019fec50(int * param_1)
{
  return *(undefined4 *)(*param_1 + 0x28);
}

// @baa 0x019fed50
void sub_019fed50(undefined4 * param_1, undefined4 param_2)
{
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  *param_1 = 0;
  param_1[4] = param_2;
  param_1[5] = 0;
  return;
}

struct C_019fedc0 {
    void sub_019fedc0();
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x019fedc0
void C_019fedc0::sub_019fedc0(void)
{
    int * param_1 = (int *)this;

  sub_01a37612((void *)param_1[2],0,*param_1 * 4);
  return;
}

struct C_019fede0 {
    void sub_019fede0(undefined4 *);
};

// @baa 0x019fede0
void C_019fede0::sub_019fede0(undefined4 * param_2)
{
    int * param_1 = (int *)this;

  *(undefined4 *)(param_1[2] + *param_1 * 4) = *param_2;
  *param_1 = *param_1 + 1;
  return;
}

struct C_019fee00 { int sub_019fee00(void); };

// @baa 0x019fee00
int C_019fee00::sub_019fee00(void) { return *(int*)((char*)this + 4); }

struct C_019fee10 {
    void sub_019fee10(undefined1 *);
};

// @baa 0x019fee10
void C_019fee10::sub_019fee10(undefined1 * param_2)
{
    int * param_1 = (int *)this;

  *(undefined1 *)(param_1[2] + *param_1) = *param_2;
  *param_1 = *param_1 + 1;
  return;
}

struct C_019fee30 { int sub_019fee30(void); };

// @baa 0x019fee30
int C_019fee30::sub_019fee30(void) { return *(int*)((char*)this + 0); }

struct C_019fee40 {
    int sub_019fee40(int);
};

// @baa 0x019fee40
int C_019fee40::sub_019fee40(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + param_2;
}

struct C_019fee50 {
    int sub_019fee50(int);
};

// @baa 0x019fee50
int C_019fee50::sub_019fee50(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + param_2;
}

struct C_019fee60 { void sub_019fee60(void); };

// @baa 0x019fee60
void C_019fee60::sub_019fee60(void) { *(int*)((char*)this + 0) = 0; }

struct C_019fee70 {
    int sub_019fee70(uint);
};

// @baa 0x019fee70
int C_019fee70::sub_019fee70(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 10) * 4) + (param_2 & 0x3ff) * 8;
}

struct C_019fee90 { void sub_019fee90(void); };

// @baa 0x019fee90
void C_019fee90::sub_019fee90(void) { *(int*)((char*)this + 0) = 0; }

struct C_019feea0 { int sub_019feea0(void); };

// @baa 0x019feea0
int C_019feea0::sub_019feea0(void) { return *(int*)((char*)this + 0); }

struct C_019feeb0 {
    int sub_019feeb0(uint);
};

// @baa 0x019feeb0
int C_019feeb0::sub_019feeb0(uint param_2)
{
    int param_1 = (int)this;

  return (param_2 & 0x3f) * 0x10 + *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4);
}

struct C_019feed0 { void sub_019feed0(void); };

// @baa 0x019feed0
void C_019feed0::sub_019feed0(void) { *(int*)((char*)this + 0) = 0; }

struct C_019feee0 { int sub_019feee0(void); };

// @baa 0x019feee0
int C_019feee0::sub_019feee0(void) { return *(int*)((char*)this + 0); }

struct C_019feef0 {
    int sub_019feef0(uint);
};

// @baa 0x019feef0
int C_019feef0::sub_019feef0(uint param_2)
{
    int param_1 = (int)this;

  return (param_2 & 0x3ff) * 0x10 + *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 10) * 4);
}

struct C_019fef10 { void sub_019fef10(void); };

// @baa 0x019fef10
void C_019fef10::sub_019fef10(void) { *(int*)((char*)this + 0) = 0; }

struct C_019fef20 { int sub_019fef20(void); };

// @baa 0x019fef20
int C_019fef20::sub_019fef20(void) { return *(int*)((char*)this + 0); }

struct C_019fef30 {
    int sub_019fef30(uint);
};

// @baa 0x019fef30
int C_019fef30::sub_019fef30(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0x38;
}

struct C_019fef60 { void sub_019fef60(void); };

// @baa 0x019fef60
void C_019fef60::sub_019fef60(void) { *(int*)((char*)this + 0) = 0; }

struct C_019fef70 {
    void sub_019fef70(uint);
};

// @baa 0x019fef70
void C_019fef70::sub_019fef70(uint param_2)
{
    uint * param_1 = (uint *)this;

  if (param_2 < *param_1) {
    *param_1 = param_2;
  }
  return;
}

struct C_019fefd0 { int sub_019fefd0(void); };

// @baa 0x019fefd0
int C_019fefd0::sub_019fefd0(void) { return *(int*)((char*)this + 0); }

struct C_019fefe0 {
    int sub_019fefe0(int);
};

// @baa 0x019fefe0
int C_019fefe0::sub_019fefe0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + param_2 * 4;
}

struct C_019feff0 {
    int sub_019feff0(int);
};

// @baa 0x019feff0
int C_019feff0::sub_019feff0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + param_2 * 4;
}

struct C_019ff000 { void sub_019ff000(void); };

// @baa 0x019ff000
void C_019ff000::sub_019ff000(void) { *(int*)((char*)this + 0) = 0; }

struct C_019ff010 {
    void sub_019ff010(uint);
};

// @baa 0x019ff010
void C_019ff010::sub_019ff010(uint param_2)
{
    uint * param_1 = (uint *)this;

  if (param_2 < *param_1) {
    *param_1 = param_2;
  }
  return;
}

struct C_019ff020 { int sub_019ff020(void); };

// @baa 0x019ff020
int C_019ff020::sub_019ff020(void) { return *(int*)((char*)this + 0); }

struct C_019ff030 {
    int sub_019ff030(uint);
};

// @baa 0x019ff030
int C_019ff030::sub_019ff030(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 10) * 4) + (param_2 & 0x3ff) * 4;
}

struct C_019ff050 { void sub_019ff050(void); };

// @baa 0x019ff050
void C_019ff050::sub_019ff050(void) { *(int*)((char*)this + 0) = 0; }

struct C_019ff060 { int sub_019ff060(void); };

// @baa 0x019ff060
int C_019ff060::sub_019ff060(void) { return *(int*)((char*)this + 0); }

struct C_019ff070 {
    int sub_019ff070(uint);
};

// @baa 0x019ff070
int C_019ff070::sub_019ff070(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0xc;
}

struct C_019ff090 {
    int sub_019ff090(int);
};

// @baa 0x019ff090
int C_019ff090::sub_019ff090(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + param_2 * 4;
}

struct C_019ff0a0 { void sub_019ff0a0(void); };

// @baa 0x019ff0a0
void C_019ff0a0::sub_019ff0a0(void) { *(int*)((char*)this + 0) = 0; }

struct C_019ff0b0 {
    void sub_019ff0b0(undefined4 *);
};

// @baa 0x019ff0b0
void C_019ff0b0::sub_019ff0b0(undefined4 * param_2)
{
    int * param_1 = (int *)this;

  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1[2] + *param_1 * 0xc);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  *param_1 = *param_1 + 1;
  return;
}

struct C_019ff0e0 { int sub_019ff0e0(void); };

// @baa 0x019ff0e0
int C_019ff0e0::sub_019ff0e0(void) { return *(int*)((char*)this + 0); }

struct C_019ff120 {
    void sub_019ff120();
};

// @baa 0x019ff120
void C_019ff120::sub_019ff120(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    *param_1 = *param_1 + -1;
  }
  return;
}

struct C_019ff130 { void sub_019ff130(void); };

// @baa 0x019ff130
void C_019ff130::sub_019ff130(void) { *(int*)((char*)this + 0) = 0; }

struct C_019ff140 {
    void sub_019ff140(uint);
};

// @baa 0x019ff140
void C_019ff140::sub_019ff140(uint param_2)
{
    uint * param_1 = (uint *)this;

  if (param_2 < *param_1) {
    *param_1 = param_2;
  }
  return;
}

struct C_019ff150 { int sub_019ff150(void); };

// @baa 0x019ff150
int C_019ff150::sub_019ff150(void) { return *(int*)((char*)this + 0); }

struct C_019ff160 { void sub_019ff160(void); };

// @baa 0x019ff160
void C_019ff160::sub_019ff160(void) { *(int*)((char*)this + 0) = 0; }

struct C_019ff170 {
    int sub_019ff170(uint);
};

// @baa 0x019ff170
int C_019ff170::sub_019ff170(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0x18;
}

struct C_019ff1b0 { void sub_019ff1b0(void); };

// @baa 0x019ff1b0
void C_019ff1b0::sub_019ff1b0(void) { *(int*)((char*)this + 0) = 0; }

struct C_019ff1c0 {
    void sub_019ff1c0();
};

// @baa 0x019ff1c0
void C_019ff1c0::sub_019ff1c0(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    *param_1 = *param_1 + -1;
  }
  return;
}

struct C_019ff1d0 { int sub_019ff1d0(void); };

// @baa 0x019ff1d0
int C_019ff1d0::sub_019ff1d0(void) { return *(int*)((char*)this + 0); }

struct C_019ff1e0 {
    int sub_019ff1e0(uint);
};

// @baa 0x019ff1e0
int C_019ff1e0::sub_019ff1e0(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 10) * 4) + (param_2 & 0x3ff) * 8;
}

struct C_019ff200 {
    int sub_019ff200(uint);
};

// @baa 0x019ff200
int C_019ff200::sub_019ff200(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 10) * 4) + (param_2 & 0x3ff) * 8;
}

struct C_019ff240 { void sub_019ff240(void); };

// @baa 0x019ff240
void C_019ff240::sub_019ff240(void) { *(int*)((char*)this + 0) = 0; }

struct C_019ff250 {
    void sub_019ff250();
};

// @baa 0x019ff250
void C_019ff250::sub_019ff250(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    *param_1 = *param_1 + -1;
  }
  return;
}

struct C_019ff260 { int sub_019ff260(void); };

// @baa 0x019ff260
int C_019ff260::sub_019ff260(void) { return *(int*)((char*)this + 0); }

struct C_019ff2d0 { void sub_019ff2d0(void); };

// @baa 0x019ff2d0
void C_019ff2d0::sub_019ff2d0(void) { *(int*)((char*)this + 0) = 0; }

struct C_019ff2e0 {
    void sub_019ff2e0(uint);
};

// @baa 0x019ff2e0
void C_019ff2e0::sub_019ff2e0(uint param_2)
{
    uint * param_1 = (uint *)this;

  if (param_2 < *param_1) {
    *param_1 = param_2;
  }
  return;
}

struct C_019ff2f0 {
    undefined1 sub_019ff2f0();
};

// @baa 0x019ff2f0
undefined1 C_019ff2f0::sub_019ff2f0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x20);
}

struct C_019ff300 {
    bool sub_019ff300();
};

// @baa 0x019ff300
bool C_019ff300::sub_019ff300(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_019ff310 {
    undefined1 sub_019ff310();
};

// @baa 0x019ff310
undefined1 C_019ff310::sub_019ff310(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x20);
}

struct C_019ff320 {
    bool sub_019ff320();
};

// @baa 0x019ff320
bool C_019ff320::sub_019ff320(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_019ff330 {
    int sub_019ff330(uint);
};

// @baa 0x019ff330
int C_019ff330::sub_019ff330(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 4) * 4) + (param_2 & 0xf) * 0x1c;
}

struct C_019ff360 {
    int sub_019ff360(uint);
};

// @baa 0x019ff360
int C_019ff360::sub_019ff360(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 10) * 4) + (param_2 & 0x3ff) * 0xc;
}

// @baa 0x019ff620
void sub_019ff620(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x019ff700
void sub_019ff700(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_019ff9a0 {
    int sub_019ff9a0(uint);
};

// @baa 0x019ff9a0
int C_019ff9a0::sub_019ff9a0(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 8;
}

struct C_019ffe60 {
    undefined4 sub_019ffe60(int);
};

// @baa 0x019ffe60
undefined4 C_019ffe60::sub_019ffe60(int param_2)
{
    int param_1 = (int)this;

  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 4);
  if (uVar1 != 0xffffffff) {
    return *(undefined4 *)
            (*(int *)(*(int *)(param_1 + 0x198) + (uVar1 >> 10) * 4) + (uVar1 & 0x3ff) * 8);
  }
  return 0xffffffff;
}

struct C_019fff10 {
    undefined4 sub_019fff10(uint, uint, int);
};

int sub_019fff6b(...);
// @baa 0x019fff10
undefined4 C_019fff10::sub_019fff10(uint param_2, uint param_3, int param_4)
{
    int param_1 = (int)this;

  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  if (param_2 < *(uint *)(param_1 + 0x138)) {
    iVar2 = *(int *)(param_1 + 0x140) + param_2 * 0xc;
  }
  if (param_3 < *(uint *)(param_1 + 0x144)) {
    iVar1 = *(int *)(param_1 + 0x14c) + param_3 * 0xc;
  }
  if (iVar2 != 0) {
    if (iVar1 == 0) goto sub_019fff6b;
    if (*(int *)(iVar2 + 8) == *(int *)(iVar1 + 8)) {
      return 0;
    }
  }
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) == param_4)) {
    return 2;
  }
sub_019fff6b:
  if ((iVar2 != 0) && (*(int *)(iVar2 + 8) == param_4)) {
    return 3;
  }
  return 0;
}

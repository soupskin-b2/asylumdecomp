// UnrealEd_1b40000.cpp (part 1 of 5): 119 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01b40000
void __stdcall sub_01b40000(int a0, int a1) {  }

struct C {
    void sub_01b40260();
};

int sub_00402660(...);
// @baa 0x01b40260
void C::sub_01b40260(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) != 0) {
    sub_00402660(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

void sub_01b400b0();
// @baa 0x01b40640
void sub_01b40640(void) { sub_01b400b0(); }

struct C_01b40650 {
    void sub_01b40650();
};

// @baa 0x01b40650
void C_01b40650::sub_01b40650(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) != 0) {
    sub_00402660(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

int sub_01b407a0(...);
extern "C" __declspec(dllimport) int _invalid_parameter_noinfo(...);
// @baa 0x01b40970
void sub_01b40970(int param_1, int param_2, int param_3, int param_4, undefined4 param_5)
{
  if ((param_3 == 0) || (param_3 != param_1)) {
    _invalid_parameter_noinfo();
  }
  sub_01b407a0(param_2,param_4,param_4 - param_2 >> 2,param_5);
  return;
}

struct C_01b41b20 { C_01b41b20* sub_01b41b20(void); };

// @baa 0x01b41b20
C_01b41b20* C_01b41b20::sub_01b41b20(void) { return this; }

struct C_01b420b0 {
    void sub_01b420b0();
};

// @baa 0x01b420b0
void C_01b420b0::sub_01b420b0(void)
{
    double * param_1 = (double *)this;

  if (*(char *)(param_1 + 0xf) == '\0') {
    *param_1 = -*param_1;
    param_1[3] = -param_1[3];
    param_1[6] = -param_1[6];
  }
  return;
}

// @baa 0x01b42b70
void sub_01b42b70(double * param_1, double * param_2, double * param_3)
{
  *param_3 = param_2[2] * param_1[1] - param_1[2] * param_2[1];
  param_3[1] = param_1[2] * *param_2 - *param_1 * param_2[2];
  param_3[2] = *param_1 * param_2[1] - *param_2 * param_1[1];
  return;
}

struct C_01b43190 { C_01b43190* sub_01b43190(void); };

// @baa 0x01b43190
C_01b43190* C_01b43190::sub_01b43190(void) { return this; }

extern undefined4 g_027d32fc;
extern undefined4 g_027d3300;
extern undefined4 g_027d3304;
extern undefined4 g_027d3308;
extern undefined4 g_027d330c;
extern undefined4 g_027d3310;
extern undefined4 g_027d3314;
// @baa 0x01b43260
void sub_01b43260(undefined4 * param_1, undefined4 param_2)
{
  g_027d3300 = *param_1;
  g_027d3304 = param_1[1];
  g_027d3308 = param_1[2];
  g_027d330c = param_1[3];
  g_027d3310 = param_1[4];
  g_027d3314 = param_1[5];
  g_027d32fc = param_2;
  return;
}

struct C_01b432b0 {
    int sub_01b432b0();
};

// @baa 0x01b432b0
int C_01b432b0::sub_01b432b0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}

struct C_01b43350 { C_01b43350* sub_01b43350(void); };

// @baa 0x01b43350
C_01b43350* C_01b43350::sub_01b43350(void) { return this; }

// @baa 0x01b43360
int sub_01b43360(int param_1)
{
  return param_1 + 0x11;
}

// @baa 0x01b43370
int sub_01b43370(int a0) { return a0; }

// @baa 0x01b43380
int sub_01b43380(int param_1)
{
  return param_1 + 4;
}

// @baa 0x01b43390
int sub_01b43390(int param_1)
{
  return param_1 + 8;
}

struct C_01b433a0 {
    int sub_01b433a0();
};

// @baa 0x01b433a0
int C_01b433a0::sub_01b433a0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) + 4;
}

// @baa 0x01b433b0
int sub_01b433b0(int a0) { return a0; }

struct C_01b433d0 {
    int sub_01b433d0();
};

// @baa 0x01b433d0
int C_01b433d0::sub_01b433d0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0x18;
}

struct C_01b434a0 { int sub_01b434a0(void); };

// @baa 0x01b434a0
int C_01b434a0::sub_01b434a0(void) { return *(int*)((char*)this + 4); }

struct C_01b434d0 { C_01b434d0* sub_01b434d0(void); };

// @baa 0x01b434d0
C_01b434d0* C_01b434d0::sub_01b434d0(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01b434e0
int sub_01b434e0(int param_1)
{
  return param_1 + 0x10;
}

// @baa 0x01b434f0
int sub_01b434f0(int param_1)
{
  return param_1 + 0xc;
}

struct C_01b43500 { int sub_01b43500(void); };

// @baa 0x01b43500
int C_01b43500::sub_01b43500(void) { return *(int*)((char*)this + 4); }

struct C_01b43510 {
    void sub_01b43510(int);
};

// @baa 0x01b43510
void C_01b43510::sub_01b43510(int param_2)
{
    int param_1 = (int)this;

  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x11) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*(int *)(param_1 + 4) + 4)) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}

struct C_01b43560 {
    int sub_01b43560();
};

// @baa 0x01b43560
int C_01b43560::sub_01b43560(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) + 8;
}

struct C_01b43570 {
    void sub_01b43570(int *);
};

// @baa 0x01b43570
void C_01b43570::sub_01b43570(int * param_2)
{
    int param_1 = (int)this;

  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x11) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*(int *)(param_1 + 4) + 4)) {
    *(int *)(*(int *)(param_1 + 4) + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}

// @baa 0x01b435d0
int sub_01b435d0(void) { return 178956970; }

struct C_01b435e0 {
    int * sub_01b435e0(int, int);
};

// @baa 0x01b435e0
int * C_01b435e0::sub_01b435e0(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == 0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = param_3;
  return param_1;
}

struct C_01b436e0 {
    int sub_01b436e0(int *);
};

// @baa 0x01b436e0
int C_01b436e0::sub_01b436e0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x18;
}

struct C_01b43750 { C_01b43750* sub_01b43750(void); };

// @baa 0x01b43750
C_01b43750* C_01b43750::sub_01b43750(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01b43760 { C_01b43760* sub_01b43760(int a0); };

// @baa 0x01b43760
C_01b43760* C_01b43760::sub_01b43760(int a0) { return this; }

// @baa 0x01b43820
void sub_01b43820(void) {  }

struct C_01b438a0 { C_01b438a0* sub_01b438a0(int a0); };

// @baa 0x01b438a0
C_01b438a0* C_01b438a0::sub_01b438a0(int a0) { return this; }

// @baa 0x01b43920
void sub_01b43920(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x01b43950
void sub_01b43950(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
    param_1[4] = param_3[4];
    param_1[5] = param_3[5];
  }
  return;
}

// @baa 0x01b43990
int sub_01b43990(int a0) { return a0; }

// @baa 0x01b439b0
int sub_01b439b0(int a0) { return *(int*)a0; }

// @baa 0x01b439c0
void sub_01b439c0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
  }
  return;
}

// @baa 0x01b439f0
void sub_01b439f0(void) {  }

struct C_01b43ae0 {
    int sub_01b43ae0();
};

// @baa 0x01b43ae0
int C_01b43ae0::sub_01b43ae0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0x18;
}

struct C_01b43b00 { C_01b43b00* sub_01b43b00(int a0); };

// @baa 0x01b43b00
C_01b43b00* C_01b43b00::sub_01b43b00(int a0) { return this; }

// @baa 0x01b43b40
int sub_01b43b40(int param_1)
{
  return param_1 + 0xc;
}

// @baa 0x01b43b50
void __stdcall sub_01b43b50(int a0) {  }

// @baa 0x01b43b60
int sub_01b43b60(void) { return 178956970; }

struct C_01b43b90 {
    int * sub_01b43b90(int, int);
};

// @baa 0x01b43b90
int * C_01b43b90::sub_01b43b90(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == 0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = param_3;
  return param_1;
}

// @baa 0x01b43c00
int sub_01b43c00(void) { return 1073741823; }

struct C_01b43c10 {
    undefined4 sub_01b43c10();
};

int sub_01b43650(void);
// @baa 0x01b43c10
undefined4 C_01b43c10::sub_01b43c10(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_01b43650();
  return param_1;
}

struct C_01b43c20 {
    int sub_01b43c20(int *);
};

// @baa 0x01b43c20
int C_01b43c20::sub_01b43c20(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x18;
}

struct C_01b43c60 { C_01b43c60* sub_01b43c60(int a0, int a1); };

// @baa 0x01b43c60
C_01b43c60* C_01b43c60::sub_01b43c60(int a0, int a1) { return this; }

// @baa 0x01b43c90
void __stdcall sub_01b43c90(int a0) {  }

struct C_01b43d40 {
    undefined4 sub_01b43d40();
};

int sub_01b437b0(void);
// @baa 0x01b43d40
undefined4 C_01b43d40::sub_01b43d40(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_01b437b0();
  return param_1;
}

// @baa 0x01b43d50
int sub_01b43d50(int a0) { return *(int*)a0; }

// @baa 0x01b43da0
void __stdcall sub_01b43da0(int a0) {  }

// @baa 0x01b43ee0
int sub_01b43ee0(int param_1)
{
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0x18;
}

struct C_01b43fb0 {
    void sub_01b43fb0(int *);
};

// @baa 0x01b43fb0
void C_01b43fb0::sub_01b43fb0(int * param_2)
{
    int param_1 = (int)this;

  param_2[1] = **(int **)(param_1 + 4);
  *param_2 = param_1;
  return;
}

struct C_01b43fd0 {
    undefined4 sub_01b43fd0();
};

// @baa 0x01b43fd0
undefined4 C_01b43fd0::sub_01b43fd0(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_01b43650();
  return param_1;
}

struct C_01b440b0 { C_01b440b0* sub_01b440b0(int a0, int a1); };

// @baa 0x01b440b0
C_01b440b0* C_01b440b0::sub_01b440b0(int a0, int a1) { return this; }

struct C_01b44180 {
    undefined4 sub_01b44180();
};

// @baa 0x01b44180
undefined4 C_01b44180::sub_01b44180(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_01b437b0();
  return param_1;
}

// @baa 0x01b441a0
void sub_01b441a0(void) {  }

struct C_01b44290 {
    void sub_01b44290();
};

int sub_01b44030(void);
// @baa 0x01b44290
void C_01b44290::sub_01b44290(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = sub_01b44030();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

struct C_01b444b0 { C_01b444b0* sub_01b444b0(int a0, int a1); };

// @baa 0x01b444b0
C_01b444b0* C_01b444b0::sub_01b444b0(int a0, int a1) { return this; }

// @baa 0x01b44820
void sub_01b44820(void) {  }

// @baa 0x01b44b20
void __stdcall sub_01b44b20(int a0, int a1) {  }

struct C_01b44be0 {
    void sub_01b44be0();
};

// @baa 0x01b44be0
void C_01b44be0::sub_01b44be0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) != 0) {
    sub_00402660(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

struct C_01b44c80 {
    void sub_01b44c80();
};

// @baa 0x01b44c80
void C_01b44c80::sub_01b44c80(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) != 0) {
    sub_00402660(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

struct C_01b45010 {
    int sub_01b45010();
};

// @baa 0x01b45010
int C_01b45010::sub_01b45010(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = sub_01b44030();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

struct C_01b45160 {
    undefined4 sub_01b45160(byte);
};

int sub_01b44fc0(void);
// @baa 0x01b45160
undefined4 C_01b45160::sub_01b45160(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01b44fc0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01b45420 {
    int sub_01b45420(int);
};

// @baa 0x01b45420
int C_01b45420::sub_01b45420(int param_2)
{
    int param_1 = (int)this;

  return param_1 + param_2 * 4;
}

struct C_01b45430 {
    int sub_01b45430(int);
};

// @baa 0x01b45430
int C_01b45430::sub_01b45430(int param_2)
{
    int param_1 = (int)this;

  return param_1 + param_2 * 4;
}

struct C_01b45470 {
    int sub_01b45470(int);
};

// @baa 0x01b45470
int C_01b45470::sub_01b45470(int param_2)
{
    int param_1 = (int)this;

  return param_1 + param_2 * 8;
}

struct C_01b45480 {
    int sub_01b45480(int);
};

// @baa 0x01b45480
int C_01b45480::sub_01b45480(int param_2)
{
    int param_1 = (int)this;

  return param_1 + param_2 * 8;
}

struct C_01b455c0 {
    int sub_01b455c0(int);
};

// @baa 0x01b455c0
int C_01b455c0::sub_01b455c0(int param_2)
{
    int param_1 = (int)this;

  return param_1 + param_2 * 0x18;
}

struct C_01b455d0 {
    int sub_01b455d0(int);
};

// @baa 0x01b455d0
int C_01b455d0::sub_01b455d0(int param_2)
{
    int param_1 = (int)this;

  return param_1 + param_2 * 0x18;
}

struct C_01b45620 { C_01b45620* sub_01b45620(void); };

// @baa 0x01b45620
C_01b45620* C_01b45620::sub_01b45620(void) { return this; }

struct C_01b45630 { C_01b45630* sub_01b45630(void); };

// @baa 0x01b45630
C_01b45630* C_01b45630::sub_01b45630(void) { return this; }

struct C_01b45740 {
    int sub_01b45740(int, int);
};

// @baa 0x01b45740
int C_01b45740::sub_01b45740(int param_2, int param_3)
{
    int param_1 = (int)this;

  return param_1 + (param_3 + param_2 * 4) * 8;
}

// @baa 0x01b458e0
float10 sub_01b458e0(double param_1)
{
  return (float10)param_1 * (float10)param_1;
}

double sub_01a37606(double);
// @baa 0x01b458f0
float10 sub_01b458f0(double param_1, double param_2)
{
  double dVar1;
  
  dVar1 = sub_01a37606(param_1 / param_2 + 0.5);
  return (float10)dVar1 * (float10)param_2;
}

// @baa 0x01b45920
float10 sub_01b45920(double * param_1, double * param_2, double param_3)
{
  return ((float10)1 - (float10)param_3) * (float10)*param_1 + (float10)*param_2 * (float10)param_3;
}

// @baa 0x01b45be0
void sub_01b45be0(double * param_1, double * param_2)
{
  *param_1 = *param_1 + *param_2;
  param_1[1] = param_2[1] + param_1[1];
  param_1[2] = param_2[2] + param_1[2];
  return;
}

// @baa 0x01b45c10
void sub_01b45c10(double * param_1, double * param_2)
{
  *param_1 = *param_1 - *param_2;
  param_1[1] = param_1[1] - param_2[1];
  param_1[2] = param_1[2] - param_2[2];
  return;
}

// @baa 0x01b45c40
void sub_01b45c40(double * param_1, double param_2)
{
  *param_1 = *param_1 * param_2;
  param_1[1] = param_1[1] * param_2;
  param_1[2] = param_2 * param_1[2];
  return;
}

// @baa 0x01b45c60
void sub_01b45c60(double * param_1, double param_2)
{
  param_2 = 1.0 / param_2;
  *param_1 = *param_1 * param_2;
  param_1[1] = param_2 * param_1[1];
  param_1[2] = param_2 * param_1[2];
  return;
}

int sub_01b46680(...);
// @baa 0x01b469e0
undefined4 sub_01b469e0(int param_1, int param_2)
{
  int iVar1;
  
  iVar1 = sub_01b46680(param_1,param_2);
  if (iVar1 != 0) {
    iVar1 = sub_01b46680(param_1 + 0x20,param_2 + 0x20);
    if (iVar1 != 0) {
      iVar1 = sub_01b46680(param_1 + 0x40,param_2 + 0x40);
      if (iVar1 != 0) {
        iVar1 = sub_01b46680(param_1 + 0x60,param_2 + 0x60);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

// @baa 0x01b471e0
void sub_01b471e0(double * param_1, double param_2)
{
  *param_1 = *param_1 * param_2;
  param_1[1] = param_1[1] * param_2;
  param_1[2] = param_1[2] * param_2;
  param_1[3] = param_2 * param_1[3];
  return;
}

struct C_01b48bb0 { C_01b48bb0* sub_01b48bb0(void); };

// @baa 0x01b48bb0
C_01b48bb0* C_01b48bb0::sub_01b48bb0(void) { return this; }

// @baa 0x01b48e80
undefined4 sub_01b48e80(int * param_1, int param_2)
{
  if (((*param_1 != param_2) && (param_1[1] != param_2)) && (param_1[2] != param_2)) {
    return 0;
  }
  return 1;
}

// @baa 0x01b48f70
void sub_01b48f70(void) {  }

struct C_01b49d00 {
    int sub_01b49d00(int);
};

// @baa 0x01b49d00
int C_01b49d00::sub_01b49d00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01b49d10 {
    int sub_01b49d10(int);
};

// @baa 0x01b49d10
int C_01b49d10::sub_01b49d10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01b49d20 {
    int sub_01b49d20(int);
};

// @baa 0x01b49d20
int C_01b49d20::sub_01b49d20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_01b49d30 {
    int sub_01b49d30(int);
};

// @baa 0x01b49d30
int C_01b49d30::sub_01b49d30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01b49d40 {
    int sub_01b49d40(int);
};

// @baa 0x01b49d40
int C_01b49d40::sub_01b49d40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01b49d90 {
    void sub_01b49d90();
};

extern "C" __declspec(dllimport) int free(...);
// @baa 0x01b49d90
void C_01b49d90::sub_01b49d90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}

struct C_01b49dc0 {
    void sub_01b49dc0();
};

// @baa 0x01b49dc0
void C_01b49dc0::sub_01b49dc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}

struct C_01b49df0 {
    void sub_01b49df0();
};

// @baa 0x01b49df0
void C_01b49df0::sub_01b49df0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}

struct C_01b49e20 {
    void sub_01b49e20();
};

// @baa 0x01b49e20
void C_01b49e20::sub_01b49e20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}

struct C_01b49e50 {
    void sub_01b49e50();
};

// @baa 0x01b49e50
void C_01b49e50::sub_01b49e50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}

// @baa 0x01b49e80
void sub_01b49e80(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_01b49f30 {
    void sub_01b49f30();
};

// @baa 0x01b49f30
void C_01b49f30::sub_01b49f30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}

struct C_01b49fe0 {
    void sub_01b49fe0(int);
};

extern "C" __declspec(dllimport) int malloc(...);
// @baa 0x01b49fe0
void C_01b49fe0::sub_01b49fe0(int param_2)
{
    int * param_1 = (int *)this;

  void *_Memory;
  void *pvVar1;
  int iVar2;
  
  param_1[2] = param_2;
  _Memory = (void *)*param_1;
  pvVar1 = (void *)(malloc(param_2 * 4));
  *param_1 = (int)pvVar1;
  iVar2 = 0;
  if (0 < param_1[1]) {
    do {
      *(undefined4 *)(*param_1 + iVar2 * 4) = *(undefined4 *)((int)_Memory + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  return;
}

struct C_01b4a090 {
    void sub_01b4a090(int);
};

// @baa 0x01b4a090
void C_01b4a090::sub_01b4a090(int param_2)
{
    int * param_1 = (int *)this;

  void *_Memory;
  void *pvVar1;
  int iVar2;
  
  param_1[2] = param_2;
  _Memory = (void *)*param_1;
  pvVar1 = (void *)(malloc(param_2 * 4));
  *param_1 = (int)pvVar1;
  iVar2 = 0;
  if (0 < param_1[1]) {
    do {
      *(undefined4 *)(*param_1 + iVar2 * 4) = *(undefined4 *)((int)_Memory + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  return;
}

struct C_01b4a0e0 {
    void sub_01b4a0e0(int);
};

// @baa 0x01b4a0e0
void C_01b4a0e0::sub_01b4a0e0(int param_2)
{
    int * param_1 = (int *)this;

  void *_Memory;
  void *pvVar1;
  int iVar2;
  
  param_1[2] = param_2;
  _Memory = (void *)*param_1;
  pvVar1 = (void *)(malloc(param_2 * 4));
  *param_1 = (int)pvVar1;
  iVar2 = 0;
  if (0 < param_1[1]) {
    do {
      *(undefined4 *)(*param_1 + iVar2 * 4) = *(undefined4 *)((int)_Memory + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  return;
}

struct C_01b4ad70 {
    void sub_01b4ad70();
};

extern undefined4 g_027d331c;
// @baa 0x01b4ad70
void C_01b4ad70::sub_01b4ad70(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(g_027d331c + *(int *)(param_1 + 0x18) * 4) = 0;
  return;
}

struct C_01b4ae40 {
    int sub_01b4ae40(byte);
};

// @baa 0x01b4ae40
int C_01b4ae40::sub_01b4ae40(byte param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(g_027d331c + *(int *)(param_1 + 0x18) * 4) = 0;
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

int sub_01b4ad90(...);
// @baa 0x01b4c840
void sub_01b4c840(int param_1, int param_2)
{
  sub_01b4ad90(param_1,param_2);
  if (param_1 != 0) {
    *(undefined4 *)(g_027d331c + *(int *)(param_1 + 0x18) * 4) = 0;
    sub_00402660(param_1);
  }
  if (param_2 != 0) {
    *(undefined4 *)(g_027d331c + *(int *)(param_2 + 0x18) * 4) = 0;
    sub_00402660(param_2);
  }
  return;
}

struct C_01b4ee80 { C_01b4ee80* sub_01b4ee80(void); };

// @baa 0x01b4ee80
C_01b4ee80* C_01b4ee80::sub_01b4ee80(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01b4eee0 { int sub_01b4eee0(void); };

// @baa 0x01b4eee0
int C_01b4eee0::sub_01b4eee0(void) { return *(int*)((char*)this + 0); }

struct C_01b4eef0 {
    int * sub_01b4eef0(int);
};

// @baa 0x01b4eef0
int * C_01b4eef0::sub_01b4eef0(int param_2)
{
    int * param_1 = (int *)this;

  if (param_2 < 0) {
    param_2 = param_2 + *param_1;
  }
  return param_1 + param_2 * 6 + 2;
}

struct C_01b4f580 { C_01b4f580* sub_01b4f580(void); };

// @baa 0x01b4f580
C_01b4f580* C_01b4f580::sub_01b4f580(void) { return this; }

extern undefined4 g_0260b694;
extern undefined4 g_027d3440;
// @baa 0x01b4f9c0
undefined4 sub_01b4f9c0(void)
{
  g_027d3440 = g_027d3440 + 1;
  if (g_027d3440 == 8) {
    g_027d3440 = 0;
  }
  return (&g_0260b694)[g_027d3440];
}

struct C_01b4fd20 {
    int sub_01b4fd20();
};

// @baa 0x01b4fd20
int C_01b4fd20::sub_01b4fd20(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 5;
}

struct C_01b4feb0 { C_01b4feb0* sub_01b4feb0(void); };

// @baa 0x01b4feb0
C_01b4feb0* C_01b4feb0::sub_01b4feb0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01b4ff20 {
    float10 sub_01b4ff20(double *);
};

// @baa 0x01b4ff20
float10 C_01b4ff20::sub_01b4ff20(double * param_2)
{
    double * param_1 = (double *)this;

  return (float10)param_2[1] * (float10)*param_1 - (float10)param_1[1] * (float10)*param_2;
}

struct C_01b4ff40 {
    int sub_01b4ff40();
};

// @baa 0x01b4ff40
int C_01b4ff40::sub_01b4ff40(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 5;
}

struct C_01b4ff60 { C_01b4ff60* sub_01b4ff60(void); };

// @baa 0x01b4ff60
C_01b4ff60* C_01b4ff60::sub_01b4ff60(void) { return this; }

struct C_01b4ff70 {
    int sub_01b4ff70();
};

// @baa 0x01b4ff70
int C_01b4ff70::sub_01b4ff70(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0xe0;
}

struct C_01b4ffa0 { C_01b4ffa0* sub_01b4ffa0(void); };

// @baa 0x01b4ffa0
C_01b4ffa0* C_01b4ffa0::sub_01b4ffa0(void) { return this; }

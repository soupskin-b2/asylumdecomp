// Engine_1a90000.cpp (part 1 of 4): 127 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_01a99560();
// @baa 0x01a99720
void sub_01a99720(void) { sub_01a99560(); }

struct C {
    int sub_01a9b030();
};

// @baa 0x01a9b030
int C::sub_01a9b030(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 6;
}

struct C_01a9b050 {
    int sub_01a9b050();
};

// @baa 0x01a9b050
int C_01a9b050::sub_01a9b050(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 6;
}

struct C_01a9b070 { C_01a9b070* sub_01a9b070(void); };

// @baa 0x01a9b070
C_01a9b070* C_01a9b070::sub_01a9b070(void) { return this; }

struct C_01a9b0c0 {
    int sub_01a9b0c0();
};

// @baa 0x01a9b0c0
int C_01a9b0c0::sub_01a9b0c0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0x23c;
}

struct C_01a9b1d0 {
    int sub_01a9b1d0();
};

// @baa 0x01a9b1d0
int C_01a9b1d0::sub_01a9b1d0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 4;
}

struct C_01a9b1f0 { C_01a9b1f0* sub_01a9b1f0(void); };

// @baa 0x01a9b1f0
C_01a9b1f0* C_01a9b1f0::sub_01a9b1f0(void) { return this; }

struct C_01a9b240 {
    int sub_01a9b240();
};

// @baa 0x01a9b240
int C_01a9b240::sub_01a9b240(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0x2c;
}

struct C_01a9b260 { C_01a9b260* sub_01a9b260(void); };

// @baa 0x01a9b260
C_01a9b260* C_01a9b260::sub_01a9b260(void) { return this; }

struct C_01a9b2c0 {
    int sub_01a9b2c0();
};

// @baa 0x01a9b2c0
int C_01a9b2c0::sub_01a9b2c0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 4;
}

struct C_01a9b2e0 { C_01a9b2e0* sub_01a9b2e0(void); };

// @baa 0x01a9b2e0
C_01a9b2e0* C_01a9b2e0::sub_01a9b2e0(void) { return this; }

struct C_01a9b440 {
    int sub_01a9b440();
};

// @baa 0x01a9b440
int C_01a9b440::sub_01a9b440(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
}

struct C_01a9b460 { C_01a9b460* sub_01a9b460(void); };

// @baa 0x01a9b460
C_01a9b460* C_01a9b460::sub_01a9b460(void) { return this; }

struct C_01a9b520 { C_01a9b520* sub_01a9b520(int a0); };

// @baa 0x01a9b520
C_01a9b520* C_01a9b520::sub_01a9b520(int a0) { return this; }

// @baa 0x01a9b530
int sub_01a9b530(void) { return 7508684; }

struct C_01a9b700 { C_01a9b700* sub_01a9b700(int a0); };

// @baa 0x01a9b700
C_01a9b700* C_01a9b700::sub_01a9b700(int a0) { return this; }

struct C_01a9b750 { C_01a9b750* sub_01a9b750(int a0); };

// @baa 0x01a9b750
C_01a9b750* C_01a9b750::sub_01a9b750(int a0) { return this; }

// @baa 0x01a9b760
int sub_01a9b760(void) { return 357913941; }

struct C_01a9b7d0 { C_01a9b7d0* sub_01a9b7d0(int a0); };

// @baa 0x01a9b7d0
C_01a9b7d0* C_01a9b7d0::sub_01a9b7d0(int a0) { return this; }

struct C_01a9b8a0 {
    int sub_01a9b8a0(int *);
};

extern "C" __declspec(dllimport) int _invalid_parameter_noinfo(...);
// @baa 0x01a9b8a0
int C_01a9b8a0::sub_01a9b8a0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

struct C_01a9b930 { C_01a9b930* sub_01a9b930(void); };

// @baa 0x01a9b930
C_01a9b930* C_01a9b930::sub_01a9b930(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01a9b940
int sub_01a9b940(void) { return 67108863; }

// @baa 0x01a9b950
int sub_01a9b950(void) { return 268435455; }

// @baa 0x01a9b960
int sub_01a9b960(void) { return 97612893; }

// @baa 0x01a9b970
int sub_01a9b970(void) { return 268435455; }

// @baa 0x01a9b980
int sub_01a9b980(void) { return 1073741823; }

struct C_01a9b990 {
    int sub_01a9b990(int *);
};

// @baa 0x01a9b990
int C_01a9b990::sub_01a9b990(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x23c;
}

struct C_01a9b9d0 {
    int sub_01a9b9d0(int *);
};

// @baa 0x01a9b9d0
int C_01a9b9d0::sub_01a9b9d0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x2c;
}

struct C_01a9ba10 { C_01a9ba10* sub_01a9ba10(void); };

// @baa 0x01a9ba10
C_01a9ba10* C_01a9ba10::sub_01a9ba10(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01a9ba20 { C_01a9ba20* sub_01a9ba20(void); };

// @baa 0x01a9ba20
C_01a9ba20* C_01a9ba20::sub_01a9ba20(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01a9ba30 { C_01a9ba30* sub_01a9ba30(void); };

// @baa 0x01a9ba30
C_01a9ba30* C_01a9ba30::sub_01a9ba30(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01a9bd10 { C_01a9bd10* sub_01a9bd10(void); };

// @baa 0x01a9bd10
C_01a9bd10* C_01a9bd10::sub_01a9bd10(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01a9bd20 { C_01a9bd20* sub_01a9bd20(void); };

// @baa 0x01a9bd20
C_01a9bd20* C_01a9bd20::sub_01a9bd20(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01a9bd30 { C_01a9bd30* sub_01a9bd30(void); };

// @baa 0x01a9bd30
C_01a9bd30* C_01a9bd30::sub_01a9bd30(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01a9bd40
void sub_01a9bd40(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01a9bd60
void sub_01a9bd60(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01a9bd80
void sub_01a9bd80(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_01a9bda0 {
    undefined4 sub_01a9bda0(byte);
};

int sub_00402660(...);
int sub_01aab6e0(void);
// @baa 0x01a9bda0
undefined4 C_01a9bda0::sub_01a9bda0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01aab6e0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01a9bdc0
int sub_01a9bdc0(int a0) { return a0; }

// @baa 0x01a9bde0
int sub_01a9bde0(int a0) { return a0; }

// @baa 0x01a9be00
int sub_01a9be00(int a0) { return a0; }

// @baa 0x01a9be20
int sub_01a9be20(int a0) { return a0; }

// @baa 0x01a9be40
int sub_01a9be40(int a0) { return a0; }

// @baa 0x01a9be60
int sub_01a9be60(int a0) { return a0; }

// @baa 0x01a9bec0
int sub_01a9bec0(int a0) { return a0; }

// @baa 0x01a9bee0
void sub_01a9bee0(void) {  }

// @baa 0x01a9bef0
void sub_01a9bef0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x01a9bfa0
void sub_01a9bfa0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
  }
  return;
}

// @baa 0x01a9c010
int sub_01a9c010(int a0) { return *(int*)a0; }

// @baa 0x01a9c050
int sub_01a9c050(int a0) { return *(int*)a0; }

// @baa 0x01a9c060
int sub_01a9c060(int a0) { return *(int*)a0; }

// @baa 0x01a9c070
int sub_01a9c070(int a0) { return *(int*)a0; }

// @baa 0x01a9c0d0
int sub_01a9c0d0(int a0) { return *(int*)a0; }

// @baa 0x01a9c0e0
int sub_01a9c0e0(int a0) { return *(int*)a0; }

// @baa 0x01a9c150
int sub_01a9c150(int a0) { return *(int*)a0; }

// @baa 0x01a9c2a0
void sub_01a9c2a0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

struct C_01a9c2c0 {
    undefined4 sub_01a9c2c0(byte);
};

// @baa 0x01a9c2c0
undefined4 C_01a9c2c0::sub_01a9c2c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a9c300 { int sub_01a9c300(void); };

// @baa 0x01a9c300
int C_01a9c300::sub_01a9c300(void) { return *(int*)((char*)this + 4); }

// @baa 0x01a9c330
int sub_01a9c330(void) { return 0; }

// @baa 0x01a9c340
int sub_01a9c340(void) { return 0; }

// @baa 0x01a9c350
int sub_01a9c350(int a0) { return a0; }

struct C_01a9c410 { int sub_01a9c410(void); };

// @baa 0x01a9c410
int C_01a9c410::sub_01a9c410(void) { return *(int*)((char*)this + 4); }

struct C_01a9c420 { int sub_01a9c420(void); };

// @baa 0x01a9c420
int C_01a9c420::sub_01a9c420(void) { return *(int*)((char*)this + 4); }

struct C_01a9c430 { int sub_01a9c430(void); };

// @baa 0x01a9c430
int C_01a9c430::sub_01a9c430(void) { return *(int*)((char*)this + 4); }

struct C_01a9c440 { int sub_01a9c440(void); };

// @baa 0x01a9c440
int C_01a9c440::sub_01a9c440(void) { return *(int*)((char*)this + 4); }

struct C_01a9c450 { int sub_01a9c450(void); };

// @baa 0x01a9c450
int C_01a9c450::sub_01a9c450(void) { return *(int*)((char*)this + 4); }

struct C_01a9c460 { int sub_01a9c460(void); };

// @baa 0x01a9c460
int C_01a9c460::sub_01a9c460(void) { return *(int*)((char*)this + 4); }

// @baa 0x01a9c480
void sub_01a9c480(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01a9c500
void sub_01a9c500(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_01a9cb70 { C_01a9cb70* sub_01a9cb70(int a0); };

// @baa 0x01a9cb70
C_01a9cb70* C_01a9cb70::sub_01a9cb70(int a0) { return this; }

// @baa 0x01a9cb80
int sub_01a9cb80(void) { return 7508684; }

struct C_01a9cbe0 { C_01a9cbe0* sub_01a9cbe0(int a0); };

// @baa 0x01a9cbe0
C_01a9cbe0* C_01a9cbe0::sub_01a9cbe0(int a0) { return this; }

struct C_01a9cbf0 { C_01a9cbf0* sub_01a9cbf0(int a0); };

// @baa 0x01a9cbf0
C_01a9cbf0* C_01a9cbf0::sub_01a9cbf0(int a0) { return this; }

struct C_01a9cc00 { C_01a9cc00* sub_01a9cc00(int a0); };

// @baa 0x01a9cc00
C_01a9cc00* C_01a9cc00::sub_01a9cc00(int a0) { return this; }

struct C_01a9cc10 { C_01a9cc10* sub_01a9cc10(int a0); };

// @baa 0x01a9cc10
C_01a9cc10* C_01a9cc10::sub_01a9cc10(int a0) { return this; }

// @baa 0x01a9cc20
int sub_01a9cc20(void) { return 357913941; }

struct C_01a9cc80 { C_01a9cc80* sub_01a9cc80(int a0); };

// @baa 0x01a9cc80
C_01a9cc80* C_01a9cc80::sub_01a9cc80(int a0) { return this; }

struct C_01a9cc90 { C_01a9cc90* sub_01a9cc90(int a0); };

// @baa 0x01a9cc90
C_01a9cc90* C_01a9cc90::sub_01a9cc90(int a0) { return this; }

struct C_01a9cce0 {
    int sub_01a9cce0(int *);
};

// @baa 0x01a9cce0
int C_01a9cce0::sub_01a9cce0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

// @baa 0x01a9cd40
int sub_01a9cd40(void) { return 67108863; }

// @baa 0x01a9cd50
int sub_01a9cd50(void) { return 268435455; }

// @baa 0x01a9cd60
int sub_01a9cd60(void) { return 97612893; }

// @baa 0x01a9cd70
int sub_01a9cd70(void) { return 268435455; }

// @baa 0x01a9cd80
int sub_01a9cd80(void) { return 1073741823; }

struct C_01a9cdd0 {
    int sub_01a9cdd0(int *);
};

// @baa 0x01a9cdd0
int C_01a9cdd0::sub_01a9cdd0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x23c;
}

struct C_01a9ce10 {
    int sub_01a9ce10(int *);
};

// @baa 0x01a9ce10
int C_01a9ce10::sub_01a9ce10(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x2c;
}

// @baa 0x01a9d360
void sub_01a9d360(void) {  }

// @baa 0x01a9d370
int sub_01a9d370(int a0) { return *(int*)a0; }

// @baa 0x01a9d3c0
int sub_01a9d3c0(int a0) { return *(int*)a0; }

// @baa 0x01a9d3d0
int sub_01a9d3d0(int a0) { return *(int*)a0; }

// @baa 0x01a9d3e0
int sub_01a9d3e0(int a0) { return *(int*)a0; }

// @baa 0x01a9d450
int sub_01a9d450(int a0) { return *(int*)a0; }

// @baa 0x01a9d460
int sub_01a9d460(int a0) { return *(int*)a0; }

// @baa 0x01a9d470
int sub_01a9d470(int a0) { return *(int*)a0; }

extern "C" __declspec(dllimport) int memmove_s(...);
// @baa 0x01a9d4d0
void * sub_01a9d4d0(void * param_1, int param_2, int param_3)
{
  int iVar1;
  void *_Dst;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    memmove_s(_Dst,iVar1 * 4,param_1,iVar1 * 4);
  }
  return _Dst;
}

// @baa 0x01a9d5a0
undefined4 sub_01a9d5a0(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a9d6b0
void sub_01a9d6b0(void) {  }

// @baa 0x01a9d6d0
void sub_01a9d6d0(void) {  }

// @baa 0x01a9d6e0
void sub_01a9d6e0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01a9d700
undefined4 sub_01a9d700(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a9d710
undefined4 sub_01a9d710(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a9d720
undefined4 sub_01a9d720(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a9d730
undefined4 sub_01a9d730(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a9d740
undefined4 sub_01a9d740(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a9d7b0
undefined4 sub_01a9d7b0(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

int sub_01a9c5a0(...);
// @baa 0x01a9d8b0
void sub_01a9d8b0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  sub_01a9c5a0(param_1,param_2,param_3,0,0);
  return;
}

// @baa 0x01a9daf0
void __stdcall sub_01a9daf0(int a0, int a1) {  }

// @baa 0x01a9e110
void sub_01a9e110(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x01a9e130
void * sub_01a9e130(void * param_1, int param_2, int param_3)
{
  int iVar1;
  void *_Dst;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    memmove_s(_Dst,iVar1 * 4,param_1,iVar1 * 4);
  }
  return _Dst;
}

void sub_01a9d500();
// @baa 0x01a9e190
void sub_01a9e190(void) { sub_01a9d500(); }

// @baa 0x01a9e1a0
void sub_01a9e1a0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
  }
  return;
}

// @baa 0x01a9e1d0
undefined4 sub_01a9e1d0(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a9e260
void __stdcall sub_01a9e260(int a0) {  }

// @baa 0x01a9e280
void __stdcall sub_01a9e280(int a0) {  }

// @baa 0x01a9e360
undefined4 sub_01a9e360(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a9e370
undefined4 sub_01a9e370(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a9e380
undefined4 sub_01a9e380(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a9e420
undefined4 sub_01a9e420(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a9e510
undefined4 sub_01a9e510(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a9e650
void sub_01a9e650(int param_1, int param_2, int param_3)
{
  if ((param_1 != param_2) && (param_2 != param_3)) {
    sub_01a9c5a0(param_1,param_2,param_3,0,0);
  }
  return;
}

int sub_01a9d830(...);
// @baa 0x01a9e680
void sub_01a9e680(undefined4 * param_1, int param_2, undefined4 param_3)
{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + -4);
  *(undefined4 *)(param_2 + -4) = *param_1;
  sub_01a9d830(param_1,0,(param_2 - (int)param_1) + -4 >> 2,uVar1,param_3);
  return;
}

// @baa 0x01a9ebc0
void sub_01a9ebc0(void) {  }

// @baa 0x01a9ed20
void sub_01a9ed20(void) {  }

int sub_01a9e610(...);
// @baa 0x01a9f220
void sub_01a9f220(int param_1, int param_2, undefined4 param_3)
{
  if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
    sub_01a9e610(param_1,param_2,param_3,0,0);
  }
  return;
}

struct C_01a9f350 {
    undefined4 sub_01a9f350(byte);
};

int sub_01a9db00(void);
// @baa 0x01a9f350
undefined4 C_01a9f350::sub_01a9f350(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a9db00();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a9f370 {
    undefined4 sub_01a9f370(byte);
};

int sub_01a71530(void);
// @baa 0x01a9f370
undefined4 C_01a9f370::sub_01a9f370(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a71530();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01a9f390
void sub_01a9f390(undefined4 * param_1, int param_2, undefined4 param_3)
{
  undefined4 uVar1;
  
  if (4 < (int)(param_2 - (int)param_1 & 0xfffffffcU)) {
    uVar1 = *(undefined4 *)(param_2 + -4);
    *(undefined4 *)(param_2 + -4) = *param_1;
    sub_01a9d830(param_1,0,(int)((param_2 - (int)param_1) - 4U) >> 2,uVar1,param_3);
  }
  return;
}

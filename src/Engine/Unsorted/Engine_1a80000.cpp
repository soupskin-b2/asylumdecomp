// Engine_1a80000.cpp (part 1 of 5): 138 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    bool sub_01a813a0();
};

// @baa 0x01a813a0
bool C::sub_01a813a0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) != 0;
}

// @baa 0x01a826e0
void sub_01a826e0(void) {  }

struct C_01a83290 {
    bool sub_01a83290();
};

// @baa 0x01a83290
bool C_01a83290::sub_01a83290(void)
{
    int param_1 = (int)this;

  return 0 < *(int *)(param_1 + 0xc);
}

extern undefined4 g_02604f2c;
// @baa 0x01a83320
void sub_01a83320(undefined4 param_1)
{
  g_02604f2c = param_1;
  return;
}

struct C_01a83330 { float sub_01a83330(void); };

// @baa 0x01a83330
float C_01a83330::sub_01a83330(void) { return *(float*)((char*)this + 40); }

extern undefined1 g_02604f28;
// @baa 0x01a83350
void sub_01a83350(undefined1 param_1)
{
  g_02604f28 = param_1;
  return;
}

extern undefined4 g_027bde84;
// @baa 0x01a83360
void sub_01a83360(undefined4 param_1)
{
  g_027bde84 = param_1;
  return;
}

extern undefined4 g_027bde8c;
// @baa 0x01a83370
void sub_01a83370(undefined4 param_1)
{
  g_027bde8c = param_1;
  return;
}

struct C_01a83390 {
    void sub_01a83390();
};

// @baa 0x01a83390
void C_01a83390::sub_01a83390(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0;
  param_1[1] = 0;
  return;
}

struct C_01a833a0 { void sub_01a833a0(void); };

// @baa 0x01a833a0
void C_01a833a0::sub_01a833a0(void) { *(int*)((char*)this + 40) = 0; }

// @baa 0x01a833c0
void sub_01a833c0(void) {  }

// @baa 0x01a83b40
void sub_01a83b40(void) {  }

struct C_01a83e10 {
    int sub_01a83e10();
};

// @baa 0x01a83e10
int C_01a83e10::sub_01a83e10(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x38;
}

struct C_01a83ed0 {
    int sub_01a83ed0();
};

// @baa 0x01a83ed0
int C_01a83ed0::sub_01a83ed0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}

struct C_01a83f50 {
    int sub_01a83f50();
};

// @baa 0x01a83f50
int C_01a83f50::sub_01a83f50(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}

struct C_01a84000 {
    int sub_01a84000();
};

// @baa 0x01a84000
int C_01a84000::sub_01a84000(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0x18;
}

struct C_01a84020 {
    int sub_01a84020();
};

// @baa 0x01a84020
int C_01a84020::sub_01a84020(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}

struct C_01a84080 {
    int sub_01a84080();
};

// @baa 0x01a84080
int C_01a84080::sub_01a84080(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0x38;
}

struct C_01a841b0 {
    int sub_01a841b0();
};

// @baa 0x01a841b0
int C_01a841b0::sub_01a841b0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 100;
}

struct C_01a84210 {
    int sub_01a84210();
};

// @baa 0x01a84210
int C_01a84210::sub_01a84210(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
}

struct C_01a84230 { C_01a84230* sub_01a84230(void); };

// @baa 0x01a84230
C_01a84230* C_01a84230::sub_01a84230(void) { return this; }

struct C_01a84250 {
    int sub_01a84250();
};

// @baa 0x01a84250
int C_01a84250::sub_01a84250(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
}

struct C_01a84370 { C_01a84370* sub_01a84370(void); };

// @baa 0x01a84370
C_01a84370* C_01a84370::sub_01a84370(void) { return this; }

// @baa 0x01a84430
int sub_01a84430(void) { return 76695844; }

struct C_01a845d0 { C_01a845d0* sub_01a845d0(int a0); };

// @baa 0x01a845d0
C_01a845d0* C_01a845d0::sub_01a845d0(int a0) { return this; }

// @baa 0x01a845e0
int sub_01a845e0(void) { return 1073741823; }

struct C_01a84630 { C_01a84630* sub_01a84630(int a0); };

// @baa 0x01a84630
C_01a84630* C_01a84630::sub_01a84630(int a0) { return this; }

// @baa 0x01a84640
int sub_01a84640(void) { return 178956970; }

// @baa 0x01a84650
int sub_01a84650(void) { return 42949672; }

// @baa 0x01a84660
int sub_01a84660(void) { return 1073741823; }

struct C_01a84670 {
    int sub_01a84670(int *);
};

extern "C" __declspec(dllimport) int _invalid_parameter_noinfo(...);
// @baa 0x01a84670
int C_01a84670::sub_01a84670(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x38;
}

struct C_01a846b0 {
    int sub_01a846b0(int *);
};

// @baa 0x01a846b0
int C_01a846b0::sub_01a846b0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

struct C_01a846e0 {
    int sub_01a846e0(int *);
};

// @baa 0x01a846e0
int C_01a846e0::sub_01a846e0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

struct C_01a84740 {
    int sub_01a84740(int *);
};

// @baa 0x01a84740
int C_01a84740::sub_01a84740(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

struct C_01a84770 { C_01a84770* sub_01a84770(void); };

// @baa 0x01a84770
C_01a84770* C_01a84770::sub_01a84770(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01a84780 { C_01a84780* sub_01a84780(void); };

// @baa 0x01a84780
C_01a84780* C_01a84780::sub_01a84780(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01a84790 { C_01a84790* sub_01a84790(void); };

// @baa 0x01a84790
C_01a84790* C_01a84790::sub_01a84790(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01a84910 { C_01a84910* sub_01a84910(void); };

// @baa 0x01a84910
C_01a84910* C_01a84910::sub_01a84910(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01a84920 { C_01a84920* sub_01a84920(void); };

// @baa 0x01a84920
C_01a84920* C_01a84920::sub_01a84920(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01a84960
void sub_01a84960(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01a84980
void sub_01a84980(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

void sub_01a76030();
// @baa 0x01a849a0
void sub_01a849a0(void) { sub_01a76030(); }

// @baa 0x01a849b0
int sub_01a849b0(int a0) { return a0; }

// @baa 0x01a849d0
int sub_01a849d0(int a0) { return a0; }

// @baa 0x01a84a40
int sub_01a84a40(int a0) { return a0; }

// @baa 0x01a84aa0
int sub_01a84aa0(int a0) { return a0; }

// @baa 0x01a84b00
void sub_01a84b00(void) {  }

// @baa 0x01a84b40
int sub_01a84b40(int a0) { return a0; }

// @baa 0x01a84b60
void sub_01a84b60(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x01a84b90
void sub_01a84b90(void) {  }

// @baa 0x01a84ba0
void sub_01a84ba0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x01a84bd0
void sub_01a84bd0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x01a84c10
int sub_01a84c10(int a0) { return *(int*)a0; }

// @baa 0x01a84c60
int sub_01a84c60(int a0) { return *(int*)a0; }

// @baa 0x01a84cb0
int sub_01a84cb0(int a0) { return *(int*)a0; }

// @baa 0x01a84d30
int sub_01a84d30(int a0) { return *(int*)a0; }

// @baa 0x01a84d70
int sub_01a84d70(int a0) { return *(int*)a0; }

struct C_01a84ee0 {
    undefined4 sub_01a84ee0(byte);
};

int sub_00402660(...);
// @baa 0x01a84ee0
undefined4 C_01a84ee0::sub_01a84ee0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a84f30 {
    undefined4 * sub_01a84f30(byte);
};

// @baa 0x01a84f30
undefined4 * C_01a84f30::sub_01a84f30(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01a84f60
int sub_01a84f60(int a0) { return a0; }

// @baa 0x01a84f70
int sub_01a84f70(int a0) { return a0; }

// @baa 0x01a84f80
int sub_01a84f80(int a0) { return a0; }

// @baa 0x01a84fc0
void sub_01a84fc0(undefined4 * param_1, undefined4 * param_2)
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

struct C_01a85080 { int sub_01a85080(void); };

// @baa 0x01a85080
int C_01a85080::sub_01a85080(void) { return *(int*)((char*)this + 4); }

struct C_01a85090 { int sub_01a85090(void); };

// @baa 0x01a85090
int C_01a85090::sub_01a85090(void) { return *(int*)((char*)this + 4); }

struct C_01a850a0 { int sub_01a850a0(void); };

// @baa 0x01a850a0
int C_01a850a0::sub_01a850a0(void) { return *(int*)((char*)this + 4); }

struct C_01a850b0 { int sub_01a850b0(void); };

// @baa 0x01a850b0
int C_01a850b0::sub_01a850b0(void) { return *(int*)((char*)this + 4); }

struct C_01a850c0 { int sub_01a850c0(void); };

// @baa 0x01a850c0
int C_01a850c0::sub_01a850c0(void) { return *(int*)((char*)this + 4); }

// @baa 0x01a87390
int sub_01a87390(void) { return 76695844; }

struct C_01a873f0 { C_01a873f0* sub_01a873f0(int a0); };

// @baa 0x01a873f0
C_01a873f0* C_01a873f0::sub_01a873f0(int a0) { return this; }

struct C_01a87400 { C_01a87400* sub_01a87400(int a0); };

// @baa 0x01a87400
C_01a87400* C_01a87400::sub_01a87400(int a0) { return this; }

// @baa 0x01a87410
int sub_01a87410(void) { return 1073741823; }

struct C_01a87470 { C_01a87470* sub_01a87470(int a0); };

// @baa 0x01a87470
C_01a87470* C_01a87470::sub_01a87470(int a0) { return this; }

struct C_01a87480 { C_01a87480* sub_01a87480(int a0); };

// @baa 0x01a87480
C_01a87480* C_01a87480::sub_01a87480(int a0) { return this; }

// @baa 0x01a87490
int sub_01a87490(void) { return 178956970; }

// @baa 0x01a874a0
int sub_01a874a0(void) { return 42949672; }

// @baa 0x01a874b0
int sub_01a874b0(void) { return 1073741823; }

struct C_01a874c0 {
    int sub_01a874c0(int *);
};

// @baa 0x01a874c0
int C_01a874c0::sub_01a874c0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x38;
}

struct C_01a87500 {
    int sub_01a87500(int *);
};

// @baa 0x01a87500
int C_01a87500::sub_01a87500(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

struct C_01a87590 {
    int sub_01a87590(int *);
};

// @baa 0x01a87590
int C_01a87590::sub_01a87590(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

// @baa 0x01a878a0
void sub_01a878a0(void) {  }

// @baa 0x01a878b0
void sub_01a878b0(void) {  }

// @baa 0x01a87900
int sub_01a87900(int a0) { return *(int*)a0; }

// @baa 0x01a87970
int sub_01a87970(int a0) { return *(int*)a0; }

// @baa 0x01a87980
int sub_01a87980(int a0) { return *(int*)a0; }

// @baa 0x01a879c0
int sub_01a879c0(int a0) { return *(int*)a0; }

// @baa 0x01a87a00
int sub_01a87a00(int a0) { return *(int*)a0; }

// @baa 0x01a87bd0
void sub_01a87bd0(void) {  }

// @baa 0x01a87bf0
void sub_01a87bf0(undefined4 * param_1)
{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

// @baa 0x01a87c50
undefined4 sub_01a87c50(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a87c60
undefined4 sub_01a87c60(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a87c70
undefined4 sub_01a87c70(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a87cb0
undefined4 sub_01a87cb0(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a87cf0
undefined4 sub_01a87cf0(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a87ea0
void __stdcall sub_01a87ea0(int a0, int a1) {  }

// @baa 0x01a88020
void __stdcall sub_01a88020(int a0, int a1) {  }

// @baa 0x01a88620
void sub_01a88620(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

extern "C" __declspec(dllimport) int memmove_s(...);
// @baa 0x01a88640
void * sub_01a88640(void * param_1, int param_2, int param_3)
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

// @baa 0x01a88670
void sub_01a88670(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x01a88690
void * sub_01a88690(void * param_1, int param_2, int param_3)
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

// @baa 0x01a886c0
void sub_01a886c0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x01a886e0
void * sub_01a886e0(void * param_1, int param_2, int param_3)
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

// @baa 0x01a887f0
void __stdcall sub_01a887f0(int a0) {  }

// @baa 0x01a88880
undefined4 sub_01a88880(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a88890
undefined4 sub_01a88890(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a888a0
undefined4 sub_01a888a0(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a888e0
undefined4 sub_01a888e0(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a88920
undefined4 sub_01a88920(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

void sub_01a87eb0();
// @baa 0x01a889f0
void sub_01a889f0(void) { sub_01a87eb0(); }

void sub_01a87f60();
// @baa 0x01a88a10
void sub_01a88a10(void) { sub_01a87f60(); }

// @baa 0x01a88ed0
void sub_01a88ed0(void) {  }

// @baa 0x01a89060
void sub_01a89060(undefined4 * param_1, undefined4 * param_2)
{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

// @baa 0x01a893b0
void sub_01a893b0(void) {  }

// @baa 0x01a89570
void sub_01a89570(undefined4 * param_1, undefined4 * param_2)
{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

// @baa 0x01a89740
void __stdcall sub_01a89740(int a0, int a1) {  }

void sub_01a89750();
// @baa 0x01a8a240
void sub_01a8a240(void) { sub_01a89750(); }

struct C_01a8a720 {
    undefined4 sub_01a8a720(byte);
};

int sub_01a7bd40(void);
// @baa 0x01a8a720
undefined4 C_01a8a720::sub_01a8a720(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a7bd40();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

void sub_01a8a640();
// @baa 0x01a8b090
void sub_01a8b090(void) { sub_01a8a640(); }

struct C_01a8b450 {
    undefined4 sub_01a8b450(byte);
};

int sub_01a8a740(void);
// @baa 0x01a8b450
undefined4 C_01a8b450::sub_01a8b450(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a8a740();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a8b490 {
    undefined4 sub_01a8b490(byte);
};

int sub_01a8a980(void);
// @baa 0x01a8b490
undefined4 C_01a8b490::sub_01a8b490(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a8a980();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern "C" __declspec(dllimport) int rand(...);
// @baa 0x01a8ef00
int sub_01a8ef00(int param_1, int param_2)
{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % ((param_2 - param_1) + 1) + param_1;
}

struct C_01a8ef20 { C_01a8ef20* sub_01a8ef20(void); };

// @baa 0x01a8ef20
C_01a8ef20* C_01a8ef20::sub_01a8ef20(void) { return this; }

// @baa 0x01a8ef30
void sub_01a8ef30(void) {  }

// @baa 0x01a8f400
undefined1 sub_01a8f400(void)
{
  return 0;
}

// @baa 0x01a8f410
undefined4 sub_01a8f410(uint param_1)
{
  if (((((param_1 & 0xf) != 0) && ((param_1 & 0xf0) != 0)) && ((param_1 & 0xf00) != 0)) &&
     ((param_1 & 0xf000) != 0)) {
    return 0;
  }
  return 1;
}

struct C_01a8fe50 { float sub_01a8fe50(void); };

// @baa 0x01a8fe50
float C_01a8fe50::sub_01a8fe50(void) { return *(float*)((char*)this + 180); }

struct C_01a8fe60 { float sub_01a8fe60(void); };

// @baa 0x01a8fe60
float C_01a8fe60::sub_01a8fe60(void) { return *(float*)((char*)this + 184); }

struct C_01a8fe70 {
    undefined1 sub_01a8fe70();
};

// @baa 0x01a8fe70
undefined1 C_01a8fe70::sub_01a8fe70(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0xbc);
}

struct C_01a8fe80 {
    undefined1 sub_01a8fe80();
};

// @baa 0x01a8fe80
undefined1 C_01a8fe80::sub_01a8fe80(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0xc0);
}

struct C_01a8fe90 {
    int sub_01a8fe90(int);
};

// @baa 0x01a8fe90
int C_01a8fe90::sub_01a8fe90(int param_2)
{
    int param_1 = (int)this;

  return param_1 + 0x74 + param_2 * 0xc;
}

struct C_01a8fea0 {
    int sub_01a8fea0(int);
};

// @baa 0x01a8fea0
int C_01a8fea0::sub_01a8fea0(int param_2)
{
    int param_1 = (int)this;

  return param_1 + 0x44 + param_2 * 0xc;
}

struct C_01a8feb0 {
    void sub_01a8feb0();
};

// @baa 0x01a8feb0
void C_01a8feb0::sub_01a8feb0(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}

struct C_01a8fec0 {
    undefined1 sub_01a8fec0();
};

// @baa 0x01a8fec0
undefined1 C_01a8fec0::sub_01a8fec0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x48);
}

struct C_01a8fed0 {
    void sub_01a8fed0();
};

// @baa 0x01a8fed0
void C_01a8fed0::sub_01a8fed0(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}

struct C_01a8fee0 {
    int sub_01a8fee0(ushort);
};

// @baa 0x01a8fee0
int C_01a8fee0::sub_01a8fee0(ushort param_2)
{
    int param_1 = (int)this;

  return (uint)param_2 * 0x40 + *(int *)(param_1 + 4);
}

extern undefined4 g_027bdf00;
// @baa 0x01a8fef0
int sub_01a8fef0(ushort param_1)
{
  return (uint)param_1 * 0x40 + g_027bdf00;
}

struct C_01a8ff00 {
    bool sub_01a8ff00();
};

// @baa 0x01a8ff00
bool C_01a8ff00::sub_01a8ff00(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x30) != 0;
}

struct C_01a8ff50 {
    void sub_01a8ff50();
};

// @baa 0x01a8ff50
void C_01a8ff50::sub_01a8ff50(void)
{
    int param_1 = (int)this;

  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x30) != 0) && (iVar1 = 0, 0 < *(int *)(param_1 + 0x2c))) {
    iVar2 = 0;
    do {
      *(undefined1 *)(iVar2 + 0x48 + *(int *)(param_1 + 0x30)) = 0;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x60;
    } while (iVar1 < *(int *)(param_1 + 0x2c));
  }
  return;
}

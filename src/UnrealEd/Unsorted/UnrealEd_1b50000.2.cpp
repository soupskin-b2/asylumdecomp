// UnrealEd_1b50000.cpp (part 2 of 6): 280 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01b50290
int sub_01b50290(void) { return 134217727; }

// @baa 0x01b502a0
int sub_01b502a0(void) { return 19173961; }

struct C {
    int sub_01b502b0(int *);
};

extern "C" __declspec(dllimport) int _invalid_parameter_noinfo(...);
// @baa 0x01b502b0
int C::sub_01b502b0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0xe0;
}

struct C_01b502f0 {
    int sub_01b502f0(int *);
};

// @baa 0x01b502f0
int C_01b502f0::sub_01b502f0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 5;
}

struct C_01b50320 { C_01b50320* sub_01b50320(void); };

// @baa 0x01b50320
C_01b50320* C_01b50320::sub_01b50320(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01b504a0
int sub_01b504a0(int a0) { return a0; }

// @baa 0x01b504f0
int sub_01b504f0(int a0) { return *(int*)a0; }

// @baa 0x01b50500
int sub_01b50500(int a0) { return *(int*)a0; }

// @baa 0x01b50540
void sub_01b50540(void) {  }

// @baa 0x01b50570
void sub_01b50570(void) {  }

struct C_01b50a40 {
    void sub_01b50a40(double *, double);
};

// @baa 0x01b50a40
void C_01b50a40::sub_01b50a40(double * param_2, double param_3)
{
    double * param_1 = (double *)this;

  *param_2 = *param_1 * param_3;
  param_2[1] = param_1[1] * param_3;
  param_2[2] = param_3 * param_1[2];
  return;
}

struct C_01b50c00 { C_01b50c00* sub_01b50c00(int a0); };

// @baa 0x01b50c00
C_01b50c00* C_01b50c00::sub_01b50c00(int a0) { return this; }

// @baa 0x01b50c10
int sub_01b50c10(void) { return 134217727; }

// @baa 0x01b50c40
int sub_01b50c40(void) { return 19173961; }

struct C_01b50c70 {
    int sub_01b50c70(int *);
};

// @baa 0x01b50c70
int C_01b50c70::sub_01b50c70(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0xe0;
}

struct C_01b50cb0 {
    int sub_01b50cb0(int *);
};

// @baa 0x01b50cb0
int C_01b50cb0::sub_01b50cb0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 5;
}

// @baa 0x01b50da0
int sub_01b50da0(int a0) { return *(int*)a0; }

// @baa 0x01b50db0
int sub_01b50db0(int a0) { return *(int*)a0; }

// @baa 0x01b50e50
void __stdcall sub_01b50e50(int a0) {  }

// @baa 0x01b50e80
void __stdcall sub_01b50e80(int a0) {  }

// @baa 0x01b51680
void sub_01b51680(void) {  }

// @baa 0x01b518b0
void sub_01b518b0(void) {  }

// @baa 0x01b518f0
void sub_01b518f0(void) {  }

// @baa 0x01b519e0
void __stdcall sub_01b519e0(int a0, int a1) {  }

struct C_01b519f0 {
    void sub_01b519f0();
};

int sub_00402660(...);
// @baa 0x01b519f0
void C_01b519f0::sub_01b519f0(void)
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

// @baa 0x01b51a60
void __stdcall sub_01b51a60(int a0, int a1) {  }

struct C_01b51b60 {
    void sub_01b51b60();
};

// @baa 0x01b51b60
void C_01b51b60::sub_01b51b60(void)
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

struct C_01b51b90 {
    void sub_01b51b90();
};

// @baa 0x01b51b90
void C_01b51b90::sub_01b51b90(void)
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

struct C_01b51f10 {
    void sub_01b51f10();
};

// @baa 0x01b51f10
void C_01b51f10::sub_01b51f10(void)
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

// @baa 0x01b53680
void sub_01b53680(double * param_1, double * param_2, double * param_3)
{
  *param_1 = param_3[2] * param_2[1] - param_2[2] * param_3[1];
  param_1[1] = param_2[2] * *param_3 - param_3[2] * *param_2;
  param_1[2] = *param_2 * param_3[1] - *param_3 * param_2[1];
  return;
}

int sub_01b536c0(...);
// @baa 0x01b53760
void sub_01b53760(double * param_1, double * param_2, double * param_3)
{
  *param_1 = *param_3 - *param_2;
  param_1[1] = param_3[1] - param_2[1];
  param_1[2] = param_3[2] - param_2[2];
  sub_01b536c0(param_1);
  return;
}

struct C_01b547b0 {
    void sub_01b547b0();
};

extern undefined4 g_024125e0;
// @baa 0x01b547b0
void C_01b547b0::sub_01b547b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_024125e0));
  return;
}

struct C_01b547c0 { C_01b547c0* sub_01b547c0(void); };

// @baa 0x01b547c0
C_01b547c0* C_01b547c0::sub_01b547c0(void) { return this; }

struct C_01b54800 {
    void sub_01b54800(undefined4 *, undefined4 *);
};

// @baa 0x01b54800
void C_01b54800::sub_01b54800(undefined4 * param_2, undefined4 * param_3)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = *param_3;
  param_1[4] = param_3[1];
  param_1[5] = param_3[2];
  return;
}

struct C_01b54970 { void sub_01b54970(int a0); };

// @baa 0x01b54970
void C_01b54970::sub_01b54970(int a0) { *(int*)((char*)this + 4) = a0; }

extern char g_024125fc[];
struct C_01b54a90 { C_01b54a90* sub_01b54a90(void); };

// @baa 0x01b54a90
C_01b54a90* C_01b54a90::sub_01b54a90(void) { *(int*)((char*)this + 0) = (int)g_024125fc; return this; }

struct C_01b54ab0 {
    int sub_01b54ab0();
};

// @baa 0x01b54ab0
int C_01b54ab0::sub_01b54ab0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x28;
}

struct C_01b54b10 {
    int sub_01b54b10();
};

// @baa 0x01b54b10
int C_01b54b10::sub_01b54b10(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
}

struct C_01b54b70 {
    int sub_01b54b70();
};

// @baa 0x01b54b70
int C_01b54b70::sub_01b54b70(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x24;
}

struct C_01b54b90 { C_01b54b90* sub_01b54b90(void); };

// @baa 0x01b54b90
C_01b54b90* C_01b54b90::sub_01b54b90(void) { return this; }

struct C_01b54ba0 { C_01b54ba0* sub_01b54ba0(void); };

// @baa 0x01b54ba0
C_01b54ba0* C_01b54ba0::sub_01b54ba0(void) { return this; }

struct C_01b54bb0 { C_01b54bb0* sub_01b54bb0(void); };

// @baa 0x01b54bb0
C_01b54bb0* C_01b54bb0::sub_01b54bb0(void) { return this; }

struct C_01b54bc0 { C_01b54bc0* sub_01b54bc0(void); };

// @baa 0x01b54bc0
C_01b54bc0* C_01b54bc0::sub_01b54bc0(void) { return this; }

struct C_01b54bd0 { C_01b54bd0* sub_01b54bd0(void); };

// @baa 0x01b54bd0
C_01b54bd0* C_01b54bd0::sub_01b54bd0(void) { return this; }

struct C_01b54be0 { C_01b54be0* sub_01b54be0(void); };

// @baa 0x01b54be0
C_01b54be0* C_01b54be0::sub_01b54be0(void) { return this; }

struct C_01b54bf0 { C_01b54bf0* sub_01b54bf0(void); };

// @baa 0x01b54bf0
C_01b54bf0* C_01b54bf0::sub_01b54bf0(void) { return this; }

struct C_01b54c00 { C_01b54c00* sub_01b54c00(void); };

// @baa 0x01b54c00
C_01b54c00* C_01b54c00::sub_01b54c00(void) { return this; }

struct C_01b54c10 { C_01b54c10* sub_01b54c10(void); };

// @baa 0x01b54c10
C_01b54c10* C_01b54c10::sub_01b54c10(void) { return this; }

struct C_01b54c20 { C_01b54c20* sub_01b54c20(void); };

// @baa 0x01b54c20
C_01b54c20* C_01b54c20::sub_01b54c20(void) { return this; }

struct C_01b54c30 { C_01b54c30* sub_01b54c30(void); };

// @baa 0x01b54c30
C_01b54c30* C_01b54c30::sub_01b54c30(void) { return this; }

struct C_01b54c40 { C_01b54c40* sub_01b54c40(void); };

// @baa 0x01b54c40
C_01b54c40* C_01b54c40::sub_01b54c40(void) { return this; }

// @baa 0x01b55250
int sub_01b55250(void) { return 1073741823; }

// @baa 0x01b55260
int sub_01b55260(void) { return 178956970; }

// @baa 0x01b55270
int sub_01b55270(void) { return 268435455; }

// @baa 0x01b55280
int sub_01b55280(void) { return 1073741823; }

// @baa 0x01b55290
int sub_01b55290(void) { return 268435455; }

// @baa 0x01b552a0
int sub_01b552a0(void) { return 107374182; }

// @baa 0x01b552b0
int sub_01b552b0(void) { return 357913941; }

// @baa 0x01b552c0
int sub_01b552c0(void) { return 536870911; }

// @baa 0x01b552d0
int sub_01b552d0(void) { return 7669584; }

// @baa 0x01b552e0
int sub_01b552e0(void) { return 268435455; }

// @baa 0x01b552f0
int sub_01b552f0(void) { return 153391689; }

// @baa 0x01b55300
int sub_01b55300(void) { return 357913941; }

// @baa 0x01b557b0
void sub_01b557b0(void) {  }

struct E_01b557c0 {};

// @baa 0x01b557c0
E_01b557c0 sub_01b557c0() { E_01b557c0 e; return e; }

struct E_01b557d0 {};

// @baa 0x01b557d0
E_01b557d0 sub_01b557d0() { E_01b557d0 e; return e; }

struct E_01b557e0 {};

// @baa 0x01b557e0
E_01b557e0 sub_01b557e0() { E_01b557e0 e; return e; }

// @baa 0x01b557f0
void sub_01b557f0(void) {  }

struct E_01b55800 {};

// @baa 0x01b55800
E_01b55800 sub_01b55800() { E_01b55800 e; return e; }

struct E_01b55810 {};

// @baa 0x01b55810
E_01b55810 sub_01b55810() { E_01b55810 e; return e; }

struct E_01b55820 {};

// @baa 0x01b55820
E_01b55820 sub_01b55820() { E_01b55820 e; return e; }

struct E_01b55830 {};

// @baa 0x01b55830
E_01b55830 sub_01b55830() { E_01b55830 e; return e; }

struct E_01b55840 {};

// @baa 0x01b55840
E_01b55840 sub_01b55840() { E_01b55840 e; return e; }

struct E_01b55850 {};

// @baa 0x01b55850
E_01b55850 sub_01b55850() { E_01b55850 e; return e; }

struct E_01b55860 {};

// @baa 0x01b55860
E_01b55860 sub_01b55860() { E_01b55860 e; return e; }

struct E_01b55870 {};

// @baa 0x01b55870
E_01b55870 sub_01b55870() { E_01b55870 e; return e; }

// @baa 0x01b55880
void sub_01b55880(void) {  }

// @baa 0x01b55890
void sub_01b55890(void) {  }

// @baa 0x01b558a0
void sub_01b558a0(void) {  }

// @baa 0x01b558b0
void sub_01b558b0(void) {  }

// @baa 0x01b558c0
void sub_01b558c0(void) {  }

// @baa 0x01b558d0
void sub_01b558d0(void) {  }

// @baa 0x01b558e0
void sub_01b558e0(void) {  }

// @baa 0x01b558f0
void sub_01b558f0(void) {  }

// @baa 0x01b55900
void sub_01b55900(void) {  }

// @baa 0x01b55910
void sub_01b55910(void) {  }

struct C_01b55990 {
    int sub_01b55990();
};

// @baa 0x01b55990
int C_01b55990::sub_01b55990(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x28;
}

struct C_01b559f0 {
    int sub_01b559f0();
};

// @baa 0x01b559f0
int C_01b559f0::sub_01b559f0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) / 0xc;
}

struct C_01b55a50 {
    int sub_01b55a50();
};

// @baa 0x01b55a50
int C_01b55a50::sub_01b55a50(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
}

struct C_01b55a70 {
    int sub_01b55a70();
};

// @baa 0x01b55a70
int C_01b55a70::sub_01b55a70(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) / 0x24;
}

struct C_01b55c00 { C_01b55c00* sub_01b55c00(int a0); };

// @baa 0x01b55c00
C_01b55c00* C_01b55c00::sub_01b55c00(int a0) { return this; }

struct C_01b55c10 { C_01b55c10* sub_01b55c10(int a0); };

// @baa 0x01b55c10
C_01b55c10* C_01b55c10::sub_01b55c10(int a0) { return this; }

struct C_01b55c20 { C_01b55c20* sub_01b55c20(int a0); };

// @baa 0x01b55c20
C_01b55c20* C_01b55c20::sub_01b55c20(int a0) { return this; }

struct C_01b55c30 { C_01b55c30* sub_01b55c30(int a0); };

// @baa 0x01b55c30
C_01b55c30* C_01b55c30::sub_01b55c30(int a0) { return this; }

struct C_01b55c40 { C_01b55c40* sub_01b55c40(int a0); };

// @baa 0x01b55c40
C_01b55c40* C_01b55c40::sub_01b55c40(int a0) { return this; }

struct C_01b55c50 { C_01b55c50* sub_01b55c50(int a0); };

// @baa 0x01b55c50
C_01b55c50* C_01b55c50::sub_01b55c50(int a0) { return this; }

struct C_01b55c60 { C_01b55c60* sub_01b55c60(int a0); };

// @baa 0x01b55c60
C_01b55c60* C_01b55c60::sub_01b55c60(int a0) { return this; }

struct C_01b55c70 { C_01b55c70* sub_01b55c70(int a0); };

// @baa 0x01b55c70
C_01b55c70* C_01b55c70::sub_01b55c70(int a0) { return this; }

struct C_01b55c80 { C_01b55c80* sub_01b55c80(int a0); };

// @baa 0x01b55c80
C_01b55c80* C_01b55c80::sub_01b55c80(int a0) { return this; }

struct C_01b55c90 { C_01b55c90* sub_01b55c90(int a0); };

// @baa 0x01b55c90
C_01b55c90* C_01b55c90::sub_01b55c90(int a0) { return this; }

struct C_01b55ca0 { C_01b55ca0* sub_01b55ca0(int a0); };

// @baa 0x01b55ca0
C_01b55ca0* C_01b55ca0::sub_01b55ca0(int a0) { return this; }

struct C_01b55cb0 { C_01b55cb0* sub_01b55cb0(int a0); };

// @baa 0x01b55cb0
C_01b55cb0* C_01b55cb0::sub_01b55cb0(int a0) { return this; }

// @baa 0x01b55cc0
int sub_01b55cc0(void) { return 1073741823; }

struct S {
    int Unk00;
};

extern void __cdecl sub_01b55310(struct S const &Ref, int Value);
// @baa 0x01b55cd0
void __stdcall sub_01b55cd0(struct S const &Ref)
{
    sub_01b55310(Ref, 0);
}

// @baa 0x01b55cf0
int sub_01b55cf0(void) { return 178956970; }

extern void __cdecl sub_01b55370(struct S const &Ref, int Value);
// @baa 0x01b55d00
void __stdcall sub_01b55d00(struct S const &Ref)
{
    sub_01b55370(Ref, 0);
}

// @baa 0x01b55d20
int sub_01b55d20(void) { return 268435455; }

extern void __cdecl sub_01b553d0(struct S const &Ref, int Value);
// @baa 0x01b55d30
void __stdcall sub_01b55d30(struct S const &Ref)
{
    sub_01b553d0(Ref, 0);
}

// @baa 0x01b55d50
int sub_01b55d50(void) { return 1073741823; }

extern void __cdecl sub_01b55430(struct S const &Ref, int Value);
// @baa 0x01b55d60
void __stdcall sub_01b55d60(struct S const &Ref)
{
    sub_01b55430(Ref, 0);
}

// @baa 0x01b55d80
int sub_01b55d80(void) { return 268435455; }

extern void __cdecl sub_01b55490(struct S const &Ref, int Value);
// @baa 0x01b55d90
void __stdcall sub_01b55d90(struct S const &Ref)
{
    sub_01b55490(Ref, 0);
}

// @baa 0x01b55db0
int sub_01b55db0(void) { return 107374182; }

extern void __cdecl sub_01b554f0(struct S const &Ref, int Value);
// @baa 0x01b55dc0
void __stdcall sub_01b55dc0(struct S const &Ref)
{
    sub_01b554f0(Ref, 0);
}

// @baa 0x01b55de0
int sub_01b55de0(void) { return 357913941; }

extern void __cdecl sub_01b55550(struct S const &Ref, int Value);
// @baa 0x01b55df0
void __stdcall sub_01b55df0(struct S const &Ref)
{
    sub_01b55550(Ref, 0);
}

// @baa 0x01b55e10
int sub_01b55e10(void) { return 536870911; }

extern void __cdecl sub_01b555b0(struct S const &Ref, int Value);
// @baa 0x01b55e20
void __stdcall sub_01b55e20(struct S const &Ref)
{
    sub_01b555b0(Ref, 0);
}

// @baa 0x01b55e40
int sub_01b55e40(void) { return 7669584; }

extern void __cdecl sub_01b55610(struct S const &Ref, int Value);
// @baa 0x01b55e50
void __stdcall sub_01b55e50(struct S const &Ref)
{
    sub_01b55610(Ref, 0);
}

// @baa 0x01b55e70
int sub_01b55e70(void) { return 268435455; }

extern void __cdecl sub_01b55670(struct S const &Ref, int Value);
// @baa 0x01b55e80
void __stdcall sub_01b55e80(struct S const &Ref)
{
    sub_01b55670(Ref, 0);
}

// @baa 0x01b55ea0
int sub_01b55ea0(void) { return 153391689; }

extern void __cdecl sub_01b556d0(struct S const &Ref, int Value);
// @baa 0x01b55eb0
void __stdcall sub_01b55eb0(struct S const &Ref)
{
    sub_01b556d0(Ref, 0);
}

// @baa 0x01b55ed0
int sub_01b55ed0(void) { return 357913941; }

extern void __cdecl sub_01b55740(struct S const &Ref, int Value);
// @baa 0x01b55ee0
void __stdcall sub_01b55ee0(struct S const &Ref)
{
    sub_01b55740(Ref, 0);
}

// @baa 0x01b55f00
void sub_01b55f00(void) {  }

// @baa 0x01b55f10
void sub_01b55f10(void) {  }

// @baa 0x01b55f20
void __stdcall sub_01b55f20(int a0) {  }

// @baa 0x01b55f30
void __stdcall sub_01b55f30(int a0) {  }

// @baa 0x01b55f40
void __stdcall sub_01b55f40(int a0) {  }

// @baa 0x01b55f50
void __stdcall sub_01b55f50(int a0) {  }

// @baa 0x01b55f60
void __stdcall sub_01b55f60(int a0) {  }

// @baa 0x01b55f70
void __stdcall sub_01b55f70(int a0) {  }

// @baa 0x01b55f80
void __stdcall sub_01b55f80(int a0) {  }

// @baa 0x01b55f90
void __stdcall sub_01b55f90(int a0) {  }

// @baa 0x01b55fa0
void __stdcall sub_01b55fa0(int a0) {  }

// @baa 0x01b55fb0
void __stdcall sub_01b55fb0(int a0) {  }

// @baa 0x01b56390
void __stdcall sub_01b56390(int a0, int a1) {  }

// @baa 0x01b563a0
void __stdcall sub_01b563a0(int a0, int a1) {  }

// @baa 0x01b563b0
void sub_01b563b0(void) {  }

// @baa 0x01b563c0
void sub_01b563c0(void) {  }

// @baa 0x01b563d0
void sub_01b563d0(void) {  }

// @baa 0x01b563e0
void sub_01b563e0(void) {  }

// @baa 0x01b563f0
void sub_01b563f0(void) {  }

// @baa 0x01b56400
void sub_01b56400(void) {  }

// @baa 0x01b56410
void sub_01b56410(void) {  }

// @baa 0x01b56420
void sub_01b56420(void) {  }

// @baa 0x01b56430
void sub_01b56430(void) {  }

// @baa 0x01b56440
void sub_01b56440(void) {  }

struct C_01b56510 {
    void sub_01b56510();
};

// @baa 0x01b56510
void C_01b56510::sub_01b56510(void)
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

struct C_01b56540 {
    void sub_01b56540();
};

// @baa 0x01b56540
void C_01b56540::sub_01b56540(void)
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

// @baa 0x01b56570
void sub_01b56570(void) {  }

// @baa 0x01b56580
void sub_01b56580(void) {  }

// @baa 0x01b56590
void sub_01b56590(void) {  }

// @baa 0x01b565a0
void sub_01b565a0(void) {  }

// @baa 0x01b565b0
void sub_01b565b0(void) {  }

// @baa 0x01b565c0
void sub_01b565c0(void) {  }

// @baa 0x01b565d0
void sub_01b565d0(void) {  }

// @baa 0x01b565e0
void sub_01b565e0(void) {  }

// @baa 0x01b565f0
void sub_01b565f0(void) {  }

// @baa 0x01b56600
void sub_01b56600(void) {  }

struct C_01b56610 {
    void sub_01b56610();
};

// @baa 0x01b56610
void C_01b56610::sub_01b56610(void)
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

struct C_01b56640 {
    void sub_01b56640();
};

// @baa 0x01b56640
void C_01b56640::sub_01b56640(void)
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

// @baa 0x01b56670
void __stdcall sub_01b56670(int a0, int a1) {  }

// @baa 0x01b56680
void __stdcall sub_01b56680(int a0, int a1) {  }

// @baa 0x01b56690
void __stdcall sub_01b56690(int a0, int a1) {  }

// @baa 0x01b566a0
void __stdcall sub_01b566a0(int a0, int a1) {  }

// @baa 0x01b566b0
void __stdcall sub_01b566b0(int a0, int a1) {  }

// @baa 0x01b566c0
void __stdcall sub_01b566c0(int a0, int a1) {  }

// @baa 0x01b566d0
void __stdcall sub_01b566d0(int a0, int a1) {  }

// @baa 0x01b566e0
void __stdcall sub_01b566e0(int a0, int a1) {  }

// @baa 0x01b566f0
void __stdcall sub_01b566f0(int a0, int a1) {  }

// @baa 0x01b56700
void __stdcall sub_01b56700(int a0, int a1) {  }

struct C_01b56710 {
    void sub_01b56710();
};

// @baa 0x01b56710
void C_01b56710::sub_01b56710(void)
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

struct C_01b56740 {
    void sub_01b56740();
};

// @baa 0x01b56740
void C_01b56740::sub_01b56740(void)
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

struct C_01b56770 {
    void sub_01b56770();
};

// @baa 0x01b56770
void C_01b56770::sub_01b56770(void)
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

struct C_01b567a0 {
    void sub_01b567a0();
};

// @baa 0x01b567a0
void C_01b567a0::sub_01b567a0(void)
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

struct C_01b567d0 {
    void sub_01b567d0();
};

// @baa 0x01b567d0
void C_01b567d0::sub_01b567d0(void)
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

struct C_01b56800 {
    void sub_01b56800();
};

// @baa 0x01b56800
void C_01b56800::sub_01b56800(void)
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

struct C_01b56830 {
    void sub_01b56830();
};

// @baa 0x01b56830
void C_01b56830::sub_01b56830(void)
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

struct C_01b56860 {
    void sub_01b56860();
};

// @baa 0x01b56860
void C_01b56860::sub_01b56860(void)
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

struct C_01b56890 {
    void sub_01b56890();
};

// @baa 0x01b56890
void C_01b56890::sub_01b56890(void)
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

struct C_01b568c0 {
    void sub_01b568c0();
};

// @baa 0x01b568c0
void C_01b568c0::sub_01b568c0(void)
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

struct C_01b568f0 {
    void sub_01b568f0();
};

// @baa 0x01b568f0
void C_01b568f0::sub_01b568f0(void)
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

struct C_01b56920 {
    void sub_01b56920();
};

// @baa 0x01b56920
void C_01b56920::sub_01b56920(void)
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

struct C_01b56950 {
    void sub_01b56950();
};

// @baa 0x01b56950
void C_01b56950::sub_01b56950(void)
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

struct C_01b56980 {
    void sub_01b56980();
};

// @baa 0x01b56980
void C_01b56980::sub_01b56980(void)
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

struct C_01b569b0 {
    void sub_01b569b0();
};

// @baa 0x01b569b0
void C_01b569b0::sub_01b569b0(void)
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

struct C_01b569e0 {
    void sub_01b569e0();
};

// @baa 0x01b569e0
void C_01b569e0::sub_01b569e0(void)
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

struct C_01b56a10 {
    void sub_01b56a10();
};

// @baa 0x01b56a10
void C_01b56a10::sub_01b56a10(void)
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

struct C_01b56a40 {
    void sub_01b56a40();
};

// @baa 0x01b56a40
void C_01b56a40::sub_01b56a40(void)
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

struct C_01b56a70 {
    void sub_01b56a70();
};

// @baa 0x01b56a70
void C_01b56a70::sub_01b56a70(void)
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

struct C_01b56aa0 {
    void sub_01b56aa0();
};

// @baa 0x01b56aa0
void C_01b56aa0::sub_01b56aa0(void)
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

struct C_01b57860 { C_01b57860* sub_01b57860(void); };

// @baa 0x01b57860
C_01b57860* C_01b57860::sub_01b57860(void) { return this; }

struct C_01b578c0 {
    void sub_01b578c0();
};

// @baa 0x01b578c0
void C_01b578c0::sub_01b578c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  param_1[8] = 0xffffffff;
  param_1[9] = 0xffffffff;
  return;
}

struct C_01b57b00 {
    void sub_01b57b00(undefined4 *, undefined4);
};

// @baa 0x01b57b00
void C_01b57b00::sub_01b57b00(undefined4 * param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_3;
  return;
}

struct C_01b57b40 { C_01b57b40* sub_01b57b40(void); };

// @baa 0x01b57b40
C_01b57b40* C_01b57b40::sub_01b57b40(void) { return this; }

struct C_01b57b50 {
    int sub_01b57b50();
};

// @baa 0x01b57b50
int C_01b57b50::sub_01b57b50(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}

struct C_01b57ba0 {
    int sub_01b57ba0();
};

// @baa 0x01b57ba0
int C_01b57ba0::sub_01b57ba0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4;
}

struct C_01b57bc0 {
    int sub_01b57bc0();
};

// @baa 0x01b57bc0
int C_01b57bc0::sub_01b57bc0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}

struct C_01b57c10 {
    int sub_01b57c10();
};

// @baa 0x01b57c10
int C_01b57c10::sub_01b57c10(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
}

struct C_01b57cb0 {
    int sub_01b57cb0();
};

// @baa 0x01b57cb0
int C_01b57cb0::sub_01b57cb0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3;
}

struct C_01b57d30 {
    int sub_01b57d30();
};

// @baa 0x01b57d30
int C_01b57d30::sub_01b57d30(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x230;
}

struct C_01b57e00 {
    int sub_01b57e00();
};

// @baa 0x01b57e00
int C_01b57e00::sub_01b57e00(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4;
}

struct C_01b57e50 {
    int sub_01b57e50();
};

// @baa 0x01b57e50
int C_01b57e50::sub_01b57e50(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0x28;
}

struct C_01b57e70 {
    int sub_01b57e70();
};

// @baa 0x01b57e70
int C_01b57e70::sub_01b57e70(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0xc;
}

struct C_01b57e90 {
    int sub_01b57e90();
};

// @baa 0x01b57e90
int C_01b57e90::sub_01b57e90(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 3;
}

struct C_01b57eb0 {
    int sub_01b57eb0();
};

// @baa 0x01b57eb0
int C_01b57eb0::sub_01b57eb0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0x230;
}

struct C_01b57ee0 {
    int sub_01b57ee0();
};

// @baa 0x01b57ee0
int C_01b57ee0::sub_01b57ee0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 4;
}

struct C_01b57f00 { C_01b57f00* sub_01b57f00(void); };

// @baa 0x01b57f00
C_01b57f00* C_01b57f00::sub_01b57f00(void) { return this; }

struct C_01b57f90 { C_01b57f90* sub_01b57f90(void); };

// @baa 0x01b57f90
C_01b57f90* C_01b57f90::sub_01b57f90(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01b57fa0
int sub_01b57fa0(void) { return 268435455; }

struct C_01b57fb0 {
    int sub_01b57fb0(int *);
};

// @baa 0x01b57fb0
int C_01b57fb0::sub_01b57fb0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 4;
}

struct C_01b58010 {
    int sub_01b58010(int *);
};

// @baa 0x01b58010
int C_01b58010::sub_01b58010(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x28;
}

struct C_01b58080 {
    int sub_01b58080(int *);
};

// @baa 0x01b58080
int C_01b58080::sub_01b58080(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0xc;
}

struct C_01b580f0 {
    int sub_01b580f0(int *);
};

// @baa 0x01b580f0
int C_01b580f0::sub_01b580f0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}

struct C_01b58150 {
    int sub_01b58150(int *);
};

// @baa 0x01b58150
int C_01b58150::sub_01b58150(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x230;
}

struct C_01b581c0 { C_01b581c0* sub_01b581c0(void); };

// @baa 0x01b581c0
C_01b581c0* C_01b581c0::sub_01b581c0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01b581d0 { C_01b581d0* sub_01b581d0(void); };

// @baa 0x01b581d0
C_01b581d0* C_01b581d0::sub_01b581d0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01b581e0 { C_01b581e0* sub_01b581e0(void); };

// @baa 0x01b581e0
C_01b581e0* C_01b581e0::sub_01b581e0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01b581f0 { C_01b581f0* sub_01b581f0(void); };

// @baa 0x01b581f0
C_01b581f0* C_01b581f0::sub_01b581f0(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01b583b0
int sub_01b583b0(int a0) { return a0; }

// @baa 0x01b583c0
int sub_01b583c0(int a0) { return a0; }

// @baa 0x01b583d0
int sub_01b583d0(int a0) { return a0; }

struct E_01b583e0 {};

// @baa 0x01b583e0
E_01b583e0 sub_01b583e0() { E_01b583e0 e; return e; }

struct E_01b58420 {};

// @baa 0x01b58420
E_01b58420 sub_01b58420() { E_01b58420 e; return e; }

// @baa 0x01b58430
void sub_01b58430(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
  }
  return;
}

struct E_01b58460 {};

// @baa 0x01b58460
E_01b58460 sub_01b58460() { E_01b58460 e; return e; }

// @baa 0x01b58470
void sub_01b58470(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
  }
  return;
}

struct E_01b584a0 {};

// @baa 0x01b584a0
E_01b584a0 sub_01b584a0() { E_01b584a0 e; return e; }

struct E_01b584e0 {};

// @baa 0x01b584e0
E_01b584e0 sub_01b584e0() { E_01b584e0 e; return e; }

// @baa 0x01b584f0
void sub_01b584f0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  return;
}

// @baa 0x01b58520
undefined4 sub_01b58520(undefined4 param_1)
{
  return param_1;
}

struct E_01b58530 {};

// @baa 0x01b58530
E_01b58530 sub_01b58530() { E_01b58530 e; return e; }

// @baa 0x01b58540
int sub_01b58540(int a0) { return *(int*)a0; }

// @baa 0x01b58580
int sub_01b58580(int a0) { return *(int*)a0; }

// @baa 0x01b585c0
int sub_01b585c0(int a0) { return *(int*)a0; }

// @baa 0x01b58600
int sub_01b58600(int a0) { return *(int*)a0; }

// @baa 0x01b58650
int sub_01b58650(int a0) { return *(int*)a0; }

// @baa 0x01b58680
void sub_01b58680(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x01b586a0
void sub_01b586a0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x01b586e0
void sub_01b586e0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return;
}

// @baa 0x01b58710
void sub_01b58710(void) {  }

struct C_01b58720 { int sub_01b58720(void); };

// @baa 0x01b58720
int C_01b58720::sub_01b58720(void) { return *(int*)((char*)this + 4); }

// @baa 0x01b58750
int sub_01b58750(void) { return 0; }

// @baa 0x01b58760
int sub_01b58760(void) { return 0; }

struct C_01b589b0 {
    int sub_01b589b0();
};

// @baa 0x01b589b0
int C_01b589b0::sub_01b589b0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x1c) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
}

struct C_01b58a40 {
    int sub_01b58a40();
};

// @baa 0x01b58a40
int C_01b58a40::sub_01b58a40(void)
{
    int param_1 = (int)this;
  if (*(int *)(param_1 + 0x3c) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 4;
}

struct C_01b58a60 {
    int sub_01b58a60();
};

// @baa 0x01b58a60
int C_01b58a60::sub_01b58a60(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x20) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 2;
}

struct C_01b58ab0 {
    int sub_01b58ab0();
};

// @baa 0x01b58ab0
int C_01b58ab0::sub_01b58ab0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x30) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30)) / 0xc;
}

struct C_01b597d0 { C_01b597d0* sub_01b597d0(int a0); };

// @baa 0x01b597d0
C_01b597d0* C_01b597d0::sub_01b597d0(int a0) { return this; }

// @baa 0x01b597e0
int sub_01b597e0(void) { return 268435455; }

extern void __cdecl sub_01b58340(struct S const &Ref, int Value);
// @baa 0x01b597f0
void __stdcall sub_01b597f0(struct S const &Ref)
{
    sub_01b58340(Ref, 0);
}

struct C_01b59810 {
    int sub_01b59810(int *);
};

// @baa 0x01b59810
int C_01b59810::sub_01b59810(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 4;
}

struct C_01b598b0 {
    int sub_01b598b0(int *);
};

// @baa 0x01b598b0
int C_01b598b0::sub_01b598b0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x28;
}

struct C_01b59920 {
    int sub_01b59920(int *);
};

// @baa 0x01b59920
int C_01b59920::sub_01b59920(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0xc;
}

struct C_01b59990 {
    int sub_01b59990(int *);
};

// @baa 0x01b59990
int C_01b59990::sub_01b59990(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}

struct C_01b599f0 {
    int sub_01b599f0(int *);
};

// @baa 0x01b599f0
int C_01b599f0::sub_01b599f0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x230;
}

// @baa 0x01b59ca0
int sub_01b59ca0(int a0) { return *(int*)a0; }

// @baa 0x01b59d00
int sub_01b59d00(int a0) { return *(int*)a0; }

// @baa 0x01b59d60
int sub_01b59d60(int a0) { return *(int*)a0; }

// @baa 0x01b59db0
int sub_01b59db0(int a0) { return *(int*)a0; }

// @baa 0x01b59e20
int sub_01b59e20(int a0) { return *(int*)a0; }

// @baa 0x01b59ee0
void __stdcall sub_01b59ee0(int a0) {  }

// @baa 0x01b59ef0
undefined4 sub_01b59ef0(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01b5aa40
void sub_01b5aa40(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
  }
  return;
}

// @baa 0x01b5aa70
void sub_01b5aa70(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
  }
  return;
}

// @baa 0x01b5aad0
void sub_01b5aad0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  return;
}

// @baa 0x01b5ab00
undefined4 sub_01b5ab00(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01b5acd0
void sub_01b5acd0(void) {  }

// @baa 0x01b5b420
void sub_01b5b420(void) {  }

int sub_01b5ad90(...);
// @baa 0x01b5bad0
void sub_01b5bad0(int param_1, int param_2)
{
  if (0x10 < (int)(param_2 - param_1 & 0xfffffff0U)) {
    sub_01b5ad90(param_1,param_2,0,0);
  }
  return;
}

int sub_01b5adf0(...);
// @baa 0x01b5bb00
void sub_01b5bb00(undefined4 param_1, undefined4 param_2)
{
  sub_01b5adf0(param_1,param_2,0);
  return;
}

int sub_01b5afb0(...);
// @baa 0x01b5bbc0
void sub_01b5bbc0(int param_1, int param_2)
{
  if (0x10 < (int)(param_2 - param_1 & 0xfffffff0U)) {
    sub_01b5afb0(param_1,param_2,0);
  }
  return;
}

// @baa 0x01b5bd70
void __stdcall sub_01b5bd70(int a0, int a1) {  }

struct C_01b5c080 {
    void sub_01b5c080();
};

// @baa 0x01b5c080
void C_01b5c080::sub_01b5c080(void)
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

void sub_01b5be70();
// @baa 0x01b5c1a0
void sub_01b5c1a0(void) { sub_01b5be70(); }

struct C_01b5c2b0 {
    void sub_01b5c2b0();
};

// @baa 0x01b5c2b0
void C_01b5c2b0::sub_01b5c2b0(void)
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

int sub_01b5cfe0(...);
// @baa 0x01b5d680
void sub_01b5d680(int param_1, int param_2, int param_3, int param_4)
{
  if ((param_3 == 0) || (param_3 != param_1)) {
    _invalid_parameter_noinfo();
  }
  sub_01b5cfe0(param_2,param_4,param_4 - param_2 >> 4);
  return;
}

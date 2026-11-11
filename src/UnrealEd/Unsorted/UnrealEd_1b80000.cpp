// UnrealEd_1b80000.cpp (part 1 of 3): 127 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_01b7f340(...);
// @baa 0x01b80220
void sub_01b80220(int param_1, int param_2)
{
  if (0x10 < (int)(param_2 - param_1 & 0xfffffff0U)) {
    sub_01b7f340(param_1,param_2,0,0);
  }
  return;
}

int sub_01b7f3a0(...);
// @baa 0x01b80250
void sub_01b80250(undefined4 param_1, undefined4 param_2)
{
  sub_01b7f3a0(param_1,param_2,0);
  return;
}

int sub_01b7f520(...);
// @baa 0x01b80550
void sub_01b80550(int param_1, int param_2)
{
  if (1 < (param_2 - param_1) / 0xc) {
    sub_01b7f520(param_1,param_2,0,0);
  }
  return;
}

int sub_01b7f590(...);
// @baa 0x01b80590
void sub_01b80590(undefined4 param_1, undefined4 param_2)
{
  sub_01b7f590(param_1,param_2,0);
  return;
}

int sub_01b7f6f0(...);
// @baa 0x01b80610
void sub_01b80610(int param_1, int param_2)
{
  if (0x10 < (int)(param_2 - param_1 & 0xfffffff0U)) {
    sub_01b7f6f0(param_1,param_2,0);
  }
  return;
}

int sub_01b7f750(...);
// @baa 0x01b80640
void sub_01b80640(int param_1, int param_2)
{
  if (1 < (param_2 - param_1) / 0xc) {
    sub_01b7f750(param_1,param_2,0);
  }
  return;
}

struct C {
    void sub_01b80780();
};

int sub_00402660(...);
// @baa 0x01b80780
void C::sub_01b80780(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x14) != 0) {
    sub_00402660(*(int *)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// @baa 0x01b80870
void __stdcall sub_01b80870(int a0, int a1) {  }

struct C_01b80880 {
    void sub_01b80880();
};

// @baa 0x01b80880
void C_01b80880::sub_01b80880(void)
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

// @baa 0x01b808f0
void __stdcall sub_01b808f0(int a0, int a1) {  }

// @baa 0x01b80900
void __stdcall sub_01b80900(int a0, int a1) {  }

struct C_01b80ae0 {
    int sub_01b80ae0(byte);
};

// @baa 0x01b80ae0
int C_01b80ae0::sub_01b80ae0(byte param_2)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x14) != 0) {
    sub_00402660(*(int *)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01b80c50 {
    void sub_01b80c50();
};

// @baa 0x01b80c50
void C_01b80c50::sub_01b80c50(void)
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

struct C_01b80d40 {
    void sub_01b80d40();
};

// @baa 0x01b80d40
void C_01b80d40::sub_01b80d40(void)
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

struct C_01b80dd0 {
    void sub_01b80dd0();
};

// @baa 0x01b80dd0
void C_01b80dd0::sub_01b80dd0(void)
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

void sub_01b809d0();
// @baa 0x01b81050
void sub_01b81050(void) { sub_01b809d0(); }

void sub_01b80a50();
// @baa 0x01b81060
void sub_01b81060(void) { sub_01b80a50(); }

struct C_01b81070 {
    void sub_01b81070();
};

// @baa 0x01b81070
void C_01b81070::sub_01b81070(void)
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

struct C_01b810e0 {
    void sub_01b810e0();
};

// @baa 0x01b810e0
void C_01b810e0::sub_01b810e0(void)
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

int sub_01b819a0(...);
extern "C" __declspec(dllimport) int _invalid_parameter_noinfo(...);
// @baa 0x01b81f90
void sub_01b81f90(int param_1, int param_2, int param_3, int param_4)
{
  if ((param_3 == 0) || (param_3 != param_1)) {
    _invalid_parameter_noinfo();
  }
  sub_01b819a0(param_2,param_4,param_4 - param_2 >> 4);
  return;
}

int sub_01b81a70(...);
// @baa 0x01b81fc0
void sub_01b81fc0(int param_1, int param_2, int param_3, int param_4)
{
  if ((param_3 == 0) || (param_3 != param_1)) {
    _invalid_parameter_noinfo();
  }
  sub_01b81a70(param_2,param_4,(param_4 - param_2) / 0xc);
  return;
}

// @baa 0x01b84390
void sub_01b84390(void)
{
  return;
}

// @baa 0x01b843a0
void sub_01b843a0(void) {  }

// @baa 0x01b843b0
void sub_01b843b0(void) {  }

// @baa 0x01b843c0
void sub_01b843c0(void) {  }

// @baa 0x01b843d0
void sub_01b843d0(void) {  }

// @baa 0x01b843e0
void __stdcall sub_01b843e0(int a0, int a1, int a2) {  }

// @baa 0x01b843f0
void __stdcall sub_01b843f0(int a0) {  }

// @baa 0x01b84400
void __stdcall sub_01b84400(int a0) {  }

// @baa 0x01b84410
void __stdcall sub_01b84410(int a0) {  }

// @baa 0x01b84420
void __stdcall sub_01b84420(int a0) {  }

// @baa 0x01b84430
void __stdcall sub_01b84430(int a0, int a1) {  }

// @baa 0x01b84440
void sub_01b84440(void) {  }

// @baa 0x01b84450
void __stdcall sub_01b84450(int a0, int a1) {  }

// @baa 0x01b84460
void __stdcall sub_01b84460(int a0, int a1) {  }

// @baa 0x01b84470
void __stdcall sub_01b84470(int a0, int a1) {  }

// @baa 0x01b84480
void __stdcall sub_01b84480(int a0, int a1) {  }

// @baa 0x01b84490
void __stdcall sub_01b84490(int a0, int a1, int a2, int a3, int a4) {  }

// @baa 0x01b844a0
void __stdcall sub_01b844a0(int a0, int a1, int a2, int a3) {  }

// @baa 0x01b844b0
void __stdcall sub_01b844b0(int a0, int a1, int a2, int a3) {  }

// @baa 0x01b844c0
float __stdcall sub_01b844c0(UINT a, UINT b) { return 0.0f; }

// @baa 0x01b844d0
void __stdcall sub_01b844d0(int a0) {  }

// @baa 0x01b844e0
void sub_01b844e0(void) {  }

// @baa 0x01b844f0
int __stdcall sub_01b844f0(int a0) { return 0; }

// @baa 0x01b84500
int __stdcall sub_01b84500(int a0) { return 0; }

// @baa 0x01b84510
void sub_01b84510(void) {  }

// @baa 0x01b84520
void __stdcall sub_01b84520(int a0) {  }

// @baa 0x01b84530
void sub_01b84530(void) {  }

// @baa 0x01b84540
void __stdcall sub_01b84540(int a0, int a1) {  }

// @baa 0x01b84550
void __stdcall sub_01b84550(int a0, int a1, int a2) {  }

// @baa 0x01b84560
void __stdcall sub_01b84560(int a0, int a1, int a2, int a3, int a4) {  }

// @baa 0x01b84570
void __stdcall sub_01b84570(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x01b84580
void __stdcall sub_01b84580(int a0, int a1) {  }

// @baa 0x01b84590
void __stdcall sub_01b84590(int a0, int a1) {  }

// @baa 0x01b845a0
void __stdcall sub_01b845a0(int a0, int a1, int a2) {  }

// @baa 0x01b845b0
void __stdcall sub_01b845b0(int a0, int a1, int a2, int a3) {  }

// @baa 0x01b845c0
void __stdcall sub_01b845c0(int a0, int a1, int a2, int a3) {  }

// @baa 0x01b845d0
void __stdcall sub_01b845d0(int a0, int a1, int a2, int a3) {  }

// @baa 0x01b845e0
void __stdcall sub_01b845e0(int a0) {  }

// @baa 0x01b845f0
void __stdcall sub_01b845f0(int a0) {  }

// @baa 0x01b84600
void __stdcall sub_01b84600(int a0) {  }

struct C_01b84610 { char* sub_01b84610(int a0); };

// @baa 0x01b84610
char* C_01b84610::sub_01b84610(int a0) { return (char*)this + 40; }

struct C_01b84620 { C_01b84620* sub_01b84620(void); };

// @baa 0x01b84620
C_01b84620* C_01b84620::sub_01b84620(void) { return this; }

struct C_01b84690 { C_01b84690* sub_01b84690(int a0); };

// @baa 0x01b84690
C_01b84690* C_01b84690::sub_01b84690(int a0) { return this; }

// @baa 0x01b846b0
int sub_01b846b0(void) { return 1073741823; }

struct E_01b84720 {};

// @baa 0x01b84720
E_01b84720 sub_01b84720() { E_01b84720 e; return e; }

// @baa 0x01b84730
void sub_01b84730(void) {  }

struct C_01b84740 { C_01b84740* sub_01b84740(int a0); };

// @baa 0x01b84740
C_01b84740* C_01b84740::sub_01b84740(int a0) { return this; }

// @baa 0x01b84750
int sub_01b84750(void) { return 1073741823; }

struct S {
    int Unk00;
};

extern void __cdecl sub_01b846c0(struct S const &Ref, int Value);
// @baa 0x01b84760
void __stdcall sub_01b84760(struct S const &Ref)
{
    sub_01b846c0(Ref, 0);
}

// @baa 0x01b84780
void sub_01b84780(void) {  }

// @baa 0x01b847e0
void __stdcall sub_01b847e0(int a0, int a1) {  }

struct C_01b84800 {
    void sub_01b84800();
};

// @baa 0x01b84800
void C_01b84800::sub_01b84800(void)
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

struct C_01b84830 {
    void sub_01b84830();
};

// @baa 0x01b84830
void C_01b84830::sub_01b84830(void)
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

struct C_01b84870 {
    void sub_01b84870();
};

// @baa 0x01b84870
void C_01b84870::sub_01b84870(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x3c) != 0) {
    sub_00402660(*(int *)(param_1 + 0x3c));
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}

struct C_01b84920 {
    int sub_01b84920(byte);
};

// @baa 0x01b84920
int C_01b84920::sub_01b84920(byte param_2)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x3c) != 0) {
    sub_00402660(*(int *)(param_1 + 0x3c));
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01b84a60 {
    void sub_01b84a60(undefined4, undefined4, undefined1, undefined4, undefined4, undefined4, undefined1);
};

// @baa 0x01b84a60
void C_01b84a60::sub_01b84a60(undefined4 param_2, undefined4 param_3, undefined1 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined1 param_8)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  *(undefined1 *)(param_1 + 6) = param_8;
  return;
}

struct C_01b84aa0 { C_01b84aa0* sub_01b84aa0(void); };

// @baa 0x01b84aa0
C_01b84aa0* C_01b84aa0::sub_01b84aa0(void) { return this; }

struct C_01b84af0 {
    undefined4 sub_01b84af0(int);
};

// @baa 0x01b84af0
undefined4 C_01b84af0::sub_01b84af0(int param_2)
{
    int * param_1 = (int *)this;

  if (((param_2 != *param_1) && (param_2 != param_1[1])) && (param_2 != param_1[2])) {
    return 0;
  }
  return 1;
}

struct C_01b84b40 {
    void sub_01b84b40();
};

// @baa 0x01b84b40
void C_01b84b40::sub_01b84b40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  return;
}

struct C_01b84e30 {
    int sub_01b84e30();
};

// @baa 0x01b84e30
int C_01b84e30::sub_01b84e30(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}

struct C_01b84e90 {
    int sub_01b84e90();
};

// @baa 0x01b84e90
int C_01b84e90::sub_01b84e90(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x108;
}

struct C_01b84eb0 {
    int sub_01b84eb0();
};

// @baa 0x01b84eb0
int C_01b84eb0::sub_01b84eb0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0x18;
}

struct C_01b84f10 {
    int sub_01b84f10();
};

// @baa 0x01b84f10
int C_01b84f10::sub_01b84f10(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0x108;
}

struct C_01b84f30 {
    int sub_01b84f30(int *);
};

// @baa 0x01b84f30
int C_01b84f30::sub_01b84f30(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x18;
}

struct C_01b84fa0 { C_01b84fa0* sub_01b84fa0(void); };

// @baa 0x01b84fa0
C_01b84fa0* C_01b84fa0::sub_01b84fa0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01b85060 { C_01b85060* sub_01b85060(void); };

// @baa 0x01b85060
C_01b85060* C_01b85060::sub_01b85060(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01b85070
int sub_01b85070(int a0) { return a0; }

// @baa 0x01b85080
int sub_01b85080(int a0) { return a0; }

struct E_01b850c0 {};

// @baa 0x01b850c0
E_01b850c0 sub_01b850c0() { E_01b850c0 e; return e; }

// @baa 0x01b850d0
void sub_01b850d0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
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

struct E_01b85110 {};

// @baa 0x01b85110
E_01b85110 sub_01b85110() { E_01b85110 e; return e; }

// @baa 0x01b85120
int sub_01b85120(int a0) { return *(int*)a0; }

// @baa 0x01b85170
int sub_01b85170(int a0) { return *(int*)a0; }

// @baa 0x01b851e0
void sub_01b851e0(undefined4 * param_1, undefined4 * param_2)
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

struct C_01b85770 { C_01b85770* sub_01b85770(void); };

// @baa 0x01b85770
C_01b85770* C_01b85770::sub_01b85770(void) { return this; }

struct C_01b85780 {
    int sub_01b85780(int *);
};

// @baa 0x01b85780
int C_01b85780::sub_01b85780(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x18;
}

// @baa 0x01b85920
int sub_01b85920(int a0) { return *(int*)a0; }

// @baa 0x01b85990
int sub_01b85990(int a0) { return *(int*)a0; }

struct C_01b884e0 {
    void sub_01b884e0(int *, int, int, int, int);
};

int sub_01b87ea0(...);
// @baa 0x01b884e0
void C_01b884e0::sub_01b884e0(int * param_2, int param_3, int param_4, int param_5, int param_6)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if ((param_3 == 0) || (param_3 != param_5)) {
    _invalid_parameter_noinfo();
  }
  if (param_4 != param_6) {
    uVar1 = sub_01b87ea0(param_6,*(undefined4 *)(param_1 + 8),param_4);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  param_2[1] = param_4;
  *param_2 = param_3;
  return;
}

struct C_01b8bb00 {
    int sub_01b8bb00();
};

// @baa 0x01b8bb00
int C_01b8bb00::sub_01b8bb00(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3;
}

struct C_01b8bb50 {
    int sub_01b8bb50();
};

// @baa 0x01b8bb50
int C_01b8bb50::sub_01b8bb50(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 3;
}

struct C_01b8bb70 { C_01b8bb70* sub_01b8bb70(void); };

// @baa 0x01b8bb70
C_01b8bb70* C_01b8bb70::sub_01b8bb70(void) { return this; }

// @baa 0x01b8bc00
int sub_01b8bc00(void) { return 536870911; }

struct C_01b8bc10 {
    int sub_01b8bc10(int *);
};

// @baa 0x01b8bc10
int C_01b8bc10::sub_01b8bc10(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}

struct C_01b8bc70 { C_01b8bc70* sub_01b8bc70(void); };

// @baa 0x01b8bc70
C_01b8bc70* C_01b8bc70::sub_01b8bc70(void) { *(int*)((char*)this + 0) = 0; return this; }

struct E_01b8bd30 {};

// @baa 0x01b8bd30
E_01b8bd30 sub_01b8bd30() { E_01b8bd30 e; return e; }

// @baa 0x01b8bd40
void sub_01b8bd40(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
  }
  return;
}

struct E_01b8bd70 {};

// @baa 0x01b8bd70
E_01b8bd70 sub_01b8bd70() { E_01b8bd70 e; return e; }

// @baa 0x01b8bd80
int sub_01b8bd80(int a0) { return *(int*)a0; }

// @baa 0x01b8bdc0
void sub_01b8bdc0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x01b8bde0
void sub_01b8bde0(void) {  }

struct C_01b8bf90 { C_01b8bf90* sub_01b8bf90(int a0); };

// @baa 0x01b8bf90
C_01b8bf90* C_01b8bf90::sub_01b8bf90(int a0) { return this; }

// @baa 0x01b8bfa0
int sub_01b8bfa0(void) { return 536870911; }

extern void __cdecl sub_01b8bcc0(struct S const &Ref, int Value);
// @baa 0x01b8bfb0
void __stdcall sub_01b8bfb0(struct S const &Ref)
{
    sub_01b8bcc0(Ref, 0);
}

struct C_01b8bfd0 {
    int sub_01b8bfd0(int *);
};

// @baa 0x01b8bfd0
int C_01b8bfd0::sub_01b8bfd0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}

// @baa 0x01b8c0b0
int sub_01b8c0b0(int a0) { return *(int*)a0; }

// @baa 0x01b8c120
void __stdcall sub_01b8c120(int a0) {  }

// @baa 0x01b8c2b0
void sub_01b8c2b0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
  }
  return;
}

// @baa 0x01b8c310
void sub_01b8c310(void) {  }

// @baa 0x01b8c430
void sub_01b8c430(void) {  }

// @baa 0x01b8c660
void __stdcall sub_01b8c660(int a0, int a1) {  }

struct C_01b8c710 {
    void sub_01b8c710();
};

// @baa 0x01b8c710
void C_01b8c710::sub_01b8c710(void)
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

struct C_01b8c770 {
    void sub_01b8c770();
};

// @baa 0x01b8c770
void C_01b8c770::sub_01b8c770(void)
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

struct C_01b8caa0 {
    void sub_01b8caa0();
};

// @baa 0x01b8caa0
void C_01b8caa0::sub_01b8caa0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x213a8) != 0) {
    sub_00402660(*(int *)(param_1 + 0x213a8));
  }
  *(undefined4 *)(param_1 + 0x213a8) = 0;
  *(undefined4 *)(param_1 + 0x213ac) = 0;
  *(undefined4 *)(param_1 + 0x213b0) = 0;
  return;
}

// @baa 0x01b8f4d0
int sub_01b8f4d0(void) { return 10; }

struct C_01b8fbc0 { int sub_01b8fbc0(void); };

// @baa 0x01b8fbc0
int C_01b8fbc0::sub_01b8fbc0(void) { return *(int*)((char*)this + 8); }

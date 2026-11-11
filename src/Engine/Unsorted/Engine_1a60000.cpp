// Engine_1a60000.cpp (part 1 of 5): 86 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01a61970
char * sub_01a61970(undefined4 param_1)
{
  switch(param_1) {
  case 0:
    return "Diffuse";
  case 1:
    return "Detail";
  case 2:
    return "Normal";
  case 3:
    return "Height";
  case 4:
    return "Specular";
  case 5:
    return "User 1";
  case 6:
    return "User 2";
  case 7:
    return "Shadow";
  default:
    return "Unknown";
  }
}

extern undefined4 g_027bce78;
// @baa 0x01a61a20
void sub_01a61a20(undefined4 param_1)
{
  g_027bce78 = param_1;
  return;
}

// @baa 0x01a61a30
undefined4 sub_01a61a30(void)
{
  return g_027bce78;
}

struct C {
    int sub_01a61a40();
};

// @baa 0x01a61a40
int C::sub_01a61a40(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}

struct C_01a61a60 {
    int sub_01a61a60();
};

// @baa 0x01a61a60
int C_01a61a60::sub_01a61a60(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}

struct C_01a61b80 {
    int sub_01a61b80();
};

// @baa 0x01a61b80
int C_01a61b80::sub_01a61b80(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 100;
}

struct C_01a61be0 {
    int sub_01a61be0();
};

// @baa 0x01a61be0
int C_01a61be0::sub_01a61be0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x2c;
}

struct C_01a61c80 {
    int sub_01a61c80();
};

// @baa 0x01a61c80
int C_01a61c80::sub_01a61c80(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc4;
}

struct C_01a61ce0 {
    int sub_01a61ce0();
};

// @baa 0x01a61ce0
int C_01a61ce0::sub_01a61ce0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x28;
}

struct C_01a61d40 {
    int sub_01a61d40();
};

// @baa 0x01a61d40
int C_01a61d40::sub_01a61d40(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4;
}

struct C_01a61d60 {
    int sub_01a61d60();
};

// @baa 0x01a61d60
int C_01a61d60::sub_01a61d60(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}

struct C_01a61da0 {
    int sub_01a61da0();
};

// @baa 0x01a61da0
int C_01a61da0::sub_01a61da0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
}

struct C_01a61dc0 {
    int sub_01a61dc0();
};

// @baa 0x01a61dc0
int C_01a61dc0::sub_01a61dc0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}

struct C_01a61de0 { C_01a61de0* sub_01a61de0(void); };

// @baa 0x01a61de0
C_01a61de0* C_01a61de0::sub_01a61de0(void) { return this; }

struct C_01a61df0 {
    int sub_01a61df0();
};

// @baa 0x01a61df0
int C_01a61df0::sub_01a61df0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0xc4;
}

struct C_01a61e10 {
    int sub_01a61e10();
};

// @baa 0x01a61e10
int C_01a61e10::sub_01a61e10(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0x28;
}

struct C_01a61e30 { C_01a61e30* sub_01a61e30(void); };

// @baa 0x01a61e30
C_01a61e30* C_01a61e30::sub_01a61e30(void) { return this; }

struct C_01a62260 { C_01a62260* sub_01a62260(void); };

// @baa 0x01a62260
C_01a62260* C_01a62260::sub_01a62260(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01a62270 { C_01a62270* sub_01a62270(void); };

// @baa 0x01a62270
C_01a62270* C_01a62270::sub_01a62270(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01a62280
undefined4 sub_01a62280(void)
{
  return 0xffffffff;
}

// @baa 0x01a62290
int sub_01a62290(void) { return 1073741823; }

// @baa 0x01a62380
int sub_01a62380(void) { return 107374182; }

struct C_01a62390 {
    int sub_01a62390(int *);
};

extern "C" __declspec(dllimport) int _invalid_parameter_noinfo(...);
// @baa 0x01a62390
int C_01a62390::sub_01a62390(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x28;
}

struct C_01a623d0 {
    int sub_01a623d0(int *);
};

// @baa 0x01a623d0
int C_01a623d0::sub_01a623d0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

struct C_01a62400 {
    int sub_01a62400(int *);
};

// @baa 0x01a62400
int C_01a62400::sub_01a62400(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1];
}

struct C_01a62430 {
    int sub_01a62430(int *);
};

// @baa 0x01a62430
int C_01a62430::sub_01a62430(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0xc4;
}

struct C_01a62470 { C_01a62470* sub_01a62470(void); };

// @baa 0x01a62470
C_01a62470* C_01a62470::sub_01a62470(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01a62480 { C_01a62480* sub_01a62480(void); };

// @baa 0x01a62480
C_01a62480* C_01a62480::sub_01a62480(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01a62490
int sub_01a62490(void) { return 21913098; }

struct C_01a62d40 {
    undefined4 sub_01a62d40(byte);
};

int sub_00402660(...);
int sub_01a94cd0(void);
// @baa 0x01a62d40
undefined4 C_01a62d40::sub_01a62d40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a94cd0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a62d60 {
    undefined4 sub_01a62d60(byte);
};

int sub_01a9a430(void);
// @baa 0x01a62d60
undefined4 C_01a62d60::sub_01a62d60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a9a430();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a62d80 {
    undefined4 sub_01a62d80(byte);
};

int sub_01a81830(void);
// @baa 0x01a62d80
undefined4 C_01a62d80::sub_01a62d80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a81830();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a62da0 {
    undefined4 sub_01a62da0(byte);
};

int sub_01a918b0(void);
// @baa 0x01a62da0
undefined4 C_01a62da0::sub_01a62da0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a918b0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a62dc0 {
    undefined4 sub_01a62dc0(byte);
};

int sub_01aa7540(void);
// @baa 0x01a62dc0
undefined4 C_01a62dc0::sub_01a62dc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01aa7540();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01a62de0
void sub_01a62de0(void) {  }

// @baa 0x01a62e00
void sub_01a62e00(int * param_1, int * param_2, int * param_3)
{
  if (param_1 != param_2) {
    do {
      if (*param_1 == *param_3) {
        return;
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}

// @baa 0x01a62e20
int sub_01a62e20(int a0) { return a0; }

// @baa 0x01a62e90
void sub_01a62e90(void) {  }

// @baa 0x01a62ec0
int sub_01a62ec0(int a0) { return a0; }

// @baa 0x01a62f00
void sub_01a62f00(void) {  }

// @baa 0x01a62f10
void sub_01a62f10(undefined1 * param_1, undefined1 * param_2, undefined1 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x01a62f40
void sub_01a62f40(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x01a62f70
int sub_01a62f70(int a0) { return a0; }

// @baa 0x01a62fc0
int sub_01a62fc0(int a0) { return a0; }

// @baa 0x01a63020
int sub_01a63020(int a0) { return *(int*)a0; }

// @baa 0x01a63030
int sub_01a63030(int a0) { return *(int*)a0; }

// @baa 0x01a630b0
int sub_01a630b0(int a0) { return *(int*)a0; }

struct C_01a63180 {
    undefined4 sub_01a63180(byte);
};

// @baa 0x01a63180
undefined4 C_01a63180::sub_01a63180(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a65f10 {
    int sub_01a65f10();
};

// @baa 0x01a65f10
int C_01a65f10::sub_01a65f10(void)
{
    int param_1 = (int)this;

  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x60);
  iVar2 = 0;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) == 0) {
      return 0;
    }
    iVar2 = (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x28;
  }
  return iVar2;
}

struct C_01a67950 { C_01a67950* sub_01a67950(int a0); };

// @baa 0x01a67950
C_01a67950* C_01a67950::sub_01a67950(int a0) { return this; }

struct C_01a67960 { C_01a67960* sub_01a67960(int a0); };

// @baa 0x01a67960
C_01a67960* C_01a67960::sub_01a67960(int a0) { return this; }

struct C_01a67970 { C_01a67970* sub_01a67970(int a0); };

// @baa 0x01a67970
C_01a67970* C_01a67970::sub_01a67970(int a0) { return this; }

// @baa 0x01a679b0
undefined4 sub_01a679b0(void)
{
  return 0xffffffff;
}

// @baa 0x01a679c0
int sub_01a679c0(void) { return 1073741823; }

// @baa 0x01a679d0
int sub_01a679d0(void) { return 107374182; }

struct C_01a679e0 {
    int sub_01a679e0(int *);
};

// @baa 0x01a679e0
int C_01a679e0::sub_01a679e0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x28;
}

struct C_01a67a60 {
    int sub_01a67a60(int *);
};

// @baa 0x01a67a60
int C_01a67a60::sub_01a67a60(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

struct C_01a67ad0 {
    int sub_01a67ad0(int *);
};

// @baa 0x01a67ad0
int C_01a67ad0::sub_01a67ad0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1];
}

struct C_01a67b00 {
    int sub_01a67b00(int *);
};

// @baa 0x01a67b00
int C_01a67b00::sub_01a67b00(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0xc4;
}

// @baa 0x01a67b40
int sub_01a67b40(void) { return 21913098; }

// @baa 0x01a6ac90
void sub_01a6ac90(void) {  }

struct C_01a6acd0 {
    undefined4 sub_01a6acd0(byte);
};

int sub_01a69040(void);
// @baa 0x01a6acd0
undefined4 C_01a6acd0::sub_01a6acd0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a69040();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01a6b730
void __stdcall sub_01a6b730(int a0, int a1) {  }

void sub_01a6b7c0();
// @baa 0x01a6bb40
void sub_01a6bb40(void) { sub_01a6b7c0(); }

void sub_01a6ba70();
// @baa 0x01a6bc40
void sub_01a6bc40(void) { sub_01a6ba70(); }

// @baa 0x01a6e930
void sub_01a6e930(void) {  }

struct C_01a6ed60 { float sub_01a6ed60(void); };

// @baa 0x01a6ed60
float C_01a6ed60::sub_01a6ed60(void) { return *(float*)((char*)this + 208); }

struct C_01a6edd0 { float sub_01a6edd0(void); };

// @baa 0x01a6edd0
float C_01a6edd0::sub_01a6edd0(void) { return *(float*)((char*)this + 148); }

struct C_01a6f610 {
    int sub_01a6f610();
};

// @baa 0x01a6f610
int C_01a6f610::sub_01a6f610(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 6;
}

struct C_01a6f690 {
    int sub_01a6f690();
};

// @baa 0x01a6f690
int C_01a6f690::sub_01a6f690(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
}

struct C_01a6f6b0 { C_01a6f6b0* sub_01a6f6b0(void); };

// @baa 0x01a6f6b0
C_01a6f6b0* C_01a6f6b0::sub_01a6f6b0(void) { return this; }

struct C_01a6f700 {
    int sub_01a6f700();
};

// @baa 0x01a6f700
int C_01a6f700::sub_01a6f700(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 6;
}

struct C_01a6f720 { C_01a6f720* sub_01a6f720(void); };

// @baa 0x01a6f720
C_01a6f720* C_01a6f720::sub_01a6f720(void) { return this; }

struct C_01a6f770 {
    int sub_01a6f770();
};

// @baa 0x01a6f770
int C_01a6f770::sub_01a6f770(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
}

struct C_01a6f790 { C_01a6f790* sub_01a6f790(void); };

// @baa 0x01a6f790
C_01a6f790* C_01a6f790::sub_01a6f790(void) { return this; }

// @baa 0x01a6f9f0
int sub_01a6f9f0(void) { return 1073741823; }

// @baa 0x01a6fa00
int sub_01a6fa00(void) { return 67108863; }

// @baa 0x01a6fa10
int sub_01a6fa10(void) { return 1073741823; }

struct C_01a6fa80 { C_01a6fa80* sub_01a6fa80(void); };

// @baa 0x01a6fa80
C_01a6fa80* C_01a6fa80::sub_01a6fa80(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01a6fa90 { C_01a6fa90* sub_01a6fa90(void); };

// @baa 0x01a6fa90
C_01a6fa90* C_01a6fa90::sub_01a6fa90(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01a6fbe0
int sub_01a6fbe0(int a0) { return a0; }

// @baa 0x01a6fc40
int sub_01a6fc40(int a0) { return a0; }

// @baa 0x01a6fca0
void sub_01a6fca0(void) {  }

// @baa 0x01a6fcb0
void sub_01a6fcb0(void) {  }

// @baa 0x01a6fd60
int sub_01a6fd60(int a0) { return *(int*)a0; }

struct C_01a6fe20 {
    undefined4 sub_01a6fe20(byte);
};

// @baa 0x01a6fe20
undefined4 C_01a6fe20::sub_01a6fe20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// GFx_1960000.cpp (part 2 of 2): 145 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_0195e8a0();
// @baa 0x01962790
void sub_01962790(void) { sub_0195e8a0(); }

void sub_0195eaf0();
// @baa 0x019629c0
void sub_019629c0(void) { sub_0195eaf0(); }

struct C { C* sub_019629d0(void); };

// @baa 0x019629d0
C* C::sub_019629d0(void) { *(int*)((char*)this + 0) = 0; return this; }

void sub_019625e0();
// @baa 0x01963490
void sub_01963490(void) { sub_019625e0(); }

void sub_019626b0();
// @baa 0x019634a0
void sub_019634a0(void) { sub_019626b0(); }

void sub_01962840();
// @baa 0x01963610
void sub_01963610(void) { sub_01962840(); }

void sub_01962920();
// @baa 0x01963620
void sub_01963620(void) { sub_01962920(); }

// @baa 0x01963630
void sub_01963630(void) { sub_0195eaf0(); }

// @baa 0x01963640
undefined4 * sub_01963640(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

void sub_019634e0();
// @baa 0x01963cf0
void sub_01963cf0(void) { sub_019634e0(); }

void sub_01963540();
// @baa 0x01963d90
void sub_01963d90(void) { sub_01963540(); }

void sub_01963dc0();
// @baa 0x01964340
void sub_01964340(void) { sub_01963dc0(); }

void sub_01964440();
// @baa 0x01964e40
void sub_01964e40(void) { sub_01964440(); }

// @baa 0x01964ef0
float10 sub_01964ef0(void)
{
  return (float10)1;
}

// @baa 0x01964f00
float10 sub_01964f00(void)
{
  return (float10)1;
}

struct C_01964f10 { int sub_01964f10(void); };

// @baa 0x01964f10
int C_01964f10::sub_01964f10(void) { return *(int*)((char*)this + 24); }

struct C_01964f20 { int sub_01964f20(void); };

// @baa 0x01964f20
int C_01964f20::sub_01964f20(void) { return *(int*)((char*)this + 28); }

// @baa 0x01964f50
int sub_01964f50(void) { return 0; }

struct C_01964f60 {
    void sub_01964f60(undefined4, undefined4, undefined4);
};

int sub_018fccd0(...);
// @baa 0x01964f60
void C_01964f60::sub_01964f60(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;

  sub_018fccd0(param_1 + 0x14,param_2,param_3,param_4);
  return;
}

// @baa 0x01964f90
int sub_01964f90(void) { return 33792; }

struct C_01964fa0 {
    float10 sub_01964fa0();
};

// @baa 0x01964fa0
float10 C_01964fa0::sub_01964fa0(void)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(*(int *)(param_1 + 0x10) + 0x1c) + 0x3c);
}

struct C_01964fb0 {
    undefined4 sub_01964fb0();
};

// @baa 0x01964fb0
undefined4 C_01964fb0::sub_01964fb0(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0x1c) + 0x24);
}

struct C_01964fc0 {
    int sub_01964fc0();
};

// @baa 0x01964fc0
int C_01964fc0::sub_01964fc0(void)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x1c) + 0x20) + 0xc;
}

struct C_01964fd0 {
    void sub_01964fd0(undefined4 *);
};

// @baa 0x01964fd0
void C_01964fd0::sub_01964fd0(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c) * 8);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  return;
}

// @baa 0x01965b40
int sub_01965b40(void) { return 11; }

struct C_019660e0 { int sub_019660e0(void); };

// @baa 0x019660e0
int C_019660e0::sub_019660e0(void) { return *(int*)((char*)this + 160); }

struct C_019660f0 { char* sub_019660f0(void); };

// @baa 0x019660f0
char* C_019660f0::sub_019660f0(void) { return (char*)this + 196; }

struct C_01966100 { char* sub_01966100(void); };

// @baa 0x01966100
char* C_01966100::sub_01966100(void) { return (char*)this + 196; }

struct C_01966110 { int sub_01966110(void); };

// @baa 0x01966110
int C_01966110::sub_01966110(void) { return *(int*)((char*)this + 180); }

struct C_01966120 { void sub_01966120(int a0); };

// @baa 0x01966120
void C_01966120::sub_01966120(int a0) { *(int*)((char*)this + 176) = a0; }

struct C_01966130 {
    byte sub_01966130();
};

// @baa 0x01966130
byte C_01966130::sub_01966130(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x1c8) >> 1 & 1;
}

// @baa 0x01966140
int sub_01966140(void) { return 2; }

struct C_01966180 { int sub_01966180(void); };

// @baa 0x01966180
int C_01966180::sub_01966180(void) { return *(int*)((char*)this + 152); }

// @baa 0x019664e0
undefined1 sub_019664e0(void)
{
  return 1;
}

struct C_019680c0 {
    undefined1 sub_019680c0();
};

// @baa 0x019680c0
undefined1 C_019680c0::sub_019680c0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x24);
}

struct C_019680d0 { int sub_019680d0(void); };

// @baa 0x019680d0
int C_019680d0::sub_019680d0(void) { return *(int*)((char*)this + 40); }

struct C_019680e0 {
    undefined4 sub_019680e0();
};

// @baa 0x019680e0
undefined4 C_019680e0::sub_019680e0(void)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) && (param_1[1] == 0)) {
    return 1;
  }
  return 0;
}

struct C_01968130 {
    void sub_01968130(undefined4 *);
};

// @baa 0x01968130
void C_01968130::sub_01968130(undefined4 * param_2)
{
    int param_1 = (int)this;

  *param_2 = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = *(undefined4 *)(param_1 + 0x14);
  param_2[2] = *(undefined4 *)(param_1 + 0x18);
  param_2[3] = *(undefined4 *)(param_1 + 0x1c);
  return;
}

struct C_01968150 { void sub_01968150(int a0); };

// @baa 0x01968150
void C_01968150::sub_01968150(int a0) { *(int*)((char*)this + 0) = a0; }

struct C_01968160 { void sub_01968160(int a0); };

// @baa 0x01968160
void C_01968160::sub_01968160(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_01968300 { void sub_01968300(void); };

// @baa 0x01968300
void C_01968300::sub_01968300(void) { *(int*)((char*)this + 0) = 0; }

struct C_01968330 { void sub_01968330(void); };

// @baa 0x01968330
void C_01968330::sub_01968330(void) { *(int*)((char*)this + 0) = 0; }

struct C_01968340 { int sub_01968340(void); };

// @baa 0x01968340
int C_01968340::sub_01968340(void) { return *(int*)((char*)this + 0); }

struct C_01968350 {
    int sub_01968350(uint);
};

// @baa 0x01968350
int C_01968350::sub_01968350(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 4) * 4) + (param_2 & 0xf) * 8;
}

struct C_01968370 { void sub_01968370(void); };

// @baa 0x01968370
void C_01968370::sub_01968370(void) { *(int*)((char*)this + 0) = 0; }

struct C_01968380 { void sub_01968380(void); };

// @baa 0x01968380
void C_01968380::sub_01968380(void) { *(int*)((char*)this + 0) = 0; }

struct C_01968390 {
    int sub_01968390(int);
};

// @baa 0x01968390
int C_01968390::sub_01968390(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_019683a0 { int sub_019683a0(void); };

// @baa 0x019683a0
int C_019683a0::sub_019683a0(void) { return *(int*)((char*)this + 4); }

struct C_019683b0 { int sub_019683b0(void); };

// @baa 0x019683b0
int C_019683b0::sub_019683b0(void) { return *(int*)((char*)this + 0); }

struct C_019683c0 {
    int sub_019683c0(int);
};

// @baa 0x019683c0
int C_019683c0::sub_019683c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_019683d0 { C_019683d0* sub_019683d0(void); };

// @baa 0x019683d0
C_019683d0* C_019683d0::sub_019683d0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019683f0 { unsigned sub_019683f0(void); };

// @baa 0x019683f0
unsigned C_019683f0::sub_019683f0(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_01968400 { unsigned sub_01968400(void); };

// @baa 0x01968400
unsigned C_01968400::sub_01968400(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_01968410 {
    uint sub_01968410();
};

// @baa 0x01968410
uint C_01968410::sub_01968410(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_01968420 {
    uint sub_01968420();
};

// @baa 0x01968420
uint C_01968420::sub_01968420(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_01968430 {
    void sub_01968430(uint);
};

// @baa 0x01968430
void C_01968430::sub_01968430(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_01968500 { void sub_01968500(void); };

// @baa 0x01968500
void C_01968500::sub_01968500(void) { *(int*)((char*)this + 0) = -2; }

struct C_019685c0 {
    void sub_019685c0(int *);
};

// @baa 0x019685c0
void C_019685c0::sub_019685c0(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_2;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = *(undefined4 *)param_2[1];
  return;
}

struct C_019685f0 {
    uint sub_019685f0();
};

// @baa 0x019685f0
uint C_019685f0::sub_019685f0(void)
{
    int * param_1 = (int *)this;

  uint uVar1;
  
  uVar1 = *(uint *)*param_1;
  return uVar1 >> 6 ^ ((uint *)*param_1)[2] ^ uVar1;
}

// @baa 0x01968600
void __stdcall sub_01968600(int a0) {  }

struct C_01968630 {
    uint sub_01968630();
};

// @baa 0x01968630
uint C_01968630::sub_01968630(void)
{
    uint * param_1 = (uint *)this;

  return *param_1 >> 6 ^ param_1[2] ^ *param_1;
}

struct C_019686f0 {
    void sub_019686f0(undefined4 *);
};

// @baa 0x019686f0
void C_019686f0::sub_019686f0(undefined4 * param_2)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    *param_2 = *(undefined4 *)(iVar1 + 0x10);
    param_2[1] = *(undefined4 *)(iVar1 + 0x14);
    param_2[2] = *(undefined4 *)(iVar1 + 0x18);
    param_2[3] = *(undefined4 *)(iVar1 + 0x1c);
  }
  return;
}

struct C_01968750 {
    void sub_01968750();
};

// @baa 0x01968750
void C_01968750::sub_01968750(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  return;
}

struct C_01968770 { int sub_01968770(void); };

// @baa 0x01968770
int C_01968770::sub_01968770(void) { return *(int*)((char*)this + 60); }

struct C_01968780 {
    int sub_01968780(uint);
};

// @baa 0x01968780
int C_01968780::sub_01968780(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0x48) + (param_2 >> 4) * 4) + (param_2 & 0xf) * 8;
}

struct C_019687d0 { C_019687d0* sub_019687d0(void); };

// @baa 0x019687d0
C_019687d0* C_019687d0::sub_019687d0(void) { return this; }

// @baa 0x01968c90
int sub_01968c90(int a0) { return a0; }

void sub_01968b70();
// @baa 0x01968e20
void sub_01968e20(void) { sub_01968b70(); }

// @baa 0x01968e90
void sub_01968e90(void) { sub_01968b70(); }

struct C_01968f10 {
    uint sub_01968f10(uint);
};

// @baa 0x01968f10
uint C_01968f10::sub_01968f10(uint param_2)
{
    int param_1 = (int)this;

  return (*(uint *)(param_1 + 4) >> 6 ^ *(uint *)(param_1 + 0xc) ^ *(uint *)(param_1 + 4)) & param_2
  ;
}

// @baa 0x01969770
void sub_01969770(void) { sub_01968b70(); }

void sub_01968ea0();
// @baa 0x01969780
void sub_01969780(void) { sub_01968ea0(); }

void sub_01969ff0();
// @baa 0x0196a260
void sub_0196a260(void) { sub_01969ff0(); }

void sub_018d3de0();
// @baa 0x0196a780
void sub_0196a780(void) { sub_018d3de0(); }

extern char g_023f5994[];
struct C_0196a790 { void sub_0196a790(void); };

// @baa 0x0196a790
void C_0196a790::sub_0196a790(void) { *(int*)((char*)this + 0) = (int)g_023f5994; }

// @baa 0x0196a7d0
int __stdcall sub_0196a7d0(int a0) { return 2; }

struct C_0196a800 { C_0196a800* sub_0196a800(void); };

// @baa 0x0196a800
C_0196a800* C_0196a800::sub_0196a800(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_0196a870 { int sub_0196a870(void); };

// @baa 0x0196a870
int C_0196a870::sub_0196a870(void) { return *(int*)((char*)this + 0); }

extern char g_023f9e84[];
struct C_0196aa10 { C_0196aa10* sub_0196aa10(void); };

// @baa 0x0196aa10
C_0196aa10* C_0196aa10::sub_0196aa10(void) { *(int*)((char*)this + 0) = (int)g_023f9e84; return this; }

struct C_0196aa20 {
    undefined4 * sub_0196aa20(byte);
};

int sub_00402660(...);
// @baa 0x0196aa20
undefined4 * C_0196aa20::sub_0196aa20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f5994));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0196abb0 {
    undefined4 sub_0196abb0();
};

// @baa 0x0196abb0
undefined4 C_0196abb0::sub_0196abb0(void)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + 4);
}

struct C_0196abc0 {
    uint sub_0196abc0();
};

// @baa 0x0196abc0
uint C_0196abc0::sub_0196abc0(void)
{
    int * param_1 = (int *)this;

  return *(uint *)(*param_1 + 0x10) >> 0x1d & 1;
}

struct C_0196abd0 {
    uint sub_0196abd0();
};

// @baa 0x0196abd0
uint C_0196abd0::sub_0196abd0(void)
{
    int * param_1 = (int *)this;

  return *(uint *)(*param_1 + 0x10) >> 0x1c & 1;
}

struct C_0196ac60 { char* sub_0196ac60(void); };

// @baa 0x0196ac60
char* C_0196ac60::sub_0196ac60(void) { return (char*)this + 20; }

struct C_0196acc0 {
    uint sub_0196acc0();
};

// @baa 0x0196acc0
uint C_0196acc0::sub_0196acc0(void)
{
    uint * param_1 = (uint *)this;

  uint uVar1;
  
  uVar1 = param_1[1];
  if ((*param_1 & 0x20000) != 0) {
    uVar1 = uVar1 ^ (int)(short)param_1[2];
  }
  return uVar1;
}

struct C_0196ad00 { int sub_0196ad00(void); };

// @baa 0x0196ad00
int C_0196ad00::sub_0196ad00(void) { return *(int*)((char*)this + 0); }

struct C_0196ad10 {
    bool sub_0196ad10();
};

// @baa 0x0196ad10
bool C_0196ad10::sub_0196ad10(void)
{
    char * param_1 = (char *)this;

  return *param_1 == '\t';
}

struct C_0196ad20 {
    void sub_0196ad20(char);
};

// @baa 0x0196ad20
void C_0196ad20::sub_0196ad20(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) | 2;
    return;
  }
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xfd;
  return;
}

struct C_0196ada0 { char* sub_0196ada0(void); };

// @baa 0x0196ada0
char* C_0196ada0::sub_0196ada0(void) { return (char*)this + 8; }

struct C_0196adb0 {
    void sub_0196adb0(char);
};

// @baa 0x0196adb0
void C_0196adb0::sub_0196adb0(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) | 2;
    return;
  }
  *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) & 0xfffd;
  return;
}

struct C_0196add0 {
    void sub_0196add0();
};

// @baa 0x0196add0
void C_0196add0::sub_0196add0(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) & 0xfffd;
  return;
}

struct C_0196ade0 {
    void sub_0196ade0(char);
};

// @baa 0x0196ade0
void C_0196ade0::sub_0196ade0(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) | 0x1000;
    return;
  }
  *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) & 0xefff;
  return;
}

struct C_0196ae00 {
    void sub_0196ae00(char);
};

// @baa 0x0196ae00
void C_0196ae00::sub_0196ae00(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) | 0x2000;
    return;
  }
  *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) & 0xdfff;
  return;
}

struct C_0196ae20 {
    ushort sub_0196ae20();
};

// @baa 0x0196ae20
ushort C_0196ae20::sub_0196ae20(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 0x8c) >> 0xd & 1;
}

struct C_0196ae30 {
    void sub_0196ae30(char);
};

// @baa 0x0196ae30
void C_0196ae30::sub_0196ae30(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) | 0x10;
    return;
  }
  *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) & 0xffef;
  return;
}

struct C_0196ae50 {
    void sub_0196ae50(char);
};

// @baa 0x0196ae50
void C_0196ae50::sub_0196ae50(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) | 0x4000;
    return;
  }
  *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) & 0xbfff;
  return;
}

struct C_0196ae70 {
    void sub_0196ae70();
};

// @baa 0x0196ae70
void C_0196ae70::sub_0196ae70(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) & 0xbfff;
  return;
}

struct C_0196ae80 {
    void sub_0196ae80(char);
};

// @baa 0x0196ae80
void C_0196ae80::sub_0196ae80(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) | 0x60;
    return;
  }
  *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) & 0xffdf | 0x40;
  return;
}

struct C_0196aeb0 {
    bool sub_0196aeb0();
};

// @baa 0x0196aeb0
bool C_0196aeb0::sub_0196aeb0(void)
{
    int param_1 = (int)this;

  return (*(ushort *)(param_1 + 0x8c) & 0x180) != 0;
}

struct C_0196aef0 {
    void sub_0196aef0(char);
};

// @baa 0x0196aef0
void C_0196aef0::sub_0196aef0(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) | 0x600;
    return;
  }
  *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) & 0xfdff | 0x400;
  return;
}

struct C_0196af20 {
    void sub_0196af20();
};

// @baa 0x0196af20
void C_0196af20::sub_0196af20(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) & 63999;
  return;
}

struct C_0196af30 {
    bool sub_0196af30();
};

// @baa 0x0196af30
bool C_0196af30::sub_0196af30(void)
{
    int param_1 = (int)this;

  return (*(ushort *)(param_1 + 0x8c) & 0x600) != 0;
}

struct C_0196af70 {
    ushort sub_0196af70();
};

// @baa 0x0196af70
ushort C_0196af70::sub_0196af70(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 0x8c) >> 0xd & 1;
}

struct C_0196af80 {
    byte sub_0196af80();
};

// @baa 0x0196af80
byte C_0196af80::sub_0196af80(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x8c) >> 4 & 1;
}

// @baa 0x0196aff0
void sub_0196aff0(void) { sub_018d3de0(); }

extern char g_023fa37c[];
struct C_0196b000 { C_0196b000* sub_0196b000(void); };

// @baa 0x0196b000
C_0196b000* C_0196b000::sub_0196b000(void) { *(int*)((char*)this + 0) = (int)g_023fa37c; return this; }

struct C_0196b300 {
    void sub_0196b300();
};

// @baa 0x0196b300
void C_0196b300::sub_0196b300(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xf3;
  return;
}

struct C_0196b340 { void sub_0196b340(void); };

// @baa 0x0196b340
void C_0196b340::sub_0196b340(void) { *(int*)((char*)this + 4) = 0; }

struct C_0196b740 { void sub_0196b740(void); };

// @baa 0x0196b740
void C_0196b740::sub_0196b740(void) { *(int*)((char*)this + 0) = (int)g_023fa37c; }

// @baa 0x0196b750
undefined1 sub_0196b750(void)
{
  return 1;
}

struct C_0196b780 { C_0196b780* sub_0196b780(void); };

// @baa 0x0196b780
C_0196b780* C_0196b780::sub_0196b780(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_0196b7d0 {
    undefined4 sub_0196b7d0();
};

// @baa 0x0196b7d0
undefined4 C_0196b7d0::sub_0196b7d0(void)
{
    int * param_1 = (int *)this;

  if (((int *)*param_1 != (int *)0x0) && (*(int *)*param_1 != 0)) {
    return 0;
  }
  return 1;
}

struct C_0196b7f0 {
    undefined4 sub_0196b7f0();
};

// @baa 0x0196b7f0
undefined4 C_0196b7f0::sub_0196b7f0(void)
{
    int * param_1 = (int *)this;

  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    return 0;
  }
  return *(undefined4 *)*param_1;
}

struct C_0196b800 {
    undefined4 sub_0196b800();
};

// @baa 0x0196b800
undefined4 C_0196b800::sub_0196b800(void)
{
    int * param_1 = (int *)this;

  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    return 0;
  }
  return *(undefined4 *)*param_1;
}

struct C_0196b860 {
    bool sub_0196b860();
};

// @baa 0x0196b860
bool C_0196b860::sub_0196b860(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

void sub_01995240();
// @baa 0x0196b920
void sub_0196b920(void) { sub_01995240(); }

// @baa 0x0196b930
undefined1 sub_0196b930(void)
{
  return 0;
}

struct C_0196b990 {
    undefined4 sub_0196b990();
};

// @baa 0x0196b990
undefined4 C_0196b990::sub_0196b990(void)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + 0x10);
}

struct C_0196b9a0 {
    uint sub_0196b9a0();
};

// @baa 0x0196b9a0
uint C_0196b9a0::sub_0196b9a0(void)
{
    int * param_1 = (int *)this;

  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)*param_1;
  uVar2 = puVar1[1];
  if ((*puVar1 & 0x20000) != 0) {
    uVar2 = uVar2 ^ (int)(short)puVar1[2];
  }
  return uVar2;
}

struct C_0196b9c0 {
    undefined4 sub_0196b9c0();
};

// @baa 0x0196b9c0
undefined4 C_0196b9c0::sub_0196b9c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(undefined4 *)(*(int *)*param_1 + 0x10);
}

// @baa 0x0196b9d0
void __stdcall sub_0196b9d0(int a0) {  }

// @baa 0x0196b9e0
void __stdcall sub_0196b9e0(int a0) {  }

struct C_0196ba10 { int sub_0196ba10(void); };

// @baa 0x0196ba10
int C_0196ba10::sub_0196ba10(void) { return *(int*)((char*)this + 0); }

// @baa 0x0196ba20
uint sub_0196ba20(uint * param_1)
{
  uint uVar1;
  
  uVar1 = param_1[1];
  if ((*param_1 & 0x20000) != 0) {
    uVar1 = uVar1 ^ (int)(short)param_1[2];
  }
  return uVar1;
}

struct C_0196ba40 {
    undefined4 sub_0196ba40(uint *);
};

// @baa 0x0196ba40
undefined4 C_0196ba40::sub_0196ba40(uint * param_2)
{
    uint * param_1 = (uint *)this;

  if ((*param_1 == *param_2) &&
     (((*param_1 & 0x20000) == 0 || ((short)param_1[2] == (short)param_2[2])))) {
    return 1;
  }
  return 0;
}

// @baa 0x0196ba70
undefined4 sub_0196ba70(int * param_1)
{
  return *(undefined4 *)(*param_1 + 0x10);
}

// @baa 0x0196baa0
undefined4 sub_0196baa0(undefined4 * param_1)
{
  return *(undefined4 *)(*(int *)*param_1 + 0x10);
}

// @baa 0x0196bb90
void sub_0196bb90(void) {  }

// @baa 0x0196bba0
undefined1 sub_0196bba0(void)
{
  return 1;
}

// @baa 0x0196bbb0
int sub_0196bbb0(void) { return 0; }

// @baa 0x0196bbc0
undefined1 sub_0196bbc0(void)
{
  return 1;
}

// @baa 0x0196bbd0
void __stdcall sub_0196bbd0(int a0) {  }

// @baa 0x0196bbe0
void __stdcall sub_0196bbe0(int a0) {  }

// @baa 0x0196bbf0
void __stdcall sub_0196bbf0(int a0) {  }

// @baa 0x0196bc00
undefined1 sub_0196bc00(void)
{
  return 0;
}

// @baa 0x0196bc10
void __stdcall sub_0196bc10(int a0) {  }

// @baa 0x0196bc20
undefined1 sub_0196bc20(void)
{
  return 0;
}

struct C_0196bc40 {
    undefined4 * sub_0196bc40(byte);
};

// @baa 0x0196bc40
undefined4 * C_0196bc40::sub_0196bc40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023fa37c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0196c390 { int sub_0196c390(void); };

// @baa 0x0196c390
int C_0196c390::sub_0196c390(void) { return *(int*)((char*)this + 108); }

void sub_0196bc60();
// @baa 0x0196c3d0
void sub_0196c3d0(void) { sub_0196bc60(); }

struct C_0196c4c0 {
    int sub_0196c4c0();
};

// @baa 0x0196c4c0
int C_0196c4c0::sub_0196c4c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[1] * 0x20 + 0xc + *(int *)*param_1;
}

struct C_0196c6d0 {
    uint sub_0196c6d0(uint);
};

// @baa 0x0196c6d0
uint C_0196c6d0::sub_0196c6d0(uint param_2)
{
    int param_1 = (int)this;

  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((*(uint *)(param_1 + 4) & 0x20000) != 0) {
    uVar1 = uVar1 ^ (int)*(short *)(param_1 + 0xc);
  }
  return uVar1 & param_2;
}

struct C_0196c730 {
    uint sub_0196c730(uint);
};

// @baa 0x0196c730
uint C_0196c730::sub_0196c730(uint param_2)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 4) + 0x10) & param_2;
}

struct C_0196c740 {
    undefined4 sub_0196c740(undefined4 *);
};

// @baa 0x0196c740
undefined4 C_0196c740::sub_0196c740(undefined4 * param_2)
{
    uint * param_1 = (uint *)this;

  if ((*param_1 == *(uint *)*param_2) &&
     (((*param_1 & 0x20000) == 0 || ((short)param_1[2] == (short)((uint *)*param_2)[2])))) {
    return 1;
  }
  return 0;
}

void sub_0196ea80();
// @baa 0x0196ed10
void sub_0196ed10(void) { sub_0196ea80(); }

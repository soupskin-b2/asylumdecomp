// GFx_1950000.cpp (part 1 of 3): 181 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    uint sub_01950020(uint);
};

// @baa 0x01950020
uint C::sub_01950020(uint param_2)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 4) + 0x10) & param_2;
}

void sub_0194f130();
// @baa 0x01951940
void sub_01951940(void) { sub_0194f130(); }

void sub_0194f1f0();
// @baa 0x01951950
void sub_01951950(void) { sub_0194f1f0(); }

void sub_0194f2c0();
// @baa 0x019519a0
void sub_019519a0(void) { sub_0194f2c0(); }

void sub_0194f390();
// @baa 0x019519b0
void sub_019519b0(void) { sub_0194f390(); }

void sub_0194f460();
// @baa 0x01951a10
void sub_01951a10(void) { sub_0194f460(); }

void sub_0194f530();
// @baa 0x01951a20
void sub_01951a20(void) { sub_0194f530(); }

void sub_019519c0();
// @baa 0x01951ae0
void sub_01951ae0(void) { sub_019519c0(); }

void sub_0194f620();
// @baa 0x01951af0
void sub_01951af0(void) { sub_0194f620(); }

void sub_0194f6f0();
// @baa 0x01951b00
void sub_01951b00(void) { sub_0194f6f0(); }

// @baa 0x01953850
void sub_01953850(void) { sub_019519c0(); }

void sub_01951b70();
// @baa 0x01953860
void sub_01953860(void) { sub_01951b70(); }

struct C_01953940 {
    void sub_01953940(int);
};

int sub_019538f0(void);
extern "C" __declspec(dllimport) int memmove(...);
// @baa 0x01953940
void C_01953940::sub_01953940(int param_2)
{
    int * param_1 = (int *)this;

  void *_Dst;
  
  if (param_1[1] == 1) {
    sub_019538f0();
    return;
  }
  _Dst = (void *)(*param_1 + param_2 * 4);
  memmove(_Dst,(void *)((int)_Dst + 4),(param_1[1] - param_2) * 4 - 4);
  param_1[1] = param_1[1] + -1;
  return;
}

struct C_01953b50 { C_01953b50* sub_01953b50(void); };

// @baa 0x01953b50
C_01953b50* C_01953b50::sub_01953b50(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01953b60
void sub_01953b60(void) { sub_019519c0(); }

void sub_019539a0();
// @baa 0x01954820
void sub_01954820(void) { sub_019539a0(); }

void sub_01953a00();
// @baa 0x01954830
void sub_01954830(void) { sub_01953a00(); }

void sub_01953a50();
// @baa 0x01954840
void sub_01954840(void) { sub_01953a50(); }

void sub_01953ad0();
// @baa 0x01954950
void sub_01954950(void) { sub_01953ad0(); }

struct C_019549d0 { C_019549d0* sub_019549d0(void); };

// @baa 0x019549d0
C_019549d0* C_019549d0::sub_019549d0(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x019549e0
void sub_019549e0(void) { sub_019519c0(); }

struct C_01955520 { C_01955520* sub_01955520(void); };

// @baa 0x01955520
C_01955520* C_01955520::sub_01955520(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01955530
void sub_01955530(void) { sub_019519c0(); }

void sub_01954a50();
// @baa 0x019555d0
void sub_019555d0(void) { sub_01954a50(); }

void sub_01955bc0();
// @baa 0x01955dd0
void sub_01955dd0(void) { sub_01955bc0(); }

struct C_019569a0 {
    undefined4 sub_019569a0(byte);
};

int sub_00402660(...);
int sub_019553c0(void);
// @baa 0x019569a0
undefined4 C_019569a0::sub_019569a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_019553c0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01957150 { C_01957150* sub_01957150(void); };

// @baa 0x01957150
C_01957150* C_01957150::sub_01957150(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01957160
void sub_01957160(void) { sub_01954a50(); }

struct C_01957a70 { C_01957a70* sub_01957a70(void); };

// @baa 0x01957a70
C_01957a70* C_01957a70::sub_01957a70(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01957a80
void sub_01957a80(void) { sub_01954a50(); }

struct C_0195a070 { C_0195a070* sub_0195a070(void); };

// @baa 0x0195a070
C_0195a070* C_0195a070::sub_0195a070(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x0195a080
void sub_0195a080(void) { sub_01954a50(); }

struct C_0195a510 {
    void sub_0195a510(uint);
};

// @baa 0x0195a510
void C_0195a510::sub_0195a510(uint param_2)
{
    int param_1 = (int)this;

  if (4 < param_2) {
    param_2 = 4;
  }
  *(uint *)(param_1 + 0x9b8) = param_2;
  return;
}

struct C_0195a530 { int sub_0195a530(void); };

// @baa 0x0195a530
int C_0195a530::sub_0195a530(void) { return *(int*)((char*)this + 2488); }

struct C_0195a540 { int sub_0195a540(void); };

// @baa 0x0195a540
int C_0195a540::sub_0195a540(void) { return *(int*)((char*)this + 128); }

struct C_0195a550 { int sub_0195a550(void); };

// @baa 0x0195a550
int C_0195a550::sub_0195a550(void) { return *(int*)((char*)this + 132); }

struct C_0195a560 {
    void sub_0195a560(undefined1);
};

// @baa 0x0195a560
void C_0195a560::sub_0195a560(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0xe4) = param_2;
  return;
}

struct C_0195a570 {
    void sub_0195a570(undefined1);
};

// @baa 0x0195a570
void C_0195a570::sub_0195a570(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0xe8) = param_2;
  return;
}

struct C_0195a580 { void sub_0195a580(int a0); };

// @baa 0x0195a580
void C_0195a580::sub_0195a580(int a0) { *(int*)((char*)this + 2292) = a0; }

struct C_0195a5b0 { int sub_0195a5b0(void); };

// @baa 0x0195a5b0
int C_0195a5b0::sub_0195a5b0(void) { return *(int*)((char*)this + 2492); }

struct C_0195a5c0 { void sub_0195a5c0(int a0); };

// @baa 0x0195a5c0
void C_0195a5c0::sub_0195a5c0(int a0) { *(int*)((char*)this + 2492) = a0; }

struct C_0195a5d0 {
    undefined1 sub_0195a5d0();
};

// @baa 0x0195a5d0
undefined1 C_0195a5d0::sub_0195a5d0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0xae9);
}

struct C_0195a600 {
    int sub_0195a600();
};

// @baa 0x0195a600
int C_0195a600::sub_0195a600(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0xb0) != 0) {
    return *(int *)(param_1 + 0xb0) + 0x10;
  }
  return 0;
}

// @baa 0x0195afb0
void __stdcall sub_0195afb0(int a0, int a1) {  }

struct C_0195b020 {
    uint sub_0195b020();
};

// @baa 0x0195b020
uint C_0195b020::sub_0195b020(void)
{
    int * param_1 = (int *)this;

  return *(uint *)(*param_1 + 0x10) >> 0x1f;
}

struct C_0195b030 {
    bool sub_0195b030(int *);
};

// @baa 0x0195b030
bool C_0195b030::sub_0195b030(int * param_2)
{
    int * param_1 = (int *)this;

  return *(int *)(*param_1 + 8) == *(int *)(*param_2 + 8);
}

struct C_0195b090 {
    bool sub_0195b090();
};

// @baa 0x0195b090
bool C_0195b090::sub_0195b090(void)
{
    char * param_1 = (char *)this;

  return *param_1 != '\0';
}

struct C_0195b0a0 {
    bool sub_0195b0a0();
};

// @baa 0x0195b0a0
bool C_0195b0a0::sub_0195b0a0(void)
{
    char * param_1 = (char *)this;

  return *param_1 == '\x02';
}

struct C_0195b0b0 {
    bool sub_0195b0b0();
};

// @baa 0x0195b0b0
bool C_0195b0b0::sub_0195b0b0(void)
{
    uint * param_1 = (uint *)this;

  return (*param_1 & 0x3fc00) != 0;
}

struct C_0195b0c0 {
    bool sub_0195b0c0();
};

// @baa 0x0195b0c0
bool C_0195b0c0::sub_0195b0c0(void)
{
    char * param_1 = (char *)this;

  return *param_1 == '\a';
}

struct C_0195b0d0 {
    undefined4 sub_0195b0d0();
};

// @baa 0x0195b0d0
undefined4 C_0195b0d0::sub_0195b0d0(void)
{
    char * param_1 = (char *)this;

  if ((*param_1 != '\x03') && (*param_1 != '\x04')) {
    return 0;
  }
  return 1;
}

extern char g_023f9644[];
struct C_0195b0f0 { void sub_0195b0f0(void); };

// @baa 0x0195b0f0
void C_0195b0f0::sub_0195b0f0(void) { *(int*)((char*)this + 0) = (int)g_023f9644; }

struct C_0195b140 {
    undefined4 * sub_0195b140(byte);
};

// @baa 0x0195b140
undefined4 * C_0195b140::sub_0195b140(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f9644));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0195b170 { int sub_0195b170(void); };

// @baa 0x0195b170
int C_0195b170::sub_0195b170(void) { return *(int*)((char*)this + 4); }

struct C_0195b180 {
    undefined4 sub_0195b180(int);
};

// @baa 0x0195b180
undefined4 C_0195b180::sub_0195b180(int param_2)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + param_2 * 4);
}

struct C_0195b190 {
    undefined4 sub_0195b190(int *);
};

// @baa 0x0195b190
undefined4 C_0195b190::sub_0195b190(int * param_2)
{
    int * param_1 = (int *)this;

  if ((param_1[1] == param_2[1]) && (*param_1 == *param_2)) {
    return 1;
  }
  return 0;
}

struct C_0195b1c0 {
    int sub_0195b1c0(int);
};

// @baa 0x0195b1c0
int C_0195b1c0::sub_0195b1c0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x14) + param_2 * 8;
}

struct C_0195b1d0 { char* sub_0195b1d0(void); };

// @baa 0x0195b1d0
char* C_0195b1d0::sub_0195b1d0(void) { return (char*)this + 40; }

struct C_0195b1e0 {
    void sub_0195b1e0(undefined2);
};

// @baa 0x0195b1e0
void C_0195b1e0::sub_0195b1e0(undefined2 param_2)
{
    int param_1 = (int)this;

  *(undefined2 *)(param_1 + 0x68) = param_2;
  return;
}

struct C_0195b1f0 {
    void sub_0195b1f0(char);
};

// @baa 0x0195b1f0
void C_0195b1f0::sub_0195b1f0(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) | 1;
    return;
  }
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xfe;
  return;
}

struct C_0195b210 {
    byte sub_0195b210();
};

// @baa 0x0195b210
byte C_0195b210::sub_0195b210(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x6a) >> 1 & 1;
}

struct C_0195b240 {
    bool sub_0195b240();
};

// @baa 0x0195b240
bool C_0195b240::sub_0195b240(void)
{
    int param_1 = (int)this;

  return (*(byte *)(param_1 + 0x8c) & 0xc) != 0;
}

struct C_0195b250 {
    void sub_0195b250(char);
};

// @baa 0x0195b250
void C_0195b250::sub_0195b250(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) | 8;
    return;
  }
  *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) & 0xfff7;
  return;
}

struct C_0195b270 {
    byte sub_0195b270();
};

// @baa 0x0195b270
byte C_0195b270::sub_0195b270(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x8c) >> 4 & 1;
}

struct C_0195b280 {
    void sub_0195b280(char);
};

// @baa 0x0195b280
void C_0195b280::sub_0195b280(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) | 0x180;
    return;
  }
  *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) & 0xff7f | 0x100;
  return;
}

struct C_0195b2b0 {
    void sub_0195b2b0(char);
};

// @baa 0x0195b2b0
void C_0195b2b0::sub_0195b2b0(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) | 0x8000;
    return;
  }
  *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) & 0x7fff;
  return;
}

struct C_0195b300 {
    bool sub_0195b300();
};

// @baa 0x0195b300
bool C_0195b300::sub_0195b300(void)
{
    int param_1 = (int)this;

  return 0 < *(int *)(param_1 + 0x80);
}

struct C_0195b310 { C_0195b310* sub_0195b310(void); };

// @baa 0x0195b310
C_0195b310* C_0195b310::sub_0195b310(void) { *(int*)((char*)this + 8) = 0; return this; }

struct C_0195b330 {
    bool sub_0195b330();
};

// @baa 0x0195b330
bool C_0195b330::sub_0195b330(void)
{
    int param_1 = (int)this;

  return 6 < *(byte *)(param_1 + 0x7c);
}

extern char g_023f9650[];
struct C_0195b340 { C_0195b340* sub_0195b340(void); };

// @baa 0x0195b340
C_0195b340* C_0195b340::sub_0195b340(void) { *(int*)((char*)this + 0) = (int)g_023f9650; return this; }

struct C_0195b380 { int sub_0195b380(void); };

// @baa 0x0195b380
int C_0195b380::sub_0195b380(void) { return *(int*)((char*)this + 44); }

struct C_0195b390 {
    bool sub_0195b390();
};

// @baa 0x0195b390
bool C_0195b390::sub_0195b390(void)
{
    int param_1 = (int)this;

  return (*(byte *)(param_1 + 0x30) & 7) != 0;
}

struct C_0195b3a0 {
    byte sub_0195b3a0();
};

// @baa 0x0195b3a0
byte C_0195b3a0::sub_0195b3a0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x30) & 1;
}

struct C_0195b3b0 {
    byte sub_0195b3b0();
};

// @baa 0x0195b3b0
byte C_0195b3b0::sub_0195b3b0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x30) >> 1 & 1;
}

struct C_0195b3c0 {
    byte sub_0195b3c0();
};

// @baa 0x0195b3c0
byte C_0195b3c0::sub_0195b3c0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x30) >> 2 & 1;
}

struct C_0195b530 {
    byte sub_0195b530();
};

// @baa 0x0195b530
byte C_0195b530::sub_0195b530(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x1c8) >> 3 & 1;
}

struct C_0195b540 {
    byte sub_0195b540();
};

// @baa 0x0195b540
byte C_0195b540::sub_0195b540(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x1c8) >> 5 & 1;
}

struct C_0195b550 {
    byte sub_0195b550();
};

// @baa 0x0195b550
byte C_0195b550::sub_0195b550(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x1c8) >> 4 & 1;
}

struct C_0195b560 {
    byte sub_0195b560();
};

// @baa 0x0195b560
byte C_0195b560::sub_0195b560(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x1c8) >> 2 & 1;
}

struct C_0195b570 { int sub_0195b570(void); };

// @baa 0x0195b570
int C_0195b570::sub_0195b570(void) { return *(int*)((char*)this + 448); }

struct C_0195b580 { void sub_0195b580(int a0); };

// @baa 0x0195b580
void C_0195b580::sub_0195b580(int a0) { *(int*)((char*)this + 448) = a0; }

void sub_0196b5e0();
// @baa 0x0195b590
void sub_0195b590(void) { sub_0196b5e0(); }

struct C_0195b5b0 {
    void sub_0195b5b0(undefined1);
};

// @baa 0x0195b5b0
void C_0195b5b0::sub_0195b5b0(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x39) = param_2;
  return;
}

struct C_0195b5c0 {
    undefined4 sub_0195b5c0(int);
};

// @baa 0x0195b5c0
undefined4 C_0195b5c0::sub_0195b5c0(int param_2)
{
    int param_1 = (int)this;

  return *(undefined4 *)(param_1 + 4 + param_2 * 0xc);
}

struct C_0195b5d0 {
    undefined4 sub_0195b5d0(int, undefined4);
};

// @baa 0x0195b5d0
undefined4 C_0195b5d0::sub_0195b5d0(int param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(param_1 + 4 + param_2 * 0xc);
  uVar2 = *puVar1;
  *puVar1 = param_3;
  return uVar2;
}

struct C_0195b5f0 { void sub_0195b5f0(int a0); };

// @baa 0x0195b5f0
void C_0195b5f0::sub_0195b5f0(int a0) { *(int*)((char*)this + 92) = a0; }

struct C_0195b610 {
    undefined1 sub_0195b610();
};

// @baa 0x0195b610
undefined1 C_0195b610::sub_0195b610(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x9cb);
}

struct C_0195b620 {
    undefined1 sub_0195b620();
};

// @baa 0x0195b620
undefined1 C_0195b620::sub_0195b620(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0xab4);
}

struct C_0195b630 {
    void sub_0195b630(undefined4);
};

// @baa 0x0195b630
void C_0195b630::sub_0195b630(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x2e4) = 1;
  *(undefined4 *)(param_1 + 0x2e8) = param_2;
  return;
}

struct C_0195b650 {
    void sub_0195b650();
};

// @baa 0x0195b650
void C_0195b650::sub_0195b650(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  return;
}

struct C_0195b6e0 {
    void sub_0195b6e0();
};

// @baa 0x0195b6e0
void C_0195b6e0::sub_0195b6e0(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(*(int *)(param_1 + 0x9c) + 0x9ca) = 1;
  return;
}

struct C_0195b740 { int sub_0195b740(void); };

// @baa 0x0195b740
int C_0195b740::sub_0195b740(void) { return *(int*)((char*)this + 156); }

// @baa 0x0195b880
void __stdcall sub_0195b880(int a0) {  }

struct C_0195b8c0 { void sub_0195b8c0(void); };

// @baa 0x0195b8c0
void C_0195b8c0::sub_0195b8c0(void) { *(int*)((char*)this + 0) = (int)g_023f9644; }

struct C_0195b8d0 { C_0195b8d0* sub_0195b8d0(void); };

// @baa 0x0195b8d0
C_0195b8d0* C_0195b8d0::sub_0195b8d0(void) { *(int*)((char*)this + 0) = (int)g_023f9644; return this; }

// @baa 0x0195ba20
undefined4 sub_0195ba20(void)
{
  return 0xffffffff;
}

// @baa 0x0195bc30
void sub_0195bc30(void) {  }

struct C_0195c3b0 {
    void sub_0195c3b0();
};

// @baa 0x0195c3b0
void C_0195c3b0::sub_0195c3b0(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  return;
}

struct C_0195c5c0 { int sub_0195c5c0(void); };

// @baa 0x0195c5c0
int C_0195c5c0::sub_0195c5c0(void) { return *(int*)((char*)this + 0); }

struct C_0195c5d0 {
    int sub_0195c5d0(int);
};

// @baa 0x0195c5d0
int C_0195c5d0::sub_0195c5d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_0195c5e0 {
    int sub_0195c5e0(int);
};

// @baa 0x0195c5e0
int C_0195c5e0::sub_0195c5e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_0195c5f0 { int sub_0195c5f0(void); };

// @baa 0x0195c5f0
int C_0195c5f0::sub_0195c5f0(void) { return *(int*)((char*)this + 4); }

struct C_0195c600 { C_0195c600* sub_0195c600(void); };

// @baa 0x0195c600
C_0195c600* C_0195c600::sub_0195c600(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_0195c630 { void sub_0195c630(void); };

// @baa 0x0195c630
void C_0195c630::sub_0195c630(void) { *(int*)((char*)this + 0) = (int)g_023f9650; }

// @baa 0x0195c640
undefined1 sub_0195c640(void)
{
  return 1;
}

struct C_0195c680 { int sub_0195c680(void); };

// @baa 0x0195c680
int C_0195c680::sub_0195c680(void) { return *(int*)((char*)this + 0); }

struct C_0195c690 { int sub_0195c690(void); };

// @baa 0x0195c690
int C_0195c690::sub_0195c690(void) { return *(int*)((char*)this + 0); }

struct C_0195c6a0 {
    int sub_0195c6a0(int);
};

// @baa 0x0195c6a0
int C_0195c6a0::sub_0195c6a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2;
}

struct C_0195c6b0 { C_0195c6b0* sub_0195c6b0(void); };

// @baa 0x0195c6b0
C_0195c6b0* C_0195c6b0::sub_0195c6b0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_0195c730 { int sub_0195c730(void); };

// @baa 0x0195c730
int C_0195c730::sub_0195c730(void) { return *(int*)((char*)this + 0); }

struct C_0195c740 { int sub_0195c740(void); };

// @baa 0x0195c740
int C_0195c740::sub_0195c740(void) { return *(int*)((char*)this + 0); }

struct C_0195c750 { int sub_0195c750(void); };

// @baa 0x0195c750
int C_0195c750::sub_0195c750(void) { return *(int*)((char*)this + 0); }

struct C_0195c780 {
    bool sub_0195c780(int);
};

// @baa 0x0195c780
bool C_0195c780::sub_0195c780(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 == param_2;
}

struct C_0195c790 { C_0195c790* sub_0195c790(void); };

// @baa 0x0195c790
C_0195c790* C_0195c790::sub_0195c790(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_0195c7f0 { int sub_0195c7f0(void); };

// @baa 0x0195c7f0
int C_0195c7f0::sub_0195c7f0(void) { return *(int*)((char*)this + 0); }

struct C_0195c800 {
    void sub_0195c800(int *);
};

// @baa 0x0195c800
void C_0195c800::sub_0195c800(int * param_2)
{
    int param_1 = (int)this;

  param_2[1] = *(int *)(param_1 + 4);
  *param_2 = param_1;
  **(undefined4 **)(param_1 + 4) = (undefined4)(param_2);
  *(int **)(param_1 + 4) = param_2;
  return;
}

struct C_0195c840 { int sub_0195c840(void); };

// @baa 0x0195c840
int C_0195c840::sub_0195c840(void) { return *(int*)((char*)this + 0); }

struct C_0195c850 {
    int sub_0195c850(int);
};

// @baa 0x0195c850
int C_0195c850::sub_0195c850(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0195c860 { int sub_0195c860(void); };

// @baa 0x0195c860
int C_0195c860::sub_0195c860(void) { return *(int*)((char*)this + 4); }

struct C_0195c870 { int sub_0195c870(void); };

// @baa 0x0195c870
int C_0195c870::sub_0195c870(void) { return *(int*)((char*)this + 0); }

struct C_0195c880 {
    int sub_0195c880(int);
};

// @baa 0x0195c880
int C_0195c880::sub_0195c880(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0195c890 {
    float10 sub_0195c890();
};

// @baa 0x0195c890
float10 C_0195c890::sub_0195c890(void)
{
    double * param_1 = (double *)this;

  return (float10)param_1[2] - (float10)*param_1;
}

struct C_0195c8a0 {
    float10 sub_0195c8a0();
};

// @baa 0x0195c8a0
float10 C_0195c8a0::sub_0195c8a0(void)
{
    int param_1 = (int)this;

  return (float10)*(double *)(param_1 + 0x18) - (float10)*(double *)(param_1 + 8);
}

struct C_0195c8e0 { int sub_0195c8e0(void); };

// @baa 0x0195c8e0
int C_0195c8e0::sub_0195c8e0(void) { return *(int*)((char*)this + 0); }

struct C_0195c920 { int sub_0195c920(void); };

// @baa 0x0195c920
int C_0195c920::sub_0195c920(void) { return *(int*)((char*)this + 0); }

struct C_0195c930 { int sub_0195c930(void); };

// @baa 0x0195c930
int C_0195c930::sub_0195c930(void) { return *(int*)((char*)this + 0); }

struct C_0195c940 { int sub_0195c940(void); };

// @baa 0x0195c940
int C_0195c940::sub_0195c940(void) { return *(int*)((char*)this + 0); }

struct C_0195c9c0 {
    void sub_0195c9c0(int);
};

// @baa 0x0195c9c0
void C_0195c9c0::sub_0195c9c0(int param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = param_2;
  return;
}

struct C_0195c9e0 { int sub_0195c9e0(void); };

// @baa 0x0195c9e0
int C_0195c9e0::sub_0195c9e0(void) { return *(int*)((char*)this + 4); }

struct C_0195cb70 { unsigned sub_0195cb70(void); };

// @baa 0x0195cb70
unsigned C_0195cb70::sub_0195cb70(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_0195cb80 { unsigned sub_0195cb80(void); };

// @baa 0x0195cb80
unsigned C_0195cb80::sub_0195cb80(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_0195cb90 {
    uint sub_0195cb90();
};

// @baa 0x0195cb90
uint C_0195cb90::sub_0195cb90(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_0195cba0 {
    int sub_0195cba0(int);
};

// @baa 0x0195cba0
int C_0195cba0::sub_0195cba0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0195cbb0 {
    uint sub_0195cbb0();
};

// @baa 0x0195cbb0
uint C_0195cbb0::sub_0195cbb0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_0195cbc0 {
    void sub_0195cbc0(uint);
};

// @baa 0x0195cbc0
void C_0195cbc0::sub_0195cbc0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_0195cbe0 {
    uint sub_0195cbe0();
};

// @baa 0x0195cbe0
uint C_0195cbe0::sub_0195cbe0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_0195cbf0 {
    uint sub_0195cbf0();
};

// @baa 0x0195cbf0
uint C_0195cbf0::sub_0195cbf0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_0195cc20 { unsigned sub_0195cc20(void); };

// @baa 0x0195cc20
unsigned C_0195cc20::sub_0195cc20(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_0195cc30 { unsigned sub_0195cc30(void); };

// @baa 0x0195cc30
unsigned C_0195cc30::sub_0195cc30(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_0195cc40 {
    uint sub_0195cc40();
};

// @baa 0x0195cc40
uint C_0195cc40::sub_0195cc40(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_0195cc50 {
    void sub_0195cc50(uint);
};

// @baa 0x0195cc50
void C_0195cc50::sub_0195cc50(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_0195cc70 { unsigned sub_0195cc70(void); };

// @baa 0x0195cc70
unsigned C_0195cc70::sub_0195cc70(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_0195cc80 { unsigned sub_0195cc80(void); };

// @baa 0x0195cc80
unsigned C_0195cc80::sub_0195cc80(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_0195cc90 {
    uint sub_0195cc90();
};

// @baa 0x0195cc90
uint C_0195cc90::sub_0195cc90(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_0195cca0 {
    void sub_0195cca0(uint);
};

// @baa 0x0195cca0
void C_0195cca0::sub_0195cca0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_0195ccc0 {
    uint sub_0195ccc0();
};

// @baa 0x0195ccc0
uint C_0195ccc0::sub_0195ccc0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_0195ccd0 {
    uint sub_0195ccd0();
};

// @baa 0x0195ccd0
uint C_0195ccd0::sub_0195ccd0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_0195cce0 {
    uint sub_0195cce0();
};

// @baa 0x0195cce0
uint C_0195cce0::sub_0195cce0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_0195cd00 { unsigned sub_0195cd00(void); };

// @baa 0x0195cd00
unsigned C_0195cd00::sub_0195cd00(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_0195cd10 { unsigned sub_0195cd10(void); };

// @baa 0x0195cd10
unsigned C_0195cd10::sub_0195cd10(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_0195cd20 {
    uint sub_0195cd20();
};

// @baa 0x0195cd20
uint C_0195cd20::sub_0195cd20(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_0195cd30 {
    void sub_0195cd30(uint);
};

// @baa 0x0195cd30
void C_0195cd30::sub_0195cd30(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_0195cd50 { unsigned sub_0195cd50(void); };

// @baa 0x0195cd50
unsigned C_0195cd50::sub_0195cd50(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_0195cd60 { unsigned sub_0195cd60(void); };

// @baa 0x0195cd60
unsigned C_0195cd60::sub_0195cd60(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_0195cd70 {
    uint sub_0195cd70();
};

// @baa 0x0195cd70
uint C_0195cd70::sub_0195cd70(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_0195cd80 {
    void sub_0195cd80(uint);
};

// @baa 0x0195cd80
void C_0195cd80::sub_0195cd80(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_0195cda0 { unsigned sub_0195cda0(void); };

// @baa 0x0195cda0
unsigned C_0195cda0::sub_0195cda0(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_0195cdb0 { unsigned sub_0195cdb0(void); };

// @baa 0x0195cdb0
unsigned C_0195cdb0::sub_0195cdb0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_0195cdc0 {
    uint sub_0195cdc0();
};

// @baa 0x0195cdc0
uint C_0195cdc0::sub_0195cdc0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_0195cdd0 {
    void sub_0195cdd0(uint);
};

// @baa 0x0195cdd0
void C_0195cdd0::sub_0195cdd0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_0195ce10 { void sub_0195ce10(void); };

// @baa 0x0195ce10
void C_0195ce10::sub_0195ce10(void) { *(int*)((char*)this + 0) = -2; }

// @baa 0x0195ce20
int sub_0195ce20(int param_1, int param_2)
{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}

// @baa 0x0195ce30
undefined4 * sub_0195ce30(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

// @baa 0x0195ce50
undefined4 * sub_0195ce50(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

// @baa 0x0195ce70
int sub_0195ce70(int a0) { return a0; }

// @baa 0x0195ce80
int sub_0195ce80(int a0) { return a0; }

// @baa 0x0195ce90
int sub_0195ce90(int param_1)
{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    return param_1;
  }
  return 0;
}

struct C_0195ceb0 { C_0195ceb0* sub_0195ceb0(void); };

// @baa 0x0195ceb0
C_0195ceb0* C_0195ceb0::sub_0195ceb0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_0195cf60 { int sub_0195cf60(void); };

// @baa 0x0195cf60
int C_0195cf60::sub_0195cf60(void) { return *(int*)((char*)this + 0); }

struct C_0195d110 { int sub_0195d110(void); };

// @baa 0x0195d110
int C_0195d110::sub_0195d110(void) { return *(int*)((char*)this + 4); }

struct C_0195d120 {
    undefined4 sub_0195d120(int);
};

// @baa 0x0195d120
undefined4 C_0195d120::sub_0195d120(int param_2)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + 4 + param_2 * 8);
}

struct C_0195d130 {
    int sub_0195d130(int);
};

// @baa 0x0195d130
int C_0195d130::sub_0195d130(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_0195d140 {
    undefined4 * sub_0195d140(byte);
};

// @baa 0x0195d140
undefined4 * C_0195d140::sub_0195d140(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f9650));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0195d170 {
    undefined4 sub_0195d170();
};

// @baa 0x0195d170
undefined4 C_0195d170::sub_0195d170(void)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0x1c8) & 0x40) != 0) {
    return *(undefined4 *)(param_1 + 0x98);
  }
  return 0;
}

int sub_0195c3c0(...);
// @baa 0x0195d190
bool sub_0195d190(undefined4 param_1, undefined4 param_2)
{
  char cVar1;
  
  cVar1 = sub_0195c3c0(param_1,param_2);
  return cVar1 != '\0';
}

struct C_0195d200 {
    undefined4 sub_0195d200(int);
};

// @baa 0x0195d200
undefined4 C_0195d200::sub_0195d200(int param_2)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x34) + param_2 * 4);
}

extern char g_023f4ed0[];
struct C_0195d210 { void sub_0195d210(void); };

// @baa 0x0195d210
void C_0195d210::sub_0195d210(void) { *(int*)((char*)this + 0) = (int)g_023f4ed0; }

struct C_0195d2f0 { int sub_0195d2f0(void); };

// @baa 0x0195d2f0
int C_0195d2f0::sub_0195d2f0(void) { return *(int*)((char*)this + 116); }

struct C_0195d7c0 {
    undefined4 * sub_0195d7c0(byte);
};

// @baa 0x0195d7c0
undefined4 * C_0195d7c0::sub_0195d7c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f9644));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0195e6d0 {
    int sub_0195e6d0();
};

// @baa 0x0195e6d0
int C_0195e6d0::sub_0195e6d0(void)
{
    int * param_1 = (int *)this;

  return *param_1 + -4 + param_1[1] * 4;
}

// @baa 0x0195ecc0
undefined4 * sub_0195ecc0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = 0;
    *param_1 = 1;
    return param_1;
  }
  return (undefined4 *)0x0;
}

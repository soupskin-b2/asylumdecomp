// GFx_1970000.cpp (part 1 of 4): 195 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_019702b0();
// @baa 0x01970430
void sub_01970430(void) { sub_019702b0(); }

struct C { C* sub_019705f0(void); };

// @baa 0x019705f0
C* C::sub_019705f0(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01970600
void sub_01970600(void) { sub_019702b0(); }

void sub_01970960();
// @baa 0x01970aa0
void sub_01970aa0(void) { sub_01970960(); }

struct C_01970da0 {
    undefined4 sub_01970da0();
};

// @baa 0x01970da0
undefined4 C_01970da0::sub_01970da0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(undefined4 *)*param_1;
}

// @baa 0x01970ea0
void __stdcall sub_01970ea0(int a0, int a1) {  }

struct C_01971040 { int sub_01971040(void); };

// @baa 0x01971040
int C_01971040::sub_01971040(void) { return *(int*)((char*)this + 0); }

struct C_01971050 { C_01971050* sub_01971050(void); };

// @baa 0x01971050
C_01971050* C_01971050::sub_01971050(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01971060 {
    int sub_01971060(int);
};

// @baa 0x01971060
int C_01971060::sub_01971060(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + 8 + param_2 * 8;
}

struct C_01971070 {
    bool sub_01971070();
};

// @baa 0x01971070
bool C_01971070::sub_01971070(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_01971080 { void sub_01971080(void); };

// @baa 0x01971080
void C_01971080::sub_01971080(void) { *(int*)((char*)this + 0) = -2; }

struct C_01971090 {
    int sub_01971090(int);
};

// @baa 0x01971090
int C_01971090::sub_01971090(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + 8 + param_2 * 8;
}

struct C_01971130 {
    bool sub_01971130();
};

// @baa 0x01971130
bool C_01971130::sub_01971130(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -1;
}

struct C_01971140 {
    uint sub_01971140(uint);
};

// @baa 0x01971140
uint C_01971140::sub_01971140(uint param_2)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 4) + 0x10) & param_2;
}

// @baa 0x01971150
void __stdcall sub_01971150(int a0) {  }

void sub_019712d0();
// @baa 0x019714b0
void sub_019714b0(void) { sub_019712d0(); }

struct C_01971b20 { C_01971b20* sub_01971b20(void); };

// @baa 0x01971b20
C_01971b20* C_01971b20::sub_01971b20(void) { *(int*)((char*)this + 0) = 0; return this; }

void sub_01971290();
// @baa 0x01971b30
void sub_01971b30(void) { sub_01971290(); }

struct C_01972100 {
    bool sub_01972100();
};

// @baa 0x01972100
bool C_01972100::sub_01972100(void)
{
    char * param_1 = (char *)this;

  return *param_1 == '\v';
}

struct C_01972150 { int sub_01972150(void); };

// @baa 0x01972150
int C_01972150::sub_01972150(void) { return *(int*)((char*)this + 56); }

struct C_019721b0 {
    bool sub_019721b0();
};

// @baa 0x019721b0
bool C_019721b0::sub_019721b0(void)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + 0x6a) == '\x02';
}

struct C_019722b0 {
    void sub_019722b0(undefined4, undefined1);
};

// @baa 0x019722b0
void C_019722b0::sub_019722b0(undefined4 param_2, undefined1 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;

  *(undefined1 *)(param_1 + 2) = param_3;
  *param_1 = param_2;
  param_1[1] = 0;
  return;
}

struct C_019724e0 { int sub_019724e0(void); };

// @baa 0x019724e0
int C_019724e0::sub_019724e0(void) { return *(int*)((char*)this + 0); }

struct C_019724f0 { int sub_019724f0(void); };

// @baa 0x019724f0
int C_019724f0::sub_019724f0(void) { return *(int*)((char*)this + 0); }

struct C_01972500 { int sub_01972500(void); };

// @baa 0x01972500
int C_01972500::sub_01972500(void) { return *(int*)((char*)this + 4); }

struct C_01972530 { int sub_01972530(void); };

// @baa 0x01972530
int C_01972530::sub_01972530(void) { return *(int*)((char*)this + 0); }

struct C_01972560 { int sub_01972560(void); };

// @baa 0x01972560
int C_01972560::sub_01972560(void) { return *(int*)((char*)this + 0); }

struct C_01972570 {
    int sub_01972570(int);
};

// @baa 0x01972570
int C_01972570::sub_01972570(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_01972580 { int sub_01972580(void); };

// @baa 0x01972580
int C_01972580::sub_01972580(void) { return *(int*)((char*)this + 4); }

struct C_019725d0 { int sub_019725d0(void); };

// @baa 0x019725d0
int C_019725d0::sub_019725d0(void) { return *(int*)((char*)this + 0); }

struct C_019725e0 { C_019725e0* sub_019725e0(void); };

// @baa 0x019725e0
C_019725e0* C_019725e0::sub_019725e0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01972640 { int sub_01972640(void); };

// @baa 0x01972640
int C_01972640::sub_01972640(void) { return *(int*)((char*)this + 0); }

struct C_01972650 { int sub_01972650(void); };

// @baa 0x01972650
int C_01972650::sub_01972650(void) { return *(int*)((char*)this + 0); }

struct C_01972690 { int sub_01972690(void); };

// @baa 0x01972690
int C_01972690::sub_01972690(void) { return *(int*)((char*)this + 0); }

struct C_019726e0 {
    int sub_019726e0(int);
};

// @baa 0x019726e0
int C_019726e0::sub_019726e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01972780 {
    uint sub_01972780();
};

// @baa 0x01972780
uint C_01972780::sub_01972780(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_01972790 {
    int sub_01972790(int);
};

// @baa 0x01972790
int C_01972790::sub_01972790(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_019727a0 { int sub_019727a0(void); };

// @baa 0x019727a0
int C_019727a0::sub_019727a0(void) { return *(int*)((char*)this + 4); }

struct C_019727b0 { unsigned sub_019727b0(void); };

// @baa 0x019727b0
unsigned C_019727b0::sub_019727b0(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_019727c0 { unsigned sub_019727c0(void); };

// @baa 0x019727c0
unsigned C_019727c0::sub_019727c0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_019727d0 {
    uint sub_019727d0();
};

// @baa 0x019727d0
uint C_019727d0::sub_019727d0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_019727e0 {
    void sub_019727e0(uint);
};

// @baa 0x019727e0
void C_019727e0::sub_019727e0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_01972800 { int sub_01972800(void); };

// @baa 0x01972800
int C_01972800::sub_01972800(void) { return *(int*)((char*)this + 0); }

struct C_01972810 { int sub_01972810(void); };

// @baa 0x01972810
int C_01972810::sub_01972810(void) { return *(int*)((char*)this + 0); }

// @baa 0x01972820
undefined4 * sub_01972820(undefined4 * param_1, undefined4 * param_2)
{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    iVar2 = param_2[1];
    param_1[1] = iVar2;
    piVar1 = (int *)(iVar2 + 0xc);
    *piVar1 = *piVar1 + 1;
    return param_1;
  }
  return (undefined4 *)0x0;
}

struct C_01972900 { int sub_01972900(void); };

// @baa 0x01972900
int C_01972900::sub_01972900(void) { return *(int*)((char*)this + 220); }

void sub_019731d0();
// @baa 0x019732e0
void sub_019732e0(void) { sub_019731d0(); }

// @baa 0x019739a0
undefined1 sub_019739a0(void)
{
  return 1;
}

// @baa 0x01973b10
undefined1 sub_01973b10(void)
{
  return 0;
}

// @baa 0x01973b20
int __stdcall sub_01973b20(int a0) { return 0; }

struct C_01973ce0 {
    void sub_01973ce0();
};

int sub_01973b60(void);
extern undefined4 g_023fa92c;
extern undefined4 g_023fa984;
// @baa 0x01973ce0
void C_01973ce0::sub_01973ce0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023fa984));
  param_1[4] = (undefined4)((&g_023fa92c));
  sub_01973b60();
  return;
}

// @baa 0x01973e30
undefined1 sub_01973e30(void)
{
  return 0;
}

// @baa 0x01973e50
undefined1 sub_01973e50(void)
{
  return 1;
}

struct C_01973ea0 { int sub_01973ea0(void); };

// @baa 0x01973ea0
int C_01973ea0::sub_01973ea0(void) { return *(int*)((char*)this + 88); }

void sub_01973ce0();
// @baa 0x01974a10
void sub_01974a10(void) { sub_01973ce0(); }

// @baa 0x01974c30
undefined1 sub_01974c30(void)
{
  return 1;
}

void sub_01975010();
// @baa 0x019751d0
void sub_019751d0(void) { sub_01975010(); }

struct C_01975400 {
    undefined1 sub_01975400();
};

// @baa 0x01975400
undefined1 C_01975400::sub_01975400(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 1);
}

struct C_01975410 {
    bool sub_01975410();
};

// @baa 0x01975410
bool C_01975410::sub_01975410(void)
{
    char * param_1 = (char *)this;

  return *param_1 == '\x05';
}

struct C_01975420 {
    undefined4 sub_01975420();
};

// @baa 0x01975420
undefined4 C_01975420::sub_01975420(void)
{
    char * param_1 = (char *)this;

  char cVar1;
  
  cVar1 = *param_1;
  if ((((cVar1 != '\x05') && (cVar1 != '\x02')) && (cVar1 != '\x01')) &&
     ((cVar1 != '\x03' && (cVar1 != '\x04')))) {
    return 0;
  }
  return 1;
}

void sub_018d3de0();
// @baa 0x01975580
void sub_01975580(void) { sub_018d3de0(); }

struct C_019759f0 {
    int sub_019759f0(int);
};

// @baa 0x019759f0
int C_019759f0::sub_019759f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x01975a20
undefined4 sub_01975a20(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

struct C_01975a80 {
    undefined4 sub_01975a80();
};

// @baa 0x01975a80
undefined4 C_01975a80::sub_01975a80(void)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + 0x10);
}

struct C_01975d70 {
    int sub_01975d70(uint);
};

// @baa 0x01975d70
int C_01975d70::sub_01975d70(uint param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = 0;
  if (param_2 <= (uint)((*param_1 - param_1[1] >> 4) + (param_1[5] + -1) * 0x20)) {
    iVar1 = (param_2 & 0x1f) * 0x10 + *(int *)(param_1[4] + (param_2 >> 5) * 4);
  }
  return iVar1;
}

struct C_01975dd0 {
    int sub_01975dd0(uint);
};

// @baa 0x01975dd0
int C_01975dd0::sub_01975dd0(uint param_2)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = 0;
  if (param_2 <=
      (uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc) >> 4) +
            (*(int *)(param_1 + 0x1c) + -1) * 0x20)) {
    iVar1 = (param_2 & 0x1f) * 0x10 + *(int *)(*(int *)(param_1 + 0x18) + (param_2 >> 5) * 4);
  }
  return iVar1;
}

struct C_01976170 {
    uint sub_01976170(uint);
};

// @baa 0x01976170
uint C_01976170::sub_01976170(uint param_2)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 4) + 0x10) & param_2;
}

struct C_01976bb0 {
    void sub_01976bb0(int *);
};

int sub_01976050(void);
// @baa 0x01976bb0
void C_01976bb0::sub_01976bb0(int * param_2)
{
    char * param_1 = (char *)this;

  if ((*param_1 != '\a') || (*(int **)(param_1 + 4) != param_2)) {
    sub_01976050();
    *param_1 = '\a';
    *(int **)(param_1 + 4) = param_2;
    if (param_2 != (int *)0x0) {
      *param_2 = *param_2 + 1;
    }
  }
  return;
}

struct C_01977c20 {
    byte sub_01977c20();
};

// @baa 0x01977c20
byte C_01977c20::sub_01977c20(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x28) & 1;
}

struct C_01977c30 {
    byte sub_01977c30();
};

// @baa 0x01977c30
byte C_01977c30::sub_01977c30(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x28) >> 1 & 1;
}

struct C_01977c40 {
    byte sub_01977c40();
};

// @baa 0x01977c40
byte C_01977c40::sub_01977c40(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x28) >> 2 & 1;
}

struct C_01977c50 {
    void sub_01977c50();
};

// @baa 0x01977c50
void C_01977c50::sub_01977c50(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xf7;
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xff7f;
  return;
}

struct C_01977c60 {
    byte sub_01977c60();
};

// @baa 0x01977c60
byte C_01977c60::sub_01977c60(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x28) >> 3 & 1;
}

struct C_01977c70 { int sub_01977c70(void); };

// @baa 0x01977c70
int C_01977c70::sub_01977c70(void) { return *(int*)((char*)this + 32); }

struct C_01977c80 {
    void sub_01977c80(byte);
};

// @baa 0x01977c80
void C_01977c80::sub_01977c80(byte param_2)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 0x400;
  *(uint *)(param_1 + 0x20) = (uint)param_2 << 0x18 | *(uint *)(param_1 + 0x20) & 0xffffff;
  return;
}

struct C_01977ca0 {
    undefined1 sub_01977ca0();
};

// @baa 0x01977ca0
undefined1 C_01977ca0::sub_01977ca0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x23);
}

struct C_01977cb0 {
    byte sub_01977cb0();
};

// @baa 0x01977cb0
byte C_01977cb0::sub_01977cb0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x2a) >> 3 & 1;
}

struct C_01977cc0 {
    byte sub_01977cc0();
};

// @baa 0x01977cc0
byte C_01977cc0::sub_01977cc0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x2a) >> 2 & 1;
}

struct C_01977cd0 {
    ushort sub_01977cd0();
};

// @baa 0x01977cd0
ushort C_01977cd0::sub_01977cd0(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 0x2a) >> 0xb & 1;
}

struct C_01977ce0 {
    ushort sub_01977ce0();
};

// @baa 0x01977ce0
ushort C_01977ce0::sub_01977ce0(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 0x2a) >> 9 & 1;
}

struct C_01977cf0 {
    byte sub_01977cf0();
};

// @baa 0x01977cf0
byte C_01977cf0::sub_01977cf0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x2a) & 1;
}

struct C_01977d00 {
    ushort sub_01977d00();
};

// @baa 0x01977d00
ushort C_01977d00::sub_01977d00(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 0x2a) >> 10 & 1;
}

struct C_01977d10 {
    byte sub_01977d10();
};

// @baa 0x01977d10
byte C_01977d10::sub_01977d10(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x2a) >> 1 & 1;
}

struct C_01977d20 { int sub_01977d20(void); };

// @baa 0x01977d20
int C_01977d20::sub_01977d20(void) { return *(int*)((char*)this + 32); }

struct C_01977d70 {
    void sub_01977d70(undefined2);
};

// @baa 0x01977d70
void C_01977d70::sub_01977d70(undefined2 param_2)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 2;
  *(undefined2 *)(param_1 + 0x14) = param_2;
  return;
}

struct C_01977da0 {
    byte sub_01977da0();
};

// @baa 0x01977da0
byte C_01977da0::sub_01977da0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x2a) >> 1 & 1;
}

struct C_01977db0 {
    int sub_01977db0();
};

// @baa 0x01977db0
int C_01977db0::sub_01977db0(void)
{
    int param_1 = (int)this;

  return (int)*(short *)(param_1 + 0x16);
}

struct C_01977dc0 {
    byte sub_01977dc0();
};

// @baa 0x01977dc0
byte C_01977dc0::sub_01977dc0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x2a) >> 2 & 1;
}

struct C_01977dd0 {
    int sub_01977dd0();
};

// @baa 0x01977dd0
int C_01977dd0::sub_01977dd0(void)
{
    int param_1 = (int)this;

  return (int)*(short *)(param_1 + 0x18);
}

struct C_01977de0 {
    byte sub_01977de0();
};

// @baa 0x01977de0
byte C_01977de0::sub_01977de0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x2a) >> 3 & 1;
}

struct C_01977e00 {
    byte sub_01977e00();
};

// @baa 0x01977e00
byte C_01977e00::sub_01977e00(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x2a) >> 4 & 1;
}

struct C_01977e20 {
    byte sub_01977e20();
};

// @baa 0x01977e20
byte C_01977e20::sub_01977e20(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x2a) >> 5 & 1;
}

struct C_01977e50 {
    byte sub_01977e50();
};

// @baa 0x01977e50
byte C_01977e50::sub_01977e50(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x2a) >> 6 & 1;
}

struct C_01977e60 {
    ushort sub_01977e60();
};

// @baa 0x01977e60
ushort C_01977e60::sub_01977e60(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 0x2a) >> 8 & 1;
}

struct C_01977e70 { int sub_01977e70(void); };

// @baa 0x01977e70
int C_01977e70::sub_01977e70(void) { return *(int*)((char*)this + 36); }

void sub_018d7170();
// @baa 0x01977f30
void sub_01977f30(void) { sub_018d7170(); }

// @baa 0x01977f70
undefined4 sub_01977f70(undefined2 param_1, undefined2 * param_2)
{
  *param_2 = param_1;
  return 1;
}

struct C_01977fa0 { void sub_01977fa0(void); };

// @baa 0x01977fa0
void C_01977fa0::sub_01977fa0(void) { *(int*)((char*)this + 4) = 0; }

struct C_01977fb0 { void sub_01977fb0(int a0); };

// @baa 0x01977fb0
void C_01977fb0::sub_01977fb0(int a0) { *(int*)((char*)this + 28) = a0; }

struct C_01977fc0 {
    undefined4 sub_01977fc0();
};

// @baa 0x01977fc0
undefined4 C_01977fc0::sub_01977fc0(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x18) != 0) &&
     (*(uint *)(param_1 + 0x1c) < *(uint *)(*(int *)(param_1 + 0x18) + 4))) {
    return 0;
  }
  return 1;
}

struct C_01977fe0 { int sub_01977fe0(void); };

// @baa 0x01977fe0
int C_01977fe0::sub_01977fe0(void) { return *(int*)((char*)this + 4); }

struct C_01977ff0 { int sub_01977ff0(void); };

// @baa 0x01977ff0
int C_01977ff0::sub_01977ff0(void) { return *(int*)((char*)this + 0); }

struct C_01978000 { int sub_01978000(void); };

// @baa 0x01978000
int C_01978000::sub_01978000(void) { return *(int*)((char*)this + 32); }

struct C_01978010 { C_01978010* sub_01978010(void); };

// @baa 0x01978010
C_01978010* C_01978010::sub_01978010(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01978050 { int sub_01978050(void); };

// @baa 0x01978050
int C_01978050::sub_01978050(void) { return *(int*)((char*)this + 0); }

struct C_01978060 { int sub_01978060(void); };

// @baa 0x01978060
int C_01978060::sub_01978060(void) { return *(int*)((char*)this + 0); }

struct C_01978070 { int sub_01978070(void); };

// @baa 0x01978070
int C_01978070::sub_01978070(void) { return *(int*)((char*)this + 0); }

struct C_01978080 { int sub_01978080(void); };

// @baa 0x01978080
int C_01978080::sub_01978080(void) { return *(int*)((char*)this + 0); }

struct C_019780c0 {
    byte sub_019780c0();
};

// @baa 0x019780c0
byte C_019780c0::sub_019780c0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x28) >> 1 & 1;
}

struct C_019780e0 {
    undefined * sub_019780e0();
};

extern undefined4 g_023f5978;
extern undefined4 g_023facc8;
// @baa 0x019780e0
undefined * C_019780e0::sub_019780e0(void)
{
    int param_1 = (int)this;

  undefined *puVar1;
  
  puVar1 = (undefined *)(&g_023facc8);
  if ((*(byte *)(param_1 + 0x28) & 2) == 0) {
    puVar1 = (undefined *)(&g_023f5978);
  }
  return puVar1;
}

// @baa 0x01978100
void sub_01978100(void) {  }

struct C_01978110 {
    void sub_01978110();
};

// @baa 0x01978110
void C_01978110::sub_01978110(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 1;
  return;
}

struct C_01978120 {
    void sub_01978120();
};

// @baa 0x01978120
void C_01978120::sub_01978120(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfe;
  return;
}

// @baa 0x01978130
void sub_01978130(void) { sub_018d3de0(); }

// @baa 0x01978180
void sub_01978180(void) {  }

struct C_019781b0 {
    int sub_019781b0(uint);
};

// @baa 0x019781b0
int C_019781b0::sub_019781b0(uint param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 != 0) && (param_2 < (uint)param_1[1])) {
    return *param_1 + param_2 * 2;
  }
  return 0;
}

struct C_019784a0 {
    int sub_019784a0(int *);
};

// @baa 0x019784a0
int C_019784a0::sub_019784a0(int * param_2)
{
    int param_1 = (int)this;

  uint uVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x18) + 4);
    if (*(uint *)(param_1 + 0x1c) < uVar1) {
      if (param_2 != (int *)0x0) {
        *param_2 = uVar1 - *(uint *)(param_1 + 0x1c);
      }
      return **(int **)(param_1 + 0x18) + *(int *)(param_1 + 0x1c) * 2;
    }
  }
  *param_2 = 0;
  return 0;
}

// @baa 0x019784e0
int __stdcall sub_019784e0(int a0, int a1) { return 0; }

// @baa 0x019784f0
void __stdcall sub_019784f0(int a0, int a1, int a2) {  }

// @baa 0x01978500
void __stdcall sub_01978500(int a0, int a1) {  }

// @baa 0x01978510
void __stdcall sub_01978510(int a0) {  }

struct C_01978630 { int sub_01978630(void); };

// @baa 0x01978630
int C_01978630::sub_01978630(void) { return *(int*)((char*)this + 0); }

struct C_01978640 { C_01978640* sub_01978640(void); };

// @baa 0x01978640
C_01978640* C_01978640::sub_01978640(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019786e0 { int sub_019786e0(void); };

// @baa 0x019786e0
int C_019786e0::sub_019786e0(void) { return *(int*)((char*)this + 0); }

struct C_019786f0 { C_019786f0* sub_019786f0(void); };

// @baa 0x019786f0
C_019786f0* C_019786f0::sub_019786f0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01978780 { int sub_01978780(void); };

// @baa 0x01978780
int C_01978780::sub_01978780(void) { return *(int*)((char*)this + 0); }

struct C_01978790 { int sub_01978790(void); };

// @baa 0x01978790
int C_01978790::sub_01978790(void) { return *(int*)((char*)this + 0); }

struct C_019787a0 { int sub_019787a0(void); };

// @baa 0x019787a0
int C_019787a0::sub_019787a0(void) { return *(int*)((char*)this + 0); }

struct C_01978800 {
    int sub_01978800(int);
};

// @baa 0x01978800
int C_01978800::sub_01978800(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01978880 {
    int sub_01978880();
};

// @baa 0x01978880
int C_01978880::sub_01978880(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[1] * 4;
}

struct C_01978890 {
    int sub_01978890();
};

// @baa 0x01978890
int C_01978890::sub_01978890(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[1] * 4;
}

struct C_019788c0 { int sub_019788c0(void); };

// @baa 0x019788c0
int C_019788c0::sub_019788c0(void) { return *(int*)((char*)this + 4); }

struct C_019788f0 { char* sub_019788f0(void); };

// @baa 0x019788f0
char* C_019788f0::sub_019788f0(void) { return (char*)this + 8; }

struct C_01978900 {
    int sub_01978900();
};

// @baa 0x01978900
int C_01978900::sub_01978900(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[1] * 4;
}

struct C_01978980 { int sub_01978980(void); };

// @baa 0x01978980
int C_01978980::sub_01978980(void) { return *(int*)((char*)this + 4); }

struct C_01978a30 {
    uint sub_01978a30();
};

// @baa 0x01978a30
uint C_01978a30::sub_01978a30(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_01978a90 {
    uint sub_01978a90();
};

// @baa 0x01978a90
uint C_01978a90::sub_01978a90(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_01978aa0 { unsigned sub_01978aa0(void); };

// @baa 0x01978aa0
unsigned C_01978aa0::sub_01978aa0(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_01978ab0 { unsigned sub_01978ab0(void); };

// @baa 0x01978ab0
unsigned C_01978ab0::sub_01978ab0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_01978ac0 {
    uint sub_01978ac0();
};

// @baa 0x01978ac0
uint C_01978ac0::sub_01978ac0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_01978ad0 {
    void sub_01978ad0(uint);
};

// @baa 0x01978ad0
void C_01978ad0::sub_01978ad0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_01978af0 { unsigned sub_01978af0(void); };

// @baa 0x01978af0
unsigned C_01978af0::sub_01978af0(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_01978b00 { unsigned sub_01978b00(void); };

// @baa 0x01978b00
unsigned C_01978b00::sub_01978b00(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_01978b10 {
    uint sub_01978b10();
};

// @baa 0x01978b10
uint C_01978b10::sub_01978b10(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_01978b20 {
    void sub_01978b20(uint);
};

// @baa 0x01978b20
void C_01978b20::sub_01978b20(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

// @baa 0x01978b40
int sub_01978b40(int param_1)
{
  return param_1 / 0x14;
}

// @baa 0x01978b60
undefined4 * sub_01978b60(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

extern "C" __declspec(dllimport) int isdigit(...);
// @baa 0x01978bd0
bool sub_01978bd0(int param_1)
{
  int iVar1;
  
  iVar1 = isdigit(param_1);
  return iVar1 != 0;
}

// @baa 0x01978bf0
void sub_01978bf0(void) {  }

struct C_01978c30 { char* sub_01978c30(void); };

// @baa 0x01978c30
char* C_01978c30::sub_01978c30(void) { return (char*)this + 8; }

struct C_01978cd0 { int sub_01978cd0(void); };

// @baa 0x01978cd0
int C_01978cd0::sub_01978cd0(void) { return *(int*)((char*)this + 4); }

struct C_01978cf0 {
    void sub_01978cf0();
};

// @baa 0x01978cf0
void C_01978cf0::sub_01978cf0(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x24) = 1;
  return;
}

struct C_01978d00 { C_01978d00* sub_01978d00(void); };

// @baa 0x01978d00
C_01978d00* C_01978d00::sub_01978d00(void) { return this; }

struct C_01978d30 { int sub_01978d30(void); };

// @baa 0x01978d30
int C_01978d30::sub_01978d30(void) { return *(int*)((char*)this + 0); }

struct C_01978d40 { C_01978d40* sub_01978d40(void); };

// @baa 0x01978d40
C_01978d40* C_01978d40::sub_01978d40(void) { return this; }

struct C_01978da0 {
    int sub_01978da0(int);
};

// @baa 0x01978da0
int C_01978da0::sub_01978da0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01978db0 {
    undefined4 sub_01978db0();
};

// @baa 0x01978db0
undefined4 C_01978db0::sub_01978db0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  if ((*(char *)(param_1 + 4) != '\0') && (*(short *)*param_1 == 0x26)) {
    return 1;
  }
  return 0;
}

struct C_01978dd0 {
    uint sub_01978dd0();
};

// @baa 0x01978dd0
uint C_01978dd0::sub_01978dd0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_01978de0 { unsigned sub_01978de0(void); };

// @baa 0x01978de0
unsigned C_01978de0::sub_01978de0(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_01978df0 { unsigned sub_01978df0(void); };

// @baa 0x01978df0
unsigned C_01978df0::sub_01978df0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_01978e00 {
    uint sub_01978e00();
};

// @baa 0x01978e00
uint C_01978e00::sub_01978e00(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_01978e10 {
    void sub_01978e10(uint);
};

// @baa 0x01978e10
void C_01978e10::sub_01978e10(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_01979190 { int sub_01979190(void); };

// @baa 0x01979190
int C_01979190::sub_01979190(void) { return *(int*)((char*)this + 12); }

struct C_019791a0 { int sub_019791a0(void); };

// @baa 0x019791a0
int C_019791a0::sub_019791a0(void) { return *(int*)((char*)this + 0); }

struct C_019791b0 {
    int sub_019791b0();
};

// @baa 0x019791b0
int C_019791b0::sub_019791b0(void)
{
    int * param_1 = (int *)this;

  return param_1[1] - *param_1 >> 1;
}

struct C_019791c0 {
    void sub_019791c0();
};

// @baa 0x019791c0
void C_019791c0::sub_019791c0(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}

extern "C" __declspec(dllimport) int isxdigit(...);
// @baa 0x019791d0
bool sub_019791d0(int param_1)
{
  int iVar1;
  
  iVar1 = isxdigit(param_1);
  return iVar1 != 0;
}

struct C_01979210 { int sub_01979210(int a0); };

// @baa 0x01979210
int C_01979210::sub_01979210(int a0) { return *(int*)((char*)this + 4); }

struct C_01979220 { void sub_01979220(int a0); };

// @baa 0x01979220
void C_01979220::sub_01979220(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_01979230 { int sub_01979230(int a0); };

// @baa 0x01979230
int C_01979230::sub_01979230(int a0) { return *(int*)((char*)this + 4); }

struct C_01979240 { void sub_01979240(int a0); };

// @baa 0x01979240
void C_01979240::sub_01979240(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_01979250 { void sub_01979250(void); };

// @baa 0x01979250
void C_01979250::sub_01979250(void) { *(int*)((char*)this + 32) = 0; }

int sub_01978450(void);
// @baa 0x01979950
bool sub_01979950(void)
{
  int iVar1;
  
  iVar1 = sub_01978450();
  return iVar1 == 0;
}

void sub_01978190();
// @baa 0x019799d0
void sub_019799d0(void) { sub_01978190(); }

struct C_019799e0 { int sub_019799e0(void); };

// @baa 0x019799e0
int C_019799e0::sub_019799e0(void) { return *(int*)((char*)this + 12); }

struct C_01979ba0 { int sub_01979ba0(void); };

// @baa 0x01979ba0
int C_01979ba0::sub_01979ba0(void) { return *(int*)((char*)this + 0); }

struct C_01979c80 {
    void sub_01979c80(int *);
};

// @baa 0x01979c80
void C_01979c80::sub_01979c80(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 4) + -1;
  return;
}

struct C_01979ca0 {
    void sub_01979ca0(int *);
};

// @baa 0x01979ca0
void C_01979ca0::sub_01979ca0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 4) + -1;
  return;
}

struct C_01979ce0 {
    int sub_01979ce0(int);
};

// @baa 0x01979ce0
int C_01979ce0::sub_01979ce0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

int sub_01978e30(...);
// @baa 0x01979e90
void sub_01979e90(int param_1, undefined4 param_2, undefined4 param_3)
{
  sub_01978e30(param_1,*(undefined4 *)(param_1 + 4),param_2,param_3);
  return;
}

// @baa 0x01979ee0
undefined4 * sub_01979ee0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

struct C_0197a070 {
    int sub_0197a070(int);
};

// @baa 0x0197a070
int C_0197a070::sub_0197a070(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_0197aa00 {
    int sub_0197aa00();
};

// @baa 0x0197aa00
int C_0197aa00::sub_0197aa00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[1] * 0xc;
}

struct C_0197aa10 {
    int sub_0197aa10();
};

// @baa 0x0197aa10
int C_0197aa10::sub_0197aa10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[1] * 0xc;
}

struct C_0197aa20 {
    void sub_0197aa20(undefined4 *);
};

// @baa 0x0197aa20
void C_0197aa20::sub_0197aa20(undefined4 * param_2)
{
    undefined4 param_1 = (undefined4)this;

  *param_2 = param_1;
  param_2[1] = 0;
  return;
}

struct C_0197ab80 {
    int sub_0197ab80();
};

// @baa 0x0197ab80
int C_0197ab80::sub_0197ab80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[1] * 0xc;
}

struct C_0197ab90 {
    int sub_0197ab90();
};

// @baa 0x0197ab90
int C_0197ab90::sub_0197ab90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[1] * 0xc;
}

struct C_0197aba0 {
    int sub_0197aba0();
};

// @baa 0x0197aba0
int C_0197aba0::sub_0197aba0(void)
{
    int * param_1 = (int *)this;

  if (param_1[1] < ((int *)*param_1)[1]) {
    return *(int *)*param_1 + param_1[1] * 0xc;
  }
  return 0;
}

void sub_0197a5f0();
// @baa 0x0197abc0
void sub_0197abc0(void) { sub_0197a5f0(); }

struct C_0197ac40 {
    void sub_0197ac40();
};

int sub_0197a370(void);
// @baa 0x0197ac40
void C_0197ac40::sub_0197ac40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  ushort *puVar1;
  
  puVar1 = (ushort *)param_1[1];
  *param_1 = (undefined4)(puVar1);
  if ((*(char *)(param_1 + 4) != '\0') && (*puVar1 == 0x26)) {
    sub_0197a370();
    return;
  }
  if (puVar1 < (ushort *)param_1[2]) {
    param_1[3] = (uint)*puVar1;
    param_1[1] = (undefined4)(puVar1 + 1);
  }
  return;
}

struct C_0197b1f0 {
    void sub_0197b1f0(int *);
};

// @baa 0x0197b1f0
void C_0197b1f0::sub_0197b1f0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1 + 0x14;
  param_2[1] = 0;
  return;
}

struct C_0197b210 {
    void sub_0197b210(int *);
};

// @baa 0x0197b210
void C_0197b210::sub_0197b210(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1 + 0x14;
  param_2[1] = 0;
  return;
}

struct C_0197b630 {
    int * sub_0197b630(int *, int, int *);
};

int sub_01979eb0(...);
extern undefined4 g_027b89cc;
// @baa 0x0197b630
int * C_0197b630::sub_0197b630(int * param_2, int param_3, int * param_4)
{
    int param_1 = (int)this;

  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x14);
  iVar2 = sub_01979eb0(piVar1,&param_3,&g_027b89cc);
  if (iVar2 != -1) {
    if (param_4 != (int *)0x0) {
      *param_4 = param_3 - *(int *)(*(int *)(*piVar1 + iVar2 * 4) + 0x1c);
    }
    *param_2 = (int)piVar1;
    param_2[1] = iVar2;
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = -1;
  return param_2;
}

void sub_0197aa30();
// @baa 0x0197c2c0
void sub_0197c2c0(void) { sub_0197aa30(); }

void sub_0197ee30();
// @baa 0x0197f640
void sub_0197f640(void) { sub_0197ee30(); }

// GFx_1990000.cpp (part 2 of 3): 220 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_019900f0();
};

// @baa 0x019900f0
undefined4 C::sub_019900f0(void)
{
    int * param_1 = (int *)this;

  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    return 0;
  }
  return *(undefined4 *)*param_1;
}

struct C_01990140 { C_01990140* sub_01990140(void); };

// @baa 0x01990140
C_01990140* C_01990140::sub_01990140(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01990150 { C_01990150* sub_01990150(void); };

// @baa 0x01990150
C_01990150* C_01990150::sub_01990150(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019901a0 {
    bool sub_019901a0();
};

// @baa 0x019901a0
bool C_019901a0::sub_019901a0(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -1;
}

struct C_019901b0 {
    bool sub_019901b0();
};

// @baa 0x019901b0
bool C_019901b0::sub_019901b0(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -1;
}

struct C_019902d0 {
    undefined4 sub_019902d0();
};

// @baa 0x019902d0
undefined4 C_019902d0::sub_019902d0(void)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + 0x10);
}

struct C_019902e0 {
    undefined4 sub_019902e0();
};

// @baa 0x019902e0
undefined4 C_019902e0::sub_019902e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(undefined4 *)(*(int *)*param_1 + 0x10);
}

// @baa 0x01990330
void __stdcall sub_01990330(int a0) {  }

struct C_01990340 {
    undefined4 sub_01990340();
};

// @baa 0x01990340
undefined4 C_01990340::sub_01990340(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(undefined4 *)(*(int *)*param_1 + 0x10);
}

// @baa 0x01990350
void __stdcall sub_01990350(int a0) {  }

// @baa 0x01990360
undefined4 sub_01990360(int * param_1)
{
  return *(undefined4 *)(*param_1 + 0x10);
}

// @baa 0x019903a0
undefined4 sub_019903a0(int * param_1)
{
  return *(undefined4 *)(*param_1 + 0x10);
}

// @baa 0x019903d0
undefined4 sub_019903d0(undefined4 * param_1)
{
  return *(undefined4 *)(*(int *)*param_1 + 0x10);
}

// @baa 0x019903e0
undefined4 sub_019903e0(undefined4 * param_1)
{
  return *(undefined4 *)(*(int *)*param_1 + 0x10);
}

// @baa 0x01990430
int sub_01990430(void) { return 0; }

struct C_01990540 {
    undefined4 sub_01990540();
};

// @baa 0x01990540
undefined4 C_01990540::sub_01990540(void)
{
    int * param_1 = (int *)this;

  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    return 0;
  }
  return *(undefined4 *)*param_1;
}

struct C_01990880 {
    undefined4 sub_01990880(byte);
};

int sub_00402660(...);
int sub_01990470(void);
// @baa 0x01990880
undefined4 C_01990880::sub_01990880(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01990470();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_019908f0 {
    int sub_019908f0();
};

// @baa 0x019908f0
int C_019908f0::sub_019908f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[1] * 0x24;
}

struct C_01990980 {
    uint sub_01990980(uint);
};

// @baa 0x01990980
uint C_01990980::sub_01990980(uint param_2)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 4) + 0x10) & param_2;
}

void sub_01990a00();
// @baa 0x01990e10
void sub_01990e10(void) { sub_01990a00(); }

void sub_01990d50();
// @baa 0x01991250
void sub_01991250(void) { sub_01990d50(); }

void sub_01990e20();
// @baa 0x01991290
void sub_01991290(void) { sub_01990e20(); }

struct C_019912a0 { C_019912a0* sub_019912a0(void); };

// @baa 0x019912a0
C_019912a0* C_019912a0::sub_019912a0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01991880 { C_01991880* sub_01991880(void); };

// @baa 0x01991880
C_01991880* C_01991880::sub_01991880(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019918d0 { C_019918d0* sub_019918d0(void); };

// @baa 0x019918d0
C_019918d0* C_019918d0::sub_019918d0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019920c0 { C_019920c0* sub_019920c0(void); };

// @baa 0x019920c0
C_019920c0* C_019920c0::sub_019920c0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01992240 { C_01992240* sub_01992240(void); };

// @baa 0x01992240
C_01992240* C_01992240::sub_01992240(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019928e0 { C_019928e0* sub_019928e0(void); };

// @baa 0x019928e0
C_019928e0* C_019928e0::sub_019928e0(void) { *(int*)((char*)this + 0) = 0; return this; }

void sub_01973ce0();
// @baa 0x019930a0
void sub_019930a0(void) { sub_01973ce0(); }

void sub_01975010();
// @baa 0x019937c0
void sub_019937c0(void) { sub_01975010(); }

// @baa 0x01993860
undefined8 sub_01993860(undefined8 param_1)
{
  return param_1;
}

struct C_01993870 {
    uint sub_01993870();
};

// @baa 0x01993870
uint C_01993870::sub_01993870(void)
{
    int * param_1 = (int *)this;

  return *(uint *)(*param_1 + 0x10) >> 0x19 & 1;
}

struct C_01993880 {
    void sub_01993880(uint);
};

// @baa 0x01993880
void C_01993880::sub_01993880(uint param_2)
{
    int * param_1 = (int *)this;

  *(uint *)(*param_1 + 0x10) = *(uint *)(*param_1 + 0x10) | param_2;
  return;
}

struct C_019938f0 {
    void sub_019938f0(undefined1);
};

// @baa 0x019938f0
void C_019938f0::sub_019938f0(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 4) = param_2;
  return;
}

struct C_01993900 { char* sub_01993900(void); };

// @baa 0x01993900
char* C_01993900::sub_01993900(void) { return (char*)this + 28; }

struct C_01993910 { int sub_01993910(void); };

// @baa 0x01993910
int C_01993910::sub_01993910(void) { return *(int*)((char*)this + 0); }

struct C_01993980 {
    void sub_01993980();
};

int sub_01976050(void);
// @baa 0x01993980
void C_01993980::sub_01993980(void)
{
    undefined1 * param_1 = (undefined1 *)this;

  sub_01976050();
  *param_1 = 10;
  return;
}

struct C_01993c00 {
    void sub_01993c00(byte, byte);
};

// @baa 0x01993c00
void C_01993c00::sub_01993c00(byte param_2, byte param_3)
{
    byte * param_1 = (byte *)this;

  *param_1 = ~param_3 & *param_1 | param_2;
  return;
}

struct C_01993c70 { int sub_01993c70(void); };

// @baa 0x01993c70
int C_01993c70::sub_01993c70(void) { return *(int*)((char*)this + 4); }

struct C_01993c80 {
    undefined1 sub_01993c80();
};

// @baa 0x01993c80
undefined1 C_01993c80::sub_01993c80(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 8);
}

struct C_01993c90 {
    undefined1 sub_01993c90();
};

// @baa 0x01993c90
undefined1 C_01993c90::sub_01993c90(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 9);
}

void sub_018d3de0();
// @baa 0x01993ca0
void sub_01993ca0(void) { sub_018d3de0(); }

struct C_01993ce0 {
    byte sub_01993ce0();
};

// @baa 0x01993ce0
byte C_01993ce0::sub_01993ce0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(byte *)*param_1 >> 2 & 1;
}

struct C_01993cf0 {
    byte sub_01993cf0();
};

// @baa 0x01993cf0
byte C_01993cf0::sub_01993cf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(byte *)*param_1 >> 1 & 1;
}

struct C_01993d00 {
    byte sub_01993d00();
};

// @baa 0x01993d00
byte C_01993d00::sub_01993d00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(byte *)*param_1 & 1;
}

struct C_01993d10 {
    uint sub_01993d10();
};

// @baa 0x01993d10
uint C_01993d10::sub_01993d10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  byte bVar1;
  
  bVar1 = *(byte *)*param_1;
  if (((bVar1 & 1) != 0) && ((bVar1 & 4) != 0)) {
    return (uint)((byte *)*param_1)[7];
  }
  return 0xffffffff;
}

struct C_01993d50 {
    bool sub_01993d50();
};

// @baa 0x01993d50
bool C_01993d50::sub_01993d50(void)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + 0x80) == '\0';
}

struct C_01993d60 { void sub_01993d60(int a0); };

// @baa 0x01993d60
void C_01993d60::sub_01993d60(int a0) { *(int*)((char*)this + 164) = a0; }

struct C_01993d70 { int sub_01993d70(void); };

// @baa 0x01993d70
int C_01993d70::sub_01993d70(void) { return *(int*)((char*)this + 164); }

struct C_01993db0 {
    int sub_01993db0(int);
};

// @baa 0x01993db0
int C_01993db0::sub_01993db0(int param_2)
{
    int param_1 = (int)this;

  return param_2 * 0x10 + 0x28 + param_1;
}

struct C_01993df0 {
    bool sub_01993df0();
};

// @baa 0x01993df0
bool C_01993df0::sub_01993df0(void)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + 0xc0) != '\n';
}

struct C_01993e00 {
    void sub_01993e00();
};

// @baa 0x01993e00
void C_01993e00::sub_01993e00(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0xd4) = 1;
  return;
}

struct C_01993e10 {
    void sub_01993e10();
};

// @baa 0x01993e10
void C_01993e10::sub_01993e10(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0xd4) = 0;
  return;
}

struct C_01993e20 { char* sub_01993e20(void); };

// @baa 0x01993e20
char* C_01993e20::sub_01993e20(void) { return (char*)this + 192; }

struct C_01993e30 {
    void sub_01993e30();
};

// @baa 0x01993e30
void C_01993e30::sub_01993e30(void)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
  return;
}

struct C_01993e40 {
    void sub_01993e40();
};

// @baa 0x01993e40
void C_01993e40::sub_01993e40(void)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + -1;
  return;
}

struct C_01993e50 {
    bool sub_01993e50();
};

// @baa 0x01993e50
bool C_01993e50::sub_01993e50(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0xd0) == 0;
}

struct C_01993f20 {
    void sub_01993f20(undefined1);
};

// @baa 0x01993f20
void C_01993f20::sub_01993f20(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x6b) = param_2;
  return;
}

struct C_01993f30 {
    void sub_01993f30(undefined2);
};

// @baa 0x01993f30
void C_01993f30::sub_01993f30(undefined2 param_2)
{
    int param_1 = (int)this;

  *(undefined2 *)(param_1 + 0x68) = param_2;
  return;
}

struct C_01993f40 { void sub_01993f40(int a0); };

// @baa 0x01993f40
void C_01993f40::sub_01993f40(int a0) { *(int*)((char*)this + 80) = a0; }

struct C_01993f80 {
    uint sub_01993f80();
};

// @baa 0x01993f80
uint C_01993f80::sub_01993f80(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x20) >> 1 & 1;
}

struct C_01993f90 {
    void sub_01993f90(undefined4);
};

// @baa 0x01993f90
void C_01993f90::sub_01993f90(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | 1;
  *param_1 = param_2;
  return;
}

struct C_01993fa0 {
    byte sub_01993fa0();
};

// @baa 0x01993fa0
byte C_01993fa0::sub_01993fa0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x28) & 1;
}

struct C_01993fb0 {
    void sub_01993fb0(undefined4);
};

// @baa 0x01993fb0
void C_01993fb0::sub_01993fb0(undefined4 param_2)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x28) = *(ushort *)(param_1 + 0x28) | 2;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

struct C_01993fc0 {
    byte sub_01993fc0();
};

// @baa 0x01993fc0
byte C_01993fc0::sub_01993fc0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x28) >> 1 & 1;
}

struct C_01993fd0 {
    void sub_01993fd0(undefined4);
};

// @baa 0x01993fd0
void C_01993fd0::sub_01993fd0(undefined4 param_2)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x28) = *(ushort *)(param_1 + 0x28) | 4;
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

struct C_01993fe0 {
    byte sub_01993fe0();
};

// @baa 0x01993fe0
byte C_01993fe0::sub_01993fe0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x28) >> 2 & 1;
}

struct C_01993ff0 {
    void sub_01993ff0(undefined4);
};

// @baa 0x01993ff0
void C_01993ff0::sub_01993ff0(undefined4 param_2)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x28) = *(ushort *)(param_1 + 0x28) | 8;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}

struct C_01994000 {
    byte sub_01994000();
};

// @baa 0x01994000
byte C_01994000::sub_01994000(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x28) >> 3 & 1;
}

struct C_01994010 {
    void sub_01994010(undefined4);
};

// @baa 0x01994010
void C_01994010::sub_01994010(undefined4 param_2)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x28) = *(ushort *)(param_1 + 0x28) | 0x10;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}

struct C_01994020 {
    byte sub_01994020();
};

// @baa 0x01994020
byte C_01994020::sub_01994020(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x28) >> 4 & 1;
}

struct C_01994030 {
    void sub_01994030(undefined4);
};

// @baa 0x01994030
void C_01994030::sub_01994030(undefined4 param_2)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x28) = *(ushort *)(param_1 + 0x28) | 0x20;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}

struct C_01994040 {
    byte sub_01994040();
};

// @baa 0x01994040
byte C_01994040::sub_01994040(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x28) >> 5 & 1;
}

struct C_01994050 {
    void sub_01994050(undefined4);
};

// @baa 0x01994050
void C_01994050::sub_01994050(undefined4 param_2)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x28) = *(ushort *)(param_1 + 0x28) | 0x40;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}

struct C_01994060 {
    byte sub_01994060();
};

// @baa 0x01994060
byte C_01994060::sub_01994060(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x28) >> 6 & 1;
}

extern char g_023fb610[];
struct C_019940d0 { C_019940d0* sub_019940d0(void); };

// @baa 0x019940d0
C_019940d0* C_019940d0::sub_019940d0(void) { *(int*)((char*)this + 0) = (int)g_023fb610; return this; }

struct C_01994a80 { int sub_01994a80(void); };

// @baa 0x01994a80
int C_01994a80::sub_01994a80(void) { return *(int*)((char*)this + 72); }

// @baa 0x01994aa0
void sub_01994aa0(void) { sub_018d3de0(); }

extern char g_023f9644[];
struct C_01994ec0 { void sub_01994ec0(void); };

// @baa 0x01994ec0
void C_01994ec0::sub_01994ec0(void) { *(int*)((char*)this + 0) = (int)g_023f9644; }

int sub_01994ed0(...);
extern undefined4 g_023fb624;
// @baa 0x01994ff0
void sub_01994ff0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  sub_01994ed0(param_1,param_2,param_3,&g_023fb624);
  return;
}

extern undefined4 g_023fb634;
// @baa 0x01995010
void sub_01995010(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  sub_01994ed0(param_1,param_2,param_3,&g_023fb634);
  return;
}

// @baa 0x01995110
void sub_01995110(void) {  }

// @baa 0x01995120
void sub_01995120(void) { sub_018d3de0(); }

struct C_01995130 {
    void sub_01995130();
};

int sub_01970350(...);
// @baa 0x01995130
void C_01995130::sub_01995130(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_01970350(param_1);
  return;
}

struct C_01995160 {
    void sub_01995160();
};

// @baa 0x01995160
void C_01995160::sub_01995160(void)
{
    int * param_1 = (int *)this;

  *(int *)(*param_1 + 0xa4) = param_1[1];
  return;
}

struct C_01995190 { void sub_01995190(void); };

// @baa 0x01995190
void C_01995190::sub_01995190(void) { *(int*)((char*)this + 0) = (int)g_023f9644; }

struct C_019951a0 {
    undefined4 * sub_019951a0(byte);
};

// @baa 0x019951a0
undefined4 * C_019951a0::sub_019951a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f9644));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01995320 {
    bool sub_01995320(int);
};

extern "C" __declspec(dllimport) int strchr(...);
// @baa 0x01995320
bool C_01995320::sub_01995320(int param_2)
{
    int param_1 = (int)this;

  char *pcVar1;
  
  pcVar1 = (char *)(strchr(*(char **)(param_1 + 8),param_2));
  return pcVar1 != (char *)0x0;
}

struct C_01995370 { void sub_01995370(int a0); };

// @baa 0x01995370
void C_01995370::sub_01995370(int a0) { *(int*)((char*)this + 8) = a0; }

struct C_01995380 { char* sub_01995380(void); };

// @baa 0x01995380
char* C_01995380::sub_01995380(void) { return (char*)this + 12; }

struct C_01995c90 { int sub_01995c90(void); };

// @baa 0x01995c90
int C_01995c90::sub_01995c90(void) { return *(int*)((char*)this + 0); }

struct C_01995cd0 { int sub_01995cd0(void); };

// @baa 0x01995cd0
int C_01995cd0::sub_01995cd0(void) { return *(int*)((char*)this + 0); }

struct C_01995ce0 { void sub_01995ce0(void); };

// @baa 0x01995ce0
void C_01995ce0::sub_01995ce0(void) { *(int*)((char*)this + 0) = (int)g_023fb610; }

// @baa 0x01995cf0
undefined1 sub_01995cf0(void)
{
  return 1;
}

struct C_01995d30 { int sub_01995d30(void); };

// @baa 0x01995d30
int C_01995d30::sub_01995d30(void) { return *(int*)((char*)this + 0); }

struct C_01995d50 {
    int sub_01995d50(int);
};

// @baa 0x01995d50
int C_01995d50::sub_01995d50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01995d60 { int sub_01995d60(void); };

// @baa 0x01995d60
int C_01995d60::sub_01995d60(void) { return *(int*)((char*)this + 4); }

struct C_01995d70 {
    int sub_01995d70(int);
};

// @baa 0x01995d70
int C_01995d70::sub_01995d70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01995d80 { int sub_01995d80(void); };

// @baa 0x01995d80
int C_01995d80::sub_01995d80(void) { return *(int*)((char*)this + 4); }

struct C_01995d90 {
    int sub_01995d90(int);
};

// @baa 0x01995d90
int C_01995d90::sub_01995d90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01995e20 { int sub_01995e20(void); };

// @baa 0x01995e20
int C_01995e20::sub_01995e20(void) { return *(int*)((char*)this + 4); }

struct C_01995e30 {
    int sub_01995e30(int);
};

// @baa 0x01995e30
int C_01995e30::sub_01995e30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01995e40 { int sub_01995e40(void); };

// @baa 0x01995e40
int C_01995e40::sub_01995e40(void) { return *(int*)((char*)this + 4); }

struct C_01995e50 { C_01995e50* sub_01995e50(void); };

// @baa 0x01995e50
C_01995e50* C_01995e50::sub_01995e50(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01995eb0 { int sub_01995eb0(void); };

// @baa 0x01995eb0
int C_01995eb0::sub_01995eb0(void) { return *(int*)((char*)this + 0); }

struct C_01995ed0 { int sub_01995ed0(void); };

// @baa 0x01995ed0
int C_01995ed0::sub_01995ed0(void) { return *(int*)((char*)this + 0); }

struct C_01995f00 { int sub_01995f00(void); };

// @baa 0x01995f00
int C_01995f00::sub_01995f00(void) { return *(int*)((char*)this + 0); }

struct C_01995f40 { int sub_01995f40(void); };

// @baa 0x01995f40
int C_01995f40::sub_01995f40(void) { return *(int*)((char*)this + 0); }

struct C_01995f50 { int sub_01995f50(void); };

// @baa 0x01995f50
int C_01995f50::sub_01995f50(void) { return *(int*)((char*)this + 0); }

struct C_01995f60 { int sub_01995f60(void); };

// @baa 0x01995f60
int C_01995f60::sub_01995f60(void) { return *(int*)((char*)this + 0); }

struct C_01995fa0 { int sub_01995fa0(void); };

// @baa 0x01995fa0
int C_01995fa0::sub_01995fa0(void) { return *(int*)((char*)this + 0); }

struct C_01996050 {
    int sub_01996050(int);
};

// @baa 0x01996050
int C_01996050::sub_01996050(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01996180 {
    bool sub_01996180();
};

// @baa 0x01996180
bool C_01996180::sub_01996180(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_01996240 { C_01996240* sub_01996240(void); };

// @baa 0x01996240
C_01996240* C_01996240::sub_01996240(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01996290 {
    undefined4 sub_01996290();
};

// @baa 0x01996290
undefined4 C_01996290::sub_01996290(void)
{
    int * param_1 = (int *)this;

  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    return 0;
  }
  return *(undefined4 *)*param_1;
}

struct C_019962d0 {
    uint sub_019962d0();
};

// @baa 0x019962d0
uint C_019962d0::sub_019962d0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019962e0 {
    uint sub_019962e0();
};

// @baa 0x019962e0
uint C_019962e0::sub_019962e0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019962f0 {
    bool sub_019962f0();
};

// @baa 0x019962f0
bool C_019962f0::sub_019962f0(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_01996300 { void sub_01996300(void); };

// @baa 0x01996300
void C_01996300::sub_01996300(void) { *(int*)((char*)this + 0) = -2; }

struct C_01996330 { unsigned sub_01996330(void); };

// @baa 0x01996330
unsigned C_01996330::sub_01996330(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_01996340 { unsigned sub_01996340(void); };

// @baa 0x01996340
unsigned C_01996340::sub_01996340(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_01996350 {
    uint sub_01996350();
};

// @baa 0x01996350
uint C_01996350::sub_01996350(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_01996360 {
    void sub_01996360(uint);
};

// @baa 0x01996360
void C_01996360::sub_01996360(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_01996380 { unsigned sub_01996380(void); };

// @baa 0x01996380
unsigned C_01996380::sub_01996380(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_01996390 { unsigned sub_01996390(void); };

// @baa 0x01996390
unsigned C_01996390::sub_01996390(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_019963a0 {
    uint sub_019963a0();
};

// @baa 0x019963a0
uint C_019963a0::sub_019963a0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_019963b0 {
    void sub_019963b0(uint);
};

// @baa 0x019963b0
void C_019963b0::sub_019963b0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_019963d0 {
    bool sub_019963d0();
};

// @baa 0x019963d0
bool C_019963d0::sub_019963d0(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

// @baa 0x019964b0
undefined1 sub_019964b0(void)
{
  return 0;
}

struct C_019964c0 {
    undefined1 sub_019964c0();
};

// @baa 0x019964c0
undefined1 C_019964c0::sub_019964c0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 8);
}

// @baa 0x019964d0
undefined1 sub_019964d0(void)
{
  return 0;
}

struct C_019964e0 {
    void sub_019964e0(undefined4 *);
};

// @baa 0x019964e0
void C_019964e0::sub_019964e0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = *(undefined4 *)*param_2;
  param_1[1] = *(undefined4 *)param_2[1];
  return;
}

struct C_01996550 {
    bool sub_01996550();
};

// @baa 0x01996550
bool C_01996550::sub_01996550(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -1;
}

struct C_01996560 {
    bool sub_01996560();
};

// @baa 0x01996560
bool C_01996560::sub_01996560(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -1;
}

struct C_01996650 {
    int sub_01996650(int);
};

// @baa 0x01996650
int C_01996650::sub_01996650(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + 8 + param_2 * 0xc;
}

struct C_01996690 {
    undefined4 sub_01996690();
};

// @baa 0x01996690
undefined4 C_01996690::sub_01996690(void)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + 0x10);
}

struct C_019966e0 {
    undefined4 sub_019966e0();
};

// @baa 0x019966e0
undefined4 C_019966e0::sub_019966e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(undefined4 *)(*(int *)*param_1 + 0x10);
}

struct C_019966f0 {
    undefined4 sub_019966f0();
};

// @baa 0x019966f0
undefined4 C_019966f0::sub_019966f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(undefined4 *)(*(int *)*param_1 + 0x10);
}

// @baa 0x01996700
void __stdcall sub_01996700(int a0) {  }

// @baa 0x01996740
void __stdcall sub_01996740(int a0) {  }

// @baa 0x01996810
undefined1 * sub_01996810(undefined1 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = *param_2;
    *param_1 = 4;
    *(undefined4 *)(param_1 + 4) = uVar1;
    return param_1;
  }
  return (undefined1 *)0x0;
}

// @baa 0x019968b0
int sub_019968b0(int a0) { return *(int*)a0; }

// @baa 0x019968f0
undefined4 sub_019968f0(int * param_1)
{
  return *(undefined4 *)(*param_1 + 0x10);
}

struct C_01996900 {
    undefined4 sub_01996900();
};

// @baa 0x01996900
undefined4 C_01996900::sub_01996900(void)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + 0x10);
}

struct C_01996950 { int sub_01996950(void); };

// @baa 0x01996950
int C_01996950::sub_01996950(void) { return *(int*)((char*)this + 0); }

// @baa 0x019969a0
undefined4 sub_019969a0(int * param_1)
{
  return *(undefined4 *)(*param_1 + 0x10);
}

// @baa 0x019969d0
undefined4 sub_019969d0(undefined4 * param_1)
{
  return *(undefined4 *)(*(int *)*param_1 + 0x10);
}

// @baa 0x019969e0
undefined4 sub_019969e0(int * param_1)
{
  return *(undefined4 *)(*param_1 + 0x10);
}

// @baa 0x01996a10
undefined4 sub_01996a10(undefined4 * param_1)
{
  return *(undefined4 *)(*(int *)*param_1 + 0x10);
}

// @baa 0x01996a50
undefined4 sub_01996a50(undefined4 * param_1)
{
  return *(undefined4 *)(*(int *)*param_1 + 0x10);
}

struct C_01996ac0 {
    undefined4 sub_01996ac0();
};

// @baa 0x01996ac0
undefined4 C_01996ac0::sub_01996ac0(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14);
}

struct C_01996bc0 { int sub_01996bc0(void); };

// @baa 0x01996bc0
int C_01996bc0::sub_01996bc0(void) { return *(int*)((char*)this + 8); }

struct C_01996bf0 { int sub_01996bf0(void); };

// @baa 0x01996bf0
int C_01996bf0::sub_01996bf0(void) { return *(int*)((char*)this + 48); }

struct C_01996c20 {
    undefined4 sub_01996c20();
};

// @baa 0x01996c20
undefined4 C_01996c20::sub_01996c20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  if ((*(byte *)(param_1 + 10) & 1) != 0) {
    return *param_1;
  }
  return 0;
}

struct C_01996d00 {
    undefined4 sub_01996d00();
};

// @baa 0x01996d00
undefined4 C_01996d00::sub_01996d00(void)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0x29) & 1) != 0) {
    return *(undefined4 *)(param_1 + 0x1c);
  }
  return 0;
}

struct C_01996d30 { void sub_01996d30(void); };

// @baa 0x01996d30
void C_01996d30::sub_01996d30(void) { *(int*)((char*)this + 0) = (int)g_023fb610; }

struct C_01996d40 {
    undefined4 * sub_01996d40(byte);
};

// @baa 0x01996d40
undefined4 * C_01996d40::sub_01996d40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023fb610));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01997520
void __stdcall sub_01997520(int a0, int a1, int a2, int a3) {  }

// @baa 0x01997530
void __stdcall sub_01997530(int a0, int a1, int a2, int a3) {  }

// @baa 0x01997540
void __stdcall sub_01997540(int a0, int a1, int a2) {  }

// @baa 0x01997550
void sub_01997550(void) { sub_018d3de0(); }

struct C_019975f0 {
    undefined4 * sub_019975f0(byte);
};

// @baa 0x019975f0
undefined4 * C_019975f0::sub_019975f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f9644));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01998840
undefined1 sub_01998840(void)
{
  return 1;
}

struct C_01998850 { int sub_01998850(void); };

// @baa 0x01998850
int C_01998850::sub_01998850(void) { return *(int*)((char*)this + 0); }

struct C_01998930 {
    undefined4 sub_01998930();
};

// @baa 0x01998930
undefined4 C_01998930::sub_01998930(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  if (*(char *)(param_1 + 1) != '\0') {
    return *param_1;
  }
  return 0;
}

struct C_01998940 {
    undefined4 sub_01998940();
};

// @baa 0x01998940
undefined4 C_01998940::sub_01998940(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  if (*(char *)(param_1 + 1) != '\0') {
    return 0;
  }
  return *param_1;
}

struct C_01998970 {
    int sub_01998970();
};

// @baa 0x01998970
int C_01998970::sub_01998970(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0xb4) + -0xc + *(int *)(param_1 + 0xb8) * 0xc;
}

struct C_01999060 {
    undefined4 sub_01999060(int);
};

// @baa 0x01999060
undefined4 C_01999060::sub_01999060(int param_2)
{
    int param_1 = (int)this;

  param_2 = *(int *)(param_1 + 0xdc) - param_2;
  if (param_2 != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0xd8) + -4 + param_2 * 4);
  }
  return 0;
}

struct C_01999370 {
    int sub_01999370();
};

// @baa 0x01999370
int C_01999370::sub_01999370(void)
{
    int * param_1 = (int *)this;

  return *param_1 + -0xc + param_1[1] * 0xc;
}

struct C_01999380 {
    int sub_01999380();
};

// @baa 0x01999380
int C_01999380::sub_01999380(void)
{
    int * param_1 = (int *)this;

  return *param_1 + -8 + param_1[1] * 8;
}

struct C_01999560 {
    int sub_01999560();
};

// @baa 0x01999560
int C_01999560::sub_01999560(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[1] * 0x18;
}

// @baa 0x01999930
undefined4 * sub_01999930(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

extern undefined4 g_023fbd8c;
// @baa 0x019999a0
undefined4 * sub_019999a0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (undefined4)((&g_023fbd8c));
    param_1[1] = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

struct C_01999ad0 { int sub_01999ad0(void); };

// @baa 0x01999ad0
int C_01999ad0::sub_01999ad0(void) { return *(int*)((char*)this + 0); }

struct C_01999b40 {
    undefined4 sub_01999b40();
};

// @baa 0x01999b40
undefined4 C_01999b40::sub_01999b40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(undefined4 *)*param_1;
}

struct C_01999f40 {
    undefined4 * sub_01999f40(byte);
};

// @baa 0x01999f40
undefined4 * C_01999f40::sub_01999f40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023fb610));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0199a120 {
    void sub_0199a120(undefined4, undefined1, undefined4);
};

// @baa 0x0199a120
void C_0199a120::sub_0199a120(undefined4 param_2, undefined1 param_3, undefined4 param_4)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(undefined1 *)(param_1 + 0x4c) = param_3;
  *(undefined4 *)(param_1 + 0x50) = param_4;
  return;
}

struct C_0199a180 {
    int sub_0199a180(int);
};

// @baa 0x0199a180
int C_0199a180::sub_0199a180(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_0199a190 {
    int sub_0199a190(int);
};

// @baa 0x0199a190
int C_0199a190::sub_0199a190(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0199a1a0 {
    void sub_0199a1a0(undefined4, undefined1, undefined4);
};

// @baa 0x0199a1a0
void C_0199a1a0::sub_0199a1a0(undefined4 param_2, undefined1 param_3, undefined4 param_4)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + 0x48) = param_2;
  *(undefined1 *)(iVar1 + 0x4c) = param_3;
  *(undefined4 *)(iVar1 + 0x50) = param_4;
  return;
}

// @baa 0x0199a1c0
void sub_0199a1c0(void) { sub_018d3de0(); }

// @baa 0x0199a920
undefined1 sub_0199a920(void)
{
  return 0;
}

struct C_0199ab20 {
    int sub_0199ab20();
};

// @baa 0x0199ab20
int C_0199ab20::sub_0199ab20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[1] * 0x18;
}

void sub_019995f0();
// @baa 0x0199abb0
void sub_0199abb0(void) { sub_019995f0(); }

struct C_0199abc0 {
    int sub_0199abc0();
};

// @baa 0x0199abc0
int C_0199abc0::sub_0199abc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[1] * 0x14;
}

extern undefined4 g_023fbea4;
// @baa 0x0199ae00
undefined4 * sub_0199ae00(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = 0;
    *param_1 = (undefined4)((&g_023fbea4));
    return param_1;
  }
  return (undefined4 *)0x0;
}

struct C_0199b890 { C_0199b890* sub_0199b890(void); };

// @baa 0x0199b890
C_0199b890* C_0199b890::sub_0199b890(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x0199b8a0
void sub_0199b8a0(void) { sub_019995f0(); }

void sub_0199ac10();
// @baa 0x0199b8d0
void sub_0199b8d0(void) { sub_0199ac10(); }

void sub_0199ace0();
// @baa 0x0199b8e0
void sub_0199b8e0(void) { sub_0199ace0(); }

void sub_0199ae30();
// @baa 0x0199ba90
void sub_0199ba90(void) { sub_0199ae30(); }

void sub_0199baa0();
// @baa 0x0199c890
void sub_0199c890(void) { sub_0199baa0(); }

void sub_0199b990();
// @baa 0x0199c970
void sub_0199c970(void) { sub_0199b990(); }

void sub_0199b9f0();
// @baa 0x0199c980
void sub_0199c980(void) { sub_0199b9f0(); }

struct C_0199d880 {
    void sub_0199d880(int);
};

int sub_0199c920(void);
extern "C" __declspec(dllimport) int memmove(...);
// @baa 0x0199d880
void C_0199d880::sub_0199d880(int param_2)
{
    int * param_1 = (int *)this;

  void *_Dst;
  
  if (param_1[1] == 1) {
    sub_0199c920();
    return;
  }
  _Dst = (void *)(*param_1 + param_2 * 4);
  memmove(_Dst,(void *)((int)_Dst + 4),(param_1[1] - param_2) * 4 - 4);
  param_1[1] = param_1[1] + -1;
  return;
}

void sub_0199caf0();
// @baa 0x0199d8c0
void sub_0199d8c0(void) { sub_0199caf0(); }

struct C_0199d910 { C_0199d910* sub_0199d910(void); };

// @baa 0x0199d910
C_0199d910* C_0199d910::sub_0199d910(void) { *(int*)((char*)this + 0) = 0; return this; }

void sub_0190c1f0();
// @baa 0x0199d920
void sub_0199d920(void) { sub_0190c1f0(); }

struct C_0199d9f0 { C_0199d9f0* sub_0199d9f0(void); };

// @baa 0x0199d9f0
C_0199d9f0* C_0199d9f0::sub_0199d9f0(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x0199da00
void sub_0199da00(void) { sub_0199b990(); }

struct C_0199da60 { C_0199da60* sub_0199da60(void); };

// @baa 0x0199da60
C_0199da60* C_0199da60::sub_0199da60(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x0199da70
void sub_0199da70(void) { sub_0199b9f0(); }

void sub_0196ea80();
// @baa 0x0199db00
void sub_0199db00(void) { sub_0196ea80(); }

struct C_0199f340 { C_0199f340* sub_0199f340(void); };

// @baa 0x0199f340
C_0199f340* C_0199f340::sub_0199f340(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x0199f350
void sub_0199f350(void) { sub_0190c1f0(); }

void sub_0199d990();
// @baa 0x0199f410
void sub_0199f410(void) { sub_0199d990(); }

struct C_0199f4c0 { C_0199f4c0* sub_0199f4c0(void); };

// @baa 0x0199f4c0
C_0199f4c0* C_0199f4c0::sub_0199f4c0(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x0199f4d0
void sub_0199f4d0(void) { sub_0199b990(); }

struct C_0199f540 { C_0199f540* sub_0199f540(void); };

// @baa 0x0199f540
C_0199f540* C_0199f540::sub_0199f540(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x0199f550
void sub_0199f550(void) { sub_0199b9f0(); }

struct C_0199f620 { C_0199f620* sub_0199f620(void); };

// @baa 0x0199f620
C_0199f620* C_0199f620::sub_0199f620(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x0199f630
void sub_0199f630(void) { sub_0196ea80(); }

struct C_0199f700 { C_0199f700* sub_0199f700(void); };

// @baa 0x0199f700
C_0199f700* C_0199f700::sub_0199f700(void) { *(int*)((char*)this + 0) = 0; return this; }

void sub_0190c410();
// @baa 0x0199f710
void sub_0199f710(void) { sub_0190c410(); }

struct C_0199fe20 { C_0199fe20* sub_0199fe20(void); };

// @baa 0x0199fe20
C_0199fe20* C_0199fe20::sub_0199fe20(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x0199fe30
void sub_0199fe30(void) { sub_0199b990(); }

struct C_0199fec0 { C_0199fec0* sub_0199fec0(void); };

// @baa 0x0199fec0
C_0199fec0* C_0199fec0::sub_0199fec0(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x0199fed0
void sub_0199fed0(void) { sub_0199b9f0(); }

struct C_0199ffa0 { C_0199ffa0* sub_0199ffa0(void); };

// @baa 0x0199ffa0
C_0199ffa0* C_0199ffa0::sub_0199ffa0(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x0199ffb0
void sub_0199ffb0(void) { sub_0196ea80(); }

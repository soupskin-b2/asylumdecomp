// GFx_19c0000.cpp (part 1 of 4): 242 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    bool sub_019c0120();
};

// @baa 0x019c0120
bool C::sub_019c0120(void)
{
    char * param_1 = (char *)this;

  return *param_1 == '\0';
}

struct C_019c0130 {
    byte sub_019c0130();
};

// @baa 0x019c0130
byte C_019c0130::sub_019c0130(void)
{
    byte * param_1 = (byte *)this;

  return *param_1 >> 4 & 1;
}

struct C_019c0140 {
    byte sub_019c0140();
};

// @baa 0x019c0140
byte C_019c0140::sub_019c0140(void)
{
    byte * param_1 = (byte *)this;

  return *param_1 >> 6 & 1;
}

struct C_019c0150 { int sub_019c0150(void); };

// @baa 0x019c0150
int C_019c0150::sub_019c0150(void) { return *(int*)((char*)this + 4); }

struct C_019c0160 {
    bool sub_019c0160();
};

// @baa 0x019c0160
bool C_019c0160::sub_019c0160(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0xc) != 0;
}

struct C_019c0170 { int sub_019c0170(void); };

// @baa 0x019c0170
int C_019c0170::sub_019c0170(void) { return *(int*)((char*)this + 12); }

struct C_019c0180 { char* sub_019c0180(void); };

// @baa 0x019c0180
char* C_019c0180::sub_019c0180(void) { return (char*)this + 92; }

struct C_019c0190 { char* sub_019c0190(void); };

// @baa 0x019c0190
char* C_019c0190::sub_019c0190(void) { return (char*)this + 104; }

struct C_019c01a0 {
    byte sub_019c01a0();
};

// @baa 0x019c01a0
byte C_019c01a0::sub_019c01a0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x3c) >> 3 & 1;
}

struct C_019c0210 {
    int sub_019c0210(int);
};

// @baa 0x019c0210
int C_019c0210::sub_019c0210(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_019c0220 {
    int sub_019c0220(int);
};

// @baa 0x019c0220
int C_019c0220::sub_019c0220(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_019c0230 { int sub_019c0230(void); };

// @baa 0x019c0230
int C_019c0230::sub_019c0230(void) { return *(int*)((char*)this + 4); }

struct C_019c0240 {
    int sub_019c0240(int);
};

// @baa 0x019c0240
int C_019c0240::sub_019c0240(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_019c0250 {
    int sub_019c0250(int);
};

// @baa 0x019c0250
int C_019c0250::sub_019c0250(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_019c0260 { int sub_019c0260(void); };

// @baa 0x019c0260
int C_019c0260::sub_019c0260(void) { return *(int*)((char*)this + 4); }

struct C_019c0270 { int sub_019c0270(void); };

// @baa 0x019c0270
int C_019c0270::sub_019c0270(void) { return *(int*)((char*)this + 0); }

struct C_019c02a0 {
    uint sub_019c02a0();
};

// @baa 0x019c02a0
uint C_019c02a0::sub_019c02a0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019c02b0 {
    uint sub_019c02b0();
};

// @baa 0x019c02b0
uint C_019c02b0::sub_019c02b0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019c02c0 { unsigned sub_019c02c0(void); };

// @baa 0x019c02c0
unsigned C_019c02c0::sub_019c02c0(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_019c02d0 { unsigned sub_019c02d0(void); };

// @baa 0x019c02d0
unsigned C_019c02d0::sub_019c02d0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_019c02e0 {
    uint sub_019c02e0();
};

// @baa 0x019c02e0
uint C_019c02e0::sub_019c02e0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_019c02f0 {
    void sub_019c02f0(uint);
};

// @baa 0x019c02f0
void C_019c02f0::sub_019c02f0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_019c0310 { unsigned sub_019c0310(void); };

// @baa 0x019c0310
unsigned C_019c0310::sub_019c0310(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_019c0320 { unsigned sub_019c0320(void); };

// @baa 0x019c0320
unsigned C_019c0320::sub_019c0320(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_019c0330 {
    uint sub_019c0330();
};

// @baa 0x019c0330
uint C_019c0330::sub_019c0330(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_019c0340 {
    void sub_019c0340(uint);
};

// @baa 0x019c0340
void C_019c0340::sub_019c0340(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_019c0490 {
    bool sub_019c0490();
};

// @baa 0x019c0490
bool C_019c0490::sub_019c0490(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x18) == 0;
}

void sub_019c1980();
// @baa 0x019c1bd0
void sub_019c1bd0(void) { sub_019c1980(); }

void sub_019c1bf0();
// @baa 0x019c1cb0
void sub_019c1cb0(void) { sub_019c1bf0(); }

void sub_019c1e30();
// @baa 0x019c1f20
void sub_019c1f20(void) { sub_019c1e30(); }

struct C_019c2a60 {
    uint sub_019c2a60();
};

// @baa 0x019c2a60
uint C_019c2a60::sub_019c2a60(void)
{
    int param_1 = (int)this;

  byte bVar1;
  
  if (*(char *)(param_1 + 0x8f) != '\0') {
    bVar1 = *(char *)(param_1 + 0x8f) - 1;
    *(byte *)(param_1 + 0x8f) = bVar1;
    return (uint)bVar1;
  }
  return 0xffffffff;
}

struct C_019c2aa0 { int sub_019c2aa0(void); };

// @baa 0x019c2aa0
int C_019c2aa0::sub_019c2aa0(void) { return *(int*)((char*)this + 48); }

struct C_019c2ab0 { int sub_019c2ab0(void); };

// @baa 0x019c2ab0
int C_019c2ab0::sub_019c2ab0(void) { return *(int*)((char*)this + 28); }

// @baa 0x019c2d20
void sub_019c2d20(void) {  }

// @baa 0x019c2d30
void sub_019c2d30(void) {  }

struct C_019c2d40 {
    int sub_019c2d40(int);
};

// @baa 0x019c2d40
int C_019c2d40::sub_019c2d40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_019c2d50 { int sub_019c2d50(void); };

// @baa 0x019c2d50
int C_019c2d50::sub_019c2d50(void) { return *(int*)((char*)this + 4); }

struct C_019c2d60 {
    int sub_019c2d60(int);
};

// @baa 0x019c2d60
int C_019c2d60::sub_019c2d60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_019c2d70 { int sub_019c2d70(void); };

// @baa 0x019c2d70
int C_019c2d70::sub_019c2d70(void) { return *(int*)((char*)this + 4); }

struct C_019c2d80 {
    int sub_019c2d80(int);
};

// @baa 0x019c2d80
int C_019c2d80::sub_019c2d80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_019c2d90 { int sub_019c2d90(void); };

// @baa 0x019c2d90
int C_019c2d90::sub_019c2d90(void) { return *(int*)((char*)this + 4); }

struct C_019c2da0 {
    int sub_019c2da0(int);
};

// @baa 0x019c2da0
int C_019c2da0::sub_019c2da0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_019c2db0 { int sub_019c2db0(void); };

// @baa 0x019c2db0
int C_019c2db0::sub_019c2db0(void) { return *(int*)((char*)this + 4); }

struct C_019c2dc0 {
    int sub_019c2dc0();
};

// @baa 0x019c2dc0
int C_019c2dc0::sub_019c2dc0(void)
{
    int * param_1 = (int *)this;

  return param_1[1] * 0x10 + -0x10 + *param_1;
}

struct C_019c2ee0 { C_019c2ee0* sub_019c2ee0(void); };

// @baa 0x019c2ee0
C_019c2ee0* C_019c2ee0::sub_019c2ee0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019c2f40 { int sub_019c2f40(void); };

// @baa 0x019c2f40
int C_019c2f40::sub_019c2f40(void) { return *(int*)((char*)this + 0); }

struct C_019c2ff0 {
    uint sub_019c2ff0();
};

// @baa 0x019c2ff0
uint C_019c2ff0::sub_019c2ff0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019c3000 {
    uint sub_019c3000();
};

// @baa 0x019c3000
uint C_019c3000::sub_019c3000(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019c3010 {
    uint sub_019c3010();
};

// @baa 0x019c3010
uint C_019c3010::sub_019c3010(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019c3020 { unsigned sub_019c3020(void); };

// @baa 0x019c3020
unsigned C_019c3020::sub_019c3020(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_019c3030 { unsigned sub_019c3030(void); };

// @baa 0x019c3030
unsigned C_019c3030::sub_019c3030(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_019c3040 {
    uint sub_019c3040();
};

// @baa 0x019c3040
uint C_019c3040::sub_019c3040(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_019c3050 {
    void sub_019c3050(uint);
};

// @baa 0x019c3050
void C_019c3050::sub_019c3050(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_019c3070 { unsigned sub_019c3070(void); };

// @baa 0x019c3070
unsigned C_019c3070::sub_019c3070(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_019c3080 { unsigned sub_019c3080(void); };

// @baa 0x019c3080
unsigned C_019c3080::sub_019c3080(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_019c3090 {
    uint sub_019c3090();
};

// @baa 0x019c3090
uint C_019c3090::sub_019c3090(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_019c30a0 {
    void sub_019c30a0(uint);
};

// @baa 0x019c30a0
void C_019c30a0::sub_019c30a0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_019c30c0 {
    uint sub_019c30c0();
};

// @baa 0x019c30c0
uint C_019c30c0::sub_019c30c0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019c30d0 { unsigned sub_019c30d0(void); };

// @baa 0x019c30d0
unsigned C_019c30d0::sub_019c30d0(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_019c30e0 { unsigned sub_019c30e0(void); };

// @baa 0x019c30e0
unsigned C_019c30e0::sub_019c30e0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_019c30f0 {
    uint sub_019c30f0();
};

// @baa 0x019c30f0
uint C_019c30f0::sub_019c30f0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_019c3100 {
    void sub_019c3100(uint);
};

// @baa 0x019c3100
void C_019c3100::sub_019c3100(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_019c3120 { unsigned sub_019c3120(void); };

// @baa 0x019c3120
unsigned C_019c3120::sub_019c3120(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_019c3130 { unsigned sub_019c3130(void); };

// @baa 0x019c3130
unsigned C_019c3130::sub_019c3130(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_019c3140 {
    uint sub_019c3140();
};

// @baa 0x019c3140
uint C_019c3140::sub_019c3140(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_019c3150 {
    void sub_019c3150(uint);
};

// @baa 0x019c3150
void C_019c3150::sub_019c3150(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

// @baa 0x019c3170
int sub_019c3170(int a0) { return a0; }

// @baa 0x019c3180
int sub_019c3180(int a0) { return a0; }

void sub_019c3950();
// @baa 0x019c3af0
void sub_019c3af0(void) { sub_019c3950(); }

void sub_019c39c0();
// @baa 0x019c3b00
void sub_019c3b00(void) { sub_019c39c0(); }

void sub_019c3a30();
// @baa 0x019c3b10
void sub_019c3b10(void) { sub_019c3a30(); }

void sub_019c3f90();
// @baa 0x019c4080
void sub_019c4080(void) { sub_019c3f90(); }

void sub_019c3ff0();
// @baa 0x019c40a0
void sub_019c40a0(void) { sub_019c3ff0(); }

struct C_019c41d0 {
    undefined4 sub_019c41d0(byte);
};

int sub_00402660(...);
int sub_019c40f0(void);
// @baa 0x019c41d0
undefined4 C_019c41d0::sub_019c41d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_019c40f0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x019c41f0
int sub_019c41f0(int param_1)
{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return param_1;
  }
  return 0;
}

void sub_019c4300();
// @baa 0x019c4490
void sub_019c4490(void) { sub_019c4300(); }

// @baa 0x019c49f0
int sub_019c49f0(void) { return 12; }

struct C_019c4ea0 {
    bool sub_019c4ea0(int);
};

// @baa 0x019c4ea0
bool C_019c4ea0::sub_019c4ea0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 == param_2;
}

struct C_019c4eb0 {
    byte sub_019c4eb0();
};

// @baa 0x019c4eb0
byte C_019c4eb0::sub_019c4eb0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x44) & 1;
}

struct C_019c4ec0 {
    byte sub_019c4ec0();
};

// @baa 0x019c4ec0
byte C_019c4ec0::sub_019c4ec0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x44) >> 1 & 1;
}

struct C_019c4ed0 {
    byte sub_019c4ed0();
};

// @baa 0x019c4ed0
byte C_019c4ed0::sub_019c4ed0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x44) >> 2 & 1;
}

struct C_019c4ee0 {
    byte sub_019c4ee0();
};

// @baa 0x019c4ee0
byte C_019c4ee0::sub_019c4ee0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x44) >> 3 & 1;
}

struct C_019c4ef0 { int sub_019c4ef0(void); };

// @baa 0x019c4ef0
int C_019c4ef0::sub_019c4ef0(void) { return *(int*)((char*)this + 152); }

// @baa 0x019c4f00
int sub_019c4f00(void) { return 3; }

struct C_019c4f10 { int sub_019c4f10(void); };

// @baa 0x019c4f10
int C_019c4f10::sub_019c4f10(void) { return *(int*)((char*)this + 156); }

// @baa 0x019c4fe0
int sub_019c4fe0(void) { return -268455985; }

struct C_019c5080 { int sub_019c5080(void); };

// @baa 0x019c5080
int C_019c5080::sub_019c5080(void) { return *(int*)((char*)this + 0); }

struct C_019c55e0 { int sub_019c55e0(void); };

// @baa 0x019c55e0
int C_019c55e0::sub_019c55e0(void) { return *(int*)((char*)this + 184); }

struct C_019c55f0 { int sub_019c55f0(void); };

// @baa 0x019c55f0
int C_019c55f0::sub_019c55f0(void) { return *(int*)((char*)this + 184); }

// @baa 0x019c6c60
undefined1 sub_019c6c60(void)
{
  return 1;
}

// @baa 0x019c7150
int sub_019c7150(void) { return 33024; }

struct C_019c7530 {
    undefined1 sub_019c7530();
};

// @baa 0x019c7530
undefined1 C_019c7530::sub_019c7530(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x18);
}

struct C_019c7540 { int sub_019c7540(void); };

// @baa 0x019c7540
int C_019c7540::sub_019c7540(void) { return *(int*)((char*)this + 20); }

struct C_019c7590 { float sub_019c7590(void); };

// @baa 0x019c7590
float C_019c7590::sub_019c7590(void) { return *(float*)((char*)this + 24); }

struct C_019c75a0 {
    byte sub_019c75a0();
};

// @baa 0x019c75a0
byte C_019c75a0::sub_019c75a0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 1) & 1;
}

void sub_018d3de0();
// @baa 0x019c7670
void sub_019c7670(void) { sub_018d3de0(); }

extern char g_023f5e04[];
struct C_019c76f0 { void sub_019c76f0(void); };

// @baa 0x019c76f0
void C_019c76f0::sub_019c76f0(void) { *(int*)((char*)this + 0) = (int)g_023f5e04; }

extern char g_023f5994[];
struct C_019c7700 { void sub_019c7700(void); };

// @baa 0x019c7700
void C_019c7700::sub_019c7700(void) { *(int*)((char*)this + 0) = (int)g_023f5994; }

DWORD __stdcall sub_018d7150(DWORD size);
void __stdcall sub_018d7170(DWORD ptr);
struct C_019c8240 {
    char pad[0x12];
    WORD num;
    DWORD data;
    unsigned char sub_019c8240(WORD nNew);
};

// @baa 0x019c8240
unsigned char C_019c8240::sub_019c8240(WORD nNew)
{
    if (nNew == num)
        return 1;
    DWORD pNew = 0;
    if (nNew != 0) {
        pNew = sub_018d7150((DWORD)nNew * 8);
        if (pNew == 0)
            return 0;
    }
    if (data != 0) {
        DWORD n = (nNew < num) ? nNew : num;
        DWORD i = 0;
        if (n)
            while (i < n) {
                BYTE *s = (BYTE *)data + i * 8;
                BYTE *d = (BYTE *)pNew + i * 8;
                *d = *s;
                *(DWORD *)(d + 4) = *(DWORD *)(s + 4);
                i++;
            }
        sub_018d7170(data);
    }
    data = pNew;
    num = nNew;
    return 1;
}

extern char g_023feaf0[];
struct C_019c8360 { C_019c8360* sub_019c8360(void); };

// @baa 0x019c8360
C_019c8360* C_019c8360::sub_019c8360(void) { *(int*)((char*)this + 0) = (int)g_023feaf0; return this; }

struct C_019c8370 {
    undefined4 * sub_019c8370(byte);
};

// @baa 0x019c8370
undefined4 * C_019c8370::sub_019c8370(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f5e04));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023feb04[];
struct C_019c8390 { C_019c8390* sub_019c8390(void); };

// @baa 0x019c8390
C_019c8390* C_019c8390::sub_019c8390(void) { *(int*)((char*)this + 0) = (int)g_023feb04; return this; }

// @baa 0x019c83d0
int __stdcall sub_019c83d0(int a0) { return 3; }

struct C_019c83f0 {
    undefined4 * sub_019c83f0(byte);
};

// @baa 0x019c83f0
undefined4 * C_019c83f0::sub_019c83f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f5994));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_019c9150 {
    undefined4 sub_019c9150(byte);
};

int sub_019c8640(void);
// @baa 0x019c9150
undefined4 C_019c9150::sub_019c9150(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_019c8640();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x019c9eb0
float10 sub_019c9eb0(float param_1)
{
  return (float10)param_1;
}

// @baa 0x019c9ec0
int sub_019c9ec0(int a0) { return a0; }

// @baa 0x019c9ed0
int sub_019c9ed0(int a0) { return a0; }

// @baa 0x019c9ee0
float10 sub_019c9ee0(float param_1)
{
  return (float10)param_1;
}

struct C_019c9fb0 {
    uint sub_019c9fb0();
};

// @baa 0x019c9fb0
uint C_019c9fb0::sub_019c9fb0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x24) >> 0xc & 1;
}

struct C_019c9fe0 {
    uint sub_019c9fe0();
};

// @baa 0x019c9fe0
uint C_019c9fe0::sub_019c9fe0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x1c) & 3;
}

struct C_019c9ff0 { float sub_019c9ff0(void); };

// @baa 0x019c9ff0
float C_019c9ff0::sub_019c9ff0(void) { return *(float*)((char*)this + 32); }

struct C_019ca000 {
    void sub_019ca000(int);
};

// @baa 0x019ca000
void C_019ca000::sub_019ca000(int param_2)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2;
  return;
}

struct C_019ca010 {
    byte sub_019ca010();
};

// @baa 0x019ca010
byte C_019ca010::sub_019ca010(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 1) >> 1 & 1;
}

struct C_019ca040 {
    byte sub_019ca040();
};

// @baa 0x019ca040
byte C_019ca040::sub_019ca040(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x10) & 6;
}

struct C_019ca0c0 {
    undefined4 sub_019ca0c0();
};

// @baa 0x019ca0c0
undefined4 C_019ca0c0::sub_019ca0c0(void)
{
    int param_1 = (int)this;

  return **(undefined4 **)(param_1 + 0xc);
}

struct C_019ca0d0 { int sub_019ca0d0(void); };

// @baa 0x019ca0d0
int C_019ca0d0::sub_019ca0d0(void) { return *(int*)((char*)this + 0); }

struct C_019ca0e0 {
    int sub_019ca0e0(int);
};

// @baa 0x019ca0e0
int C_019ca0e0::sub_019ca0e0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + 4) * param_2 + *(int *)(param_1 + 8);
}

struct C_019ca120 { C_019ca120* sub_019ca120(void); };

// @baa 0x019ca120
C_019ca120* C_019ca120::sub_019ca120(void) { return this; }

struct C_019ca130 {
    undefined1 sub_019ca130();
};

// @baa 0x019ca130
undefined1 C_019ca130::sub_019ca130(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x4c);
}

struct C_019ca190 { void sub_019ca190(int a0); };

// @baa 0x019ca190
void C_019ca190::sub_019ca190(int a0) { *(int*)((char*)this + 0) = a0; }

struct C_019ca1a0 { void sub_019ca1a0(int a0); };

// @baa 0x019ca1a0
void C_019ca1a0::sub_019ca1a0(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_019ca1b0 { void sub_019ca1b0(int a0); };

// @baa 0x019ca1b0
void C_019ca1b0::sub_019ca1b0(int a0) { *(int*)((char*)this + 8) = a0; }

struct C_019ca1e0 {
    void sub_019ca1e0(int);
};

// @baa 0x019ca1e0
void C_019ca1e0::sub_019ca1e0(int param_2)
{
    int param_1 = (int)this;

  int *piVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 0x14);
    *piVar1 = *piVar1 + param_2;
  }
  return;
}

struct C_019ca200 { int sub_019ca200(void); };

// @baa 0x019ca200
int C_019ca200::sub_019ca200(void) { return *(int*)((char*)this + 4); }

struct C_019ca230 {
    void sub_019ca230(undefined1);
};

// @baa 0x019ca230
void C_019ca230::sub_019ca230(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x2c) = param_2;
  return;
}

struct C_019ca240 {
    undefined1 sub_019ca240();
};

// @baa 0x019ca240
undefined1 C_019ca240::sub_019ca240(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x2d);
}

struct C_019ca2b0 { void sub_019ca2b0(int a0); };

// @baa 0x019ca2b0
void C_019ca2b0::sub_019ca2b0(int a0) { *(int*)((char*)this + 144) = a0; }

struct C_019ca2c0 {
    undefined1 sub_019ca2c0();
};

// @baa 0x019ca2c0
undefined1 C_019ca2c0::sub_019ca2c0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x8c);
}

struct C_019ca2d0 { void sub_019ca2d0(int a0); };

// @baa 0x019ca2d0
void C_019ca2d0::sub_019ca2d0(int a0) { *(int*)((char*)this + 0) = a0; }

struct C_019ca2e0 {
    void sub_019ca2e0(undefined1);
};

// @baa 0x019ca2e0
void C_019ca2e0::sub_019ca2e0(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 4) = param_2;
  return;
}

struct C_019ca2f0 {
    void sub_019ca2f0(undefined1);
};

// @baa 0x019ca2f0
void C_019ca2f0::sub_019ca2f0(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 6) = param_2;
  return;
}

struct C_019ca300 {
    void sub_019ca300(undefined1);
};

// @baa 0x019ca300
void C_019ca300::sub_019ca300(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 5) = param_2;
  return;
}

struct C_019ca310 {
    void sub_019ca310(undefined1);
};

// @baa 0x019ca310
void C_019ca310::sub_019ca310(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 7) = param_2;
  return;
}

struct C_019ca320 {
    void sub_019ca320(undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x019ca320
void C_019ca320::sub_019ca320(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}

struct C_019ca340 { void sub_019ca340(int a0); };

// @baa 0x019ca340
void C_019ca340::sub_019ca340(int a0) { *(int*)((char*)this + 16) = a0; }

// @baa 0x019ca350
void __stdcall sub_019ca350(int a0) {  }

// @baa 0x019ca360
void __stdcall sub_019ca360(int a0) {  }

struct C_019ca5d0 {
    int sub_019ca5d0(int);
};

// @baa 0x019ca5d0
int C_019ca5d0::sub_019ca5d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_019ca5e0 { int sub_019ca5e0(void); };

// @baa 0x019ca5e0
int C_019ca5e0::sub_019ca5e0(void) { return *(int*)((char*)this + 4); }

struct C_019ca610 { int sub_019ca610(void); };

// @baa 0x019ca610
int C_019ca610::sub_019ca610(void) { return *(int*)((char*)this + 0); }

struct C_019ca620 {
    int sub_019ca620(uint);
};

// @baa 0x019ca620
int C_019ca620::sub_019ca620(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0xc;
}

struct C_019ca660 { int sub_019ca660(void); };

// @baa 0x019ca660
int C_019ca660::sub_019ca660(void) { return *(int*)((char*)this + 0); }

struct C_019ca670 {
    int sub_019ca670(uint);
};

// @baa 0x019ca670
int C_019ca670::sub_019ca670(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0xc;
}

struct C_019ca690 {
    int sub_019ca690(int);
};

// @baa 0x019ca690
int C_019ca690::sub_019ca690(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_019ca6a0 {
    int sub_019ca6a0(int);
};

// @baa 0x019ca6a0
int C_019ca6a0::sub_019ca6a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 2;
}

struct C_019ca6b0 { int sub_019ca6b0(void); };

// @baa 0x019ca6b0
int C_019ca6b0::sub_019ca6b0(void) { return *(int*)((char*)this + 4); }

struct C_019ca6c0 {
    int sub_019ca6c0(int);
};

// @baa 0x019ca6c0
int C_019ca6c0::sub_019ca6c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 2;
}

struct C_019ca6d0 {
    int sub_019ca6d0(int);
};

// @baa 0x019ca6d0
int C_019ca6d0::sub_019ca6d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 2;
}

struct C_019ca6e0 { int sub_019ca6e0(void); };

// @baa 0x019ca6e0
int C_019ca6e0::sub_019ca6e0(void) { return *(int*)((char*)this + 4); }

struct C_019ca6f0 {
    int sub_019ca6f0(int);
};

// @baa 0x019ca6f0
int C_019ca6f0::sub_019ca6f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_019ca700 { int sub_019ca700(void); };

// @baa 0x019ca700
int C_019ca700::sub_019ca700(void) { return *(int*)((char*)this + 4); }

struct C_019ca710 {
    int sub_019ca710();
};

// @baa 0x019ca710
int C_019ca710::sub_019ca710(void)
{
    int * param_1 = (int *)this;

  return *param_1 + -0x28 + param_1[1] * 0x28;
}

struct C_019ca720 {
    int sub_019ca720(int);
};

// @baa 0x019ca720
int C_019ca720::sub_019ca720(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_019ca730 { int sub_019ca730(void); };

// @baa 0x019ca730
int C_019ca730::sub_019ca730(void) { return *(int*)((char*)this + 4); }

struct C_019ca740 {
    int sub_019ca740();
};

// @baa 0x019ca740
int C_019ca740::sub_019ca740(void)
{
    int * param_1 = (int *)this;

  return param_1[1] * 0x54 + -0x54 + *param_1;
}

struct C_019ca750 {
    int sub_019ca750(int);
};

// @baa 0x019ca750
int C_019ca750::sub_019ca750(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_019ca760 { int sub_019ca760(void); };

// @baa 0x019ca760
int C_019ca760::sub_019ca760(void) { return *(int*)((char*)this + 4); }

struct C_019ca7b0 { int sub_019ca7b0(void); };

// @baa 0x019ca7b0
int C_019ca7b0::sub_019ca7b0(void) { return *(int*)((char*)this + 0); }

struct C_019ca7c0 {
    int sub_019ca7c0(uint);
};

// @baa 0x019ca7c0
int C_019ca7c0::sub_019ca7c0(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 10) * 4) + (param_2 & 0x3ff) * 8;
}

struct C_019ca900 { int sub_019ca900(void); };

// @baa 0x019ca900
int C_019ca900::sub_019ca900(void) { return *(int*)((char*)this + 0); }

struct C_019ca910 {
    int sub_019ca910(uint);
};

// @baa 0x019ca910
int C_019ca910::sub_019ca910(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0x18;
}

struct C_019ca990 { int sub_019ca990(void); };

// @baa 0x019ca990
int C_019ca990::sub_019ca990(void) { return *(int*)((char*)this + 0); }

struct C_019ca9a0 {
    int sub_019ca9a0(uint);
};

// @baa 0x019ca9a0
int C_019ca9a0::sub_019ca9a0(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 10) * 4) + (param_2 & 0x3ff) * 0xc;
}

struct C_019ca9e0 {
    int sub_019ca9e0(int);
};

// @baa 0x019ca9e0
int C_019ca9e0::sub_019ca9e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x150 + *param_1;
}

struct C_019ca9f0 { int sub_019ca9f0(void); };

// @baa 0x019ca9f0
int C_019ca9f0::sub_019ca9f0(void) { return *(int*)((char*)this + 4); }

struct C_019caa20 {
    int sub_019caa20(int);
};

// @baa 0x019caa20
int C_019caa20::sub_019caa20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_019cac30 {
    uint sub_019cac30();
};

// @baa 0x019cac30
uint C_019cac30::sub_019cac30(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019cac40 {
    uint sub_019cac40();
};

// @baa 0x019cac40
uint C_019cac40::sub_019cac40(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019cac50 {
    uint sub_019cac50();
};

// @baa 0x019cac50
uint C_019cac50::sub_019cac50(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019cac60 {
    uint sub_019cac60();
};

// @baa 0x019cac60
uint C_019cac60::sub_019cac60(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019cac70 {
    uint sub_019cac70();
};

// @baa 0x019cac70
uint C_019cac70::sub_019cac70(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019cac80 {
    uint sub_019cac80();
};

// @baa 0x019cac80
uint C_019cac80::sub_019cac80(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019cac90 {
    uint sub_019cac90();
};

// @baa 0x019cac90
uint C_019cac90::sub_019cac90(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019caca0 { unsigned sub_019caca0(void); };

// @baa 0x019caca0
unsigned C_019caca0::sub_019caca0(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_019cacb0 { unsigned sub_019cacb0(void); };

// @baa 0x019cacb0
unsigned C_019cacb0::sub_019cacb0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_019cacc0 {
    uint sub_019cacc0();
};

// @baa 0x019cacc0
uint C_019cacc0::sub_019cacc0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_019cacd0 {
    void sub_019cacd0(uint);
};

// @baa 0x019cacd0
void C_019cacd0::sub_019cacd0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_019cacf0 { unsigned sub_019cacf0(void); };

// @baa 0x019cacf0
unsigned C_019cacf0::sub_019cacf0(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_019cad00 { unsigned sub_019cad00(void); };

// @baa 0x019cad00
unsigned C_019cad00::sub_019cad00(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_019cad10 {
    uint sub_019cad10();
};

// @baa 0x019cad10
uint C_019cad10::sub_019cad10(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_019cad20 {
    void sub_019cad20(uint);
};

// @baa 0x019cad20
void C_019cad20::sub_019cad20(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_019cad40 { unsigned sub_019cad40(void); };

// @baa 0x019cad40
unsigned C_019cad40::sub_019cad40(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_019cad50 { unsigned sub_019cad50(void); };

// @baa 0x019cad50
unsigned C_019cad50::sub_019cad50(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_019cad60 {
    uint sub_019cad60();
};

// @baa 0x019cad60
uint C_019cad60::sub_019cad60(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_019cad70 {
    void sub_019cad70(uint);
};

// @baa 0x019cad70
void C_019cad70::sub_019cad70(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_019cad90 { unsigned sub_019cad90(void); };

// @baa 0x019cad90
unsigned C_019cad90::sub_019cad90(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_019cada0 { unsigned sub_019cada0(void); };

// @baa 0x019cada0
unsigned C_019cada0::sub_019cada0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_019cadb0 {
    uint sub_019cadb0();
};

// @baa 0x019cadb0
uint C_019cadb0::sub_019cadb0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_019cadc0 {
    void sub_019cadc0(uint);
};

// @baa 0x019cadc0
void C_019cadc0::sub_019cadc0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_019cade0 { unsigned sub_019cade0(void); };

// @baa 0x019cade0
unsigned C_019cade0::sub_019cade0(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_019cadf0 { unsigned sub_019cadf0(void); };

// @baa 0x019cadf0
unsigned C_019cadf0::sub_019cadf0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_019cae00 {
    uint sub_019cae00();
};

// @baa 0x019cae00
uint C_019cae00::sub_019cae00(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_019cae10 {
    void sub_019cae10(uint);
};

// @baa 0x019cae10
void C_019cae10::sub_019cae10(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_019cae30 {
    uint sub_019cae30();
};

// @baa 0x019cae30
uint C_019cae30::sub_019cae30(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019cae40 { unsigned sub_019cae40(void); };

// @baa 0x019cae40
unsigned C_019cae40::sub_019cae40(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_019cae50 { unsigned sub_019cae50(void); };

// @baa 0x019cae50
unsigned C_019cae50::sub_019cae50(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_019cae60 {
    uint sub_019cae60();
};

// @baa 0x019cae60
uint C_019cae60::sub_019cae60(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_019cae70 {
    void sub_019cae70(uint);
};

// @baa 0x019cae70
void C_019cae70::sub_019cae70(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_019cae90 { unsigned sub_019cae90(void); };

// @baa 0x019cae90
unsigned C_019cae90::sub_019cae90(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_019caea0 { unsigned sub_019caea0(void); };

// @baa 0x019caea0
unsigned C_019caea0::sub_019caea0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_019caeb0 {
    uint sub_019caeb0();
};

// @baa 0x019caeb0
uint C_019caeb0::sub_019caeb0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_019caec0 {
    void sub_019caec0(uint);
};

// @baa 0x019caec0
void C_019caec0::sub_019caec0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_019caee0 { unsigned sub_019caee0(void); };

// @baa 0x019caee0
unsigned C_019caee0::sub_019caee0(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_019caef0 { unsigned sub_019caef0(void); };

// @baa 0x019caef0
unsigned C_019caef0::sub_019caef0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_019caf00 {
    uint sub_019caf00();
};

// @baa 0x019caf00
uint C_019caf00::sub_019caf00(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_019caf10 {
    void sub_019caf10(uint);
};

// @baa 0x019caf10
void C_019caf10::sub_019caf10(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

// @baa 0x019caf30
int sub_019caf30(int a0) { return a0; }

// @baa 0x019caf40
int sub_019caf40(int a0) { return a0; }

// @baa 0x019caf50
undefined4 * sub_019caf50(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

// @baa 0x019caf90
int sub_019caf90(int a0) { return a0; }

struct C_019cafa0 { int sub_019cafa0(void); };

// @baa 0x019cafa0
int C_019cafa0::sub_019cafa0(void) { return *(int*)((char*)this + 68); }

struct C_019cafb0 {
    int sub_019cafb0(uint);
};

// @baa 0x019cafb0
int C_019cafb0::sub_019cafb0(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0x50) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0xc;
}

struct C_019cafd0 { int sub_019cafd0(void); };

// @baa 0x019cafd0
int C_019cafd0::sub_019cafd0(void) { return *(int*)((char*)this + 88); }

struct C_019cafe0 {
    int sub_019cafe0(uint);
};

// @baa 0x019cafe0
int C_019cafe0::sub_019cafe0(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 100) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0xc;
}

struct C_019cb000 {
    uint sub_019cb000();
};

// @baa 0x019cb000
uint C_019cb000::sub_019cb000(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18) / 3;
}

struct C_019cb010 { int sub_019cb010(void); };

// @baa 0x019cb010
int C_019cb010::sub_019cb010(void) { return *(int*)((char*)this + 284); }

struct C_019cb020 {
    int sub_019cb020(uint);
};

// @baa 0x019cb020
int C_019cb020::sub_019cb020(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0x128) + (param_2 >> 10) * 4) + (param_2 & 0x3ff) * 8;
}

struct C_019cb040 { int sub_019cb040(void); };

// @baa 0x019cb040
int C_019cb040::sub_019cb040(void) { return *(int*)((char*)this + 376); }

struct C_019cb050 {
    int sub_019cb050(uint);
};

// @baa 0x019cb050
int C_019cb050::sub_019cb050(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0x184) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0x18;
}

struct C_019cb070 { int sub_019cb070(void); };

// @baa 0x019cb070
int C_019cb070::sub_019cb070(void) { return *(int*)((char*)this + 436); }

struct C_019cb080 {
    int sub_019cb080(uint);
};

// @baa 0x019cb080
int C_019cb080::sub_019cb080(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0x1c0) + (param_2 >> 10) * 4) + (param_2 & 0x3ff) * 0xc;
}

// @baa 0x019cc9f0
int sub_019cc9f0(int a0) { return a0; }

void sub_019cc760();
// @baa 0x019cca00
void sub_019cca00(void) { sub_019cc760(); }

void sub_019cc7d0();
// @baa 0x019cca10
void sub_019cca10(void) { sub_019cc7d0(); }

void sub_019cc840();
// @baa 0x019cca20
void sub_019cca20(void) { sub_019cc840(); }

void sub_019cc8e0();
// @baa 0x019cca30
void sub_019cca30(void) { sub_019cc8e0(); }

void sub_019cc980();
// @baa 0x019cca40
void sub_019cca40(void) { sub_019cc980(); }

void sub_019ccb00();
// @baa 0x019ccef0
void sub_019ccef0(void) { sub_019ccb00(); }

void sub_019ccdb0();
// @baa 0x019cd140
void sub_019cd140(void) { sub_019ccdb0(); }

void sub_019cce10();
// @baa 0x019cd160
void sub_019cd160(void) { sub_019cce10(); }

void sub_019cce70();
// @baa 0x019cd180
void sub_019cd180(void) { sub_019cce70(); }

void sub_019cd220();
// @baa 0x019ceea0
void sub_019ceea0(void) { sub_019cd220(); }

void sub_019cf030();
// @baa 0x019cf1b0
void sub_019cf1b0(void) { sub_019cf030(); }

void sub_019cf1c0();
// @baa 0x019cf2a0
void sub_019cf2a0(void) { sub_019cf1c0(); }

// @baa 0x019cfc90
void sub_019cfc90(void) { sub_018d3de0(); }

struct C_019cfe10 {
    int sub_019cfe10(int);
};

// @baa 0x019cfe10
int C_019cfe10::sub_019cfe10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_019cfe50 {
    uint sub_019cfe50();
};

// @baa 0x019cfe50
uint C_019cfe50::sub_019cfe50(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019cfe60 { unsigned sub_019cfe60(void); };

// @baa 0x019cfe60
unsigned C_019cfe60::sub_019cfe60(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_019cfe70 { unsigned sub_019cfe70(void); };

// @baa 0x019cfe70
unsigned C_019cfe70::sub_019cfe70(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_019cfe80 {
    uint sub_019cfe80();
};

// @baa 0x019cfe80
uint C_019cfe80::sub_019cfe80(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_019cfe90 {
    void sub_019cfe90(uint);
};

// @baa 0x019cfe90
void C_019cfe90::sub_019cfe90(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

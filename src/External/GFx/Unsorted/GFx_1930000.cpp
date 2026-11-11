// GFx_1930000.cpp (part 1 of 4): 271 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int sub_019317a0(int);
};

// @baa 0x019317a0
int C::sub_019317a0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0xc) * param_2 + *(int *)(param_1 + 0x10);
}

struct C_019317b0 { float sub_019317b0(void); };

// @baa 0x019317b0
float C_019317b0::sub_019317b0(void) { return *(float*)((char*)this + 4); }

struct C_019317c0 { int sub_019317c0(void); };

// @baa 0x019317c0
int C_019317c0::sub_019317c0(void) { return *(int*)((char*)this + 80); }

struct C_019317d0 { int sub_019317d0(void); };

// @baa 0x019317d0
int C_019317d0::sub_019317d0(void) { return *(int*)((char*)this + 84); }

struct C_019317e0 { int sub_019317e0(void); };

// @baa 0x019317e0
int C_019317e0::sub_019317e0(void) { return *(int*)((char*)this + 88); }

struct C_019317f0 { int sub_019317f0(void); };

// @baa 0x019317f0
int C_019317f0::sub_019317f0(void) { return *(int*)((char*)this + 92); }

struct C_01931800 { void sub_01931800(int a0); };

// @baa 0x01931800
void C_01931800::sub_01931800(int a0) { *(int*)((char*)this + 0) = a0; }

struct C_01931810 { int sub_01931810(void); };

// @baa 0x01931810
int C_01931810::sub_01931810(void) { return *(int*)((char*)this + 116); }

struct C_01931850 {
    byte sub_01931850();
};

// @baa 0x01931850
byte C_01931850::sub_01931850(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 7) >> 1 & 1;
}

struct C_01931860 {
    byte sub_01931860();
};

// @baa 0x01931860
byte C_01931860::sub_01931860(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 7) >> 7;
}

struct C_01931890 {
    void sub_01931890(char);
};

// @baa 0x01931890
void C_01931890::sub_01931890(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 2;
    return;
  }
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfd;
  return;
}

// @baa 0x019319e0
void sub_019319e0(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}

// @baa 0x019319f0
void sub_019319f0(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}

// @baa 0x01931a00
undefined4 sub_01931a00(int param_1)
{
  return *(undefined4 *)(param_1 + 0xc);
}

// @baa 0x01931a10
undefined4 sub_01931a10(int param_1)
{
  return *(undefined4 *)(param_1 + 0xc);
}

// @baa 0x01931a20
undefined4 sub_01931a20(int param_1)
{
  return *(undefined4 *)(param_1 + 0x10);
}

// @baa 0x01931a30
void sub_01931a30(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}

// @baa 0x01931a40
void sub_01931a40(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}

// @baa 0x01931a50
undefined4 sub_01931a50(int param_1)
{
  return *(undefined4 *)(param_1 + 0x14);
}

// @baa 0x01931a60
undefined4 sub_01931a60(int param_1)
{
  return *(undefined4 *)(param_1 + 0x18);
}

struct C_01931c20 {
    void sub_01931c20();
};

// @baa 0x01931c20
void C_01931c20::sub_01931c20(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

struct C_01931cb0 {
    void sub_01931cb0(undefined4, uint);
};

// @baa 0x01931cb0
void C_01931cb0::sub_01931cb0(undefined4 param_2, uint param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 4) = param_2;
  *(uint *)(param_1 + 8) = param_3 & 0xffff7fff;
  return;
}

struct C_01931cd0 { int sub_01931cd0(void); };

// @baa 0x01931cd0
int C_01931cd0::sub_01931cd0(void) { return *(int*)((char*)this + 12); }

extern char g_023f54d0[];
struct C_01931d00 { void sub_01931d00(void); };

// @baa 0x01931d00
void C_01931d00::sub_01931d00(void) { *(int*)((char*)this + 0) = (int)g_023f54d0; }

struct C_01931d10 {
    uint sub_01931d10();
};

// @baa 0x01931d10
uint C_01931d10::sub_01931d10(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x1c) >> 4 & 1;
}

struct C_01931d20 {
    uint sub_01931d20();
};

// @baa 0x01931d20
uint C_01931d20::sub_01931d20(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x1c) >> 0xd & 1;
}

struct C_01931e10 { void sub_01931e10(void); };

// @baa 0x01931e10
void C_01931e10::sub_01931e10(void) { *(int*)((char*)this + 4) = (int)g_023f54d0; }

struct C_01931fa0 { int sub_01931fa0(void); };

// @baa 0x01931fa0
int C_01931fa0::sub_01931fa0(void) { return *(int*)((char*)this + 12); }

struct C_01931fb0 { int sub_01931fb0(void); };

// @baa 0x01931fb0
int C_01931fb0::sub_01931fb0(void) { return *(int*)((char*)this + 16); }

struct C_01932040 { int sub_01932040(void); };

// @baa 0x01932040
int C_01932040::sub_01932040(void) { return *(int*)((char*)this + 16); }

struct C_01932050 { int sub_01932050(void); };

// @baa 0x01932050
int C_01932050::sub_01932050(void) { return *(int*)((char*)this + 12); }

struct C_01932590 { C_01932590* sub_01932590(void); };

// @baa 0x01932590
C_01932590* C_01932590::sub_01932590(void) { return this; }

struct C_019325a0 { C_019325a0* sub_019325a0(void); };

// @baa 0x019325a0
C_019325a0* C_019325a0::sub_019325a0(void) { return this; }

struct C_019325b0 { int sub_019325b0(void); };

// @baa 0x019325b0
int C_019325b0::sub_019325b0(void) { return *(int*)((char*)this + 0); }

struct C_019325e0 { int sub_019325e0(void); };

// @baa 0x019325e0
int C_019325e0::sub_019325e0(void) { return *(int*)((char*)this + 0); }

struct C_019325f0 {
    int sub_019325f0(uint);
};

// @baa 0x019325f0
int C_019325f0::sub_019325f0(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 8;
}

// @baa 0x01932660
undefined4 sub_01932660(int param_1)
{
  return *(undefined4 *)(param_1 + 0xc);
}

// @baa 0x01932670
undefined4 sub_01932670(int param_1)
{
  return *(undefined4 *)(param_1 + 0x10);
}

struct C_01932680 {
    bool sub_01932680(int);
};

// @baa 0x01932680
bool C_01932680::sub_01932680(int param_2)
{
    int param_1 = (int)this;

  return param_2 == param_1;
}

struct C_019326d0 {
    void sub_019326d0();
};

// @baa 0x019326d0
void C_019326d0::sub_019326d0(void)
{
    int param_1 = (int)this;

  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  return;
}

struct C_019326e0 { int sub_019326e0(void); };

// @baa 0x019326e0
int C_019326e0::sub_019326e0(void) { return *(int*)((char*)this + 4); }

struct C_019326f0 { int sub_019326f0(void); };

// @baa 0x019326f0
int C_019326f0::sub_019326f0(void) { return *(int*)((char*)this + 4); }

struct C_01932700 {
    bool sub_01932700(int);
};

// @baa 0x01932700
bool C_01932700::sub_01932700(int param_2)
{
    int param_1 = (int)this;

  return param_2 == param_1;
}

// @baa 0x01932710
undefined4 sub_01932710(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01932720
int sub_01932720(int a0) { return *(int*)a0; }

// @baa 0x01932730
undefined4 sub_01932730(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

struct C_01932740 {
    void sub_01932740(int *);
};

// @baa 0x01932740
void C_01932740::sub_01932740(int * param_2)
{
    int param_1 = (int)this;

  param_2[1] = *(int *)(param_1 + 4);
  *param_2 = param_1;
  **(undefined4 **)(param_1 + 4) = (undefined4)(param_2);
  *(int **)(param_1 + 4) = param_2;
  return;
}

struct C_01932760 {
    void sub_01932760(int *);
};

// @baa 0x01932760
void C_01932760::sub_01932760(int * param_2)
{
    int param_1 = (int)this;

  *(int *)(*param_2 + 4) = param_2[1];
  *(int *)param_2[1] = *param_2;
  param_2[1] = *(int *)(param_1 + 4);
  *param_2 = param_1;
  **(undefined4 **)(param_1 + 4) = (undefined4)(param_2);
  *(int **)(param_1 + 4) = param_2;
  return;
}

// @baa 0x01932790
undefined4 sub_01932790(int param_1)
{
  return *(undefined4 *)(param_1 + 0x18);
}

struct C_019327a0 { int sub_019327a0(void); };

// @baa 0x019327a0
int C_019327a0::sub_019327a0(void) { return *(int*)((char*)this + 24); }

struct C_019327b0 {
    bool sub_019327b0(int);
};

// @baa 0x019327b0
bool C_019327b0::sub_019327b0(int param_2)
{
    int param_1 = (int)this;

  return param_2 == param_1;
}

struct C_01932800 { int sub_01932800(void); };

// @baa 0x01932800
int C_01932800::sub_01932800(void) { return *(int*)((char*)this + 0); }

struct C_01932840 { void sub_01932840(void); };

// @baa 0x01932840
void C_01932840::sub_01932840(void) { *(int*)((char*)this + 0) = 0; }

struct C_01932850 { int sub_01932850(void); };

// @baa 0x01932850
int C_01932850::sub_01932850(void) { return *(int*)((char*)this + 0); }

struct C_01932860 {
    int sub_01932860(uint);
};

// @baa 0x01932860
int C_01932860::sub_01932860(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0x1c;
}

struct C_019328a0 { void sub_019328a0(void); };

// @baa 0x019328a0
void C_019328a0::sub_019328a0(void) { *(int*)((char*)this + 0) = 0; }

struct C_019328b0 { int sub_019328b0(void); };

// @baa 0x019328b0
int C_019328b0::sub_019328b0(void) { return *(int*)((char*)this + 0); }

struct C_019328f0 {
    int sub_019328f0(int);
};

// @baa 0x019328f0
int C_019328f0::sub_019328f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2;
}

// @baa 0x01932900
void sub_01932900(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}

// @baa 0x01932910
void sub_01932910(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}

// @baa 0x01932920
undefined4 sub_01932920(int param_1)
{
  return *(undefined4 *)(param_1 + 0xc);
}

// @baa 0x01932930
void sub_01932930(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}

// @baa 0x01932940
void sub_01932940(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}

// @baa 0x01932950
undefined4 sub_01932950(int param_1)
{
  return *(undefined4 *)(param_1 + 0x14);
}

struct C_01932960 { C_01932960* sub_01932960(void); };

// @baa 0x01932960
C_01932960* C_01932960::sub_01932960(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01932b40 {
    bool sub_01932b40();
};

// @baa 0x01932b40
bool C_01932b40::sub_01932b40(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_01932b50 { void sub_01932b50(void); };

// @baa 0x01932b50
void C_01932b50::sub_01932b50(void) { *(int*)((char*)this + 0) = -2; }

struct C_01932b60 {
    void sub_01932b60(undefined2, undefined2);
};

// @baa 0x01932b60
void C_01932b60::sub_01932b60(undefined2 param_2, undefined2 param_3)
{
    undefined2 * param_1 = (undefined2 *)this;

  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

struct C_01932bc0 {
    int sub_01932bc0(int);
};

// @baa 0x01932bc0
int C_01932bc0::sub_01932bc0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + param_2 * 4;
}

struct C_01932bd0 {
    bool sub_01932bd0();
};

// @baa 0x01932bd0
bool C_01932bd0::sub_01932bd0(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -1;
}

void sub_018e8510();
// @baa 0x01932c20
void sub_01932c20(void) { sub_018e8510(); }

struct C_01932c60 {
    void sub_01932c60(int *);
};

// @baa 0x01932c60
void C_01932c60::sub_01932c60(int * param_2)
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

// @baa 0x01932d40
void __stdcall sub_01932d40(int a0) {  }

struct C_01932db0 { int sub_01932db0(void); };

// @baa 0x01932db0
int C_01932db0::sub_01932db0(void) { return *(int*)((char*)this + 4); }

struct C_01932dc0 {
    int sub_01932dc0(uint);
};

// @baa 0x01932dc0
int C_01932dc0::sub_01932dc0(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0x10) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 8;
}

struct C_01932e80 {
    undefined4 * sub_01932e80(byte);
};

int sub_00402660(...);
// @baa 0x01932e80
undefined4 * C_01932e80::sub_01932e80(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f54d0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01932eb0 {
    uint sub_01932eb0();
};

// @baa 0x01932eb0
uint C_01932eb0::sub_01932eb0(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xc) + 0x1c) >> 4 & 1;
}

struct C_01932ec0 {
    uint sub_01932ec0();
};

// @baa 0x01932ec0
uint C_01932ec0::sub_01932ec0(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xc) + 0x1c) >> 0xd & 1;
}

struct C_01932f00 {
    void sub_01932f00();
};

// @baa 0x01932f00
void C_01932f00::sub_01932f00(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x30); iVar1 != param_1 + 0x2c; iVar1 = *(int *)(iVar1 + 4)) {
    *(ushort *)(iVar1 + 0x20) = *(ushort *)(iVar1 + 0x20) & 0x7fff;
  }
  return;
}

struct C_019330f0 { C_019330f0* sub_019330f0(void); };

// @baa 0x019330f0
C_019330f0* C_019330f0::sub_019330f0(void) { return this; }

struct C_01933200 {
    void sub_01933200();
};

// @baa 0x01933200
void C_01933200::sub_01933200(void)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0xc) = param_1;
  *(int *)(param_1 + 0x10) = param_1;
  return;
}

struct C_01933210 {
    bool sub_01933210(int);
};

// @baa 0x01933210
bool C_01933210::sub_01933210(int param_2)
{
    int param_1 = (int)this;

  return param_2 == *(int *)(param_1 + 0xc);
}

struct C_01933220 {
    void sub_01933220(int);
};

// @baa 0x01933220
void C_01933220::sub_01933220(int param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(int *)(param_2 + 0x10) = param_1;
  *(int *)(*(int *)(param_1 + 0xc) + 0x10) = param_2;
  *(int *)(param_1 + 0xc) = param_2;
  return;
}

struct C_01933360 {
    void sub_01933360();
};

// @baa 0x01933360
void C_01933360::sub_01933360(void)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0x14) = param_1;
  *(int *)(param_1 + 0x18) = param_1;
  return;
}

struct C_01933370 {
    void sub_01933370(int);
};

// @baa 0x01933370
void C_01933370::sub_01933370(int param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(int *)(param_2 + 0x14) = param_1;
  *(int *)(*(int *)(param_1 + 0x18) + 0x14) = param_2;
  *(int *)(param_1 + 0x18) = param_2;
  return;
}

struct C_019334d0 {
    void sub_019334d0(undefined4 *);
};

// @baa 0x019334d0
void C_019334d0::sub_019334d0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}

struct C_01933600 {
    void sub_01933600(undefined2 *);
};

// @baa 0x01933600
void C_01933600::sub_01933600(undefined2 * param_2)
{
    undefined2 * param_1 = (undefined2 *)this;

  undefined2 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}

struct C_019339c0 { C_019339c0* sub_019339c0(void); };

// @baa 0x019339c0
C_019339c0* C_019339c0::sub_019339c0(void) { return this; }

void sub_019332a0();
// @baa 0x01933a20
void sub_01933a20(void) { sub_019332a0(); }

void sub_019333b0();
// @baa 0x01933a30
void sub_01933a30(void) { sub_019333b0(); }

void sub_01933570();
// @baa 0x01933a90
void sub_01933a90(void) { sub_01933570(); }

// @baa 0x01933b10
void sub_01933b10(void) { sub_01933570(); }

struct C_01934740 { C_01934740* sub_01934740(void); };

// @baa 0x01934740
C_01934740* C_01934740::sub_01934740(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01934750
void sub_01934750(void) { sub_01933570(); }

void sub_01935400();
// @baa 0x01935b30
void sub_01935b30(void) { sub_01935400(); }

typedef uint size_t;

typedef size_t rsize_t;

extern "C" __declspec(dllimport) int strncpy_s(...);
// @baa 0x01937a90
char * sub_01937a90(char * param_1, rsize_t param_2, char * param_3, rsize_t param_4)
{
  strncpy_s(param_1,param_2,param_3,param_4);
  return param_1;
}

extern "C" __declspec(dllimport) int strchr(...);
// @baa 0x01937ac0
void sub_01937ac0(char * param_1, char param_2)
{
                    
                    
  strchr(param_1,(int)param_2);
  return;
}

struct C_01937ad0 {
    uint sub_01937ad0(uint);
};

// @baa 0x01937ad0
uint C_01937ad0::sub_01937ad0(uint param_2)
{
    int param_1 = (int)this;

  if (*(uint *)(param_1 + 8) != 4) {
    param_2 = param_2 & 0xfffffffc | *(uint *)(param_1 + 8);
  }
  return param_2;
}

struct C_01937b10 { int sub_01937b10(void); };

// @baa 0x01937b10
int C_01937b10::sub_01937b10(void) { return *(int*)((char*)this + 4); }

struct C_01937b20 {
    uint sub_01937b20();
};

// @baa 0x01937b20
uint C_01937b20::sub_01937b20(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 3;
}

void sub_018d3de0();
// @baa 0x01937bd0
void sub_01937bd0(void) { sub_018d3de0(); }

struct C_01937c70 { int sub_01937c70(void); };

// @baa 0x01937c70
int C_01937c70::sub_01937c70(void) { return *(int*)((char*)this + 0); }

struct C_01937cb0 { int sub_01937cb0(void); };

// @baa 0x01937cb0
int C_01937cb0::sub_01937cb0(void) { return *(int*)((char*)this + 0); }

struct C_01937cc0 { int sub_01937cc0(void); };

// @baa 0x01937cc0
int C_01937cc0::sub_01937cc0(void) { return *(int*)((char*)this + 0); }

struct C_01937cd0 { int sub_01937cd0(void); };

// @baa 0x01937cd0
int C_01937cd0::sub_01937cd0(void) { return *(int*)((char*)this + 0); }

struct C_01937d10 { int sub_01937d10(void); };

// @baa 0x01937d10
int C_01937d10::sub_01937d10(void) { return *(int*)((char*)this + 0); }

struct C_01937d80 { int sub_01937d80(void); };

// @baa 0x01937d80
int C_01937d80::sub_01937d80(void) { return *(int*)((char*)this + 0); }

struct C_01937dd0 { C_01937dd0* sub_01937dd0(void); };

// @baa 0x01937dd0
C_01937dd0* C_01937dd0::sub_01937dd0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01937de0 {
    undefined4 sub_01937de0();
};

// @baa 0x01937de0
undefined4 C_01937de0::sub_01937de0(void)
{
    int * param_1 = (int *)this;

  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    return 0;
  }
  return *(undefined4 *)*param_1;
}

struct C_01937df0 { int sub_01937df0(void); };

// @baa 0x01937df0
int C_01937df0::sub_01937df0(void) { return *(int*)((char*)this + 0); }

struct C_01937e00 {
    undefined4 sub_01937e00();
};

// @baa 0x01937e00
undefined4 C_01937e00::sub_01937e00(void)
{
    int * param_1 = (int *)this;

  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    return 0;
  }
  return *(undefined4 *)*param_1;
}

struct C_01937e40 { int sub_01937e40(void); };

// @baa 0x01937e40
int C_01937e40::sub_01937e40(void) { return *(int*)((char*)this + 0); }

struct C_01937ea0 {
    bool sub_01937ea0();
};

// @baa 0x01937ea0
bool C_01937ea0::sub_01937ea0(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_01937eb0 { void sub_01937eb0(void); };

// @baa 0x01937eb0
void C_01937eb0::sub_01937eb0(void) { *(int*)((char*)this + 0) = -2; }

struct C_01937f80 {
    bool sub_01937f80();
};

// @baa 0x01937f80
bool C_01937f80::sub_01937f80(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -1;
}

struct C_01937f90 { int sub_01937f90(int a0); };

// @baa 0x01937f90
int C_01937f90::sub_01937f90(int a0) { return *(int*)((char*)this + 4); }

struct C_01937fa0 { void sub_01937fa0(int a0); };

// @baa 0x01937fa0
void C_01937fa0::sub_01937fa0(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_01937fd0 {
    undefined4 sub_01937fd0();
};

// @baa 0x01937fd0
undefined4 C_01937fd0::sub_01937fd0(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1c);
}

struct C_01938040 {
    uint * sub_01938040();
};

// @baa 0x01938040
uint * C_01938040::sub_01938040(void)
{
    int param_1 = (int)this;

  uint *puVar1;
  
  if ((**(uint **)(param_1 + 0xc) & 0x7fffffff) == 0) {
                    
                    
    puVar1 = (uint *)(**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0xc) + 0x38))();
    return puVar1;
  }
  return *(uint **)(param_1 + 0xc) + 3;
}

struct C_01938060 {
    uint sub_01938060();
};

// @baa 0x01938060
uint C_01938060::sub_01938060(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(*(int *)(param_1 + 0x14) + 0xc) + 0x1c) | *(uint *)(param_1 + 8);
}

struct C_01938070 {
    uint sub_01938070();
};

// @baa 0x01938070
uint C_01938070::sub_01938070(void)
{
    int param_1 = (int)this;

  return (*(uint *)(*(int *)(*(int *)(param_1 + 0x14) + 0xc) + 0x1c) | *(uint *)(param_1 + 8)) & 3;
}

struct C_01938280 {
    undefined4 sub_01938280();
};

// @baa 0x01938280
undefined4 C_01938280::sub_01938280(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x20);
}

struct C_01938b70 {
    undefined4 sub_01938b70();
};

// @baa 0x01938b70
undefined4 C_01938b70::sub_01938b70(void)
{
    int param_1 = (int)this;

  **(int **)(param_1 + 0x20) = **(int **)(param_1 + 0x20) + 1;
  return *(undefined4 *)(param_1 + 0x20);
}

struct C_01938bc0 {
    int sub_01938bc0();
};

// @baa 0x01938bc0
int C_01938bc0::sub_01938bc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0x10 + param_1[1] * 0xc;
}

struct C_01938c20 {
    int sub_01938c20();
};

// @baa 0x01938c20
int C_01938c20::sub_01938c20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0x10 + param_1[1] * 0xc;
}

void sub_01938d80();
// @baa 0x01938ff0
void sub_01938ff0(void) { sub_01938d80(); }

extern "C" __declspec(dllimport) int strcpy_s(...);
// @baa 0x0193a830
char * sub_0193a830(char * param_1, rsize_t param_2, char * param_3)
{
  strcpy_s(param_1,param_2,param_3);
  return param_1;
}

struct C_0193a850 { int sub_0193a850(void); };

// @baa 0x0193a850
int C_0193a850::sub_0193a850(void) { return *(int*)((char*)this + 20); }

struct C_0193a860 {
    undefined1 sub_0193a860();
};

// @baa 0x0193a860
undefined1 C_0193a860::sub_0193a860(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x18);
}

struct C_0193a870 {
    uint sub_0193a870();
};

// @baa 0x0193a870
uint C_0193a870::sub_0193a870(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x1c) & 0x300;
}

struct C_0193a880 {
    uint sub_0193a880();
};

// @baa 0x0193a880
uint C_0193a880::sub_0193a880(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x1c) >> 0xf & 1;
}

struct C_0193a8d0 {
    void sub_0193a8d0(char);
};

// @baa 0x0193a8d0
void C_0193a8d0::sub_0193a8d0(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1;
    return;
  }
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffffe;
  return;
}

struct C_0193a8f0 {
    void sub_0193a8f0(char);
};

// @baa 0x0193a8f0
void C_0193a8f0::sub_0193a8f0(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 2;
    return;
  }
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffffd;
  return;
}

struct C_0193a930 {
    void sub_0193a930();
};

// @baa 0x0193a930
void C_0193a930::sub_0193a930(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x1000;
  return;
}

struct C_0193a940 {
    void sub_0193a940(char);
};

// @baa 0x0193a940
void C_0193a940::sub_0193a940(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x2000;
    return;
  }
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffffdfff;
  return;
}

struct C_0193a960 {
    void sub_0193a960(char);
};

// @baa 0x0193a960
void C_0193a960::sub_0193a960(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x8000;
    return;
  }
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffff7fff;
  return;
}

// @baa 0x0193a980
void sub_0193a980(void) { sub_018d3de0(); }

struct C_0193a990 {
    undefined4 sub_0193a990(short *);
};

// @baa 0x0193a990
undefined4 C_0193a990::sub_0193a990(short * param_2)
{
    short * param_1 = (short *)this;

  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_0193a9c0 { char* sub_0193a9c0(void); };

// @baa 0x0193a9c0
char* C_0193a9c0::sub_0193a9c0(void) { return (char*)this + 36; }

struct C_0193a9d0 { char* sub_0193a9d0(void); };

// @baa 0x0193a9d0
char* C_0193a9d0::sub_0193a9d0(void) { return (char*)this + 56; }

struct C_0193a9e0 { char* sub_0193a9e0(void); };

// @baa 0x0193a9e0
char* C_0193a9e0::sub_0193a9e0(void) { return (char*)this + 36; }

struct C_0193a9f0 { char* sub_0193a9f0(void); };

// @baa 0x0193a9f0
char* C_0193a9f0::sub_0193a9f0(void) { return (char*)this + 48; }

// @baa 0x0193aa00
undefined1 sub_0193aa00(void)
{
  return 1;
}

// @baa 0x0193aa60
void sub_0193aa60(void) { sub_018d3de0(); }

struct C_0193aa70 { int sub_0193aa70(void); };

// @baa 0x0193aa70
int C_0193aa70::sub_0193aa70(void) { return *(int*)((char*)this + 124); }

struct C_0193aa80 {
    bool sub_0193aa80();
};

// @baa 0x0193aa80
bool C_0193aa80::sub_0193aa80(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x7c) != 0;
}

// @baa 0x0193aa90
void sub_0193aa90(void) { sub_018d3de0(); }

// @baa 0x0193aaa0
void sub_0193aaa0(void) { sub_018d3de0(); }

extern char g_023f5994[];
struct C_0193aab0 { void sub_0193aab0(void); };

// @baa 0x0193aab0
void C_0193aab0::sub_0193aab0(void) { *(int*)((char*)this + 0) = (int)g_023f5994; }

struct C_0193ab30 { C_0193ab30* sub_0193ab30(void); };

// @baa 0x0193ab30
C_0193ab30* C_0193ab30::sub_0193ab30(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_0193ac00 {
    int sub_0193ac00(int);
};

// @baa 0x0193ac00
int C_0193ac00::sub_0193ac00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

struct C_0193ac10 {
    int sub_0193ac10(int);
};

// @baa 0x0193ac10
int C_0193ac10::sub_0193ac10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

struct C_0193ac20 { int sub_0193ac20(void); };

// @baa 0x0193ac20
int C_0193ac20::sub_0193ac20(void) { return *(int*)((char*)this + 4); }

struct C_0193ac30 { C_0193ac30* sub_0193ac30(void); };

// @baa 0x0193ac30
C_0193ac30* C_0193ac30::sub_0193ac30(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_0193ac70 {
    int sub_0193ac70(int);
};

// @baa 0x0193ac70
int C_0193ac70::sub_0193ac70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0193ac80 {
    int sub_0193ac80(int);
};

// @baa 0x0193ac80
int C_0193ac80::sub_0193ac80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0193ac90 { int sub_0193ac90(void); };

// @baa 0x0193ac90
int C_0193ac90::sub_0193ac90(void) { return *(int*)((char*)this + 4); }

struct C_0193aca0 {
    int sub_0193aca0(int);
};

// @baa 0x0193aca0
int C_0193aca0::sub_0193aca0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_0193acb0 {
    int sub_0193acb0(int);
};

// @baa 0x0193acb0
int C_0193acb0::sub_0193acb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_0193acc0 { int sub_0193acc0(void); };

// @baa 0x0193acc0
int C_0193acc0::sub_0193acc0(void) { return *(int*)((char*)this + 4); }

struct C_0193acf0 { int sub_0193acf0(void); };

// @baa 0x0193acf0
int C_0193acf0::sub_0193acf0(void) { return *(int*)((char*)this + 20); }

struct C_0193ad00 { int sub_0193ad00(void); };

// @baa 0x0193ad00
int C_0193ad00::sub_0193ad00(void) { return *(int*)((char*)this + 52); }

struct C_0193ad10 {
    void sub_0193ad10(undefined1 *);
};

// @baa 0x0193ad10
void C_0193ad10::sub_0193ad10(undefined1 * param_2)
{
    int * param_1 = (int *)this;

  *(undefined1 *)(param_1[2] + *param_1) = *param_2;
  *param_1 = *param_1 + 1;
  return;
}

struct C_0193ad30 { int sub_0193ad30(void); };

// @baa 0x0193ad30
int C_0193ad30::sub_0193ad30(void) { return *(int*)((char*)this + 20); }

struct C_0193ad40 { float sub_0193ad40(void); };

// @baa 0x0193ad40
float C_0193ad40::sub_0193ad40(void) { return *(float*)((char*)this + 56); }

struct C_0193ad50 { float sub_0193ad50(void); };

// @baa 0x0193ad50
float C_0193ad50::sub_0193ad50(void) { return *(float*)((char*)this + 60); }

struct C_0193ad60 { float sub_0193ad60(void); };

// @baa 0x0193ad60
float C_0193ad60::sub_0193ad60(void) { return *(float*)((char*)this + 64); }

struct C_0193ad70 { int sub_0193ad70(void); };

// @baa 0x0193ad70
int C_0193ad70::sub_0193ad70(void) { return *(int*)((char*)this + 48); }

struct C_0193ad80 { int sub_0193ad80(void); };

// @baa 0x0193ad80
int C_0193ad80::sub_0193ad80(void) { return *(int*)((char*)this + 52); }

struct C_0193ad90 {
    int sub_0193ad90(int);
};

// @baa 0x0193ad90
int C_0193ad90::sub_0193ad90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0193adc0 { int sub_0193adc0(void); };

// @baa 0x0193adc0
int C_0193adc0::sub_0193adc0(void) { return *(int*)((char*)this + 0); }

struct C_0193add0 {
    int sub_0193add0(int);
};

// @baa 0x0193add0
int C_0193add0::sub_0193add0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0193ade0 { int sub_0193ade0(void); };

// @baa 0x0193ade0
int C_0193ade0::sub_0193ade0(void) { return *(int*)((char*)this + 4); }

struct C_0193ae10 {
    int sub_0193ae10(int);
};

// @baa 0x0193ae10
int C_0193ae10::sub_0193ae10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0193ae20 { int sub_0193ae20(void); };

// @baa 0x0193ae20
int C_0193ae20::sub_0193ae20(void) { return *(int*)((char*)this + 4); }

struct C_0193ae80 { int sub_0193ae80(void); };

// @baa 0x0193ae80
int C_0193ae80::sub_0193ae80(void) { return *(int*)((char*)this + 0); }

struct C_0193aee0 {
    int sub_0193aee0(int);
};

// @baa 0x0193aee0
int C_0193aee0::sub_0193aee0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + param_2;
}

struct C_0193af10 {
    int sub_0193af10(int);
};

// @baa 0x0193af10
int C_0193af10::sub_0193af10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + 8 + param_2 * 8;
}

struct C_0193af30 { C_0193af30* sub_0193af30(void); };

// @baa 0x0193af30
C_0193af30* C_0193af30::sub_0193af30(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_0193af40 { int sub_0193af40(void); };

// @baa 0x0193af40
int C_0193af40::sub_0193af40(void) { return *(int*)((char*)this + 0); }

struct C_0193afb0 {
    int sub_0193afb0(int);
};

// @baa 0x0193afb0
int C_0193afb0::sub_0193afb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0193b020 {
    bool sub_0193b020();
};

// @baa 0x0193b020
bool C_0193b020::sub_0193b020(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_0193b0c0 {
    uint sub_0193b0c0();
};

// @baa 0x0193b0c0
uint C_0193b0c0::sub_0193b0c0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_0193b0f0 {
    uint sub_0193b0f0();
};

// @baa 0x0193b0f0
uint C_0193b0f0::sub_0193b0f0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_0193b120 { unsigned sub_0193b120(void); };

// @baa 0x0193b120
unsigned C_0193b120::sub_0193b120(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_0193b130 { unsigned sub_0193b130(void); };

// @baa 0x0193b130
unsigned C_0193b130::sub_0193b130(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_0193b140 {
    uint sub_0193b140();
};

// @baa 0x0193b140
uint C_0193b140::sub_0193b140(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_0193b150 {
    void sub_0193b150(uint);
};

// @baa 0x0193b150
void C_0193b150::sub_0193b150(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_0193b170 { C_0193b170* sub_0193b170(void); };

// @baa 0x0193b170
C_0193b170* C_0193b170::sub_0193b170(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_0193b180 {
    int sub_0193b180(int);
};

// @baa 0x0193b180
int C_0193b180::sub_0193b180(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + 8 + param_2 * 8;
}

struct C_0193b190 { unsigned sub_0193b190(void); };

// @baa 0x0193b190
unsigned C_0193b190::sub_0193b190(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_0193b1a0 { unsigned sub_0193b1a0(void); };

// @baa 0x0193b1a0
unsigned C_0193b1a0::sub_0193b1a0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_0193b1b0 {
    uint sub_0193b1b0();
};

// @baa 0x0193b1b0
uint C_0193b1b0::sub_0193b1b0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_0193b1c0 {
    void sub_0193b1c0(uint);
};

// @baa 0x0193b1c0
void C_0193b1c0::sub_0193b1c0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_0193b200 {
    uint sub_0193b200();
};

// @baa 0x0193b200
uint C_0193b200::sub_0193b200(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_0193b210 {
    uint sub_0193b210();
};

// @baa 0x0193b210
uint C_0193b210::sub_0193b210(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_0193b220 {
    bool sub_0193b220();
};

// @baa 0x0193b220
bool C_0193b220::sub_0193b220(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_0193b230 { void sub_0193b230(void); };

// @baa 0x0193b230
void C_0193b230::sub_0193b230(void) { *(int*)((char*)this + 0) = -2; }

struct C_0193b260 { unsigned sub_0193b260(void); };

// @baa 0x0193b260
unsigned C_0193b260::sub_0193b260(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_0193b270 { unsigned sub_0193b270(void); };

// @baa 0x0193b270
unsigned C_0193b270::sub_0193b270(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_0193b280 {
    uint sub_0193b280();
};

// @baa 0x0193b280
uint C_0193b280::sub_0193b280(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_0193b290 {
    void sub_0193b290(uint);
};

// @baa 0x0193b290
void C_0193b290::sub_0193b290(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_0193b2b0 { unsigned sub_0193b2b0(void); };

// @baa 0x0193b2b0
unsigned C_0193b2b0::sub_0193b2b0(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_0193b2c0 { unsigned sub_0193b2c0(void); };

// @baa 0x0193b2c0
unsigned C_0193b2c0::sub_0193b2c0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_0193b2d0 {
    uint sub_0193b2d0();
};

// @baa 0x0193b2d0
uint C_0193b2d0::sub_0193b2d0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_0193b2e0 {
    void sub_0193b2e0(uint);
};

// @baa 0x0193b2e0
void C_0193b2e0::sub_0193b2e0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_0193b300 { unsigned sub_0193b300(void); };

// @baa 0x0193b300
unsigned C_0193b300::sub_0193b300(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_0193b310 { unsigned sub_0193b310(void); };

// @baa 0x0193b310
unsigned C_0193b310::sub_0193b310(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_0193b320 {
    uint sub_0193b320();
};

// @baa 0x0193b320
uint C_0193b320::sub_0193b320(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_0193b330 {
    void sub_0193b330(uint);
};

// @baa 0x0193b330
void C_0193b330::sub_0193b330(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_0193b350 { void sub_0193b350(void); };

// @baa 0x0193b350
void C_0193b350::sub_0193b350(void) { *(int*)((char*)this + 0) = -2; }

// @baa 0x0193b400
int sub_0193b400(int a0) { return a0; }

// @baa 0x0193b410
int sub_0193b410(int a0) { return a0; }

// @baa 0x0193b420
int sub_0193b420(int a0) { return a0; }

// @baa 0x0193b430
int sub_0193b430(int a0) { return a0; }

struct C_0193b440 { int sub_0193b440(void); };

// @baa 0x0193b440
int C_0193b440::sub_0193b440(void) { return *(int*)((char*)this + 0); }

struct C_0193b450 {
    int sub_0193b450(int);
};

// @baa 0x0193b450
int C_0193b450::sub_0193b450(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + param_2;
}

struct C_0193b460 {
    undefined4 sub_0193b460();
};

// @baa 0x0193b460
undefined4 C_0193b460::sub_0193b460(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(undefined4 *)*param_1;
}

struct C_0193b470 { int sub_0193b470(void); };

// @baa 0x0193b470
int C_0193b470::sub_0193b470(void) { return *(int*)((char*)this + 0); }

struct C_0193b500 { int sub_0193b500(void); };

// @baa 0x0193b500
int C_0193b500::sub_0193b500(void) { return *(int*)((char*)this + 0); }

struct C_0193b510 { int sub_0193b510(void); };

// @baa 0x0193b510
int C_0193b510::sub_0193b510(void) { return *(int*)((char*)this + 0); }

struct C_0193b540 {
    undefined4 sub_0193b540();
};

// @baa 0x0193b540
undefined4 C_0193b540::sub_0193b540(void)
{
    int param_1 = (int)this;

  if ((*(short *)(param_1 + 8) < *(short *)(param_1 + 0xc)) &&
     (*(short *)(param_1 + 10) < *(short *)(param_1 + 0xe))) {
    return 1;
  }
  return 0;
}

struct C_0193b560 {
    void sub_0193b560(undefined2);
};

// @baa 0x0193b560
void C_0193b560::sub_0193b560(undefined2 param_2)
{
    int param_1 = (int)this;

  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0xc) = param_2;
  return;
}

struct C_0193b580 {
    int sub_0193b580();
};

// @baa 0x0193b580
int C_0193b580::sub_0193b580(void)
{
    int param_1 = (int)this;

  return (int)*(short *)(param_1 + 0xc) - (int)*(short *)(param_1 + 8);
}

struct C_0193b590 {
    int sub_0193b590();
};

// @baa 0x0193b590
int C_0193b590::sub_0193b590(void)
{
    int param_1 = (int)this;

  return (int)*(short *)(param_1 + 0xe) - (int)*(short *)(param_1 + 10);
}

struct C_0193b5a0 {
    bool sub_0193b5a0();
};

// @baa 0x0193b5a0
bool C_0193b5a0::sub_0193b5a0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x18) == 0;
}

struct C_0193b5b0 { int sub_0193b5b0(void); };

// @baa 0x0193b5b0
int C_0193b5b0::sub_0193b5b0(void) { return *(int*)((char*)this + 16); }

struct C_0193b5c0 { int sub_0193b5c0(void); };

// @baa 0x0193b5c0
int C_0193b5c0::sub_0193b5c0(void) { return *(int*)((char*)this + 20); }

struct C_0193b5d0 {
    bool sub_0193b5d0();
};

// @baa 0x0193b5d0
bool C_0193b5d0::sub_0193b5d0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x1c) == 0;
}

struct C_0193b600 {
    undefined4 sub_0193b600();
};

// @baa 0x0193b600
undefined4 C_0193b600::sub_0193b600(void)
{
    int param_1 = (int)this;

  if ((*(short *)(param_1 + 8) < *(short *)(param_1 + 0xc)) &&
     (*(short *)(param_1 + 10) < *(short *)(param_1 + 0xe))) {
    return 1;
  }
  return 0;
}

struct C_0193b620 {
    void sub_0193b620(undefined2);
};

// @baa 0x0193b620
void C_0193b620::sub_0193b620(undefined2 param_2)
{
    int param_1 = (int)this;

  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0xc) = param_2;
  return;
}

struct C_0193b640 {
    int sub_0193b640();
};

// @baa 0x0193b640
int C_0193b640::sub_0193b640(void)
{
    int param_1 = (int)this;

  return (int)*(short *)(param_1 + 0xc) - (int)*(short *)(param_1 + 8);
}

struct C_0193b650 {
    int sub_0193b650();
};

// @baa 0x0193b650
int C_0193b650::sub_0193b650(void)
{
    int param_1 = (int)this;

  return (int)*(short *)(param_1 + 0xe) - (int)*(short *)(param_1 + 10);
}

struct C_0193b660 {
    bool sub_0193b660();
};

// @baa 0x0193b660
bool C_0193b660::sub_0193b660(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x18) == 0;
}

struct C_0193b670 { int sub_0193b670(void); };

// @baa 0x0193b670
int C_0193b670::sub_0193b670(void) { return *(int*)((char*)this + 16); }

struct C_0193b680 { int sub_0193b680(void); };

// @baa 0x0193b680
int C_0193b680::sub_0193b680(void) { return *(int*)((char*)this + 20); }

struct C_0193b690 {
    bool sub_0193b690();
};

// @baa 0x0193b690
bool C_0193b690::sub_0193b690(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x1c) == 0;
}

struct C_0193b6a0 { int sub_0193b6a0(void); };

// @baa 0x0193b6a0
int C_0193b6a0::sub_0193b6a0(void) { return *(int*)((char*)this + 0); }

struct C_0193b790 {
    uint sub_0193b790(uint);
};

// @baa 0x0193b790
uint C_0193b790::sub_0193b790(uint param_2)
{
    int * param_1 = (int *)this;

  return (int)(short)((ushort)*(byte *)((param_2 + 1 & 0xfff) +
                                       *(int *)(*(int *)(*param_1 + 0xc) + (param_2 + 1 >> 0xc) * 4)
                                       ) << 8) |
         (uint)*(byte *)(*(int *)(*(int *)(*param_1 + 0xc) + (param_2 >> 0xc) * 4) +
                        (param_2 & 0xfff));
}

struct C_0193bab0 {
    uint sub_0193bab0(int);
};

// @baa 0x0193bab0
uint C_0193bab0::sub_0193bab0(int param_2)
{
    int * param_1 = (int *)this;

  return (int)(short)((ushort)*(byte *)(*(int *)(*param_1 + 8) + 1 + param_2) << 8) |
         (uint)*(byte *)(*(int *)(*param_1 + 8) + param_2);
}

// @baa 0x0193bcc0
void sub_0193bcc0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_0193bce0 {
    int sub_0193bce0(int);
};

// @baa 0x0193bce0
int C_0193bce0::sub_0193bce0(int param_2)
{
    int * param_1 = (int *)this;

  return (param_2 << 10) / *param_1;
}

struct C_0193bd10 {
    void sub_0193bd10(undefined4 *);
};

// @baa 0x0193bd10
void C_0193bd10::sub_0193bd10(undefined4 * param_2)
{
    undefined2 * param_1 = (undefined2 *)this;

  *param_1 = *(undefined2 *)*param_2;
  param_1[1] = *(undefined2 *)param_2[1];
  return;
}

// @baa 0x0193bd70
void __stdcall sub_0193bd70(int a0) {  }

// @baa 0x0193bd80
void __stdcall sub_0193bd80(int a0) {  }

// @baa 0x0193bd90
void __stdcall sub_0193bd90(int a0) {  }

struct C_0193bf30 { int sub_0193bf30(void); };

// @baa 0x0193bf30
int C_0193bf30::sub_0193bf30(void) { return *(int*)((char*)this + 0); }

struct C_0193c040 {
    undefined4 sub_0193c040(short *);
};

// @baa 0x0193c040
undefined4 C_0193c040::sub_0193c040(short * param_2)
{
    short * param_1 = (short *)this;

  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

// @baa 0x0193c0f0
void __stdcall sub_0193c0f0(int a0) {  }

// @baa 0x0193c100
int sub_0193c100(void) { return 0; }

// @baa 0x0193c110
undefined1 sub_0193c110(void)
{
  return 1;
}

struct C_0193c5f0 { int sub_0193c5f0(void); };

// @baa 0x0193c5f0
int C_0193c5f0::sub_0193c5f0(void) { return *(int*)((char*)this + 68); }

struct C_0193c600 {
    bool sub_0193c600();
};

// @baa 0x0193c600
bool C_0193c600::sub_0193c600(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x44) != 0;
}

// @baa 0x0193c830
int sub_0193c830(void) { return 512; }

extern char g_023f86e8[];
struct C_0193c9d0 { C_0193c9d0* sub_0193c9d0(void); };

// @baa 0x0193c9d0
C_0193c9d0* C_0193c9d0::sub_0193c9d0(void) { *(int*)((char*)this + 0) = (int)g_023f86e8; return this; }

// @baa 0x0193ca10
int __stdcall sub_0193ca10(int a0) { return 0; }

struct C_0193ca20 {
    undefined4 * sub_0193ca20(byte);
};

// @baa 0x0193ca20
undefined4 * C_0193ca20::sub_0193ca20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f5994));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0193cb50 {
    int sub_0193cb50();
};

// @baa 0x0193cb50
int C_0193cb50::sub_0193cb50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[1] * 0x10 + 0xc + *(int *)*param_1;
}

struct C_0193cbb0 {
    int sub_0193cbb0();
};

// @baa 0x0193cbb0
int C_0193cbb0::sub_0193cbb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[1] * 8;
}

struct C_0193cc70 { int sub_0193cc70(void); };

// @baa 0x0193cc70
int C_0193cc70::sub_0193cc70(void) { return *(int*)((char*)this + 44); }

struct C_0193ccb0 { int sub_0193ccb0(void); };

// @baa 0x0193ccb0
int C_0193ccb0::sub_0193ccb0(void) { return *(int*)((char*)this + 44); }

// @baa 0x0193d710
undefined4 * sub_0193d710(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

struct C_0193d7a0 {
    undefined4 sub_0193d7a0();
};

// @baa 0x0193d7a0
undefined4 C_0193d7a0::sub_0193d7a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(undefined4 *)*param_1;
}

// @baa 0x0193eaf0
int __stdcall sub_0193eaf0(int a0, int a1) { return 0; }

struct C_0193eb00 { int sub_0193eb00(void); };

// @baa 0x0193eb00
int C_0193eb00::sub_0193eb00(void) { return *(int*)((char*)this + 32); }

struct C_0193ebe0 { int sub_0193ebe0(void); };

// @baa 0x0193ebe0
int C_0193ebe0::sub_0193ebe0(void) { return *(int*)((char*)this + 100); }

// @baa 0x0193ec80
int __stdcall sub_0193ec80(int a0, int a1) { return 0; }

struct C_0193ec90 { int sub_0193ec90(void); };

// @baa 0x0193ec90
int C_0193ec90::sub_0193ec90(void) { return *(int*)((char*)this + 32); }

struct C_0193ed90 { int sub_0193ed90(void); };

// @baa 0x0193ed90
int C_0193ed90::sub_0193ed90(void) { return *(int*)((char*)this + 92); }

void sub_0193cef0();
// @baa 0x0193f2c0
void sub_0193f2c0(void) { sub_0193cef0(); }

void sub_0193d100();
// @baa 0x0193f480
void sub_0193f480(void) { sub_0193d100(); }

// GFx_18f0000.cpp (part 2 of 3): 239 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { C* sub_018f0d60(void); };

// @baa 0x018f0d60
C* C::sub_018f0d60(void) { *(int*)((char*)this + 0) = 0; return this; }

extern "C" __declspec(dllimport) int timeGetTime(...);
// @baa 0x018f11e0
longlong sub_018f11e0(void)
{
  DWORD DVar1;
  
  DVar1 = timeGetTime();
  return (ulonglong)DVar1 * 1000;
}

extern char g_023f58cc[];
struct C_018f3ce0 { C_018f3ce0* sub_018f3ce0(void); };

// @baa 0x018f3ce0
C_018f3ce0* C_018f3ce0::sub_018f3ce0(void) { *(int*)((char*)this + 0) = (int)g_023f58cc; return this; }

struct C_018f3cf0 {
    undefined4 sub_018f3cf0();
};

// @baa 0x018f3cf0
undefined4 C_018f3cf0::sub_018f3cf0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x24) - 1U < 2) {
    return *(undefined4 *)(param_1 + 0x18 + *(int *)(param_1 + 0x24) * 4);
  }
  return 0;
}

// @baa 0x018f3d10
void __stdcall sub_018f3d10(int a0) {  }

struct C_018f3d20 { int sub_018f3d20(void); };

// @baa 0x018f3d20
int C_018f3d20::sub_018f3d20(void) { return *(int*)((char*)this + 4); }

struct C_018f3d30 {
    uint sub_018f3d30();
};

// @baa 0x018f3d30
uint C_018f3d30::sub_018f3d30(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0xc) & 1;
}

struct C_018f3d40 {
    uint sub_018f3d40();
};

// @baa 0x018f3d40
uint C_018f3d40::sub_018f3d40(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0xc) >> 4 & 1;
}

struct C_018f3d50 {
    uint sub_018f3d50();
};

// @baa 0x018f3d50
uint C_018f3d50::sub_018f3d50(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0xc) >> 5 & 1;
}

struct C_018f3d60 {
    uint sub_018f3d60();
};

// @baa 0x018f3d60
uint C_018f3d60::sub_018f3d60(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0xc) >> 1 & 1;
}

struct C_018f3d70 { void sub_018f3d70(void); };

// @baa 0x018f3d70
void C_018f3d70::sub_018f3d70(void) { *(int*)((char*)this + 0) = (int)g_023f58cc; }

// @baa 0x018f3d80
undefined1 sub_018f3d80(void)
{
  return 1;
}

struct C_018f3d90 {
    int sub_018f3d90(int);
};

// @baa 0x018f3d90
int C_018f3d90::sub_018f3d90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2;
}

struct C_018f3da0 { int sub_018f3da0(void); };

// @baa 0x018f3da0
int C_018f3da0::sub_018f3da0(void) { return *(int*)((char*)this + 4); }

struct C_018f3dc0 {
    uint sub_018f3dc0();
};

// @baa 0x018f3dc0
uint C_018f3dc0::sub_018f3dc0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_018f3dd0 { unsigned sub_018f3dd0(void); };

// @baa 0x018f3dd0
unsigned C_018f3dd0::sub_018f3dd0(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_018f3de0 { unsigned sub_018f3de0(void); };

// @baa 0x018f3de0
unsigned C_018f3de0::sub_018f3de0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_018f3df0 {
    uint sub_018f3df0();
};

// @baa 0x018f3df0
uint C_018f3df0::sub_018f3df0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_018f3e00 {
    void sub_018f3e00(uint);
};

// @baa 0x018f3e00
void C_018f3e00::sub_018f3e00(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

// @baa 0x018f3e50
int sub_018f3e50(int a0) { return a0; }

struct C_018f3e60 {
    undefined4 * sub_018f3e60(byte);
};

int sub_00402660(...);
// @baa 0x018f3e60
undefined4 * C_018f3e60::sub_018f3e60(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f58cc));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018f42e0 {
    undefined4 sub_018f42e0(byte);
};

int sub_018f3e80(void);
// @baa 0x018f42e0
undefined4 C_018f42e0::sub_018f42e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018f3e80();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

void sub_018f4d90();
// @baa 0x018f4e00
void sub_018f4e00(void) { sub_018f4d90(); }

void sub_018f4e90();
// @baa 0x018f4f00
void sub_018f4f00(void) { sub_018f4e90(); }

struct C_018f50c0 { C_018f50c0* sub_018f50c0(void); };

// @baa 0x018f50c0
C_018f50c0* C_018f50c0::sub_018f50c0(void) { *(int*)((char*)this + 0) = 262144; return this; }

// @baa 0x018f5150
int __stdcall sub_018f5150(int a0) { return 0; }

struct C_018f5190 {
    undefined4 * sub_018f5190(byte);
};

extern undefined4 g_023f5994;
// @baa 0x018f5190
undefined4 * C_018f5190::sub_018f5190(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f5994));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023f4ed0[];
struct C_018f51c0 { void sub_018f51c0(void); };

// @baa 0x018f51c0
void C_018f51c0::sub_018f51c0(void) { *(int*)((char*)this + 0) = (int)g_023f4ed0; }

struct C_018f51d0 { void sub_018f51d0(int a0); };

// @baa 0x018f51d0
void C_018f51d0::sub_018f51d0(int a0) { *(int*)((char*)this + 12) = a0; }

struct C_018f5310 {
    undefined4 sub_018f5310(int *);
};

// @baa 0x018f5310
undefined4 C_018f5310::sub_018f5310(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_018f5330 {
    bool sub_018f5330();
};

// @baa 0x018f5330
bool C_018f5330::sub_018f5330(void)
{
    int * param_1 = (int *)this;

  return *param_1 == 1;
}

struct C_018f5340 { int sub_018f5340(void); };

// @baa 0x018f5340
int C_018f5340::sub_018f5340(void) { return *(int*)((char*)this + 4); }

struct C_018f5380 { int sub_018f5380(void); };

// @baa 0x018f5380
int C_018f5380::sub_018f5380(void) { return *(int*)((char*)this + 32); }

struct C_018f5390 {
    void sub_018f5390();
};

// @baa 0x018f5390
void C_018f5390::sub_018f5390(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x1c) = 1;
  return;
}

struct C_018f53c0 {
    bool sub_018f53c0();
};

// @baa 0x018f53c0
bool C_018f53c0::sub_018f53c0(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

struct C_018f5450 {
    uint sub_018f5450();
};

// @baa 0x018f5450
uint C_018f5450::sub_018f5450(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x1c) & 0x303;
}

struct C_018f5460 {
    uint sub_018f5460();
};

// @baa 0x018f5460
uint C_018f5460::sub_018f5460(void)
{
    int param_1 = (int)this;

  return ~(*(uint *)(param_1 + 0x1c) >> 6) & 1;
}

struct C_018f5470 {
    void sub_018f5470();
};

// @baa 0x018f5470
void C_018f5470::sub_018f5470(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x40;
  return;
}

struct C_018f5480 {
    bool sub_018f5480();
};

// @baa 0x018f5480
bool C_018f5480::sub_018f5480(void)
{
    int param_1 = (int)this;

  return 0 < *(int *)(param_1 + 0x110);
}

struct C_018f54e0 { char* sub_018f54e0(void); };

// @baa 0x018f54e0
char* C_018f54e0::sub_018f54e0(void) { return (char*)this + 64; }

struct C_018f54f0 { int sub_018f54f0(void); };

// @baa 0x018f54f0
int C_018f54f0::sub_018f54f0(void) { return *(int*)((char*)this + 108); }

struct C_018f5500 {
    uint sub_018f5500();
};

// @baa 0x018f5500
uint C_018f5500::sub_018f5500(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x6c) & 0xf;
}

struct C_018f5510 {
    uint sub_018f5510();
};

// @baa 0x018f5510
uint C_018f5510::sub_018f5510(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x6c) & 0xfffffff0;
}

struct C_018f5520 { char* sub_018f5520(void); };

// @baa 0x018f5520
char* C_018f5520::sub_018f5520(void) { return (char*)this + 48; }

struct C_018f5530 {
    int sub_018f5530();
};

// @baa 0x018f5530
int C_018f5530::sub_018f5530(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x310);
  if (iVar1 == 0) {
    iVar1 = param_1 + 0x30;
  }
  return iVar1;
}

struct C_018f5540 { void sub_018f5540(void); };

// @baa 0x018f5540
void C_018f5540::sub_018f5540(void) { *(int*)((char*)this + 0) = (int)g_023f4ed0; }

struct C_018f55c0 { void sub_018f55c0(void); };

// @baa 0x018f55c0
void C_018f55c0::sub_018f55c0(void) { *(int*)((char*)this + 0) = (int)g_023f4ed0; }

void sub_018d3de0();
// @baa 0x018f55f0
void sub_018f55f0(void) { sub_018d3de0(); }

// @baa 0x018f5780
void sub_018f5780(void) { sub_018d3de0(); }

// @baa 0x018f57e0
void sub_018f57e0(void) { sub_018d3de0(); }

// @baa 0x018f58c0
void sub_018f58c0(void) { sub_018d3de0(); }

extern char g_023f59b4[];
struct C_018f58d0 { C_018f58d0* sub_018f58d0(void); };

// @baa 0x018f58d0
C_018f58d0* C_018f58d0::sub_018f58d0(void) { *(int*)((char*)this + 0) = (int)g_023f59b4; return this; }

struct C_018f58e0 { int sub_018f58e0(void); };

// @baa 0x018f58e0
int C_018f58e0::sub_018f58e0(void) { return *(int*)((char*)this + 0); }

struct C_018f58f0 { int sub_018f58f0(void); };

// @baa 0x018f58f0
int C_018f58f0::sub_018f58f0(void) { return *(int*)((char*)this + 4); }

// @baa 0x018f5930
int __stdcall sub_018f5930(int a0) { return 1; }

struct C_018f5950 {
    undefined4 * sub_018f5950(byte);
};

// @baa 0x018f5950
undefined4 * C_018f5950::sub_018f5950(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f5994));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018f59c0 { int sub_018f59c0(void); };

// @baa 0x018f59c0
int C_018f59c0::sub_018f59c0(void) { return *(int*)((char*)this + 0); }

struct C_018f59d0 { C_018f59d0* sub_018f59d0(void); };

// @baa 0x018f59d0
C_018f59d0* C_018f59d0::sub_018f59d0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018f5a30 { int sub_018f5a30(void); };

// @baa 0x018f5a30
int C_018f5a30::sub_018f5a30(void) { return *(int*)((char*)this + 0); }

struct C_018f5a40 { int sub_018f5a40(void); };

// @baa 0x018f5a40
int C_018f5a40::sub_018f5a40(void) { return *(int*)((char*)this + 0); }

struct C_018f5a50 { int sub_018f5a50(void); };

// @baa 0x018f5a50
int C_018f5a50::sub_018f5a50(void) { return *(int*)((char*)this + 0); }

struct C_018f5a80 { int sub_018f5a80(void); };

// @baa 0x018f5a80
int C_018f5a80::sub_018f5a80(void) { return *(int*)((char*)this + 0); }

struct C_018f5a90 { int sub_018f5a90(void); };

// @baa 0x018f5a90
int C_018f5a90::sub_018f5a90(void) { return *(int*)((char*)this + 0); }

struct C_018f5ac0 { int sub_018f5ac0(void); };

// @baa 0x018f5ac0
int C_018f5ac0::sub_018f5ac0(void) { return *(int*)((char*)this + 0); }

struct C_018f5ad0 { C_018f5ad0* sub_018f5ad0(void); };

// @baa 0x018f5ad0
C_018f5ad0* C_018f5ad0::sub_018f5ad0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018f5b50 { int sub_018f5b50(void); };

// @baa 0x018f5b50
int C_018f5b50::sub_018f5b50(void) { return *(int*)((char*)this + 0); }

struct C_018f5b80 { int sub_018f5b80(void); };

// @baa 0x018f5b80
int C_018f5b80::sub_018f5b80(void) { return *(int*)((char*)this + 0); }

struct C_018f5bb0 { int sub_018f5bb0(void); };

// @baa 0x018f5bb0
int C_018f5bb0::sub_018f5bb0(void) { return *(int*)((char*)this + 0); }

struct C_018f5bc0 { int sub_018f5bc0(void); };

// @baa 0x018f5bc0
int C_018f5bc0::sub_018f5bc0(void) { return *(int*)((char*)this + 0); }

struct C_018f5c00 { int sub_018f5c00(void); };

// @baa 0x018f5c00
int C_018f5c00::sub_018f5c00(void) { return *(int*)((char*)this + 0); }

struct C_018f5c10 { int sub_018f5c10(void); };

// @baa 0x018f5c10
int C_018f5c10::sub_018f5c10(void) { return *(int*)((char*)this + 0); }

struct C_018f5c20 { int sub_018f5c20(void); };

// @baa 0x018f5c20
int C_018f5c20::sub_018f5c20(void) { return *(int*)((char*)this + 0); }

struct C_018f5c30 {
    int sub_018f5c30(int);
};

// @baa 0x018f5c30
int C_018f5c30::sub_018f5c30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_018f5c40 { int sub_018f5c40(void); };

// @baa 0x018f5c40
int C_018f5c40::sub_018f5c40(void) { return *(int*)((char*)this + 4); }

struct C_018f5c70 {
    int sub_018f5c70(int);
};

// @baa 0x018f5c70
int C_018f5c70::sub_018f5c70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_018f5c80 {
    int sub_018f5c80(int);
};

// @baa 0x018f5c80
int C_018f5c80::sub_018f5c80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_018f5c90 { int sub_018f5c90(void); };

// @baa 0x018f5c90
int C_018f5c90::sub_018f5c90(void) { return *(int*)((char*)this + 4); }

struct C_018f5ca0 { C_018f5ca0* sub_018f5ca0(void); };

// @baa 0x018f5ca0
C_018f5ca0* C_018f5ca0::sub_018f5ca0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018f5d00 { int sub_018f5d00(void); };

// @baa 0x018f5d00
int C_018f5d00::sub_018f5d00(void) { return *(int*)((char*)this + 0); }

struct C_018f5d10 { C_018f5d10* sub_018f5d10(void); };

// @baa 0x018f5d10
C_018f5d10* C_018f5d10::sub_018f5d10(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018f5d90 { int sub_018f5d90(void); };

// @baa 0x018f5d90
int C_018f5d90::sub_018f5d90(void) { return *(int*)((char*)this + 0); }

struct C_018f5da0 { C_018f5da0* sub_018f5da0(void); };

// @baa 0x018f5da0
C_018f5da0* C_018f5da0::sub_018f5da0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018f5e20 { int sub_018f5e20(void); };

// @baa 0x018f5e20
int C_018f5e20::sub_018f5e20(void) { return *(int*)((char*)this + 0); }

struct C_018f5e30 { C_018f5e30* sub_018f5e30(void); };

// @baa 0x018f5e30
C_018f5e30* C_018f5e30::sub_018f5e30(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018f5e90 {
    int sub_018f5e90(int);
};

// @baa 0x018f5e90
int C_018f5e90::sub_018f5e90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_018f5ea0 { int sub_018f5ea0(void); };

// @baa 0x018f5ea0
int C_018f5ea0::sub_018f5ea0(void) { return *(int*)((char*)this + 4); }

struct C_018f5ef0 { C_018f5ef0* sub_018f5ef0(void); };

// @baa 0x018f5ef0
C_018f5ef0* C_018f5ef0::sub_018f5ef0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018f5fa0 { int sub_018f5fa0(void); };

// @baa 0x018f5fa0
int C_018f5fa0::sub_018f5fa0(void) { return *(int*)((char*)this + 0); }

struct C_018f5fb0 { C_018f5fb0* sub_018f5fb0(void); };

// @baa 0x018f5fb0
C_018f5fb0* C_018f5fb0::sub_018f5fb0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018f6010 { int sub_018f6010(void); };

// @baa 0x018f6010
int C_018f6010::sub_018f6010(void) { return *(int*)((char*)this + 4); }

struct C_018f6020 { int sub_018f6020(void); };

// @baa 0x018f6020
int C_018f6020::sub_018f6020(void) { return *(int*)((char*)this + 0); }

struct C_018f6060 { int sub_018f6060(void); };

// @baa 0x018f6060
int C_018f6060::sub_018f6060(void) { return *(int*)((char*)this + 0); }

struct C_018f6070 { int sub_018f6070(void); };

// @baa 0x018f6070
int C_018f6070::sub_018f6070(void) { return *(int*)((char*)this + 0); }

struct C_018f60a0 { int sub_018f60a0(void); };

// @baa 0x018f60a0
int C_018f60a0::sub_018f60a0(void) { return *(int*)((char*)this + 0); }

struct C_018f60b0 { int sub_018f60b0(void); };

// @baa 0x018f60b0
int C_018f60b0::sub_018f60b0(void) { return *(int*)((char*)this + 0); }

struct C_018f60e0 { int sub_018f60e0(void); };

// @baa 0x018f60e0
int C_018f60e0::sub_018f60e0(void) { return *(int*)((char*)this + 0); }

struct C_018f60f0 { int sub_018f60f0(void); };

// @baa 0x018f60f0
int C_018f60f0::sub_018f60f0(void) { return *(int*)((char*)this + 0); }

struct C_018f6120 { int sub_018f6120(void); };

// @baa 0x018f6120
int C_018f6120::sub_018f6120(void) { return *(int*)((char*)this + 0); }

struct C_018f6130 { int sub_018f6130(void); };

// @baa 0x018f6130
int C_018f6130::sub_018f6130(void) { return *(int*)((char*)this + 0); }

struct C_018f6190 { int sub_018f6190(void); };

// @baa 0x018f6190
int C_018f6190::sub_018f6190(void) { return *(int*)((char*)this + 0); }

struct C_018f61a0 { int sub_018f61a0(void); };

// @baa 0x018f61a0
int C_018f61a0::sub_018f61a0(void) { return *(int*)((char*)this + 4); }

struct C_018f6200 { int sub_018f6200(void); };

// @baa 0x018f6200
int C_018f6200::sub_018f6200(void) { return *(int*)((char*)this + 0); }

struct C_018f6290 { C_018f6290* sub_018f6290(void); };

// @baa 0x018f6290
C_018f6290* C_018f6290::sub_018f6290(void) { return this; }

struct C_018f62a0 { C_018f62a0* sub_018f62a0(void); };

// @baa 0x018f62a0
C_018f62a0* C_018f62a0::sub_018f62a0(void) { return this; }

struct C_018f62b0 { C_018f62b0* sub_018f62b0(void); };

// @baa 0x018f62b0
C_018f62b0* C_018f62b0::sub_018f62b0(void) { return this; }

struct C_018f62c0 { C_018f62c0* sub_018f62c0(void); };

// @baa 0x018f62c0
C_018f62c0* C_018f62c0::sub_018f62c0(void) { return this; }

struct C_018f6320 { C_018f6320* sub_018f6320(void); };

// @baa 0x018f6320
C_018f6320* C_018f6320::sub_018f6320(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018f6340 { C_018f6340* sub_018f6340(void); };

// @baa 0x018f6340
C_018f6340* C_018f6340::sub_018f6340(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018f63a0 {
    int sub_018f63a0(int);
};

// @baa 0x018f63a0
int C_018f63a0::sub_018f63a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_018f63b0 { C_018f63b0* sub_018f63b0(void); };

// @baa 0x018f63b0
C_018f63b0* C_018f63b0::sub_018f63b0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018f6400 {
    bool sub_018f6400();
};

// @baa 0x018f6400
bool C_018f6400::sub_018f6400(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_018f6410 {
    bool sub_018f6410();
};

// @baa 0x018f6410
bool C_018f6410::sub_018f6410(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_018f6440 { C_018f6440* sub_018f6440(void); };

// @baa 0x018f6440
C_018f6440* C_018f6440::sub_018f6440(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018f64a0 {
    int sub_018f64a0(int);
};

// @baa 0x018f64a0
int C_018f64a0::sub_018f64a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x018f64b0
int sub_018f64b0(int a0) { return *(int*)a0; }

// @baa 0x018f64c0
int sub_018f64c0(int a0) { return *(int*)a0; }

// @baa 0x018f64d0
int sub_018f64d0(int a0) { return *(int*)a0; }

struct C_018f6570 {
    uint sub_018f6570();
};

// @baa 0x018f6570
uint C_018f6570::sub_018f6570(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_018f65e0 { unsigned sub_018f65e0(void); };

// @baa 0x018f65e0
unsigned C_018f65e0::sub_018f65e0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_018f65f0 {
    uint sub_018f65f0();
};

// @baa 0x018f65f0
uint C_018f65f0::sub_018f65f0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_018f6600 {
    void sub_018f6600(uint);
};

// @baa 0x018f6600
void C_018f6600::sub_018f6600(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_018f6650 {
    uint sub_018f6650();
};

// @baa 0x018f6650
uint C_018f6650::sub_018f6650(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_018f6660 {
    uint sub_018f6660();
};

// @baa 0x018f6660
uint C_018f6660::sub_018f6660(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_018f66a0 {
    bool sub_018f66a0();
};

// @baa 0x018f66a0
bool C_018f66a0::sub_018f66a0(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_018f66b0 {
    bool sub_018f66b0();
};

// @baa 0x018f66b0
bool C_018f66b0::sub_018f66b0(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_018f66c0 {
    bool sub_018f66c0();
};

// @baa 0x018f66c0
bool C_018f66c0::sub_018f66c0(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_018f66d0 { unsigned sub_018f66d0(void); };

// @baa 0x018f66d0
unsigned C_018f66d0::sub_018f66d0(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_018f66e0 { unsigned sub_018f66e0(void); };

// @baa 0x018f66e0
unsigned C_018f66e0::sub_018f66e0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_018f66f0 {
    uint sub_018f66f0();
};

// @baa 0x018f66f0
uint C_018f66f0::sub_018f66f0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_018f6700 {
    void sub_018f6700(uint);
};

// @baa 0x018f6700
void C_018f6700::sub_018f6700(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_018f6740 { unsigned sub_018f6740(void); };

// @baa 0x018f6740
unsigned C_018f6740::sub_018f6740(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_018f6750 { unsigned sub_018f6750(void); };

// @baa 0x018f6750
unsigned C_018f6750::sub_018f6750(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_018f6760 {
    uint sub_018f6760();
};

// @baa 0x018f6760
uint C_018f6760::sub_018f6760(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_018f6770 {
    void sub_018f6770(uint);
};

// @baa 0x018f6770
void C_018f6770::sub_018f6770(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_018f6790 { unsigned sub_018f6790(void); };

// @baa 0x018f6790
unsigned C_018f6790::sub_018f6790(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_018f67a0 { unsigned sub_018f67a0(void); };

// @baa 0x018f67a0
unsigned C_018f67a0::sub_018f67a0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_018f67b0 {
    uint sub_018f67b0();
};

// @baa 0x018f67b0
uint C_018f67b0::sub_018f67b0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_018f67c0 {
    void sub_018f67c0(uint);
};

// @baa 0x018f67c0
void C_018f67c0::sub_018f67c0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

// @baa 0x018f6850
int sub_018f6850(int a0) { return a0; }

// @baa 0x018f69f0
void __stdcall sub_018f69f0(int a0) {  }

// @baa 0x018f6a00
void __stdcall sub_018f6a00(int a0) {  }

// @baa 0x018f6a70
void __stdcall sub_018f6a70(int a0) {  }

// @baa 0x018f6a80
void __stdcall sub_018f6a80(int a0) {  }

// @baa 0x018f6a90
void __stdcall sub_018f6a90(int a0) {  }

struct C_018f6aa0 {
    bool sub_018f6aa0();
};

// @baa 0x018f6aa0
bool C_018f6aa0::sub_018f6aa0(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_018f6ab0 { int sub_018f6ab0(int a0); };

// @baa 0x018f6ab0
int C_018f6ab0::sub_018f6ab0(int a0) { return *(int*)((char*)this + 4); }

struct C_018f6ac0 { void sub_018f6ac0(int a0); };

// @baa 0x018f6ac0
void C_018f6ac0::sub_018f6ac0(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_018f6b00 { C_018f6b00* sub_018f6b00(void); };

// @baa 0x018f6b00
C_018f6b00* C_018f6b00::sub_018f6b00(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018f6b40 {
    uint sub_018f6b40();
};

// @baa 0x018f6b40
uint C_018f6b40::sub_018f6b40(void)
{
    uint * param_1 = (uint *)this;

  return *param_1 >> 8 ^ *param_1;
}

struct C_018f6bb0 { int sub_018f6bb0(void); };

// @baa 0x018f6bb0
int C_018f6bb0::sub_018f6bb0(void) { return *(int*)((char*)this + 0); }

struct C_018f6f00 { int sub_018f6f00(void); };

// @baa 0x018f6f00
int C_018f6f00::sub_018f6f00(void) { return *(int*)((char*)this + 12); }

struct C_018f6f40 {
    undefined4 sub_018f6f40();
};

int sub_018e4150(void);
// @baa 0x018f6f40
undefined4 C_018f6f40::sub_018f6f40(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_018e4150();
  return param_1;
}

struct C_018f6f90 { int sub_018f6f90(void); };

// @baa 0x018f6f90
int C_018f6f90::sub_018f6f90(void) { return *(int*)((char*)this + 28); }

struct C_018f6fa0 {
    undefined4 sub_018f6fa0();
};

// @baa 0x018f6fa0
undefined4 C_018f6fa0::sub_018f6fa0(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x24);
}

struct C_018f7180 { int sub_018f7180(void); };

// @baa 0x018f7180
int C_018f7180::sub_018f7180(void) { return *(int*)((char*)this + 40); }

// @baa 0x018f71c0
int sub_018f71c0(void) { return 32768; }

struct C_018f71f0 {
    undefined4 sub_018f71f0();
};

// @baa 0x018f71f0
undefined4 C_018f71f0::sub_018f71f0(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x28);
}

struct C_018f7200 {
    undefined4 sub_018f7200();
};

// @baa 0x018f7200
undefined4 C_018f7200::sub_018f7200(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x74);
}

struct C_018f7210 {
    undefined4 sub_018f7210();
};

// @baa 0x018f7210
undefined4 C_018f7210::sub_018f7210(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x44);
}

struct C_018f7220 {
    undefined4 sub_018f7220();
};

// @baa 0x018f7220
undefined4 C_018f7220::sub_018f7220(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x40);
}

extern char g_023f5a44[];
struct C_018f75f0 { C_018f75f0* sub_018f75f0(void); };

// @baa 0x018f75f0
C_018f75f0* C_018f75f0::sub_018f75f0(void) { *(int*)((char*)this + 0) = (int)g_023f5a44; return this; }

// @baa 0x018f7630
int __stdcall sub_018f7630(int a0) { return 2; }

struct C_018f7650 {
    undefined4 * sub_018f7650(byte);
};

// @baa 0x018f7650
undefined4 * C_018f7650::sub_018f7650(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f5994));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018f7910 {
    void sub_018f7910();
};

// @baa 0x018f7910
void C_018f7910::sub_018f7910(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(*(int *)(param_1 + 0x24) + 0x38) = 1;
  return;
}

struct C_018f7a90 {
    uint sub_018f7a90();
};

// @baa 0x018f7a90
uint C_018f7a90::sub_018f7a90(void)
{
    int param_1 = (int)this;

  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x2c) ^ *(uint *)(param_1 + 0x28) ^ *(uint *)(param_1 + 0x24) ^
          *(uint *)(param_1 + 0x20) ^ *(uint *)(param_1 + 0x1c) ^ *(uint *)(param_1 + 0x18) ^
          *(uint *)(param_1 + 0x14) ^ *(uint *)(param_1 + 0x10);
  return uVar1 >> 7 ^ uVar1;
}

struct C_018f7ab0 {
    undefined4 sub_018f7ab0(int);
};

// @baa 0x018f7ab0
undefined4 C_018f7ab0::sub_018f7ab0(int param_2)
{
    int param_1 = (int)this;

  if (((((*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10)) &&
        (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14))) &&
       (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18))) &&
      ((*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c) &&
       (*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20))))) &&
     ((*(int *)(param_1 + 0x24) == *(int *)(param_2 + 0x24) &&
      ((*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28) &&
       (*(int *)(param_1 + 0x2c) == *(int *)(param_2 + 0x2c))))))) {
    return 1;
  }
  return 0;
}

struct C_018f7d50 { C_018f7d50* sub_018f7d50(void); };

// @baa 0x018f7d50
C_018f7d50* C_018f7d50::sub_018f7d50(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018f7d60 { C_018f7d60* sub_018f7d60(void); };

// @baa 0x018f7d60
C_018f7d60* C_018f7d60::sub_018f7d60(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018f7d70 { C_018f7d70* sub_018f7d70(void); };

// @baa 0x018f7d70
C_018f7d70* C_018f7d70::sub_018f7d70(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018f7d80 { C_018f7d80* sub_018f7d80(void); };

// @baa 0x018f7d80
C_018f7d80* C_018f7d80::sub_018f7d80(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018f7d90 {
    int sub_018f7d90();
};

// @baa 0x018f7d90
int C_018f7d90::sub_018f7d90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[1] * 0x10 + 0xc + *(int *)*param_1;
}

struct C_018f7df0 {
    int sub_018f7df0();
};

// @baa 0x018f7df0
int C_018f7df0::sub_018f7df0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[1] * 0x10 + 0xc + *(int *)*param_1;
}

struct C_018f7f30 { int sub_018f7f30(void); };

// @baa 0x018f7f30
int C_018f7f30::sub_018f7f30(void) { return *(int*)((char*)this + 0); }

struct C_018f7f40 { int sub_018f7f40(void); };

// @baa 0x018f7f40
int C_018f7f40::sub_018f7f40(void) { return *(int*)((char*)this + 0); }

struct C_018f7f50 { int sub_018f7f50(void); };

// @baa 0x018f7f50
int C_018f7f50::sub_018f7f50(void) { return *(int*)((char*)this + 0); }

struct C_018f7fc0 {
    int sub_018f7fc0();
};

// @baa 0x018f7fc0
int C_018f7fc0::sub_018f7fc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[1] * 0x10 + 0xc + *(int *)*param_1;
}

struct C_018f80c0 {
    int sub_018f80c0();
};

// @baa 0x018f80c0
int C_018f80c0::sub_018f80c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + (param_1[1] + 1) * 0xc;
}

struct C_018f8140 {
    int sub_018f8140();
};

// @baa 0x018f8140
int C_018f8140::sub_018f8140(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + (param_1[1] + 1) * 0xc;
}

// @baa 0x018f84c0
undefined4 * sub_018f84c0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

// @baa 0x018f8b70
int sub_018f8b70(void) { return 0; }

// @baa 0x018f8da0
int sub_018f8da0(void) { return 34048; }

struct C_018f8f10 { char* sub_018f8f10(void); };

// @baa 0x018f8f10
char* C_018f8f10::sub_018f8f10(void) { return (char*)this + 16; }

struct C_018f8f20 { char* sub_018f8f20(void); };

// @baa 0x018f8f20
char* C_018f8f20::sub_018f8f20(void) { return (char*)this + 16; }

// @baa 0x018f9150
int sub_018f9150(void) { return 768; }

struct C_018f9160 { int sub_018f9160(void); };

// @baa 0x018f9160
int C_018f9160::sub_018f9160(void) { return *(int*)((char*)this + 0); }

struct C_018f9190 {
    float10 sub_018f9190();
};

// @baa 0x018f9190
float10 C_018f9190::sub_018f9190(void)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(param_1 + 0x1c) + 0x3c);
}

struct C_018f9240 {
    void sub_018f9240();
};

// @baa 0x018f9240
void C_018f9240::sub_018f9240(void)
{
    int param_1 = (int)this;

                    
                    
  (**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + 0x10) + 0x24))();
  return;
}

struct C_018f9250 {
    float10 sub_018f9250();
};

// @baa 0x018f9250
float10 C_018f9250::sub_018f9250(void)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x10) + 0x1c) + 0x3c);
}

struct C_018f9300 {
    void sub_018f9300();
};

// @baa 0x018f9300
void C_018f9300::sub_018f9300(void)
{
    int param_1 = (int)this;

                    
                    
  (**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + 0x10) + 0x1c))();
  return;
}

struct C_018f9310 {
    void sub_018f9310();
};

// @baa 0x018f9310
void C_018f9310::sub_018f9310(void)
{
    int param_1 = (int)this;

                    
                    
  (**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + 0x10) + 0x38))();
  return;
}

struct C_018f9320 {
    int sub_018f9320();
};

// @baa 0x018f9320
int C_018f9320::sub_018f9320(void)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x10) + 0x1c) + 0x20) + 0xc;
}

struct C_018f9370 {
    int sub_018f9370();
};

// @baa 0x018f9370
int C_018f9370::sub_018f9370(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) != 0) {
    return *(int *)(param_1 + 4) + 0x10;
  }
  return 0;
}

struct C_018f9380 {
    undefined4 sub_018f9380();
};

// @baa 0x018f9380
undefined4 C_018f9380::sub_018f9380(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x10) + 0x1c) + 100);
}

// @baa 0x018f9390
int sub_018f9390(int a0) { return *(int*)a0; }

struct C_018f9450 { int sub_018f9450(void); };

// @baa 0x018f9450
int C_018f9450::sub_018f9450(void) { return *(int*)((char*)this + 144); }

struct C_018f94e0 {
    undefined4 sub_018f94e0(undefined4);
};

int sub_018f7c40(...);
// @baa 0x018f94e0
undefined4 C_018f94e0::sub_018f94e0(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_018f7c40(param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10),
               *(undefined4 *)(param_1 + 0x18));
  return param_2;
}

struct C_018f9590 { int sub_018f9590(void); };

// @baa 0x018f9590
int C_018f9590::sub_018f9590(void) { return *(int*)((char*)this + 0); }

struct C_018f95a0 { int sub_018f95a0(void); };

// @baa 0x018f95a0
int C_018f95a0::sub_018f95a0(void) { return *(int*)((char*)this + 0); }

struct C_018f95b0 { int sub_018f95b0(void); };

// @baa 0x018f95b0
int C_018f95b0::sub_018f95b0(void) { return *(int*)((char*)this + 0); }

struct C_018f95c0 { int sub_018f95c0(void); };

// @baa 0x018f95c0
int C_018f95c0::sub_018f95c0(void) { return *(int*)((char*)this + 0); }

struct C_018f95d0 { int sub_018f95d0(void); };

// @baa 0x018f95d0
int C_018f95d0::sub_018f95d0(void) { return *(int*)((char*)this + 0); }

struct C_018f95e0 { int sub_018f95e0(void); };

// @baa 0x018f95e0
int C_018f95e0::sub_018f95e0(void) { return *(int*)((char*)this + 0); }

struct C_018f9610 {
    int sub_018f9610();
};

// @baa 0x018f9610
int C_018f9610::sub_018f9610(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[1] * 0x10 + 0xc + *(int *)*param_1;
}

struct C_018f97c0 {
    int sub_018f97c0();
};

// @baa 0x018f97c0
int C_018f97c0::sub_018f97c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + (param_1[1] + 1) * 0xc;
}

struct C_018f9820 {
    int sub_018f9820();
};

// @baa 0x018f9820
int C_018f9820::sub_018f9820(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + (param_1[1] + 1) * 0xc;
}

struct C_018f9bc0 {
    uint sub_018f9bc0(uint);
};

// @baa 0x018f9bc0
uint C_018f9bc0::sub_018f9bc0(uint param_2)
{
    int param_1 = (int)this;

  return (*(uint *)(param_1 + 4) >> 8 ^ *(uint *)(param_1 + 4)) & param_2;
}

struct C_018fa190 { int sub_018fa190(void); };

// @baa 0x018fa190
int C_018fa190::sub_018fa190(void) { return *(int*)((char*)this + 160); }

struct C_018fa1a0 { int sub_018fa1a0(void); };

// @baa 0x018fa1a0
int C_018fa1a0::sub_018fa1a0(void) { return *(int*)((char*)this + 168); }

struct C_018fa210 {
    int sub_018fa210(int);
};

// @baa 0x018fa210
int C_018fa210::sub_018fa210(int param_2)
{
    int param_1 = (int)this;

  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xb0);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*piVar1 == param_2) break;
    piVar1 = (int *)piVar1[3];
  }
  return piVar1[1];
}

void sub_018f9720();
// @baa 0x018fa340
void sub_018fa340(void) { sub_018f9720(); }

void sub_018f9840();
// @baa 0x018fa370
void sub_018fa370(void) { sub_018f9840(); }

void sub_018f9950();
// @baa 0x018fa3a0
void sub_018fa3a0(void) { sub_018f9950(); }

void sub_018f9a20();
// @baa 0x018fa3b0
void sub_018fa3b0(void) { sub_018f9a20(); }

void sub_018fa440();
// @baa 0x018faab0
void sub_018faab0(void) { sub_018fa440(); }

void sub_018fa5c0();
// @baa 0x018fb100
void sub_018fb100(void) { sub_018fa5c0(); }

void sub_018fa9f0();
// @baa 0x018fb1f0
void sub_018fb1f0(void) { sub_018fa9f0(); }

void sub_018faa50();
// @baa 0x018fb210
void sub_018fb210(void) { sub_018faa50(); }

struct C_018fb220 { C_018fb220* sub_018fb220(void); };

// @baa 0x018fb220
C_018fb220* C_018fb220::sub_018fb220(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x018fb230
void sub_018fb230(void) { sub_018fa440(); }

void sub_018faac0();
// @baa 0x018fb240
void sub_018fb240(void) { sub_018faac0(); }

void sub_018fab40();
// @baa 0x018fb250
void sub_018fb250(void) { sub_018fab40(); }

void sub_018fabb0();
// @baa 0x018fb260
void sub_018fb260(void) { sub_018fabb0(); }

void sub_018fac20();
// @baa 0x018fb270
void sub_018fb270(void) { sub_018fac20(); }

struct C_018fc190 { C_018fc190* sub_018fc190(void); };

// @baa 0x018fc190
C_018fc190* C_018fc190::sub_018fc190(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x018fc1a0
void sub_018fc1a0(void) { sub_018fa440(); }

struct C_018fc280 { C_018fc280* sub_018fc280(void); };

// @baa 0x018fc280
C_018fc280* C_018fc280::sub_018fc280(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x018fc290
void sub_018fc290(void) { sub_018faac0(); }

struct C_018fc2a0 { C_018fc2a0* sub_018fc2a0(void); };

// @baa 0x018fc2a0
C_018fc2a0* C_018fc2a0::sub_018fc2a0(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x018fc2b0
void sub_018fc2b0(void) { sub_018fab40(); }

struct C_018fc360 { C_018fc360* sub_018fc360(void); };

// @baa 0x018fc360
C_018fc360* C_018fc360::sub_018fc360(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x018fc370
void sub_018fc370(void) { sub_018fabb0(); }

struct C_018fc3a0 { C_018fc3a0* sub_018fc3a0(void); };

// @baa 0x018fc3a0
C_018fc3a0* C_018fc3a0::sub_018fc3a0(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x018fc3b0
void sub_018fc3b0(void) { sub_018fac20(); }

struct C_018fcde0 { C_018fcde0* sub_018fcde0(void); };

// @baa 0x018fcde0
C_018fcde0* C_018fcde0::sub_018fcde0(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x018fcdf0
void sub_018fcdf0(void) { sub_018faac0(); }

struct C_018fce00 { C_018fce00* sub_018fce00(void); };

// @baa 0x018fce00
C_018fce00* C_018fce00::sub_018fce00(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x018fce10
void sub_018fce10(void) { sub_018fabb0(); }

struct C_018fd2c0 { C_018fd2c0* sub_018fd2c0(void); };

// @baa 0x018fd2c0
C_018fd2c0* C_018fd2c0::sub_018fd2c0(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x018fd2d0
void sub_018fd2d0(void) { sub_018fac20(); }

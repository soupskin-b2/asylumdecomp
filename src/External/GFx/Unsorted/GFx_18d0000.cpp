// GFx_18d0000.cpp (part 1 of 3): 242 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_018d3cd0();
};

// @baa 0x018d3cd0
void C::sub_018d3cd0(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 4) = 0;
  return;
}

struct C_018d3ce0 {
    void sub_018d3ce0();
};

// @baa 0x018d3ce0
void C_018d3ce0::sub_018d3ce0(void)
{
    int * param_1 = (int *)this;

  *param_1 = *param_1 + 1;
  return;
}

// @baa 0x018d3d00
void sub_018d3d00(void) {  }

// @baa 0x018d3d10
void sub_018d3d10(void) {  }

struct C_018d3d20 {
    void sub_018d3d20();
};

// @baa 0x018d3d20
void C_018d3d20::sub_018d3d20(void)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}

struct C_018d3f90 {
    undefined4 sub_018d3f90(int *);
};

// @baa 0x018d3f90
undefined4 C_018d3f90::sub_018d3f90(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

extern char g_023f4bfc[];
struct C_018d3fe0 { C_018d3fe0* sub_018d3fe0(void); };

// @baa 0x018d3fe0
C_018d3fe0* C_018d3fe0::sub_018d3fe0(void) { *(int*)((char*)this + 0) = (int)g_023f4bfc; return this; }

void sub_018d3de0();
// @baa 0x018d3ff0
void sub_018d3ff0(void) { sub_018d3de0(); }

#pragma pack(push, 1)
struct GWaitable { char _pad0[1]; };

#pragma pack(pop)
struct C_018d4020 {
    bool sub_018d4020();
};

// @baa 0x018d4020
bool C_018d4020::sub_018d4020(void)
{
    GWaitable * this_ = (GWaitable *)this;

                    
  return true;
}

extern char g_023f4c14[];
struct C_018d4030 { C_018d4030* sub_018d4030(void); };

// @baa 0x018d4030
C_018d4030* C_018d4030::sub_018d4030(void) { *(int*)((char*)this + 0) = (int)g_023f4c14; return this; }

#pragma pack(push, 1)
struct GAcquireInterface { char _pad0[1]; };

#pragma pack(pop)
struct C_018d40a0 {
    bool sub_018d40a0();
};

// @baa 0x018d40a0
bool C_018d40a0::sub_018d40a0(void)
{
    GAcquireInterface * this_ = (GAcquireInterface *)this;

                    
  return true;
}

#pragma pack(push, 1)
#pragma pack(pop)
struct C_018d40b0 {
    bool sub_018d40b0();
};

// @baa 0x018d40b0
bool C_018d40b0::sub_018d40b0(void)
{
    GAcquireInterface * this_ = (GAcquireInterface *)this;

                    
  return true;
}

#pragma pack(push, 1)
#pragma pack(pop)
struct C_018d40c0 {
    bool sub_018d40c0();
};

// @baa 0x018d40c0
bool C_018d40c0::sub_018d40c0(void)
{
    GAcquireInterface * this_ = (GAcquireInterface *)this;

                    
  return true;
}

#pragma pack(push, 1)
#pragma pack(pop)
struct C_018d40d0 {
    bool sub_018d40d0();
};

// @baa 0x018d40d0
bool C_018d40d0::sub_018d40d0(void)
{
    GAcquireInterface * this_ = (GAcquireInterface *)this;

                    
  return true;
}

#pragma pack(push, 1)
#pragma pack(pop)
#pragma pack(push, 1)
struct GEvent { char _pad0[1]; };

#pragma pack(pop)
struct C_018d42d0 {
    GAcquireInterface * sub_018d42d0();
};

// @baa 0x018d42d0
GAcquireInterface * C_018d42d0::sub_018d42d0(void)
{
    GEvent * this_ = (GEvent *)this;

                    
  if (this_ != (GEvent *)0x0) {
    return (GAcquireInterface *)(this_ + 0x14);
  }
  return (GAcquireInterface *)0x0;
}

#pragma pack(push, 1)
#pragma pack(pop)
struct C_018d4330 {
    bool sub_018d4330();
};

// @baa 0x018d4330
bool C_018d4330::sub_018d4330(void)
{
    GEvent * this_ = (GEvent *)this;

                    
  return true;
}

struct C_018d4340 { int sub_018d4340(void); };

// @baa 0x018d4340
int C_018d4340::sub_018d4340(void) { return *(int*)((char*)this + 24); }

struct C_018d4350 { int sub_018d4350(void); };

// @baa 0x018d4350
int C_018d4350::sub_018d4350(void) { return *(int*)((char*)this + 28); }

#pragma pack(push, 1)
struct GSemaphore { char _pad0[1]; };

#pragma pack(pop)
struct C_018d4530 {
    bool sub_018d4530();
};

// @baa 0x018d4530
bool C_018d4530::sub_018d4530(void)
{
    GSemaphore * this_ = (GSemaphore *)this;

                    
  return true;
}

#pragma pack(push, 1)
#pragma pack(pop)
struct C_018d4540 {
    bool sub_018d4540();
};

int sub_018d4360(void);
// @baa 0x018d4540
bool C_018d4540::sub_018d4540(void)
{
    GSemaphore * this_ = (GSemaphore *)this;

  int iVar1;
  
                    
  iVar1 = sub_018d4360();
  return 0 < iVar1;
}

#pragma pack(push, 1)
#pragma pack(pop)
#pragma pack(push, 1)
#pragma pack(pop)
struct C_018d4550 {
    GAcquireInterface * sub_018d4550();
};

// @baa 0x018d4550
GAcquireInterface * C_018d4550::sub_018d4550(void)
{
    GSemaphore * this_ = (GSemaphore *)this;

                    
  if (this_ != (GSemaphore *)0x0) {
    return (GAcquireInterface *)(this_ + 0x14);
  }
  return (GAcquireInterface *)0x0;
}

struct C_018d45d0 {
    int sub_018d45d0();
};

// @baa 0x018d45d0
int C_018d45d0::sub_018d45d0(void)
{
    int param_1 = (int)this;

  if (param_1 != 0) {
    return param_1 + 0x14;
  }
  return 0;
}

struct C_018d4640 {
    int sub_018d4640(int);
};

// @baa 0x018d4640
int C_018d4640::sub_018d4640(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_018d4650 { int sub_018d4650(void); };

// @baa 0x018d4650
int C_018d4650::sub_018d4650(void) { return *(int*)((char*)this + 4); }

struct C_018d4660 { C_018d4660* sub_018d4660(void); };

// @baa 0x018d4660
C_018d4660* C_018d4660::sub_018d4660(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018d4670 { int sub_018d4670(void); };

// @baa 0x018d4670
int C_018d4670::sub_018d4670(void) { return *(int*)((char*)this + 0); }

struct C_018d4680 { int sub_018d4680(void); };

// @baa 0x018d4680
int C_018d4680::sub_018d4680(void) { return *(int*)((char*)this + 0); }

struct C_018d46c0 {
    int sub_018d46c0(int);
};

// @baa 0x018d46c0
int C_018d46c0::sub_018d46c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_018d46d0 {
    uint sub_018d46d0();
};

// @baa 0x018d46d0
uint C_018d46d0::sub_018d46d0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_018d46e0 { unsigned sub_018d46e0(void); };

// @baa 0x018d46e0
unsigned C_018d46e0::sub_018d46e0(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_018d46f0 { unsigned sub_018d46f0(void); };

// @baa 0x018d46f0
unsigned C_018d46f0::sub_018d46f0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_018d4700 {
    uint sub_018d4700();
};

// @baa 0x018d4700
uint C_018d4700::sub_018d4700(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_018d4710 {
    void sub_018d4710(uint);
};

// @baa 0x018d4710
void C_018d4710::sub_018d4710(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

// @baa 0x018d4730
undefined4 * sub_018d4730(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

void sub_018d4750();
// @baa 0x018d4830
void sub_018d4830(void) { sub_018d4750(); }

void sub_018d4850();
// @baa 0x018d4900
void sub_018d4900(void) { sub_018d4850(); }

struct C_018d4f40 { C_018d4f40* sub_018d4f40(void); };

// @baa 0x018d4f40
C_018d4f40* C_018d4f40::sub_018d4f40(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x018d52b0
void sub_018d52b0(void) {  }

// @baa 0x018d52c0
void __stdcall sub_018d52c0(int a0) {  }

// @baa 0x018d5a40
void sub_018d5a40(void) {  }

// @baa 0x018d5a50
void __stdcall sub_018d5a50(int a0) {  }

struct C_018d5a70 { void sub_018d5a70(void); };

// @baa 0x018d5a70
void C_018d5a70::sub_018d5a70(void) { *(int*)((char*)this + 0) = (int)g_023f4bfc; }

// @baa 0x018d5a80
undefined1 sub_018d5a80(void)
{
  return 1;
}

#pragma pack(push, 1)
struct GMutex { char _pad0[1]; };

#pragma pack(pop)
struct C_018d5c30 {
    bool sub_018d5c30();
};

// @baa 0x018d5c30
bool C_018d5c30::sub_018d5c30(void)
{
    GMutex * this_ = (GMutex *)this;

                    
  return true;
}

struct C_018d5d20 {
    void sub_018d5d20(int);
};

// @baa 0x018d5d20
void C_018d5d20::sub_018d5d20(int param_2)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x1c) != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_1 + 0x1c);
    *(int *)(*(int *)(param_1 + 0x1c) + 4) = param_2;
    *(undefined4 *)(param_2 + 4) = 0;
    *(int *)(param_1 + 0x1c) = param_2;
    return;
  }
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(int *)(param_1 + 0x18) = param_2;
  *(int *)(param_1 + 0x1c) = param_2;
  return;
}

#pragma pack(push, 1)
struct GThread { char _pad0[1]; };

#pragma pack(pop)
struct C_018d5fc0 {
    int sub_018d5fc0();
};

// @baa 0x018d5fc0
int C_018d5fc0::sub_018d5fc0(void)
{
    GThread * this_ = (GThread *)this;

  int iVar1;
  
                    
  if (*(code **)(this_ + 0x30) != (code *)0x0) {
    iVar1 = (**(code **)(this_ + 0x30))(this_,*(undefined4 *)(this_ + 0x34));
    return iVar1;
  }
  return 0;
}

// @baa 0x018d5fe0
void sub_018d5fe0(void) {  }

struct C_018d6070 { int sub_018d6070(void); };

// @baa 0x018d6070
int C_018d6070::sub_018d6070(void) { return *(int*)((char*)this + 0); }

struct C_018d6080 { int sub_018d6080(void); };

// @baa 0x018d6080
int C_018d6080::sub_018d6080(void) { return *(int*)((char*)this + 0); }

struct C_018d6090 { C_018d6090* sub_018d6090(void); };

// @baa 0x018d6090
C_018d6090* C_018d6090::sub_018d6090(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018d60a0 {
    undefined4 sub_018d60a0();
};

// @baa 0x018d60a0
undefined4 C_018d60a0::sub_018d60a0(void)
{
    int * param_1 = (int *)this;

  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    return 0;
  }
  return *(undefined4 *)*param_1;
}

struct C_018d60b0 { C_018d60b0* sub_018d60b0(void); };

// @baa 0x018d60b0
C_018d60b0* C_018d60b0::sub_018d60b0(void) { return this; }

struct C_018d60e0 { void sub_018d60e0(void); };

// @baa 0x018d60e0
void C_018d60e0::sub_018d60e0(void) { *(int*)((char*)this + 0) = -2; }

struct C_018d61a0 {
    bool sub_018d61a0();
};

// @baa 0x018d61a0
bool C_018d61a0::sub_018d61a0(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -1;
}

struct C_018d61b0 { int sub_018d61b0(int a0); };

// @baa 0x018d61b0
int C_018d61b0::sub_018d61b0(int a0) { return *(int*)((char*)this + 4); }

struct C_018d61c0 { void sub_018d61c0(int a0); };

// @baa 0x018d61c0
void C_018d61c0::sub_018d61c0(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_018d61d0 {
    undefined4 * sub_018d61d0(byte);
};

int sub_00402660(...);
// @baa 0x018d61d0
undefined4 * C_018d61d0::sub_018d61d0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f4bfc));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018d6280 {
    int sub_018d6280();
};

// @baa 0x018d6280
int C_018d6280::sub_018d6280(void)
{
    int param_1 = (int)this;

  if (param_1 != 0) {
    return param_1 + 0x14;
  }
  return 0;
}

struct C_018d62b0 {
    uint sub_018d62b0();
};

// @baa 0x018d62b0
uint C_018d62b0::sub_018d62b0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18) >> 1 & 1;
}

#pragma pack(push, 1)
#pragma pack(pop)
struct C_018d62c0 {
    bool sub_018d62c0();
};

// @baa 0x018d62c0
bool C_018d62c0::sub_018d62c0(void)
{
    GThread * this_ = (GThread *)this;

                    
  return (bool)((byte)(*(uint *)(this_ + 0x18) >> 4) & 1);
}

#pragma pack(push, 1)
#pragma pack(pop)
struct C_018d62d0 {
    bool sub_018d62d0();
};

// @baa 0x018d62d0
bool C_018d62d0::sub_018d62d0(void)
{
    GThread * this_ = (GThread *)this;

                    
  return (bool)((byte)(*(uint *)(this_ + 0x18) >> 1) & 1);
}

struct C_018d6310 { C_018d6310* sub_018d6310(void); };

// @baa 0x018d6310
C_018d6310* C_018d6310::sub_018d6310(void) { return this; }

void sub_018d6320();
// @baa 0x018d6620
void sub_018d6620(void) { sub_018d6320(); }

void sub_018d6490();
// @baa 0x018d66b0
void sub_018d66b0(void) { sub_018d6490(); }

void sub_018d6dc0();
// @baa 0x018d6e20
void sub_018d6e20(void) { sub_018d6dc0(); }

extern char g_023f4d80[];
struct C_018d7050 { void sub_018d7050(void); };

// @baa 0x018d7050
void C_018d7050::sub_018d7050(void) { *(int*)((char*)this + 0) = (int)g_023f4d80; }

struct C_018d7060 {
    undefined4 * sub_018d7060(byte);
};

// @baa 0x018d7060
undefined4 * C_018d7060::sub_018d7060(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f4d80));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023f4d60[];
struct C_018d70a0 { void sub_018d70a0(void); };

// @baa 0x018d70a0
void C_018d70a0::sub_018d70a0(void) { *(int*)((char*)this + 0) = (int)g_023f4d60; }

struct C_018d70b0 { C_018d70b0* sub_018d70b0(void); };

// @baa 0x018d70b0
C_018d70b0* C_018d70b0::sub_018d70b0(void) { *(int*)((char*)this + 0) = (int)g_023f4d80; return this; }

extern undefined4 g_025fe8c8;
// @baa 0x018d70e0
undefined * sub_018d70e0(void)
{
  return (undefined *)(g_025fe8c8);
}

extern undefined4 g_025fe8cc;
// @baa 0x018d7110
undefined4 sub_018d7110(void)
{
  return g_025fe8cc;
}

extern undefined4 g_025fe8d0;
// @baa 0x018d7140
undefined * sub_018d7140(void)
{
  return (undefined *)(g_025fe8d0);
}

struct C_018d71a0 {
    void sub_018d71a0(undefined1);
};

// @baa 0x018d71a0
void C_018d71a0::sub_018d71a0(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 3) = param_2;
  return;
}

struct C_018d71b0 {
    void sub_018d71b0(undefined1);
};

// @baa 0x018d71b0
void C_018d71b0::sub_018d71b0(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 2) = param_2;
  return;
}

struct C_018d71c0 {
    void sub_018d71c0(undefined1);
};

// @baa 0x018d71c0
void C_018d71c0::sub_018d71c0(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 1) = param_2;
  return;
}

struct C_018d71d0 {
    void sub_018d71d0(undefined1);
};

// @baa 0x018d71d0
void C_018d71d0::sub_018d71d0(undefined1 param_2)
{
    undefined1 * param_1 = (undefined1 *)this;

  *param_1 = param_2;
  return;
}

struct C_018d71e0 {
    void sub_018d71e0(undefined1, undefined1, undefined1);
};

// @baa 0x018d71e0
void C_018d71e0::sub_018d71e0(undefined1 param_2, undefined1 param_3, undefined1 param_4)
{
    undefined1 * param_1 = (undefined1 *)this;

  param_1[2] = param_2;
  param_1[1] = param_3;
  *param_1 = param_4;
  return;
}

struct C_018d7200 {
    void sub_018d7200(undefined1, undefined1, undefined1, undefined1);
};

// @baa 0x018d7200
void C_018d7200::sub_018d7200(undefined1 param_2, undefined1 param_3, undefined1 param_4, undefined1 param_5)
{
    undefined1 * param_1 = (undefined1 *)this;

  param_1[2] = param_2;
  param_1[1] = param_3;
  *param_1 = param_4;
  param_1[3] = param_5;
  return;
}

struct C_018d7220 {
    int sub_018d7220(int);
};

// @baa 0x018d7220
int C_018d7220::sub_018d7220(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0xc) * param_2 + *(int *)(param_1 + 0x10);
}

struct C_018d7230 { int sub_018d7230(void); };

// @baa 0x018d7230
int C_018d7230::sub_018d7230(void) { return *(int*)((char*)this + 12); }

// @baa 0x018d7240
undefined1 sub_018d7240(undefined1 param_1)
{
  return param_1;
}

// @baa 0x018d7250
undefined2 sub_018d7250(undefined2 param_1)
{
  return param_1;
}

// @baa 0x018d7260
int sub_018d7260(int a0) { return a0; }

// @baa 0x018d7270
undefined1 sub_018d7270(undefined1 param_1)
{
  return param_1;
}

// @baa 0x018d7280
undefined2 sub_018d7280(undefined2 param_1)
{
  return param_1;
}

struct C_018d8060 {
    int sub_018d8060(int);
};

// @baa 0x018d8060
int C_018d8060::sub_018d8060(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_018d8070 {
    int sub_018d8070(int);
};

// @baa 0x018d8070
int C_018d8070::sub_018d8070(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_018d8080 { int sub_018d8080(void); };

// @baa 0x018d8080
int C_018d8080::sub_018d8080(void) { return *(int*)((char*)this + 4); }

struct C_018d80e0 { int sub_018d80e0(void); };

// @baa 0x018d80e0
int C_018d80e0::sub_018d80e0(void) { return *(int*)((char*)this + 0); }

struct C_018d80f0 { int sub_018d80f0(void); };

// @baa 0x018d80f0
int C_018d80f0::sub_018d80f0(void) { return *(int*)((char*)this + 0); }

// @baa 0x018d8110
uint sub_018d8110(uint param_1, uint param_2)
{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}

// @baa 0x018d8120
uint sub_018d8120(uint param_1, uint param_2)
{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}

// @baa 0x018d8130
int sub_018d8130(int param_1)
{
  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}

struct C_018d9510 {
    bool sub_018d9510();
};

// @baa 0x018d9510
bool C_018d9510::sub_018d9510(void)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + 1) == '\0';
}

struct C_018d9520 {
    byte sub_018d9520();
};

// @baa 0x018d9520
byte C_018d9520::sub_018d9520(void)
{
    byte * param_1 = (byte *)this;

  return *param_1 & 0x7f;
}

struct C_018d9530 {
    byte sub_018d9530();
};

// @baa 0x018d9530
byte C_018d9530::sub_018d9530(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 1) >> 7;
}

struct C_018d9540 {
    bool sub_018d9540(char);
};

// @baa 0x018d9540
bool C_018d9540::sub_018d9540(char param_2)
{
    char * param_1 = (char *)this;

  return *param_1 == param_2;
}

struct C_018d9590 {
    void sub_018d9590(undefined2);
};

// @baa 0x018d9590
void C_018d9590::sub_018d9590(undefined2 param_2)
{
    undefined2 * param_1 = (undefined2 *)this;

  *(undefined1 *)((int)param_1 + 3) = 0x80;
  *param_1 = param_2;
  return;
}

struct C_018d95b0 {
    int sub_018d95b0(int);
};

// @baa 0x018d95b0
int C_018d95b0::sub_018d95b0(int param_2)
{
    int param_1 = (int)this;

  return param_2 + param_1;
}

struct C_018d95c0 {
    int sub_018d95c0(int);
};

// @baa 0x018d95c0
int C_018d95c0::sub_018d95c0(int param_2)
{
    int param_1 = (int)this;

  return param_1 - param_2;
}

struct C_018d95d0 {
    int sub_018d95d0();
};

// @baa 0x018d95d0
int C_018d95d0::sub_018d95d0(void)
{
    int param_1 = (int)this;

  return param_1 + -2;
}

struct C_018d95e0 {
    bool sub_018d95e0();
};

// @baa 0x018d95e0
bool C_018d95e0::sub_018d95e0(void)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + -1) == '\0';
}

struct C_018d95f0 {
    byte sub_018d95f0();
};

// @baa 0x018d95f0
byte C_018d95f0::sub_018d95f0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + -2) & 0x7f;
}

struct C_018d9600 {
    bool sub_018d9600(char);
};

// @baa 0x018d9600
bool C_018d9600::sub_018d9600(char param_2)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + -2) == param_2;
}

struct C_018d9630 {
    void sub_018d9630(byte, char);
};

// @baa 0x018d9630
void C_018d9630::sub_018d9630(byte param_2, char param_3)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + -2) = param_3 << 7 | param_2;
  return;
}

struct C_018d9650 {
    int sub_018d9650();
};

// @baa 0x018d9650
int C_018d9650::sub_018d9650(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x10) + -2;
}

void sub_01a375f0();
// @baa 0x018d9660
void sub_018d9660(void) { sub_01a375f0(); }

void sub_01a37612();
// @baa 0x018d9670
void sub_018d9670(void) { sub_01a37612(); }

struct C_018d9e80 { C_018d9e80* sub_018d9e80(void); };

// @baa 0x018d9e80
C_018d9e80* C_018d9e80::sub_018d9e80(void) { return this; }

struct C_018d9e90 {
    void sub_018d9e90();
};

// @baa 0x018d9e90
void C_018d9e90::sub_018d9e90(void)
{
    int param_1 = (int)this;

  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  return;
}

struct C_018d9ea0 {
    bool sub_018d9ea0();
};

// @baa 0x018d9ea0
bool C_018d9ea0::sub_018d9ea0(void)
{
    int * param_1 = (int *)this;

  return (int *)*param_1 == param_1;
}

struct C_018d9eb0 {
    void sub_018d9eb0(int);
};

// @baa 0x018d9eb0
void C_018d9eb0::sub_018d9eb0(int param_2)
{
    int * param_1 = (int *)this;

  param_1[1] = *(int *)(param_2 + 4);
  *param_1 = param_2;
  **(int **)(param_2 + 4) = (int)param_1;
  *(int **)(param_2 + 4) = param_1;
  return;
}

struct C_018d9ed0 {
    void sub_018d9ed0();
};

// @baa 0x018d9ed0
void C_018d9ed0::sub_018d9ed0(void)
{
    int * param_1 = (int *)this;

  *(int *)(*param_1 + 4) = param_1[1];
  *(int *)param_1[1] = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

typedef uint size_t;

void * sub_01a37612(void *, int, size_t);
// @baa 0x018d9ef0
void sub_018d9ef0(void * param_1, size_t param_2)
{
  sub_01a37612(param_1,0xcc,param_2);
  return;
}

struct C_018d9fe0 {
    void sub_018d9fe0(undefined4 *);
};

// @baa 0x018d9fe0
void C_018d9fe0::sub_018d9fe0(undefined4 * param_2)
{
    int param_1 = (int)this;

  *param_2 = 0;
  param_2[1] = *(undefined4 *)(param_1 + 8);
  *(undefined4 **)(param_1 + 8) = param_2;
  return;
}

struct C_018da140 {
    void sub_018da140();
};

// @baa 0x018da140
void C_018da140::sub_018da140(void)
{
    int * param_1 = (int *)this;

  int *piVar1;
  
  if ((int *)*param_1 != param_1) {
    for (piVar1 = (int *)param_1[1]; piVar1 != param_1; piVar1 = (int *)piVar1[1]) {
    }
  }
  return;
}

struct C_018da180 {
    undefined4 * sub_018da180();
};

extern undefined4 g_023f4db4;
// @baa 0x018da180
undefined4 * C_018da180::sub_018da180(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f4db4));
  sub_01a37612(param_1 + 2,0,0x40);
  return param_1;
}

struct C_018da1a0 { char* sub_018da1a0(void); };

// @baa 0x018da1a0
char* C_018da1a0::sub_018da1a0(void) { return (char*)this + 8; }

struct C_018da1b0 {
    undefined4 * sub_018da1b0(byte);
};

// @baa 0x018da1b0
undefined4 * C_018da1b0::sub_018da1b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f4d60));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018da220 { char* sub_018da220(void); };

// @baa 0x018da220
char* C_018da220::sub_018da220(void) { return (char*)this + 1296; }

int sub_018da480(...);
// @baa 0x018da4e0
undefined4 * sub_018da4e0(int param_1, undefined4 * param_2, int param_3, int param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
  undefined4 *puVar1;
  
  if (param_4 == 0) {
    *param_2 = 0;
    return param_2 + 2;
  }
  if (param_1 == 0) {
    puVar1 = (undefined4 *)sub_018da480(param_2,param_3,param_4,param_5,param_6,param_7);
    return puVar1;
  }
  *(undefined4 **)(param_1 + 8) = param_2;
  *(int *)(param_1 + 0xc) = param_3;
  param_2[1] = 0xcccccccc;
  *(undefined4 *)((int)param_2 + param_3 + 8) = 0xcccccccc;
  return param_2 + 2;
}

struct C_018da770 { C_018da770* sub_018da770(void); };

// @baa 0x018da770
C_018da770* C_018da770::sub_018da770(void) { return this; }

// @baa 0x018da7b0
int sub_018da7b0(int a0) { return *(int*)a0; }

struct C_018da7c0 { C_018da7c0* sub_018da7c0(void); };

// @baa 0x018da7c0
C_018da7c0* C_018da7c0::sub_018da7c0(void) { return this; }

// @baa 0x018da800
int sub_018da800(int a0) { return *(int*)a0; }

struct C_018da870 { int sub_018da870(void); };

// @baa 0x018da870
int C_018da870::sub_018da870(void) { return *(int*)((char*)this + 0); }

struct C_018da960 {
    void sub_018da960();
};

int sub_018da8a0(void);
// @baa 0x018da960
void C_018da960::sub_018da960(void)
{
    int param_1 = (int)this;

  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    sub_018da8a0();
    return;
  }
  return;
}

struct C_018dacf0 { float sub_018dacf0(void); };

// @baa 0x018dacf0
float C_018dacf0::sub_018dacf0(void) { return *(float*)((char*)this + 8); }

struct C_018dad00 { float sub_018dad00(void); };

// @baa 0x018dad00
float C_018dad00::sub_018dad00(void) { return *(float*)((char*)this + 20); }

struct C_018dad60 { C_018dad60* sub_018dad60(void); };

// @baa 0x018dad60
C_018dad60* C_018dad60::sub_018dad60(void) { return this; }

struct C_018dbc70 {
    bool sub_018dbc70();
};

// @baa 0x018dbc70
bool C_018dbc70::sub_018dbc70(void)
{
    int * param_1 = (int *)this;

  return *param_1 == 0;
}

// @baa 0x018dbdd0
void sub_018dbdd0(void) { sub_018d3de0(); }

// @baa 0x018dbde0
void sub_018dbde0(void) { sub_018d3de0(); }

struct C_018dbdf0 {
    int sub_018dbdf0();
};

// @baa 0x018dbdf0
int C_018dbdf0::sub_018dbdf0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x24) + 0xc;
}

// @baa 0x018dbe00
void sub_018dbe00(void) { sub_018d3de0(); }

struct C_018dbed0 { C_018dbed0* sub_018dbed0(void); };

// @baa 0x018dbed0
C_018dbed0* C_018dbed0::sub_018dbed0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018dbf30 { int sub_018dbf30(void); };

// @baa 0x018dbf30
int C_018dbf30::sub_018dbf30(void) { return *(int*)((char*)this + 0); }

struct C_018dbf40 { int sub_018dbf40(void); };

// @baa 0x018dbf40
int C_018dbf40::sub_018dbf40(void) { return *(int*)((char*)this + 0); }

struct C_018dbf50 { C_018dbf50* sub_018dbf50(void); };

// @baa 0x018dbf50
C_018dbf50* C_018dbf50::sub_018dbf50(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018dbff0 { C_018dbff0* sub_018dbff0(void); };

// @baa 0x018dbff0
C_018dbff0* C_018dbff0::sub_018dbff0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018dc000 {
    int sub_018dc000(int);
};

// @baa 0x018dc000
int C_018dc000::sub_018dc000(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + 8 + param_2 * 8;
}

struct C_018dc010 {
    int sub_018dc010(int);
};

// @baa 0x018dc010
int C_018dc010::sub_018dc010(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + 8 + param_2 * 8;
}

struct C_018dc070 {
    bool sub_018dc070();
};

// @baa 0x018dc070
bool C_018dc070::sub_018dc070(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_018dc080 { void sub_018dc080(void); };

// @baa 0x018dc080
void C_018dc080::sub_018dc080(void) { *(int*)((char*)this + 0) = -2; }

struct C_018dc090 {
    bool sub_018dc090();
};

// @baa 0x018dc090
bool C_018dc090::sub_018dc090(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_018dc100 { void sub_018dc100(void); };

// @baa 0x018dc100
void C_018dc100::sub_018dc100(void) { *(int*)((char*)this + 0) = -2; }

struct C_018dc1d0 {
    bool sub_018dc1d0();
};

// @baa 0x018dc1d0
bool C_018dc1d0::sub_018dc1d0(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -1;
}

struct C_018dc1e0 {
    uint sub_018dc1e0(uint);
};

// @baa 0x018dc1e0
uint C_018dc1e0::sub_018dc1e0(uint param_2)
{
    int param_1 = (int)this;

  return (*(uint *)(param_1 + 4) >> 6 ^ *(uint *)(param_1 + 4)) & param_2;
}

// @baa 0x018dc200
void __stdcall sub_018dc200(int a0) {  }

struct C_018dc250 {
    bool sub_018dc250();
};

// @baa 0x018dc250
bool C_018dc250::sub_018dc250(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -1;
}

struct C_018dc260 { int sub_018dc260(int a0); };

// @baa 0x018dc260
int C_018dc260::sub_018dc260(int a0) { return *(int*)((char*)this + 4); }

struct C_018dc270 { void sub_018dc270(int a0); };

// @baa 0x018dc270
void C_018dc270::sub_018dc270(int a0) { *(int*)((char*)this + 4) = a0; }

// @baa 0x018dc440
void sub_018dc440(void) { sub_018d3de0(); }

struct C_018dc4d0 {
    int sub_018dc4d0();
};

// @baa 0x018dc4d0
int C_018dc4d0::sub_018dc4d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return (param_1[1] + 1) * 0x10 + *(int *)*param_1;
}

struct C_018dc540 {
    int sub_018dc540();
};

// @baa 0x018dc540
int C_018dc540::sub_018dc540(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[1] * 8;
}

void sub_018dc490();
// @baa 0x018dc590
void sub_018dc590(void) { sub_018dc490(); }

extern char g_023f4ed0[];
struct C_018dd910 { void sub_018dd910(void); };

// @baa 0x018dd910
void C_018dd910::sub_018dd910(void) { *(int*)((char*)this + 0) = (int)g_023f4ed0; }

// @baa 0x018dd940
uint sub_018dd940(int param_1, uint param_2)
{
  return param_1 << 8 | param_2;
}

struct C_018dd9f0 { int sub_018dd9f0(void); };

// @baa 0x018dd9f0
int C_018dd9f0::sub_018dd9f0(void) { return *(int*)((char*)this + 16); }

struct C_018dda00 { int sub_018dda00(void); };

// @baa 0x018dda00
int C_018dda00::sub_018dda00(void) { return *(int*)((char*)this + 16); }

struct C_018dda10 {
    uint sub_018dda10();
};

// @baa 0x018dda10
uint C_018dda10::sub_018dda10(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x14) & 1;
}

extern char g_023f4ee0[];
struct C_018dda20 { void sub_018dda20(void); };

// @baa 0x018dda20
void C_018dda20::sub_018dda20(void) { *(int*)((char*)this + 0) = (int)g_023f4ee0; }

// @baa 0x018dda30
int sub_018dda30(void) { return 0; }

struct C_018ddb20 {
    undefined4 * sub_018ddb20(byte);
};

// @baa 0x018ddb20
undefined4 * C_018ddb20::sub_018ddb20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f4ee0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018ddb80 { C_018ddb80* sub_018ddb80(void); };

// @baa 0x018ddb80
C_018ddb80* C_018ddb80::sub_018ddb80(void) { return this; }

// @baa 0x018ddb90
undefined1 sub_018ddb90(void)
{
  return 1;
}

struct C_018ddba0 {
    void sub_018ddba0();
};

// @baa 0x018ddba0
void C_018ddba0::sub_018ddba0(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

struct C_018ddc60 {
    int sub_018ddc60();
};

// @baa 0x018ddc60
int C_018ddc60::sub_018ddc60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c)) + *(int *)(param_1 + 0x28);
}

// @baa 0x018ddc70
void sub_018ddc70(void) { sub_018d3de0(); }

// @baa 0x018ddc90
void sub_018ddc90(void) { sub_018d3de0(); }

struct C_018ddca0 { C_018ddca0* sub_018ddca0(void); };

// @baa 0x018ddca0
C_018ddca0* C_018ddca0::sub_018ddca0(void) { *(int*)((char*)this + 0) = (int)g_023f4ee0; return this; }

extern char g_023f4f04[];
struct C_018ddcb0 { C_018ddcb0* sub_018ddcb0(void); };

// @baa 0x018ddcb0
C_018ddcb0* C_018ddcb0::sub_018ddcb0(void) { *(int*)((char*)this + 0) = (int)g_023f4f04; return this; }

struct C_018ddcd0 {
    int sub_018ddcd0();
};

// @baa 0x018ddcd0
int C_018ddcd0::sub_018ddcd0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x20) + 0xc;
}

// @baa 0x018ddd50
void sub_018ddd50(void) { sub_018d3de0(); }

extern char g_023f4f10[];
struct C_018ddd60 { C_018ddd60* sub_018ddd60(void); };

// @baa 0x018ddd60
C_018ddd60* C_018ddd60::sub_018ddd60(void) { *(int*)((char*)this + 0) = (int)g_023f4f10; return this; }

// @baa 0x018ddff0
undefined4 sub_018ddff0(short param_1)
{
  if ((((param_1 != 9) && (param_1 != 0xd)) && (param_1 != 0x20)) && (param_1 != 0x3000)) {
    return 0;
  }
  return 1;
}

// @baa 0x018de020
bool sub_018de020(short param_1)
{
  return param_1 == 10;
}

struct C_018de170 { C_018de170* sub_018de170(void); };

// @baa 0x018de170
C_018de170* C_018de170::sub_018de170(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018de210 { int sub_018de210(void); };

// @baa 0x018de210
int C_018de210::sub_018de210(void) { return *(int*)((char*)this + 0); }

struct C_018de220 { int sub_018de220(void); };

// @baa 0x018de220
int C_018de220::sub_018de220(void) { return *(int*)((char*)this + 0); }

struct C_018de260 { int sub_018de260(void); };

// @baa 0x018de260
int C_018de260::sub_018de260(void) { return *(int*)((char*)this + 0); }

struct C_018de270 { int sub_018de270(void); };

// @baa 0x018de270
int C_018de270::sub_018de270(void) { return *(int*)((char*)this + 0); }

struct C_018de280 { int sub_018de280(void); };

// @baa 0x018de280
int C_018de280::sub_018de280(void) { return *(int*)((char*)this + 0); }

struct C_018de290 { int sub_018de290(void); };

// @baa 0x018de290
int C_018de290::sub_018de290(void) { return *(int*)((char*)this + 0); }

struct C_018de2d0 { int sub_018de2d0(void); };

// @baa 0x018de2d0
int C_018de2d0::sub_018de2d0(void) { return *(int*)((char*)this + 0); }

struct C_018de310 { int sub_018de310(void); };

// @baa 0x018de310
int C_018de310::sub_018de310(void) { return *(int*)((char*)this + 0); }

struct C_018de320 { int sub_018de320(void); };

// @baa 0x018de320
int C_018de320::sub_018de320(void) { return *(int*)((char*)this + 0); }

struct C_018de330 { C_018de330* sub_018de330(void); };

// @baa 0x018de330
C_018de330* C_018de330::sub_018de330(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018de380 { int sub_018de380(void); };

// @baa 0x018de380
int C_018de380::sub_018de380(void) { return *(int*)((char*)this + 0); }

struct C_018de390 { int sub_018de390(void); };

// @baa 0x018de390
int C_018de390::sub_018de390(void) { return *(int*)((char*)this + 0); }

struct C_018de3a0 { int sub_018de3a0(void); };

// @baa 0x018de3a0
int C_018de3a0::sub_018de3a0(void) { return *(int*)((char*)this + 0); }

struct C_018de3b0 { C_018de3b0* sub_018de3b0(void); };

// @baa 0x018de3b0
C_018de3b0* C_018de3b0::sub_018de3b0(void) { return this; }

struct C_018de430 { int sub_018de430(void); };

// @baa 0x018de430
int C_018de430::sub_018de430(void) { return *(int*)((char*)this + 0); }

struct C_018de440 { int sub_018de440(void); };

// @baa 0x018de440
int C_018de440::sub_018de440(void) { return *(int*)((char*)this + 0); }

struct C_018de470 { void sub_018de470(void); };

// @baa 0x018de470
void C_018de470::sub_018de470(void) { *(int*)((char*)this + 0) = (int)g_023f4f04; }

// @baa 0x018de480
undefined1 sub_018de480(void)
{
  return 1;
}

struct C_018de490 { C_018de490* sub_018de490(void); };

// @baa 0x018de490
C_018de490* C_018de490::sub_018de490(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018de520 { int sub_018de520(void); };

// @baa 0x018de520
int C_018de520::sub_018de520(void) { return *(int*)((char*)this + 0); }

struct C_018de530 { int sub_018de530(void); };

// @baa 0x018de530
int C_018de530::sub_018de530(void) { return *(int*)((char*)this + 0); }

struct C_018de580 { int sub_018de580(void); };

// @baa 0x018de580
int C_018de580::sub_018de580(void) { return *(int*)((char*)this + 0); }

struct C_018de590 { int sub_018de590(void); };

// @baa 0x018de590
int C_018de590::sub_018de590(void) { return *(int*)((char*)this + 0); }

struct C_018de5a0 { C_018de5a0* sub_018de5a0(void); };

// @baa 0x018de5a0
C_018de5a0* C_018de5a0::sub_018de5a0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018de600 { int sub_018de600(void); };

// @baa 0x018de600
int C_018de600::sub_018de600(void) { return *(int*)((char*)this + 0); }

struct C_018de610 { int sub_018de610(void); };

// @baa 0x018de610
int C_018de610::sub_018de610(void) { return *(int*)((char*)this + 0); }

struct C_018de640 { void sub_018de640(void); };

// @baa 0x018de640
void C_018de640::sub_018de640(void) { *(int*)((char*)this + 0) = (int)g_023f4f10; }

// @baa 0x018de650
undefined1 sub_018de650(void)
{
  return 1;
}

struct C_018de670 { int sub_018de670(void); };

// @baa 0x018de670
int C_018de670::sub_018de670(void) { return *(int*)((char*)this + 4); }

struct C_018de680 {
    bool sub_018de680(int);
};

// @baa 0x018de680
bool C_018de680::sub_018de680(int param_2)
{
    int param_1 = (int)this;

  return param_2 == param_1;
}

struct C_018de690 {
    void sub_018de690(int *);
};

// @baa 0x018de690
void C_018de690::sub_018de690(int * param_2)
{
    int * param_1 = (int *)this;

  *param_2 = *param_1;
  param_2[1] = (int)param_1;
  *(int **)(*param_1 + 4) = param_2;
  *param_1 = (int)param_2;
  return;
}

struct C_018de6d0 { C_018de6d0* sub_018de6d0(void); };

// @baa 0x018de6d0
C_018de6d0* C_018de6d0::sub_018de6d0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018de760 { int sub_018de760(void); };

// @baa 0x018de760
int C_018de760::sub_018de760(void) { return *(int*)((char*)this + 0); }

struct C_018de770 { int sub_018de770(void); };

// @baa 0x018de770
int C_018de770::sub_018de770(void) { return *(int*)((char*)this + 0); }

struct C_018de780 { int sub_018de780(void); };

// @baa 0x018de780
int C_018de780::sub_018de780(void) { return *(int*)((char*)this + 0); }

struct C_018de790 { int sub_018de790(void); };

// @baa 0x018de790
int C_018de790::sub_018de790(void) { return *(int*)((char*)this + 0); }

struct C_018de7a0 { int sub_018de7a0(void); };

// @baa 0x018de7a0
int C_018de7a0::sub_018de7a0(void) { return *(int*)((char*)this + 0); }

struct C_018de7b0 { int sub_018de7b0(void); };

// @baa 0x018de7b0
int C_018de7b0::sub_018de7b0(void) { return *(int*)((char*)this + 0); }

struct C_018de7c0 { C_018de7c0* sub_018de7c0(void); };

// @baa 0x018de7c0
C_018de7c0* C_018de7c0::sub_018de7c0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018de860 { int sub_018de860(void); };

// @baa 0x018de860
int C_018de860::sub_018de860(void) { return *(int*)((char*)this + 0); }

struct C_018de870 { int sub_018de870(void); };

// @baa 0x018de870
int C_018de870::sub_018de870(void) { return *(int*)((char*)this + 0); }

struct C_018de880 { int sub_018de880(void); };

// @baa 0x018de880
int C_018de880::sub_018de880(void) { return *(int*)((char*)this + 0); }

struct C_018de890 { int sub_018de890(void); };

// @baa 0x018de890
int C_018de890::sub_018de890(void) { return *(int*)((char*)this + 0); }

struct C_018de8a0 { C_018de8a0* sub_018de8a0(void); };

// @baa 0x018de8a0
C_018de8a0* C_018de8a0::sub_018de8a0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018de900 { C_018de900* sub_018de900(void); };

// @baa 0x018de900
C_018de900* C_018de900::sub_018de900(void) { return this; }

struct C_018de910 { int sub_018de910(void); };

// @baa 0x018de910
int C_018de910::sub_018de910(void) { return *(int*)((char*)this + 0); }

struct C_018de920 { int sub_018de920(void); };

// @baa 0x018de920
int C_018de920::sub_018de920(void) { return *(int*)((char*)this + 0); }

struct C_018de960 { C_018de960* sub_018de960(void); };

// @baa 0x018de960
C_018de960* C_018de960::sub_018de960(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018de980 { int sub_018de980(void); };

// @baa 0x018de980
int C_018de980::sub_018de980(void) { return *(int*)((char*)this + 0); }

struct C_018de990 { C_018de990* sub_018de990(void); };

// @baa 0x018de990
C_018de990* C_018de990::sub_018de990(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018dea20 { int sub_018dea20(void); };

// @baa 0x018dea20
int C_018dea20::sub_018dea20(void) { return *(int*)((char*)this + 0); }

struct C_018dea30 { int sub_018dea30(void); };

// @baa 0x018dea30
int C_018dea30::sub_018dea30(void) { return *(int*)((char*)this + 0); }

struct C_018dea70 { int sub_018dea70(void); };

// @baa 0x018dea70
int C_018dea70::sub_018dea70(void) { return *(int*)((char*)this + 0); }

struct C_018dea80 { int sub_018dea80(void); };

// @baa 0x018dea80
int C_018dea80::sub_018dea80(void) { return *(int*)((char*)this + 0); }

struct C_018deaf0 {
    undefined4 sub_018deaf0();
};

// @baa 0x018deaf0
undefined4 C_018deaf0::sub_018deaf0(void)
{
    int * param_1 = (int *)this;

  if (((int *)*param_1 != (int *)0x0) && (*(int *)*param_1 != 0)) {
    return 0;
  }
  return 1;
}

struct C_018deb10 {
    undefined4 sub_018deb10();
};

// @baa 0x018deb10
undefined4 C_018deb10::sub_018deb10(void)
{
    int * param_1 = (int *)this;

  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    return 0;
  }
  return *(undefined4 *)*param_1;
}

void sub_018f3d30();
// @baa 0x018debf0
void sub_018debf0(void) { sub_018f3d30(); }

// @baa 0x018dec00
undefined1 sub_018dec00(void)
{
  return 0;
}

struct C_018dec50 { void sub_018dec50(int a0); };

// @baa 0x018dec50
void C_018dec50::sub_018dec50(int a0) { *(int*)((char*)this + 4) = a0; }

// @baa 0x018dec60
int sub_018dec60(void) { return 0; }

// @baa 0x018decd0
void __stdcall sub_018decd0(int a0) {  }

int sub_018de110(...);
// @baa 0x018df810
void sub_018df810(undefined4 param_1, undefined4 param_2)
{
  sub_018de110(param_1,param_2,2);
  return;
}

struct C_018dfa70 {
    int sub_018dfa70();
};

// @baa 0x018dfa70
int C_018dfa70::sub_018dfa70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0x10 + param_1[1] * 0xc;
}

struct C_018dfe30 {
    uint sub_018dfe30();
};

// @baa 0x018dfe30
uint C_018dfe30::sub_018dfe30(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18) | 0x100;
}

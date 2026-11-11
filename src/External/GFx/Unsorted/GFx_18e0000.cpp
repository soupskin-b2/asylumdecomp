// GFx_18e0000.cpp (part 1 of 8): 238 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x018e07b0
void __stdcall sub_018e07b0(int a0) {  }

struct C { int sub_018e07c0(void); };

// @baa 0x018e07c0
int C::sub_018e07c0(void) { return *(int*)((char*)this + 0); }

struct C_018e07d0 { int sub_018e07d0(void); };

// @baa 0x018e07d0
int C_018e07d0::sub_018e07d0(void) { return *(int*)((char*)this + 0); }

struct C_018e07e0 { int sub_018e07e0(void); };

// @baa 0x018e07e0
int C_018e07e0::sub_018e07e0(void) { return *(int*)((char*)this + 0); }

struct C_018e07f0 { int sub_018e07f0(void); };

// @baa 0x018e07f0
int C_018e07f0::sub_018e07f0(void) { return *(int*)((char*)this + 0); }

struct C_018e0800 { C_018e0800* sub_018e0800(void); };

// @baa 0x018e0800
C_018e0800* C_018e0800::sub_018e0800(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018e0840 { int sub_018e0840(void); };

// @baa 0x018e0840
int C_018e0840::sub_018e0840(void) { return *(int*)((char*)this + 0); }

struct C_018e0880 { int sub_018e0880(void); };

// @baa 0x018e0880
int C_018e0880::sub_018e0880(void) { return *(int*)((char*)this + 0); }

struct C_018e08a0 {
    undefined4 sub_018e08a0();
};

// @baa 0x018e08a0
undefined4 C_018e08a0::sub_018e08a0(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x24);
}

struct C_018e08b0 { int sub_018e08b0(void); };

// @baa 0x018e08b0
int C_018e08b0::sub_018e08b0(void) { return *(int*)((char*)this + 40); }

struct C_018e08c0 { int sub_018e08c0(void); };

// @baa 0x018e08c0
int C_018e08c0::sub_018e08c0(void) { return *(int*)((char*)this + 44); }

struct C_018e08d0 { int sub_018e08d0(void); };

// @baa 0x018e08d0
int C_018e08d0::sub_018e08d0(void) { return *(int*)((char*)this + 52); }

struct C_018e08e0 {
    undefined4 sub_018e08e0();
};

// @baa 0x018e08e0
undefined4 C_018e08e0::sub_018e08e0(void)
{
    int param_1 = (int)this;

  if ((*(char *)(param_1 + 0x44) == '\0') && (*(int *)(param_1 + 0x20) == 0)) {
    return 0;
  }
  return 1;
}

void sub_018e1730();
// @baa 0x018e17f0
void sub_018e17f0(void) { sub_018e1730(); }

// @baa 0x018e1a20
int __stdcall sub_018e1a20(int a0) { return a0; }

struct C_018e1a50 {
    bool sub_018e1a50();
};

// @baa 0x018e1a50
bool C_018e1a50::sub_018e1a50(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -1;
}

struct C_018e1ac0 {
    bool sub_018e1ac0(int *);
};

// @baa 0x018e1ac0
bool C_018e1ac0::sub_018e1ac0(int * param_2)
{
    int * param_1 = (int *)this;

  return *(int *)(*param_1 + 0x10) == *(int *)(*param_2 + 0x10);
}

void sub_018e1ba0();
// @baa 0x018e1cd0
void sub_018e1cd0(void) { sub_018e1ba0(); }

struct C_018e3160 {
    undefined1 sub_018e3160();
};

int sub_018f4040(void);
// @baa 0x018e3160
undefined1 C_018e3160::sub_018e3160(void)
{
    int param_1 = (int)this;

  undefined1 uVar1;
  
  *(undefined1 *)(param_1 + 0x15) = 0;
  if (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) < 1) {
    sub_018f4040();
  }
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x34));
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return uVar1;
}

extern char g_023f54d0[];
struct C_018e3330 { void sub_018e3330(void); };

// @baa 0x018e3330
void C_018e3330::sub_018e3330(void) { *(int*)((char*)this + 0) = (int)g_023f54d0; }

// @baa 0x018e3340
void __stdcall sub_018e3340(int a0, int a1) {  }

struct C_018e3360 {
    undefined4 * sub_018e3360(byte);
};

int sub_00402660(...);
// @baa 0x018e3360
undefined4 * C_018e3360::sub_018e3360(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f54d0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

void sub_018d3de0();
// @baa 0x018e3380
void sub_018e3380(void) { sub_018d3de0(); }

struct C_018e3390 { C_018e3390* sub_018e3390(void); };

// @baa 0x018e3390
C_018e3390* C_018e3390::sub_018e3390(void) { *(int*)((char*)this + 0) = (int)g_023f54d0; return this; }

struct C_018e33a0 { C_018e33a0* sub_018e33a0(void); };

// @baa 0x018e33a0
C_018e33a0* C_018e33a0::sub_018e33a0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018e33b0 {
    bool sub_018e33b0(int);
};

// @baa 0x018e33b0
bool C_018e33b0::sub_018e33b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 == param_2;
}

struct C_018e3400 { int sub_018e3400(void); };

// @baa 0x018e3400
int C_018e3400::sub_018e3400(void) { return *(int*)((char*)this + 0); }

// @baa 0x018e3450
int sub_018e3450(void) { return 1; }

struct C_018e34c0 {
    int sub_018e34c0();
};

// @baa 0x018e34c0
int C_018e34c0::sub_018e34c0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      return *(int *)(*(int *)(param_1 + 0x18) + 0x14);
    }
    iVar1 = 0;
  }
  return iVar1;
}

struct C_018e34e0 {
    int sub_018e34e0();
};

// @baa 0x018e34e0
int C_018e34e0::sub_018e34e0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      return *(int *)(*(int *)(param_1 + 0x18) + 0x18);
    }
    iVar1 = 0;
  }
  return iVar1;
}

// @baa 0x018e3c40
int sub_018e3c40(char * param_1)
{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = param_1 + 1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  return (int)param_1 - (int)pcVar1;
}

struct C_018e3d90 {
    void sub_018e3d90(uint, char);
};

// @baa 0x018e3d90
void C_018e3d90::sub_018e3d90(uint param_2, char param_3)
{
    uint * param_1 = (uint *)this;

  *param_1 = param_2;
  if (param_3 != '\0') {
    *param_1 = param_2 | 0x80000000;
  }
  return;
}

// @baa 0x018e7a60
int sub_018e7a60(void) { return 0; }

// @baa 0x018e7a70
undefined1 sub_018e7a70(void)
{
  return 0;
}

// @baa 0x018e7a80
undefined1 sub_018e7a80(void)
{
  return 0;
}

// @baa 0x018e7a90
int sub_018e7a90(void) { return 0; }

// @baa 0x018e7aa0
undefined8 sub_018e7aa0(void)
{
  return 0;
}

// @baa 0x018e7ab0
int sub_018e7ab0(void) { return 0; }

// @baa 0x018e7ac0
undefined8 sub_018e7ac0(void)
{
  return 0;
}

// @baa 0x018e7ad0
int sub_018e7ad0(void) { return 4097; }

// @baa 0x018e7b00
int __stdcall sub_018e7b00(int a0) { return 0; }

// @baa 0x018e7b10
int sub_018e7b10(void) { return 0; }

// @baa 0x018e7b20
undefined1 sub_018e7b20(void)
{
  return 0;
}

// @baa 0x018e7b70
undefined1 sub_018e7b70(void)
{
  return 0;
}

// @baa 0x018e7b80
undefined1 sub_018e7b80(void)
{
  return 0;
}

struct C_018e7ec0 { int sub_018e7ec0(void); };

// @baa 0x018e7ec0
int C_018e7ec0::sub_018e7ec0(void) { return *(int*)((char*)this + 0); }

struct C_018e7ed0 { int sub_018e7ed0(void); };

// @baa 0x018e7ed0
int C_018e7ed0::sub_018e7ed0(void) { return *(int*)((char*)this + 0); }

struct C_018e81e0 {
    bool sub_018e81e0(int);
};

// @baa 0x018e81e0
bool C_018e81e0::sub_018e81e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 != param_2;
}

extern char g_023f5794[];
struct C_018e81f0 { void sub_018e81f0(void); };

// @baa 0x018e81f0
void C_018e81f0::sub_018e81f0(void) { *(int*)((char*)this + 0) = (int)g_023f5794; }

// @baa 0x018e8200
void __stdcall sub_018e8200(int a0, int a1) {  }

struct C_018e8210 {
    undefined4 * sub_018e8210(byte);
};

// @baa 0x018e8210
undefined4 * C_018e8210::sub_018e8210(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f5794));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x018e8260
void sub_018e8260(void) {  }

struct C_018e8270 {
    uint sub_018e8270();
};

// @baa 0x018e8270
uint C_018e8270::sub_018e8270(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x1c) >> 5 & 1;
}

struct C_018e8280 { int sub_018e8280(void); };

// @baa 0x018e8280
int C_018e8280::sub_018e8280(void) { return *(int*)((char*)this + 20); }

extern char g_023f57a0[];
struct C_018e8290 { void sub_018e8290(void); };

// @baa 0x018e8290
void C_018e8290::sub_018e8290(void) { *(int*)((char*)this + 0) = (int)g_023f57a0; }

struct C_018e82a0 {
    undefined4 * sub_018e82a0(byte);
};

// @baa 0x018e82a0
undefined4 * C_018e82a0::sub_018e82a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f57a0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018e82c0 {
    uint sub_018e82c0();
};

// @baa 0x018e82c0
uint C_018e82c0::sub_018e82c0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 1 & 1;
}

struct C_018e82d0 {
    uint sub_018e82d0();
};

// @baa 0x018e82d0
uint C_018e82d0::sub_018e82d0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 1;
}

struct C_018e82e0 { void sub_018e82e0(int a0); };

// @baa 0x018e82e0
void C_018e82e0::sub_018e82e0(int a0) { *(int*)((char*)this + 0) = a0; }

struct C_018e82f0 { void sub_018e82f0(int a0); };

// @baa 0x018e82f0
void C_018e82f0::sub_018e82f0(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_018e8300 {
    bool sub_018e8300();
};

// @baa 0x018e8300
bool C_018e8300::sub_018e8300(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x28) == 0;
}

struct C_018e8330 { char* sub_018e8330(void); };

// @baa 0x018e8330
char* C_018e8330::sub_018e8330(void) { return (char*)this + 4; }

struct C_018e8340 {
    void sub_018e8340(char);
};

// @baa 0x018e8340
void C_018e8340::sub_018e8340(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | 0x10;
    return;
  }
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 0xef;
  return;
}

struct C_018e8360 {
    byte sub_018e8360();
};

// @baa 0x018e8360
byte C_018e8360::sub_018e8360(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x2c) >> 4 & 1;
}

struct C_018e8370 {
    void sub_018e8370(char);
};

// @baa 0x018e8370
void C_018e8370::sub_018e8370(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | 8;
    return;
  }
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 0xf7;
  return;
}

struct C_018e8390 {
    void sub_018e8390(undefined1);
};

// @baa 0x018e8390
void C_018e8390::sub_018e8390(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x2d) = param_2;
  return;
}

struct C_018e83d0 {
    void sub_018e83d0();
};

// @baa 0x018e83d0
void C_018e83d0::sub_018e83d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  return;
}

struct C_018e8400 {
    byte sub_018e8400();
};

// @baa 0x018e8400
byte C_018e8400::sub_018e8400(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 7) & 1;
}

struct C_018e8410 {
    uint sub_018e8410();
};

// @baa 0x018e8410
uint C_018e8410::sub_018e8410(void)
{
    int param_1 = (int)this;

  return (*(byte *)(param_1 + 7) & 4 | 2) >> 1;
}

struct C_018e8420 {
    byte sub_018e8420();
};

// @baa 0x018e8420
byte C_018e8420::sub_018e8420(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 7) >> 5 & 1;
}

struct C_018e8430 {
    byte sub_018e8430();
};

// @baa 0x018e8430
byte C_018e8430::sub_018e8430(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 7) >> 6 & 1;
}

struct C_018e84a0 {
    void sub_018e84a0(undefined1);
};

// @baa 0x018e84a0
void C_018e84a0::sub_018e84a0(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 6) = param_2;
  return;
}

struct C_018e84b0 {
    void sub_018e84b0(char);
};

// @baa 0x018e84b0
void C_018e84b0::sub_018e84b0(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 4;
    return;
  }
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfb;
  return;
}

struct C_018e84d0 {
    void sub_018e84d0(char);
};

// @baa 0x018e84d0
void C_018e84d0::sub_018e84d0(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 8;
    return;
  }
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xf7;
  return;
}

struct C_018e84f0 {
    void sub_018e84f0(char);
};

// @baa 0x018e84f0
void C_018e84f0::sub_018e84f0(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 0x10;
    return;
  }
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xef;
  return;
}

struct C_018e8510 {
    undefined4 sub_018e8510(int *);
};

// @baa 0x018e8510
undefined4 C_018e8510::sub_018e8510(int * param_2)
{
    int * param_1 = (int *)this;

  if (((((*param_1 == *param_2) && ((short)param_1[1] == (short)param_2[1])) &&
       (*(char *)((int)param_1 + 6) == *(char *)((int)param_2 + 6))) &&
      ((*(char *)((int)param_1 + 7) == *(char *)((int)param_2 + 7) &&
       ((char)param_1[2] == (char)param_2[2])))) &&
     ((*(char *)((int)param_1 + 9) == *(char *)((int)param_2 + 9) &&
      ((*(char *)((int)param_1 + 10) == *(char *)((int)param_2 + 10) &&
       (*(char *)((int)param_1 + 0xb) == *(char *)((int)param_2 + 0xb))))))) {
    return 1;
  }
  return 0;
}

struct C_018e8570 {
    void sub_018e8570();
};

// @baa 0x018e8570
void C_018e8570::sub_018e8570(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}

struct C_018e8580 {
    void sub_018e8580();
};

// @baa 0x018e8580
void C_018e8580::sub_018e8580(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 0x10;
  return;
}

struct C_018e8590 {
    byte sub_018e8590();
};

// @baa 0x018e8590
byte C_018e8590::sub_018e8590(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x60) >> 5 & 1;
}

struct C_018e85a0 {
    byte sub_018e85a0();
};

// @baa 0x018e85a0
byte C_018e85a0::sub_018e85a0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 6) >> 6 & 1;
}

struct C_018e85d0 {
    ushort sub_018e85d0();
};

// @baa 0x018e85d0
ushort C_018e85d0::sub_018e85d0(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 4) >> 0xc;
}

struct C_018e8630 {
    ushort sub_018e8630();
};

// @baa 0x018e8630
ushort C_018e8630::sub_018e8630(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 6) >> 0xf;
}

struct C_018e8640 {
    void sub_018e8640();
};

// @baa 0x018e8640
void C_018e8640::sub_018e8640(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) | 0x20;
  return;
}

struct C_018e8650 {
    void sub_018e8650();
};

// @baa 0x018e8650
void C_018e8650::sub_018e8650(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xffdf;
  return;
}

struct C_018e8660 {
    byte sub_018e8660();
};

// @baa 0x018e8660
byte C_018e8660::sub_018e8660(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 6) >> 5 & 1;
}

struct C_018e8670 {
    ushort sub_018e8670();
};

// @baa 0x018e8670
ushort C_018e8670::sub_018e8670(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 6) >> 9 & 1;
}

struct C_018e86a0 {
    undefined4 sub_018e86a0();
};

// @baa 0x018e86a0
undefined4 C_018e86a0::sub_018e86a0(void)
{
    uint * param_1 = (uint *)this;

  if ((*param_1 != 0) && (*param_1 < param_1[1])) {
    return 0;
  }
  return 1;
}

struct C_018e8720 { int sub_018e8720(void); };

// @baa 0x018e8720
int C_018e8720::sub_018e8720(void) { return *(int*)((char*)this + 0); }

// @baa 0x018e8730
int sub_018e8730(void) { return 38; }

struct C_018e8740 { int sub_018e8740(void); };

// @baa 0x018e8740
int C_018e8740::sub_018e8740(void) { return *(int*)((char*)this + 4); }

struct C_018e8750 { int sub_018e8750(void); };

// @baa 0x018e8750
int C_018e8750::sub_018e8750(void) { return *(int*)((char*)this + 0); }

struct C_018e8760 { char* sub_018e8760(void); };

// @baa 0x018e8760
char* C_018e8760::sub_018e8760(void) { return (char*)this + 38; }

struct C_018e8770 {
    float10 sub_018e8770();
};

// @baa 0x018e8770
float10 C_018e8770::sub_018e8770(void)
{
    int param_1 = (int)this;

  return (float10)*(ushort *)(param_1 + 0x22);
}

// @baa 0x018e8780
int sub_018e8780(void) { return 26; }

struct C_018e8790 {
    uint sub_018e8790();
};

// @baa 0x018e8790
uint C_018e8790::sub_018e8790(void)
{
    int param_1 = (int)this;

  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4) & 0xffffff;
  if (uVar1 == 0xffffff) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

struct C_018e87c0 { char* sub_018e87c0(void); };

// @baa 0x018e87c0
char* C_018e87c0::sub_018e87c0(void) { return (char*)this + 26; }

struct C_018e87d0 {
    float10 sub_018e87d0();
};

// @baa 0x018e87d0
float10 C_018e87d0::sub_018e87d0(void)
{
    int param_1 = (int)this;

  return (float10)*(ushort *)(param_1 + 0x16);
}

struct C_018e87e0 {
    uint sub_018e87e0();
};

// @baa 0x018e87e0
uint C_018e87e0::sub_018e87e0(void)
{
    uint * param_1 = (uint *)this;

  return *param_1 >> 0x1f;
}

struct C_018e8890 { int sub_018e8890(void); };

// @baa 0x018e8890
int C_018e8890::sub_018e8890(void) { return *(int*)((char*)this + 4); }

struct C_018e88c0 { int sub_018e88c0(void); };

// @baa 0x018e88c0
int C_018e88c0::sub_018e88c0(void) { return *(int*)((char*)this + 4); }

struct C_018e8900 { void sub_018e8900(int a0); };

// @baa 0x018e8900
void C_018e8900::sub_018e8900(int a0) { *(int*)((char*)this + 8) = a0; }

// @baa 0x018e8930
void sub_018e8930(int param_1)
{
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 0x8000;
  return;
}

// @baa 0x018e8940
void sub_018e8940(int param_1)
{
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0x7fff;
  return;
}

struct C_018e8970 { float sub_018e8970(void); };

// @baa 0x018e8970
float C_018e8970::sub_018e8970(void) { return *(float*)((char*)this + 20); }

struct C_018e8980 { float sub_018e8980(void); };

// @baa 0x018e8980
float C_018e8980::sub_018e8980(void) { return *(float*)((char*)this + 24); }

struct C_018e8990 {
    int sub_018e8990();
};

// @baa 0x018e8990
int C_018e8990::sub_018e8990(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * -2;
}

struct C_018e89a0 { int sub_018e89a0(void); };

// @baa 0x018e89a0
int C_018e89a0::sub_018e89a0(void) { return *(int*)((char*)this + 8); }

struct C_018e89b0 {
    undefined4 sub_018e89b0(int);
};

// @baa 0x018e89b0
undefined4 C_018e89b0::sub_018e89b0(int param_2)
{
    int param_1 = (int)this;

  return *(undefined4 *)
          (param_1 + ((*(ushort *)(*(int *)(param_2 + 0xc) + 0x20) & 0xffff3fff) + 3) * 0x14);
}

struct C_018e8a00 {
    void sub_018e8a00();
};

// @baa 0x018e8a00
void C_018e8a00::sub_018e8a00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

struct C_018e8a10 { C_018e8a10* sub_018e8a10(void); };

// @baa 0x018e8a10
C_018e8a10* C_018e8a10::sub_018e8a10(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018e8a60 {
    undefined4 sub_018e8a60(int *);
};

// @baa 0x018e8a60
undefined4 C_018e8a60::sub_018e8a60(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_018e8a90 { void sub_018e8a90(int a0); };

// @baa 0x018e8a90
void C_018e8a90::sub_018e8a90(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_018e8aa0 { void sub_018e8aa0(int a0); };

// @baa 0x018e8aa0
void C_018e8aa0::sub_018e8aa0(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_018e8ab0 { C_018e8ab0* sub_018e8ab0(void); };

// @baa 0x018e8ab0
C_018e8ab0* C_018e8ab0::sub_018e8ab0(void) { return this; }

struct C_018e8b20 {
    undefined4 sub_018e8b20(int *);
};

// @baa 0x018e8b20
undefined4 C_018e8b20::sub_018e8b20(int * param_2)
{
    int * param_1 = (int *)this;

  if ((((*param_1 == *param_2) && ((short)param_1[1] == (short)param_2[1])) &&
      (*(char *)((int)param_1 + 6) == *(char *)((int)param_2 + 6))) &&
     (*(char *)((int)param_1 + 7) == *(char *)((int)param_2 + 7))) {
    return 1;
  }
  return 0;
}

struct C_018e8b60 { void sub_018e8b60(int a0); };

// @baa 0x018e8b60
void C_018e8b60::sub_018e8b60(int a0) { *(int*)((char*)this + 2520) = a0; }

struct C_018e8b80 {
    void sub_018e8b80(undefined4);
};

// @baa 0x018e8b80
void C_018e8b80::sub_018e8b80(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}

struct C_018e8b90 {
    int sub_018e8b90();
};

// @baa 0x018e8b90
int C_018e8b90::sub_018e8b90(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x48) * -2;
}

struct C_018e8ba0 { C_018e8ba0* sub_018e8ba0(void); };

// @baa 0x018e8ba0
C_018e8ba0* C_018e8ba0::sub_018e8ba0(void) { *(int*)((char*)this + 0) = (int)g_023f5794; return this; }

struct C_018e8bb0 { void sub_018e8bb0(void); };

// @baa 0x018e8bb0
void C_018e8bb0::sub_018e8bb0(void) { *(int*)((char*)this + 0) = (int)g_023f5794; }

struct C_018e8bc0 {
    void sub_018e8bc0(undefined4);
};

// @baa 0x018e8bc0
void C_018e8bc0::sub_018e8bc0(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x3c) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x9d8) = param_2;
  return;
}

struct C_018e8c30 { C_018e8c30* sub_018e8c30(void); };

// @baa 0x018e8c30
C_018e8c30* C_018e8c30::sub_018e8c30(void) { *(int*)((char*)this + 0) = (int)g_023f57a0; return this; }

struct C_018e8eb0 { int sub_018e8eb0(void); };

// @baa 0x018e8eb0
int C_018e8eb0::sub_018e8eb0(void) { return *(int*)((char*)this + 0); }

struct C_018e8ed0 { int sub_018e8ed0(void); };

// @baa 0x018e8ed0
int C_018e8ed0::sub_018e8ed0(void) { return *(int*)((char*)this + 0); }

struct C_018e8ee0 { C_018e8ee0* sub_018e8ee0(void); };

// @baa 0x018e8ee0
C_018e8ee0* C_018e8ee0::sub_018e8ee0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018e8ef0 { int sub_018e8ef0(void); };

// @baa 0x018e8ef0
int C_018e8ef0::sub_018e8ef0(void) { return *(int*)((char*)this + 0); }

struct C_018e8f00 { int sub_018e8f00(void); };

// @baa 0x018e8f00
int C_018e8f00::sub_018e8f00(void) { return *(int*)((char*)this + 0); }

struct C_018e8f10 { C_018e8f10* sub_018e8f10(void); };

// @baa 0x018e8f10
C_018e8f10* C_018e8f10::sub_018e8f10(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018e8f40 {
    int sub_018e8f40(int);
};

// @baa 0x018e8f40
int C_018e8f40::sub_018e8f40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_018e8f50 { int sub_018e8f50(void); };

// @baa 0x018e8f50
int C_018e8f50::sub_018e8f50(void) { return *(int*)((char*)this + 4); }

struct C_018e8fc0 { int sub_018e8fc0(void); };

// @baa 0x018e8fc0
int C_018e8fc0::sub_018e8fc0(void) { return *(int*)((char*)this + 0); }

struct C_018e8fd0 {
    int sub_018e8fd0(uint);
};

// @baa 0x018e8fd0
int C_018e8fd0::sub_018e8fd0(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0x18;
}

struct C_018e8ff0 {
    int sub_018e8ff0(uint);
};

// @baa 0x018e8ff0
int C_018e8ff0::sub_018e8ff0(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0x18;
}

struct C_018e9030 {
    int sub_018e9030(int);
};

// @baa 0x018e9030
int C_018e9030::sub_018e9030(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_018e9040 { int sub_018e9040(void); };

// @baa 0x018e9040
int C_018e9040::sub_018e9040(void) { return *(int*)((char*)this + 4); }

struct C_018e9050 {
    int sub_018e9050(int);
};

// @baa 0x018e9050
int C_018e9050::sub_018e9050(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_018e9070 {
    int sub_018e9070(int);
};

// @baa 0x018e9070
int C_018e9070::sub_018e9070(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_018e9090 { int sub_018e9090(void); };

// @baa 0x018e9090
int C_018e9090::sub_018e9090(void) { return *(int*)((char*)this + 4); }

struct C_018e90e0 {
    void sub_018e90e0();
};

// @baa 0x018e90e0
void C_018e90e0::sub_018e90e0(void)
{
    int param_1 = (int)this;

  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  return;
}

struct C_018e90f0 { int sub_018e90f0(void); };

// @baa 0x018e90f0
int C_018e90f0::sub_018e90f0(void) { return *(int*)((char*)this + 4); }

struct C_018e9100 {
    bool sub_018e9100(int);
};

// @baa 0x018e9100
bool C_018e9100::sub_018e9100(int param_2)
{
    int param_1 = (int)this;

  return param_2 == param_1;
}

struct C_018e9110 {
    void sub_018e9110(int *);
};

// @baa 0x018e9110
void C_018e9110::sub_018e9110(int * param_2)
{
    int * param_1 = (int *)this;

  *param_2 = *param_1;
  param_2[1] = (int)param_1;
  *(int **)(*param_1 + 4) = param_2;
  *param_1 = (int)param_2;
  return;
}

struct C_018e9150 { C_018e9150* sub_018e9150(void); };

// @baa 0x018e9150
C_018e9150* C_018e9150::sub_018e9150(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018e91a0 { int sub_018e91a0(void); };

// @baa 0x018e91a0
int C_018e91a0::sub_018e91a0(void) { return *(int*)((char*)this + 4); }

struct C_018e91b0 {
    bool sub_018e91b0(int);
};

// @baa 0x018e91b0
bool C_018e91b0::sub_018e91b0(int param_2)
{
    int param_1 = (int)this;

  return param_2 == param_1;
}

// @baa 0x018e91c0
undefined4 sub_018e91c0(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

struct C_018e91d0 {
    void sub_018e91d0(int *);
};

// @baa 0x018e91d0
void C_018e91d0::sub_018e91d0(int * param_2)
{
    int * param_1 = (int *)this;

  *param_2 = *param_1;
  param_2[1] = (int)param_1;
  *(int **)(*param_1 + 4) = param_2;
  *param_1 = (int)param_2;
  return;
}

struct C_018e9210 {
    void sub_018e9210(int *);
};

// @baa 0x018e9210
void C_018e9210::sub_018e9210(int * param_2)
{
    int * param_1 = (int *)this;

  *(int *)(*param_2 + 4) = param_2[1];
  *(int *)param_2[1] = *param_2;
  *param_2 = *param_1;
  param_2[1] = (int)param_1;
  *(int **)(*param_1 + 4) = param_2;
  *param_1 = (int)param_2;
  return;
}

struct C_018e9240 { C_018e9240* sub_018e9240(void); };

// @baa 0x018e9240
C_018e9240* C_018e9240::sub_018e9240(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018e92a0 { int sub_018e92a0(void); };

// @baa 0x018e92a0
int C_018e92a0::sub_018e92a0(void) { return *(int*)((char*)this + 0); }

struct C_018e92b0 { int sub_018e92b0(void); };

// @baa 0x018e92b0
int C_018e92b0::sub_018e92b0(void) { return *(int*)((char*)this + 0); }

struct C_018e92c0 { int sub_018e92c0(void); };

// @baa 0x018e92c0
int C_018e92c0::sub_018e92c0(void) { return *(int*)((char*)this + 0); }

struct C_018e92d0 { C_018e92d0* sub_018e92d0(void); };

// @baa 0x018e92d0
C_018e92d0* C_018e92d0::sub_018e92d0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018e9320 { int sub_018e9320(void); };

// @baa 0x018e9320
int C_018e9320::sub_018e9320(void) { return *(int*)((char*)this + 0); }

struct C_018e9330 { int sub_018e9330(void); };

// @baa 0x018e9330
int C_018e9330::sub_018e9330(void) { return *(int*)((char*)this + 0); }

struct C_018e9370 { int sub_018e9370(void); };

// @baa 0x018e9370
int C_018e9370::sub_018e9370(void) { return *(int*)((char*)this + 0); }

struct C_018e93e0 {
    void sub_018e93e0(int *);
};

// @baa 0x018e93e0
void C_018e93e0::sub_018e93e0(int * param_2)
{
    int * param_1 = (int *)this;

  *param_2 = *param_1;
  param_2[1] = (int)param_1;
  *(int **)(*param_1 + 4) = param_2;
  *param_1 = (int)param_2;
  return;
}

struct C_018e9420 { C_018e9420* sub_018e9420(void); };

// @baa 0x018e9420
C_018e9420* C_018e9420::sub_018e9420(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018e9430 {
    int sub_018e9430(int);
};

// @baa 0x018e9430
int C_018e9430::sub_018e9430(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + 8 + param_2 * 0x1c;
}

struct C_018e9470 { unsigned sub_018e9470(void); };

// @baa 0x018e9470
unsigned C_018e9470::sub_018e9470(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_018e9480 { unsigned sub_018e9480(void); };

// @baa 0x018e9480
unsigned C_018e9480::sub_018e9480(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_018e9490 {
    uint sub_018e9490();
};

// @baa 0x018e9490
uint C_018e9490::sub_018e9490(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_018e94a0 {
    uint sub_018e94a0();
};

// @baa 0x018e94a0
uint C_018e94a0::sub_018e94a0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_018e94b0 {
    void sub_018e94b0(uint);
};

// @baa 0x018e94b0
void C_018e94b0::sub_018e94b0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_018e9500 {
    undefined4 sub_018e9500();
};

// @baa 0x018e9500
undefined4 C_018e9500::sub_018e9500(void)
{
    int * param_1 = (int *)this;

  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    return 0;
  }
  return *(undefined4 *)*param_1;
}

struct C_018e9590 {
    bool sub_018e9590();
};

// @baa 0x018e9590
bool C_018e9590::sub_018e9590(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_018e95d0 {
    bool sub_018e95d0();
};

// @baa 0x018e95d0
bool C_018e95d0::sub_018e95d0(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_018e95e0 { void sub_018e95e0(void); };

// @baa 0x018e95e0
void C_018e95e0::sub_018e95e0(void) { *(int*)((char*)this + 0) = -2; }

struct C_018e9690 {
    int sub_018e9690(int);
};

// @baa 0x018e9690
int C_018e9690::sub_018e9690(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + 8 + param_2 * 0x1c;
}

struct C_018e96d0 {
    uint sub_018e96d0();
};

// @baa 0x018e96d0
uint C_018e96d0::sub_018e96d0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_018e9730 { void sub_018e9730(void); };

// @baa 0x018e9730
void C_018e9730::sub_018e9730(void) { *(int*)((char*)this + 0) = -2; }

struct C_018e9740 {
    bool sub_018e9740();
};

// @baa 0x018e9740
bool C_018e9740::sub_018e9740(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_018e9750 { void sub_018e9750(void); };

// @baa 0x018e9750
void C_018e9750::sub_018e9750(void) { *(int*)((char*)this + 0) = -2; }

struct C_018e9780 { unsigned sub_018e9780(void); };

// @baa 0x018e9780
unsigned C_018e9780::sub_018e9780(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_018e9790 { unsigned sub_018e9790(void); };

// @baa 0x018e9790
unsigned C_018e9790::sub_018e9790(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_018e97a0 {
    uint sub_018e97a0();
};

// @baa 0x018e97a0
uint C_018e97a0::sub_018e97a0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_018e97b0 {
    void sub_018e97b0(uint);
};

// @baa 0x018e97b0
void C_018e97b0::sub_018e97b0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_018e97d0 {
    uint sub_018e97d0();
};

// @baa 0x018e97d0
uint C_018e97d0::sub_018e97d0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_018e97e0 { unsigned sub_018e97e0(void); };

// @baa 0x018e97e0
unsigned C_018e97e0::sub_018e97e0(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_018e97f0 { unsigned sub_018e97f0(void); };

// @baa 0x018e97f0
unsigned C_018e97f0::sub_018e97f0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_018e9800 {
    uint sub_018e9800();
};

// @baa 0x018e9800
uint C_018e9800::sub_018e9800(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_018e9810 {
    void sub_018e9810(uint);
};

// @baa 0x018e9810
void C_018e9810::sub_018e9810(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

// @baa 0x018e9890
int sub_018e9890(int a0) { return a0; }

// @baa 0x018e98a0
undefined4 * sub_018e98a0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 4) = 1;
    return param_1;
  }
  return (undefined4 *)0x0;
}

struct C_018e98c0 { C_018e98c0* sub_018e98c0(void); };

// @baa 0x018e98c0
C_018e98c0* C_018e98c0::sub_018e98c0(void) { return this; }

struct C_018e98d0 {
    bool sub_018e98d0();
};

// @baa 0x018e98d0
bool C_018e98d0::sub_018e98d0(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -1;
}

struct C_018e99a0 {
    undefined4 sub_018e99a0(int *);
};

// @baa 0x018e99a0
undefined4 C_018e99a0::sub_018e99a0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((((*param_1 == *param_2) && ((short)param_1[1] == (short)param_2[1])) &&
      (*(char *)((int)param_1 + 6) == *(char *)((int)param_2 + 6))) &&
     (*(char *)((int)param_1 + 7) == *(char *)((int)param_2 + 7))) {
    return 1;
  }
  return 0;
}

struct C_018e9ac0 {
    void sub_018e9ac0(int *);
};

// @baa 0x018e9ac0
void C_018e9ac0::sub_018e9ac0(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_2;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = *(undefined4 *)param_2[1];
  return;
}

struct C_018e9ae0 {
    uint sub_018e9ae0();
};

// @baa 0x018e9ae0
uint C_018e9ae0::sub_018e9ae0(void)
{
    uint * param_1 = (uint *)this;

  return (uint)(*(byte *)((int)param_1 + 7) ^ *(byte *)((int)param_1 + 6)) ^
         (uint)(ushort)param_1[1] ^ *param_1 >> 6 ^ *param_1;
}

struct C_018e9b00 {
    uint sub_018e9b00();
};

// @baa 0x018e9b00
uint C_018e9b00::sub_018e9b00(void)
{
    int * param_1 = (int *)this;

  uint uVar1;
  
  uVar1 = *(uint *)*param_1;
  return uVar1 >> 6 ^ ((uint *)*param_1)[1] ^ uVar1;
}

// @baa 0x018e9b10
void __stdcall sub_018e9b10(int a0) {  }

struct C_018e9b60 {
    bool sub_018e9b60();
};

// @baa 0x018e9b60
bool C_018e9b60::sub_018e9b60(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -1;
}

struct C_018e9b70 { int sub_018e9b70(int a0); };

// @baa 0x018e9b70
int C_018e9b70::sub_018e9b70(int a0) { return *(int*)((char*)this + 4); }

struct C_018e9b80 { void sub_018e9b80(int a0); };

// @baa 0x018e9b80
void C_018e9b80::sub_018e9b80(int a0) { *(int*)((char*)this + 4) = a0; }

// @baa 0x018e9c60
uint sub_018e9c60(uint * param_1)
{
  return (uint)(*(byte *)((int)param_1 + 7) ^ *(byte *)((int)param_1 + 6)) ^
         (uint)(ushort)param_1[1] ^ *param_1 >> 6 ^ *param_1;
}

struct C_018e9c90 {
    uint sub_018e9c90();
};

// @baa 0x018e9c90
uint C_018e9c90::sub_018e9c90(void)
{
    uint * param_1 = (uint *)this;

  return *param_1 >> 6 ^ param_1[1] ^ *param_1;
}

struct C_018e9cd0 {
    undefined4 sub_018e9cd0(int *);
};

// @baa 0x018e9cd0
undefined4 C_018e9cd0::sub_018e9cd0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_018e9d40 { int sub_018e9d40(void); };

// @baa 0x018e9d40
int C_018e9d40::sub_018e9d40(void) { return *(int*)((char*)this + 16); }

struct C_018e9d90 {
    uint sub_018e9d90();
};

// @baa 0x018e9d90
uint C_018e9d90::sub_018e9d90(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xc) + 0x1c) >> 5 & 1;
}

struct C_018e9da0 {
    undefined4 sub_018e9da0();
};

// @baa 0x018e9da0
undefined4 C_018e9da0::sub_018e9da0(void)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + 0x14);
}

struct C_018e9db0 { int sub_018e9db0(void); };

// @baa 0x018e9db0
int C_018e9db0::sub_018e9db0(void) { return *(int*)((char*)this + 20); }

struct C_018e9e80 {
    undefined4 sub_018e9e80();
};

// @baa 0x018e9e80
undefined4 C_018e9e80::sub_018e9e80(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x4c) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x14);
  }
  return 0;
}

struct C_018e9ed0 {
    undefined4 sub_018e9ed0(int);
};

// @baa 0x018e9ed0
undefined4 C_018e9ed0::sub_018e9ed0(int param_2)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + param_2 * 4);
}

struct C_018e9f50 {
    undefined4 sub_018e9f50();
};

// @baa 0x018e9f50
undefined4 C_018e9f50::sub_018e9f50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(undefined4 *)(*(int *)*param_1 + param_1[2] * 4);
}

struct C_018e9fb0 { int sub_018e9fb0(void); };

// @baa 0x018e9fb0
int C_018e9fb0::sub_018e9fb0(void) { return *(int*)((char*)this + 28); }

struct C_018e9fc0 {
    int sub_018e9fc0(uint);
};

// @baa 0x018e9fc0
int C_018e9fc0::sub_018e9fc0(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0x28) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0x18;
}

struct C_018e9fe0 {
    int sub_018e9fe0(uint);
};

// @baa 0x018e9fe0
int C_018e9fe0::sub_018e9fe0(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0x28) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 0x18;
}

extern char g_023f57b4[];
struct C_018ea020 { C_018ea020* sub_018ea020(void); };

// @baa 0x018ea020
C_018ea020* C_018ea020::sub_018ea020(void) { *(int*)((char*)this + 0) = (int)g_023f57b4; return this; }

struct C_018ea030 {
    undefined4 * sub_018ea030(byte);
};

// @baa 0x018ea030
undefined4 * C_018ea030::sub_018ea030(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f5794));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023f57c0[];
struct C_018ea050 { C_018ea050* sub_018ea050(void); };

// @baa 0x018ea050
C_018ea050* C_018ea050::sub_018ea050(void) { *(int*)((char*)this + 0) = (int)g_023f57c0; return this; }

struct C_018ea060 {
    undefined4 * sub_018ea060(byte);
};

// @baa 0x018ea060
undefined4 * C_018ea060::sub_018ea060(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f57a0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018ea480 {
    void sub_018ea480(int *);
};

// @baa 0x018ea480
void C_018ea480::sub_018ea480(int * param_2)
{
    int * param_1 = (int *)this;

  *(int *)(*param_2 + 4) = param_2[1];
  *(int *)param_2[1] = *param_2;
  *param_2 = *param_1;
  param_2[1] = (int)param_1;
  *(int **)(*param_1 + 4) = param_2;
  *param_1 = (int)param_2;
  return;
}

struct C_018ea740 {
    undefined4 sub_018ea740();
};

// @baa 0x018ea740
undefined4 C_018ea740::sub_018ea740(void)
{
    int * param_1 = (int *)this;

  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    return 0;
  }
  return *(undefined4 *)*param_1;
}

struct C_018ea750 {
    int sub_018ea750();
};

// @baa 0x018ea750
int C_018ea750::sub_018ea750(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0x10 + param_1[1] * 0xc;
}

struct C_018ea870 {
    int sub_018ea870();
};

// @baa 0x018ea870
int C_018ea870::sub_018ea870(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[1] * 0x1c;
}

void sub_018ea440();
// @baa 0x018eb260
void sub_018eb260(void) { sub_018ea440(); }

struct C_018eb270 {
    void sub_018eb270(int);
};

// @baa 0x018eb270
void C_018eb270::sub_018eb270(int param_2)
{
    int param_1 = (int)this;

  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 0xc);
  *(int *)(*piVar1 + 4) = piVar1[1];
  *(int *)piVar1[1] = *piVar1;
  piVar2 = (int *)(param_1 + 0x2c);
  *piVar1 = *(int *)(param_1 + 0x2c);
  piVar1[1] = (int)piVar2;
  *(int **)(*piVar2 + 4) = piVar1;
  *piVar2 = (int)piVar1;
  return;
}

void sub_018ea830();
// @baa 0x018eba50
void sub_018eba50(void) { sub_018ea830(); }

struct C_018eba60 {
    int sub_018eba60();
};

// @baa 0x018eba60
int C_018eba60::sub_018eba60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[1] * 0x1c;
}

void sub_018ea8f0();
// @baa 0x018ebaa0
void sub_018ebaa0(void) { sub_018ea8f0(); }

void sub_018ea5a0();
// @baa 0x018ebab0
void sub_018ebab0(void) { sub_018ea5a0(); }

void sub_018ea650();
// @baa 0x018ebac0
void sub_018ebac0(void) { sub_018ea650(); }

void sub_018ea690();
// @baa 0x018ebb30
void sub_018ebb30(void) { sub_018ea690(); }

void sub_018ea960();
// @baa 0x018ebb40
void sub_018ebb40(void) { sub_018ea960(); }

// @baa 0x018ebb70
void sub_018ebb70(void) { sub_018ea830(); }

// @baa 0x018ebc50
void sub_018ebc50(void) { sub_018ea960(); }

void sub_018eac30();
// @baa 0x018ebda0
void sub_018ebda0(void) { sub_018eac30(); }

struct C_018ebdf0 {
    uint sub_018ebdf0(uint);
};

// @baa 0x018ebdf0
uint C_018ebdf0::sub_018ebdf0(uint param_2)
{
    int param_1 = (int)this;

  return ((uint)(*(byte *)(param_1 + 0xb) ^ *(byte *)(param_1 + 10)) ^
          (uint)*(ushort *)(param_1 + 8) ^ *(uint *)(param_1 + 4) >> 6 ^ *(uint *)(param_1 + 4)) &
         param_2;
}

struct C_018ebe20 {
    uint sub_018ebe20(uint);
};

// @baa 0x018ebe20
uint C_018ebe20::sub_018ebe20(uint param_2)
{
    int param_1 = (int)this;

  return (*(uint *)(param_1 + 4) >> 6 ^ *(uint *)(param_1 + 8) ^ *(uint *)(param_1 + 4)) & param_2;
}

struct C_018ec420 { C_018ec420* sub_018ec420(void); };

// @baa 0x018ec420
C_018ec420* C_018ec420::sub_018ec420(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x018ec430
void sub_018ec430(void) { sub_018ea830(); }

void sub_018ebbe0();
// @baa 0x018ec480
void sub_018ec480(void) { sub_018ebbe0(); }

struct C_018ec4c0 { C_018ec4c0* sub_018ec4c0(void); };

// @baa 0x018ec4c0
C_018ec4c0* C_018ec4c0::sub_018ec4c0(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x018ec4d0
void sub_018ec4d0(void) { sub_018ea960(); }

void sub_018ebcb0();
// @baa 0x018ec590
void sub_018ec590(void) { sub_018ebcb0(); }

void sub_018ec4e0();
// @baa 0x018ed1e0
void sub_018ed1e0(void) { sub_018ec4e0(); }

void sub_018ec680();
// @baa 0x018ed1f0
void sub_018ed1f0(void) { sub_018ec680(); }

void sub_018ed200();
// @baa 0x018edc60
void sub_018edc60(void) { sub_018ed200(); }

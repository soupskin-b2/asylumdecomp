// GFx_1980000.cpp (part 2 of 2): 167 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_01980130();
// @baa 0x01980260
void sub_01980260(void) { sub_01980130(); }

// @baa 0x01981530
void __stdcall sub_01981530(int a0, int a1, int a2) {  }

// @baa 0x01981540
void __stdcall sub_01981540(int a0, int a1, int a2) {  }

// @baa 0x01981550
void sub_01981550(void) {  }

struct C { float sub_01983270(void); };

// @baa 0x01983270
float C::sub_01983270(void) { return *(float*)((char*)this + 24); }

struct C_01983280 { float sub_01983280(void); };

// @baa 0x01983280
float C_01983280::sub_01983280(void) { return *(float*)((char*)this + 20); }

struct C_01983290 { float sub_01983290(void); };

// @baa 0x01983290
float C_01983290::sub_01983290(void) { return *(float*)((char*)this + 16); }

struct C_019832a0 { float sub_019832a0(void); };

// @baa 0x019832a0
float C_019832a0::sub_019832a0(void) { return *(float*)((char*)this + 16); }

void sub_018d3de0();
// @baa 0x019832f0
void sub_019832f0(void) { sub_018d3de0(); }

struct C_01983300 {
    void sub_01983300(int);
};

// @baa 0x01983300
void C_01983300::sub_01983300(int param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)(param_1 + 7) = 0x80;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 0x12);
  if ((*(byte *)(param_2 + 0x13) & 1) == 0) {
    *(byte *)(param_1 + 0x13) = *(byte *)(param_2 + 0x13) & 0xfe;
    *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
    *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
    *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x20);
    *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_2 + 0x1c);
    *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(param_2 + 0x1e);
  }
  return;
}

struct C_01983370 {
    void sub_01983370();
};

// @baa 0x01983370
void C_01983370::sub_01983370(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}

struct C_019833a0 {
    float10 sub_019833a0();
};

// @baa 0x019833a0
float10 C_019833a0::sub_019833a0(void)
{
    int param_1 = (int)this;

  return (float10)*(int *)(param_1 + 0x18);
}

struct C_019833b0 {
    float10 sub_019833b0();
};

// @baa 0x019833b0
float10 C_019833b0::sub_019833b0(void)
{
    int param_1 = (int)this;

  return (float10)*(int *)(param_1 + 0x1c);
}

struct C_019833c0 {
    void sub_019833c0();
};

// @baa 0x019833c0
void C_019833c0::sub_019833c0(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 0x20;
  return;
}

struct C_019833d0 {
    void sub_019833d0();
};

// @baa 0x019833d0
void C_019833d0::sub_019833d0(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xdf;
  return;
}

struct C_019833e0 {
    void sub_019833e0();
};

// @baa 0x019833e0
void C_019833e0::sub_019833e0(void)
{
    int param_1 = (int)this;

  *(undefined2 *)(param_1 + 6) = 0;
  return;
}

struct C_019833f0 {
    void sub_019833f0(undefined2);
};

// @baa 0x019833f0
void C_019833f0::sub_019833f0(undefined2 param_2)
{
    undefined2 * param_1 = (undefined2 *)this;

  *param_1 = param_2;
  return;
}

struct C_01983400 {
    void sub_01983400(short);
};

// @baa 0x01983400
void C_01983400::sub_01983400(short param_2)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) & 0xfff | param_2 << 0xc;
  return;
}

struct C_01983420 {
    void sub_01983420();
};

// @baa 0x01983420
void C_01983420::sub_01983420(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) | 4;
  return;
}

struct C_01983430 {
    void sub_01983430();
};

// @baa 0x01983430
void C_01983430::sub_01983430(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) | 0x4000;
  return;
}

struct C_01983440 {
    void sub_01983440();
};

// @baa 0x01983440
void C_01983440::sub_01983440(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) | 0x2000;
  return;
}

struct C_01983450 {
    void sub_01983450();
};

// @baa 0x01983450
void C_01983450::sub_01983450(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) | 0x1000;
  return;
}

struct C_01983460 {
    void sub_01983460();
};

// @baa 0x01983460
void C_01983460::sub_01983460(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) | 0x800;
  return;
}

struct C_01983470 {
    void sub_01983470();
};

// @baa 0x01983470
void C_01983470::sub_01983470(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) | 0x400;
  return;
}

struct C_01983480 {
    void sub_01983480();
};

// @baa 0x01983480
void C_01983480::sub_01983480(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xfbff;
  return;
}

struct C_01983490 {
    void sub_01983490();
};

// @baa 0x01983490
void C_01983490::sub_01983490(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) | 0x200;
  return;
}

struct C_019834a0 {
    void sub_019834a0();
};

// @baa 0x019834a0
void C_019834a0::sub_019834a0(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) | 0x100;
  return;
}

struct C_019834b0 {
    void sub_019834b0();
};

// @baa 0x019834b0
void C_019834b0::sub_019834b0(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) | 0x80;
  return;
}

struct C_019834c0 {
    void sub_019834c0();
};

// @baa 0x019834c0
void C_019834c0::sub_019834c0(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xff7f;
  return;
}

struct C_019834e0 {
    void sub_019834e0();
};

// @baa 0x019834e0
void C_019834e0::sub_019834e0(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) | 8;
  return;
}

struct C_01983540 {
    void sub_01983540();
};

// @baa 0x01983540
void C_01983540::sub_01983540(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

struct C_01983550 {
    undefined4 sub_01983550();
};

// @baa 0x01983550
undefined4 C_01983550::sub_01983550(void)
{
    int * param_1 = (int *)this;

  if ((*param_1 != 0) && ((uint)param_1[2] < (uint)param_1[3])) {
    return 0;
  }
  return 1;
}

struct C_01983570 {
    void sub_01983570();
};

// @baa 0x01983570
void C_01983570::sub_01983570(void)
{
    int * param_1 = (int *)this;

  if ((*param_1 != 0) && ((uint)param_1[2] < (uint)param_1[3])) {
    param_1[2] = param_1[2] + 1;
  }
  return;
}

struct C_01983660 { int sub_01983660(void); };

// @baa 0x01983660
int C_01983660::sub_01983660(void) { return *(int*)((char*)this + 16); }

struct C_01983670 { int sub_01983670(void); };

// @baa 0x01983670
int C_01983670::sub_01983670(void) { return *(int*)((char*)this + 8); }

struct C_01983680 {
    undefined4 sub_01983680(undefined4 *);
};

// @baa 0x01983680
undefined4 C_01983680::sub_01983680(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = param_1[2];
  return *param_1;
}

struct C_01983690 { void sub_01983690(int a0); };

// @baa 0x01983690
void C_01983690::sub_01983690(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_019836a0 { void sub_019836a0(int a0); };

// @baa 0x019836a0
void C_019836a0::sub_019836a0(int a0) { *(int*)((char*)this + 28) = a0; }

struct C_019836f0 { int sub_019836f0(void); };

// @baa 0x019836f0
int C_019836f0::sub_019836f0(void) { return *(int*)((char*)this + 24); }

struct C_01983700 { void sub_01983700(int a0); };

// @baa 0x01983700
void C_01983700::sub_01983700(int a0) { *(int*)((char*)this + 24) = a0; }

struct C_01983710 {
    undefined2 sub_01983710();
};

// @baa 0x01983710
undefined2 C_01983710::sub_01983710(void)
{
    int param_1 = (int)this;

  return *(undefined2 *)(param_1 + 0x20);
}

struct C_01983720 {
    void sub_01983720(undefined2);
};

// @baa 0x01983720
void C_01983720::sub_01983720(undefined2 param_2)
{
    int param_1 = (int)this;

  *(undefined2 *)(param_1 + 0x20) = param_2;
  return;
}

struct C_01983750 {
    void sub_01983750(undefined1);
};

// @baa 0x01983750
void C_01983750::sub_01983750(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 7) = param_2;
  return;
}

struct C_01983760 {
    int sub_01983760();
};

// @baa 0x01983760
int C_01983760::sub_01983760(void)
{
    int param_1 = (int)this;

  if ('\0' < *(char *)(param_1 + 0x19)) {
    return (int)*(char *)(param_1 + 0x19);
  }
  return 0;
}

struct C_019837a0 { int sub_019837a0(void); };

// @baa 0x019837a0
int C_019837a0::sub_019837a0(void) { return *(int*)((char*)this + 0); }

struct C_019837b0 { void sub_019837b0(int a0); };

// @baa 0x019837b0
void C_019837b0::sub_019837b0(int a0) { *(int*)((char*)this + 0) = a0; }

struct C_019837c0 {
    undefined2 sub_019837c0();
};

// @baa 0x019837c0
undefined2 C_019837c0::sub_019837c0(void)
{
    int param_1 = (int)this;

  return *(undefined2 *)(param_1 + 0x14);
}

struct C_019837d0 {
    void sub_019837d0(undefined2);
};

// @baa 0x019837d0
void C_019837d0::sub_019837d0(undefined2 param_2)
{
    int param_1 = (int)this;

  *(undefined2 *)(param_1 + 0x14) = param_2;
  return;
}

struct C_019837e0 {
    void sub_019837e0();
};

// @baa 0x019837e0
void C_019837e0::sub_019837e0(void)
{
    uint * param_1 = (uint *)this;

  *param_1 = *param_1 & 0xbfffffff;
  return;
}

struct C_019837f0 {
    uint sub_019837f0();
};

// @baa 0x019837f0
uint C_019837f0::sub_019837f0(void)
{
    uint * param_1 = (uint *)this;

  return *param_1 & 0xfffffff;
}

struct C_01983820 {
    uint sub_01983820();
};

// @baa 0x01983820
uint C_01983820::sub_01983820(void)
{
    uint * param_1 = (uint *)this;

  return *param_1 >> 0x1c & 3;
}

struct C_019839f0 { int sub_019839f0(void); };

// @baa 0x019839f0
int C_019839f0::sub_019839f0(void) { return *(int*)((char*)this + 20); }

struct C_01983a00 { int sub_01983a00(void); };

// @baa 0x01983a00
int C_01983a00::sub_01983a00(void) { return *(int*)((char*)this + 40); }

// @baa 0x01983a50
void sub_01983a50(void) {  }

struct C_01983a60 {
    ushort sub_01983a60();
};

// @baa 0x01983a60
ushort C_01983a60::sub_01983a60(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 0x2a) >> 0xc & 1;
}

struct C_01983a70 {
    byte sub_01983a70();
};

// @baa 0x01983a70
byte C_01983a70::sub_01983a70(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x2a) & 1;
}

struct C_01983a80 {
    undefined4 sub_01983a80();
};

// @baa 0x01983a80
undefined4 C_01983a80::sub_01983a80(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  uVar1 = 1;
  if (((*(byte *)(param_1 + 0x2a) & 1) == 0) || (*(int *)(param_1 + 0x20) != 1)) {
    uVar1 = 0;
  }
  return uVar1;
}

struct C_01983aa0 {
    undefined4 sub_01983aa0();
};

// @baa 0x01983aa0
undefined4 C_01983aa0::sub_01983aa0(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  uVar1 = 1;
  if (((*(byte *)(param_1 + 0x2a) & 1) == 0) || (*(int *)(param_1 + 0x20) != 3)) {
    uVar1 = 0;
  }
  return uVar1;
}

struct C_01983ac0 {
    undefined4 sub_01983ac0();
};

// @baa 0x01983ac0
undefined4 C_01983ac0::sub_01983ac0(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  uVar1 = 1;
  if (((*(byte *)(param_1 + 0x2a) & 1) == 0) || (*(int *)(param_1 + 0x20) != 2)) {
    uVar1 = 0;
  }
  return uVar1;
}

void sub_018d7150();
// @baa 0x01983ae0
void sub_01983ae0(void) { sub_018d7150(); }

void sub_018d7170();
// @baa 0x01983af0
void sub_01983af0(void) { sub_018d7170(); }

void sub_0197b4b0();
// @baa 0x01983b00
void sub_01983b00(void) { sub_0197b4b0(); }

// @baa 0x01983b10
void sub_01983b10(void) { sub_0197b4b0(); }

// @baa 0x01983b20
void sub_01983b20(void) { sub_0197b4b0(); }

struct C_01983b30 { int sub_01983b30(void); };

// @baa 0x01983b30
int C_01983b30::sub_01983b30(void) { return *(int*)((char*)this + 28); }

struct C_01983b40 {
    undefined2 sub_01983b40();
};

// @baa 0x01983b40
undefined2 C_01983b40::sub_01983b40(void)
{
    int param_1 = (int)this;

  return *(undefined2 *)(param_1 + 0x24);
}

struct C_01983b50 {
    byte sub_01983b50();
};

// @baa 0x01983b50
byte C_01983b50::sub_01983b50(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x10) & 1;
}

struct C_01983b60 {
    byte sub_01983b60();
};

// @baa 0x01983b60
byte C_01983b60::sub_01983b60(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x10) >> 2 & 1;
}

struct C_01983b70 {
    byte sub_01983b70();
};

// @baa 0x01983b70
byte C_01983b70::sub_01983b70(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x10) >> 3 & 1;
}

struct C_01983b80 {
    void sub_01983b80();
};

// @baa 0x01983b80
void C_01983b80::sub_01983b80(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x14e) = *(byte *)(param_1 + 0x14e) & 0xfc;
  return;
}

struct C_01983b90 {
    bool sub_01983b90();
};

// @baa 0x01983b90
bool C_01983b90::sub_01983b90(void)
{
    int param_1 = (int)this;

  return (*(byte *)(param_1 + 0x14e) & 3) != 0;
}

struct C_01983ba0 {
    byte sub_01983ba0();
};

// @baa 0x01983ba0
byte C_01983ba0::sub_01983ba0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x14e) >> 1 & 1;
}

struct C_01983bb0 { int sub_01983bb0(void); };

// @baa 0x01983bb0
int C_01983bb0::sub_01983bb0(void) { return *(int*)((char*)this + 84); }

struct C_01983bc0 { int sub_01983bc0(void); };

// @baa 0x01983bc0
int C_01983bc0::sub_01983bc0(void) { return *(int*)((char*)this + 64); }

struct C_01983be0 {
    byte sub_01983be0();
};

// @baa 0x01983be0
byte C_01983be0::sub_01983be0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x14d) & 1;
}

struct C_01983bf0 {
    byte sub_01983bf0();
};

// @baa 0x01983bf0
byte C_01983bf0::sub_01983bf0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x14d) >> 4 & 1;
}

struct C_01983c00 { char* sub_01983c00(void); };

// @baa 0x01983c00
char* C_01983c00::sub_01983c00(void) { return (char*)this + 68; }

struct C_01983c10 {
    byte sub_01983c10();
};

// @baa 0x01983c10
byte C_01983c10::sub_01983c10(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x14e) >> 2 & 1;
}

struct C_01983c20 {
    byte sub_01983c20();
};

// @baa 0x01983c20
byte C_01983c20::sub_01983c20(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x14e) >> 3 & 1;
}

struct C_01983c30 {
    void sub_01983c30();
};

// @baa 0x01983c30
void C_01983c30::sub_01983c30(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  return;
}

struct C_01983c40 {
    undefined1 sub_01983c40();
};

// @baa 0x01983c40
undefined1 C_01983c40::sub_01983c40(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x18);
}

// @baa 0x01983c60
void sub_01983c60(void) { sub_018d3de0(); }

struct C_01983d80 {
    void sub_01983d80(uint);
};

// @baa 0x01983d80
void C_01983d80::sub_01983d80(uint param_2)
{
    int param_1 = (int)this;

  if ((param_2 & 0x100) != 0) {
    *(byte *)(param_1 + 0x14e) = *(byte *)(param_1 + 0x14e) | 2;
    return;
  }
  *(byte *)(param_1 + 0x14e) = *(byte *)(param_1 + 0x14e) | 1;
  return;
}

struct C_01983da0 {
    undefined4 sub_01983da0();
};

// @baa 0x01983da0
undefined4 C_01983da0::sub_01983da0(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 100) != 0) &&
     (*(uint *)(param_1 + 0x68) < *(uint *)(*(int *)(param_1 + 100) + 4))) {
    return 0;
  }
  return 1;
}

struct C_01983e10 { int sub_01983e10(void); };

// @baa 0x01983e10
int C_01983e10::sub_01983e10(void) { return *(int*)((char*)this + 276); }

struct C_01983f20 {
    bool sub_01983f20(int);
};

// @baa 0x01983f20
bool C_01983f20::sub_01983f20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 == param_2;
}

struct C_01983f50 {
    int sub_01983f50(int);
};

// @baa 0x01983f50
int C_01983f50::sub_01983f50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

struct C_01983f60 { int sub_01983f60(void); };

// @baa 0x01983f60
int C_01983f60::sub_01983f60(void) { return *(int*)((char*)this + 4); }

struct C_01983f70 { C_01983f70* sub_01983f70(void); };

// @baa 0x01983f70
C_01983f70* C_01983f70::sub_01983f70(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01984020 { C_01984020* sub_01984020(void); };

// @baa 0x01984020
C_01984020* C_01984020::sub_01984020(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01984050 { int sub_01984050(void); };

// @baa 0x01984050
int C_01984050::sub_01984050(void) { return *(int*)((char*)this + 0); }

struct C_01984060 { int sub_01984060(void); };

// @baa 0x01984060
int C_01984060::sub_01984060(void) { return *(int*)((char*)this + 0); }

struct C_01984080 {
    void sub_01984080(undefined4, undefined2);
};

// @baa 0x01984080
void C_01984080::sub_01984080(undefined4 param_2, undefined2 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = param_3;
  return;
}

struct C_019840a0 { int sub_019840a0(void); };

// @baa 0x019840a0
int C_019840a0::sub_019840a0(void) { return *(int*)((char*)this + 0); }

struct C_019840b0 {
    bool sub_019840b0(short);
};

// @baa 0x019840b0
bool C_019840b0::sub_019840b0(short param_2)
{
    int param_1 = (int)this;

  return *(short *)(param_1 + 4) == param_2;
}

struct C_019840d0 { C_019840d0* sub_019840d0(void); };

// @baa 0x019840d0
C_019840d0* C_019840d0::sub_019840d0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01984160 { int sub_01984160(void); };

// @baa 0x01984160
int C_01984160::sub_01984160(void) { return *(int*)((char*)this + 0); }

struct C_01984170 { C_01984170* sub_01984170(void); };

// @baa 0x01984170
C_01984170* C_01984170::sub_01984170(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01984220 { C_01984220* sub_01984220(void); };

// @baa 0x01984220
C_01984220* C_01984220::sub_01984220(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01984290
int sub_01984290(int param_1)
{
  return param_1 * 0x14;
}

struct C_019842a0 {
    int sub_019842a0(int);
};

// @baa 0x019842a0
int C_019842a0::sub_019842a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

struct C_019842e0 { int sub_019842e0(void); };

// @baa 0x019842e0
int C_019842e0::sub_019842e0(void) { return *(int*)((char*)this + 0); }

struct C_019842f0 { int sub_019842f0(void); };

// @baa 0x019842f0
int C_019842f0::sub_019842f0(void) { return *(int*)((char*)this + 0); }

// @baa 0x01984300
int sub_01984300(int a0) { return *(int*)a0; }

struct C_01984370 {
    float10 sub_01984370();
};

// @baa 0x01984370
float10 C_01984370::sub_01984370(void)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(param_1 + 0xc) + 0x18);
}

struct C_01984380 {
    float10 sub_01984380();
};

// @baa 0x01984380
float10 C_01984380::sub_01984380(void)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(param_1 + 0xc) + 0x14);
}

struct C_01984390 {
    float10 sub_01984390();
};

// @baa 0x01984390
float10 C_01984390::sub_01984390(void)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(param_1 + 0xc) + 0x10);
}

struct C_019843c0 {
    undefined4 sub_019843c0();
};

// @baa 0x019843c0
undefined4 C_019843c0::sub_019843c0(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x60) == 0) && (*(int *)(param_1 + 0x6c) == 0)) {
    return 1;
  }
  return 0;
}

struct C_019843e0 {
    undefined4 sub_019843e0();
};

// @baa 0x019843e0
undefined4 C_019843e0::sub_019843e0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x60) != 0 || (*(int *)(iVar1 + 0x6c) != 0)))) {
    return 0;
  }
  return 1;
}

struct C_01984400 {
    bool sub_01984400();
};

// @baa 0x01984400
bool C_01984400::sub_01984400(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == 0;
}

struct C_019844b0 {
    undefined4 sub_019844b0();
};

// @baa 0x019844b0
undefined4 C_019844b0::sub_019844b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(undefined4 *)(*(int *)*param_1 + param_1[2] * 4);
}

struct C_019845b0 { int sub_019845b0(void); };

// @baa 0x019845b0
int C_019845b0::sub_019845b0(void) { return *(int*)((char*)this + 24); }

struct C_01984630 { int sub_01984630(void); };

// @baa 0x01984630
int C_01984630::sub_01984630(void) { return *(int*)((char*)this + 284); }

struct C_01984660 { int sub_01984660(void); };

// @baa 0x01984660
int C_01984660::sub_01984660(void) { return *(int*)((char*)this + 24); }

struct C_01984ea0 {
    undefined4 sub_01984ea0();
};

// @baa 0x01984ea0
undefined4 C_01984ea0::sub_01984ea0(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x11c) != 0) && ((*(byte *)(*(int *)(param_1 + 0x11c) + 100) & 1) == 0)) {
    return 0;
  }
  return 1;
}

struct C_01985320 {
    undefined4 sub_01985320();
};

// @baa 0x01985320
undefined4 C_01985320::sub_01985320(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(undefined4 *)*param_1;
}

int sub_019851d0(...);
// @baa 0x019856e0
void sub_019856e0(int param_1, undefined4 param_2, undefined4 param_3)
{
  sub_019851d0(param_1,*(undefined4 *)(param_1 + 4),param_2,param_3);
  return;
}

int sub_01985280(...);
// @baa 0x01985700
void sub_01985700(int param_1, undefined4 param_2, undefined4 param_3)
{
  sub_01985280(param_1,*(undefined4 *)(param_1 + 4),param_2,param_3);
  return;
}

struct C_01985730 {
    uint sub_01985730(uint);
};

// @baa 0x01985730
uint C_01985730::sub_01985730(uint param_2)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 4) & param_2;
}

void sub_01987a40();
// @baa 0x01987bd0
void sub_01987bd0(void) { sub_01987a40(); }

struct C_01988350 { C_01988350* sub_01988350(void); };

// @baa 0x01988350
C_01988350* C_01988350::sub_01988350(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01988360
void sub_01988360(void) { sub_01987a40(); }

struct C_019885e0 { C_019885e0* sub_019885e0(void); };

// @baa 0x019885e0
C_019885e0* C_019885e0::sub_019885e0(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x019885f0
void sub_019885f0(void) { sub_01987a40(); }

struct C_01988780 { C_01988780* sub_01988780(void); };

// @baa 0x01988780
C_01988780* C_01988780::sub_01988780(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01988790
void sub_01988790(void) { sub_01987a40(); }

struct C_0198a8b0 {
    undefined4 sub_0198a8b0();
};

int sub_01989bb0(void);
// @baa 0x0198a8b0
undefined4 C_0198a8b0::sub_0198a8b0(void)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0x14e) & 3) != 0) {
    sub_01989bb0();
    *(byte *)(param_1 + 0x14e) = *(byte *)(param_1 + 0x14e) & 0xfc;
  }
  return *(undefined4 *)(param_1 + 0x54);
}

struct C_0198a8d0 {
    undefined4 sub_0198a8d0();
};

// @baa 0x0198a8d0
undefined4 C_0198a8d0::sub_0198a8d0(void)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0x14e) & 3) != 0) {
    sub_01989bb0();
    *(byte *)(param_1 + 0x14e) = *(byte *)(param_1 + 0x14e) & 0xfc;
  }
  return *(undefined4 *)(param_1 + 0x40);
}

struct C_0198a970 {
    undefined4 sub_0198a970();
};

// @baa 0x0198a970
undefined4 C_0198a970::sub_0198a970(void)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0x14e) & 3) != 0) {
    sub_01989bb0();
    *(byte *)(param_1 + 0x14e) = *(byte *)(param_1 + 0x14e) & 0xfc;
  }
  return *(undefined4 *)(param_1 + 0x30);
}

struct C_0198a990 {
    undefined1 sub_0198a990();
};

// @baa 0x0198a990
undefined1 C_0198a990::sub_0198a990(void)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0x14e) & 3) != 0) {
    sub_01989bb0();
    *(byte *)(param_1 + 0x14e) = *(byte *)(param_1 + 0x14e) & 0xfc;
    return 1;
  }
  return 0;
}

struct C_0198a9b0 {
    int sub_0198a9b0();
};

int sub_0198a990(void);
// @baa 0x0198a9b0
int C_0198a9b0::sub_0198a9b0(void)
{
    int param_1 = (int)this;

  sub_0198a990();
  return param_1 + 0xf8;
}

struct C_0198c9b0 {
    bool sub_0198c9b0();
};

// @baa 0x0198c9b0
bool C_0198c9b0::sub_0198c9b0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x24) != 0;
}

struct C_0198c9c0 {
    byte sub_0198c9c0();
};

// @baa 0x0198c9c0
byte C_0198c9c0::sub_0198c9c0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 6) >> 2 & 1;
}

struct C_0198c9d0 {
    void sub_0198c9d0();
};

// @baa 0x0198c9d0
void C_0198c9d0::sub_0198c9d0(void)
{
    int param_1 = (int)this;

  *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
  return;
}

// @baa 0x0198c9e0
void sub_0198c9e0(void) {  }

struct C_0198cae0 { int sub_0198cae0(void); };

// @baa 0x0198cae0
int C_0198cae0::sub_0198cae0(void) { return *(int*)((char*)this + 28); }

struct C_0198cb30 {
    void sub_0198cb30(undefined4 *);
};

// @baa 0x0198cb30
void C_0198cb30::sub_0198cb30(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  if ((*(byte *)(param_2 + 0x14) & 1) != 0) {
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 1;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  }
  if ((*(byte *)(param_2 + 0x14) & 2) != 0) {
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 2;
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  }
  if ((*(byte *)(param_2 + 0x14) & 4) != 0) {
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 4;
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  }
  if ((*(byte *)(param_2 + 0x14) & 8) != 0) {
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 8;
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  }
  if ((*(byte *)(param_2 + 0x14) & 0x10) != 0) {
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 0x10;
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  }
  return;
}

struct C_0198cbe0 { int sub_0198cbe0(void); };

// @baa 0x0198cbe0
int C_0198cbe0::sub_0198cbe0(void) { return *(int*)((char*)this + 68); }

struct C_0198cbf0 {
    void sub_0198cbf0();
};

// @baa 0x0198cbf0
void C_0198cbf0::sub_0198cbf0(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) | 8;
  return;
}

struct C_0198cc00 {
    void sub_0198cc00();
};

// @baa 0x0198cc00
void C_0198cc00::sub_0198cc00(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfff7;
  return;
}

struct C_0198cc10 {
    byte sub_0198cc10();
};

// @baa 0x0198cc10
byte C_0198cc10::sub_0198cc10(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 100) >> 3 & 1;
}

struct C_0198cc20 {
    void sub_0198cc20();
};

// @baa 0x0198cc20
void C_0198cc20::sub_0198cc20(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) | 0x10;
  return;
}

struct C_0198cc30 {
    void sub_0198cc30();
};

// @baa 0x0198cc30
void C_0198cc30::sub_0198cc30(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xffef;
  return;
}

struct C_0198cc40 {
    byte sub_0198cc40();
};

// @baa 0x0198cc40
byte C_0198cc40::sub_0198cc40(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 100) >> 4 & 1;
}

struct C_0198cc50 {
    void sub_0198cc50();
};

// @baa 0x0198cc50
void C_0198cc50::sub_0198cc50(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) | 0x20;
  return;
}

struct C_0198cc60 {
    void sub_0198cc60();
};

// @baa 0x0198cc60
void C_0198cc60::sub_0198cc60(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xffdf;
  return;
}

struct C_0198cc70 {
    void sub_0198cc70();
};

// @baa 0x0198cc70
void C_0198cc70::sub_0198cc70(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) | 0x40;
  return;
}

struct C_0198cc80 {
    void sub_0198cc80();
};

// @baa 0x0198cc80
void C_0198cc80::sub_0198cc80(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xffbf;
  return;
}

struct C_0198cc90 {
    byte sub_0198cc90();
};

// @baa 0x0198cc90
byte C_0198cc90::sub_0198cc90(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 100) >> 6 & 1;
}

struct C_0198ccb0 {
    ushort sub_0198ccb0();
};

// @baa 0x0198ccb0
ushort C_0198ccb0::sub_0198ccb0(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 100) >> 8 & 1;
}

// @baa 0x0198ccc0
void sub_0198ccc0(void) { sub_018d3de0(); }

struct C_0198ccd0 { int sub_0198ccd0(void); };

// @baa 0x0198ccd0
int C_0198ccd0::sub_0198ccd0(void) { return *(int*)((char*)this + 32); }

// @baa 0x0198cd40
void sub_0198cd40(void) { sub_018d3de0(); }

struct C_0198cdf0 { C_0198cdf0* sub_0198cdf0(void); };

// @baa 0x0198cdf0
C_0198cdf0* C_0198cdf0::sub_0198cdf0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_0198ce00 { int sub_0198ce00(void); };

// @baa 0x0198ce00
int C_0198ce00::sub_0198ce00(void) { return *(int*)((char*)this + 0); }

struct C_0198ce10 { C_0198ce10* sub_0198ce10(void); };

// @baa 0x0198ce10
C_0198ce10* C_0198ce10::sub_0198ce10(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_0198ce20 { int sub_0198ce20(void); };

// @baa 0x0198ce20
int C_0198ce20::sub_0198ce20(void) { return *(int*)((char*)this + 0); }

struct C_0198cee0 { C_0198cee0* sub_0198cee0(void); };

// @baa 0x0198cee0
C_0198cee0* C_0198cee0::sub_0198cee0(void) { return this; }

struct C_0198cef0 { C_0198cef0* sub_0198cef0(void); };

// @baa 0x0198cef0
C_0198cef0* C_0198cef0::sub_0198cef0(void) { return this; }

struct C_0198cf00 {
    bool sub_0198cf00(short);
};

// @baa 0x0198cf00
bool C_0198cf00::sub_0198cf00(short param_2)
{
    int param_1 = (int)this;

  return *(short *)(param_1 + 0x10) == param_2;
}

struct C_0198cfa0 { int sub_0198cfa0(void); };

// @baa 0x0198cfa0
int C_0198cfa0::sub_0198cfa0(void) { return *(int*)((char*)this + 16); }

struct C_0198d750 {
    void sub_0198d750(undefined4);
};

int sub_0198d6c0(void);
// @baa 0x0198d750
void C_0198d750::sub_0198d750(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x38) = param_2;
  sub_0198d6c0();
  return;
}

struct C_0198f750 {
    undefined1 sub_0198f750();
};

// @baa 0x0198f750
undefined1 C_0198f750::sub_0198f750(void)
{
    undefined1 * param_1 = (undefined1 *)this;

  return *param_1;
}

struct C_0198f760 {
    void sub_0198f760(undefined1);
};

// @baa 0x0198f760
void C_0198f760::sub_0198f760(undefined1 param_2)
{
    undefined1 * param_1 = (undefined1 *)this;

  *param_1 = param_2;
  return;
}

struct C_0198f7c0 {
    void sub_0198f7c0(undefined1 *);
};

// @baa 0x0198f7c0
void C_0198f7c0::sub_0198f7c0(undefined1 * param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 1) = *param_2;
  return;
}

struct C_0198f8b0 {
    void sub_0198f8b0();
};

// @baa 0x0198f8b0
void C_0198f8b0::sub_0198f8b0(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x2d) = 0;
  return;
}

// @baa 0x0198f8c0
void __stdcall sub_0198f8c0(int a0, int a1) {  }

// UnrealEd_04c0000.cpp (part 2 of 2): 92 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_025d4ee4[];
// @baa 0x004c0be0
int sub_004c0be0(void) { return (int)g_025d4ee4; }

extern char g_026641f4[];
// @baa 0x004c0bf0
int sub_004c0bf0(void) { return (int)g_026641f4; }

// @baa 0x004c0c00
void __stdcall sub_004c0c00(int a0, int a1) {  }

struct C {
    void sub_004c0c10(undefined4, undefined4, undefined4);
};

// @baa 0x004c0c10
void C::sub_004c0c10(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x3c) = param_4;
  return;
}

struct C_004c0c20 {
    void sub_004c0c20(undefined4, undefined4, undefined4);
};

// @baa 0x004c0c20
void C_004c0c20::sub_004c0c20(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x40) = param_4;
  return;
}

// @baa 0x004c0c30
void __stdcall sub_004c0c30(int a0, int a1) {  }

// @baa 0x004c1e80
void __stdcall sub_004c1e80(int a0) {  }

// @baa 0x004c1e90
void __stdcall sub_004c1e90(int param_1)
{
  *(char *)(param_1 + 0x20) = 1;
}

extern char g_025d4eec[];
// @baa 0x004c1ea0
int sub_004c1ea0(void) { return (int)g_025d4eec; }

extern char g_02664c14[];
// @baa 0x004c1eb0
int sub_004c1eb0(void) { return (int)g_02664c14; }

struct C_004c1ec0 {
    void sub_004c1ec0(undefined4, int);
};

// @baa 0x004c1ec0
void C_004c1ec0::sub_004c1ec0(undefined4 param_2, int param_3)
{
    int param_1 = (int)this;

  if (param_3 != 0) {
    *(int *)(param_1 + 0x10) = param_3 + 0x1c;
  }
  return;
}

// @baa 0x004c20c0
void __stdcall sub_004c20c0(int a0) {  }

// @baa 0x004c23c0
void __stdcall sub_004c23c0(int a0) {  }

// @baa 0x004c23d0
void __stdcall sub_004c23d0(int param_1)
{
  *(char *)(param_1 + 0x20) = 1;
}

struct C_004c23e0 { int sub_004c23e0(void); };

// @baa 0x004c23e0
int C_004c23e0::sub_004c23e0(void) { return *(int*)((char*)this + 0); }

struct C_004c23f0 {
    int sub_004c23f0();
};

// @baa 0x004c23f0
int C_004c23f0::sub_004c23f0(void)
{
    int * param_1 = (int *)this;

  return *param_1 + -4 + param_1[2] * 4;
}

struct C_004c2400 { int sub_004c2400(void); };

// @baa 0x004c2400
int C_004c2400::sub_004c2400(void) { return *(int*)((char*)this + 0); }

struct C_004c2410 { int sub_004c2410(void); };

// @baa 0x004c2410
int C_004c2410::sub_004c2410(void) { return *(int*)((char*)this + 8); }

struct C_004c2420 {
    int sub_004c2420(int);
};

// @baa 0x004c2420
int C_004c2420::sub_004c2420(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_004c2430 { int sub_004c2430(void); };

// @baa 0x004c2430
int C_004c2430::sub_004c2430(void) { return *(int*)((char*)this + 8); }

struct C_004c2440 {
    int sub_004c2440(int);
};

// @baa 0x004c2440
int C_004c2440::sub_004c2440(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_004c2450 { int sub_004c2450(void); };

// @baa 0x004c2450
int C_004c2450::sub_004c2450(void) { return *(int*)((char*)this + 8); }

struct C_004c2460 {
    int sub_004c2460(int);
};

// @baa 0x004c2460
int C_004c2460::sub_004c2460(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_004c2470 { int sub_004c2470(void); };

// @baa 0x004c2470
int C_004c2470::sub_004c2470(void) { return *(int*)((char*)this + 8); }

struct C_004c2480 {
    int sub_004c2480(int);
};

// @baa 0x004c2480
int C_004c2480::sub_004c2480(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_004c2490 {
    int sub_004c2490(int);
};

// @baa 0x004c2490
int C_004c2490::sub_004c2490(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_004c24a0 { int sub_004c24a0(void); };

// @baa 0x004c24a0
int C_004c24a0::sub_004c24a0(void) { return *(int*)((char*)this + 8); }

struct C_004c24b0 {
    int sub_004c24b0(int);
};

// @baa 0x004c24b0
int C_004c24b0::sub_004c24b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_004c24c0 { int sub_004c24c0(void); };

// @baa 0x004c24c0
int C_004c24c0::sub_004c24c0(void) { return *(int*)((char*)this + 8); }

struct C_004c24d0 {
    int sub_004c24d0(int);
};

// @baa 0x004c24d0
int C_004c24d0::sub_004c24d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_004c24e0 {
    int sub_004c24e0(int);
};

// @baa 0x004c24e0
int C_004c24e0::sub_004c24e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_004c24f0 { int sub_004c24f0(void); };

// @baa 0x004c24f0
int C_004c24f0::sub_004c24f0(void) { return *(int*)((char*)this + 8); }

struct C_004c2500 {
    int sub_004c2500(int);
};

// @baa 0x004c2500
int C_004c2500::sub_004c2500(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_004c2510 {
    void sub_004c2510();
};

int sub_01ab3290(...);
// @baa 0x004c2510
void C_004c2510::sub_004c2510(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_01ab3290(*param_1,param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

struct C_004c2540 { int sub_004c2540(void); };

// @baa 0x004c2540
int C_004c2540::sub_004c2540(void) { return *(int*)((char*)this + 0); }

struct C_004c2550 { int sub_004c2550(void); };

// @baa 0x004c2550
int C_004c2550::sub_004c2550(void) { return *(int*)((char*)this + 8); }

struct C_004c2560 {
    int sub_004c2560(int);
};

// @baa 0x004c2560
int C_004c2560::sub_004c2560(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x004c2850
void sub_004c2850(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x004c2870
void sub_004c2870(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x004c28b0
void sub_004c28b0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x004c28d0
void sub_004c28d0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x004c28f0
void sub_004c28f0(void) {  }

// @baa 0x004c2900
void sub_004c2900(void) {  }

// @baa 0x004c2910
void sub_004c2910(void) {  }

// @baa 0x004c2920
void sub_004c2920(void) {  }

// @baa 0x004c2930
void sub_004c2930(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x004c2950
void sub_004c2950(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x004c2970
void sub_004c2970(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x004c2990
void sub_004c2990(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x004c29b0
void sub_004c29b0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x004c29d0
void sub_004c29d0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x004c29f0
void sub_004c29f0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x004c2a10
void sub_004c2a10(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_004c2a30 {
    undefined4 sub_004c2a30(byte);
};

int sub_00402660(...);
int sub_01ad1610(void);
// @baa 0x004c2a30
undefined4 C_004c2a30::sub_004c2a30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01ad1610();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_004c2a50 {
    undefined4 sub_004c2a50();
};

// @baa 0x004c2a50
undefined4 C_004c2a50::sub_004c2a50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}

struct A_004c2a60 { virtual void sub_004c2c80(); char pad[340]; };

struct B_004c2a60 { virtual void sub_004c2c80(); };

struct C_004c2a60 : A_004c2a60, B_004c2a60 { virtual void sub_004c2c80(); C_004c2a60(); };

C_004c2a60::C_004c2a60() {}

// @baa 0x004c2a60
void C_004c2a60::sub_004c2c80() {}

struct A_004c2a70 { virtual void sub_004bfd20(); char pad[4]; };

struct B_004c2a70 { virtual void sub_004bfd20(); };

struct C_004c2a70 : A_004c2a70, B_004c2a70 { virtual void sub_004bfd20(); C_004c2a70(); };

C_004c2a70::C_004c2a70() {}

// @baa 0x004c2a70
void C_004c2a70::sub_004bfd20() {}

struct A_004c2a80 { virtual void sub_004c2f90(); char pad[448]; };

struct B_004c2a80 { virtual void sub_004c2f90(); };

struct C_004c2a80 : A_004c2a80, B_004c2a80 { virtual void sub_004c2f90(); C_004c2a80(); };

C_004c2a80::C_004c2a80() {}

// @baa 0x004c2a80
void C_004c2a80::sub_004c2f90() {}

struct A_004c2a90 { virtual void sub_004c2f90(); char pad[332]; };

struct B_004c2a90 { virtual void sub_004c2f90(); };

struct C_004c2a90 : A_004c2a90, B_004c2a90 { virtual void sub_004c2f90(); C_004c2a90(); };

C_004c2a90::C_004c2a90() {}

// @baa 0x004c2a90
void C_004c2a90::sub_004c2f90() {}

struct C_004c2aa0 { int sub_004c2aa0(void); };

// @baa 0x004c2aa0
int C_004c2aa0::sub_004c2aa0(void) { return *(int*)((char*)this + 20); }

struct C_004c2ab0 {
    int sub_004c2ab0();
};

// @baa 0x004c2ab0
int C_004c2ab0::sub_004c2ab0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0xc) * 0xc;
}

struct C_004c2ac0 { int sub_004c2ac0(void); };

// @baa 0x004c2ac0
int C_004c2ac0::sub_004c2ac0(void) { return *(int*)((char*)this + 28); }

struct C_004c2ad0 {
    int sub_004c2ad0(int);
};

// @baa 0x004c2ad0
int C_004c2ad0::sub_004c2ad0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x14) + param_2 * 0xc;
}

struct C_004c2c80 {
    undefined4 sub_004c2c80(byte);
};

int sub_004baaf0(void);
// @baa 0x004c2c80
undefined4 C_004c2c80::sub_004c2c80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004baaf0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_004c2f90 {
    undefined4 sub_004c2f90(byte);
};

int sub_004bb000(void);
// @baa 0x004c2f90
undefined4 C_004c2f90::sub_004c2f90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004bb000();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_004c3300 {
    undefined4 sub_004c3300(byte);
};

int sub_004bb360(void);
// @baa 0x004c3300
undefined4 C_004c3300::sub_004c3300(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004bb360();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_004c71e0 {
    undefined4 sub_004c71e0(byte);
};

int sub_004c0b70(void);
// @baa 0x004c71e0
undefined4 C_004c71e0::sub_004c71e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004c0b70();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_004c7370 {
    undefined4 * sub_004c7370(byte);
};

extern undefined4 g_01e52cb0;
// @baa 0x004c7370
undefined4 * C_004c7370::sub_004c7370(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e52cb0);
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct M_004c7e00 { void sub_004c7390(); };

struct C_004c7e00 { char pad[392]; M_004c7e00 m; void sub_004c7e00(); };

// @baa 0x004c7e00
void C_004c7e00::sub_004c7e00() { m.sub_004c7390(); }

// @baa 0x004ca900
void sub_004ca900(void) {  }

// @baa 0x004ca910
void sub_004ca910(void) {  }

// @baa 0x004ca920
void sub_004ca920(void) {  }

// @baa 0x004ca930
void sub_004ca930(void) {  }

struct FFaceData {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004ca940(volatile FFaceData *Other);
};

// @baa 0x004ca940
void FFaceData::sub_004ca940(volatile FFaceData *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004ca970 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004ca970(volatile FFaceData_004ca970 *Other);
};

// @baa 0x004ca970
void FFaceData_004ca970::sub_004ca970(volatile FFaceData_004ca970 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004ca9a0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004ca9a0(volatile FFaceData_004ca9a0 *Other);
};

// @baa 0x004ca9a0
void FFaceData_004ca9a0::sub_004ca9a0(volatile FFaceData_004ca9a0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004ca9d0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004ca9d0(volatile FFaceData_004ca9d0 *Other);
};

// @baa 0x004ca9d0
void FFaceData_004ca9d0::sub_004ca9d0(volatile FFaceData_004ca9d0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004caa00 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004caa00(volatile FFaceData_004caa00 *Other);
};

// @baa 0x004caa00
void FFaceData_004caa00::sub_004caa00(volatile FFaceData_004caa00 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004caa30 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004caa30(volatile FFaceData_004caa30 *Other);
};

// @baa 0x004caa30
void FFaceData_004caa30::sub_004caa30(volatile FFaceData_004caa30 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004caa60 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004caa60(volatile FFaceData_004caa60 *Other);
};

// @baa 0x004caa60
void FFaceData_004caa60::sub_004caa60(volatile FFaceData_004caa60 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004caa90 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004caa90(volatile FFaceData_004caa90 *Other);
};

// @baa 0x004caa90
void FFaceData_004caa90::sub_004caa90(volatile FFaceData_004caa90 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004caae0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004caae0(volatile FFaceData_004caae0 *Other);
};

// @baa 0x004caae0
void FFaceData_004caae0::sub_004caae0(volatile FFaceData_004caae0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004cab10 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004cab10(volatile FFaceData_004cab10 *Other);
};

// @baa 0x004cab10
void FFaceData_004cab10::sub_004cab10(volatile FFaceData_004cab10 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct S_004cab40 { void sub_01ad1610(); };

// @baa 0x004cab40
void sub_004cab40(S_004cab40 *p) { if (p) p->sub_01ad1610(); }

struct C_004cb7b0 {
    void sub_004cb7b0();
};

// @baa 0x004cb7b0
void C_004cb7b0::sub_004cb7b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_004cb7e0 {
    void sub_004cb7e0();
};

// @baa 0x004cb7e0
void C_004cb7e0::sub_004cb7e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 8);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_004cb810 {
    void sub_004cb810();
};

// @baa 0x004cb810
void C_004cb810::sub_004cb810(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 0xc);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_004cb840 {
    void sub_004cb840();
};

// @baa 0x004cb840
void C_004cb840::sub_004cb840(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 8);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_004cd4b0 {
    void sub_004cd4b0();
};

// @baa 0x004cd4b0
void C_004cd4b0::sub_004cd4b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_004cfa20 {
    void sub_004cfa20();
};

// @baa 0x004cfa20
void C_004cfa20::sub_004cfa20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 8);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_004cfe40 {
    undefined4 * sub_004cfe40(byte);
};

// @baa 0x004cfe40
undefined4 * C_004cfe40::sub_004cfe40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 8);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_004cfe80 {
    undefined4 * sub_004cfe80(byte);
};

// @baa 0x004cfe80
undefined4 * C_004cfe80::sub_004cfe80(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 2);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

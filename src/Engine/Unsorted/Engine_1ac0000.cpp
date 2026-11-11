// Engine_1ac0000.cpp (part 1 of 4): 26 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct FFaceData {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ac0000(volatile FFaceData *Other);
};

// @baa 0x01ac0000
void FFaceData::sub_01ac0000(volatile FFaceData *Other)
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

struct FFaceData_01ac00b0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ac00b0(volatile FFaceData_01ac00b0 *Other);
};

// @baa 0x01ac00b0
void FFaceData_01ac00b0::sub_01ac00b0(volatile FFaceData_01ac00b0 *Other)
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

struct FFaceData_01ac00e0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ac00e0(volatile FFaceData_01ac00e0 *Other);
};

// @baa 0x01ac00e0
void FFaceData_01ac00e0::sub_01ac00e0(volatile FFaceData_01ac00e0 *Other)
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

struct C {
    int sub_01ac0410(undefined4, undefined4 *);
    int sub_00414220(int);
};

// @baa 0x01ac0410
int C::sub_01ac0410(undefined4 param_2, undefined4 * param_3)
{
    int param_1 = (int)this;
  ((C *)(this))->sub_00414220(param_2);
  *(undefined4 *)(param_1 + 0xc) = *param_3;
  return param_1;
}

struct C_01ac0530 {
    undefined4 * sub_01ac0530(undefined4 *);
    int sub_01ac02a0(int);
};

// @baa 0x01ac0530
undefined4 * C_01ac0530::sub_01ac0530(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_01ac0530 *)(((char *)this + 4)))->sub_01ac02a0((int)(param_2 + 1));
  return param_1;
}

struct C_01ac05d0 {
    int sub_01ac05d0(int);
    int sub_00414220(int);
};

// @baa 0x01ac05d0
int C_01ac05d0::sub_01ac05d0(int param_2)
{
    int param_1 = (int)this;
  ((C_01ac05d0 *)(this))->sub_00414220(param_2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return param_1;
}

struct C_01ac1ed0 {
    void sub_01ac1ed0();
};

// @baa 0x01ac1ed0
void C_01ac1ed0::sub_01ac1ed0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

extern int g_027ca4f8;
int sub_01ac22b0();
// @baa 0x01ac2ec0
int sub_01ac2ec0() { if (!g_027ca4f8) g_027ca4f8 = sub_01ac22b0(); return g_027ca4f8; }

struct C_01ac3110 {
    void sub_01ac3110();
    int sub_01ad3380(int);
    int sub_01ac6bc0(int, int);
};

// @baa 0x01ac3110
void C_01ac3110::sub_01ac3110(void)
{
    int param_1 = (int)this;
  ((C_01ac3110 *)(((char *)this + 0x3c)))->sub_01ad3380(param_1 + 0x1c);
  ((C_01ac3110 *)(((char *)this + 0xc)))->sub_01ac6bc0(param_1 + 0x1c, param_1 + 0x3c);
  return;
}

struct C_01ac4480 {
    void sub_01ac4480(int);
};

int sub_01ab3290(...);
// @baa 0x01ac4480
void C_01ac4480::sub_01ac4480(int param_2)
{
    int * param_1 = (int *)this;
  if (param_2 != *param_1) {
    *(undefined4 *)(*(int *)(param_2 + 8) + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(*(int *)(param_2 + 4) + 8) = *(undefined4 *)(param_2 + 8);
    sub_01ab3290(param_2,0xc);
    param_1[1] = param_1[1] + -1;
  }
  return;
}

struct C_01ac44b0 {
    void sub_01ac44b0(int);
};

// @baa 0x01ac44b0
void C_01ac44b0::sub_01ac44b0(int param_2)
{
    int * param_1 = (int *)this;
  if (param_2 != *param_1) {
    *(undefined4 *)(*(int *)(param_2 + 8) + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(*(int *)(param_2 + 4) + 8) = *(undefined4 *)(param_2 + 8);
    sub_01ab3290(param_2,0xc);
    param_1[1] = param_1[1] + -1;
  }
  return;
}

extern int g_027ca500;
int sub_01ac60b0();
// @baa 0x01ac61c0
int sub_01ac61c0() { if (!g_027ca500) g_027ca500 = sub_01ac60b0(); return g_027ca500; }

struct C_01ac6430 {
    undefined4 * sub_01ac6430();
    int sub_01ad6e50();
};

// @baa 0x01ac6430
undefined4 * C_01ac6430::sub_01ac6430(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0xffffffff;
  ((C_01ac6430 *)(((char *)this + 4)))->sub_01ad6e50();
  return param_1;
}

struct C_01ac6450 {
    undefined4 * sub_01ac6450(undefined4, undefined4, undefined4, undefined4, undefined4);
    int sub_01ad6e90(int, int, int, int);
};

// @baa 0x01ac6450
undefined4 * C_01ac6450::sub_01ac6450(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = param_2;
  ((C_01ac6450 *)(((char *)this + 4)))->sub_01ad6e90(param_3, param_4, param_5, param_6);
  return param_1;
}

struct M_01ac6480 { void sub_01ad6ef0(); };

struct C_01ac6480 { char pad[4]; M_01ac6480 m; void sub_01ac6480(); };

// @baa 0x01ac6480
void C_01ac6480::sub_01ac6480() { m.sub_01ad6ef0(); }

struct C_01ac65f0 {
    undefined4 * sub_01ac65f0(undefined4 *);
    int sub_004887b0(int);
};

// @baa 0x01ac65f0
undefined4 * C_01ac65f0::sub_01ac65f0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_01ac65f0 *)(((char *)this + 4)))->sub_004887b0((int)(param_2 + 1));
  return param_1;
}

struct C_01ac6610 {
    undefined4 sub_01ac6610(byte);
    int sub_01ad6ef0();
};

int sub_00402660(...);
// @baa 0x01ac6610
undefined4 C_01ac6610::sub_01ac6610(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01ac6610 *)(((char *)this + 4)))->sub_01ad6ef0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct FFaceData_01ac7190 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ac7190(volatile FFaceData_01ac7190 *Other);
};

// @baa 0x01ac7190
void FFaceData_01ac7190::sub_01ac7190(volatile FFaceData_01ac7190 *Other)
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

struct FFaceData_01ac71c0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ac71c0(volatile FFaceData_01ac71c0 *Other);
};

// @baa 0x01ac71c0
void FFaceData_01ac71c0::sub_01ac71c0(volatile FFaceData_01ac71c0 *Other)
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

struct FFaceData_01ac71f0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ac71f0(volatile FFaceData_01ac71f0 *Other);
};

// @baa 0x01ac71f0
void FFaceData_01ac71f0::sub_01ac71f0(volatile FFaceData_01ac71f0 *Other)
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

struct FFaceData_01ac7280 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ac7280(volatile FFaceData_01ac7280 *Other);
};

// @baa 0x01ac7280
void FFaceData_01ac7280::sub_01ac7280(volatile FFaceData_01ac7280 *Other)
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

struct S_01ac80e0 { void sub_01ac7aa0(); };

// @baa 0x01ac80e0
void sub_01ac80e0(S_01ac80e0 *p) { if (p) p->sub_01ac7aa0(); }

struct FxArchiveStoreMemoryNoCopy {
    BYTE sub_01ac8c40(DWORD a, DWORD b);
};

// @baa 0x01ac8c40
BYTE FxArchiveStoreMemoryNoCopy::sub_01ac8c40(DWORD a, DWORD b)
{
    return 0;
}

struct V_01ac8cf0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void g(int);
    void sub_01ac8cf0();
};

// @baa 0x01ac8cf0
void V_01ac8cf0::sub_01ac8cf0() { g(0); }

struct C_01ac8e90 {
    undefined4 sub_01ac8e90();
    int sub_01ab3bf0();
};

// @baa 0x01ac8e90
undefined4 C_01ac8e90::sub_01ac8e90(void)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01ac8e90 *)(((char *)this + 4)))->sub_01ab3bf0();
  return param_1;
}

struct FFaceData_01ac90f0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ac90f0(volatile FFaceData_01ac90f0 *Other);
};

// @baa 0x01ac90f0
void FFaceData_01ac90f0::sub_01ac90f0(volatile FFaceData_01ac90f0 *Other)
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

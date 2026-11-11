// Unknown_1bb0000.cpp (part 2 of 3): 10 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct FFaceData {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01bb2830(volatile FFaceData *Other);
};

// @baa 0x01bb2830
void FFaceData::sub_01bb2830(volatile FFaceData *Other)
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

struct FFaceData_01bb2860 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01bb2860(volatile FFaceData_01bb2860 *Other);
};

// @baa 0x01bb2860
void FFaceData_01bb2860::sub_01bb2860(volatile FFaceData_01bb2860 *Other)
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

struct FFaceData_01bb2890 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01bb2890(volatile FFaceData_01bb2890 *Other);
};

// @baa 0x01bb2890
void FFaceData_01bb2890::sub_01bb2890(volatile FFaceData_01bb2890 *Other)
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

struct FFaceData_01bb28c0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01bb28c0(volatile FFaceData_01bb28c0 *Other);
};

// @baa 0x01bb28c0
void FFaceData_01bb28c0::sub_01bb28c0(volatile FFaceData_01bb28c0 *Other)
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

struct C_01bb2a70 { int a, b, c; C_01bb2a70(); };

// @baa 0x01bb2a70
C_01bb2a70::C_01bb2a70() : a(0), b(0), c(0) {}

struct C {
    int sub_01bb2c90(int);
    int sub_00414220(int);
};

// @baa 0x01bb2c90
int C::sub_01bb2c90(int param_2)
{
    int param_1 = (int)this;
  ((C *)(this))->sub_00414220(param_2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return param_1;
}

struct S_01bb32c0 { void sub_01bb2d40(); };

// @baa 0x01bb32c0
void sub_01bb32c0(S_01bb32c0 *p) { if (p) p->sub_01bb2d40(); }

struct S_01bb3c00 { void sub_01bb3850(); };

// @baa 0x01bb3c00
void sub_01bb3c00(S_01bb3c00 *p) { if (p) p->sub_01bb3850(); }

// @baa 0x01bb74f0
void sub_01bb74f0(int param_1, undefined4 param_2)
{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x44) = param_2;
  }
  return;
}

// @baa 0x01bb7500
void sub_01bb7500(int param_1, undefined4 param_2, undefined4 param_3)
{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x3c) = param_2;
    *(undefined4 *)(param_1 + 0x40) = param_3;
  }
  return;
}

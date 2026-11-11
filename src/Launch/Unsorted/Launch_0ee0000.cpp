// Launch_0ee0000.cpp: 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int sub_00ee5140();
};

int sub_00ed7ab0(void);
// @baa 0x00ee5140
int C::sub_00ee5140(void)
{
    int param_1 = (int)this;

  sub_00ed7ab0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00ee5160 {
    int sub_00ee5160();
};

int sub_00ed7b10(void);
// @baa 0x00ee5160
int C_00ee5160::sub_00ee5160(void)
{
    int param_1 = (int)this;

  sub_00ed7b10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00ee5180 {
    int sub_00ee5180();
};

int sub_00ed7b70(void);
// @baa 0x00ee5180
int C_00ee5180::sub_00ee5180(void)
{
    int param_1 = (int)this;

  sub_00ed7b70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00ee52b0 {
    int sub_00ee52b0();
};

int sub_00ed7bd0(void);
// @baa 0x00ee52b0
int C_00ee52b0::sub_00ee52b0(void)
{
    int param_1 = (int)this;

  sub_00ed7bd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00ee52d0 { void sub_00ee11b0(int); C_00ee52d0 *sub_00ee52d0(int); };

// @baa 0x00ee52d0
C_00ee52d0 *C_00ee52d0::sub_00ee52d0(int a) { sub_00ee11b0(a); return this; }

struct C_00ee52f0 { void sub_00ee1240(int); C_00ee52f0 *sub_00ee52f0(int); };

// @baa 0x00ee52f0
C_00ee52f0 *C_00ee52f0::sub_00ee52f0(int a) { sub_00ee1240(a); return this; }

int sub_00ee1460(...);
int sub_00ee3f00(void);
extern undefined4 g_026ccb90;
// @baa 0x00ee5310
int sub_00ee5310(void)
{
  if (g_026ccb90 == 0) {
    g_026ccb90 = sub_00ee1460(L"Editor");
    sub_00ee3f00();
  }
  return g_026ccb90;
}

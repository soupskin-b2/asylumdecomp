// SpeedTree_1a60000.cpp (part 1 of 3): 8 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { int sub_01a631a0(void); };

// @baa 0x01a631a0
int C::sub_01a631a0(void) { return *(int*)((char*)this + 4); }

// @baa 0x01a631b0
int sub_01a631b0(int a0) { return a0; }

// @baa 0x01a631c0
int sub_01a631c0(int a0) { return a0; }

struct C_01a63680 {
    int sub_01a63680();
};

// @baa 0x01a63680
int C_01a63680::sub_01a63680(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x44) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44)) / 0x2c;
}

struct C_01a63900 {
    undefined4 sub_01a63900(byte);
};

int sub_00402660(...);
int sub_01a60030(void);
// @baa 0x01a63900
undefined4 C_01a63900::sub_01a63900(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a60030();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

void sub_01a6ba70();
// @baa 0x01a6c2e0
void sub_01a6c2e0(void) { sub_01a6ba70(); }

struct C_01a6d030 {
    undefined4 sub_01a6d030(byte);
};

int sub_01a6c2f0(void);
// @baa 0x01a6d030
undefined4 C_01a6d030::sub_01a6d030(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a6c2f0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a6de30 {
    undefined4 sub_01a6de30(byte);
};

int sub_01a61910(...);
int sub_01a6d620(void);
// @baa 0x01a6de30
undefined4 C_01a6de30::sub_01a6de30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a6d620();
  if ((param_2 & 1) != 0) {
    sub_01a61910(param_1);
  }
  return param_1;
}

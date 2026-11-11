// Engine_1ae0000.cpp (part 1 of 2): 10 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01ae5640
void sub_01ae5640(int param_1)
{
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x1000;
  return;
}

// @baa 0x01ae5650
void sub_01ae5650(int param_1)
{
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x1000;
  return;
}

// @baa 0x01ae5660
void sub_01ae5660(int param_1)
{
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x1000;
  return;
}

// @baa 0x01aeddb0
uint sub_01aeddb0(uint param_1)
{
  param_1 = param_1 >> 1;
  if (param_1 == 0) {
    param_1 = 1;
  }
  return param_1;
}

struct C {
    int sub_01aede10(int);
};

// @baa 0x01aede10
int C::sub_01aede10(int param_2)
{
    int param_1 = (int)this;

  return param_1 + param_2 * 0xc;
}

struct C_01aede20 {
    int sub_01aede20(int);
};

// @baa 0x01aede20
int C_01aede20::sub_01aede20(int param_2)
{
    int param_1 = (int)this;

  return param_1 + param_2 * 0xc;
}

struct C_01aede30 {
    int sub_01aede30(int);
};

// @baa 0x01aede30
int C_01aede30::sub_01aede30(int param_2)
{
    int param_1 = (int)this;

  return param_1 + param_2 * 0xc;
}

struct C_01aee0a0 {
    void sub_01aee0a0();
};

// @baa 0x01aee0a0
void C_01aee0a0::sub_01aee0a0(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x1008) = 0;
  *(undefined1 *)(param_1 + 0x2828) = 0;
  *(undefined1 *)(param_1 + 0x2829) = 0;
  *(undefined1 *)(param_1 + 0x2809) = 0;
  *(undefined1 *)(param_1 + 0x280a) = 0;
  *(undefined1 *)(param_1 + 0x280b) = 0;
  *(undefined1 *)(param_1 + 0x280c) = 0;
  *(undefined1 *)(param_1 + 0x2810) = 0;
  *(undefined1 *)(param_1 + 0x2811) = 0;
  *(undefined1 *)(param_1 + 0x2812) = 0;
  *(undefined1 *)(param_1 + 0x2815) = 1;
  *(undefined1 *)(param_1 + 0x2816) = 1;
  *(undefined1 *)(param_1 + 0x2817) = 1;
  *(undefined1 *)(param_1 + 0x2818) = 1;
  *(undefined1 *)(param_1 + 0x2819) = 1;
  *(undefined1 *)(param_1 + 0x281a) = 1;
  *(undefined1 *)(param_1 + 0x281b) = 1;
  *(undefined1 *)(param_1 + 0x281c) = 1;
  *(undefined1 *)(param_1 + 0x281d) = 0;
  *(undefined1 *)(param_1 + 0x281e) = 0;
  *(undefined4 *)(param_1 + 0x2820) = 0x80;
  *(undefined4 *)(param_1 + 0x2824) = 6;
  *(undefined4 *)(param_1 + 0x1000) = 0;
  *(undefined4 *)(param_1 + 0x1004) = 3000;
  *(undefined4 *)(param_1 + 0x282c) = 0;
  return;
}

struct C_01aee180 {
    void sub_01aee180();
};

int sub_00402680(...);
// @baa 0x01aee180
void C_01aee180::sub_01aee180(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x1c) != 0) {
    sub_00402680(*(int *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

struct C_01aee1a0 {
    void sub_01aee1a0();
};

// @baa 0x01aee1a0
void C_01aee1a0::sub_01aee1a0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x1c) != 0) {
    sub_00402680(*(int *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

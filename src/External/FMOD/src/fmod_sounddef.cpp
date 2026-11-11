// fmod_sounddef.cpp: 3 functions
// Placed here by: neighbours 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_017e5070(undefined4 *);
};

// @baa 0x017e5070
undefined4 C::sub_017e5070(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return 0;
}

struct C_017e50a0 {
    undefined4 sub_017e50a0(undefined4 *);
};

// @baa 0x017e50a0
undefined4 C_017e50a0::sub_017e50a0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return 0;
}

struct C_017e5220 {
    void sub_017e5220();
};

// @baa 0x017e5220
void C_017e5220::sub_017e5220(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

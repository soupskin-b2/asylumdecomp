// fmod_eventimpl_simple.cpp: 16 functions
// Placed here by: class 16.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x017ef3e0
int sub_017ef3e0(void) { return 0; }

// @baa 0x017ef3f0
int sub_017ef3f0(void) { return 0; }

// @baa 0x017efb30
int __stdcall sub_017efb30(int a0) { return 0; }

// @baa 0x017efd20
int __stdcall sub_017efd20(int a0, int a1) { return 88; }

// @baa 0x017efd30
int __stdcall sub_017efd30(int a0, int a1) { return 88; }

// @baa 0x017efe50
int __stdcall sub_017efe50(int a0, int a1) { return 88; }

// @baa 0x017efe60
int __stdcall sub_017efe60(int a0, int a1) { return 88; }

// @baa 0x017efe70
int __stdcall sub_017efe70(int a0, int a1) { return 37; }

// @baa 0x017efe80
int __stdcall sub_017efe80(int a0, int a1) { return 37; }

// @baa 0x017efea0
int __stdcall sub_017efea0(int a0, int a1, int a2) { return 37; }

// @baa 0x017f0390
int sub_017f0390(void) { return 0; }

// @baa 0x017f05d0
int __stdcall sub_017f05d0(int a0) { return 0; }

// @baa 0x017f05e0
int __stdcall sub_017f05e0(int a0) { return 0; }

struct C {
    undefined4 sub_017f05f0(undefined4, byte *);
};

// @baa 0x017f05f0
undefined4 C::sub_017f05f0(undefined4 param_2, byte * param_3)
{
    int param_1 = (int)this;

  *param_3 = *(byte *)(param_1 + 0xc) & 1;
  return 0;
}

struct C_017f0600 {
    undefined4 sub_017f0600(undefined4, undefined4 *);
};

// @baa 0x017f0600
undefined4 C_017f0600::sub_017f0600(undefined4 param_2, undefined4 * param_3)
{
    int param_1 = (int)this;

  *param_3 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x44);
  return 0;
}

struct C_017f0690 {
    undefined4 sub_017f0690(undefined4, undefined4, undefined4 *);
};

// @baa 0x017f0690
undefined4 C_017f0690::sub_017f0690(undefined4 param_2, undefined4 param_3, undefined4 * param_4)
{
    int param_1 = (int)this;

  *param_4 = *(undefined4 *)(param_1 + 0x10);
  return 0;
}

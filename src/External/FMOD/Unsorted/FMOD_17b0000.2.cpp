// FMOD_17b0000.cpp (part 2 of 2): 12 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x017bc6a5
int sub_017bc6a5(void) { return 0; }

// @baa 0x017bc6a8
int __stdcall sub_017bc6a8(int a0) { return 0; }

// @baa 0x017bc6ad
int sub_017bc6ad(void) { return 0; }

// @baa 0x017bc6b0
int sub_017bc6b0(void) { return 0; }

// @baa 0x017bc701
int __stdcall sub_017bc701(int a0) { return 0; }

// @baa 0x017bc706
int __stdcall sub_017bc706(int a0) { return 0; }

// @baa 0x017bc70b
int __stdcall sub_017bc70b(int a0, int a1) { return 0; }

// @baa 0x017bc710
int sub_017bc710(void) { return 0; }

struct C {
    undefined4 sub_017bcb6e(undefined4);
};

// @baa 0x017bcb6e
undefined4 C::sub_017bcb6e(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x34) = param_2;
  return 0;
}

// @baa 0x017bcb7a
int __stdcall sub_017bcb7a(int a0) { return 0; }

// @baa 0x017bcb7f
int sub_017bcb7f(void) { return 0; }

// @baa 0x017bcb82
int sub_017bcb82(void) { return 0; }

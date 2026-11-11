// FMod_0e70000.cpp: 8 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x00e705c0
void sub_00e705c0(void) {  }

// @baa 0x00e705e0
void sub_00e705e0(void) {  }

// @baa 0x00e705f0
void sub_00e705f0(void) {  }

// @baa 0x00e70600
float10 sub_00e70600(double param_1)
{
  return (float10)param_1;
}

int __stdcall sub_01763e25(int, int, int, int, int, int);
// @baa 0x00e70610
void sub_00e70610(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  sub_01763e25(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

int __stdcall sub_01766d5c(int);
// @baa 0x00e70640
void sub_00e70640(undefined4 param_1)
{
  sub_01766d5c(param_1);
  return;
}

int __stdcall sub_017cca50(int);
// @baa 0x00e70650
void sub_00e70650(undefined4 param_1)
{
  sub_017cca50(param_1);
  return;
}

extern char g_021122f8[];
struct C { void sub_00e70790(void); };

// @baa 0x00e70790
void C::sub_00e70790(void) { *(int*)((char*)this + 0) = (int)g_021122f8; }

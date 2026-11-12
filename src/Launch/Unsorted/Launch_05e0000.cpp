// Launch_05e0000.cpp: 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x005ed5a0
void sub_005ed5a0(void) {  }

extern char g_01e729c0[];
struct C { void sub_005ee3b0(void); };

// @baa 0x005ee3b0
void C::sub_005ee3b0(void) { *(int*)((char*)this + 0) = (int)g_01e729c0; }

// @baa 0x005ee690
int sub_005ee690(void) { return 0; }

struct C_005ee6a0 { void sub_005ee6a0(void); };

// @baa 0x005ee6a0
void C_005ee6a0::sub_005ee6a0(void) { *(int*)((char*)this + 0) = (int)g_01e729c0; }

struct C_005ee6b0 {
    undefined4 * sub_005ee6b0(byte);
};

int sub_0053dfa0(...);
// @baa 0x005ee6b0
undefined4 * C_005ee6b0::sub_005ee6b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e729c0);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct Sub_005ed660_Type
{
	double f0_0[14];
	double f0_70;
	double f0_78;
	double f0_80;
	double f0_88;
};

// @baa 0x005ed660
void sub_005ed660(Sub_005ed660_Type* v)
{
	v->f0_70 = 0.0;
	v->f0_78 = 0.0;
	v->f0_80 = 0.0;
	v->f0_88 = 0.0;
}

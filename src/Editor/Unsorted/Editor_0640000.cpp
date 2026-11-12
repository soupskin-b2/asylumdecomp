// Editor_0640000.cpp: 15 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_00648e80(byte);
};

int sub_0053dfa0(...);
int sub_00648b60(void);
// @baa 0x00648e80
undefined4 C::sub_00648e80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00648b60();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00649000
void sub_00649000(void) {  }

// @baa 0x00649010
void sub_00649010(void) {  }

struct C_00649020 { C_00649020* sub_00649020(void); };

// @baa 0x00649020
C_00649020* C_00649020::sub_00649020(void) { return this; }

// @baa 0x00649030
void sub_00649030(void) {  }

struct C_00649060 { int sub_00649060(void); };

// @baa 0x00649060
int C_00649060::sub_00649060(void) { return *(int*)((char*)this + 4); }

struct C_00649070 { int sub_00649070(void); };

// @baa 0x00649070
int C_00649070::sub_00649070(void) { return *(int*)((char*)this + 8) - *(int*)((char*)this + 4); }

struct C_00649080 { C_00649080* sub_00649080(void); };

// @baa 0x00649080
C_00649080* C_00649080::sub_00649080(void) { return this; }

struct C_006490b0 { int a, b; C_006490b0(int, int); };

// @baa 0x006490b0
C_006490b0::C_006490b0(int x, int y) : a(x), b(y) {}

struct C_006491e0 {
    undefined4 sub_006491e0(float *);
};

// @baa 0x006491e0
undefined4 C_006491e0::sub_006491e0(float * param_2)
{
    float * param_1 = (float *)this;
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 1;
  }
  return 0;
}

struct C_00649410 { C_00649410* sub_00649410(void); };

// @baa 0x00649410
C_00649410* C_00649410::sub_00649410(void) { return this; }

struct C_00649490 {
    float10 sub_00649490(float *);
};

// @baa 0x00649490
float10 C_00649490::sub_00649490(float * param_2)
{
    float * param_1 = (float *)this;

  return ((float10)*param_2 * (float10)*param_1 +
         (float10)param_2[1] * (float10)param_1[1] + (float10)param_2[2] * (float10)param_1[2]) -
         (float10)param_1[3];
}

struct C_006494b0 {
    float10 sub_006494b0(float *);
};

// @baa 0x006494b0
float10 C_006494b0::sub_006494b0(float * param_2)
{
    float * param_1 = (float *)this;

  return (float10)*param_2 * (float10)*param_1 +
         (float10)param_2[1] * (float10)param_1[1] +
         (float10)param_2[2] * (float10)param_1[2] + (float10)param_2[3] * (float10)param_1[3];
}

struct C_00649570 {
    undefined4 sub_00649570();
};

// @baa 0x00649570
undefined4 C_00649570::sub_00649570(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct S006490f0 {
	float f0;
	float f1;
	S006490f0* sub_006490f0(float a, float b);
};

// @baa 0x006490f0
S006490f0* S006490f0::sub_006490f0(float a, float b)
{
	f0 = a;
	f1 = b;
	return this;
}

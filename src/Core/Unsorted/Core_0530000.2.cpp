// Core_0530000.cpp (part 2 of 2): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

typedef uint size_t;

typedef size_t rsize_t;

extern "C" __declspec(dllimport) int strncpy_s(...);
// @baa 0x0053e080
char * sub_0053e080(char * param_1, char * param_2, rsize_t param_3)
{
  strncpy_s(param_1,param_3,param_2,param_3 - 1);
  return param_1;
}

struct Sub
{
    void sub_00538e70();
};

struct C
{
    void sub_00539ce0(INT Unused);
};

// @baa 0x00539ce0
void C::sub_00539ce0(INT)
{
    ((Sub*)((char*)this - 0x14c))->sub_00538e70();
}

struct Sub_0053b7a0
{
    void sub_00539830();
};

struct C_0053b7a0
{
    void sub_0053b7a0(INT A, INT B);
};

// @baa 0x0053b7a0
void C_0053b7a0::sub_0053b7a0(INT, INT)
{
    ((Sub_0053b7a0*)((char*)this - 0x144))->sub_00539830();
}

extern "C" int __declspec(dllimport) frexp(double Value, int* Exponent);
// @baa 0x0053d1a0
int sub_0053d1a0(float Value, int* Exponent)
{
	return frexp(Value, Exponent);
}

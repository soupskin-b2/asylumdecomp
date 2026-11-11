// CRT_1a50000.cpp (part 1 of 2): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { int sub_01a5dee0(void); };

// @baa 0x01a5dee0
int C::sub_01a5dee0(void) { return *(int*)((char*)this + 0); }

struct C_01a5def0 {
    int sub_01a5def0();
};

// @baa 0x01a5def0
int C_01a5def0::sub_01a5def0(void)
{
    int * param_1 = (int *)this;

  return param_1[1] - *param_1 >> 2;
}

struct C_01a5df00 { int sub_01a5df00(void); };

// @baa 0x01a5df00
int C_01a5df00::sub_01a5df00(void) { return *(int*)((char*)this + 0); }

// @baa 0x01a5e510
void sub_01a5e510(void) {  }

// FAXEntityImport.cpp (part 2 of 2): 4 functions
// Placed here by: neighbours 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    bool sub_018998a0(int *);
};

// @baa 0x018998a0
bool C::sub_018998a0(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 != *param_1;
}

struct C_018998b0 {
    int sub_018998b0();
};

// @baa 0x018998b0
int C_018998b0::sub_018998b0(void)
{
    int * param_1 = (int *)this;
  return *param_1 + 0x10;
}

struct C_018998c0 { int a; C_018998c0(int); };

// @baa 0x018998c0
C_018998c0::C_018998c0(int x) : a(x) {}

struct C_01899970 {
    int v;
    int *sub_01899970(int *a);
};

// @baa 0x01899970
int *C_01899970::sub_01899970(int *a) {
    *a = v;
    return a;
}

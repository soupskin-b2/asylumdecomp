// FAXAnimationExport.cpp (part 2 of 2): 8 functions
// Placed here by: neighbours 8.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    bool sub_018a27a0(int *);
};

// @baa 0x018a27a0
bool C::sub_018a27a0(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 != *param_1;
}

struct C_018a27b0 {
    int sub_018a27b0();
};

// @baa 0x018a27b0
int C_018a27b0::sub_018a27b0(void)
{
    int * param_1 = (int *)this;
  return *param_1 + 0x10;
}

struct C_018a27c0 {
    bool sub_018a27c0(int *);
};

// @baa 0x018a27c0
bool C_018a27c0::sub_018a27c0(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 != *param_1;
}

struct C_018a27d0 {
    int sub_018a27d0();
};

// @baa 0x018a27d0
int C_018a27d0::sub_018a27d0(void)
{
    int * param_1 = (int *)this;
  return *param_1 + 0x10;
}

struct C_018a2860 { int a; C_018a2860(int); };

// @baa 0x018a2860
C_018a2860::C_018a2860(int x) : a(x) {}

struct C_018a2870 { int a; C_018a2870(int); };

// @baa 0x018a2870
C_018a2870::C_018a2870(int x) : a(x) {}

struct C_018a2b30 {
    int v;
    int *sub_018a2b30(int *a);
};

// @baa 0x018a2b30
int *C_018a2b30::sub_018a2b30(int *a) {
    *a = v;
    return a;
}

struct C_018a2b80 {
    int v;
    int *sub_018a2b80(int *a);
};

// @baa 0x018a2b80
int *C_018a2b80::sub_018a2b80(int *a) {
    *a = v;
    return a;
}

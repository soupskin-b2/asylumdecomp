// FAXAnimationImport.cpp (part 2 of 2): 8 functions
// Placed here by: neighbours 8.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C_018ba830 { int a, b, c; C_018ba830(); };

// @baa 0x018ba830
C_018ba830::C_018ba830() : a(0), b(0), c(0) {}

struct C_018ba860 { int a, b, c; C_018ba860(); };

// @baa 0x018ba860
C_018ba860::C_018ba860() : a(0), b(0), c(0) {}

struct C_018ba870 { int a, b, c; C_018ba870(); };

// @baa 0x018ba870
C_018ba870::C_018ba870() : a(0), b(0), c(0) {}

struct C {
    bool sub_018ba880(int *);
};

// @baa 0x018ba880
bool C::sub_018ba880(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 != *param_1;
}

struct C_018ba890 {
    int sub_018ba890();
};

// @baa 0x018ba890
int C_018ba890::sub_018ba890(void)
{
    int * param_1 = (int *)this;
  return *param_1 + 0x10;
}

struct C_018ba900 { int a; C_018ba900(int); };

// @baa 0x018ba900
C_018ba900::C_018ba900(int x) : a(x) {}

struct C_018bad10 {
    int v;
    int *sub_018bad10(int *a);
};

// @baa 0x018bad10
int *C_018bad10::sub_018bad10(int *a) {
    *a = v;
    return a;
}

struct C_018bb080 { void sub_018baeb0(int); void sub_018bb080(); };

// @baa 0x018bb080
void C_018bb080::sub_018bb080() { sub_018baeb0(0); }

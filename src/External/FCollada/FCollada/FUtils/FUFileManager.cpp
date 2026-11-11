// FUFileManager.cpp (part 1 of 3): 9 functions
// Placed here by: neighbours 9.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C_01850870 { int a, b, c; C_01850870(); };

// @baa 0x01850870
C_01850870::C_01850870() : a(0), b(0), c(0) {}

struct C_018508b0 { int a, b, c; C_018508b0(); };

// @baa 0x018508b0
C_018508b0::C_018508b0() : a(0), b(0), c(0) {}

struct C {
    bool sub_01850960(int *);
};

// @baa 0x01850960
bool C::sub_01850960(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 != *param_1;
}

struct C_01850a40 { int a; C_01850a40(int); };

// @baa 0x01850a40
C_01850a40::C_01850a40(int x) : a(x) {}

struct C_01850a50 { int a; C_01850a50(int); };

// @baa 0x01850a50
C_01850a50::C_01850a50(int x) : a(x) {}

struct C_01850c50 {
    int sub_01850c50();
};

// @baa 0x01850c50
int C_01850c50::sub_01850c50(void)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 8) + -4 + *(int *)(param_1 + 4) * 2;
}

struct C_01850d20 {
    int v;
    int *sub_01850d20(int *a);
};

// @baa 0x01850d20
int *C_01850d20::sub_01850d20(int *a) {
    *a = v;
    return a;
}

struct C_01850d30 {
    int v;
    int *sub_01850d30(int *a);
};

// @baa 0x01850d30
int *C_01850d30::sub_01850d30(int *a) {
    *a = v;
    return a;
}

struct C_018510e0 {
    void sub_018510e0(undefined4);
    int sub_01850fa0(int, int);
};

// @baa 0x018510e0
void C_018510e0::sub_018510e0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_018510e0 *)(this))->sub_01850fa0(*(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 4, param_2);
  return;
}

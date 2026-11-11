// FUUri.cpp (part 2 of 2): 3 functions
// Placed here by: neighbours 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01856ec0(undefined4);
    int sub_00ec8050(int, int);
};

// @baa 0x01856ec0
void C::sub_01856ec0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C *)(this))->sub_00ec8050(*(undefined4 *)(param_1 + 8), param_2);
  return;
}

struct C_01857100 {
    void sub_01857100();
    int sub_01856ee0(int);
};

// @baa 0x01857100
void C_01857100::sub_01857100(void)
{
    int param_1 = (int)this;
  ((C_01857100 *)(this))->sub_01856ee0(*(undefined4 *)(param_1 + 8));
  return;
}

struct C_01857150 { void sub_0182f1b0(int); void sub_01857150(); };

// @baa 0x01857150
void C_01857150::sub_01857150() { sub_0182f1b0(0); }

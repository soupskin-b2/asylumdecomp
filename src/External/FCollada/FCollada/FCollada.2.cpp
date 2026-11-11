// FCollada.cpp (part 2 of 3): 3 functions
// Placed here by: neighbours 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_0183e570();
};

// @baa 0x0183e570
undefined4 C::sub_0183e570(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x2c);
}

struct C_0185d9b0 {
    undefined4 sub_0185d9b0();
};

// @baa 0x0185d9b0
undefined4 C_0185d9b0::sub_0185d9b0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x30);
}

struct C_0185dc30 {
    int v;
    int *sub_0185dc30(int *a);
};

// @baa 0x0185dc30
int *C_0185dc30::sub_0185dc30(int *a) {
    *a = v;
    return a;
}

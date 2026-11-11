// FMod_0e80000.cpp: 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x00e85ae0
void sub_00e85ae0(void) {  }

// @baa 0x00e85af0
void sub_00e85af0(void) {  }

// @baa 0x00e85b00
void sub_00e85b00(void) {  }

// @baa 0x00e85b10
undefined8 sub_00e85b10(undefined8 param_1)
{
  return param_1;
}

struct C {
    undefined8 sub_00e85b30();
};

// @baa 0x00e85b30
undefined8 C::sub_00e85b30(void)
{
    int param_1 = (int)this;

  return *(undefined8 *)(param_1 + 0x40);
}

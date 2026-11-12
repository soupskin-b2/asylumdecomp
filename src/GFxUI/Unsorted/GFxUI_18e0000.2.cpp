// GFxUI_18e0000.cpp (part 2 of 2): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int sub_018e0420();
};

// @baa 0x018e0420
int C::sub_018e0420(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0xc) != 0) {
    return *(int *)(param_1 + 0xc) + 0x10;
  }
  return 0;
}


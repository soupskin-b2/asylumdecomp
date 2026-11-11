// fmod_eventimpl_complex.cpp (part 1 of 2): 4 functions
// Placed here by: callers 3, class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_017cec10();
};

// @baa 0x017cec10
undefined4 C::sub_017cec10(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if ((*(int **)(param_1 + 0xb4) != (int *)0x0) && (iVar1 = **(int **)(param_1 + 0xb4), iVar1 != 0))
  {
    return *(undefined4 *)(*(int *)(iVar1 + 0xb0) + 0x3c);
  }
  return *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x3c);
}

struct C_017e5c30 {
    undefined4 sub_017e5c30();
};

// @baa 0x017e5c30
undefined4 C_017e5c30::sub_017e5c30(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x18) != 0) {
    *(int *)(*(int *)(param_1 + 0x18) + 0x60) = param_1;
  }
  return 0;
}

// @baa 0x017f4620
int __stdcall sub_017f4620(int a0) { return 0; }

struct C_017f9cf0 {
    void sub_017f9cf0(undefined4);
};

// @baa 0x017f9cf0
void C_017f9cf0::sub_017f9cf0(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  return;
}

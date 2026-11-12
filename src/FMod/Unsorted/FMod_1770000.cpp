// FMod_1770000.cpp (part 1 of 2): 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_017734d5(undefined4 *);
};

// @baa 0x017734d5
undefined4 C::sub_017734d5(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x98);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_01773795 {
    undefined4 sub_01773795(undefined4 *);
};

// @baa 0x01773795
undefined4 C_01773795::sub_01773795(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x28);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_017739ca {
    undefined4 sub_017739ca(undefined4 *);
};

// @baa 0x017739ca
undefined4 C_017739ca::sub_017739ca(undefined4 * param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x2c);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_0177ab82 {
    undefined4 sub_0177ab82(undefined4 *);
};

// @baa 0x0177ab82
undefined4 C_0177ab82::sub_0177ab82(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x18);
    uVar1 = 0;
  }
  return uVar1;
}

void __stdcall sub_017735e5(INT A, INT B);
struct C_0177369b
{
    void sub_0177369b(INT A);
};

// @baa 0x0177369b
void C_0177369b::sub_0177369b(INT A)
{
    sub_017735e5(A, 1);
}

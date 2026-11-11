// FMOD_17b0000.cpp (part 1 of 2): 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct V_017bc67c {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void g();
};

// @baa 0x017bc67c
void (V_017bc67c::*sub_017bc67c)() = &V_017bc67c::g;

struct C {
    undefined4 sub_017bc681();
};

// @baa 0x017bc681
undefined4 C::sub_017bc681(void)
{
    int param_1 = (int)this;

  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = (int *)(*(int *)(param_1 + 0xc) + 8);
    *piVar1 = *piVar1 + 1;
  }
  return 0;
}

struct C_017bc6b3 {
    undefined4 sub_017bc6b3();
};

// @baa 0x017bc6b3
undefined4 C_017bc6b3::sub_017bc6b3(void)
{
    int param_1 = (int)this;

  int *piVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = (int *)(*(int *)(param_1 + 0xc) + 8);
    *piVar1 = *piVar1 + -1;
  }
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xffffff8f | 0x80;
  return 0;
}

struct C_017bc6e4 {
    undefined4 sub_017bc6e4(byte *);
};

// @baa 0x017bc6e4
undefined4 C_017bc6e4::sub_017bc6e4(byte * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (byte *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = (byte)(*(uint *)(param_1 + 0x24) >> 5) & 1;
    uVar1 = 0;
  }
  return uVar1;
}

// @baa 0x017bcca3
int __stdcall sub_017bcca3(int a, int b, int c, int d)
{
    return 0x32;
}

// @baa 0x017bcca9
int __stdcall sub_017bcca9(int a, int b, int c)
{
    return 0x32;
}

// FMOD_17c0000.cpp (part 1 of 3): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    float sub_017c1a25();
};

float sub_017bc681(void);
// @baa 0x017c1a25
float C::sub_017c1a25()
{
    *reinterpret_cast<float*>(this + 0x50) = 0.0f;
    return sub_017bc681();
}

struct T { int sub_017c81e6(); };

struct S { int sub_017c89ed(int a, int b, int c, int d); };

// @baa 0x017c89ed
int S::sub_017c89ed(int a, int b, int c, int d)
{
  return ((T *)this)->sub_017c81e6();
}

struct C_017c89f5 {
    undefined4 sub_017c89f5(uint, int);
    int sub_017c85f2();
    int sub_017c81e6();
};

// @baa 0x017c89f5
undefined4 C_017c89f5::sub_017c89f5(uint param_2, int param_3)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  if ((param_2 < *(uint *)(param_1 + 0x28)) && (param_2 + param_3 <= *(uint *)(param_1 + 0x28))) {
    ((C_017c89f5 *)(this))->sub_017c85f2();
    *(uint *)(param_1 + 0x30) = param_2;
    *(int *)(param_1 + 0x34) = param_3;
    ((C_017c89f5 *)(this))->sub_017c81e6();
    uVar1 = 0;
  }
  else {
    uVar1 = 0x25;
  }
  return uVar1;
}

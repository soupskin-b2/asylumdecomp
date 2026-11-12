// Engine_0af0000.cpp (part 3 of 3): 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_00afe650(byte);
};

int sub_0053dfa0(...);
int sub_007249d0(void);
// @baa 0x00afe650
undefined4 C::sub_00afe650(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00afe6e0 {
    undefined4 sub_00afe6e0(byte);
};

// @baa 0x00afe6e0
undefined4 C_00afe6e0::sub_00afe6e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00afe8c0 {
    undefined4 sub_00afe8c0(byte);
};

// @baa 0x00afe8c0
undefined4 C_00afe8c0::sub_00afe8c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00afe960 {
    undefined4 sub_00afe960(byte);
};

// @baa 0x00afe960
undefined4 C_00afe960::sub_00afe960(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct sub_00af9cd0_struct
{
    char pad[0x5c];
    int m_arr[128]; // 0x5c

    int* sub_00af9cd0(int Index)
    {
        int x = (Index != 4) ? 0x1c : 0x1a;
        return &m_arr[x * 3];
    }
};

typedef int* (sub_00af9cd0_struct::*MemFn)(int);

// @baa 0x00af9cd0
MemFn g_00af9cd0_ptr = &sub_00af9cd0_struct::sub_00af9cd0;

struct C_00afb8a0 {
    int x0;
    int x4;
    int x8;
    C_00afb8a0* sub_00afb8a0(int A, int B, int C_00afb8a0)
    {
        x0 = A;
        x4 = B;
        x8 = C_00afb8a0;
        return this;
    }
};

// @baa 0x00afb8a0
int call_it(C_00afb8a0* p, int A, int B, int C_00afb8a0)
{
    p->sub_00afb8a0(A, B, C_00afb8a0);
    return A;
}

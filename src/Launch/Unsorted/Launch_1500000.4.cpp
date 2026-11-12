// Launch_1500000.cpp (part 4 of 4): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_015098b0(byte);
};

int sub_0053dfa0(...);
int sub_015097a0(void);
// @baa 0x015098b0
undefined4 C::sub_015098b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_015097a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct S0150dac0
{
    S0150dac0* sub_0150dac0();

    int m_Data[7];
};

// @baa 0x0150dac0
S0150dac0* S0150dac0::sub_0150dac0()
{
    m_Data[0] = 0;
    m_Data[1] = 0;
    m_Data[2] = 0;
    m_Data[3] = 0;
    m_Data[4] = 0;
    m_Data[5] = 0;
    m_Data[6] = 0;
    return this;
}

// Engine_1ab0000.cpp (part 5 of 5): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01abc540
undefined4 sub_01abc540(double param_1, double param_2)
{
  if ((param_1 - param_2 < 1.1920928955078125e-07) && (-1.1920928955078125e-07 < param_1 - param_2))
  {
    return 1;
  }
  return 0;
}

struct C
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C* sub_01ab0330();
};

// @baa 0x01ab0330
C* C::sub_01ab0330()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct Sub
{
    void sub_01ab0490();
};

struct C_01ab0880
{
    INT Value;
    Sub Marker;

    void sub_01ab0880();
};

// @baa 0x01ab0880
void C_01ab0880::sub_01ab0880()
{
    Value = 0;
    ((Sub*)((char*)this + 4))->sub_01ab0490();
}

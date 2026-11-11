// GFx_1920000.cpp (part 5 of 5): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_0192aa70(float);
};

// @baa 0x0192aa70
void C::sub_0192aa70(float param_2)
{
    int param_1 = (int)this;

  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 4) + param_2;
  return;
}

struct C_0192aef0
{
    INT pad_00;
    INT pad_04;
    INT pad_08;
    INT pad_0c;
    INT pad_10;
    INT pad_14;
    INT pad_18;
    INT pad_1c;
    INT pad_20;
    INT pad_24;
    INT pad_28;
    INT pad_2c;
    INT pad_30;
    INT pad_34;
    INT pad_38;
    INT pad_3c;
    INT pad_40;
    INT pad_44;
    INT Value;

    INT* sub_0192aef0(INT* Out);
};

// @baa 0x0192aef0
INT* C_0192aef0::sub_0192aef0(INT* Out)
{
    *Out = Value;
    return Out;
}

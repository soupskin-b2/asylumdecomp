// GFx_1910000.cpp (part 5 of 5): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_0191f8a0(float *, float *);
};

// @baa 0x0191f8a0
void C::sub_0191f8a0(float * param_2, float * param_3)
{
    int param_1 = (int)this;

  *param_2 = (float)*(int *)(param_1 + 0xc) * *(float *)(param_1 + 0x24);
  *param_3 = (float)*(int *)(param_1 + 0x10) * *(float *)(param_1 + 0x24);
  return;
}

// GFx: forwards a call to a virtual of an embedded interface object.
struct GFxInterface
{
    virtual void Func00();
    virtual void Func04();
    virtual void Func08();
    virtual void Func0C();
    virtual void Func10();
    virtual void Func14();
    virtual void Func18();
    virtual void Func1C();
    virtual void Func20();
    virtual void Func24();
    virtual void Func28();
    virtual void Func2C();
    virtual void Func30();
    virtual void Func34();
    virtual void Func38();
    virtual void Func3C();
    virtual void Func40();
    virtual void Func44();
    virtual void Func48(void* Param);
};

struct GFxInterfaceOwner
{
    char         Header[0x10];
    GFxInterface Interface;

    void sub_0191ac00(void* Param);
};

// @baa 0x0191ac00
void GFxInterfaceOwner::sub_0191ac00(void* Param)
{
    Interface.Func48(Param);
}

struct C_01914540
{
    INT pad_00;
    INT pad_04;
    INT pad_08;
    INT pad_0c;
    INT pad_10;
    INT pad_14;
    INT pad_18;
    INT pad_1c;
    INT Value;

    INT* sub_01914540(INT* Out);
};

// @baa 0x01914540
INT* C_01914540::sub_01914540(INT* Out)
{
    *Out = Value;
    return Out;
}

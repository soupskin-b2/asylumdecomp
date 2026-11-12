// GFx_18e0000.cpp (part 8 of 8): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_018eb110(float *);
};

// @baa 0x018eb110
void C::sub_018eb110(float * param_2)
{
    int param_1 = (int)this;

  *param_2 = (float)*(int *)(param_1 + 8);
  param_2[1] = (float)*(int *)(param_1 + 0xc);
  return;
}

// GFx: returns a 32-bit colour held by the object (a class with a constructor: returned through a hidden pointer).
struct GColor
{
    unsigned int Raw;

    GColor() {}
    GColor(const GColor& Other) : Raw(Other.Raw) {}
};

struct GFxColoredItem
{
    char   Header[0x40];
    GColor Color;

    GColor sub_018e9ec0() const;
};

// @baa 0x018e9ec0
GColor GFxColoredItem::sub_018e9ec0() const
{
    return Color;
}

struct C_018e8b70
{
    char pad_00[0x9e0];
    float Value;

    void sub_018e8b70(float In);
};

// @baa 0x018e8b70
void C_018e8b70::sub_018e8b70(float In)
{
    Value = In;
}

struct C_018e8250
{
    INT Value_00;
    BYTE Flag_04;

    C_018e8250* sub_018e8250(INT Value);
};

// @baa 0x018e8250
C_018e8250* C_018e8250::sub_018e8250(INT Value)
{
    Value_00 = Value;
    Flag_04 = 0;
    return this;
}

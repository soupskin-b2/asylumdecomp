// GFx_1910000.cpp (part 5 of 5): 21 functions
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

// GFx_1910000.cpp
struct Node01912570_;
struct Node01912570_
{
    int sub_019729b0(Node01912570_* Other, int Flags);
};

struct Outer01912570_
{
    unsigned char _pad[0x3c];
    Node01912570_ Node;

    Node01912570_* sub_01912570(Node01912570_* Other);
};

// @baa 0x01912570
Node01912570_* Outer01912570_::sub_01912570(Node01912570_* Other)
{
    Other->sub_019729b0(&this->Node, 0);
    return Other;
}

struct C_019143b0
{
    float First;
    float Second;

    void sub_019143b0(float Value);
};

// @baa 0x019143b0
void C_019143b0::sub_019143b0(float Value)
{
    Second = Value;
    First = Value;
}

struct C_0191f890
{
    UINT pad_00;
    UINT Left;
    UINT Right;

    INT sub_0191f890();
};

// @baa 0x0191f890
INT C_0191f890::sub_0191f890()
{
    return Left >= Right;
}

struct C_0191edf0
{
    char pad_00[0x20];
    INT Value;

    BYTE sub_0191edf0(INT Unused);
};

// @baa 0x0191edf0
BYTE C_0191edf0::sub_0191edf0(INT)
{
    Value = 0x1003;
    return 0;
}

// GFx_1910000.cpp (part 2 of 5)
struct FxChar_01914590 {
    void operator=(const FxChar_01914590& src);
};

struct Glyph_019154d0 {
    char pad[0x9c];
    Glyph_019154d0* field_09c;      // +0x9c: pointer to a glyph record
    void sub_019154d0(const FxChar_01914590& src);
};

struct GlyphRecord {
    char pad[0x120];
    FxChar_01914590 ch;             // +0x120
};

// @baa 0x019154d0
void Glyph_019154d0::sub_019154d0(const FxChar_01914590& src)
{
    if (field_09c)
        ((GlyphRecord*)field_09c)->ch = src;
}

// Deprecated tag handler (tag 1004, DefineGradientMapLoader), table at 0x2600084.
int sub_0191a7f0(int ObjectOffset, const char* Message);
// @baa 0x0191b7a0
void __stdcall sub_0191b7a0(int ObjectOffset, int tag)
{
    sub_0191a7f0(ObjectOffset + 0x1c, "Deprecated tag 1004 - DefineGradientMapLoader encountered, ignored\n");
}

struct C_01914060
{
    INT Value_00;
    BYTE Flag_04;
    BYTE Flag_05;

    C_01914060* sub_01914060();
};

// @baa 0x01914060
C_01914060* C_01914060::sub_01914060()
{
    Value_00 = 0;
    Flag_04 = 0;
    Flag_05 = 0;
    return this;
}

struct Sub
{
    void sub_01988220(INT A, INT B);
};

struct C_01914600
{
    char pad_00[0x10];
    Sub* Object;

    void sub_01914600();
};

// @baa 0x01914600
void C_01914600::sub_01914600()
{
    Object->sub_01988220(0, 0);
}

struct C_019137e0
{
    BYTE Type;
    char pad_01[3];
    INT Value_04;

    C_019137e0* sub_019137e0(INT Value);
};

// @baa 0x019137e0
C_019137e0* C_019137e0::sub_019137e0(INT Value)
{
    Type = 4;
    Value_04 = Value;
    return this;
}

// @baa 0x0191a060
INT __cdecl sub_0191a060(INT A, INT B)
{
    return A < B ? A : B;
}

// @baa 0x0191fdf0
INT __stdcall sub_0191fdf0(INT* Out)
{
    *Out = 0;
    return 0;
}

// @baa 0x0191fe00
INT __stdcall sub_0191fe00(INT* Out)
{
    *Out = 0;
    return 0;
}

struct Sub_01910660
{
    void sub_0190f6f0();
};

struct C_01910660
{
    void sub_01910660(INT Unused);
};

// @baa 0x01910660
void C_01910660::sub_01910660(INT)
{
    ((Sub_01910660*)((char*)this - 0xd4))->sub_0190f6f0();
}

struct Sub_01912420
{
    char pad_00[8];
    INT Value;

    void sub_01971e40();
};

struct C_01912420
{
    Sub_01912420* Object;

    void sub_01912420();
};

// @baa 0x01912420
void C_01912420::sub_01912420()
{
    if (Object->Value == 0)
        Object->sub_01971e40();
}

struct C_01913710
{
    BYTE Flags;

    C_01913710* sub_01913710(BYTE In);
};

// @baa 0x01913710
C_01913710* C_01913710::sub_01913710(BYTE In)
{
    Flags = In | 0x80;
    return this;
}

struct C_01914fc0
{
    float Value_00;
    float Value_04;

    C_01914fc0* sub_01914fc0(float In);
};

// @baa 0x01914fc0
C_01914fc0* C_01914fc0::sub_01914fc0(float In)
{
    Value_04 = In;
    Value_00 = In;
    return this;
}

// @baa 0x01915060
DWORD sub_01915060(DWORD InValue, DWORD InMin, DWORD InMax)
{
	if (InValue >= InMax)
	{
		InValue = InMax;
	}
	if (InValue < InMin)
	{
		InValue = InMin;
	}
	return InValue;
}

struct F01971850
{
    void *field_00;
    void *field_04;
    void *field_08;
    int field_0c;
};

F01971850 * __stdcall sub_01971850(F01971850 *);
// @baa 0x01913790
 /* 0x01971850 */
F01971850 ** __stdcall sub_01913790(F01971850 **Out, F01971850 *Self)
{
    F01971850 *Object = sub_01971850(Self);
    ++Object->field_0c;
    *Out = Object;
    return Out;
}

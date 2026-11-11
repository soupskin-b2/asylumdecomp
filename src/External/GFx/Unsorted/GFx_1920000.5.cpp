// GFx_1920000.cpp (part 5 of 5): 4 functions
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

// GFx (Flash) runtime: minimal layout for the object this method belongs to.
// GFxShapeCharacterDef's vtable (023f5b24) holds this function at slot 12.
struct GFxShapeCharacterDef_
{
	char pad[0x10]; // includes the vtable pointer

	struct GFxMember_01927190
	{
		void sub_01927190(int InParam, float InValue);
	} m01927190;

	void sub_01928e70(int Arg1, float Arg2);
};

// @baa 0x01928e70
void GFxShapeCharacterDef_::sub_01928e70(int Arg1, float Arg2)
{
	m01927190.sub_01927190(Arg1, Arg2);
}

// External/GFx/Unsorted/GFx_1920000.cpp
// The subobject of GFxConstShapeCharacterDef at offset 0x10; owns the
// character advance bookkeeping.
struct GFxConstShapeCharacterBase {
    void sub_01926fa0(int a, float b);
};

// GFxConstShapeCharacterDef: 16 bytes of prefix (its vtable pointer), then
// the character base at offset 0x10.
struct GFxConstShapeCharacterDef {
    char Prefix[0x10];
    GFxConstShapeCharacterBase Base;

    // vtable slot 12: forwards to the subobject's method.
    void sub_01928ec0(int a, float b) ;
};

// @baa 0x01928ec0
// GFxConstShapeCharacterDef::sub_01928ec0
void GFxConstShapeCharacterDef::sub_01928ec0(int a, float b)
{
    Base.sub_01926fa0(a, b);
}

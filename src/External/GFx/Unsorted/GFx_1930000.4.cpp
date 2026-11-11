// GFx_1930000.cpp (part 4 of 4): 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void __stdcall sub_018d7170(int Obj);
// @baa 0x0193afd0
void __cdecl sub_0193afd0(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x0193b050
void __cdecl sub_0193b050(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x0193fb00
INT __stdcall sub_0193fb00(INT* Object)
{
    return *(WORD*)(*Object);
}

extern void __stdcall sub_018d7150(int Value);
// @baa 0x01932b80
void sub_01932b80(int In)
{
	sub_018d7150(In * 28);
}

struct S0193ebf0
{
    char pad0[0x2c];
    void* sub_0193ebf0_field;
    void sub_0193ebf0();
    void sub_018d3de0();
};

void __stdcall sub_018d7170(void* arg);
// @baa 0x0193ebf0
void S0193ebf0::sub_0193ebf0()
{
    if (this->sub_0193ebf0_field)
        sub_018d7170(this->sub_0193ebf0_field);
    this->sub_018d3de0();
}

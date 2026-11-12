// Engine_0650000.cpp (part 7 of 9): 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct UDirectionalLightComponent {
    int GetLightType();
};

// @baa 0x00650100
int UDirectionalLightComponent::GetLightType()
{ return 2; }

struct Node {
	Node* Next;
	Node* Data;

	Node* sub_00651400(Node* A, Node* B);
};

// @baa 0x00651400
Node* Node::sub_00651400(Node* A, Node* B)
{
	Next = A;
	Data = A->Next;
	A->Next = B->Next;
	return this;
}

// Global constant the compiler inlines as the immediate address stored into
// Field_00 (the disassembler surfaces it as the symbol g_01ebc874).
extern int g_01ebc874;
struct C_006568c0
{
    int  Field_00; // set to the address of g_01ebc874
    int  Field_04;
    int  Field_08; // cleared
    int  Field_0C; // cleared
    volatile int Field_10; // low bit cleared (0xfffffffe)
    int  Field_14; // cleared

    // Initializer: clears the state fields, strips the low flag bit from
    // Field_10 and points Field_00 at g_01ebc874. Returns this.
    C_006568c0* sub_006568c0()
    {
        Field_08 = 0;
        Field_0C = 0;
        Field_10 &= 0xfffffffe;
        Field_00 = (int)&g_01ebc874;
        Field_14 = 0;
        return this;
    }
};

// @baa 0x006568c0
// Kept so the member is emitted (it is otherwise dropped as unused).
void g_006568c0_call(C_006568c0* Object)
{
    Object->sub_006568c0();
}

struct C
{
    WORD pad_00;
    WORD pad_02;
    WORD field_04;

    INT sub_0065b170();
};

// @baa 0x0065b170
INT C::sub_0065b170()
{
    return field_04 > 0;
}

struct C_006502e0
{
    char pad_00[0x4];
    WORD First;
    char pad_6[0x4];
    WORD Second;

    C_006502e0* sub_006502e0();
};

// @baa 0x006502e0
C_006502e0* C_006502e0::sub_006502e0()
{
    First = 0;
    Second = 0;
    return this;
}

struct C_006519f0
{
    char pad_0[0xc];
    INT Value_c;
    INT Value_10;
    INT Value_14;

    C_006519f0* sub_006519f0();
};

// @baa 0x006519f0
C_006519f0* C_006519f0::sub_006519f0()
{
    Value_c = 0;
    Value_10 = 0;
    Value_14 = 0;
    return this;
}

struct C_00651a00
{
    char pad_0[0xc];
    INT Value_c;
    INT Value_10;
    INT Value_14;

    C_00651a00* sub_00651a00();
};

// @baa 0x00651a00
C_00651a00* C_00651a00::sub_00651a00()
{
    Value_c = 0;
    Value_10 = 0;
    Value_14 = 0;
    return this;
}
